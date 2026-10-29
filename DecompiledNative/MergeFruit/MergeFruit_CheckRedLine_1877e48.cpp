// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CheckRedLine() { }
// Ghidra address: 0197be48; ELF VA: 0x187be48; file offset: 0x1877e48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_CheckRedLine_1877e48(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  void *extraout_x1;
  void *runtimeMethod_00;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  float fVar10;
  Recovered_Vector3 RVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_58 [16];
  float fStack_48;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20e0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20e0 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  pvVar8 = self->m_RedLine;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar4,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Equality_324f284(pvVar8,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    pvVar8 = self->m_GamePanel;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Equality_324f284(pvVar8,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      if ((self->m_GamePanel != (void *)0x0) &&
         (pvVar8 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                             (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar8 != (void *)0x0))
      {
        uVar7 = *(uint *)((long)pvVar8 + 0x18);
        if (0 < (int)uVar7) {
          uVar9 = 0;
          bVar2 = false;
          do {
            if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef538();
            }
            lVar4 = *(long *)((long)pvVar8 + (long)(int)uVar9 * 8 + 0x20);
            if ((lVar4 == 0) || (*(void **)(lVar4 + 0x28) == (void *)0x0)) goto LAB_0197c098;
            bVar3 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c
                              (*(void **)(lVar4 + 0x28),(void *)0x0);
            if ((!bVar3) && (*(char *)(lVar4 + 0xe4) != '\0')) {
              if (0.0 < *(float *)(lVar4 + 0x88)) {
                return;
              }
              pvVar5 = (void *)NativeHelper_0334f400(lVar4,0);
              if (pvVar5 == (void *)0x0) goto LAB_0197c098;
              RVar11 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
              if (*(long *)(lVar4 + 0x38) == 0) goto LAB_0197c098;
              NativeHelper_0332c240
                        (auStack_58,RVar11.component0,RVar11.component1,RVar11.component2,
                         *(long *)(lVar4 + 0x38),0);
              fVar10 = fStack_48;
              if ((self->m_RedUpPosition == (void *)0x0) ||
                 (pvVar5 = (void *)NativeHelper_0334f400(self->m_RedUpPosition,0),
                 pvVar5 == (void *)0x0)) goto LAB_0197c098;
              fVar10 = RVar11.component1 + fVar10;
              RVar11 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
              if (RVar11.component1 <= fVar10) {
                if ((self->m_RedLine != (void *)0x0) &&
                   (lVar4 = NativeHelper_0334f4c8
                                      (RVar11.component0,RVar11.component1,RVar11.component2,
                                       self->m_RedLine,0), lVar4 != 0)) {
                  uVar6 = NativeHelper_03352428(lVar4,0);
                  if ((uVar6 & 1) != 0) {
                    return;
                  }
                  if ((self->m_RedLine != (void *)0x0) &&
                     (lVar4 = NativeHelper_0334f4c8(self->m_RedLine,0), lVar4 != 0)) {
                    NativeHelper_0335236c(lVar4,1,0);
                    MergeFruit_StartRedLineAnimation_187e138(self,runtimeMethod_00);
                    return;
                  }
                }
                goto LAB_0197c098;
              }
              if ((self->m_RedDownPosition == (void *)0x0) ||
                 (pvVar5 = (void *)NativeHelper_0334f400(self->m_RedDownPosition,0),
                 pvVar5 == (void *)0x0)) goto LAB_0197c098;
              RVar11 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
              if (RVar11.component1 <= fVar10) {
                bVar2 = true;
              }
            }
            uVar7 = *(uint *)((long)pvVar8 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar7);
          if (bVar2) {
            return;
          }
        }
        if ((self->m_RedLine != (void *)0x0) &&
           (lVar4 = NativeHelper_0334f4c8(self->m_RedLine,0), lVar4 != 0)) {
          auVar12 = NativeHelper_03352428(lVar4,0);
          if ((auVar12._0_8_ & 1) == 0) {
            return;
          }
          MergeFruit_StopRedLineAnimation_187aa30(self,auVar12._8_8_);
          if ((self->m_RedLine != (void *)0x0) &&
             (lVar4 = NativeHelper_0334f4c8(self->m_RedLine,0), lVar4 != 0)) {
            NativeHelper_0335236c(lVar4,0,0);
            return;
          }
        }
      }
LAB_0197c098:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return;
}

