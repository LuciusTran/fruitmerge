// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_CurrentTaskCompletedNum(int value) { }
// Ghidra address: 019d738c; ELF VA: 0x18d738c; file offset: 0x18d338c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_set_CurrentTaskCompletedNum_18d338c
               (Game_UserData *self,int value,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *runtimeMethod_00;
  undefined1 auVar8 [16];
  long *plStack_28;
  
  puVar2 = PTR_DAT_03869fb0;
  if ((bRam0000000003ab2498 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03869fb0);
    NativeHelper_017ef284(PTR_DAT_03869fb8);
    bRam0000000003ab2498 = 1;
  }
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar2,value,(void *)0x0);
  auVar8 = NativeHelper_0334aa10(0);
  bVar3 = Game_UserData_get_EnableTask_18cab28(auVar8._0_8_,auVar8._8_8_);
  puVar2 = PTR_DAT_03869fb8;
  if (!bVar3) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
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

