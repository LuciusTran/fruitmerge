// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void CloseSound() { }
// Ghidra address: 01975954; ELF VA: 0x1875954; file offset: 0x1871954
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_CloseSound_1871954(SoundMgr *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  
  if (self->SoundPlayer != (void *)0x0) {
    UnityEngine_Behaviour_set_enabled_324ac04(self->SoundPlayer,false,(void *)0x0);
    pvVar1 = self->LoopSoundPlayer;
    if (pvVar1 != (void *)0x0) {
      if ((bRam0000000003abb723 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a7660,0,0);
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
          (*pcRam0000000003abb730)(lVar2,0);
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
  NativeHelper_017ef530();
}

