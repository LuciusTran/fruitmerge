// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 01984268; ELF VA: 0x1884268; file offset: 0x1880268
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit__StartClearFrictionGravity_d__111_MoveNext_1880268
               (MergeFruit__StartClearFrictionGravity_d__111 *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  FruitItem *self_00;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar5;
  undefined8 *puVar6;
  MergeFruit *self_01;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003ab2104 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_03867418);
    NativeHelper_017ef284(PTR_DAT_03867420);
    NativeHelper_017ef284(PTR_DAT_03867428);
    NativeHelper_017ef284(PTR_DAT_03867490);
    NativeHelper_017ef284(PTR_DAT_03867300);
    NativeHelper_017ef284(PTR_DAT_03867498);
    bRam0000000003ab2104 = 1;
    runtimeMethod = extraout_x1;
  }
  self_01 = self->__4__this;
  if (self->__1__state == 1) {
    self->__1__state = -1;
    if (self_01 == (MergeFruit *)0x0) goto LAB_019844b0;
    fVar10 = self_01->clearFrictionGravityTime;
  }
  else {
    if (self->__1__state != 0) {
      return false;
    }
    self->__1__state = -1;
    if (self_01 == (MergeFruit *)0x0) goto LAB_019844b0;
    fVar10 = 0.0;
    self_01->clearFrictionGravityTime = 0.0;
  }
  if (self->duration <= fVar10) {
    MergeFruit_ResetFrictionGravity_187e844(self_01,runtimeMethod);
    return false;
  }
  fVar9 = UnityEngine_Time_get_fixedDeltaTime_3257558((void *)0x0);
  self_01->clearFrictionGravityTime = fVar10 + fVar9;
  if (self_01->m_GamePanel != (void *)0x0) {
    pvVar3 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                       (self_01->m_GamePanel,*(void **)PTR_DAT_03867118);
    puVar2 = PTR_DAT_03867300;
    lVar5 = *(long *)PTR_DAT_03867300;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[1];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867428);
      NativeHelper_023aa920(lVar7,uVar8,*(undefined8 *)PTR_DAT_03867490,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar4 = lVar7;
      NativeHelper_017ef228(plVar4,lVar7);
    }
    uVar8 = NativeHelper_01c6d2c4(pvVar3,lVar7,*(undefined8 *)PTR_DAT_03867420);
    auVar11 = NativeHelper_01c6ad88(uVar8,*(undefined8 *)PTR_DAT_03867418);
    pvVar3 = auVar11._8_8_;
    lVar5 = auVar11._0_8_;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        lVar7 = 0;
        do {
          if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          self_00 = *(FruitItem **)(lVar5 + 0x20 + lVar7 * 8);
          if (self_00 == (FruitItem *)0x0) goto LAB_019844b0;
          FruitItem_ClearMaterialFactor_1877538
                    (self_00,self_01->clearFrictionGravityTime,self->duration,pvVar3);
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar7 = lVar7 + 1;
          pvVar3 = extraout_x1_00;
        } while ((int)lVar7 < (int)uVar1);
      }
      pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867498);
      UnityEngine_WaitForFixedUpdate_WaitForFixedUpdate_32555e0(pvVar3,(void *)0x0);
      self->__2__current = pvVar3;
      NativeHelper_017ef228(&self->__2__current,pvVar3);
      self->__1__state = 1;
      return true;
    }
  }
LAB_019844b0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

