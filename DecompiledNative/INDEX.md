# Native gameplay recovered from the supplied APK

These bodies are Ghidra decompiler output from `libil2cpp.so`, with Cpp2IL metadata annotations. They are C/C++ pseudocode, not original C# or a compiling Unity project.

Every body was resolved through Ghidra loader source mappings and its complete original instruction bytes were checked. Runtime helper names and non-returning exception boundaries include explicit analysis inferences.

## BuildHouse

- [public int get_CurrentFinishedGift() { }](BuildHouse/BuildHouse_get_CurrentFinishedGift_18861a8.cpp) — file offset `0x18861a8`, Ghidra address `0198a1a8`
- [public RoomModel get_CurrentRoomModel() { }](BuildHouse/BuildHouse_get_CurrentRoomModel_18861a0.cpp) — file offset `0x18861a0`, Ghidra address `0198a1a0`
- [public int get_CurrentTotalGift() { }](BuildHouse/BuildHouse_get_CurrentTotalGift_18861f8.cpp) — file offset `0x18861f8`, Ghidra address `0198a1f8`
- [private static BuildHouse() { }](BuildHouse/BuildHouse_BuildHouse_1889584.cpp) — file offset `0x1889584`, Ghidra address `0198d584`
- [public BuildHouse() { }](BuildHouse/BuildHouse_BuildHouse_18894fc.cpp) — file offset `0x18894fc`, Ghidra address `0198d4fc`
- [public void BuyCurrentItem(Action<Boolean, Int32, Int32> completedAction) { }](BuildHouse/BuildHouse_BuyCurrentItem_18870d0.cpp) — file offset `0x18870d0`, Ghidra address `0198b0d0`
- [public void ChangeRoom(RoomModel roomModel) { }](BuildHouse/BuildHouse_ChangeRoom_1886998.cpp) — file offset `0x1886998`, Ghidra address `0198a998`
- [public void CheatCompleteCurrentRoom() { }](BuildHouse/BuildHouse_CheatCompleteCurrentRoom_1888174.cpp) — file offset `0x1888174`, Ghidra address `0198c174`
- [public bool CheckRoomCompleted() { }](BuildHouse/BuildHouse_CheckRoomCompleted_1886200.cpp) — file offset `0x1886200`, Ghidra address `0198a200`
- [private void CleanShadow() { }](BuildHouse/BuildHouse_CleanShadow_1886f8c.cpp) — file offset `0x1886f8c`, Ghidra address `0198af8c`
- [public static BuildHouse CreateCurrentHouse() { }](BuildHouse/BuildHouse_CreateCurrentHouse_1886250.cpp) — file offset `0x1886250`, Ghidra address `0198a250`
- [private void CreateShadow(Transform item) { }](BuildHouse/BuildHouse_CreateShadow_1889088.cpp) — file offset `0x1889088`, Ghidra address `0198d088`
- [public void DestroyRoom() { }](BuildHouse/BuildHouse_DestroyRoom_1887044.cpp) — file offset `0x1887044`, Ghidra address `0198b044`
- [public void EnterBuilding(Action<Int32, Int32> onProgress, Action<Vector3, Int32, Int32> onEnterComplete) { }](BuildHouse/BuildHouse_EnterBuilding_1886d40.cpp) — file offset `0x1886d40`, Ghidra address `0198ad40`
- [public void EnterComingSoon() { }](BuildHouse/BuildHouse_EnterComingSoon_1886904.cpp) — file offset `0x1886904`, Ghidra address `0198a904`
- [public void ExitBuilding() { }](BuildHouse/BuildHouse_ExitBuilding_1886ee8.cpp) — file offset `0x1886ee8`, Ghidra address `0198aee8`
- [public void FindCurrentBuyItem(Action<Vector3, Int32, Int32> onNewItemComplete) { }](BuildHouse/BuildHouse_FindCurrentBuyItem_1887390.cpp) — file offset `0x1887390`, Ghidra address `0198b390`
- [public int GetCurrentItemTicket() { }](BuildHouse/BuildHouse_GetCurrentItemTicket_1887f34.cpp) — file offset `0x1887f34`, Ghidra address `0198bf34`
- [private int GetMaxOrder(Transform root) { }](BuildHouse/BuildHouse_GetMaxOrder_1887a94.cpp) — file offset `0x1887a94`, Ghidra address `0198ba94`
- [private void GetSpriteRendererS(Transform root, List<GameObject> collectedRenderers) { }](BuildHouse/BuildHouse_GetSpriteRendererS_1887b90.cpp) — file offset `0x1887b90`, Ghidra address `0198bb90`
- [public bool GoNextRoom() { }](BuildHouse/BuildHouse_GoNextRoom_1887284.cpp) — file offset `0x1887284`, Ghidra address `0198b284`
- [private void LoadComingSoon() { }](BuildHouse/BuildHouse_LoadComingSoon_188674c.cpp) — file offset `0x188674c`, Ghidra address `0198a74c`
- [private void LoadRoom(RoomModel roomModel) { }](BuildHouse/BuildHouse_LoadRoom_18863b8.cpp) — file offset `0x18863b8`, Ghidra address `0198a3b8`
- [private void RemoveShadowChildren(Transform item) { }](BuildHouse/BuildHouse_RemoveShadowChildren_18893e4.cpp) — file offset `0x18893e4`, Ghidra address `0198d3e4`
- [public void SaveCurrentItemCost(int current) { }](BuildHouse/BuildHouse_SaveCurrentItemCost_1888028.cpp) — file offset `0x1888028`, Ghidra address `0198c028`

## BuildHouse.<>c__DisplayClass23_0

- [public <>c__DisplayClass23_0() { }](BuildHouse___c__DisplayClass23_0/BuildHouse___c__DisplayClass23_0___c__DisplayClass23_0_1886ee0.cpp) — file offset `0x1886ee0`, Ghidra address `0198aee0`
- [internal void <EnterBuilding>b__0() { }](BuildHouse___c__DisplayClass23_0/BuildHouse___c__DisplayClass23_0__EnterBuilding_b__0_1889dfc.cpp) — file offset `0x1889dfc`, Ghidra address `0198ddfc`

## BuildHouse.<>c__DisplayClass27_0

- [public <>c__DisplayClass27_0() { }](BuildHouse___c__DisplayClass27_0/BuildHouse___c__DisplayClass27_0___c__DisplayClass27_0_188727c.cpp) — file offset `0x188727c`, Ghidra address `0198b27c`
- [internal void <BuyCurrentItem>b__0() { }](BuildHouse___c__DisplayClass27_0/BuildHouse___c__DisplayClass27_0__BuyCurrentItem_b__0_1889e18.cpp) — file offset `0x1889e18`, Ghidra address `0198de18`

## BuildHouse.<>c__DisplayClass27_1

- [public <>c__DisplayClass27_1() { }](BuildHouse___c__DisplayClass27_1/BuildHouse___c__DisplayClass27_1___c__DisplayClass27_1_188a17c.cpp) — file offset `0x188a17c`, Ghidra address `0198e17c`
- [internal void <BuyCurrentItem>b__1() { }](BuildHouse___c__DisplayClass27_1/BuildHouse___c__DisplayClass27_1__BuyCurrentItem_b__1_188a184.cpp) — file offset `0x188a184`, Ghidra address `0198e184`

## ComboEffect

- [public ComboEffect() { }](ComboEffect/ComboEffect_ComboEffect_189efb8.cpp) — file offset `0x189efb8`, Ghidra address `019a2fb8`
- [private void Awake() { }](ComboEffect/ComboEffect_Awake_189eab4.cpp) — file offset `0x189eab4`, Ghidra address `019a2ab4`
- [public void PlayAnimation(int comboCount) { }](ComboEffect/ComboEffect_PlayAnimation_189eb64.cpp) — file offset `0x189eb64`, Ghidra address `019a2b64`

## ComboEffect.<>c

- [private static <>c() { }](ComboEffect___c/ComboEffect___c___c_189f02c.cpp) — file offset `0x189f02c`, Ghidra address `019a302c`
- [public <>c() { }](ComboEffect___c/ComboEffect___c___c_189f094.cpp) — file offset `0x189f094`, Ghidra address `019a3094`
- [internal void <PlayAnimation>b__5_0() { }](ComboEffect___c/ComboEffect___c__PlayAnimation_b__5_0_189f09c.cpp) — file offset `0x189f09c`, Ghidra address `019a309c`

## FruitItem

- [public FruitType get_FruitType() { }](FruitItem/FruitItem_get_FruitType_1875b18.cpp) — file offset `0x1875b18`, Ghidra address `01979b18`
- [public float get_StartWaitingFinishTime() { }](FruitItem/FruitItem_get_StartWaitingFinishTime_1875b20.cpp) — file offset `0x1875b20`, Ghidra address `01979b20`
- [public FruitItem() { }](FruitItem/FruitItem_FruitItem_1879424.cpp) — file offset `0x1879424`, Ghidra address `0197d424`
- [private void Awake() { }](FruitItem/FruitItem_Awake_1875b28.cpp) — file offset `0x1875b28`, Ghidra address `01979b28`
- [private bool CanMerge(FruitItem fruit) { }](FruitItem/FruitItem_CanMerge_18780a0.cpp) — file offset `0x18780a0`, Ghidra address `0197c0a0`
- [private void CheckMergeFruit() { }](FruitItem/FruitItem_CheckMergeFruit_18765c0.cpp) — file offset `0x18765c0`, Ghidra address `0197a5c0`
- [private void CheckPenetration(FruitItem item) { }](FruitItem/FruitItem_CheckPenetration_187739c.cpp) — file offset `0x187739c`, Ghidra address `0197b39c`
- [private void CleanLastComboEffect() { }](FruitItem/FruitItem_CleanLastComboEffect_1876de0.cpp) — file offset `0x1876de0`, Ghidra address `0197ade0`
- [public void ClearForFinish() { }](FruitItem/FruitItem_ClearForFinish_1876b74.cpp) — file offset `0x1876b74`, Ghidra address `0197ab74`
- [public void ClearMaterialFactor(float time, float duration) { }](FruitItem/FruitItem_ClearMaterialFactor_1877538.cpp) — file offset `0x1877538`, Ghidra address `0197b538`
- [private void DestroyOldFruits(FruitItem fruit) { }](FruitItem/FruitItem_DestroyOldFruits_187886c.cpp) — file offset `0x187886c`, Ghidra address `0197c86c`
- [private void DropOutDestroy() { }](FruitItem/FruitItem_DropOutDestroy_1876a20.cpp) — file offset `0x1876a20`, Ghidra address `0197aa20`
- [private ComboEffect[] FindAllEffects() { }](FruitItem/FruitItem_FindAllEffects_1877310.cpp) — file offset `0x1877310`, Ghidra address `0197b310`
- [private ContactPoint2D FindMaxVelocityContact(Collision2D collision) { }](FruitItem/FruitItem_FindMaxVelocityContact_1878670.cpp) — file offset `0x1878670`, Ghidra address `0197c670`
- [private int GetCurrentCombo(FruitItem fruit) { }](FruitItem/FruitItem_GetCurrentCombo_1876d84.cpp) — file offset `0x1876d84`, Ghidra address `0197ad84`
- [private Transform GetEffectParent() { }](FruitItem/FruitItem_GetEffectParent_187666c.cpp) — file offset `0x187666c`, Ghidra address `0197a66c`
- [public void HideToolEffect() { }](FruitItem/FruitItem_HideToolEffect_1876bd0.cpp) — file offset `0x1876bd0`, Ghidra address `0197abd0`
- [public void HideToolEffectWithoutNormalStates() { }](FruitItem/FruitItem_HideToolEffectWithoutNormalStates_1876d10.cpp) — file offset `0x1876d10`, Ghidra address `0197ad10`
- [public bool IsShowingToolEffect() { }](FruitItem/FruitItem_IsShowingToolEffect_1876cd0.cpp) — file offset `0x1876cd0`, Ghidra address `0197acd0`
- [private void LogFruitMerge() { }](FruitItem/FruitItem_LogFruitMerge_1877a18.cpp) — file offset `0x1877a18`, Ghidra address `0197ba18`
- [private void Merge(FruitItem fruit) { }](FruitItem/FruitItem_Merge_18780dc.cpp) — file offset `0x18780dc`, Ghidra address `0197c0dc`
- [private void OnCollisionEnter2D(Collision2D other) { }](FruitItem/FruitItem_OnCollisionEnter2D_1877ce8.cpp) — file offset `0x1877ce8`, Ghidra address `0197bce8`
- [private void OnDestroy() { }](FruitItem/FruitItem_OnDestroy_187609c.cpp) — file offset `0x187609c`, Ghidra address `0197a09c`
- [private void PlayComboSound() { }](FruitItem/FruitItem_PlayComboSound_187710c.cpp) — file offset `0x187710c`, Ghidra address `0197b10c`
- [private void PlayCreateAnimation() { }](FruitItem/FruitItem_PlayCreateAnimation_1878c14.cpp) — file offset `0x1878c14`, Ghidra address `0197cc14`
- [private void PlayDestroyParticle(Vector3 pos) { }](FruitItem/FruitItem_PlayDestroyParticle_1879178.cpp) — file offset `0x1879178`, Ghidra address `0197d178`
- [private void PlayMergeParticle(Vector3 pos) { }](FruitItem/FruitItem_PlayMergeParticle_1878dc4.cpp) — file offset `0x1878dc4`, Ghidra address `0197cdc4`
- [private void PlayMergeSound() { }](FruitItem/FruitItem_PlayMergeSound_1879384.cpp) — file offset `0x1879384`, Ghidra address `0197d384`
- [private void PlayMergeVibrate() { }](FruitItem/FruitItem_PlayMergeVibrate_1878900.cpp) — file offset `0x1878900`, Ghidra address `0197c900`
- [private void PlayTouchSound() { }](FruitItem/FruitItem_PlayTouchSound_1878410.cpp) — file offset `0x1878410`, Ghidra address `0197c410`
- [private void RecordComboCountForLog() { }](FruitItem/FruitItem_RecordComboCountForLog_1877160.cpp) — file offset `0x1877160`, Ghidra address `0197b160`
- [public void RecordFruitMax() { }](FruitItem/FruitItem_RecordFruitMax_1877984.cpp) — file offset `0x1877984`, Ghidra address `0197b984`
- [private void RecordMergeCountForLog() { }](FruitItem/FruitItem_RecordMergeCountForLog_1877698.cpp) — file offset `0x1877698`, Ghidra address `0197b698`
- [public void ReleaseDown() { }](FruitItem/FruitItem_ReleaseDown_187657c.cpp) — file offset `0x187657c`, Ghidra address `0197a57c`
- [public void Reset() { }](FruitItem/FruitItem_Reset_1876bcc.cpp) — file offset `0x1876bcc`, Ghidra address `0197abcc`
- [public void ResetMaterialFactor() { }](FruitItem/FruitItem_ResetMaterialFactor_1875f70.cpp) — file offset `0x1875f70`, Ghidra address `01979f70`
- [private void ResetRedAnimation() { }](FruitItem/FruitItem_ResetRedAnimation_1876994.cpp) — file offset `0x1876994`, Ghidra address `0197a994`
- [private void SetCollided(FruitItem fruit) { }](FruitItem/FruitItem_SetCollided_1877e2c.cpp) — file offset `0x1877e2c`, Ghidra address `0197be2c`
- [public void SetKinematic(bool isKinematic) { }](FruitItem/FruitItem_SetKinematic_18763bc.cpp) — file offset `0x18763bc`, Ghidra address `0197a3bc`
- [private void SetMerged(FruitItem fruit) { }](FruitItem/FruitItem_SetMerged_1878850.cpp) — file offset `0x1878850`, Ghidra address `0197c850`
- [private GameObject ShowComboEffect() { }](FruitItem/FruitItem_ShowComboEffect_1876eb4.cpp) — file offset `0x1876eb4`, Ghidra address `0197aeb4`
- [public void ShowToolEffect() { }](FruitItem/FruitItem_ShowToolEffect_1876ce8.cpp) — file offset `0x1876ce8`, Ghidra address `0197ace8`
- [private void StartCollisionDirectionScaleAnimation(Vector3 collisionNormal) { }](FruitItem/FruitItem_StartCollisionDirectionScaleAnimation_1878480.cpp) — file offset `0x1878480`, Ghidra address `0197c480`
- [private void StartRedAnimation() { }](FruitItem/FruitItem_StartRedAnimation_1876878.cpp) — file offset `0x1876878`, Ghidra address `0197a878`
- [public void StartWaitingBlinkCoroutine() { }](FruitItem/FruitItem_StartWaitingBlinkCoroutine_1876440.cpp) — file offset `0x1876440`, Ghidra address `0197a440`
- [private void StartWaitingForCombo() { }](FruitItem/FruitItem_StartWaitingForCombo_1876de4.cpp) — file offset `0x1876de4`, Ghidra address `0197ade4`
- [public void StopAllAnimationCoroutines() { }](FruitItem/FruitItem_StopAllAnimationCoroutines_1876404.cpp) — file offset `0x1876404`, Ghidra address `0197a404`
- [private void StopBlinkCoroutine() { }](FruitItem/FruitItem_StopBlinkCoroutine_1876d70.cpp) — file offset `0x1876d70`, Ghidra address `0197ad70`
- [private void StopComboCheck() { }](FruitItem/FruitItem_StopComboCheck_1876bb8.cpp) — file offset `0x1876bb8`, Ghidra address `0197abb8`
- [private void StopRedAnimation() { }](FruitItem/FruitItem_StopRedAnimation_18768b8.cpp) — file offset `0x18768b8`, Ghidra address `0197a8b8`
- [private void StopWaitingBlinkCoroutine() { }](FruitItem/FruitItem_StopWaitingBlinkCoroutine_1876d5c.cpp) — file offset `0x1876d5c`, Ghidra address `0197ad5c`
- [private void SwitchBlinkStates() { }](FruitItem/FruitItem_SwitchBlinkStates_1876d2c.cpp) — file offset `0x1876d2c`, Ghidra address `0197ad2c`
- [public void SwitchFinishedStates() { }](FruitItem/FruitItem_SwitchFinishedStates_1876c9c.cpp) — file offset `0x1876c9c`, Ghidra address `0197ac9c`
- [private void SwitchNormalStates() { }](FruitItem/FruitItem_SwitchNormalStates_1875f40.cpp) — file offset `0x1875f40`, Ghidra address `01979f40`
- [private void Update() { }](FruitItem/FruitItem_Update_18766fc.cpp) — file offset `0x18766fc`, Ghidra address `0197a6fc`
- [public void UpdateAnimation(Vector3 pos) { }](FruitItem/FruitItem_UpdateAnimation_18793e0.cpp) — file offset `0x18793e0`, Ghidra address `0197d3e0`
- [private void UpdateCollider2D() { }](FruitItem/FruitItem_UpdateCollider2D_18761e4.cpp) — file offset `0x18761e4`, Ghidra address `0197a1e4`
- [private void UpdateMergeExp() { }](FruitItem/FruitItem_UpdateMergeExp_187898c.cpp) — file offset `0x187898c`, Ghidra address `0197c98c`
- [private void UpdateScoreUI() { }](FruitItem/FruitItem_UpdateScoreUI_187905c.cpp) — file offset `0x187905c`, Ghidra address `0197d05c`
- [private void UpdateSkin(string usingSkinName) { }](FruitItem/FruitItem_UpdateSkin_1875e34.cpp) — file offset `0x1875e34`, Ghidra address `01979e34`

