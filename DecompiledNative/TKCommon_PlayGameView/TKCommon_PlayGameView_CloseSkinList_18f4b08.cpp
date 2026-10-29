// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CloseSkinList() { }
// Ghidra address: 019f8b08; ELF VA: 0x18f8b08; file offset: 0x18f4b08
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_CloseSkinList_18f4b08(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = runtimeMethod;
  auVar10._0_8_ = self;
  if ((bRam0000000003ab25c5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386acd8);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_0386ace0);
    auVar10 = NativeHelper_017ef284(PTR_DAT_0386a890);
    bRam0000000003ab25c5 = 1;
  }
  puVar4 = PTR_DAT_0386ace0;
  puVar3 = PTR_DAT_0386acd8;
  puVar2 = PTR_DAT_0386a890;
  puVar1 = PTR_DAT_03866068;
  if (self->m_btn_Close != (TKCommon_NormalClickButton *)0x0) {
    pvVar6 = self->m_trans_Panel;
    self->m_btn_Close->field_0x117 = 0;
    NativeHelper_01a630d4(pvVar6,0,0);
    pvVar6 = self->m_trans_Panel;
    iVar5 = NativeHelper_03329744(0);
    uVar7 = NativeHelper_01966b7c((float)-iVar5,_UNK_00a47720,pvVar6,0,0);
    lVar8 = NativeHelper_01d70168(uVar7,1,*(undefined8 *)puVar2);
    uVar7 = NativeHelper_017ef520(*(undefined8 *)puVar1);
    NativeHelper_01a4f8cc(uVar7,self,*(undefined8 *)puVar3,0);
    uVar9 = *(undefined8 *)puVar4;
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
      *(undefined8 *)(lVar8 + 0x80) = uVar7;
      NativeHelper_017ef228((undefined8 *)(lVar8 + 0x80),uVar7,uVar9);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(auVar10._0_8_,auVar10._8_8_);
}

