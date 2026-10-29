// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveSubscriptionDailyClaimed() { }
// Ghidra address: 019d2934; ELF VA: 0x18d2934; file offset: 0x18ce934
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveSubscriptionDailyClaimed_18ce934(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  TKLClient_TKLSwitcherConfig *pTVar3;
  undefined8 uVar4;
  void *value;
  void *extraout_x1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong lStack_18;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab245b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865b00);
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03869db8);
    bRam0000000003ab245b = 1;
    runtimeMethod = extraout_x1;
  }
  lStack_18 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  pTVar3 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar3 != (TKLClient_TKLSwitcherConfig *)0x0) {
    if (pTVar3->FM_EnableServerTimeCheck == false) {
      if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      uVar4 = NativeHelper_02bf11c4(0);
      uStack_40 = 0;
      uStack_38 = 0;
      NativeHelper_02bf3994(&uStack_40,uVar4,0);
      uStack_28 = uStack_38;
      uStack_30 = uStack_40;
      if (*(int *)(*(long *)PTR_DAT_03865b00 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      lStack_18 = NativeHelper_02bf58f0(&uStack_30,0);
    }
    else {
      lStack_18 = WebHelper_GetSyncedServerTime_1880f40((void *)0x0);
      bVar2 = WebHelper_get_HasSyncedServerTime_1880ef0((void *)0x0);
      if (!bVar2) {
        return;
      }
    }
    puVar1 = PTR_DAT_03869db8;
    value = (void *)NativeHelper_02c0e330(&lStack_18,0);
    UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,value,(void *)0x0);
    NativeHelper_0334aa10(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