## FruitItem.<Delay>d__36

- [private override bool MoveNext() { }](FruitItem__Delay_d__36/FruitItem__Delay_d__36_MoveNext_1879514.cpp) — file offset `0x1879514`, Ghidra address `0197d514`

## FruitItem.<DestroyFruit>d__33

- [private override bool MoveNext() { }](FruitItem__DestroyFruit_d__33/FruitItem__DestroyFruit_d__33_MoveNext_1879624.cpp) — file offset `0x1879624`, Ghidra address `0197d624`

## FruitItem.<WaitingComboEnd>d__64

- [private override bool MoveNext() { }](FruitItem__WaitingComboEnd_d__64/FruitItem__WaitingComboEnd_d__64_MoveNext_1879824.cpp) — file offset `0x1879824`, Ghidra address `0197d824`

## Game.UserData

- [public string get_AdjustAdgroup() { }](Game_UserData/Game_UserData_get_AdjustAdgroup_18cf13c.cpp) — file offset `0x18cf13c`, Ghidra address `019d313c`
- [public void set_AdjustAdgroup(string value) { }](Game_UserData/Game_UserData_set_AdjustAdgroup_18cf0e8.cpp) — file offset `0x18cf0e8`, Ghidra address `019d30e8`
- [public string get_AdjustAdid() { }](Game_UserData/Game_UserData_get_AdjustAdid_18c6e20.cpp) — file offset `0x18c6e20`, Ghidra address `019cae20`
- [public void set_AdjustAdid(string value) { }](Game_UserData/Game_UserData_set_AdjustAdid_18c7de8.cpp) — file offset `0x18c7de8`, Ghidra address `019cbde8`
- [public string get_AdjustCampaign() { }](Game_UserData/Game_UserData_get_AdjustCampaign_18cf08c.cpp) — file offset `0x18cf08c`, Ghidra address `019d308c`
- [public void set_AdjustCampaign(string value) { }](Game_UserData/Game_UserData_set_AdjustCampaign_18cf038.cpp) — file offset `0x18cf038`, Ghidra address `019d3038`
- [public string get_AdjustNetwork() { }](Game_UserData/Game_UserData_get_AdjustNetwork_18cefdc.cpp) — file offset `0x18cefdc`, Ghidra address `019d2fdc`
- [public void set_AdjustNetwork(string value) { }](Game_UserData/Game_UserData_set_AdjustNetwork_18cef88.cpp) — file offset `0x18cef88`, Ghidra address `019d2f88`
- [public int get_BlinkMax() { }](Game_UserData/Game_UserData_get_BlinkMax_18c9798.cpp) — file offset `0x18c9798`, Ghidra address `019cd798`
- [public void set_BlinkMax(int value) { }](Game_UserData/Game_UserData_set_BlinkMax_18c9824.cpp) — file offset `0x18c9824`, Ghidra address `019cd824`
- [public int get_BlinkMin() { }](Game_UserData/Game_UserData_get_BlinkMin_18c96b8.cpp) — file offset `0x18c96b8`, Ghidra address `019cd6b8`
- [public void set_BlinkMin(int value) { }](Game_UserData/Game_UserData_set_BlinkMin_18c9744.cpp) — file offset `0x18c9744`, Ghidra address `019cd744`
- [public int get_CompletedTaskCountInLevel() { }](Game_UserData/Game_UserData_get_CompletedTaskCountInLevel_18d3a6c.cpp) — file offset `0x18d3a6c`, Ghidra address `019d7a6c`
- [public void set_CompletedTaskCountInLevel(int value) { }](Game_UserData/Game_UserData_set_CompletedTaskCountInLevel_18d3ab4.cpp) — file offset `0x18d3ab4`, Ghidra address `019d7ab4`
- [public int get_CurrentTaskClickNumber() { }](Game_UserData/Game_UserData_get_CurrentTaskClickNumber_18d39fc.cpp) — file offset `0x18d39fc`, Ghidra address `019d79fc`
- [public void set_CurrentTaskClickNumber(int value) { }](Game_UserData/Game_UserData_set_CurrentTaskClickNumber_18d3b5c.cpp) — file offset `0x18d3b5c`, Ghidra address `019d7b5c`
- [public int get_CurrentTaskCompletedNum() { }](Game_UserData/Game_UserData_get_CurrentTaskCompletedNum_18d3344.cpp) — file offset `0x18d3344`, Ghidra address `019d7344`
- [public void set_CurrentTaskCompletedNum(int value) { }](Game_UserData/Game_UserData_set_CurrentTaskCompletedNum_18d338c.cpp) — file offset `0x18d338c`, Ghidra address `019d738c`
- [public int get_CurrentTaskDuration() { }](Game_UserData/Game_UserData_get_CurrentTaskDuration_18d39b4.cpp) — file offset `0x18d39b4`, Ghidra address `019d79b4`
- [public void set_CurrentTaskDuration(int value) { }](Game_UserData/Game_UserData_set_CurrentTaskDuration_18d3b08.cpp) — file offset `0x18d3b08`, Ghidra address `019d7b08`
- [public int get_CurrentTaskSkinGainProgress() { }](Game_UserData/Game_UserData_get_CurrentTaskSkinGainProgress_18d3438.cpp) — file offset `0x18d3438`, Ghidra address `019d7438`
- [public void set_CurrentTaskSkinGainProgress(int value) { }](Game_UserData/Game_UserData_set_CurrentTaskSkinGainProgress_18d3480.cpp) — file offset `0x18d3480`, Ghidra address `019d7480`
- [public bool get_CurrentUserIsExecuteTKLog() { }](Game_UserData/Game_UserData_get_CurrentUserIsExecuteTKLog_18cee8c.cpp) — file offset `0x18cee8c`, Ghidra address `019d2e8c`
- [public void set_CurrentUserIsExecuteTKLog(bool value) { }](Game_UserData/Game_UserData_set_CurrentUserIsExecuteTKLog_18cee38.cpp) — file offset `0x18cee38`, Ghidra address `019d2e38`
- [public bool get_EnableTask() { }](Game_UserData/Game_UserData_get_EnableTask_18cab28.cpp) — file offset `0x18cab28`, Ghidra address `019ceb28`
- [public void set_EnableTask(bool value) { }](Game_UserData/Game_UserData_set_EnableTask_18d3c04.cpp) — file offset `0x18d3c04`, Ghidra address `019d7c04`
- [public bool get_HasRecordEnableTask() { }](Game_UserData/Game_UserData_get_HasRecordEnableTask_18d3bb0.cpp) — file offset `0x18d3bb0`, Ghidra address `019d7bb0`
- [public bool get_IsHadSubScriptionSuccessed() { }](Game_UserData/Game_UserData_get_IsHadSubScriptionSuccessed_18cede4.cpp) — file offset `0x18cede4`, Ghidra address `019d2de4`
- [public void set_IsHadSubScriptionSuccessed(bool value) { }](Game_UserData/Game_UserData_set_IsHadSubScriptionSuccessed_18ced90.cpp) — file offset `0x18ced90`, Ghidra address `019d2d90`
- [public int get_LastLeagueRank() { }](Game_UserData/Game_UserData_get_LastLeagueRank_18d4150.cpp) — file offset `0x18d4150`, Ghidra address `019d8150`
- [public void set_LastLeagueRank(int value) { }](Game_UserData/Game_UserData_set_LastLeagueRank_18d419c.cpp) — file offset `0x18d419c`, Ghidra address `019d819c`
- [public int get_LastLeagueScore() { }](Game_UserData/Game_UserData_get_LastLeagueScore_18d41f0.cpp) — file offset `0x18d41f0`, Ghidra address `019d81f0`
- [public void set_LastLeagueScore(int value) { }](Game_UserData/Game_UserData_set_LastLeagueScore_18d4238.cpp) — file offset `0x18d4238`, Ghidra address `019d8238`
- [public int get_LastWeekRank() { }](Game_UserData/Game_UserData_get_LastWeekRank_18d3f6c.cpp) — file offset `0x18d3f6c`, Ghidra address `019d7f6c`
- [public void set_LastWeekRank(int value) { }](Game_UserData/Game_UserData_set_LastWeekRank_18d3fb4.cpp) — file offset `0x18d3fb4`, Ghidra address `019d7fb4`
- [public int get_LastWeekTargetId() { }](Game_UserData/Game_UserData_get_LastWeekTargetId_18d40a4.cpp) — file offset `0x18d40a4`, Ghidra address `019d80a4`
- [public void set_LastWeekTargetId(int value) { }](Game_UserData/Game_UserData_set_LastWeekTargetId_18d40ec.cpp) — file offset `0x18d40ec`, Ghidra address `019d80ec`
- [public int get_LastWeekTargetNum() { }](Game_UserData/Game_UserData_get_LastWeekTargetNum_18d4008.cpp) — file offset `0x18d4008`, Ghidra address `019d8008`
- [public void set_LastWeekTargetNum(int value) { }](Game_UserData/Game_UserData_set_LastWeekTargetNum_18d4050.cpp) — file offset `0x18d4050`, Ghidra address `019d8050`
- [public bool get_OpenTextLogForRelease() { }](Game_UserData/Game_UserData_get_OpenTextLogForRelease_18cef34.cpp) — file offset `0x18cef34`, Ghidra address `019d2f34`
- [public void set_OpenTextLogForRelease(bool value) { }](Game_UserData/Game_UserData_set_OpenTextLogForRelease_18ceee0.cpp) — file offset `0x18ceee0`, Ghidra address `019d2ee0`
- [public int get_PlayGameCount() { }](Game_UserData/Game_UserData_get_PlayGameCount_18cf288.cpp) — file offset `0x18cf288`, Ghidra address `019d3288`
- [public void set_PlayGameCount(int value) { }](Game_UserData/Game_UserData_set_PlayGameCount_18cf234.cpp) — file offset `0x18cf234`, Ghidra address `019d3234`
- [public int get_StartIntAdCount() { }](Game_UserData/Game_UserData_get_StartIntAdCount_18c56b0.cpp) — file offset `0x18c56b0`, Ghidra address `019c96b0`
- [public void set_StartIntAdCount(int value) { }](Game_UserData/Game_UserData_set_StartIntAdCount_18c56f8.cpp) — file offset `0x18c56f8`, Ghidra address `019c96f8`
- [public int get_TotalAdCount() { }](Game_UserData/Game_UserData_get_TotalAdCount_18c55ac.cpp) — file offset `0x18c55ac`, Ghidra address `019c95ac`
- [public void set_TotalAdCount(int value) { }](Game_UserData/Game_UserData_set_TotalAdCount_18c55f4.cpp) — file offset `0x18c55f4`, Ghidra address `019c95f4`
- [public float get_TotalAdValue() { }](Game_UserData/Game_UserData_get_TotalAdValue_18cf32c.cpp) — file offset `0x18cf32c`, Ghidra address `019d332c`
- [public void set_TotalAdValue(float value) { }](Game_UserData/Game_UserData_set_TotalAdValue_18cf2d0.cpp) — file offset `0x18cf2d0`, Ghidra address `019d32d0`
- [public List<RoomRewardModel> get_WaitRewardList() { }](Game_UserData/Game_UserData_get_WaitRewardList_18d3d04.cpp) — file offset `0x18d3d04`, Ghidra address `019d7d04`
- [public void set_WaitRewardList(List<RoomRewardModel> value) { }](Game_UserData/Game_UserData_set_WaitRewardList_18d3ea4.cpp) — file offset `0x18d3ea4`, Ghidra address `019d7ea4`
- [public int get_WatchVideoCount() { }](Game_UserData/Game_UserData_get_WatchVideoCount_18cf1ec.cpp) — file offset `0x18cf1ec`, Ghidra address `019d31ec`
- [public void set_WatchVideoCount(int value) { }](Game_UserData/Game_UserData_set_WatchVideoCount_18cf198.cpp) — file offset `0x18cf198`, Ghidra address `019d3198`
- [public UserData() { }](Game_UserData/Game_UserData_UserData_18d428c.cpp) — file offset `0x18d428c`, Ghidra address `019d828c`
- [public void AddBombTool(int num) { }](Game_UserData/Game_UserData_AddBombTool_18cc248.cpp) — file offset `0x18cc248`, Ghidra address `019d0248`
- [public void AddCleanTool(int num) { }](Game_UserData/Game_UserData_AddCleanTool_18cbe1c.cpp) — file offset `0x18cbe1c`, Ghidra address `019cfe1c`
- [private void AddCompletedTaskCount() { }](Game_UserData/Game_UserData_AddCompletedTaskCount_18d2e3c.cpp) — file offset `0x18d2e3c`, Ghidra address `019d6e3c`
- [public void AddDailyTaskBoxTotalClaimCount() { }](Game_UserData/Game_UserData_AddDailyTaskBoxTotalClaimCount_18ceb94.cpp) — file offset `0x18ceb94`, Ghidra address `019d2b94`
- [public void AddDiamonds(int num) { }](Game_UserData/Game_UserData_AddDiamonds_18cb8cc.cpp) — file offset `0x18cb8cc`, Ghidra address `019cf8cc`
- [public void AddDiamondsWithoutBroadcast(int num) { }](Game_UserData/Game_UserData_AddDiamondsWithoutBroadcast_18cba58.cpp) — file offset `0x18cba58`, Ghidra address `019cfa58`
- [public void AddExp(int num) { }](Game_UserData/Game_UserData_AddExp_18ca6b8.cpp) — file offset `0x18ca6b8`, Ghidra address `019ce6b8`
- [public void AddLevel() { }](Game_UserData/Game_UserData_AddLevel_18c9b3c.cpp) — file offset `0x18c9b3c`, Ghidra address `019cdb3c`
- [public void AddLevelClick() { }](Game_UserData/Game_UserData_AddLevelClick_18cb5f4.cpp) — file offset `0x18cb5f4`, Ghidra address `019cf5f4`
- [public void AddLevelMerge() { }](Game_UserData/Game_UserData_AddLevelMerge_18cb6cc.cpp) — file offset `0x18cb6cc`, Ghidra address `019cf6cc`
- [public void AddLevelMergeScore(int score) { }](Game_UserData/Game_UserData_AddLevelMergeScore_18cb7a4.cpp) — file offset `0x18cb7a4`, Ghidra address `019cf7a4`
- [public void AddShakeTool(int num) { }](Game_UserData/Game_UserData_AddShakeTool_18ccaa0.cpp) — file offset `0x18ccaa0`, Ghidra address `019d0aa0`
- [public void AddTickets(int num) { }](Game_UserData/Game_UserData_AddTickets_18cbb94.cpp) — file offset `0x18cbb94`, Ghidra address `019cfb94`
- [public void AddTicketsWithoutBroadcast(int num) { }](Game_UserData/Game_UserData_AddTicketsWithoutBroadcast_18cbd80.cpp) — file offset `0x18cbd80`, Ghidra address `019cfd80`
- [public void AddUpgradeTool(int num) { }](Game_UserData/Game_UserData_AddUpgradeTool_18cc674.cpp) — file offset `0x18cc674`, Ghidra address `019d0674`
- [public void AddUserSkin(string skinName) { }](Game_UserData/Game_UserData_AddUserSkin_18d022c.cpp) — file offset `0x18d022c`, Ghidra address `019d422c`
- [public bool CanBuildCurrentRoomItem(int pendingTickets = 0) { }](Game_UserData/Game_UserData_CanBuildCurrentRoomItem_18c9fac.cpp) — file offset `0x18c9fac`, Ghidra address `019cdfac`
- [public void ClaimDailyReward(int day) { }](Game_UserData/Game_UserData_ClaimDailyReward_18cea7c.cpp) — file offset `0x18cea7c`, Ghidra address `019d2a7c`
- [public void ClearCurrentTaskRecord() { }](Game_UserData/Game_UserData_ClearCurrentTaskRecord_18d3a44.cpp) — file offset `0x18d3a44`, Ghidra address `019d7a44`
- [public void ClearLastGameData() { }](Game_UserData/Game_UserData_ClearLastGameData_18cd3f8.cpp) — file offset `0x18cd3f8`, Ghidra address `019d13f8`
- [public int GetBombToolNum() { }](Game_UserData/Game_UserData_GetBombToolNum_18cc308.cpp) — file offset `0x18cc308`, Ghidra address `019d0308`
- [private Color GetBrainrotLineColor(int grade) { }](Game_UserData/Game_UserData_GetBrainrotLineColor_18d0db8.cpp) — file offset `0x18d0db8`, Ghidra address `019d4db8`
- [private Color GetBrainrotMergeColor(int grade) { }](Game_UserData/Game_UserData_GetBrainrotMergeColor_18d2014.cpp) — file offset `0x18d2014`, Ghidra address `019d6014`
- [private Color GetCapybaraLineColor(int grade) { }](Game_UserData/Game_UserData_GetCapybaraLineColor_18d1004.cpp) — file offset `0x18d1004`, Ghidra address `019d5004`
- [private Color GetCapybaraMergeColor(int grade) { }](Game_UserData/Game_UserData_GetCapybaraMergeColor_18d2264.cpp) — file offset `0x18d2264`, Ghidra address `019d6264`
- [private Color GetChipsLineColor(int grade) { }](Game_UserData/Game_UserData_GetChipsLineColor_18d1934.cpp) — file offset `0x18d1934`, Ghidra address `019d5934`
- [private Color GetChipsMergeColor(int grade) { }](Game_UserData/Game_UserData_GetChipsMergeColor_18d2ba4.cpp) — file offset `0x18d2ba4`, Ghidra address `019d6ba4`
- [public int GetClaimedDailyRewardDay() { }](Game_UserData/Game_UserData_GetClaimedDailyRewardDay_18ce554.cpp) — file offset `0x18ce554`, Ghidra address `019d2554`
- [public int GetCleanToolNum() { }](Game_UserData/Game_UserData_GetCleanToolNum_18cbedc.cpp) — file offset `0x18cbedc`, Ghidra address `019cfedc`
- [public int GetCompletedTaskCount() { }](Game_UserData/Game_UserData_GetCompletedTaskCount_18d2df4.cpp) — file offset `0x18d2df4`, Ghidra address `019d6df4`
- [public string GetCurrentDailyRewardSkin() { }](Game_UserData/Game_UserData_GetCurrentDailyRewardSkin_18d072c.cpp) — file offset `0x18d072c`, Ghidra address `019d472c`
- [public RoomModel GetCurrentRoomModel() { }](Game_UserData/Game_UserData_GetCurrentRoomModel_18ca1c8.cpp) — file offset `0x18ca1c8`, Ghidra address `019ce1c8`
- [public int GetCurrentScore() { }](Game_UserData/Game_UserData_GetCurrentScore_18c9ab0.cpp) — file offset `0x18c9ab0`, Ghidra address `019cdab0`
- [public Color GetCurrentSkinLineColor(int grade) { }](Game_UserData/Game_UserData_GetCurrentSkinLineColor_18d08c0.cpp) — file offset `0x18d08c0`, Ghidra address `019d48c0`
- [public Color GetCurrentSkinMergeColor(int grade) { }](Game_UserData/Game_UserData_GetCurrentSkinMergeColor_18d1b80.cpp) — file offset `0x18d1b80`, Ghidra address `019d5b80`
- [public TaskItemData GetCurrentTaskItem() { }](Game_UserData/Game_UserData_GetCurrentTaskItem_18d2e94.cpp) — file offset `0x18d2e94`, Ghidra address `019d6e94`
- [public string GetCurrentTaskSkin() { }](Game_UserData/Game_UserData_GetCurrentTaskSkin_18d0598.cpp) — file offset `0x18d0598`, Ghidra address `019d4598`
- [public int GetDailyTaskBoxTotalClaimCount() { }](Game_UserData/Game_UserData_GetDailyTaskBoxTotalClaimCount_18ceb4c.cpp) — file offset `0x18ceb4c`, Ghidra address `019d2b4c`
- [public int GetDiamonds() { }](Game_UserData/Game_UserData_GetDiamonds_18cb888.cpp) — file offset `0x18cb888`, Ghidra address `019cf888`
- [private Color GetEverydayTreatsLineColor(int grade) { }](Game_UserData/Game_UserData_GetEverydayTreatsLineColor_18d16e8.cpp) — file offset `0x18d16e8`, Ghidra address `019d56e8`
- [private Color GetEverydayTreatsMergeColor(int grade) { }](Game_UserData/Game_UserData_GetEverydayTreatsMergeColor_18d2954.cpp) — file offset `0x18d2954`, Ghidra address `019d6954`
- [public int GetExp() { }](Game_UserData/Game_UserData_GetExp_18ca674.cpp) — file offset `0x18ca674`, Ghidra address `019ce674`
- [public int GetExpLevel() { }](Game_UserData/Game_UserData_GetExpLevel_18c70c4.cpp) — file offset `0x18c70c4`, Ghidra address `019cb0c4`
- [public int GetExpLevelUseTime(int lastExpLevel) { }](Game_UserData/Game_UserData_GetExpLevelUseTime_18cb404.cpp) — file offset `0x18cb404`, Ghidra address `019cf404`
- [private Color GetFruityPalsLineColor(int grade) { }](Game_UserData/Game_UserData_GetFruityPalsLineColor_18d1250.cpp) — file offset `0x18d1250`, Ghidra address `019d5250`
- [private Color GetFruityPalsMergeColor(int grade) { }](Game_UserData/Game_UserData_GetFruityPalsMergeColor_18d24b4.cpp) — file offset `0x18d24b4`, Ghidra address `019d64b4`
- [public int GetHistoryScore() { }](Game_UserData/Game_UserData_GetHistoryScore_18c9a14.cpp) — file offset `0x18c9a14`, Ghidra address `019cda14`
- [public int GetHistoryUnlockGrade() { }](Game_UserData/Game_UserData_GetHistoryUnlockGrade_18c9878.cpp) — file offset `0x18c9878`, Ghidra address `019cd878`
- [public int GetLevelClick(int lastExpLevel) { }](Game_UserData/Game_UserData_GetLevelClick_18cb480.cpp) — file offset `0x18cb480`, Ghidra address `019cf480`
- [public int GetLevelMerge(int lastExpLevel) { }](Game_UserData/Game_UserData_GetLevelMerge_18cb4fc.cpp) — file offset `0x18cb4fc`, Ghidra address `019cf4fc`
- [public int GetLevelMergeScore(int lastExpLevel) { }](Game_UserData/Game_UserData_GetLevelMergeScore_18cb578.cpp) — file offset `0x18cb578`, Ghidra address `019cf578`
- [public int GetNextSkinAccumulatedScore() { }](Game_UserData/Game_UserData_GetNextSkinAccumulatedScore_18d0198.cpp) — file offset `0x18d0198`, Ghidra address `019d4198`
- [public int GetNextSkinUnlockScore() { }](Game_UserData/Game_UserData_GetNextSkinUnlockScore_18d0150.cpp) — file offset `0x18d0150`, Ghidra address `019d4150`
- [private Color GetPlanetLineColor(int grade) { }](Game_UserData/Game_UserData_GetPlanetLineColor_18d149c.cpp) — file offset `0x18d149c`, Ghidra address `019d549c`
- [private Color GetPlanetMergeColor(int grade) { }](Game_UserData/Game_UserData_GetPlanetMergeColor_18d2704.cpp) — file offset `0x18d2704`, Ghidra address `019d6704`
- [public int GetPlayLevelUseTime(int lastPlayLevel) { }](Game_UserData/Game_UserData_GetPlayLevelUseTime_18c9d20.cpp) — file offset `0x18c9d20`, Ghidra address `019cdd20`
- [public int GetRoomLevel() { }](Game_UserData/Game_UserData_GetRoomLevel_18cdce4.cpp) — file offset `0x18cdce4`, Ghidra address `019d1ce4`
- [public List<String> GetRoomNames() { }](Game_UserData/Game_UserData_GetRoomNames_18cdae0.cpp) — file offset `0x18cdae0`, Ghidra address `019d1ae0`
- [public bool GetRoomStagedRewardCollected(string roomName, int stage) { }](Game_UserData/Game_UserData_GetRoomStagedRewardCollected_18ca554.cpp) — file offset `0x18ca554`, Ghidra address `019ce554`
- [public long GetRoomTaskUseTime(string roomName, string taskName) { }](Game_UserData/Game_UserData_GetRoomTaskUseTime_18cd990.cpp) — file offset `0x18cd990`, Ghidra address `019d1990`
- [public long GetRoomUseTime(string roomName) { }](Game_UserData/Game_UserData_GetRoomUseTime_18cd750.cpp) — file offset `0x18cd750`, Ghidra address `019d1750`
- [public int GetShakeToolNum() { }](Game_UserData/Game_UserData_GetShakeToolNum_18ccb60.cpp) — file offset `0x18ccb60`, Ghidra address `019d0b60`
- [public static string GetSimpleNumber(int number) { }](Game_UserData/Game_UserData_GetSimpleNumber_18cebec.cpp) — file offset `0x18cebec`, Ghidra address `019d2bec`
- [public int GetSkinUnlockedGrade() { }](Game_UserData/Game_UserData_GetSkinUnlockedGrade_18d3c58.cpp) — file offset `0x18d3c58`, Ghidra address `019d7c58`
- [public int GetTickets() { }](Game_UserData/Game_UserData_GetTickets_18ca33c.cpp) — file offset `0x18ca33c`, Ghidra address `019ce33c`
- [public int GetTotalLevels() { }](Game_UserData/Game_UserData_GetTotalLevels_18c9af8.cpp) — file offset `0x18c9af8`, Ghidra address `019cdaf8`
- [public int GetUpgradeToolNum() { }](Game_UserData/Game_UserData_GetUpgradeToolNum_18cc734.cpp) — file offset `0x18cc734`, Ghidra address `019d0734`
- [public List<String> GetUserSkins() { }](Game_UserData/Game_UserData_GetUserSkins_18cf7ac.cpp) — file offset `0x18cf7ac`, Ghidra address `019d37ac`
- [public string GetUsingSkin() { }](Game_UserData/Game_UserData_GetUsingSkin_18cf374.cpp) — file offset `0x18cf374`, Ghidra address `019d3374`
- [private Color GetWatermelonSkinLineColor(int grade) { }](Game_UserData/Game_UserData_GetWatermelonSkinLineColor_18d0b6c.cpp) — file offset `0x18d0b6c`, Ghidra address `019d4b6c`
- [private Color GetWatermelonSkinMergeColor(int grade) { }](Game_UserData/Game_UserData_GetWatermelonSkinMergeColor_18d1dc4.cpp) — file offset `0x18d1dc4`, Ghidra address `019d5dc4`
- [public bool HasRoomTaskStarted(string roomName, string taskName) { }](Game_UserData/Game_UserData_HasRoomTaskStarted_18cd838.cpp) — file offset `0x18cd838`, Ghidra address `019d1838`
- [public void IncrementGamesWithoutBuild() { }](Game_UserData/Game_UserData_IncrementGamesWithoutBuild_18c9ef8.cpp) — file offset `0x18c9ef8`, Ghidra address `019cdef8`
- [public bool IsFirstShowDailyReward() { }](Game_UserData/Game_UserData_IsFirstShowDailyReward_18ce598.cpp) — file offset `0x18ce598`, Ghidra address `019d2598`
- [public bool IsRoomFinished(string roomName) { }](Game_UserData/Game_UserData_IsRoomFinished_18cda8c.cpp) — file offset `0x18cda8c`, Ghidra address `019d1a8c`
- [public bool IsTodayDailyRewardCollected() { }](Game_UserData/Game_UserData_IsTodayDailyRewardCollected_18ce1fc.cpp) — file offset `0x18ce1fc`, Ghidra address `019d21fc`
- [public bool IsTodayDailyRewardShown() { }](Game_UserData/Game_UserData_IsTodayDailyRewardShown_18ce3a8.cpp) — file offset `0x18ce3a8`, Ghidra address `019d23a8`
- [public bool IsTodayRemoveAdShown() { }](Game_UserData/Game_UserData_IsTodayRemoveAdShown_18cdf78.cpp) — file offset `0x18cdf78`, Ghidra address `019d1f78`
- [public bool IsTodayStarterPackShown() { }](Game_UserData/Game_UserData_IsTodayStarterPackShown_18cdd24.cpp) — file offset `0x18cdd24`, Ghidra address `019d1d24`
- [public bool IsTodaySubscriptionDailyClaimed() { }](Game_UserData/Game_UserData_IsTodaySubscriptionDailyClaimed_18ce690.cpp) — file offset `0x18ce690`, Ghidra address `019d2690`
- [public bool IsUserActuallyHasSkin(string skinName) { }](Game_UserData/Game_UserData_IsUserActuallyHasSkin_18cfd00.cpp) — file offset `0x18cfd00`, Ghidra address `019d3d00`
- [public bool IsUserHasSkin(string skinName) { }](Game_UserData/Game_UserData_IsUserHasSkin_18cf48c.cpp) — file offset `0x18cf48c`, Ghidra address `019d348c`
- [public void LoadLastGameData() { }](Game_UserData/Game_UserData_LoadLastGameData_18ccecc.cpp) — file offset `0x18ccecc`, Ghidra address `019d0ecc`
- [private void LogLevelUp() { }](Game_UserData/Game_UserData_LogLevelUp_18cab7c.cpp) — file offset `0x18cab7c`, Ghidra address `019ceb7c`
- [public bool NeedShowDailyReward() { }](Game_UserData/Game_UserData_NeedShowDailyReward_18ce1cc.cpp) — file offset `0x18ce1cc`, Ghidra address `019d21cc`
- [public string RandomName() { }](Game_UserData/Game_UserData_RandomName_18cd5a4.cpp) — file offset `0x18cd5a4`, Ghidra address `019d15a4`
- [public void RecordOnceGameData() { }](Game_UserData/Game_UserData_RecordOnceGameData_18caf38.cpp) — file offset `0x18caf38`, Ghidra address `019cef38`
- [public void RecordQuitExpLevelData(int lastExpLevel) { }](Game_UserData/Game_UserData_RecordQuitExpLevelData_18ca884.cpp) — file offset `0x18ca884`, Ghidra address `019ce884`
- [public void RecordQuitPlayLevelData(int lastPlayLevel) { }](Game_UserData/Game_UserData_RecordQuitPlayLevelData_18c9b9c.cpp) — file offset `0x18c9b9c`, Ghidra address `019cdb9c`
- [public void RecordStartExpLevelData() { }](Game_UserData/Game_UserData_RecordStartExpLevelData_18caa2c.cpp) — file offset `0x18caa2c`, Ghidra address `019cea2c`
- [public void RecordStartPlayLevelData() { }](Game_UserData/Game_UserData_RecordStartPlayLevelData_18c9e18.cpp) — file offset `0x18c9e18`, Ghidra address `019cde18`
- [public void ResetCurrentPlayLevelData(int lastPlayLevel) { }](Game_UserData/Game_UserData_ResetCurrentPlayLevelData_18c9d9c.cpp) — file offset `0x18c9d9c`, Ghidra address `019cdd9c`
- [public void ResetGamesWithoutBuild() { }](Game_UserData/Game_UserData_ResetGamesWithoutBuild_18c9f5c.cpp) — file offset `0x18c9f5c`, Ghidra address `019cdf5c`
- [public void ResetHistoryUnlockGrade() { }](Game_UserData/Game_UserData_ResetHistoryUnlockGrade_18c992c.cpp) — file offset `0x18c992c`, Ghidra address `019cd92c`
- [public void SaveAvatar(int index) { }](Game_UserData/Game_UserData_SaveAvatar_18cd4c8.cpp) — file offset `0x18cd4c8`, Ghidra address `019d14c8`
- [public void SaveCurrentScore(int score) { }](Game_UserData/Game_UserData_SaveCurrentScore_18c9a5c.cpp) — file offset `0x18c9a5c`, Ghidra address `019cda5c`
- [public void SaveHistoryUnlockGrade(int grade) { }](Game_UserData/Game_UserData_SaveHistoryUnlockGrade_18c98c0.cpp) — file offset `0x18c98c0`, Ghidra address `019cd8c0`
- [public void SaveLastShowDailyReward() { }](Game_UserData/Game_UserData_SaveLastShowDailyReward_18ce5e8.cpp) — file offset `0x18ce5e8`, Ghidra address `019d25e8`
- [public void SaveLastShowRemoveAd() { }](Game_UserData/Game_UserData_SaveLastShowRemoveAd_18ce124.cpp) — file offset `0x18ce124`, Ghidra address `019d2124`
- [public void SaveLastShowStarterPack() { }](Game_UserData/Game_UserData_SaveLastShowStarterPack_18cded0.cpp) — file offset `0x18cded0`, Ghidra address `019d1ed0`
- [public void SaveRoom(string roomName) { }](Game_UserData/Game_UserData_SaveRoom_18cdbb8.cpp) — file offset `0x18cdbb8`, Ghidra address `019d1bb8`
- [public void SaveRoomStartTime(string roomName) { }](Game_UserData/Game_UserData_SaveRoomStartTime_18cd678.cpp) — file offset `0x18cd678`, Ghidra address `019d1678`
- [public void SaveRoomTaskStartTime(string roomName, string taskName) { }](Game_UserData/Game_UserData_SaveRoomTaskStartTime_18cd8b4.cpp) — file offset `0x18cd8b4`, Ghidra address `019d18b4`
- [public void SaveSubscriptionDailyClaimed() { }](Game_UserData/Game_UserData_SaveSubscriptionDailyClaimed_18ce934.cpp) — file offset `0x18ce934`, Ghidra address `019d2934`
- [public void SaveUserName(string name) { }](Game_UserData/Game_UserData_SaveUserName_18cd624.cpp) — file offset `0x18cd624`, Ghidra address `019d1624`
- [public void SetHistoryScore(int score) { }](Game_UserData/Game_UserData_SetHistoryScore_18c997c.cpp) — file offset `0x18c997c`, Ghidra address `019cd97c`
- [public void SetNextSkinAccumulatedScore(int accumulatedScore) { }](Game_UserData/Game_UserData_SetNextSkinAccumulatedScore_18d01e0.cpp) — file offset `0x18d01e0`, Ghidra address `019d41e0`
- [public void SetNextSkinUnlockScore(int retainScore) { }](Game_UserData/Game_UserData_SetNextSkinUnlockScore_18d054c.cpp) — file offset `0x18d054c`, Ghidra address `019d454c`
- [public void SetRoomStagedRewardCollected(string roomName, int stage) { }](Game_UserData/Game_UserData_SetRoomStagedRewardCollected_18ca5e4.cpp) — file offset `0x18ca5e4`, Ghidra address `019ce5e4`
- [public void SetSkinUnlockedGrade(int grade) { }](Game_UserData/Game_UserData_SetSkinUnlockedGrade_18d3ca0.cpp) — file offset `0x18d3ca0`, Ghidra address `019d7ca0`
- [public void SetTickets(int num) { }](Game_UserData/Game_UserData_SetTickets_18cbaf4.cpp) — file offset `0x18cbaf4`, Ghidra address `019cfaf4`
- [public void SetUsingSkin(string skinName, string where = "Home") { }](Game_UserData/Game_UserData_SetUsingSkin_18cf51c.cpp) — file offset `0x18cf51c`, Ghidra address `019d351c`
- [public bool ShouldSmartJumpToRoom(int pendingTickets = 0) { }](Game_UserData/Game_UserData_ShouldSmartJumpToRoom_18ca380.cpp) — file offset `0x18ca380`, Ghidra address `019ce380`
- [public void TryCompleteCurrentTask() { }](Game_UserData/Game_UserData_TryCompleteCurrentTask_18d3528.cpp) — file offset `0x18d3528`, Ghidra address `019d7528`
- [public void TryUpdateCurrentTask(int targetGrade, bool delayCompleteTask) { }](Game_UserData/Game_UserData_TryUpdateCurrentTask_18d34d4.cpp) — file offset `0x18d34d4`, Ghidra address `019d74d4`
- [private void UpdateCurrentTaskItem() { }](Game_UserData/Game_UserData_UpdateCurrentTaskItem_18d2f48.cpp) — file offset `0x18d2f48`, Ghidra address `019d6f48`
- [public void UpdateSkinScoreProgressHeadless(int addedScore) { }](Game_UserData/Game_UserData_UpdateSkinScoreProgressHeadless_18cff30.cpp) — file offset `0x18cff30`, Ghidra address `019d3f30`
- [public void UseBombTool(int num) { }](Game_UserData/Game_UserData_UseBombTool_18cc384.cpp) — file offset `0x18cc384`, Ghidra address `019d0384`
- [public void UseCleanTool(int num) { }](Game_UserData/Game_UserData_UseCleanTool_18cbf58.cpp) — file offset `0x18cbf58`, Ghidra address `019cff58`
- [public void UseDiamonds(int num) { }](Game_UserData/Game_UserData_UseDiamonds_18cb9ac.cpp) — file offset `0x18cb9ac`, Ghidra address `019cf9ac`
- [public string UserAvatar() { }](Game_UserData/Game_UserData_UserAvatar_18cd46c.cpp) — file offset `0x18cd46c`, Ghidra address `019d146c`
- [public string UserName() { }](Game_UserData/Game_UserData_UserName_18cd530.cpp) — file offset `0x18cd530`, Ghidra address `019d1530`
- [public void UseShakeTool(int num) { }](Game_UserData/Game_UserData_UseShakeTool_18ccbdc.cpp) — file offset `0x18ccbdc`, Ghidra address `019d0bdc`
- [public void UseTickets(int num) { }](Game_UserData/Game_UserData_UseTickets_18cbc74.cpp) — file offset `0x18cbc74`, Ghidra address `019cfc74`
- [public void UseTicketsWithoutBroadcast(int num) { }](Game_UserData/Game_UserData_UseTicketsWithoutBroadcast_18cbd20.cpp) — file offset `0x18cbd20`, Ghidra address `019cfd20`
- [public void UseUpgradeTool(int num) { }](Game_UserData/Game_UserData_UseUpgradeTool_18cc7b0.cpp) — file offset `0x18cc7b0`, Ghidra address `019d07b0`

