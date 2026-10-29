// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayDestroyParticle(Vector3 pos) { }
// Ghidra address: 0197d178; ELF VA: 0x187d178; file offset: 0x1879178
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_PlayDestroyParticle_1879178
               (FruitItem *self,Recovered_Vector3 pos,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Recovered_Quaternion rotation;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *in_x4;
  SoundMgr *self_00;
  void *pvVar10;
  void *pvVar11;
  float fVar12;
  Recovered_Vector3 value;
  
  puVar4 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20b9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867160);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20b9 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar9 = *(long *)puVar4;
  pvVar10 = self->m_DestroyPrefab;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar9,runtimeMethod);
  }
  bVar6 = UnityEngine_object_op_Equality_324f284(pvVar10,(void *)0x0,(void *)0x0);
  if (bVar6) {
    return;
  }
  pvVar11 = self->m_DestroyPrefab;
  pvVar10 = extraout_x1_00;
  if (cRam0000000003ab212c == '\0') {
    NativeHelper_017ef284(PTR_DAT_038670d8);
    cRam0000000003ab212c = '\x01';
    pvVar10 = extraout_x1_01;
  }
  puVar5 = PTR_DAT_038670d0;
  rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
  pvVar10 = FruitItem_GetEffectParent_187666c(self,pvVar10);
  lVar9 = *(long *)puVar4;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar9);
  }
  pvVar10 = UnityEngine_object_Instantiate_1ba9a74(pvVar11,pos,rotation,pvVar10,*(void **)puVar5);
  if (pvVar10 != (void *)0x0) {
    pvVar11 = (void *)NativeHelper_0335213c(pvVar10,0);
    fVar12 = self->m_DestroyScale;
    if (cRam0000000003ab1f83 == '\0') {
      NativeHelper_017ef284(PTR_DAT_038654f0);
      cRam0000000003ab1f83 = '\x01';
    }
    if (pvVar11 != (void *)0x0) {
      lVar9 = *(long *)(*(long *)PTR_DAT_038654f0 + 0xb8);
      value.component2 = fVar12 * *(float *)(lVar9 + 0x14);
      value.component1 = fVar12 * *(float *)(lVar9 + 0x10);
      value.component0 = fVar12 * *(float *)(lVar9 + 0xc);
      UnityEngine_Transform_set_localScale_325af4c(pvVar11,value,(void *)0x0);
      pvVar10 = UnityEngine_GameObject_GetComponent_1b75510(pvVar10,*(void **)PTR_DAT_03867160);
      bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar10,(void *)0x0,(void *)0x0);
      if (bVar6) {
        if (pvVar10 == (void *)0x0) goto LAB_0197d380;
        NativeHelper_033aa414(pvVar10,0);
      }
      puVar4 = PTR_DAT_0385d490;
      if ((bRam0000000003ab20bc & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d490);
        bRam0000000003ab20bc = 1;
      }
      lVar9 = **(long **)(*(long *)puVar4 + 0xb8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      if ((bRam0000000003ab206f & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03866e68);
        NativeHelper_017ef284(PTR_DAT_03866e70);
        NativeHelper_017ef284(PTR_DAT_0385d490);
        bRam0000000003ab206f = 1;
      }
      fVar12 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
      if (fVar12 - *(float *)(lVar9 + 0x44) < _UNK_00a47714) {
        return;
      }
      fVar12 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
      lVar7 = *(long *)(lVar9 + 0x28);
      *(float *)(lVar9 + 0x44) = fVar12;
      if (lVar7 != 0) {
        iVar2 = *(int *)(lVar7 + 0x18);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = *(int *)(lVar9 + 0x3c) / iVar2;
        }
        self_00 = (SoundMgr *)**(undefined8 **)(*(long *)PTR_DAT_0385d490 + 0xb8);
        iVar1 = 0;
        if (iVar2 != 1) {
          iVar1 = *(int *)(lVar9 + 0x3c) - iVar3 * iVar2;
        }
        uVar8 = NativeHelper_02519d28(lVar7,iVar1,*(undefined8 *)PTR_DAT_03866e70);
        if (self_00 != (SoundMgr *)0x0) {
          SoundMgr_PlaySound_1871d4c(self_00,(void *)(uVar8 & 0xffffffff),false,1.0,false,in_x4);
          *(int *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
LAB_0197d380:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

