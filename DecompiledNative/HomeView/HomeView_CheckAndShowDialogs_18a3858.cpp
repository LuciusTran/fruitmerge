// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckAndShowDialogs() { }
// Ghidra address: 019a7858; ELF VA: 0x18a7858; file offset: 0x18a3858
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019db294) */
/* WARNING: Removing unreachable block (ram,0x019db2a4) */
/* WARNING: Removing unreachable block (ram,0x019db2b0) */
/* WARNING: Removing unreachable block (ram,0x019db2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomeView_CheckAndShowDialogs_18a3858(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  TKLClient_TKLSwitcherConfig *pTVar14;
  IAPItemManager *pIVar15;
  Game_UserData *pGVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  void *pvVar20;
  undefined8 uVar21;
  DailyRewardModel *pDVar22;
  void *pvVar23;
  long *self_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *extraout_x1_01;
  void *runtimeMethod_01;
  undefined8 *puVar24;
  void *pvVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2274 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03868828);
    NativeHelper_017ef284(PTR_DAT_03868830);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_03868838);
    NativeHelper_017ef284(PTR_DAT_038687c8);
    bRam0000000003ab2274 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar13,runtimeMethod);
    lVar13 = *(long *)puVar1;
    runtimeMethod = extraout_x1_00;
  }
  if (*(char *)(*(long *)(lVar13 + 0xb8) + 0x7c) == '\0') {
LAB_019a7958:
    puVar1 = PTR_DAT_0385db10;
    if ((bRam0000000003ab227b & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_03868788);
      NativeHelper_017ef284(PTR_DAT_0385c9f8);
      NativeHelper_017ef284(PTR_DAT_03868840);
      NativeHelper_017ef284(PTR_DAT_03868848);
      NativeHelper_017ef284(PTR_DAT_0385c420);
      NativeHelper_017ef284(PTR_DAT_0385db10);
      NativeHelper_017ef284(PTR_DAT_03868798);
      bRam0000000003ab227b = 1;
    }
    pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar16 == (Game_UserData *)0x0) {
LAB_019a7c70:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    bVar9 = Game_UserData_NeedShowDailyReward_18ce1cc(pGVar16,(void *)0x0);
    puVar1 = PTR_DAT_0385d920;
    if (!bVar9) {
      if ((bRam0000000003ab227c & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c9f8);
        NativeHelper_017ef284(PTR_DAT_03868850);
        NativeHelper_017ef284(PTR_DAT_03868858);
        NativeHelper_017ef284(PTR_DAT_0385c420);
        NativeHelper_017ef284(PTR_DAT_0385d920);
        NativeHelper_017ef284(PTR_DAT_0385db10);
        NativeHelper_017ef284(PTR_DAT_038687e0);
        NativeHelper_017ef284(PTR_DAT_03868860);
        bRam0000000003ab227c = 1;
      }
      pIVar15 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pIVar15 == (IAPItemManager *)0x0) goto LAB_019a833c;
      bVar9 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar15,(void *)0x0);
      if ((bVar9) &&
         (bVar9 = WebHelper_get_HasSyncedServerTime_1880ef0((void *)0x0), puVar1 = PTR_DAT_0385db10,
         bVar9)) {
        pGVar16 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        if (pGVar16 == (Game_UserData *)0x0) goto LAB_019a833c;
        bVar9 = Game_UserData_IsTodaySubscriptionDailyClaimed_18ce690(pGVar16,(void *)0x0);
        if (!bVar9) {
          pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if (pGVar16 == (Game_UserData *)0x0) {
LAB_019a833c:
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          Game_UserData_SaveSubscriptionDailyClaimed_18ce934(pGVar16,(void *)0x0);
          iVar11 = UnityEngine_Random_Range_3246f40(0,4,(void *)0x0);
          pDVar22 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
          DailyRewardModel_DailyRewardModel_1880ca8(pDVar22,(void *)0x0);
          if (pDVar22 == (DailyRewardModel *)0x0) goto LAB_019a833c;
          pDVar22->day = 999;
          if (iVar11 == 2) {
            pDVar22->upgrade = 1;
          }
          else if (iVar11 == 1) {
            pDVar22->bomb = 1;
          }
          else if (iVar11 == 0) {
            pDVar22->clean = 1;
          }
          else {
            pDVar22->shake = 1;
          }
          lVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
          NativeHelper_02b8e36c(lVar13,self,*(undefined8 *)PTR_DAT_03868858,0);
          plVar18 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
          if (plVar18 == (long *)0x0) goto LAB_019a833c;
          lVar17 = NativeHelper_017ef408(pDVar22,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar17 == 0) {
LAB_019a8344:
            uVar21 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef3f4(uVar21,0);
          }
          if ((int)plVar18[3] == 0) {
LAB_019a8340:
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          plVar18[4] = (long)pDVar22;
          NativeHelper_017ef228(plVar18 + 4,pDVar22);
          puVar1 = PTR_DAT_03868860;
          if ((*(long *)PTR_DAT_03868860 != 0) &&
             (lVar17 = NativeHelper_017ef408
                                 (*(long *)PTR_DAT_03868860,*(undefined8 *)(*plVar18 + 0x40)),
             lVar17 == 0)) goto LAB_019a8344;
          if ((*(uint *)(plVar18 + 3) & 0xfffffffe) == 0) goto LAB_019a8340;
          plVar18[5] = *(long *)puVar1;
          NativeHelper_017ef228();
          if ((lVar13 != 0) &&
             (lVar17 = NativeHelper_017ef408(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar17 == 0))
          goto LAB_019a8344;
          if (*(uint *)(plVar18 + 3) < 3) goto LAB_019a8340;
          plVar18[6] = lVar13;
          NativeHelper_017ef228(plVar18 + 6,lVar13);
          pvVar20 = *(void **)PTR_DAT_038687e0;
          goto code_r0x019daf2c;
        }
      }
      puVar1 = PTR_DAT_0385db10;
      if ((bRam0000000003ab227d & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c9f8);
        NativeHelper_017ef284(PTR_DAT_03868850);
        NativeHelper_017ef284(PTR_DAT_0385ca48);
        NativeHelper_017ef284(PTR_DAT_0385ccb8);
        NativeHelper_017ef284(PTR_DAT_0385ccb0);
        NativeHelper_017ef284(PTR_DAT_0385ca28);
        NativeHelper_017ef284(PTR_DAT_0385cca8);
        NativeHelper_017ef284(PTR_DAT_0385ca30);
        NativeHelper_017ef284(PTR_DAT_03868868);
        NativeHelper_017ef284(PTR_DAT_03868870);
        NativeHelper_017ef284(PTR_DAT_03868878);
        NativeHelper_017ef284(PTR_DAT_03868880);
        NativeHelper_017ef284(PTR_DAT_0385c420);
        NativeHelper_017ef284(PTR_DAT_0385e750);
        NativeHelper_017ef284(PTR_DAT_0385db10);
        NativeHelper_017ef284(PTR_DAT_03868888);
        NativeHelper_017ef284(PTR_DAT_038687e0);
        NativeHelper_017ef284(PTR_DAT_03868890);
        NativeHelper_017ef284(PTR_DAT_03868898);
        NativeHelper_017ef284(PTR_DAT_038688a0);
        NativeHelper_017ef284(PTR_DAT_038620d8);
        NativeHelper_017ef284(PTR_DAT_038688a8);
        NativeHelper_017ef284(PTR_DAT_038688b0);
        bRam0000000003ab227d = 1;
      }
      iStack_68 = 0;
      uStack_64 = 0;
      iStack_6c = 0;
      pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      puVar3 = PTR_DAT_03868888;
      if (pGVar16 == (Game_UserData *)0x0) goto LAB_019a89d4;
      uVar10 = Game_UserData_get_LastWeekRank_18d3f6c(pGVar16,(void *)0x0);
      puVar2 = PTR_DAT_0385c2d8;
      uStack_70 = uVar10;
      uVar21 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_70);
      uVar21 = NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar21,0);
      NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar21,0);
      if ((int)uVar10 < 1) {
        HomeView_CheckAndShowDailyQuest_18a49e8(self,runtimeMethod_00);
        return;
      }
      uStack_64 = 0;
      if (uVar10 == 3) {
        uStack_64 = 3;
      }
      else if (uVar10 == 2) {
        uStack_64 = 2;
      }
      else if (uVar10 == 1) {
        uStack_64 = 1;
      }
      else {
        pvVar20 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pvVar20 == (void *)0x0) goto LAB_019a89d4;
        if ((int)uVar10 <= *(int *)((long)pvVar20 + 0x40)) {
          pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          pvVar20 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if ((pvVar20 == (void *)0x0) || (pGVar16 == (Game_UserData *)0x0)) goto LAB_019a89d4;
          bVar9 = Game_UserData_IsUserActuallyHasSkin_18cfd00
                            (pGVar16,*(void **)((long)pvVar20 + 0x48),(void *)0x0);
          if (!bVar9) {
            uStack_64 = 4;
          }
        }
      }
      pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar16 == (Game_UserData *)0x0) goto LAB_019a89d4;
      iStack_68 = Game_UserData_get_LastWeekTargetNum_18d4008(pGVar16,(void *)0x0);
      pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      puVar4 = PTR_DAT_0385ca30;
      puVar3 = PTR_DAT_0385ca28;
      if (pGVar16 == (Game_UserData *)0x0) goto LAB_019a89d4;
      iStack_6c = Game_UserData_get_LastWeekTargetId_18d40a4(pGVar16,(void *)0x0);
      lVar13 = NativeHelper_017ef520(*(undefined8 *)puVar4);
      NativeHelper_02132ae8(lVar13,*(undefined8 *)puVar3);
      uStack_70 = uStack_64;
      uVar21 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
      puVar8 = PTR_DAT_038688a0;
      puVar7 = PTR_DAT_03868898;
      puVar6 = PTR_DAT_03868890;
      puVar5 = PTR_DAT_0385ccb0;
      puVar4 = PTR_DAT_0385cca8;
      puVar3 = PTR_DAT_0385ca48;
      if (lVar13 == 0) goto LAB_019a89d4;
      NativeHelper_02133494
                (lVar13,*(undefined8 *)PTR_DAT_038688a0,uVar21,*(undefined8 *)PTR_DAT_0385ca48);
      iStack_74 = iStack_68;
      uVar21 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_74);
      NativeHelper_02133494(lVar13,*(undefined8 *)puVar7,uVar21,*(undefined8 *)puVar3);
      iStack_78 = iStack_6c;
      uVar21 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_78);
      NativeHelper_02133494(lVar13,*(undefined8 *)puVar6,uVar21,*(undefined8 *)puVar3);
      lVar17 = NativeHelper_017ef520(*(undefined8 *)puVar4);
      NativeHelper_02132ae8(lVar17,*(undefined8 *)puVar5);
      uVar21 = NativeHelper_02c0d29c(&uStack_64,0);
      puVar4 = PTR_DAT_0385e750;
      puVar3 = PTR_DAT_0385ccb8;
      if (lVar17 == 0) goto LAB_019a89d4;
      NativeHelper_02133494(lVar17,*(undefined8 *)puVar8,uVar21,*(undefined8 *)PTR_DAT_0385ccb8);
      uVar21 = NativeHelper_02c0d29c(&iStack_68,0);
      NativeHelper_02133494(lVar17,*(undefined8 *)puVar7,uVar21,*(undefined8 *)puVar3);
      uVar21 = NativeHelper_02c0d29c(&iStack_6c,0);
      NativeHelper_02133494(lVar17,*(undefined8 *)puVar6,uVar21,*(undefined8 *)puVar3);
      pvVar20 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      puVar3 = PTR_DAT_038620d8;
      if (pvVar20 == (void *)0x0) goto LAB_019a89d4;
      EventLogger_TkLogEvent_1888ca0(pvVar20,*(undefined8 *)PTR_DAT_038620d8,lVar13,0,0);
      pvVar20 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      if (pvVar20 == (void *)0x0) goto LAB_019a89d4;
      EventLogger_LogEvent_1888558(pvVar20,*(undefined8 *)puVar3,lVar17,0,0);
      pvVar20 = extraout_x1_01;
      if (uVar10 < 4) {
        lVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
        NativeHelper_02b8e36c(lVar13,self,*(undefined8 *)PTR_DAT_03868868,0);
        pvVar20 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pvVar20 == (void *)0x0) goto LAB_019a89d4;
        auVar27 = Game_UserData_get_WaitRewardList_18d3d04(pvVar20,0);
        pvVar20 = auVar27._8_8_;
        lVar17 = auVar27._0_8_;
        if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) < (int)uVar10)) goto LAB_019a8788;
        lVar19 = NativeHelper_0256950c(lVar17,uVar10 - 1,*(undefined8 *)PTR_DAT_03868880);
        iVar11 = *(int *)(lVar17 + 0x18);
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
        if (0 < iVar11) {
          NativeHelper_02c326b8(*(undefined8 *)(lVar17 + 0x10),0,iVar11,0);
        }
        pvVar20 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pvVar20 == (void *)0x0) goto LAB_019a89d4;
        Game_UserData_set_WaitRewardList_18d3ea4(pvVar20,lVar17,0);
        pDVar22 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
        DailyRewardModel_DailyRewardModel_1880ca8(pDVar22,(void *)0x0);
        if ((pDVar22 == (DailyRewardModel *)0x0) || (pDVar22->day = 999, lVar19 == 0))
        goto LAB_019a89d4;
        uVar26 = *(undefined8 *)(lVar19 + 0x18);
        uVar21 = *(undefined8 *)(lVar19 + 0x10);
        pDVar22->bomb = (int)uVar26;
        pDVar22->upgrade = (int)((ulong)uVar26 >> 0x20);
        pDVar22->coin = (int)uVar21;
        pDVar22->clean = (int)((ulong)uVar21 >> 0x20);
        pDVar22->shake = *(int *)(lVar19 + 0x20);
        uStack_70 = uVar10;
        uVar21 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
        uVar21 = NativeHelper_02a9d074(*(undefined8 *)PTR_DAT_038688a8,uVar21,0);
        NativeHelper_01919320(0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,uVar21,0);
        plVar18 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
        if (plVar18 == (long *)0x0) goto LAB_019a89d4;
        lVar17 = NativeHelper_017ef408(pDVar22,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar17 == 0) {
LAB_019a89dc:
          uVar21 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef3f4(uVar21,0);
        }
        if ((int)plVar18[3] == 0) {
LAB_019a89d8:
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        plVar18[4] = (long)pDVar22;
        NativeHelper_017ef228(plVar18 + 4,pDVar22);
        puVar3 = PTR_DAT_038688b0;
        if ((*(long *)PTR_DAT_038688b0 != 0) &&
           (lVar17 = NativeHelper_017ef408
                               (*(long *)PTR_DAT_038688b0,*(undefined8 *)(*plVar18 + 0x40)),
           lVar17 == 0)) goto LAB_019a89dc;
        if ((*(uint *)(plVar18 + 3) & 0xfffffffe) == 0) goto LAB_019a89d8;
        plVar18[5] = *(long *)puVar3;
        NativeHelper_017ef228();
        if ((lVar13 != 0) &&
           (lVar17 = NativeHelper_017ef408(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar17 == 0))
        goto LAB_019a89dc;
        if (*(uint *)(plVar18 + 3) < 3) goto LAB_019a89d8;
        plVar18[6] = lVar13;
        NativeHelper_017ef228(plVar18 + 6,lVar13);
        Game_Controller_FMViewController_ShowView_18d6f2c
                  (*(void **)PTR_DAT_038687e0,false,plVar18,(void *)0x0);
      }
      else {
LAB_019a8788:
        HomeView_TryGainRankSkin_18a4a60(self,pvVar20);
      }
      pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar16 != (Game_UserData *)0x0) {
        Game_UserData_set_LastWeekRank_18d3fb4(pGVar16,0,(void *)0x0);
        return;
      }
LAB_019a89d4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    lVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868788);
    NativeHelper_01efbaf0(lVar13,self,*(undefined8 *)PTR_DAT_03868840,0);
    lVar17 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(lVar17,self,*(undefined8 *)PTR_DAT_03868848,0);
    plVar18 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,2);
    if (plVar18 == (long *)0x0) goto LAB_019a7c70;
    if ((lVar13 != 0) &&
       (lVar19 = NativeHelper_017ef408(lVar13,*(undefined8 *)(*plVar18 + 0x40)), lVar19 == 0)) {
LAB_019a7c78:
      uVar21 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar21,0);
    }
    if ((int)plVar18[3] == 0) {
LAB_019a7c74:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar18[4] = lVar13;
    NativeHelper_017ef228(plVar18 + 4,lVar13);
    if ((lVar17 != 0) &&
       (lVar13 = NativeHelper_017ef408(lVar17,*(undefined8 *)(*plVar18 + 0x40)), lVar13 == 0))
    goto LAB_019a7c78;
    if ((*(uint *)(plVar18 + 3) & 0xfffffffe) == 0) goto LAB_019a7c74;
    plVar18[5] = lVar17;
    NativeHelper_017ef228(plVar18 + 5,lVar17);
    pvVar20 = *(void **)PTR_DAT_03868798;
  }
  else {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar13,runtimeMethod);
    }
    pTVar14 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar14 == (TKLClient_TKLSwitcherConfig *)0x0) {
LAB_019a7a48:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (pTVar14->ShowFirstLaunchSubscribtion == false) goto LAB_019a7958;
    pIVar15 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d920);
    if (pIVar15 == (IAPItemManager *)0x0) goto LAB_019a7a48;
    bVar9 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar15,(void *)0x0);
    puVar1 = PTR_DAT_03866c68;
    if ((bVar9) || (**(char **)(*(long *)PTR_DAT_03868830 + 0xb8) != '\0')) goto LAB_019a7958;
    **(char **)(*(long *)PTR_DAT_03868830 + 0xb8) = '\x01';
    pvVar20 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1);
    Callback_Callback_186ef98(pvVar20,self,*(void **)PTR_DAT_03868828,(void *)0x0);
    plVar18 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    puVar1 = PTR_DAT_03868838;
    if (plVar18 == (long *)0x0) goto LAB_019a7a48;
    if ((*(long *)PTR_DAT_03868838 != 0) &&
       (lVar13 = NativeHelper_017ef408(*(long *)PTR_DAT_03868838,*(undefined8 *)(*plVar18 + 0x40)),
       lVar13 == 0)) {
LAB_019a7a50:
      uVar21 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar21,0);
    }
    if ((int)plVar18[3] == 0) {
LAB_019a7a4c:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar18[4] = *(long *)puVar1;
    NativeHelper_017ef228();
    if ((pvVar20 != (void *)0x0) &&
       (lVar13 = NativeHelper_017ef408(pvVar20,*(undefined8 *)(*plVar18 + 0x40)), lVar13 == 0))
    goto LAB_019a7a50;
    if (*(uint *)(plVar18 + 3) < 3) goto LAB_019a7a4c;
    plVar18[6] = (long)pvVar20;
    NativeHelper_017ef228(plVar18 + 6,pvVar20);
    pvVar20 = *(void **)PTR_DAT_038687c8;
  }
code_r0x019daf2c:
  puVar1 = PTR_DAT_0385c2a0;
  pvVar23 = pvVar20;
  if ((bRam0000000003ab24dc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a170,0,plVar18,0);
    NativeHelper_017ef284(PTR_DAT_0385c360);
    NativeHelper_017ef284(PTR_DAT_0386a180);
    NativeHelper_017ef284(PTR_DAT_0386a188);
    NativeHelper_017ef284(PTR_DAT_0386a190);
    NativeHelper_017ef284(PTR_DAT_0386a208);
    NativeHelper_017ef284(PTR_DAT_0386a240);
    NativeHelper_017ef284(PTR_DAT_03868698);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386a198);
    NativeHelper_017ef284(PTR_DAT_038678e8);
    NativeHelper_017ef284(PTR_DAT_0386a220);
    pvVar23 = (void *)NativeHelper_017ef284(PTR_DAT_0386a248);
    bRam0000000003ab24dc = 1;
  }
  Game_Controller_FMViewController_Init_18d63c8(pvVar23);
  pvVar23 = Game_Controller_FMViewController_loadRes_18d6898(pvVar20,runtimeMethod_01);
  lVar13 = *(long *)puVar1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar13);
  }
  bVar9 = UnityEngine_object_op_Equality_324f284(pvVar23,(void *)0x0,(void *)0x0);
  puVar4 = PTR_DAT_0386a180;
  puVar2 = PTR_DAT_03868698;
  puVar3 = PTR_DAT_0385c360;
  if (bVar9) {
    pvVar20 = (void *)NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_0386a198,pvVar20,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar3);
    }
    UnityEngine_Debug_LogError_321e360(pvVar20,(void *)0x0);
    return;
  }
  pvVar25 = *(void **)(*(long *)(*(long *)PTR_DAT_0386a180 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pvVar23 = UnityEngine_object_Instantiate_1ba983c(pvVar23,pvVar25,*(void **)puVar2);
  if (pvVar23 != (void *)0x0) {
    UnityEngine_object_set_name_3252f54(pvVar23,pvVar20,(void *)0x0);
    self_00 = UnityEngine_GameObject_GetComponent_1b75510(pvVar23,*(void **)PTR_DAT_0386a188);
    puVar1 = PTR_DAT_0386a170;
    if ((self_00 != (long *)0x0) &&
       (pvVar23 = UnityEngine_Component_GetComponent_1b08498(self_00,*(void **)PTR_DAT_0386a170),
       pvVar23 != (void *)0x0)) {
      NativeHelper_0364318c(pvVar23,1,0);
      NativeHelper_036444cc(pvVar23,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
      NativeHelper_03643840(0x40a00000,pvVar23,0);
      lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) < 1) {
          iVar11 = 0;
        }
        else {
          pvVar25 = (void *)NativeHelper_0256950c
                                      (lVar13,*(int *)(lVar13 + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_0386a240);
          if ((pvVar25 == (void *)0x0) ||
             (pvVar25 = UnityEngine_Component_GetComponent_1b08498(pvVar25,*(void **)puVar1),
             pvVar25 == (void *)0x0)) goto code_r0x019db304;
          iVar11 = NativeHelper_03643b40(pvVar25,0);
          iVar11 = iVar11 + 1;
        }
        uVar12 = NativeHelper_0331acd0(*(undefined8 *)PTR_DAT_0386a248,0);
        NativeHelper_03643e20(pvVar23,uVar12,0);
        NativeHelper_03643bf4(pvVar23,iVar11,0);
        lVar13 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar13 != 0) {
          lVar17 = *(long *)(lVar13 + 0x10);
          lVar19 = *(long *)PTR_DAT_0386a190;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar17 != 0) {
            uVar10 = *(uint *)(lVar13 + 0x18);
            if (uVar10 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar10 + 1;
              puVar24 = (undefined8 *)(lVar17 + (long)(int)uVar10 * 8 + 0x20);
              *puVar24 = self_00;
              NativeHelper_017ef228(puVar24,self_00);
            }
            else {
              NativeHelper_025697dc
                        (lVar13,self_00,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = NativeHelper_02aa6b6c
                               (*(undefined8 *)PTR_DAT_0386a220,pvVar20,
                                *(undefined8 *)PTR_DAT_038678e8,0);
            self_00[4] = lVar13;
            NativeHelper_017ef228();
            (**(code **)(*self_00 + 0x178))(self_00,plVar18,*(undefined8 *)(*self_00 + 0x180));
            (**(code **)(*self_00 + 0x188))(self_00,*(undefined8 *)(*self_00 + 400));
            return;
          }
        }
      }
    }
  }
code_r0x019db304:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

