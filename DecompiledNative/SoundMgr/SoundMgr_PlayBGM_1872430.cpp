// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayBGM() { }
// Ghidra address: 01976430; ELF VA: 0x1876430; file offset: 0x1872430
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_PlayBGM_1872430(SoundMgr *self,void *runtimeMethod)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if ((bRam0000000003ab2074 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2074 = 1;
  }
  if (self->BGMPlayer != (void *)0x0) {
    pvVar2 = UnityEngine_AudioSource_get_clip_3211190(self->BGMPlayer,(void *)0x0);
    pvVar3 = self->BGMs;
    if (pvVar3 != (void *)0x0) {
      if (*(int *)((long)pvVar3 + 0x18) == 0) {
LAB_019764f0:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
      pvVar3 = *(void **)((long)pvVar3 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar1 = UnityEngine_object_op_Inequality_324dec8(pvVar2,pvVar3,(void *)0x0);
      if (bVar1) {
        pvVar2 = self->BGMs;
        if (pvVar2 == (void *)0x0) goto LAB_019764ec;
        if (*(int *)((long)pvVar2 + 0x18) == 0) goto LAB_019764f0;
        if (self->BGMPlayer == (void *)0x0) goto LAB_019764ec;
        UnityEngine_AudioSource_set_clip_3211280
                  (self->BGMPlayer,*(void **)((long)pvVar2 + 0x20),(void *)0x0);
      }
      pvVar2 = self->BGMPlayer;
      if (pvVar2 != (void *)0x0) {
        if ((bRam0000000003aba3da & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a6a30);
          NativeHelper_017ef284(PTR_DAT_0386ff88);
          bRam0000000003aba3da = 1;
        }
        if (pvVar2 != (void *)0x0) {
          lVar4 = *(long *)((long)pvVar2 + 0x10);
          if (lVar4 == 0) {
            NativeHelper_0334b57c(pvVar2,*(undefined8 *)PTR_DAT_0386ff88,0);
          }
          if (pcRam0000000003aba3f8 == (code *)0x0) {
            pcRam0000000003aba3f8 = (code *)NativeHelper_017ef240(&UNK_00a6b580);
          }
                    /* WARNING: Could not recover jumptable at 0x03314c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003aba3f8)(lVar4,0);
          return;
        }
        NativeHelper_0334b57c(0,*(undefined8 *)PTR_DAT_0386ff88,0);
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
  }
LAB_019764ec:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

