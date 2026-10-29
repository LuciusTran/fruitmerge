// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckPenetration(FruitItem item) { }
// Ghidra address: 0197b39c; ELF VA: 0x187b39c; file offset: 0x187739c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_CheckPenetration_187739c(FruitItem *self,FruitItem *item,void *runtimeMethod)

{
  bool bVar1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  MergeFruit *exists;
  float fVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000003ab20ab & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20ab = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if ((item != (FruitItem *)0x0) && (self->_circleCollider2D != (void *)0x0)) {
    UnityEngine_Collider2D_Distance_32abd8c
              (self->_circleCollider2D,item->_circleCollider2D,(void *)0x0);
    uStack_38 = uStack_58;
    uStack_40 = uStack_60;
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    fVar2 = UnityEngine_ColliderDistance2D_get_distance_32aa7d4(&uStack_40,(void *)0x0);
    if (fVar2 < _UNK_00a47724) {
      FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod_00);
      exists = self->_mergeFruit;
      if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar1 = UnityEngine_object_op_Implicit_3252d84(exists,(void *)0x0);
      if (bVar1) {
        if (self->_mergeFruit == (MergeFruit *)0x0) goto LAB_0197b468;
        MergeFruit_FixPenetration_187746c(self->_mergeFruit,runtimeMethod_01);
      }
    }
    return;
  }
LAB_0197b468:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

