// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private GameObject ShowComboEffect() { }
// Ghidra address: 0197aeb4; ELF VA: 0x187aeb4; file offset: 0x1876eb4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * FruitItem_ShowComboEffect_1876eb4(FruitItem *self,void *runtimeMethod)

{
  Recovered_Quaternion rotation;
  undefined *puVar1;
  bool bVar2;
  ComboEffect *self_00;
  FruitItem *self_01;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  MergeFruit *x;
  void *pvVar3;
  void *original;
  Recovered_Vector3 position;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20a8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038670c8);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20a8 = 1;
    runtimeMethod = extraout_x1;
  }
  FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod);
  x = self->_mergeFruit;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    if (self->_mergeFruit == (MergeFruit *)0x0) {
LAB_0197b09c:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (self->_mergeFruit->_startedFinishGame == false) {
      pvVar3 = self->m_ComboEffectPrefab;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Equality_324f284(pvVar3,(void *)0x0,(void *)0x0);
      if (!bVar2) {
        original = self->m_ComboEffectPrefab;
        pvVar3 = (void *)NativeHelper_0334f400(self,0);
        if (pvVar3 != (void *)0x0) {
          position = UnityEngine_Transform_get_position_325a714(pvVar3,(void *)0x0);
          pvVar3 = extraout_x1_00;
          if (cRam0000000003ab212c == '\0') {
            NativeHelper_017ef284(PTR_DAT_038670d8);
            cRam0000000003ab212c = '\x01';
            pvVar3 = extraout_x1_01;
          }
          rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
          pvVar3 = FruitItem_GetEffectParent_187666c(self,pvVar3);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar1);
          }
          pvVar3 = UnityEngine_object_Instantiate_1ba9a74
                             (original,position,rotation,pvVar3,*(void **)PTR_DAT_038670d0);
          if ((pvVar3 != (void *)0x0) &&
             (self_00 = UnityEngine_GameObject_GetComponent_1b75510
                                  (pvVar3,*(void **)PTR_DAT_038670c8), self_00 != (ComboEffect *)0x0
             )) {
            ComboEffect_PlayAnimation_189eb64(self_00,self->ComboCount + -2,(void *)0x0);
            FruitItem_PlayComboSound_187710c(self_01,runtimeMethod_00);
            FruitItem_RecordComboCountForLog_1877160(self,runtimeMethod_01);
            return pvVar3;
          }
        }
        goto LAB_0197b09c;
      }
    }
  }
  return (void *)0x0;
}

