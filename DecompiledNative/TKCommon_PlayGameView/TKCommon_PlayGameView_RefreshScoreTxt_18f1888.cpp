// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshScoreTxt() { }
// Ghidra address: 019f5888; ELF VA: 0x18f5888; file offset: 0x18f1888
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_RefreshScoreTxt_18f1888(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = self->m_txt_HistoryScore;
  uVar1 = NativeHelper_02c0d29c(&self->mHistoryScore,0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x5f0));
    plVar2 = self->m_txt_Score;
    uVar1 = NativeHelper_02c0d29c(&self->mCurrentScore,0);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019f58f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x5f0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

