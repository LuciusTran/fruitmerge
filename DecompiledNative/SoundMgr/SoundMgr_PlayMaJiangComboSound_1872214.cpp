// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayMaJiangComboSound(SoundName soundName) { }
// Ghidra address: 01976214; ELF VA: 0x1876214; file offset: 0x1872214
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x01975e78) */
/* WARNING: Removing unreachable block (ram,0x01975e80) */
/* WARNING: Removing unreachable block (ram,0x01975e8c) */
/* WARNING: Removing unreachable block (ram,0x01975e94) */
/* WARNING: Removing unreachable block (ram,0x01975ea8) */
/* WARNING: Removing unreachable block (ram,0x01975ebc) */
/* WARNING: Removing unreachable block (ram,0x01975ed0) */
/* WARNING: Removing unreachable block (ram,0x01975ee4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoundMgr_PlayMaJiangComboSound_1872214(SoundMgr *self,void *soundName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  void *pvVar7;
  SoundMgr *self_00;
  void *runtimeMethod_00;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  
  if ((bRam0000000003ab2072 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab2072 = 1;
  }
  fVar10 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  puVar2 = PTR_DAT_0385d490;
  if (_UNK_00a47714 <= fVar10 - self->lastComboSoundTime) {
    fVar10 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
    lVar8 = *(long *)puVar2;
    self->lastComboSoundTime = fVar10;
    self_00 = (SoundMgr *)**(undefined8 **)(lVar8 + 0xb8);
    if (self_00 == (SoundMgr *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    iVar9 = (int)soundName;
    if ((bRam0000000003ab2077 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385c2a0);
      NativeHelper_017ef284(PTR_DAT_03866e80);
      NativeHelper_017ef284(PTR_DAT_03866e88);
      NativeHelper_017ef284(PTR_DAT_03866e90);
      NativeHelper_017ef284(PTR_DAT_03866e98);
      bRam0000000003ab2077 = 1;
    }
    puVar4 = PTR_DAT_03866e98;
    puVar3 = PTR_DAT_03866e90;
    puVar2 = PTR_DAT_03866e80;
    if (*(int *)&self_00->field_0x70 != iVar9) {
      uStack_68 = *(undefined8 *)PTR_DAT_03866e88;
      *(int *)&self_00->field_0x70 = iVar9;
      puVar1 = PTR_DAT_0385c2a0;
      uStack_60 = 0xffffffffffffffff;
      iStack_58 = iVar9;
      uVar6 = NativeHelper_02c45bb4(&uStack_68,0);
      pvVar7 = (void *)NativeHelper_02aa6b6c(*(undefined8 *)puVar4,uVar6,*(undefined8 *)puVar3,0);
      pvVar7 = Game_Manager_ResManager_Load_1c3e9e0(pvVar7,(void *)0x0,*(void **)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)puVar1);
      }
      runtimeMethod_00 = (void *)0x0;
      bVar5 = UnityEngine_object_op_Equality_324f284(pvVar7,(void *)0x0,(void *)0x0);
      if (!bVar5) {
        SoundMgr_playClip_1872760(self_00,pvVar7,1.0,runtimeMethod_00);
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        fVar10 = UnityEngine_AudioClip_get_length_32107a0(pvVar7,(void *)0x0);
        pvVar7 = (void *)NativeHelper_01976840(fVar10 + _UNK_00a47680,self_00);
        UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self_00,pvVar7,(void *)0x0);
      }
    }
    return;
  }
  return;
}

