// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ExitGameAnimation(Action endAction) { }
// Ghidra address: 019f6d30; ELF VA: 0x18f6d30; file offset: 0x18f2d30
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ExitGameAnimation_18f2d30
               (TKCommon_PlayGameView *self,LocalNotification_Action *endAction,void *runtimeMethod)

{
  if (self->_IsShowGame_k__BackingField == false) {
    return;
  }
  self->_IsShowGame_k__BackingField = false;
  if (endAction != (LocalNotification_Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019f6d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*endAction->Title)(*(undefined8 *)(endAction + 1),*(undefined8 *)&endAction->Foreground);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