## Game.UserData.<>c__DisplayClass158_0

- [public <>c__DisplayClass158_0() { }](Game_UserData___c__DisplayClass158_0/Game_UserData___c__DisplayClass158_0___c__DisplayClass158_0_18d4354.cpp) — file offset `0x18d4354`, Ghidra address `019d8354`
- [internal bool <UpdateCurrentTaskItem>b__0(TaskItemData item) { }](Game_UserData___c__DisplayClass158_0/Game_UserData___c__DisplayClass158_0__UpdateCurrentTaskItem_b__0_18d435c.cpp) — file offset `0x18d435c`, Ghidra address `019d835c`

## HomePage

- [public HomePage() { }](HomePage/HomePage_HomePage_18a2d98.cpp) — file offset `0x18a2d98`, Ghidra address `019a6d98`
- [private void BuildRoom() { }](HomePage/HomePage_BuildRoom_18a18ec.cpp) — file offset `0x18a18ec`, Ghidra address `019a58ec`
- [private void EnterBuilding() { }](HomePage/HomePage_EnterBuilding_18a1958.cpp) — file offset `0x18a1958`, Ghidra address `019a5958`
- [internal virtual void Init() { }](HomePage/HomePage_Init_18a1798.cpp) — file offset `0x18a1798`, Ghidra address `019a5798`
- [public void OnDisable() { }](HomePage/HomePage_OnDisable_18a2018.cpp) — file offset `0x18a2018`, Ghidra address `019a6018`
- [private void OnEnable() { }](HomePage/HomePage_OnEnable_18a1f00.cpp) — file offset `0x18a1f00`, Ghidra address `019a5f00`
- [public static void OpenDailyQuest() { }](HomePage/HomePage_OpenDailyQuest_18a2b64.cpp) — file offset `0x18a2b64`, Ghidra address `019a6b64`
- [public static void OpenRank(Button button, string where) { }](HomePage/HomePage_OpenRank_18a27a4.cpp) — file offset `0x18a27a4`, Ghidra address `019a67a4`
- [private static void OpenRankDialog(string where) { }](HomePage/HomePage_OpenRankDialog_18a2974.cpp) — file offset `0x18a2974`, Ghidra address `019a6974`
- [public static void OpenRoomBuild(bool fromGame = false) { }](HomePage/HomePage_OpenRoomBuild_18a2180.cpp) — file offset `0x18a2180`, Ghidra address `019a6180`
- [private void RefreshDailyRewardButton() { }](HomePage/HomePage_RefreshDailyRewardButton_18a1e38.cpp) — file offset `0x18a1e38`, Ghidra address `019a5e38`
- [private void RefreshRemoveAd() { }](HomePage/HomePage_RefreshRemoveAd_18a1c74.cpp) — file offset `0x18a1c74`, Ghidra address `019a5c74`
- [private void RefreshStartPack() { }](HomePage/HomePage_RefreshStartPack_18a1da4.cpp) — file offset `0x18a1da4`, Ghidra address `019a5da4`
- [internal virtual void Show() { }](HomePage/HomePage_Show_18a19d0.cpp) — file offset `0x18a19d0`, Ghidra address `019a59d0`

