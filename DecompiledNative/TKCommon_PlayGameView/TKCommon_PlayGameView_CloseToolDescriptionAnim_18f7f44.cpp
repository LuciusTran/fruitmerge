// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CloseToolDescriptionAnim(Action completeAction) { }
// Ghidra address: 019fbf44; ELF VA: 0x18fbf44; file offset: 0x18f7f44
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_CloseToolDescriptionAnim_18f7f44
               (TKCommon_PlayGameView *self,LocalNotification_Action *completeAction,
               void *runtimeMethod)

{
  void **ppvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_0386ade8;
  if ((bRam0000000003ab25dc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865f58);
    NativeHelper_017ef284(PTR_DAT_0386add8);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_038660a0);
    NativeHelper_017ef284(PTR_DAT_038673f8);
    NativeHelper_017ef284(PTR_DAT_0386adf0);
    NativeHelper_017ef284(PTR_DAT_0386adf8);
    NativeHelper_017ef284(PTR_DAT_0386ade8);
    bRam0000000003ab25dc = 1;
  }
  lVar6 = NativeHelper_017ef520(*(undefined8 *)puVar2);
  NativeHelper_02c51f64(lVar6,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = self;
    NativeHelper_017ef228((undefined8 *)(lVar6 + 0x10),self);
    *(undefined8 *)(lVar6 + 0x18) = completeAction;
    NativeHelper_017ef228((undefined8 *)(lVar6 + 0x18),completeAction);
    if (self->mShowToolDescriptionSeq != (void *)0x0) {
      NativeHelper_01a55998(self->mShowToolDescriptionSeq,0,0);
      self->mShowToolDescriptionSeq = (void *)0x0;
      NativeHelper_017ef228(&self->mShowToolDescriptionSeq,0);
    }
    puVar2 = PTR_DAT_03865f58;
    ppvVar1 = &self->mCloseToolDescriptionSeq;
    if (self->mCloseToolDescriptionSeq != (void *)0x0) {
      NativeHelper_01a55998(self->mCloseToolDescriptionSeq,0,0);
      *ppvVar1 = (void *)0x0;
      NativeHelper_017ef228(ppvVar1,0);
    }
    puVar4 = PTR_DAT_0386adf0;
    puVar3 = PTR_DAT_0386add8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pvVar7 = (void *)NativeHelper_01a52aec(0);
    uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar3);
    NativeHelper_0295dd9c(uVar8,lVar6,*(undefined8 *)puVar4,0);
    uVar8 = NativeHelper_01a54418(_UNK_00a475e8,0x43960000,_UNK_00a4763c,uVar8,0);
    NativeHelper_01a60bac(pvVar7,uVar8,0);
    uVar8 = NativeHelper_01a5e79c(0x3f800000,0x3e000000,self->m_trans_Clean,0);
    NativeHelper_01a60bf0(pvVar7,uVar8,0);
    uVar8 = NativeHelper_01a5e79c(0x3f800000,0x3e000000,self->m_trans_Bomb,0);
    NativeHelper_01a60bf0(pvVar7,uVar8,0);
    uVar8 = NativeHelper_01a5e79c(0x3f800000,0x3e000000,self->m_trans_Upgrade,0);
    NativeHelper_01a60bf0(pvVar7,uVar8,0);
    uVar8 = NativeHelper_01a5e79c(0x3f800000,0x3e000000,self->m_trans_Shake,0);
    NativeHelper_01a60bf0(pvVar7,uVar8,0);
    uVar8 = NativeHelper_019691a8(0,_UNK_00a47684,self->m_txt_ToolDescription,0);
    NativeHelper_01a60bf0(pvVar7,uVar8,0);
    puVar5 = PTR_DAT_0386adf8;
    puVar4 = PTR_DAT_038673f8;
    puVar3 = PTR_DAT_038660a0;
    puVar2 = PTR_DAT_03866068;
    if (self->m_btn_Cancel != (TKCommon_NormalClickButton *)0x0) {
      uVar8 = NativeHelper_0334f400(self->m_btn_Cancel,0);
      uVar8 = NativeHelper_01a5e79c(0,_UNK_00a4756c,uVar8,0);
      NativeHelper_01a60bf0(pvVar7,uVar8,0);
      uVar8 = NativeHelper_0334f400(self,0);
      uVar8 = NativeHelper_01d70028(pvVar7,uVar8,*(undefined8 *)puVar3);
      lVar9 = NativeHelper_01d70168(uVar8,1,*(undefined8 *)puVar4);
      uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar2);
      NativeHelper_01a4f8cc(uVar8,lVar6,*(undefined8 *)puVar5,0);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x80) = uVar8;
        NativeHelper_017ef228((undefined8 *)(lVar9 + 0x80),uVar8);
        *ppvVar1 = pvVar7;
        if (iRam0000000003cd3780 != 0) {
          func_0x018dcb10(1L << ((ulong)ppvVar1 >> 0xc & 0x3f),
                          ((ulong)ppvVar1 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

