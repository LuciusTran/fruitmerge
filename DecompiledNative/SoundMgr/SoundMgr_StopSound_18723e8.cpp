// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopSound() { }
// Ghidra address: 019763e8; ELF VA: 0x18763e8; file offset: 0x18723e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_StopSound_18723e8(SoundMgr *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  *(undefined8 *)&self->field_0x70 = 0;
  if (self->SoundPlayer != (void *)0x0) {
    UnityEngine_AudioSource_Stop_32114a4(self->SoundPlayer,(void *)0x0);
    if (self->LoopSoundPlayer != (void *)0x0) {
      UnityEngine_AudioSource_Stop_32114a4(self->LoopSoundPlayer,(void *)0x0);
      pvVar1 = self->LoopSoundPlayer;
      if (pvVar1 != (void *)0x0) {
        if ((bRam0000000003aba3de & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a6a30,0);
          bRam0000000003aba3de = 1;
        }
        if (pvVar1 != (void *)0x0) {
          lVar2 = *(long *)((long)pvVar1 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_0334bff8(pvVar1,0);
          }
          if (pcRam0000000003aba418 == (code *)0x0) {
            pcRam0000000003aba418 = (code *)NativeHelper_017ef240(&UNK_00a59e43);
          }
                    /* WARNING: Could not recover jumptable at 0x03315060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003aba418)(0x3f800000,lVar2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

