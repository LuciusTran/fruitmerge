// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowTop() { }
// Ghidra address: 019fbeb8; ELF VA: 0x18fbeb8; file offset: 0x18f7eb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ShowTop_18f7eb8(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  LocalNotification_Action *completeAction;
  void *extraout_x1;
  void *runtimeMethod_00;
  
  puVar2 = PTR_DAT_0386ade0;
  puVar1 = PTR_DAT_0385c9f8;
  if ((bRam0000000003ab25da & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0386ade0);
    bRam0000000003ab25da = 1;
    runtimeMethod = extraout_x1;
  }
  completeAction =
       (LocalNotification_Action *)NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  runtimeMethod_00 = *(void **)puVar2;
  NativeHelper_02b8e36c(completeAction,self,runtimeMethod_00,0);
  TKCommon_PlayGameView_CloseToolDescriptionAnim_18f7f44(self,completeAction,runtimeMethod_00);
  if (pcRam0000000003abbbe8 == (code *)0x0) {
    pcRam0000000003abbbe8 = (code *)NativeHelper_017ef240(&UNK_00a537f7);
  }
                    /* WARNING: Could not recover jumptable at 0x0335b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abbbe8)(0x3f800000);
  return;
}

