// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HideCurrentFruit() { }
// Ghidra address: 019802dc; ELF VA: 0x18802dc; file offset: 0x187c2dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_HideCurrentFruit_187c2dc(MergeFruit *self,void *runtimeMethod)

{
  void *extraout_x1;
  long lVar1;
  undefined1 auVar2 [16];
  
  if (self->_currentFruit != (void *)0x0) {
    NativeHelper_0335236c(self->_currentFruit,0,0);
    runtimeMethod = extraout_x1;
  }
  if ((self->_currentIndicator == (void *)0x0) ||
     (auVar2 = NativeHelper_0334f4c8(self->_currentIndicator,0), runtimeMethod = auVar2._8_8_,
     lVar1 = auVar2._0_8_, lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(0,runtimeMethod);
  }
  if ((bRam0000000003abb79b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a76a8,0,0);
    bRam0000000003abb79b = 1;
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000003abb800 == (code *)0x0) {
        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb800)(lVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

