// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartRedAnimation() { }
// Ghidra address: 0197a878; ELF VA: 0x187a878; file offset: 0x1876878
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_StartRedAnimation_1876878(FruitItem *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  if (self->_isRedAnimationStarted != false) {
    return;
  }
  self->_isRedAnimationStarted = true;
  FruitItem_SwitchFinishedStates_1876c9c(self,runtimeMethod);
  pvVar1 = self->_finishAnimator;
  if (pvVar1 != (void *)0x0) {
    if ((bRam0000000003abb723 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a7660,1,0);
      bRam0000000003abb723 = 1;
    }
    if (pvVar1 != (void *)0x0) {
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      if (lVar2 != 0) {
        if (pcRam0000000003abb730 == (code *)0x0) {
          pcRam0000000003abb730 = (code *)NativeHelper_017ef240(&UNK_00a6261a);
        }
                    /* WARNING: Could not recover jumptable at 0x0334ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abb730)(lVar2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8();
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

