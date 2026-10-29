// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsShowingToolEffect() { }
// Ghidra address: 0197acd0; ELF VA: 0x187acd0; file offset: 0x1876cd0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool FruitItem_IsShowingToolEffect_1876cd0(FruitItem *self,void *runtimeMethod)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = self->_toolEffect;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003abb79c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a76a8,0);
    bRam0000000003abb79c = 1;
  }
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)((long)pvVar2 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000003abb808 == (code *)0x0) {
        pcRam0000000003abb808 = (code *)NativeHelper_017ef240(&UNK_00a67e7a);
      }
                    /* WARNING: Could not recover jumptable at 0x0335248c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000003abb808)(lVar3);
      return (bool)uVar1;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