## HomePage.<>c__DisplayClass21_0

- [public <>c__DisplayClass21_0() { }](HomePage___c__DisplayClass21_0/HomePage___c__DisplayClass21_0___c__DisplayClass21_0_18a296c.cpp) — file offset `0x18a296c`, Ghidra address `019a696c`
- [internal void <OpenRank>b__0(bool result) { }](HomePage___c__DisplayClass21_0/HomePage___c__DisplayClass21_0__OpenRank_b__0_18a2eb8.cpp) — file offset `0x18a2eb8`, Ghidra address `019a6eb8`

## HomeView

- [public HomeView() { }](HomeView/HomeView_HomeView_18a4cf8.cpp) — file offset `0x18a4cf8`, Ghidra address `019a8cf8`
- [private void CheckAndShowDailyQuest() { }](HomeView/HomeView_CheckAndShowDailyQuest_18a49e8.cpp) — file offset `0x18a49e8`, Ghidra address `019a89e8`
- [private void CheckAndShowDialogs() { }](HomeView/HomeView_CheckAndShowDialogs_18a3858.cpp) — file offset `0x18a3858`, Ghidra address `019a7858`
- [private void CheckWeeklyLeagueReward() { }](HomeView/HomeView_CheckWeeklyLeagueReward_18a4350.cpp) — file offset `0x18a4350`, Ghidra address `019a8350`
- [public virtual void Close() { }](HomeView/HomeView_Close_18a3c84.cpp) — file offset `0x18a3c84`, Ghidra address `019a7c84`
- [private void CloseInfo() { }](HomeView/HomeView_CloseInfo_18a32c0.cpp) — file offset `0x18a32c0`, Ghidra address `019a72c0`
- [private void GetSkinData() { }](HomeView/HomeView_GetSkinData_18a37f4.cpp) — file offset `0x18a37f4`, Ghidra address `019a77f4`
- [public virtual void Init(Object[] data) { }](HomeView/HomeView_Init_18a2fc8.cpp) — file offset `0x18a2fc8`, Ghidra address `019a6fc8`
- [private void InitTest() { }](HomeView/HomeView_InitTest_18a3a5c.cpp) — file offset `0x18a3a5c`, Ghidra address `019a7a5c`
- [public virtual void Show() { }](HomeView/HomeView_Show_18a36ac.cpp) — file offset `0x18a36ac`, Ghidra address `019a76ac`
- [private void ShowDailyReward() { }](HomeView/HomeView_ShowDailyReward_18a3ad0.cpp) — file offset `0x18a3ad0`, Ghidra address `019a7ad0`
- [public void ShowInfoRoot(RectTransform btnInfoTrans, string skinName) { }](HomeView/HomeView_ShowInfoRoot_18a3310.cpp) — file offset `0x18a3310`, Ghidra address `019a7310`
- [private void ShowRemoveAdDialog() { }](HomeView/HomeView_ShowRemoveAdDialog_18a3144.cpp) — file offset `0x18a3144`, Ghidra address `019a7144`
- [private void ShowSubscriptionDailyReward() { }](HomeView/HomeView_ShowSubscriptionDailyReward_18a40d0.cpp) — file offset `0x18a40d0`, Ghidra address `019a80d0`
- [private void TryGainRankSkin() { }](HomeView/HomeView_TryGainRankSkin_18a4a60.cpp) — file offset `0x18a4a60`, Ghidra address `019a8a60`

