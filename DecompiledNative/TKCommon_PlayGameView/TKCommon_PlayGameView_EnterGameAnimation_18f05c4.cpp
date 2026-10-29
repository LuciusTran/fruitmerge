// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void EnterGameAnimation(float duration, Action endAction) { }
// Ghidra address: 019f45c4; ELF VA: 0x18f45c4; file offset: 0x18f05c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_EnterGameAnimation_18f05c4
               (TKCommon_PlayGameView *self,float duration,LocalNotification_Action *endAction,
               void *runtimeMethod)

{
  if (self->_IsShowGame_k__BackingField != false) {
    return;
  }
  self->_IsShowGame_k__BackingField = true;
  TKCommon_PlayGameView_StartAdsBreakWaiting_18f2fc4(self,endAction);
  if (endAction != (LocalNotification_Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019f45fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*endAction->Title)(*(undefined8 *)(endAction + 1),*(undefined8 *)&endAction->Foreground);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

