// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DoToolBomb(Action action) { }
// Ghidra address: 01983300; ELF VA: 0x1883300; file offset: 0x187f300
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_DoToolBomb_187f300
               (MergeFruit *self,LocalNotification_Action *action,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  void *runtimeMethod_01;
  FruitItem *self_00;
  uint uVar4;
  
  if ((bRam0000000003ab20f8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    bRam0000000003ab20f8 = 1;
  }
  if (self->_gameState != 0) {
    return;
  }
  self->_gameState = 3;
  if ((self->m_GamePanel != (void *)0x0) &&
     (pvVar3 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                         (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar3 != (void *)0x0)) {
    uVar1 = *(uint *)((long)pvVar3 + 0x18);
    runtimeMethod_01 = extraout_x1;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        self_00 = *(FruitItem **)((long)pvVar3 + (long)(int)uVar4 * 8 + 0x20);
        if ((self_00 == (FruitItem *)0x0) || (self_00->_rigidbody2D == (void *)0x0))
        goto LAB_019833e8;
        bVar2 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(self_00->_rigidbody2D,(void *)0x0);
        runtimeMethod_01 = runtimeMethod_00;
        if (!bVar2) {
          FruitItem_ShowToolEffect_1876ce8(self_00,runtimeMethod_00);
          runtimeMethod_01 = extraout_x1_00;
        }
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
    MergeFruit_HideCurrentFruit_187c2dc(self,runtimeMethod_01);
    self->_bombAction = action;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)&self->_bombAction >> 0xc & 0x3f),
                      ((ulong)&self->_bombAction >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
LAB_019833e8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