## HomeView.<CollectTicket>d__10

- [private override bool MoveNext() { }](HomeView__CollectTicket_d__10/HomeView__CollectTicket_d__10_MoveNext_18a4eb8.cpp) — file offset `0x18a4eb8`, Ghidra address `019a8eb8`

## HomeView.<WaitAndShowDailyQuest>d__25

- [private override bool MoveNext() { }](HomeView__WaitAndShowDailyQuest_d__25/HomeView__WaitAndShowDailyQuest_d__25_MoveNext_18a5a3c.cpp) — file offset `0x18a5a3c`, Ghidra address `019a9a3c`

## MainBasePage

- [protected MainBasePage() { }](MainBasePage/MainBasePage_MainBasePage_18a168c.cpp) — file offset `0x18a168c`, Ghidra address `019a568c`
- [private void Awake() { }](MainBasePage/MainBasePage_Awake_18a5bb4.cpp) — file offset `0x18a5bb4`, Ghidra address `019a9bb4`
- [internal override void Hide() { }](MainBasePage/MainBasePage_Hide_18a5c1c.cpp) — file offset `0x18a5c1c`, Ghidra address `019a9c1c`
- [internal override void Show() { }](MainBasePage/MainBasePage_Show_18a11d0.cpp) — file offset `0x18a11d0`, Ghidra address `019a51d0`

## MergeFruit

- [public GameState get_GameState() { }](MergeFruit/MergeFruit_get_GameState_18799a8.cpp) — file offset `0x18799a8`, Ghidra address `0197d9a8`
- [public bool get_StartedFinishGame() { }](MergeFruit/MergeFruit_get_StartedFinishGame_18799b0.cpp) — file offset `0x18799b0`, Ghidra address `0197d9b0`
- [public MergeFruit() { }](MergeFruit/MergeFruit_MergeFruit_187f9d8.cpp) — file offset `0x187f9d8`, Ghidra address `019839d8`
- [private void Awake() { }](MergeFruit/MergeFruit_Awake_18799b8.cpp) — file offset `0x18799b8`, Ghidra address `0197d9b8`
- [private void BoxAdapt() { }](MergeFruit/MergeFruit_BoxAdapt_187c64c.cpp) — file offset `0x187c64c`, Ghidra address `0198064c`
- [public bool CanBombOrUpgradeOrShake() { }](MergeFruit/MergeFruit_CanBombOrUpgradeOrShake_187eefc.cpp) — file offset `0x187eefc`, Ghidra address `01982efc`
- [public void CancelUseBomb() { }](MergeFruit/MergeFruit_CancelUseBomb_187ecbc.cpp) — file offset `0x187ecbc`, Ghidra address `01982cbc`
- [public void CancelUseClean() { }](MergeFruit/MergeFruit_CancelUseClean_187e9ec.cpp) — file offset `0x187e9ec`, Ghidra address `019829ec`
- [public void CancelUseShake() { }](MergeFruit/MergeFruit_CancelUseShake_187f6f4.cpp) — file offset `0x187f6f4`, Ghidra address `019836f4`
- [public void CancelUseUpgrade() { }](MergeFruit/MergeFruit_CancelUseUpgrade_187eb74.cpp) — file offset `0x187eb74`, Ghidra address `01982b74`
- [public bool CanClean() { }](MergeFruit/MergeFruit_CanClean_187ed90.cpp) — file offset `0x187ed90`, Ghidra address `01982d90`
- [public Rect CaptureRect(Camera fruitCamera) { }](MergeFruit/MergeFruit_CaptureRect_187df14.cpp) — file offset `0x187df14`, Ghidra address `01981f14`
- [private void ChangeCurrentIndicatorColor() { }](MergeFruit/MergeFruit_ChangeCurrentIndicatorColor_187c398.cpp) — file offset `0x187c398`, Ghidra address `01980398`
- [private void ChangeFruitsFinishStates(Action endAction) { }](MergeFruit/MergeFruit_ChangeFruitsFinishStates_187dae4.cpp) — file offset `0x187dae4`, Ghidra address `01981ae4`
- [public void CheckRedLine() { }](MergeFruit/MergeFruit_CheckRedLine_1877e48.cpp) — file offset `0x1877e48`, Ghidra address `0197be48`
- [private void CleanToolAction() { }](MergeFruit/MergeFruit_CleanToolAction_187d968.cpp) — file offset `0x187d968`, Ghidra address `01981968`
- [public void ClearFruitsByRevive() { }](MergeFruit/MergeFruit_ClearFruitsByRevive_187cf8c.cpp) — file offset `0x187cf8c`, Ghidra address `01980f8c`
- [public void ClearFruitsPrefs() { }](MergeFruit/MergeFruit_ClearFruitsPrefs_187e47c.cpp) — file offset `0x187e47c`, Ghidra address `0198247c`
- [public void ClearStatus() { }](MergeFruit/MergeFruit_ClearStatus_187d9a4.cpp) — file offset `0x187d9a4`, Ghidra address `019819a4`
- [private void CloseTaskCompleteView() { }](MergeFruit/MergeFruit_CloseTaskCompleteView_187e474.cpp) — file offset `0x187e474`, Ghidra address `01982474`
- [public GameObject CreateFruitItem(int index, Vector3 pos) { }](MergeFruit/MergeFruit_CreateFruitItem_1878ab8.cpp) — file offset `0x1878ab8`, Ghidra address `0197cab8`
- [private void CreateRandomFruitItem() { }](MergeFruit/MergeFruit_CreateRandomFruitItem_187a5cc.cpp) — file offset `0x187a5cc`, Ghidra address `0197e5cc`
- [public float DeadPositionY() { }](MergeFruit/MergeFruit_DeadPositionY_1876854.cpp) — file offset `0x1876854`, Ghidra address `0197a854`
- [private void DestroyChildren(Transform root) { }](MergeFruit/MergeFruit_DestroyChildren_187cc04.cpp) — file offset `0x187cc04`, Ghidra address `01980c04`
- [private void DestroyCurrentFruit() { }](MergeFruit/MergeFruit_DestroyCurrentFruit_187d188.cpp) — file offset `0x187d188`, Ghidra address `01981188`
- [public void DoToolBomb(Action action) { }](MergeFruit/MergeFruit_DoToolBomb_187f300.cpp) — file offset `0x187f300`, Ghidra address `01983300`
- [public void DoToolClean() { }](MergeFruit/MergeFruit_DoToolClean_187f068.cpp) — file offset `0x187f068`, Ghidra address `01983068`
- [public void DoToolCleanGuide(Action action) { }](MergeFruit/MergeFruit_DoToolCleanGuide_187f148.cpp) — file offset `0x187f148`, Ghidra address `01983148`
- [public void DoToolShake(Action shakeStartAction, Action finishAction) { }](MergeFruit/MergeFruit_DoToolShake_187f5a8.cpp) — file offset `0x187f5a8`, Ghidra address `019835a8`
- [public void DoToolUpgrade(Action action) { }](MergeFruit/MergeFruit_DoToolUpgrade_187f3f0.cpp) — file offset `0x187f3f0`, Ghidra address `019833f0`
- [public void EnterGame() { }](MergeFruit/MergeFruit_EnterGame_187da4c.cpp) — file offset `0x187da4c`, Ghidra address `01981a4c`
- [public void FinishGame() { }](MergeFruit/MergeFruit_FinishGame_18768cc.cpp) — file offset `0x18768cc`, Ghidra address `0197a8cc`
- [private void FixedUpdate() { }](MergeFruit/MergeFruit_FixedUpdate_187bfe0.cpp) — file offset `0x187bfe0`, Ghidra address `0197ffe0`
- [public void FixPenetration() { }](MergeFruit/MergeFruit_FixPenetration_187746c.cpp) — file offset `0x187746c`, Ghidra address `0197b46c`
- [public Vector2 GetBoxBottomScreenY() { }](MergeFruit/MergeFruit_GetBoxBottomScreenY_187ca54.cpp) — file offset `0x187ca54`, Ghidra address `01980a54`
- [private void HideCurrentFruit() { }](MergeFruit/MergeFruit_HideCurrentFruit_187c2dc.cpp) — file offset `0x187c2dc`, Ghidra address `019802dc`
- [private void HideCurrentIndicator() { }](MergeFruit/MergeFruit_HideCurrentIndicator_187c304.cpp) — file offset `0x187c304`, Ghidra address `01980304`
- [private void InitEdges() { }](MergeFruit/MergeFruit_InitEdges_1879eb8.cpp) — file offset `0x1879eb8`, Ghidra address `0197deb8`
- [private bool IsTouchDown() { }](MergeFruit/MergeFruit_IsTouchDown_187b134.cpp) — file offset `0x187b134`, Ghidra address `0197f134`
- [private bool IsTouchMove() { }](MergeFruit/MergeFruit_IsTouchMove_187bb54.cpp) — file offset `0x187bb54`, Ghidra address `0197fb54`
- [private bool IsTouchUp() { }](MergeFruit/MergeFruit_IsTouchUp_187bd4c.cpp) — file offset `0x187bd4c`, Ghidra address `0197fd4c`
- [private bool IsUICover() { }](MergeFruit/MergeFruit_IsUICover_187b1bc.cpp) — file offset `0x187b1bc`, Ghidra address `0197f1bc`
- [private bool IsUsingBomb() { }](MergeFruit/MergeFruit_IsUsingBomb_187b598.cpp) — file offset `0x187b598`, Ghidra address `0197f598`
- [private bool IsUsingClean() { }](MergeFruit/MergeFruit_IsUsingClean_187b2bc.cpp) — file offset `0x187b2bc`, Ghidra address `0197f2bc`
- [private bool IsUsingUpgrade() { }](MergeFruit/MergeFruit_IsUsingUpgrade_187b81c.cpp) — file offset `0x187b81c`, Ghidra address `0197f81c`
- [private bool IsUType() { }](MergeFruit/MergeFruit_IsUType_187c5e4.cpp) — file offset `0x187c5e4`, Ghidra address `019805e4`
- [private void LoadFruits() { }](MergeFruit/MergeFruit_LoadFruits_1879fc8.cpp) — file offset `0x1879fc8`, Ghidra address `0197dfc8`
- [public void NewStart() { }](MergeFruit/MergeFruit_NewStart_187d228.cpp) — file offset `0x187d228`, Ghidra address `01981228`
- [private void OnApplicationPause(bool pauseStatus) { }](MergeFruit/MergeFruit_OnApplicationPause_187e6b8.cpp) — file offset `0x187e6b8`, Ghidra address `019826b8`
- [private void OnApplicationQuit() { }](MergeFruit/MergeFruit_OnApplicationQuit_187e4d8.cpp) — file offset `0x187e4d8`, Ghidra address `019824d8`
- [private void OnDestroy() { }](MergeFruit/MergeFruit_OnDestroy_1879c58.cpp) — file offset `0x1879c58`, Ghidra address `0197dc58`
- [private void OnDrawGizmos() { }](MergeFruit/MergeFruit_OnDrawGizmos_187c530.cpp) — file offset `0x187c530`, Ghidra address `01980530`
- [private void OnGUI() { }](MergeFruit/MergeFruit_OnGUI_187ab94.cpp) — file offset `0x187ab94`, Ghidra address `0197eb94`
- [private void OnSwitchSkin(string skinName) { }](MergeFruit/MergeFruit_OnSwitchSkin_187c5ac.cpp) — file offset `0x187c5ac`, Ghidra address `019805ac`
- [private void OpenTaskCompleteView() { }](MergeFruit/MergeFruit_OpenTaskCompleteView_187e468.cpp) — file offset `0x187e468`, Ghidra address `01982468`
- [public void PrepareForCapture() { }](MergeFruit/MergeFruit_PrepareForCapture_187de74.cpp) — file offset `0x187de74`, Ghidra address `01981e74`
- [public void QuitGame() { }](MergeFruit/MergeFruit_QuitGame_187a674.cpp) — file offset `0x187a674`, Ghidra address `0197e674`
- [private void QuitGameRecord() { }](MergeFruit/MergeFruit_QuitGameRecord_187e4e8.cpp) — file offset `0x187e4e8`, Ghidra address `019824e8`
- [private void RandomNextFruit() { }](MergeFruit/MergeFruit_RandomNextFruit_187a5a8.cpp) — file offset `0x187a5a8`, Ghidra address `0197e5a8`
- [private void ReleaseCurrentFruit() { }](MergeFruit/MergeFruit_ReleaseCurrentFruit_187bdd4.cpp) — file offset `0x187bdd4`, Ghidra address `0197fdd4`
- [private void ResetFrictionGravity() { }](MergeFruit/MergeFruit_ResetFrictionGravity_187e844.cpp) — file offset `0x187e844`, Ghidra address `01982844`
- [private void ResetLastFruitPosByCurrent() { }](MergeFruit/MergeFruit_ResetLastFruitPosByCurrent_187cf54.cpp) — file offset `0x187cf54`, Ghidra address `01980f54`
- [private void ResetLastFruitPosByLine() { }](MergeFruit/MergeFruit_ResetLastFruitPosByLine_187a57c.cpp) — file offset `0x187a57c`, Ghidra address `0197e57c`
- [private void ResetStatus() { }](MergeFruit/MergeFruit_ResetStatus_187d0d8.cpp) — file offset `0x187d0d8`, Ghidra address `019810d8`
- [public void Retry() { }](MergeFruit/MergeFruit_Retry_187d670.cpp) — file offset `0x187d670`, Ghidra address `01981670`
- [private void SaveFruits() { }](MergeFruit/MergeFruit_SaveFruits_187a718.cpp) — file offset `0x187a718`, Ghidra address `0197e718`
- [private void ShowCurrentFruit() { }](MergeFruit/MergeFruit_ShowCurrentFruit_187c330.cpp) — file offset `0x187c330`, Ghidra address `01980330`
- [private void ShowCurrentIndicator() { }](MergeFruit/MergeFruit_ShowCurrentIndicator_187c358.cpp) — file offset `0x187c358`, Ghidra address `01980358`
- [private void StartCreateRandomFruitCoroutine() { }](MergeFruit/MergeFruit_StartCreateRandomFruitCoroutine_187e3ac.cpp) — file offset `0x187e3ac`, Ghidra address `019823ac`
- [private void StartExpCountdown() { }](MergeFruit/MergeFruit_StartExpCountdown_187a63c.cpp) — file offset `0x187a63c`, Ghidra address `0197e63c`
- [private void StartFruitDragging(Vector2 touchPosition) { }](MergeFruit/MergeFruit_StartFruitDragging_187bab0.cpp) — file offset `0x187bab0`, Ghidra address `0197fab0`
- [public void StartGame(PlayGameView gameView) { }](MergeFruit/MergeFruit_StartGame_1879dec.cpp) — file offset `0x1879dec`, Ghidra address `0197ddec`
- [private void StartGameRecord() { }](MergeFruit/MergeFruit_StartGameRecord_1879e40.cpp) — file offset `0x1879e40`, Ghidra address `0197de40`
- [public void StartRedLineAnimation() { }](MergeFruit/MergeFruit_StartRedLineAnimation_187e138.cpp) — file offset `0x187e138`, Ghidra address `01982138`
- [private void StopCreateRandomFruitCoroutine() { }](MergeFruit/MergeFruit_StopCreateRandomFruitCoroutine_187ab80.cpp) — file offset `0x187ab80`, Ghidra address `0197eb80`
- [private void StopExpCountdown() { }](MergeFruit/MergeFruit_StopExpCountdown_187e6dc.cpp) — file offset `0x187e6dc`, Ghidra address `019826dc`
- [public void StopFixPenetration() { }](MergeFruit/MergeFruit_StopFixPenetration_18793d4.cpp) — file offset `0x18793d4`, Ghidra address `0197d3d4`
- [public void StopRedLineAnimation() { }](MergeFruit/MergeFruit_StopRedLineAnimation_187aa30.cpp) — file offset `0x187aa30`, Ghidra address `0197ea30`
- [public void TestDropLine() { }](MergeFruit/MergeFruit_TestDropLine_187f75c.cpp) — file offset `0x187f75c`, Ghidra address `0198375c`
- [public bool TryGetBoxSpriteTopScreenY(out float screenY) { }](MergeFruit/MergeFruit_TryGetBoxSpriteTopScreenY_187ca94.cpp) — file offset `0x187ca94`, Ghidra address `01980a94`
- [private void Update() { }](MergeFruit/MergeFruit_Update_187b00c.cpp) — file offset `0x187b00c`, Ghidra address `0197f00c`
- [private void UpdateCurrentIndicatorPosition() { }](MergeFruit/MergeFruit_UpdateCurrentIndicatorPosition_187c5b0.cpp) — file offset `0x187c5b0`, Ghidra address `019805b0`
- [private void UpdateIndicatorMaskArea() { }](MergeFruit/MergeFruit_UpdateIndicatorMaskArea_187bfe4.cpp) — file offset `0x187bfe4`, Ghidra address `0197ffe4`
- [private void UpdatePos(Vector2 touchPosition) { }](MergeFruit/MergeFruit_UpdatePos_187bbdc.cpp) — file offset `0x187bbdc`, Ghidra address `0197fbdc`

