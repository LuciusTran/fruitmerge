// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool CanBombOrUpgradeOrShake() { }
// Ghidra address: 01982efc; ELF VA: 0x1882efc; file offset: 0x187eefc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit_CanBombOrUpgradeOrShake_187eefc(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  void *extraout_x1;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003ab20f5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_03867418);
    NativeHelper_017ef284(PTR_DAT_03867420);
    NativeHelper_017ef284(PTR_DAT_03867428);
    NativeHelper_017ef284(PTR_DAT_03867450);
    NativeHelper_017ef284(PTR_DAT_03867300);
    bRam0000000003ab20f5 = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->_gameState != 0) {
    return false;
  }
  if (self->m_GamePanel != (void *)0x0) {
    pvVar2 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                       (self->m_GamePanel,*(void **)PTR_DAT_03867118);
    puVar1 = PTR_DAT_03867300;
    lVar4 = *(long *)PTR_DAT_03867300;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar4);
      lVar4 = *(long *)puVar1;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0xb8);
    lVar6 = puVar5[6];
    if (lVar6 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar4);
        puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
      }
      uVar7 = *puVar5;
      lVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867428);
      NativeHelper_023aa920(lVar6,uVar7,*(undefined8 *)PTR_DAT_03867450,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      *plVar3 = lVar6;
      NativeHelper_017ef228(plVar3,lVar6);
    }
    uVar7 = NativeHelper_01c6d2c4(pvVar2,lVar6,*(undefined8 *)PTR_DAT_03867420);
    auVar8 = NativeHelper_01c6ad88(uVar7,*(undefined8 *)PTR_DAT_03867418);
    runtimeMethod = auVar8._8_8_;
    if (auVar8._0_8_ != 0) {
      return *(int *)(auVar8._0_8_ + 0x18) != 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(0,runtimeMethod);
}

