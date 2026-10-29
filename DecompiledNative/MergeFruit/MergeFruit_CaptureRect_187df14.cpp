// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Rect CaptureRect(Camera fruitCamera) { }
// Ghidra address: 01981f14; ELF VA: 0x1881f14; file offset: 0x187df14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Rect
MergeFruit_CaptureRect_187df14(MergeFruit *self,void *fruitCamera,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *self_00;
  void *self_01;
  void *self_02;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 in_d2;
  undefined4 uVar6;
  float fVar7;
  Recovered_Vector3 RVar8;
  Recovered_Vector3 RVar9;
  Recovered_Vector3 RVar10;
  Recovered_Vector3 RVar11;
  Recovered_Rect RVar12;
  
  uVar6 = (undefined4)((ulong)in_d2 >> 0x20);
  if ((bRam0000000003ab20dc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c360);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038671e8);
    NativeHelper_017ef284(PTR_DAT_038671f0);
    NativeHelper_017ef284(PTR_DAT_038671f8);
    NativeHelper_017ef284(PTR_DAT_038673e0);
    bRam0000000003ab20dc = 1;
  }
  if (self->m_Box != (void *)0x0) {
    self_00 = UnityEngine_Transform_Find_325c35c(self->m_Box,*(void **)PTR_DAT_038671f0,(void *)0x0)
    ;
    if (self->m_Box != (void *)0x0) {
      self_01 = UnityEngine_Transform_Find_325c35c
                          (self->m_Box,*(void **)PTR_DAT_038671e8,(void *)0x0);
      if ((self->m_Box != (void *)0x0) &&
         (self_02 = UnityEngine_Transform_Find_325c35c
                              (self->m_Box,*(void **)PTR_DAT_038671f8,(void *)0x0),
         self_00 != (void *)0x0)) {
        RVar8 = UnityEngine_Transform_get_position_325a714(self_00,(void *)0x0);
        if (self_02 != (void *)0x0) {
          RVar9 = UnityEngine_Transform_get_position_325a714(self_02,(void *)0x0);
          puVar1 = PTR_DAT_0385c2a0;
          if (self_01 != (void *)0x0) {
            RVar10 = UnityEngine_Transform_get_position_325a714(self_01,(void *)0x0);
            RVar11 = UnityEngine_Transform_get_position_325a714(self_02,(void *)0x0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              NativeHelper_017ef404
                        (RVar11.component0,RVar11.component1,CONCAT44(uVar6,RVar11.component2));
            }
            bVar2 = UnityEngine_object_op_Equality_324f284(fruitCamera,(void *)0x0,(void *)0x0);
            if (bVar2) {
              if (*(int *)(*(long *)PTR_DAT_0385c360 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              UnityEngine_Debug_LogError_321e360(*(void **)PTR_DAT_038673e0,(void *)0x0);
              fVar3 = 0.0;
              fVar4 = 0.0;
              fVar5 = 0.0;
              fVar7 = 0.0;
            }
            else {
              if (fruitCamera == (void *)0x0) goto LAB_01982134;
              RVar8.component0 = RVar8.component0 + 0.5;
              RVar8.component1 = RVar9.component1 + 0.5;
              RVar8.component2 = 0.0;
              RVar8 = UnityEngine_Camera_WorldToScreenPoint_321c80c(fruitCamera,RVar8,(void *)0x0);
              fVar4 = RVar8.component1;
              fVar3 = RVar8.component0;
              RVar9.component1 = RVar11.component1 + 0.5;
              RVar9.component0 = RVar10.component0 + -0.5;
              RVar9.component2 = 0.0;
              RVar8 = UnityEngine_Camera_WorldToScreenPoint_321c80c(fruitCamera,RVar9,(void *)0x0);
              fVar5 = ABS(fVar3 - RVar8.component0);
              fVar7 = (fVar5 * 1080.0) / 868.0;
            }
            RVar12.component1 = fVar4;
            RVar12.component0 = fVar3;
            RVar12.component3 = fVar7;
            RVar12.component2 = fVar5;
            return RVar12;
          }
        }
      }
    }
  }
LAB_01982134:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