## MergeFruit.<>c

- [private static <>c() { }](MergeFruit___c/MergeFruit___c___c_187fc2c.cpp) — file offset `0x187fc2c`, Ghidra address `01983c2c`
- [public <>c() { }](MergeFruit___c/MergeFruit___c___c_187fc94.cpp) — file offset `0x187fc94`, Ghidra address `01983c94`
- [internal bool <CanBombOrUpgradeOrShake>b__125_0(FruitItem it) { }](MergeFruit___c/MergeFruit___c__CanBombOrUpgradeOrShake_b__125_0_187fdb4.cpp) — file offset `0x187fdb4`, Ghidra address `01983db4`
- [internal bool <CancelUseClean>b__118_0(FruitItem fruit) { }](MergeFruit___c/MergeFruit___c__CancelUseClean_b__118_0_187fd34.cpp) — file offset `0x187fd34`, Ghidra address `01983d34`
- [internal bool <CanClean>b__124_0(FruitItem item) { }](MergeFruit___c/MergeFruit___c__CanClean_b__124_0_187fd74.cpp) — file offset `0x187fd74`, Ghidra address `01983d74`
- [internal bool <DoToolCleanGuide>b__127_0(FruitItem item) { }](MergeFruit___c/MergeFruit___c__DoToolCleanGuide_b__127_0_187fde0.cpp) — file offset `0x187fde0`, Ghidra address `01983de0`
- [internal bool <DoToolUpgrade>b__129_0(FruitItem item) { }](MergeFruit___c/MergeFruit___c__DoToolUpgrade_b__129_0_187fe20.cpp) — file offset `0x187fe20`, Ghidra address `01983e20`
- [internal bool <IsUsingClean>b__117_0(FruitItem fruit) { }](MergeFruit___c/MergeFruit___c__IsUsingClean_b__117_0_187fcf4.cpp) — file offset `0x187fcf4`, Ghidra address `01983cf4`
- [internal bool <ResetFrictionGravity>b__113_0(FruitItem item) { }](MergeFruit___c/MergeFruit___c__ResetFrictionGravity_b__113_0_187fcc8.cpp) — file offset `0x187fcc8`, Ghidra address `01983cc8`
- [internal bool <StartClearFrictionGravity>b__111_0(FruitItem item) { }](MergeFruit___c/MergeFruit___c__StartClearFrictionGravity_b__111_0_187fc9c.cpp) — file offset `0x187fc9c`, Ghidra address `01983c9c`

## MergeFruit.<>c__DisplayClass117_0

- [public <>c__DisplayClass117_0() { }](MergeFruit___c__DisplayClass117_0/MergeFruit___c__DisplayClass117_0___c__DisplayClass117_0_187e9dc.cpp) — file offset `0x187e9dc`, Ghidra address `019829dc`

## MergeFruit.<>c__DisplayClass117_1

- [public <>c__DisplayClass117_1() { }](MergeFruit___c__DisplayClass117_1/MergeFruit___c__DisplayClass117_1___c__DisplayClass117_1_187e9e4.cpp) — file offset `0x187e9e4`, Ghidra address `019829e4`
- [internal void <IsUsingClean>b__1() { }](MergeFruit___c__DisplayClass117_1/MergeFruit___c__DisplayClass117_1__IsUsingClean_b__1_187fe60.cpp) — file offset `0x187fe60`, Ghidra address `01983e60`

## MergeFruit.<>c__DisplayClass130_0

- [public <>c__DisplayClass130_0() { }](MergeFruit___c__DisplayClass130_0/MergeFruit___c__DisplayClass130_0___c__DisplayClass130_0_187f6ec.cpp) — file offset `0x187f6ec`, Ghidra address `019836ec`
- [internal void <DoToolShake>b__0() { }](MergeFruit___c__DisplayClass130_0/MergeFruit___c__DisplayClass130_0__DoToolShake_b__0_187fef8.cpp) — file offset `0x187fef8`, Ghidra address `01983ef8`
- [internal void <DoToolShake>b__1() { }](MergeFruit___c__DisplayClass130_0/MergeFruit___c__DisplayClass130_0__DoToolShake_b__1_187ffb0.cpp) — file offset `0x187ffb0`, Ghidra address `01983fb0`

## MergeFruit.<>c__DisplayClass74_0

- [public <>c__DisplayClass74_0() { }](MergeFruit___c__DisplayClass74_0/MergeFruit___c__DisplayClass74_0___c__DisplayClass74_0_187de6c.cpp) — file offset `0x187de6c`, Ghidra address `01981e6c`
- [internal void <ChangeFruitsFinishStates>b__0() { }](MergeFruit___c__DisplayClass74_0/MergeFruit___c__DisplayClass74_0__ChangeFruitsFinishStates_b__0_187fffc.cpp) — file offset `0x187fffc`, Ghidra address `01983ffc`
- [internal void <ChangeFruitsFinishStates>b__1() { }](MergeFruit___c__DisplayClass74_0/MergeFruit___c__DisplayClass74_0__ChangeFruitsFinishStates_b__1_188006c.cpp) — file offset `0x188006c`, Ghidra address `0198406c`

## MergeFruit.<Delay>d__55

- [private override bool MoveNext() { }](MergeFruit__Delay_d__55/MergeFruit__Delay_d__55_MoveNext_1880158.cpp) — file offset `0x1880158`, Ghidra address `01984158`

## MergeFruit.<StartClearFrictionGravity>d__111

- [private override bool MoveNext() { }](MergeFruit__StartClearFrictionGravity_d__111/MergeFruit__StartClearFrictionGravity_d__111_MoveNext_1880268.cpp) — file offset `0x1880268`, Ghidra address `01984268`

## MergeFruit.<UpdateExpCountdown>d__105

- [private override bool MoveNext() { }](MergeFruit__UpdateExpCountdown_d__105/MergeFruit__UpdateExpCountdown_d__105_MoveNext_1880504.cpp) — file offset `0x1880504`, Ghidra address `01984504`

## MergeFruit.<UpgradeFruit>d__123

- [private override bool MoveNext() { }](MergeFruit__UpgradeFruit_d__123/MergeFruit__UpgradeFruit_d__123_MoveNext_1880634.cpp) — file offset `0x1880634`, Ghidra address `01984634`

## MergeFruit.FruitData

- [public FruitData() { }](MergeFruit_FruitData/MergeFruit_FruitData_FruitData_187e4c8.cpp) — file offset `0x187e4c8`, Ghidra address `019824c8`

## MergeFruit.FruitDataWrapper

- [public FruitDataWrapper() { }](MergeFruit_FruitDataWrapper/MergeFruit_FruitDataWrapper_FruitDataWrapper_187e4d0.cpp) — file offset `0x187e4d0`, Ghidra address `019824d0`

## SkinData

- [public SkinData() { }](SkinData/SkinData_SkinData_1880d40.cpp) — file offset `0x1880d40`, Ghidra address `01984d40`

## SkinItem

- [public SkinItem() { }](SkinItem/SkinItem_SkinItem_18a8aa0.cpp) — file offset `0x18a8aa0`, Ghidra address `019acaa0`
- [private void AddSkin() { }](SkinItem/SkinItem_AddSkin_18a8784.cpp) — file offset `0x18a8784`, Ghidra address `019ac784`
- [private void Awake() { }](SkinItem/SkinItem_Awake_18a74d8.cpp) — file offset `0x18a74d8`, Ghidra address `019ab4d8`
- [private void OnBtnUse() { }](SkinItem/SkinItem_OnBtnUse_18a89c4.cpp) — file offset `0x18a89c4`, Ghidra address `019ac9c4`
- [private void OnDestroy() { }](SkinItem/SkinItem_OnDestroy_18a7a70.cpp) — file offset `0x18a7a70`, Ghidra address `019aba70`
- [private void OnSwitchUsingSkin(string currentUsingSkin) { }](SkinItem/SkinItem_OnSwitchUsingSkin_18a8490.cpp) — file offset `0x18a8490`, Ghidra address `019ac490`
- [public void SetState(E_SkinItem_State state, SkinItemData itemData, bool homeView = true) { }](SkinItem/SkinItem_SetState_18a7bb8.cpp) — file offset `0x18a7bb8`, Ghidra address `019abbb8`
- [private void UpdateUserSkin() { }](SkinItem/SkinItem_UpdateUserSkin_18a8704.cpp) — file offset `0x18a8704`, Ghidra address `019ac704`

## SkinItemData

- [public SkinItemData() { }](SkinItemData/SkinItemData_SkinItemData_1880dc8.cpp) — file offset `0x1880dc8`, Ghidra address `01984dc8`

## SkinPage

- [public SkinPage() { }](SkinPage/SkinPage_SkinPage_18a968c.cpp) — file offset `0x18a968c`, Ghidra address `019ad68c`
- [private void CreateSkinItems(List<SkinItemData> skinItems) { }](SkinPage/SkinPage_CreateSkinItems_18a8c1c.cpp) — file offset `0x18a8c1c`, Ghidra address `019acc1c`
- [internal virtual void Init() { }](SkinPage/SkinPage_Init_18a8b6c.cpp) — file offset `0x18a8b6c`, Ghidra address `019acb6c`
- [private void RefreshSkinItems(List<SkinItemData> skinItems) { }](SkinPage/SkinPage_RefreshSkinItems_18a9204.cpp) — file offset `0x18a9204`, Ghidra address `019ad204`
- [internal virtual void Show() { }](SkinPage/SkinPage_Show_18a8b70.cpp) — file offset `0x18a8b70`, Ghidra address `019acb70`

## SkinPage.<>c

- [private static <>c() { }](SkinPage___c/SkinPage___c___c_18a9694.cpp) — file offset `0x18a9694`, Ghidra address `019ad694`
- [public <>c() { }](SkinPage___c/SkinPage___c___c_18a96fc.cpp) — file offset `0x18a96fc`, Ghidra address `019ad6fc`
- [internal bool <CreateSkinItems>b__4_0(SkinItemData x) { }](SkinPage___c/SkinPage___c__CreateSkinItems_b__4_0_18a9704.cpp) — file offset `0x18a9704`, Ghidra address `019ad704`
- [internal bool <RefreshSkinItems>b__5_0(SkinItemData x) { }](SkinPage___c/SkinPage___c__RefreshSkinItems_b__5_0_18a9730.cpp) — file offset `0x18a9730`, Ghidra address `019ad730`

