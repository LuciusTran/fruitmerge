// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PauseBGM() { }
// Ghidra address: 01976698; ELF VA: 0x1876698; file offset: 0x1872698
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_PauseBGM_1872698(SoundMgr *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = self->BGMPlayer;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003aba3e4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a6a30,0);
    bRam0000000003aba3e4 = 1;
  }
  if (pvVar1 != (void *)0x0) {
    lVar2 = *(long *)((long)pvVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8(pvVar1,0);
    }
    if (pcRam0000000003aba438 == (code *)0x0) {
      pcRam0000000003aba438 = (code *)NativeHelper_017ef240(&UNK_00a50302);
    }
                    /* WARNING: Could not recover jumptable at 0x0331551c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003aba438)(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

