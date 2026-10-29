// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HideTop() { }
// Ghidra address: 019fb9cc; ELF VA: 0x18fb9cc; file offset: 0x18f79cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_HideTop_18f79cc(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *runtimeMethod_00;
  undefined1 auVar1 [16];
  
  if ((self->m_trans_GameTop != (void *)0x0) &&
     (auVar1 = NativeHelper_0334f4c8(self->m_trans_GameTop,0), runtimeMethod = auVar1._8_8_,
     auVar1._0_8_ != 0)) {
    NativeHelper_0335236c(auVar1._0_8_,0,0);
    runtimeMethod = extraout_x1;
    if ((self->m_trans_RemoveAd != (void *)0x0) &&
       (auVar1 = NativeHelper_0334f4c8(self->m_trans_RemoveAd,0), runtimeMethod = auVar1._8_8_,
       auVar1._0_8_ != 0)) {
      NativeHelper_0335236c(auVar1._0_8_,0,0);
      runtimeMethod = extraout_x1_00;
      if ((self->m_trans_Settings != (void *)0x0) &&
         (auVar1 = NativeHelper_0334f4c8(self->m_trans_Settings,0), runtimeMethod = auVar1._8_8_,
         auVar1._0_8_ != 0)) {
        NativeHelper_0335236c(auVar1._0_8_,0,0);
        runtimeMethod = extraout_x1_01;
        if ((self->m_trans_ToolDesc != (void *)0x0) &&
           (auVar1 = NativeHelper_0334f4c8(self->m_trans_ToolDesc,0), runtimeMethod = auVar1._8_8_,
           auVar1._0_8_ != 0)) {
          NativeHelper_0335236c(auVar1._0_8_,1,0);
          TKCommon_PlayGameView_ShowToolDescriptionAnim_18f7a70(self,runtimeMethod_00);
          if (pcRam0000000003abbbe8 == (code *)0x0) {
            pcRam0000000003abbbe8 = (code *)NativeHelper_017ef240(&UNK_00a537f7);
          }
                    /* WARNING: Could not recover jumptable at 0x0335b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003abbbe8)(0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(0,runtimeMethod);
}