## SoundMgr

- [public SoundMgr() { }](SoundMgr/SoundMgr_SoundMgr_1872e84.cpp) — file offset `0x1872e84`, Ghidra address `01976e84`
- [private void Awake() { }](SoundMgr/SoundMgr_Awake_1871874.cpp) — file offset `0x1871874`, Ghidra address `01975874`
- [public void ChangeBGMVolume(float v) { }](SoundMgr/SoundMgr_ChangeBGMVolume_18722b4.cpp) — file offset `0x18722b4`, Ghidra address `019762b4`
- [public void ClearOnPlayOver() { }](SoundMgr/SoundMgr_ClearOnPlayOver_1872dd4.cpp) — file offset `0x1872dd4`, Ghidra address `01976dd4`
- [internal void CloseBgm() { }](SoundMgr/SoundMgr_CloseBgm_1871938.cpp) — file offset `0x1871938`, Ghidra address `01975938`
- [internal void CloseSound() { }](SoundMgr/SoundMgr_CloseSound_1871954.cpp) — file offset `0x1871954`, Ghidra address `01975954`
- [private void Init() { }](SoundMgr/SoundMgr_Init_187198c.cpp) — file offset `0x187198c`, Ghidra address `0197598c`
- [private void onChangeBGM(int id, float volume) { }](SoundMgr/SoundMgr_onChangeBGM_1872c28.cpp) — file offset `0x1872c28`, Ghidra address `01976c28`
- [internal void OpenBgm() { }](SoundMgr/SoundMgr_OpenBgm_187238c.cpp) — file offset `0x187238c`, Ghidra address `0197638c`
- [internal void OpenSound() { }](SoundMgr/SoundMgr_OpenSound_18723a8.cpp) — file offset `0x18723a8`, Ghidra address `019763a8`
- [public void PauseBGM() { }](SoundMgr/SoundMgr_PauseBGM_1872698.cpp) — file offset `0x1872698`, Ghidra address `01976698`
- [public void PlayBGM() { }](SoundMgr/SoundMgr_PlayBGM_1872430.cpp) — file offset `0x1872430`, Ghidra address `01976430`
- [private void playClip(AudioClip clip, float playSpeed = 1) { }](SoundMgr/SoundMgr_playClip_1872760.cpp) — file offset `0x1872760`, Ghidra address `01976760`
- [public void PlayLevelBGM(SoundName soundName) { }](SoundMgr/SoundMgr_PlayLevelBGM_18724f4.cpp) — file offset `0x18724f4`, Ghidra address `019764f4`
- [public void PlayMaJiangComboSound(int index = 0) { }](SoundMgr/SoundMgr_PlayMaJiangComboSound_1872198.cpp) — file offset `0x1872198`, Ghidra address `01976198`
- [public void PlayMaJiangComboSound(SoundName soundName) { }](SoundMgr/SoundMgr_PlayMaJiangComboSound_1872214.cpp) — file offset `0x1872214`, Ghidra address `01976214`
- [public void PlayMaJiangMatchSound() { }](SoundMgr/SoundMgr_PlayMaJiangMatchSound_1871f58.cpp) — file offset `0x1871f58`, Ghidra address `01975f58`
- [public void PlayMaJiangTouchSound() { }](SoundMgr/SoundMgr_PlayMaJiangTouchSound_1871c04.cpp) — file offset `0x1871c04`, Ghidra address `01975c04`
- [public void PlaySound(SoundName soundName, bool loop, float playSpeed = 1, bool playNewSound = false) { }](SoundMgr/SoundMgr_PlaySound_1871d4c.cpp) — file offset `0x1871d4c`, Ghidra address `01975d4c`
- [public void PlaySoundAndWait(SoundName soundName, float waitTime, float playSpeed = 1) { }](SoundMgr/SoundMgr_PlaySoundAndWait_18728bc.cpp) — file offset `0x18728bc`, Ghidra address `019768bc`
- [public void RandomMaJiangMatchSound() { }](SoundMgr/SoundMgr_RandomMaJiangMatchSound_1872044.cpp) — file offset `0x1872044`, Ghidra address `01976044`
- [public void ResetCounts() { }](SoundMgr/SoundMgr_ResetCounts_1871bfc.cpp) — file offset `0x1871bfc`, Ghidra address `01975bfc`
- [public void SetOnPlayOver(Action onPlayOver) { }](SoundMgr/SoundMgr_SetOnPlayOver_1872dcc.cpp) — file offset `0x1872dcc`, Ghidra address `01976dcc`
- [public void StopLoopSound() { }](SoundMgr/SoundMgr_StopLoopSound_1872a70.cpp) — file offset `0x1872a70`, Ghidra address `01976a70`
- [public void StopSound() { }](SoundMgr/SoundMgr_StopSound_18723e8.cpp) — file offset `0x18723e8`, Ghidra address `019763e8`
- [public void StopSoundGradual() { }](SoundMgr/SoundMgr_StopSoundGradual_1872ad8.cpp) — file offset `0x1872ad8`, Ghidra address `01976ad8`
- [public void StopSoundPlayer() { }](SoundMgr/SoundMgr_StopSoundPlayer_1872ab8.cpp) — file offset `0x1872ab8`, Ghidra address `01976ab8`
- [public void StopTicketSound() { }](SoundMgr/SoundMgr_StopTicketSound_18726b0.cpp) — file offset `0x18726b0`, Ghidra address `019766b0`

## SoundMgr.<>c__DisplayClass45_0

- [public <>c__DisplayClass45_0() { }](SoundMgr___c__DisplayClass45_0/SoundMgr___c__DisplayClass45_0___c__DisplayClass45_0_1872dc4.cpp) — file offset `0x1872dc4`, Ghidra address `01976dc4`
- [internal void <onChangeBGM>b__0() { }](SoundMgr___c__DisplayClass45_0/SoundMgr___c__DisplayClass45_0__onChangeBGM_b__0_1872f64.cpp) — file offset `0x1872f64`, Ghidra address `01976f64`

## SoundMgr.<DelayResetSoundName>d__38

- [private override bool MoveNext() { }](SoundMgr__DelayResetSoundName_d__38/SoundMgr__DelayResetSoundName_d__38_MoveNext_1872fec.cpp) — file offset `0x1872fec`, Ghidra address `01976fec`

## SoundMgr.<WaitForSoundPlayOver>d__50

- [private override bool MoveNext() { }](SoundMgr__WaitForSoundPlayOver_d__50/SoundMgr__WaitForSoundPlayOver_d__50_MoveNext_18730f0.cpp) — file offset `0x18730f0`, Ghidra address `019770f0`

## SoundMgr.<gradualStop>d__44

- [private override bool MoveNext() { }](SoundMgr__gradualStop_d__44/SoundMgr__gradualStop_d__44_MoveNext_1873218.cpp) — file offset `0x1873218`, Ghidra address `01977218`

## TKCommon.PlayGameView

- [public PlayGameView() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_PlayGameView_18f8478.cpp) — file offset `0x18f8478`, Ghidra address `019fc478`
- [private void AddGameCompleteReward(int ticket) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_AddGameCompleteReward_18f2d60.cpp) — file offset `0x18f2d60`, Ghidra address `019f6d60`
- [private void AddScore() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_AddScore_18ef5fc.cpp) — file offset `0x18ef5fc`, Ghidra address `019f35fc`
- [private void AdjustForBanner(bool show) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_AdjustForBanner_18f53d0.cpp) — file offset `0x18f53d0`, Ghidra address `019f93d0`
- [private void AdjustGameTopByBoxSpriteTop() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_AdjustGameTopByBoxSpriteTop_18f06b0.cpp) — file offset `0x18f06b0`, Ghidra address `019f46b0`
- [private void AdjustGameTopByBoxSpriteTopImmediately() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_AdjustGameTopByBoxSpriteTopImmediately_18f03f0.cpp) — file offset `0x18f03f0`, Ghidra address `019f43f0`
- [private void BindComboAnimationEvent() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_BindComboAnimationEvent_18f10f0.cpp) — file offset `0x18f10f0`, Ghidra address `019f50f0`
- [private void BindListeners() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_BindListeners_18ee654.cpp) — file offset `0x18ee654`, Ghidra address `019f2654`
- [private void CacheGameTopOriginPosition() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_CacheGameTopOriginPosition_18f0b7c.cpp) — file offset `0x18f0b7c`, Ghidra address `019f4b7c`
- [private void CacheSubscriptionIcon() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_CacheSubscriptionIcon_18f20f4.cpp) — file offset `0x18f20f4`, Ghidra address `019f60f4`
- [private void CheckDialogClose() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_CheckDialogClose_18f2e1c.cpp) — file offset `0x18f2e1c`, Ghidra address `019f6e1c`
- [private void ClearAllMergeFruits() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ClearAllMergeFruits_18f0604.cpp) — file offset `0x18f0604`, Ghidra address `019f4604`
- [public virtual void Close() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_Close_18f04b4.cpp) — file offset `0x18f04b4`, Ghidra address `019f44b4`
- [public void CloseSkinList() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_CloseSkinList_18f4b08.cpp) — file offset `0x18f4b08`, Ghidra address `019f8b08`
- [private void CloseToolDescriptionAnim(Action completeAction) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_CloseToolDescriptionAnim_18f7f44.cpp) — file offset `0x18f7f44`, Ghidra address `019fbf44`
- [private void CreateSkinItems(List<SkinItemData> skinItems) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_CreateSkinItems_18f3d00.cpp) — file offset `0x18f3d00`, Ghidra address `019f7d00`
- [private void DefaultInGame() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_DefaultInGame_18eede0.cpp) — file offset `0x18eede0`, Ghidra address `019f2de0`
- [private void DoBombTool() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_DoBombTool_18f70c0.cpp) — file offset `0x18f70c0`, Ghidra address `019fb0c0`
- [private void DoCleanTool() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_DoCleanTool_18f6d2c.cpp) — file offset `0x18f6d2c`, Ghidra address `019fad2c`
- [private void DoShakeTool() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_DoShakeTool_18f77e8.cpp) — file offset `0x18f77e8`, Ghidra address `019fb7e8`
- [private void DoUpgradeTool() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_DoUpgradeTool_18f7454.cpp) — file offset `0x18f7454`, Ghidra address `019fb454`
- [private void EnterGameAnimation(float duration, Action endAction) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_EnterGameAnimation_18f05c4.cpp) — file offset `0x18f05c4`, Ghidra address `019f45c4`
- [private void ExitGameAnimation(Action endAction) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ExitGameAnimation_18f2d30.cpp) — file offset `0x18f2d30`, Ghidra address `019f6d30`
- [private void ExpLevelUp() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ExpLevelUp_18f1b5c.cpp) — file offset `0x18f1b5c`, Ghidra address `019f5b5c`
- [private void GetBindComponents(GameObject go) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GetBindComponents_18edc08.cpp) — file offset `0x18edc08`, Ghidra address `019f1c08`
- [public float GetBottomHeight() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GetBottomHeight_18f1070.cpp) — file offset `0x18f1070`, Ghidra address `019f5070`
- [private RectTransform GetImgTitleRectTransform() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GetImgTitleRectTransform_18f0dc4.cpp) — file offset `0x18f0dc4`, Ghidra address `019f4dc4`
- [private int GetTickets() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GetTickets_18f6880.cpp) — file offset `0x18f6880`, Ghidra address `019fa880`
- [private Camera GetUICamera() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GetUICamera_18f0ef4.cpp) — file offset `0x18f0ef4`, Ghidra address `019f4ef4`
- [public Vector3 GiftPos() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GiftPos_18f33ac.cpp) — file offset `0x18f33ac`, Ghidra address `019f73ac`
- [private void GoFinishView() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GoFinishView_18f2644.cpp) — file offset `0x18f2644`, Ghidra address `019f6644`
- [private void GoHome(int ticket) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GoHome_18f277c.cpp) — file offset `0x18f277c`, Ghidra address `019f677c`
- [private void GoHomeDirectly(int ticket, bool allowJumpToRoomBuild) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GoHomeDirectly_18f2980.cpp) — file offset `0x18f2980`, Ghidra address `019f6980`
- [private void GoHomeDirectly(int ticket) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GoHomeDirectly_18f2ac0.cpp) — file offset `0x18f2ac0`, Ghidra address `019f6ac0`
- [private void GoNextGameDirectly(int ticket) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GoNextGameDirectly_18f2868.cpp) — file offset `0x18f2868`, Ghidra address `019f6868`
- [private void GoReviveDialog() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_GoReviveDialog_18f2300.cpp) — file offset `0x18f2300`, Ghidra address `019f6300`
- [private void HideTop() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_HideTop_18f79cc.cpp) — file offset `0x18f79cc`, Ghidra address `019fb9cc`
- [private void HomeAction() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_HomeAction_18f3790.cpp) — file offset `0x18f3790`, Ghidra address `019f7790`
- [public virtual void Init(Object[] data) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_Init_18ee4bc.cpp) — file offset `0x18ee4bc`, Ghidra address `019f24bc`
- [private void InitForTest() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_InitForTest_18ef220.cpp) — file offset `0x18ef220`, Ghidra address `019f3220`
- [private void InitForUI() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_InitForUI_18eeb94.cpp) — file offset `0x18eeb94`, Ghidra address `019f2b94`
- [private void InitGameView() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_InitGameView_18f0524.cpp) — file offset `0x18f0524`, Ghidra address `019f4524`
- [private void InitToolPanelLayout() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_InitToolPanelLayout_18f11a0.cpp) — file offset `0x18f11a0`, Ghidra address `019f51a0`
- [private void LogFinishGame() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_LogFinishGame_18f57e8.cpp) — file offset `0x18f57e8`, Ghidra address `019f97e8`
- [private void MergeFruitItem(int grade) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_MergeFruitItem_18f4c1c.cpp) — file offset `0x18f4c1c`, Ghidra address `019f8c1c`
- [private void OnApplicationPause(bool pauseStatus) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_OnApplicationPause_18f6b28.cpp) — file offset `0x18f6b28`, Ghidra address `019fab28`
- [private void OnApplicationQuit() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_OnApplicationQuit_18f6a3c.cpp) — file offset `0x18f6a3c`, Ghidra address `019faa3c`
- [private void OnBtnCancel() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_OnBtnCancel_18f8288.cpp) — file offset `0x18f8288`, Ghidra address `019fc288`
- [private void OnDestroy() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_OnDestroy_18ef8bc.cpp) — file offset `0x18ef8bc`, Ghidra address `019f38bc`
- [private void OnSwitchSkin(string currentSkinName) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_OnSwitchSkin_18f12e4.cpp) — file offset `0x18f12e4`, Ghidra address `019f52e4`
- [private void PlayFinishAd() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_PlayFinishAd_18f2518.cpp) — file offset `0x18f2518`, Ghidra address `019f6518`
- [private void QuitGame() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_QuitGame_18f2b2c.cpp) — file offset `0x18f2b2c`, Ghidra address `019f6b2c`
- [public virtual void ReActive(string lastViewName) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ReActive_18f0498.cpp) — file offset `0x18f0498`, Ghidra address `019f4498`
- [private void RefreshAdBottom(bool hasAd) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshAdBottom_18f1e98.cpp) — file offset `0x18f1e98`, Ghidra address `019f5e98`
- [private void RefreshCurrentScore() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshCurrentScore_18f2ad0.cpp) — file offset `0x18f2ad0`, Ghidra address `019f6ad0`
- [private void RefreshEntryRedPoints() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshEntryRedPoints_18f034c.cpp) — file offset `0x18f034c`, Ghidra address `019f434c`
- [private void RefreshExp() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshExp_18f173c.cpp) — file offset `0x18f173c`, Ghidra address `019f573c`
- [private void RefreshRemoveAd() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshRemoveAd_18f0238.cpp) — file offset `0x18f0238`, Ghidra address `019f4238`
- [private void RefreshScoreTxt() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshScoreTxt_18f1888.cpp) — file offset `0x18f1888`, Ghidra address `019f5888`
- [private void RefreshSkinItems(List<SkinItemData> skinItems) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshSkinItems_18f467c.cpp) — file offset `0x18f467c`, Ghidra address `019f867c`
- [private void RefreshSubscriptionIcon() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshSubscriptionIcon_18f1e74.cpp) — file offset `0x18f1e74`, Ghidra address `019f5e74`
- [private void RefreshToolPanel(bool hasAd) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RefreshToolPanel_18ef610.cpp) — file offset `0x18ef610`, Ghidra address `019f3610`
- [private void ResetCameraPositionOnDestroy() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ResetCameraPositionOnDestroy_18f0020.cpp) — file offset `0x18f0020`, Ghidra address `019f4020`
- [private void ResetComboAnimation() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ResetComboAnimation_18f2f28.cpp) — file offset `0x18f2f28`, Ghidra address `019f6f28`
- [private void ResetLevelPreviewsForNextGame() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ResetLevelPreviewsForNextGame_18f18f8.cpp) — file offset `0x18f18f8`, Ghidra address `019f58f8`
- [public virtual void ReShow(string lastViewName) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ReShow_18f047c.cpp) — file offset `0x18f047c`, Ghidra address `019f447c`
- [private void RestartAction() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RestartAction_18f3844.cpp) — file offset `0x18f3844`, Ghidra address `019f7844`
- [private void RestoreBannerAfterSubscriptionClosed() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_RestoreBannerAfterSubscriptionClosed_18f3310.cpp) — file offset `0x18f3310`, Ghidra address `019f7310`
- [private void ReviveGame() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ReviveGame_18f261c.cpp) — file offset `0x18f261c`, Ghidra address `019f661c`
- [private void SaveCurrentScore() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_SaveCurrentScore_18f6a40.cpp) — file offset `0x18f6a40`, Ghidra address `019faa40`
- [private void ScheduleAdjustGameTopByBoxSpriteTop() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ScheduleAdjustGameTopByBoxSpriteTop_18f040c.cpp) — file offset `0x18f040c`, Ghidra address `019f440c`
- [private static void SetButtonRedPoint(Component button, bool active) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_SetButtonRedPoint_18f33c4.cpp) — file offset `0x18f33c4`, Ghidra address `019f73c4`
- [public static bool ShouldStartNextGameDirectly(bool nextGameDirectly) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShouldStartNextGameDirectly_18ee4b4.cpp) — file offset `0x18ee4b4`, Ghidra address `019f24b4`
- [private bool ShouldStartNextGameDirectly() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShouldStartNextGameDirectly_18f2808.cpp) — file offset `0x18f2808`, Ghidra address `019f6808`
- [public virtual void Show() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_Show_18f0168.cpp) — file offset `0x18f0168`, Ghidra address `019f4168`
- [private void ShowAdBreakView() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowAdBreakView_18f54b4.cpp) — file offset `0x18f54b4`, Ghidra address `019f94b4`
- [public void ShowComboAnimation(int comboCount) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowComboAnimation_18f569c.cpp) — file offset `0x18f569c`, Ghidra address `019f969c`
- [private void ShowExpLevelUpDialog() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowExpLevelUpDialog_18f1c14.cpp) — file offset `0x18f1c14`, Ghidra address `019f5c14`
- [public void ShowLeagueTip(float displayDuration = 3) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowLeagueTip_18f4cfc.cpp) — file offset `0x18f4cfc`, Ghidra address `019f8cfc`
- [public void ShowRateUsDialog() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowRateUsDialog_18f3b70.cpp) — file offset `0x18f3b70`, Ghidra address `019f7b70`
- [private void ShowRateUsDialogForExpLevel() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowRateUsDialogForExpLevel_18f1dd0.cpp) — file offset `0x18f1dd0`, Ghidra address `019f5dd0`
- [private void ShowRateUsDialogForPlayLevel() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowRateUsDialogForPlayLevel_18f3acc.cpp) — file offset `0x18f3acc`, Ghidra address `019f7acc`
- [public void ShowSkinList() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowSkinList_18f43f4.cpp) — file offset `0x18f43f4`, Ghidra address `019f83f4`
- [private void ShowStarterPackDialog() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowStarterPackDialog_18eeed0.cpp) — file offset `0x18eeed0`, Ghidra address `019f2ed0`
- [private void ShowToolDescriptionAnim() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowToolDescriptionAnim_18f7a70.cpp) — file offset `0x18f7a70`, Ghidra address `019fba70`
- [private void ShowTop() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_ShowTop_18f7eb8.cpp) — file offset `0x18f7eb8`, Ghidra address `019fbeb8`
- [private void StartAdsBreakWaiting() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StartAdsBreakWaiting_18f2fc4.cpp) — file offset `0x18f2fc4`, Ghidra address `019f6fc4`
- [private void StartCountdown() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StartCountdown_18f833c.cpp) — file offset `0x18f833c`, Ghidra address `019fc33c`
- [public void StartFinishGame() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StartFinishGame_18f223c.cpp) — file offset `0x18f223c`, Ghidra address `019f623c`
- [private void StartMergeFruit() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StartMergeFruit_18ef0d8.cpp) — file offset `0x18ef0d8`, Ghidra address `019f30d8`
- [private void StopAdsBreakWaiting() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StopAdsBreakWaiting_18f3914.cpp) — file offset `0x18f3914`, Ghidra address `019f7914`
- [private void StopCountdown() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StopCountdown_18f83d0.cpp) — file offset `0x18f83d0`, Ghidra address `019fc3d0`
- [private void StopDelayAdCoroutine() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StopDelayAdCoroutine_18f3900.cpp) — file offset `0x18f3900`, Ghidra address `019f7900`
- [private void StopShowExpLevelUpCoroutine() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_StopShowExpLevelUpCoroutine_18f1dbc.cpp) — file offset `0x18f1dbc`, Ghidra address `019f5dbc`
- [private bool TryGetImgTitleVerticalScreenRange(out float bottomScreenY, out float topScreenY) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10.cpp) — file offset `0x18f0c10`, Ghidra address `019f4c10`
- [private void TryUnlockGrade(int grade) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_TryUnlockGrade_18f50b0.cpp) — file offset `0x18f50b0`, Ghidra address `019f90b0`
- [private void UnbindListeners() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_UnbindListeners_18efae0.cpp) — file offset `0x18efae0`, Ghidra address `019f3ae0`
- [public void UpdateNextPreview(int index) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_UpdateNextPreview_18f19b0.cpp) — file offset `0x18f19b0`, Ghidra address `019f59b0`
- [public void UpdateScore(int score) { }](TKCommon_PlayGameView/TKCommon_PlayGameView_UpdateScore_18f1930.cpp) — file offset `0x18f1930`, Ghidra address `019f5930`
- [private void UpdateTaskUI() { }](TKCommon_PlayGameView/TKCommon_PlayGameView_UpdateTaskUI_18f15c4.cpp) — file offset `0x18f15c4`, Ghidra address `019f55c4`

