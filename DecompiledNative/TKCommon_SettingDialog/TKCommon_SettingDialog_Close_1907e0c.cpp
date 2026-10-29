// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Close() { }
// Ghidra address: 01a0be0c; ELF VA: 0x190be0c; file offset: 0x1907e0c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_SettingDialog_Close_1907e0c(TKCommon_SettingDialog *self,void *runtimeMethod)

{
  bool bVar1;
  
  Game_Controller_View_Close_18d5904((Game_Controller_View *)self,(void *)0x0);
  bVar1 = Game_Controller_FMViewController_IsGameIsTop_18d66d4((void *)0x0);
  if (bVar1) {
    if (pcRam0000000003abbbe8 == (code *)0x0) {
      pcRam0000000003abbbe8 = (code *)NativeHelper_017ef240(&UNK_00a537f7);
    }
                    /* WARNING: Could not recover jumptable at 0x0335b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abbbe8)(0x3f800000);
    return;
  }
  return;
}

