// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetCameraPositionOnDestroy() { }
// Ghidra address: 019f4020; ELF VA: 0x18f4020; file offset: 0x18f0020
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ResetCameraPositionOnDestroy_18f0020
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  void *self_00;
  void *extraout_x1;
  long lVar6;
  undefined8 in_d1;
  undefined4 uVar7;
  float fVar8;
  Recovered_Vector3 RVar9;
  
  puVar3 = PTR_DAT_0385c2a0;
  uVar7 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((bRam0000000003ab258b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab258b = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar5 = (void *)NativeHelper_03320a8c(0,runtimeMethod);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar6);
  }
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
  if (bVar4) {
    return;
  }
  if ((pvVar5 != (void *)0x0) &&
     (self_00 = (void *)NativeHelper_0334f400(pvVar5,0), self_00 != (void *)0x0)) {
    RVar9 = UnityEngine_Transform_get_position_325a714(self_00,(void *)0x0);
    fVar8 = RVar9.component2;
    pvVar5 = (void *)NativeHelper_0334f400
                               (RVar9.component0,CONCAT44(uVar7,RVar9.component1),pvVar5,0);
    if (pvVar5 != (void *)0x0) {
      auVar1._4_8_ = 0;
      auVar1._0_4_ = fVar8;
      UnityEngine_Transform_set_position_325a7e8
                (pvVar5,(Recovered_Vector3)(auVar1 << 0x40),(void *)0x0);
      pvVar5 = self->_fruitCamera;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if ((self->_fruitCamera == (void *)0x0) ||
           (pvVar5 = (void *)NativeHelper_0334f400(self->_fruitCamera,0), pvVar5 == (void *)0x0))
        goto LAB_019f4164;
        auVar2._4_8_ = 0;
        auVar2._0_4_ = fVar8;
        UnityEngine_Transform_set_position_325a7e8
                  (pvVar5,(Recovered_Vector3)(auVar2 << 0x40),(void *)0x0);
      }
      puVar3 = PTR_DAT_0385d918;
      lVar6 = *(long *)PTR_DAT_0385d918;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      *(undefined4 *)(lVar6 + 0xc) = 0;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(float *)(lVar6 + 0x14) = fVar8;
      return;
    }
  }
LAB_019f4164:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

