using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using UnityEngine;

/// <summary>Actual Unity Player integration checks, opt-in via --recovery-test.</summary>
public static class RecoveredPlaySmoke
{
    [Serializable] private class Report { public bool passed; public string unityVersion; public string error; public List<string> checks = new List<string>(); }
    private static readonly Report report = new Report();
    private static bool failed;
    private static void Check(bool condition, string name)
    {
        if (!condition) throw new InvalidOperationException(name);
        report.checks.Add(name); Debug.Log("RECOVERY_CHECK_PASS: " + name);
    }
    public static IEnumerator Run(RecoveredGameFlow flow)
    {
        var routine = Checks(flow);
        while (true)
        {
            bool moved;
            try { moved = routine.MoveNext(); }
            catch (Exception exception) { report.error = exception.ToString(); failed = true; break; }
            if (!moved) break;
            yield return routine.Current;
        }
        report.passed = !failed; report.unityVersion = Application.unityVersion;
        string path = Path.Combine(Application.persistentDataPath, "test-results.json");
        string[] args = Environment.GetCommandLineArgs();
        int index = Array.IndexOf(args,"--report");
        if (index >= 0 && index + 1 < args.Length) path = args[index+1];
        Directory.CreateDirectory(Path.GetDirectoryName(path));
        File.WriteAllText(path,JsonUtility.ToJson(report,true));
        Debug.Log("RECOVERY_SMOKE_RESULT: " + JsonUtility.ToJson(report));
        if (Array.IndexOf(args,"--keep-open") < 0) Application.Quit(failed ? 1 : 0);
    }
    private static IEnumerator Checks(RecoveredGameFlow flow)
    {
        yield return null;
        ResetForSmoke(flow);
        flow.BeginGame(false);
        yield return null;
        var game = flow.Game;
        Check(game.RecoveredCurrent && game.RecoveredCurrent.GetComponent<FruitItem>()._sprite.sprite, "Native prefab and actual fruit sprite loaded");
        var a = game.CreateFruitItem(0,new Vector3(-.35f,-3,0)).GetComponent<FruitItem>();
        var b = game.CreateFruitItem(0,new Vector3(.35f,-3,0)).GetComponent<FruitItem>();
        var flags = BindingFlags.Instance | BindingFlags.NonPublic;
        var canMerge = typeof(FruitItem).GetMethod("CanMerge",flags);
        var tier = typeof(FruitItem).GetField("m_FruitType",flags);
        var merged = typeof(FruitItem).GetField("IsMerged",flags);
        int cases = 0;
        for(int i=0;i<11;i++) for(int j=0;j<11;j++) for(int m=0;m<2;m++) for(int n=0;n<2;n++)
        {
            tier.SetValue(a,(FruitType)i); tier.SetValue(b,(FruitType)j);
            merged.SetValue(a,m==1); merged.SetValue(b,n==1);
            CheckCase((bool)canMerge.Invoke(a,new object[]{b}) == (i==j && m==0 && n==0)); cases++;
        }
        tier.SetValue(a,FruitType.Fruit1); tier.SetValue(b,FruitType.Fruit1); merged.SetValue(a,false); merged.SetValue(b,false);
        Check(cases==484,"484 C# CanMerge cases match ARM64-verified predicate");
        a.ReleaseDown(); b.ReleaseDown();
        yield return new WaitForSeconds(1f);
        Check(flow.Profile.score==1,"Real Physics2D collision merges two tier-1 fruits and awards prefab score 1");
        Check(Array.Exists(game.RecoveredFruits,f => f.FruitType==FruitType.Fruit2 && !f.RecoveredMerged),"Collision creates actual tier-2 prefab");
        game.SaveRecoveredNow();
        string board = flow.ReadBoard();
        Check(board.Contains("Fruits") && board.Contains("FruitType"),"Board serialization contains native field names");
        game.RestoreRecoveredBoard(); yield return null;
        Check(Array.Exists(game.RecoveredFruits,f => f.FruitType==FruitType.Fruit2 && !f.RecoveredMerged),"Saved board restores native fruit prefabs");
        int existingCount=game.RecoveredFruits.Length;
        flow.GoHome(); flow.BeginGame(true); yield return null;
        Check(game.RecoveredFruits.Length==existingCount,"Home and continue preserve one board without duplicating saved fruit");
        flow.SelectSkin("ChefFruit");
        Check(game.RecoveredCurrent.GetComponent<FruitItem>()._sprite.sprite == RecoveredGameFlow.FruitSprite("ChefFruit",(int)game.RecoveredCurrent.GetComponent<FruitItem>().FruitType),"Skin switch updates actual live sprite");
        game.DoToolClean(); yield return null;
        Check(!game.CanClean(),"Clean removes dynamic fruits in the first two tiers");
        var toolTarget = game.CreateFruitItem(3,new Vector3(0,-3,0)).GetComponent<FruitItem>(); toolTarget.ReleaseDown();
        bool paid=false; game.DoToolUpgrade(()=>paid=true); game.RecoveredSelectToolTarget(toolTarget); yield return null;
        Check(paid && Array.Exists(game.RecoveredFruits,f=>f.FruitType==FruitType.Fruit5),"Upgrade selection replaces one fruit with its successor");
        var bomb = Array.Find(game.RecoveredFruits,f=>f.FruitType==FruitType.Fruit5);
        game.DoToolBomb(null); game.RecoveredSelectToolTarget(bomb); yield return null;
        Check(!Array.Exists(game.RecoveredFruits,f=>f.FruitType==FruitType.Fruit5),"Bomb removes selected fruit");
        flow.Pause(); Check(Time.timeScale==0 && !flow.IsPlaying,"Pause stops gameplay");
        flow.Resume(); Check(Time.timeScale==1 && flow.IsPlaying,"Resume restarts gameplay");
        var danger = game.CreateFruitItem(2,new Vector3(4,8.5f,0)).GetComponent<FruitItem>(); danger.ReleaseDown(); danger._rigidbody2D.gravityScale=0;
        yield return new WaitForSecondsRealtime(4.2f);
        Check(game.StartedFinishGame && Time.timeScale==0,"Native 3.5-second danger threshold reaches game over");
        flow.Revive(); yield return null;
        Check(!game.StartedFinishGame && Time.timeScale==1 && game.RecoveredCurrent,"Revive clears high fruit and creates next fruit");
        flow.BeginGame(false); yield return null;
        Check(flow.Profile.score==0 && game.RecoveredFruits.Length==1,"Restart clears board and run score");
        var maximumA=game.CreateFruitItem(10,new Vector3(-1,-3,0)).GetComponent<FruitItem>();
        var maximumB=game.CreateFruitItem(10,new Vector3(1,-3,0)).GetComponent<FruitItem>();
        typeof(FruitItem).GetMethod("Merge",flags).Invoke(maximumA,new object[]{maximumB}); yield return null;
        Check(!Array.Exists(game.RecoveredFruits,f=>f.FruitType==FruitType.Fruit11),"Two maximum-tier fruits disappear without out-of-range successor");
        int[] nativeScores={1,3,6,10,15,21,27,36,42,48};
        for(int current=0;current<10;current++)
        {
            flow.BeginGame(false); yield return null;
            var left=game.CreateFruitItem(current,new Vector3(-1,-3,0)).GetComponent<FruitItem>();
            var right=game.CreateFruitItem(current,new Vector3(1,-3,0)).GetComponent<FruitItem>();
            typeof(FruitItem).GetMethod("Merge",flags).Invoke(left,new object[]{right}); yield return null;
            CheckCase(flow.Profile.score==nativeScores[current]);
        }
        Check(true,"All ten tier transitions award exact recovered prefab scores");
        flow.GoHome(); flow.OpenRooms(); yield return null;
        flow.DeveloperUnlocks=true;
        int before=flow.Profile.built[flow.Profile.roomIndex];
        Check(flow.BuyRoomItem() && flow.Profile.built[flow.Profile.roomIndex]==before+1,"Room purchase advances real config item list");
        if (!Application.isBatchMode) { Capture("room"); yield return new WaitForSecondsRealtime(.4f); }
        flow.SaveProfile(); Check(flow.Profile.tickets>=0,"Profile save and ticket balance remain valid");
        Check(flow.ClaimDaily() && flow.Profile.tools[1]==1,"Daily day-1 reward grants original configured bomb tool");
        Check(!flow.ClaimDaily(),"Same-day reward cannot be claimed twice");
        int coins=flow.Profile.coins;
        for(int i=0;i<40;i++) flow.RecordTaskFruit(2);
        Check(flow.ClaimTask() && flow.Profile.coins==coins+20 && flow.Profile.taskSkinProgress==5,"Original task target and configured coin/skin rewards apply");
        flow.GoHome();
        if (!Application.isBatchMode) { Capture("home"); yield return new WaitForSecondsRealtime(.4f); }
        flow.SelectSkin("Watermelon"); flow.BeginGame(false);
        for(int i=0;i<7;i++) { game.RecoveredDropAt((i%3-1)*2); yield return new WaitForSeconds(.65f); }
        yield return new WaitForSeconds(1f);
        Check(game.RecoveredDrops==7,"Seven timed drops pass through active game controller");
        if (!Application.isBatchMode)
        {
            string[] args=Environment.GetCommandLineArgs(); int ix=Array.IndexOf(args,"--screenshot");
            if(ix>=0 && ix+1<args.Length) { ScreenCapture.CaptureScreenshot(args[ix+1]); yield return new WaitForSecondsRealtime(.5f); }
        }
    }
    private static void CheckCase(bool condition) { if(!condition) throw new InvalidOperationException("CanMerge differs from native predicate"); }
    private static void Capture(string suffix)
    {
        string[] args=Environment.GetCommandLineArgs(); int i=Array.IndexOf(args,"--screenshot");
        if(i>=0 && i+1<args.Length)
        {
            string path=args[i+1];
            ScreenCapture.CaptureScreenshot(Path.Combine(Path.GetDirectoryName(path),Path.GetFileNameWithoutExtension(path)+"-"+suffix+".png"));
        }
    }
    private static RecoveredGameFlow.ProfileData ResetForSmoke(RecoveredGameFlow flow)
    {
        // Mutate the isolated smoke profile without affecting the developer's saved game.
        var profile=flow.Profile; profile.score=0; profile.best=0; profile.totalScore=0; profile.tickets=0;
        profile.board=""; profile.skin="Watermelon"; profile.roomIndex=0;
        profile.dailyClaim=""; profile.dailyDay=0; profile.tools=new int[4]; profile.taskIndex=0; profile.taskCount=0; profile.taskSkinProgress=0;
        for(int i=0;i<profile.built.Count;i++) profile.built[i]=0;
        return profile;
    }
}
