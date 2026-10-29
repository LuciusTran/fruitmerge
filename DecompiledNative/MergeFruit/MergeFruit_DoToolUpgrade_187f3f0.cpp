// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DoToolUpgrade(Action action) { }
// Ghidra address: 019833f0; ELF VA: 0x18833f0; file offset: 0x187f3f0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_DoToolUpgrade_187f3f0
               (MergeFruit *self,LocalNotification_Action *action,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  long *plVar4;
  FruitItem *self_00;
  void *extraout_x1;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003ab20f9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038672d8);
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_038672e0);
    NativeHelper_017ef284(PTR_DAT_03867460);
    NativeHelper_017ef284(PTR_DAT_03867300);
    bRam0000000003ab20f9 = 1;
  }
  if (self->_gameState != 0) {
    return;
  }
  self->_gameState = 2;
  if (self->m_GamePanel != (void *)0x0) {
    pvVar3 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                       (self->m_GamePanel,*(void **)PTR_DAT_03867118);
    puVar2 = PTR_DAT_03867300;
    lVar5 = *(long *)PTR_DAT_03867300;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar5);
      lVar5 = *(long *)puVar2;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar7 = puVar6[8];
    if (lVar7 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar5);
        puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar8 = *puVar6;
      lVar7 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038672e0);
      NativeHelper_02731c08(lVar7,uVar8,*(undefined8 *)PTR_DAT_03867460,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
      *plVar4 = lVar7;
      NativeHelper_017ef228(plVar4,lVar7);
    }
    auVar9 = NativeHelper_01d82dcc(pvVar3,lVar7,*(undefined8 *)PTR_DAT_038672d8);
    pvVar3 = auVar9._8_8_;
    lVar5 = auVar9._0_8_;
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
          if (self_00 == (FruitItem *)0x0) goto LAB_019835a0;
          FruitItem_ShowToolEffect_1876ce8(self_00,pvVar3);
          uVar1 = *(uint *)(lVar5 + 0x18);
          lVar7 = lVar7 + 1;
          pvVar3 = extraout_x1;
        } while ((int)lVar7 < (int)uVar1);
      }
      MergeFruit_HideCurrentFruit_187c2dc(self,pvVar3);
      self->_upgradeAction = action;
      if (iRam0000000003cd3780 != 0) {
        func_0x018dcb10(1L << ((ulong)&self->_upgradeAction >> 0xc & 0x3f),
                        ((ulong)&self->_upgradeAction >> 0x12 & 0x7fff) * 8 + 0x3b07758);
      }
      return;
    }
  }
LAB_019835a0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

