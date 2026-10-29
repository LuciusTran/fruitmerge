// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayLevelBGM(SoundName soundName) { }
// Ghidra address: 019764f4; ELF VA: 0x18764f4; file offset: 0x18724f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_PlayLevelBGM_18724f4(SoundMgr *self,void *soundName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = PTR_DAT_03866e88;
  if ((bRam0000000003ab2075 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866e80);
    NativeHelper_017ef284(PTR_DAT_03866e88);
    NativeHelper_017ef284(PTR_DAT_03866e90);
    NativeHelper_017ef284(PTR_DAT_03866e98);
    bRam0000000003ab2075 = 1;
  }
  uStack_48 = *(undefined8 *)puVar1;
  uStack_40 = 0xffffffffffffffff;
  uStack_38 = (int)soundName;
  uVar4 = NativeHelper_02c45bb4(&uStack_48,0);
  puVar1 = PTR_DAT_0385c2a0;
  if (self->BGMPlayer != (void *)0x0) {
    pvVar5 = UnityEngine_AudioSource_get_clip_3211190(self->BGMPlayer,(void *)0x0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar7);
    }
    bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if ((self->BGMPlayer == (void *)0x0) ||
         (pvVar5 = UnityEngine_AudioSource_get_clip_3211190(self->BGMPlayer,(void *)0x0),
         pvVar5 == (void *)0x0)) goto LAB_01976694;
      pvVar5 = UnityEngine_object_get_name_3252e0c(pvVar5,(void *)0x0);
      uVar6 = NativeHelper_02aa50f0(pvVar5,uVar4,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
    puVar2 = PTR_DAT_03866e80;
    pvVar5 = (void *)NativeHelper_02aa6b6c
                               (*(undefined8 *)PTR_DAT_03866e98,uVar4,
                                *(undefined8 *)PTR_DAT_03866e90,0);
    pvVar5 = Game_Manager_ResManager_Load_1c3e9e0(pvVar5,(void *)0x0,*(void **)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar7);
    }
    bVar3 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar3) {
      return;
    }
    if (self->BGMPlayer != (void *)0x0) {
      UnityEngine_AudioSource_set_clip_3211280(self->BGMPlayer,pvVar5,(void *)0x0);
      if (self->BGMPlayer != (void *)0x0) {
        NativeHelper_033153b8(self->BGMPlayer,0);
        return;
      }
    }
  }
LAB_01976694:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

