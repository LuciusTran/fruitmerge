// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopSoundPlayer() { }
// Ghidra address: 01976ab8; ELF VA: 0x1876ab8; file offset: 0x1872ab8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_StopSoundPlayer_1872ab8(SoundMgr *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = self->SoundPlayer;
  *(undefined4 *)&self->field_0x70 = 0;
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003aba3dc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a6a30);
    bRam0000000003aba3dc = 1;
  }
  if (pvVar1 != (void *)0x0) {
    lVar2 = *(long *)((long)pvVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8(pvVar1,0);
    }
    if (pcRam0000000003aba408 == (code *)0x0) {
      pcRam0000000003aba408 = (code *)NativeHelper_017ef240(&UNK_00a6ca69);
    }
                    /* WARNING: Could not recover jumptable at 0x03314ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003aba408)(lVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

