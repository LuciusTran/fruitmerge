// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlaySound(SoundName soundName, bool loop, float playSpeed = 1, bool playNewSound = false) { }
// Ghidra address: 01975d4c; ELF VA: 0x1875d4c; file offset: 0x1871d4c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoundMgr_PlaySound_1871d4c
               (SoundMgr *self,void *soundName,bool loop,float playSpeed,bool playNewSound,
               void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *runtimeMethod_00;
  float fVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  
  iVar1 = (int)soundName;
  if ((bRam0000000003ab2077 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866e80);
    NativeHelper_017ef284(PTR_DAT_03866e88);
    NativeHelper_017ef284(PTR_DAT_03866e90);
    NativeHelper_017ef284(PTR_DAT_03866e98);
    bRam0000000003ab2077 = 1;
  }
  puVar5 = PTR_DAT_03866e98;
  puVar4 = PTR_DAT_03866e90;
  puVar3 = PTR_DAT_03866e80;
  if ((*(int *)&self->field_0x70 != iVar1) || (playNewSound)) {
    uStack_68 = *(undefined8 *)PTR_DAT_03866e88;
    *(int *)&self->field_0x70 = iVar1;
    puVar2 = PTR_DAT_0385c2a0;
    uStack_60 = 0xffffffffffffffff;
    iStack_58 = iVar1;
    uVar7 = NativeHelper_02c45bb4(&uStack_68,0);
    pvVar8 = (void *)NativeHelper_02aa6b6c(*(undefined8 *)puVar5,uVar7,*(undefined8 *)puVar4,0);
    pvVar8 = Game_Manager_ResManager_Load_1c3e9e0(pvVar8,(void *)0x0,*(void **)puVar3);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    runtimeMethod_00 = (void *)0x0;
    bVar6 = UnityEngine_object_op_Equality_324f284(pvVar8,(void *)0x0,(void *)0x0);
    if (!bVar6) {
      if (loop) {
        if (self->stopCoroutine != (void *)0x0) {
          UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->stopCoroutine,(void *)0x0);
        }
        if (self->LoopSoundPlayer != (void *)0x0) {
          UnityEngine_AudioSource_set_volume_3210fe0(self->LoopSoundPlayer,1.0,(void *)0x0);
          if (self->LoopSoundPlayer != (void *)0x0) {
            UnityEngine_AudioSource_set_time_32110bc(self->LoopSoundPlayer,0.0,(void *)0x0);
            if (self->LoopSoundPlayer != (void *)0x0) {
              UnityEngine_AudioSource_set_clip_3211280(self->LoopSoundPlayer,pvVar8,(void *)0x0);
              if (self->LoopSoundPlayer != (void *)0x0) {
                UnityEngine_AudioSource_set_pitch_32110b8
                          (self->LoopSoundPlayer,playSpeed,(void *)0x0);
                if (self->LoopSoundPlayer != (void *)0x0) {
                  NativeHelper_033153b8(self->LoopSoundPlayer,0);
                  *(int *)&self->field_0x74 = iVar1;
                  return;
                }
              }
            }
          }
        }
      }
      else {
        SoundMgr_playClip_1872760(self,pvVar8,playSpeed,runtimeMethod_00);
        if (pvVar8 != (void *)0x0) {
          fVar9 = UnityEngine_AudioClip_get_length_32107a0(pvVar8,(void *)0x0);
          pvVar8 = (void *)NativeHelper_01976840(fVar9 + _UNK_00a47680,self);
          UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar8,(void *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return;
}

