// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void HideToolEffectWithoutNormalStates() { }
// Ghidra address: 0197ad10; ELF VA: 0x187ad10; file offset: 0x1876d10
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_HideToolEffectWithoutNormalStates_1876d10(FruitItem *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = self->_toolEffect;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003abb79b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a76a8,0,0);
    bRam0000000003abb79b = 1;
  }
  if (pvVar1 != (void *)0x0) {
    lVar2 = *(long *)((long)pvVar1 + 0x10);
    if (lVar2 != 0) {
      if (pcRam0000000003abb800 == (code *)0x0) {
        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb800)(lVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

