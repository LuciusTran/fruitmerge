// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayComboSound() { }
// Ghidra address: 0197b10c; ELF VA: 0x187b10c; file offset: 0x187710c
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

void FruitItem_PlayComboSound_187710c(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  SoundMgr *self_00;
  long lVar10;
  void *extraout_x1;
  void *runtimeMethod_00;
  float fVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  
  puVar2 = PTR_DAT_0385d490;
  if ((bRam0000000003ab20bd & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab20bd = 1;
    runtimeMethod = extraout_x1;
  }
  lVar10 = **(long **)(*(long *)puVar2 + 0xb8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(0,runtimeMethod);
  }
  if ((bRam0000000003ab2071 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866e68);
    NativeHelper_017ef284(PTR_DAT_03866e70);
    bRam0000000003ab2071 = 1;
  }
  lVar9 = *(long *)(lVar10 + 0x30);
  if (lVar9 != 0) {
    iVar6 = *(int *)(lVar9 + 0x18) + -1;
    if (-1 < iVar6) {
      iVar6 = 0;
    }
    iVar6 = NativeHelper_02519d28(lVar9,iVar6,*(undefined8 *)PTR_DAT_03866e70);
    if ((bRam0000000003ab2072 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385d490);
      bRam0000000003ab2072 = 1;
    }
    fVar11 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
    puVar2 = PTR_DAT_0385d490;
    if (_UNK_00a47714 <= fVar11 - *(float *)(lVar10 + 0x48)) {
      fVar11 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
      lVar9 = *(long *)puVar2;
      *(float *)(lVar10 + 0x48) = fVar11;
      self_00 = (SoundMgr *)**(undefined8 **)(lVar9 + 0xb8);
      if (self_00 == (SoundMgr *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
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
      if (*(int *)&self_00->field_0x70 != iVar6) {
        uStack_68 = *(undefined8 *)PTR_DAT_03866e88;
        *(int *)&self_00->field_0x70 = iVar6;
        puVar1 = PTR_DAT_0385c2a0;
        uStack_60 = 0xffffffffffffffff;
        iStack_58 = iVar6;
        uVar7 = NativeHelper_02c45bb4(&uStack_68,0);
        pvVar8 = (void *)NativeHelper_02aa6b6c(*(undefined8 *)puVar4,uVar7,*(undefined8 *)puVar3,0);
        pvVar8 = Game_Manager_ResManager_Load_1c3e9e0(pvVar8,(void *)0x0,*(void **)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar1);
        }
        runtimeMethod_00 = (void *)0x0;
        bVar5 = UnityEngine_object_op_Equality_324f284(pvVar8,(void *)0x0,(void *)0x0);
        if (!bVar5) {
          SoundMgr_playClip_1872760(self_00,pvVar8,1.0,runtimeMethod_00);
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          fVar11 = UnityEngine_AudioClip_get_length_32107a0(pvVar8,(void *)0x0);
          pvVar8 = (void *)NativeHelper_01976840(fVar11 + _UNK_00a47680,self_00);
          UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self_00,pvVar8,(void *)0x0);
        }
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

