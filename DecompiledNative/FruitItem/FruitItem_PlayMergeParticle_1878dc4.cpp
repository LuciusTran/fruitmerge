// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayMergeParticle(Vector3 pos) { }
// Ghidra address: 0197cdc4; ELF VA: 0x187cdc4; file offset: 0x1878dc4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_PlayMergeParticle_1878dc4(FruitItem *self,Recovered_Vector3 pos,void *runtimeMethod)

{
  Recovered_Quaternion rotation;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Game_UserData *self_00;
  long lVar5;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  Recovered_Color RVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20b8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867158);
    NativeHelper_017ef284(PTR_DAT_03867160);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20b8 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar7 = self->m_EffectPrefab;
  uStack_78 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar4) {
    return;
  }
  pvVar8 = self->m_EffectPrefab;
  pvVar7 = extraout_x1_00;
  if (cRam0000000003ab212c == '\0') {
    NativeHelper_017ef284(PTR_DAT_038670d8);
    cRam0000000003ab212c = '\x01';
    pvVar7 = extraout_x1_01;
  }
  puVar3 = PTR_DAT_038670d0;
  puVar2 = PTR_DAT_0385db10;
  rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
  pvVar7 = FruitItem_GetEffectParent_187666c(self,pvVar7);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  pvVar7 = UnityEngine_object_Instantiate_1ba9a74(pvVar8,pos,rotation,pvVar7,*(void **)puVar3);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if (self_00 != (Game_UserData *)0x0) {
    RVar9 = Game_UserData_GetCurrentSkinMergeColor_18d1b80
                      (self_00,self->m_FruitType + 1,(void *)0x0);
    puVar2 = PTR_DAT_03867158;
    if (pvVar7 != (void *)0x0) {
      iVar6 = 0;
      do {
        lVar5 = NativeHelper_0335213c(pvVar7,0);
        if (((lVar5 == 0) ||
            (pvVar8 = (void *)NativeHelper_0336077c(lVar5,iVar6,0), pvVar8 == (void *)0x0)) ||
           (pvVar8 = UnityEngine_Component_GetComponent_1b08498(pvVar8,*(void **)puVar2),
           pvVar8 == (void *)0x0)) goto LAB_0197d058;
        uStack_78 = NativeHelper_033aa968(pvVar8,0);
        NativeHelper_033ab7f8
                  (&uStack_b0,RVar9.component0,RVar9.component1,RVar9.component2,RVar9.component3,0)
        ;
        uStack_e8 = uStack_a8;
        uStack_f0 = uStack_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uStack_c8 = uStack_88;
        uStack_d0 = uStack_90;
        uStack_c0 = uStack_80;
        NativeHelper_033aacac(&uStack_78,&uStack_f0,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 3);
      pvVar7 = UnityEngine_GameObject_GetComponent_1b75510(pvVar7,*(void **)PTR_DAT_03867160);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)puVar1);
      }
      bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (pvVar7 == (void *)0x0) goto LAB_0197d058;
        NativeHelper_033aa414(pvVar7,0);
      }
      return;
    }
  }
LAB_0197d058:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

