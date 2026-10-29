// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UseDiamonds(int num) { }
// Ghidra address: 019cf9ac; ELF VA: 0x18cf9ac; file offset: 0x18cb9ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_UseDiamonds_18cb9ac(Game_UserData *self,int num,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *runtimeMethod_00;
  undefined1 auVar9 [16];
  long *plStack_28;
  
  puVar3 = PTR_DAT_03869d20;
  puVar1 = PTR_DAT_0385d950;
  pvVar8 = (void *)(ulong)(uint)num;
  if ((bRam0000000003ab242d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03868688);
    auVar9 = NativeHelper_017ef284(PTR_DAT_03869d20);
    pvVar8 = auVar9._8_8_;
    self = auVar9._0_8_;
    bRam0000000003ab242d = 1;
  }
  puVar2 = PTR_DAT_03868688;
  iVar4 = Game_UserData_GetDiamonds_18cb888(self,pvVar8);
  UnityEngine_PlayerPrefs_SetInt_3245fa8
            (*(void **)puVar3,iVar4 - num & (iVar4 - num >> 0x1f ^ 0xffffffffU),(void *)0x0);
  NativeHelper_0334aa10(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar1 = PTR_DAT_0385d950;
  pvVar8 = *(void **)puVar2;
  if ((bRam0000000003ab2096 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68,0);
    NativeHelper_017ef284(PTR_DAT_03867000);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2096 = 1;
  }
  lVar5 = *(long *)puVar1;
  plStack_28 = (long *)0x0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    uVar6 = NativeHelper_02134ffc(lVar5,pvVar8,&plStack_28,*(undefined8 *)PTR_DAT_03867000);
    if ((uVar6 & 1) != 0) {
      if ((plStack_28 == (long *)0x0) || (*plStack_28 != *(long *)PTR_DAT_03866c68)) {
        NativeHelper_017ef298(PTR_DAT_0385d950);
        NativeHelper_0160f45c();
        pvVar8 = Messenger_CreateBroadcastSignatureException_187537c(pvVar8,runtimeMethod_00);
        uVar7 = NativeHelper_017ef298(PTR_DAT_03867008);
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef3f4(pvVar8,uVar7);
      }
      (*(code *)plStack_28[3])(plStack_28[8],plStack_28[5]);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

