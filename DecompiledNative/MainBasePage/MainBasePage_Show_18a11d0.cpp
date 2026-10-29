// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal override void Show() { }
// Ghidra address: 019a51d0; ELF VA: 0x18a51d0; file offset: 0x18a11d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainBasePage_Show_18a11d0(MainBasePage *self,void *runtimeMethod)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = NativeHelper_0334f4c8(self,0);
  if (lVar1 != 0) {
    NativeHelper_0335236c(lVar1,1,0);
    pvVar2 = self->Group;
    if (pvVar2 != (void *)0x0) {
      if ((bRam0000000003abf16e & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038bc1b8,1,0);
        bRam0000000003abf16e = 1;
      }
      if (pvVar2 != (void *)0x0) {
        lVar1 = *(long *)((long)pvVar2 + 0x10);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_0334bff8(pvVar2,0);
        }
        if (pcRam0000000003abf1a0 == (code *)0x0) {
          pcRam0000000003abf1a0 = (code *)NativeHelper_017ef240(&UNK_00a484a6);
        }
                    /* WARNING: Could not recover jumptable at 0x0363ff4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abf1a0)(lVar1,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

