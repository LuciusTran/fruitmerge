// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PrepareForCapture() { }
// Ghidra address: 01981e74; ELF VA: 0x1881e74; file offset: 0x187de74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_PrepareForCapture_187de74(MergeFruit *self,void *runtimeMethod)

{
  uint uVar1;
  void *pvVar2;
  FruitItem *self_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *extraout_x1_01;
  long lVar3;
  
  if ((bRam0000000003ab20db & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    bRam0000000003ab20db = 1;
    runtimeMethod = extraout_x1;
  }
  MergeFruit_HideCurrentFruit_187c2dc(self,runtimeMethod);
  if ((self->m_GamePanel != (void *)0x0) &&
     (pvVar2 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                         (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar2 != (void *)0x0)) {
    uVar1 = *(uint *)((long)pvVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar3 = 0;
      runtimeMethod_00 = extraout_x1_00;
      do {
        if (uVar1 <= (uint)lVar3) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        self_00 = *(FruitItem **)((long)pvVar2 + lVar3 * 8 + 0x20);
        if (self_00 == (FruitItem *)0x0) goto LAB_01981f0c;
        FruitItem_HideToolEffectWithoutNormalStates_1876d10(self_00,runtimeMethod_00);
        uVar1 = *(uint *)((long)pvVar2 + 0x18);
        lVar3 = lVar3 + 1;
        runtimeMethod_00 = extraout_x1_01;
      } while ((int)lVar3 < (int)uVar1);
    }
    return;
  }
LAB_01981f0c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

