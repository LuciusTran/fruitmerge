// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddTickets(int num) { }
// Ghidra address: 019cfb94; ELF VA: 0x18cfb94; file offset: 0x18cbb94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_AddTickets_18cbb94(Game_UserData *self,int num,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  DataManager *self_00;
  void *pvVar7;
  void *runtimeMethod_00;
  undefined1 auVar8 [16];
  long *plStack_28;
  
  puVar2 = PTR_DAT_03869bd8;
  puVar1 = PTR_DAT_0385d9d8;
  pvVar7 = (void *)(ulong)(uint)num;
  if ((bRam0000000003ab2431 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_03868b10);
    auVar8 = NativeHelper_017ef284(PTR_DAT_03869bd8);
    pvVar7 = auVar8._8_8_;
    self = auVar8._0_8_;
    bRam0000000003ab2431 = 1;
  }
  iVar3 = Game_UserData_GetTickets_18ca33c(self,pvVar7);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar2,iVar3 + num,(void *)0x0);
  NativeHelper_0334aa10(0);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar2 = PTR_DAT_03868b10;
  puVar1 = PTR_DAT_0385d950;
  if (self_00 == (DataManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  DataManager_UpdateDailyTaskProgress_1809ddc(self_00,9,num,-1,(void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar1 = PTR_DAT_0385d950;
  pvVar7 = *(void **)puVar2;
  if ((bRam0000000003ab2096 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68,0);
    NativeHelper_017ef284(PTR_DAT_03867000);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2096 = 1;
  }
  lVar4 = *(long *)puVar1;
  plStack_28 = (long *)0x0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar4 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar5 = NativeHelper_02134ffc(lVar4,pvVar7,&plStack_28,*(undefined8 *)PTR_DAT_03867000);
    if ((uVar5 & 1) != 0) {
      if ((plStack_28 == (long *)0x0) || (*plStack_28 != *(long *)PTR_DAT_03866c68)) {
        NativeHelper_017ef298(PTR_DAT_0385d950);
        NativeHelper_0160f45c();
        pvVar7 = Messenger_CreateBroadcastSignatureException_187537c(pvVar7,runtimeMethod_00);
        uVar6 = NativeHelper_017ef298(PTR_DAT_03867008);
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef3f4(pvVar7,uVar6);
      }
      (*(code *)plStack_28[3])(plStack_28[8],plStack_28[5]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

