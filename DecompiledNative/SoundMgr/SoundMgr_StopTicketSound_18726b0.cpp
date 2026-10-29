// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopTicketSound() { }
// Ghidra address: 019766b0; ELF VA: 0x18766b0; file offset: 0x18726b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_StopTicketSound_18726b0(SoundMgr *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *extraout_x1;
  void *x;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2076 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2076 = 1;
    runtimeMethod = extraout_x1;
  }
  x = self->LoopSoundPlayer;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->LoopSoundPlayer != (void *)0x0) {
      UnityEngine_AudioSource_Stop_32114a4(self->LoopSoundPlayer,(void *)0x0);
      if (self->LoopSoundPlayer != (void *)0x0) {
        UnityEngine_AudioSource_set_volume_3210fe0(self->LoopSoundPlayer,1.0,(void *)0x0);
        goto LAB_01976730;
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_01976730:
  if (*(int *)&self->field_0x70 == 0x11) {
    *(undefined4 *)&self->field_0x70 = 0;
  }
  if (*(int *)&self->field_0x74 == 0x11) {
    *(undefined4 *)&self->field_0x74 = 0;
  }
  return;
}

