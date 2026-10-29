// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AdjustForBanner(bool show) { }
// Ghidra address: 019f93d0; ELF VA: 0x18f93d0; file offset: 0x18f53d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_AdjustForBanner_18f53d0
               (TKCommon_PlayGameView *self,bool show,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  
  pvVar1 = self->m_trans_bannerBottom;
  self->isBannerShow = show;
  if (show) {
    if ((pvVar1 == (void *)0x0) || (lVar2 = NativeHelper_0334f4c8(pvVar1,0), lVar2 == 0)) {
LAB_019f941c:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar3 = 1;
  }
  else {
    if ((pvVar1 == (void *)0x0) || (lVar2 = NativeHelper_0334f4c8(pvVar1,0), lVar2 == 0))
    goto LAB_019f941c;
    uVar3 = 0;
  }
  if ((bRam0000000003abb79b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a76a8,uVar3,0);
    bRam0000000003abb79b = 1;
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      if (pcRam0000000003abb800 == (code *)0x0) {
        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb800)(lVar2,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

