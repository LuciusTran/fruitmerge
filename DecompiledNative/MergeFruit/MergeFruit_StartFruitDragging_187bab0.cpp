// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartFruitDragging(Vector2 touchPosition) { }
// Ghidra address: 0197fab0; ELF VA: 0x187fab0; file offset: 0x187bab0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StartFruitDragging_187bab0
               (MergeFruit *self,Recovered_Vector2 touchPosition,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *pvVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  Recovered_Vector3 RVar8;
  Recovered_Vector3 value;
  undefined1 auStack_48 [12];
  float fStack_3c;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20d1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20d1 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar3 = self->_currentFruit;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Equality_324f284(pvVar3,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    self->_isDragging = true;
    MergeFruit_ShowCurrentIndicator_187c358(self,runtimeMethod_00);
    if ((bRam0000000003ab20d2 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_03867120);
      NativeHelper_017ef284(PTR_DAT_0385c2a0);
      bRam0000000003ab20d2 = 1;
    }
    if (self->_isDragging != false) {
      pvVar3 = self->_currentFruit;
      if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Equality_324f284(pvVar3,(void *)0x0,(void *)0x0);
      if (!bVar2) {
        pvVar3 = (void *)NativeHelper_03320a8c(0);
        if (pvVar3 != (void *)0x0) {
          RVar8.component2 = 0.0;
          RVar8._0_8_ = touchPosition;
          RVar8 = UnityEngine_Camera_ScreenToWorldPoint_321c814(pvVar3,RVar8,(void *)0x0);
          fVar4 = RVar8.component0;
          if (((self->_currentFruit != (void *)0x0) &&
              (pvVar3 = UnityEngine_GameObject_GetComponent_1b75510
                                  (self->_currentFruit,*(void **)PTR_DAT_03867120),
              pvVar3 != (void *)0x0)) && (*(long *)((long)pvVar3 + 0x38) != 0)) {
            NativeHelper_0332c240(auStack_48,*(long *)((long)pvVar3 + 0x38),0);
            fVar5 = (fStack_3c + fStack_3c) * 0.5;
            uVar7 = 0;
            fVar6 = self->rightEdgeX - fVar5;
            fVar5 = self->leftEdgeX + fVar5;
            if (fVar4 <= fVar6) {
              fVar6 = fVar4;
            }
            if (fVar5 <= fVar4) {
              fVar5 = fVar6;
            }
            if ((self->_currentFruit != (void *)0x0) &&
               (pvVar3 = (void *)NativeHelper_0335213c(self->_currentFruit,0), pvVar3 != (void *)0x0
               )) {
              RVar8 = UnityEngine_Transform_get_position_325a714(pvVar3,(void *)0x0);
              value.component1 = RVar8.component1;
              if ((self->_currentFruit != (void *)0x0) &&
                 (pvVar3 = (void *)NativeHelper_0335213c
                                             (RVar8.component0,value.component1,
                                              CONCAT44(uVar7,RVar8.component2),self->_currentFruit,0
                                             ), pvVar3 != (void *)0x0)) {
                value.component0 = fVar5;
                value.component2 = 0.0;
                UnityEngine_Transform_set_position_325a7e8(pvVar3,value,(void *)0x0);
                MergeFruit_ResetLastFruitPosByCurrent_187cf54(self,runtimeMethod_01);
                MergeFruit_UpdateCurrentIndicatorPosition_187c5b0(self,runtimeMethod_02);
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
  return;
}

