// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetFrictionGravity() { }
// Ghidra address: 01982844; ELF VA: 0x1882844; file offset: 0x187e844
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_ResetFrictionGravity_187e844(MergeFruit *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  long *plVar6;
  FruitItem *self_00;
  void *extraout_x1;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003ab20ec & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_03867418);
    NativeHelper_017ef284(PTR_DAT_03867420);
    NativeHelper_017ef284(PTR_DAT_03867428);
    NativeHelper_017ef284(PTR_DAT_03867430);
    NativeHelper_017ef284(PTR_DAT_03867300);
    bRam0000000003ab20ec = 1;
  }
  puVar2 = PTR_DAT_03867300;
  if (self->m_GamePanel != (void *)0x0) {
    pvVar5 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                       (self->m_GamePanel,*(void **)PTR_DAT_03867118);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar7);
      lVar7 = *(long *)puVar2;
    }
    puVar4 = PTR_DAT_03867420;
    puVar3 = PTR_DAT_03867418;
    puVar8 = *(undefined8 **)(lVar7 + 0xb8);
    lVar9 = puVar8[2];
    if (lVar9 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar7);
        puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar8;
      lVar9 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867428);
      NativeHelper_023aa920(lVar9,uVar10,*(undefined8 *)PTR_DAT_03867430,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
      *plVar6 = lVar9;
      NativeHelper_017ef228(plVar6,lVar9);
    }
    uVar10 = NativeHelper_01c6d2c4(pvVar5,lVar9,*(undefined8 *)puVar4);
    auVar11 = NativeHelper_01c6ad88(uVar10,*(undefined8 *)puVar3);
    pvVar5 = auVar11._8_8_;
    lVar7 = auVar11._0_8_;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        lVar9 = 0;
        do {
          if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          self_00 = *(FruitItem **)(lVar7 + 0x20 + lVar9 * 8);
          if (self_00 == (FruitItem *)0x0) goto LAB_019829d4;
          FruitItem_ResetMaterialFactor_1875f70(self_00,pvVar5);
          uVar1 = *(uint *)(lVar7 + 0x18);
          lVar9 = lVar9 + 1;
          pvVar5 = extraout_x1;
        } while ((int)lVar9 < (int)uVar1);
      }
      return;
    }
  }
LAB_019829d4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

