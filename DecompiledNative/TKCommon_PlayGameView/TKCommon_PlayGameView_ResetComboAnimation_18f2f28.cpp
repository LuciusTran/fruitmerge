// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetComboAnimation() { }
// Ghidra address: 019f6f28; ELF VA: 0x18f6f28; file offset: 0x18f2f28
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ResetComboAnimation_18f2f28
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *extraout_x1;
  void *x;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab25d1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab25d1 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  x = self->m_img_Combo;
  self->lastComboCount = -1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar3,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    return;
  }
  if ((self->m_img_Combo == (void *)0x0) ||
     (lVar3 = NativeHelper_0334f4c8(self->m_img_Combo,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003abb79b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a76a8,0,0);
    bRam0000000003abb79b = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000003abb800 == (code *)0x0) {
        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb800)(lVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

