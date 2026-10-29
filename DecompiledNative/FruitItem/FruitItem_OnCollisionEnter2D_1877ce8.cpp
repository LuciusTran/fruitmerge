// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnCollisionEnter2D(Collision2D other) { }
// Ghidra address: 0197bce8; ELF VA: 0x187bce8; file offset: 0x1877ce8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_OnCollisionEnter2D_1877ce8(FruitItem *self,void *other,void *runtimeMethod)

{
  bool bVar1;
  void *pvVar2;
  MergeFruit *self_00;
  long lVar3;
  void *runtimeMethod_00;
  undefined1 auVar4 [16];
  FruitItem *pFStack_28;
  
  if ((bRam0000000003ab20b2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867110);
    NativeHelper_017ef284(PTR_DAT_03865f10);
    bRam0000000003ab20b2 = 1;
  }
  pFStack_28 = (FruitItem *)0x0;
  if ((other != (void *)0x0) &&
     (pvVar2 = UnityEngine_Collision2D_get_transform_32aaa74(other,(void *)0x0),
     pvVar2 != (void *)0x0)) {
    runtimeMethod_00 = *(void **)PTR_DAT_03867110;
    bVar1 = UnityEngine_Component_TryGetComponent_1b091b4(pvVar2,&pFStack_28,runtimeMethod_00);
    if (bVar1) {
      self->IsCollided = true;
      if (pFStack_28 == (FruitItem *)0x0) goto LAB_0197be28;
      self_00 = self->_mergeFruit;
      pFStack_28->IsCollided = true;
      if (self_00 != (MergeFruit *)0x0) {
        MergeFruit_CheckRedLine_1877e48(self_00,pFStack_28);
        if (pFStack_28 == (FruitItem *)0x0) goto LAB_0197be28;
      }
      if (((self->m_FruitType == pFStack_28->m_FruitType) && (self->IsMerged == false)) &&
         (pFStack_28->IsMerged == false)) {
        FruitItem_Merge_18780dc(self,pFStack_28,runtimeMethod_00);
      }
      else {
        FruitItem_PlayTouchSound_1878410(self,pFStack_28);
        FruitItem_CheckPenetration_187739c(self,pFStack_28,runtimeMethod_00);
      }
    }
    else {
      pvVar2 = UnityEngine_Collision2D_get_collider_32aa940(other,(void *)0x0);
      if ((((pvVar2 == (void *)0x0) ||
           (pvVar2 = (void *)NativeHelper_0334f400(pvVar2,0), pvVar2 == (void *)0x0)) ||
          (pvVar2 = UnityEngine_object_get_name_3252e0c(pvVar2,(void *)0x0), pvVar2 == (void *)0x0))
         || (lVar3 = NativeHelper_02aaad90(pvVar2,0), lVar3 == 0)) goto LAB_0197be28;
      auVar4 = NativeHelper_02aab40c(lVar3,*(undefined8 *)PTR_DAT_03865f10,0);
      if ((auVar4._0_8_ & 1) != 0) {
        FruitItem_PlayTouchSound_1878410(self,auVar4._8_8_);
      }
    }
    return;
  }
LAB_0197be28:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

