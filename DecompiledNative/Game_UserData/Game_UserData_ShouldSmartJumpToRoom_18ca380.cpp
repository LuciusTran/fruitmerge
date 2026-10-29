// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool ShouldSmartJumpToRoom(int pendingTickets = 0) { }
// Ghidra address: 019ce380; ELF VA: 0x18ce380; file offset: 0x18ca380
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_ShouldSmartJumpToRoom_18ca380
               (Game_UserData *self,int pendingTickets,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  void *pvVar7;
  void *value;
  DataManager *self_00;
  ulong uVar8;
  TKLClient_TKLSwitcherConfig *pTVar9;
  undefined8 uStack_28;
  
  if ((bRam0000000003ab241b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_03869be0);
    NativeHelper_017ef284(PTR_DAT_03869b88);
    NativeHelper_017ef284(PTR_DAT_03869be8);
    NativeHelper_017ef284(PTR_DAT_0385cbb8);
    bRam0000000003ab241b = 1;
  }
  uStack_28 = 0;
  bVar5 = Game_UserData_CanBuildCurrentRoomItem_18c9fac(self,pendingTickets,runtimeMethod);
  puVar4 = PTR_DAT_03869be8;
  puVar3 = PTR_DAT_03869be0;
  puVar2 = PTR_DAT_0385dc10;
  puVar1 = PTR_DAT_0385d9d8;
  if (bVar5) {
    pvVar7 = UnityEngine_PlayerPrefs_GetString_32463ec
                       (*(void **)PTR_DAT_03869be8,*(void **)PTR_DAT_0385cbb8,(void *)0x0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    uStack_28 = NativeHelper_02bf109c(0);
    value = (void *)NativeHelper_02bf2040(&uStack_28,*(undefined8 *)puVar3,0);
    self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (self_00 == (DataManager *)0x0) {
LAB_019ce550:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    iVar6 = DataManager_GetInstallDays_180858c(self_00,(void *)0x0);
    uVar8 = NativeHelper_02aa606c(pvVar7,0);
    if (((uVar8 & 1) == 0) &&
       ((iVar6 < 1 || (uVar8 = NativeHelper_02aa50f4(pvVar7,value,0), (uVar8 & 1) == 0)))) {
      iVar6 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)PTR_DAT_03869b88,0,(void *)0x0);
      if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)PTR_DAT_0385d918);
      }
      pTVar9 = Global_get_RemoteConfig_18048d8((void *)0x0);
      if (pTVar9 == (TKLClient_TKLSwitcherConfig *)0x0) goto LAB_019ce550;
      bVar5 = pTVar9->FM_SmartJumpGamesCount <= iVar6;
    }
    else {
      UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar4,value,(void *)0x0);
      NativeHelper_0334aa10(0);
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

