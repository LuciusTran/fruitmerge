// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetTickets(int num) { }
// Ghidra address: 019cfaf4; ELF VA: 0x18cfaf4; file offset: 0x18cbaf4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SetTickets_18cbaf4(Game_UserData *self,int num,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *runtimeMethod_00;
  long *plStack_28;
  
  puVar3 = PTR_DAT_03869bd8;
  puVar1 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2430 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03868b10);
    NativeHelper_017ef284(PTR_DAT_03869bd8);
    bRam0000000003ab2430 = 1;
  }
  puVar2 = PTR_DAT_03868b10;
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,num,(void *)0x0);
  NativeHelper_0334aa10(0);
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

