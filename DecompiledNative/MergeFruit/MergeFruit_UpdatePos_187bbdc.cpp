// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdatePos(Vector2 touchPosition) { }
// Ghidra address: 0197fbdc; ELF VA: 0x187fbdc; file offset: 0x187bbdc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_UpdatePos_187bbdc
               (MergeFruit *self,Recovered_Vector2 touchPosition,void *runtimeMethod)

{
  bool bVar1;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  Recovered_Vector3 RVar7;
  Recovered_Vector3 value;
  undefined1 auStack_48 [12];
  float fStack_3c;
  
  if ((bRam0000000003ab20d2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20d2 = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->_isDragging != false) {
    pvVar2 = self->_currentFruit;
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0,runtimeMethod);
    }
    bVar1 = UnityEngine_object_op_Equality_324f284(pvVar2,(void *)0x0,(void *)0x0);
    if (!bVar1) {
      pvVar2 = (void *)NativeHelper_03320a8c(0);
      if (pvVar2 != (void *)0x0) {
        RVar7.component2 = 0.0;
        RVar7._0_8_ = touchPosition;
        RVar7 = UnityEngine_Camera_ScreenToWorldPoint_321c814(pvVar2,RVar7,(void *)0x0);
        fVar3 = RVar7.component0;
        if (((self->_currentFruit != (void *)0x0) &&
            (pvVar2 = UnityEngine_GameObject_GetComponent_1b75510
                                (self->_currentFruit,*(void **)PTR_DAT_03867120),
            pvVar2 != (void *)0x0)) && (*(long *)((long)pvVar2 + 0x38) != 0)) {
          NativeHelper_0332c240(auStack_48,*(long *)((long)pvVar2 + 0x38),0);
          fVar4 = (fStack_3c + fStack_3c) * 0.5;
          uVar6 = 0;
          fVar5 = self->rightEdgeX - fVar4;
          fVar4 = self->leftEdgeX + fVar4;
          if (fVar3 <= fVar5) {
            fVar5 = fVar3;
          }
          if (fVar4 <= fVar3) {
            fVar4 = fVar5;
          }
          if ((self->_currentFruit != (void *)0x0) &&
             (pvVar2 = (void *)NativeHelper_0335213c(self->_currentFruit,0), pvVar2 != (void *)0x0))
          {
            RVar7 = UnityEngine_Transform_get_position_325a714(pvVar2,(void *)0x0);
            value.component1 = RVar7.component1;
            if ((self->_currentFruit != (void *)0x0) &&
               (pvVar2 = (void *)NativeHelper_0335213c
                                           (RVar7.component0,value.component1,
                                            CONCAT44(uVar6,RVar7.component2),self->_currentFruit,0),
               pvVar2 != (void *)0x0)) {
              value.component0 = fVar4;
              value.component2 = 0.0;
              UnityEngine_Transform_set_position_325a7e8(pvVar2,value,(void *)0x0);
              MergeFruit_ResetLastFruitPosByCurrent_187cf54(self,runtimeMethod_00);
              MergeFruit_UpdateCurrentIndicatorPosition_187c5b0(self,runtimeMethod_01);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return;
}

