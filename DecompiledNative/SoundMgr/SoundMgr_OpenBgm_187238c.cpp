// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void OpenBgm() { }
// Ghidra address: 0197638c; ELF VA: 0x187638c; file offset: 0x187238c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_OpenBgm_187238c(SoundMgr *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = self->BGMPlayer;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
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

