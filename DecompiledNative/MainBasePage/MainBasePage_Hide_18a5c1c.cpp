// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal override void Hide() { }
// Ghidra address: 019a9c1c; ELF VA: 0x18a9c1c; file offset: 0x18a5c1c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainBasePage_Hide_18a5c1c(MainBasePage *self,void *runtimeMethod)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (self->Group != (void *)0x0) {
    NativeHelper_0363fed4(self->Group,0,0);
    auVar2 = NativeHelper_0334f4c8(self,0);
    runtimeMethod = auVar2._8_8_;
    lVar1 = auVar2._0_8_;
    if (lVar1 != 0) {
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
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(0,runtimeMethod);
}