## TKCommon.PlayGameView.<>c

- [private static <>c() { }](TKCommon_PlayGameView___c/TKCommon_PlayGameView___c___c_18f9478.cpp) — file offset `0x18f9478`, Ghidra address `019fd478`
- [public <>c() { }](TKCommon_PlayGameView___c/TKCommon_PlayGameView___c___c_18f94e0.cpp) — file offset `0x18f94e0`, Ghidra address `019fd4e0`
- [internal bool <CreateSkinItems>b__167_0(SkinItemData x) { }](TKCommon_PlayGameView___c/TKCommon_PlayGameView___c__CreateSkinItems_b__167_0_18f9500.cpp) — file offset `0x18f9500`, Ghidra address `019fd500`
- [internal void <DefaultInGame>b__99_0() { }](TKCommon_PlayGameView___c/TKCommon_PlayGameView___c__DefaultInGame_b__99_0_18f94e8.cpp) — file offset `0x18f94e8`, Ghidra address `019fd4e8`
- [internal void <OnEnterGame>b__158_0() { }](TKCommon_PlayGameView___c/TKCommon_PlayGameView___c__OnEnterGame_b__158_0_18f94f4.cpp) — file offset `0x18f94f4`, Ghidra address `019fd4f4`
- [internal bool <RefreshSkinItems>b__170_0(SkinItemData x) { }](TKCommon_PlayGameView___c/TKCommon_PlayGameView___c__RefreshSkinItems_b__170_0_18f952c.cpp) — file offset `0x18f952c`, Ghidra address `019fd52c`

## TKCommon.PlayGameView.<>c__DisplayClass136_0

- [public <>c__DisplayClass136_0() { }](TKCommon_PlayGameView___c__DisplayClass136_0/TKCommon_PlayGameView___c__DisplayClass136_0___c__DisplayClass136_0_18f2ac8.cpp) — file offset `0x18f2ac8`, Ghidra address `019f6ac8`
- [internal void <GoHomeDirectly>b__0() { }](TKCommon_PlayGameView___c__DisplayClass136_0/TKCommon_PlayGameView___c__DisplayClass136_0__GoHomeDirectly_b__0_18f9558.cpp) — file offset `0x18f9558`, Ghidra address `019fd558`

## TKCommon.PlayGameView.<>c__DisplayClass212_0

- [public <>c__DisplayClass212_0() { }](TKCommon_PlayGameView___c__DisplayClass212_0/TKCommon_PlayGameView___c__DisplayClass212_0___c__DisplayClass212_0_18f8280.cpp) — file offset `0x18f8280`, Ghidra address `019fc280`
- [internal void <CloseToolDescriptionAnim>b__0(float width) { }](TKCommon_PlayGameView___c__DisplayClass212_0/TKCommon_PlayGameView___c__DisplayClass212_0__CloseToolDescriptionAnim_b__0_18f975c.cpp) — file offset `0x18f975c`, Ghidra address `019fd75c`
- [internal void <CloseToolDescriptionAnim>b__1() { }](TKCommon_PlayGameView___c__DisplayClass212_0/TKCommon_PlayGameView___c__DisplayClass212_0__CloseToolDescriptionAnim_b__1_18f9788.cpp) — file offset `0x18f9788`, Ghidra address `019fd788`

## TKCommon.PlayGameView.<AdsBreakWaiting>d__188

- [private override bool MoveNext() { }](TKCommon_PlayGameView__AdsBreakWaiting_d__188/TKCommon_PlayGameView__AdsBreakWaiting_d__188_MoveNext_18f9918.cpp) — file offset `0x18f9918`, Ghidra address `019fd918`

## TKCommon.PlayGameView.<CountdownCoroutine>d__221

- [private override bool MoveNext() { }](TKCommon_PlayGameView__CountdownCoroutine_d__221/TKCommon_PlayGameView__CountdownCoroutine_d__221_MoveNext_18f9a50.cpp) — file offset `0x18f9a50`, Ghidra address `019fda50`

## TKCommon.PlayGameView.<DelayAdjustGameTopByBoxSpriteTop>d__102

- [private override bool MoveNext() { }](TKCommon_PlayGameView__DelayAdjustGameTopByBoxSpriteTop_d__102/TKCommon_PlayGameView__DelayAdjustGameTopByBoxSpriteTop_d__102_MoveNext_18f9c48.cpp) — file offset `0x18f9c48`, Ghidra address `019fdc48`

## TKCommon.PlayGameView.<DelayAdsPlay>d__190

- [private override bool MoveNext() { }](TKCommon_PlayGameView__DelayAdsPlay_d__190/TKCommon_PlayGameView__DelayAdsPlay_d__190_MoveNext_18f9d8c.cpp) — file offset `0x18f9d8c`, Ghidra address `019fdd8c`

## TKCommon.PlayGameView.<HideLeagueTipCoroutine>d__180

- [private override bool MoveNext() { }](TKCommon_PlayGameView__HideLeagueTipCoroutine_d__180/TKCommon_PlayGameView__HideLeagueTipCoroutine_d__180_MoveNext_18f9f14.cpp) — file offset `0x18f9f14`, Ghidra address `019fdf14`

## TKCommon.PlayGameView.<RefreshDescPosCoroutine>d__116

- [private override bool MoveNext() { }](TKCommon_PlayGameView__RefreshDescPosCoroutine_d__116/TKCommon_PlayGameView__RefreshDescPosCoroutine_d__116_MoveNext_18fa148.cpp) — file offset `0x18fa148`, Ghidra address `019fe148`

## TKCommon.SettingDialog

- [public SettingDialog() { }](TKCommon_SettingDialog/TKCommon_SettingDialog_SettingDialog_190822c.cpp) — file offset `0x190822c`, Ghidra address `01a0c22c`
- [public virtual void Close() { }](TKCommon_SettingDialog/TKCommon_SettingDialog_Close_1907e0c.cpp) — file offset `0x1907e0c`, Ghidra address `01a0be0c`
- [private void GetBindComponents(GameObject go) { }](TKCommon_SettingDialog/TKCommon_SettingDialog_GetBindComponents_1907b00.cpp) — file offset `0x1907b00`, Ghidra address `01a0bb00`
- [public virtual void Init(Object[] data) { }](TKCommon_SettingDialog/TKCommon_SettingDialog_Init_1907bcc.cpp) — file offset `0x1907bcc`, Ghidra address `01a0bbcc`
- [public virtual void Show() { }](TKCommon_SettingDialog/TKCommon_SettingDialog_Show_1907df0.cpp) — file offset `0x1907df0`, Ghidra address `01a0bdf0`

## TKCommon.SettingDialogForHome

- [public SettingDialogForHome() { }](TKCommon_SettingDialogForHome/TKCommon_SettingDialogForHome_SettingDialogForHome_1908ab0.cpp) — file offset `0x1908ab0`, Ghidra address `01a0cab0`
- [private void GetBindComponents(GameObject go) { }](TKCommon_SettingDialogForHome/TKCommon_SettingDialogForHome_GetBindComponents_1908234.cpp) — file offset `0x1908234`, Ghidra address `01a0c234`
- [public virtual void Init(Object[] data) { }](TKCommon_SettingDialogForHome/TKCommon_SettingDialogForHome_Init_190835c.cpp) — file offset `0x190835c`, Ghidra address `01a0c35c`

## TaskData

- [public TaskData() { }](TaskData/TaskData_TaskData_1880dd0.cpp) — file offset `0x1880dd0`, Ghidra address `01984dd0`

## TaskItemData

- [public TaskItemData() { }](TaskItemData/TaskItemData_TaskItemData_1880e58.cpp) — file offset `0x1880e58`, Ghidra address `01984e58`

