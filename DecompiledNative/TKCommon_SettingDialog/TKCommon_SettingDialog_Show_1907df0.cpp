// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Show() { }
// Ghidra address: 01a0bdf0; ELF VA: 0x190bdf0; file offset: 0x1907df0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_SettingDialog_Show_1907df0(TKCommon_SettingDialog *self,void *runtimeMethod)

{
  Game_Controller_View_Show_18d58e4((Game_Controller_View *)self,(void *)0x0);
  if (pcRam0000000003abbbe8 == (code *)0x0) {
    pcRam0000000003abbbe8 = (code *)NativeHelper_017ef240(&UNK_00a537f7);
  }
                    /* WARNING: Could not recover jumptable at 0x0335b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abbbe8)(0);
  return;
}

