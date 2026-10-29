// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnBtnUse() { }
// Ghidra address: 019ac9c4; ELF VA: 0x18ac9c4; file offset: 0x18a89c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkinItem_OnBtnUse_18a89c4(SkinItem *self,void *runtimeMethod)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  Game_UserData *self_00;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_0385db10;
  if ((bRam0000000003ab2295 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867188);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868a48);
    NativeHelper_017ef284(PTR_DAT_0385f448);
    NativeHelper_017ef284(PTR_DAT_03867190);
    bRam0000000003ab2295 = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  puVar3 = PTR_DAT_03867190;
  puVar2 = PTR_DAT_03867188;
  if (self_00 == (Game_UserData *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  puVar1 = (undefined8 *)PTR_DAT_03868a48;
  if (self->_isHomeView != false) {
    puVar1 = (undefined8 *)PTR_DAT_0385f448;
  }
  Game_UserData_SetUsingSkin_18cf51c(self_00,self->_skinName,(void *)*puVar1,(void *)0x0);
  pvVar7 = Game_Controller_FMViewController_GetView_1b724a8(*(void **)puVar3,*(void **)puVar2);
  if (pvVar7 != (void *)0x0) {
    if ((bRam0000000003ab25c5 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0386acd8,0);
      NativeHelper_017ef284(PTR_DAT_03866068);
      NativeHelper_017ef284(PTR_DAT_0386ace0);
      NativeHelper_017ef284(PTR_DAT_0386a890);
      bRam0000000003ab25c5 = 1;
    }
    puVar5 = PTR_DAT_0386ace0;
    puVar4 = PTR_DAT_0386acd8;
    puVar3 = PTR_DAT_0386a890;
    puVar2 = PTR_DAT_03866068;
    if (*(long *)((long)pvVar7 + 0x218) != 0) {
      uVar8 = *(undefined8 *)((long)pvVar7 + 0x210);
      *(undefined1 *)(*(long *)((long)pvVar7 + 0x218) + 0x117) = 0;
      NativeHelper_01a630d4(uVar8,0,0);
      uVar8 = *(undefined8 *)((long)pvVar7 + 0x210);
      iVar6 = NativeHelper_03329744(0);
      uVar8 = NativeHelper_01966b7c((float)-iVar6,_UNK_00a47720,uVar8,0,0);
      lVar9 = NativeHelper_01d70168(uVar8,1,*(undefined8 *)puVar3);
      uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar2);
      NativeHelper_01a4f8cc(uVar8,pvVar7,*(undefined8 *)puVar4,0);
      uVar10 = *(undefined8 *)puVar5;
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
        *(undefined8 *)(lVar9 + 0x80) = uVar8;
        NativeHelper_017ef228((undefined8 *)(lVar9 + 0x80),uVar8,uVar10);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return;
}

