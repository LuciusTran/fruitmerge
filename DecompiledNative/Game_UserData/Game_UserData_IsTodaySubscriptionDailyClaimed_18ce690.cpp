// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsTodaySubscriptionDailyClaimed() { }
// Ghidra address: 019d2690; ELF VA: 0x18d2690; file offset: 0x18ce690
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_IsTodaySubscriptionDailyClaimed_18ce690(Game_UserData *self,void *runtimeMethod)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  TKLClient_TKLSwitcherConfig *pTVar6;
  longlong lVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  void *extraout_x1;
  undefined1 auVar12 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  puVar3 = PTR_DAT_0385d918;
  if ((bRam0000000003ab245a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865b00);
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d8b8);
    NativeHelper_017ef284(PTR_DAT_03869db8);
    NativeHelper_017ef284(PTR_DAT_03867508);
    bRam0000000003ab245a = 1;
    runtimeMethod = extraout_x1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar3,runtimeMethod);
  }
  pTVar6 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar6 == (TKLClient_TKLSwitcherConfig *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  bVar2 = pTVar6->FM_EnableServerTimeCheck;
  lVar7 = WebHelper_GetSyncedServerTime_1880f40((void *)0x0);
  if (bVar2 == false) {
LAB_019d27d4:
    pvVar10 = UnityEngine_PlayerPrefs_GetString_32463ec
                        (*(void **)PTR_DAT_03869db8,*(void **)PTR_DAT_03867508,(void *)0x0);
    lVar9 = NativeHelper_02c0ed04(pvVar10,0);
    if (lVar9 < 1) {
      bVar5 = 0;
    }
    else {
      if (bVar2 == false) {
        if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        uStack_38 = NativeHelper_02bf11c4(0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03865b00 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        auStack_30 = NativeHelper_02bf4ba4(lVar7,0);
        uStack_38 = NativeHelper_02bf40c0(auStack_30,0);
        if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)PTR_DAT_0385dc10);
        }
      }
      uVar8 = NativeHelper_02bf0a7c(&uStack_38,0);
      if (*(int *)(*(long *)PTR_DAT_03865b00 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)PTR_DAT_03865b00);
      }
      auVar12 = NativeHelper_02bf4ba4(lVar9,0);
      auStack_30 = auVar12;
      uStack_38 = NativeHelper_02bf40c0(auStack_30,0);
      if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)PTR_DAT_0385dc10);
      }
      uVar11 = NativeHelper_02bf0a7c(&uStack_38,0);
      bVar5 = NativeHelper_02bf2aac(uVar8,uVar11,0);
    }
  }
  else {
    bVar4 = WebHelper_get_HasSyncedServerTime_1880ef0((void *)0x0);
    if (bVar4) {
      if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      uVar8 = NativeHelper_02bf11c4(0);
      uStack_48 = 0;
      uStack_40 = 0;
      NativeHelper_02bf3994(&uStack_48,uVar8,0);
      auStack_30._8_8_ = uStack_40;
      auStack_30._0_8_ = uStack_48;
      if (*(int *)(*(long *)PTR_DAT_03865b00 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      lVar9 = NativeHelper_02bf58f0(auStack_30,0);
      if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)PTR_DAT_0385d8b8);
      }
      lVar9 = lVar7 - lVar9;
      lVar1 = -lVar9;
      if (-1 < lVar9) {
        lVar1 = lVar9;
      }
      if (lVar1 < 0x12d) goto LAB_019d27d4;
    }
    bVar5 = 1;
  }
  return (bool)(bVar5 & 1);
}

