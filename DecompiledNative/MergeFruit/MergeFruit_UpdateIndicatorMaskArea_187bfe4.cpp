// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateIndicatorMaskArea() { }
// Ghidra address: 0197ffe4; ELF VA: 0x187ffe4; file offset: 0x187bfe4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_UpdateIndicatorMaskArea_187bfe4(MergeFruit *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  WorldMaskController *pWVar13;
  void *extraout_x1;
  void *extraout_x1_00;
  float fVar14;
  long lVar15;
  long *self_00;
  ulong uVar16;
  float fVar17;
  float fVar18;
  ulong extraout_d0;
  ulong extraout_d0_00;
  undefined4 uVar19;
  float fVar20;
  Recovered_Vector3 RVar21;
  Recovered_Vector3 RVar22;
  undefined1 auVar23 [16];
  float fStack_98;
  float fStack_94;
  float fStack_8c;
  undefined4 uStack_88;
  
  if ((bRam0000000003ab20c9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867328);
    NativeHelper_017ef284(PTR_DAT_03867330);
    NativeHelper_017ef284(PTR_DAT_0385d8b8);
    NativeHelper_017ef284(PTR_DAT_03867310);
    NativeHelper_017ef284(PTR_DAT_03867338);
    bRam0000000003ab20c9 = 1;
  }
  if ((self->_currentIndicator != (void *)0x0) &&
     (lVar10 = NativeHelper_0334f4c8(self->_currentIndicator,0), lVar10 != 0)) {
    uVar11 = NativeHelper_03352428(lVar10,0);
    puVar3 = PTR_DAT_03867338;
    uVar2 = _UNK_00a46bc8;
    uVar1 = _UNK_00a46bc0;
    if ((uVar11 & 1) == 0) {
      return;
    }
    fVar20 = (self->_lastFruitPos).component0;
    *(float *)&self->bounds = fVar20;
    uVar12 = *(undefined8 *)puVar3;
    *(undefined8 *)&self->field_0xe4 = uVar2;
    *(undefined8 *)((long)&self->bounds + 4) = uVar1;
    *(undefined4 *)&self->field_0xec = 0x3d4ccccd;
    uVar7 = NativeHelper_03352cb0(uVar12,0);
    if (*(int *)(*(long *)PTR_DAT_03867310 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)PTR_DAT_03867310);
    }
    uVar19 = 0;
    auVar23 = NativeHelper_033ae428
                        (fVar20,0,_UNK_00a47714,0x41a00000,0,1 << (ulong)(uVar7 & 0x1f),0);
    puVar5 = PTR_DAT_03867330;
    puVar4 = PTR_DAT_03867328;
    puVar3 = PTR_DAT_0385d8b8;
    pvVar8 = auVar23._8_8_;
    lVar10 = auVar23._0_8_;
    if (lVar10 != 0) {
      uVar11 = *(ulong *)(lVar10 + 0x18);
      if (uVar11 == 0) {
        pWVar13 = self->_currentWordMaskController;
        if (pWVar13 != (WorldMaskController *)0x0) {
          pWVar13->height = pWVar13->baseHeight;
          pvVar8 = (void *)NativeHelper_0334f400(pWVar13,0);
          pvVar9 = (void *)NativeHelper_0334f400(pWVar13,0);
          uVar11 = extraout_d0;
          if (pvVar9 != (void *)0x0) {
            RVar21 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
            fVar20 = (pWVar13->basePos).component1;
            pvVar9 = (void *)NativeHelper_0334f400
                                       (RVar21.component0,CONCAT44(uVar19,RVar21.component1),
                                        RVar21.component2,pWVar13,0);
            uVar11 = extraout_d0_00;
            if (pvVar9 != (void *)0x0) {
              RVar22 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
              RVar21.component2 = RVar22.component2;
              uVar11 = (ulong)(uint)RVar22.component0;
              if (pvVar8 != (void *)0x0) {
                RVar21.component1 = fVar20;
                uVar19 = 0;
                UnityEngine_Transform_set_position_325a7e8(pvVar8,RVar21,(void *)0x0);
                puVar3 = PTR_DAT_0385c2a0;
                if ((bRam0000000003ab209c & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_0385c2a0);
                  NativeHelper_017ef284(PTR_DAT_03867030);
                  bRam0000000003ab209c = 1;
                }
                pvVar8 = pWVar13->maskMaterial;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar8,(void *)0x0,(void *)0x0);
                if (!bVar6) {
                  return;
                }
                pvVar8 = (void *)NativeHelper_0334f400(pWVar13,0);
                if (pvVar8 != (void *)0x0) {
                  RVar21 = UnityEngine_Transform_get_position_325a714(pvVar8,(void *)0x0);
                  puVar3 = PTR_DAT_03867030;
                  pvVar8 = pWVar13->maskMaterial;
                  if (*(int *)(*(long *)PTR_DAT_03867030 + 0xe4) == 0) {
                    NativeHelper_017ef404
                              (RVar21.component0,CONCAT44(uVar19,RVar21.component1),
                               RVar21.component2);
                  }
                  if (pvVar8 != (void *)0x0) {
                    uVar19 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
                    if ((bRam0000000003abae9d & 1) == 0) {
                      NativeHelper_017ef284(PTR_DAT_038a6ef8,uVar19,0);
                      NativeHelper_017ef284(PTR_DAT_03865390);
                      bRam0000000003abae9d = 1;
                    }
                    if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef530();
                    }
                    lVar10 = *(long *)((long)pvVar8 + 0x10);
                    if (lVar10 != 0) {
                      if (*(int *)(*(long *)PTR_DAT_03865390 + 0xe4) == 0) {
                        NativeHelper_017ef404();
                      }
                      if (pcRam0000000003abaf38 == (code *)0x0) {
                        pcRam0000000003abaf38 = (code *)NativeHelper_017ef240(&UNK_00a5f9a1);
                      }
                      (*pcRam0000000003abaf38)(lVar10,uVar19,&stack0xffffffffffffffc0);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    NativeHelper_0334bff8(pvVar8,0);
                  }
                }
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530(uVar11);
        }
      }
      else {
        if ((int)uVar11 < 1) {
          fVar14 = -3.4028235e+38;
        }
        else {
          fVar14 = -3.4028235e+38;
          uVar16 = 0;
          do {
            if ((uVar11 & 0xffffffff) <= uVar16) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef538();
            }
            self_00 = *(long **)(lVar10 + 0x20 + uVar16 * 8);
            if (self_00 != (long *)0x0) {
              lVar15 = *self_00;
              fVar17 = fVar14;
              if (lVar15 == *(long *)puVar5) {
                UnityEngine_Collider2D_get_bounds_32abadc(self_00,(void *)0x0);
                UnityEngine_Collider2D_get_bounds_32abadc(self_00,(void *)0x0);
                pvVar8 = extraout_x1;
                if (fStack_8c < ABS(fVar20 - fStack_98)) goto LAB_01980248;
                lVar15 = *self_00;
                fVar17 = fStack_94 +
                         SQRT(fStack_8c * fStack_8c - (fVar20 - fStack_98) * (fVar20 - fStack_98));
                if (fVar17 <= fVar14) {
                  fVar17 = fVar14;
                }
              }
              fVar14 = fVar17;
              if (lVar15 == *(long *)puVar4) {
                UnityEngine_Collider2D_get_bounds_32abadc(self_00,(void *)0x0);
                UnityEngine_Collider2D_get_bounds_32abadc(self_00,(void *)0x0);
                UnityEngine_Collider2D_get_bounds_32abadc(self_00,(void *)0x0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                fVar18 = (float)NativeHelper_02c10c10(fStack_8c,uStack_88,0);
                pvVar8 = extraout_x1_00;
                if ((ABS(fVar20 - fStack_98) <= fVar18) &&
                   (fVar18 = fStack_94 +
                             SQRT(fVar18 * fVar18 - (fVar20 - fStack_98) * (fVar20 - fStack_98)),
                   fVar17 < fVar18)) {
                  fVar14 = fVar18;
                }
              }
            }
LAB_01980248:
            uVar11 = (ulong)*(uint *)(lVar10 + 0x18);
            uVar16 = uVar16 + 1;
          } while ((long)uVar16 < (long)(int)*(uint *)(lVar10 + 0x18));
        }
        self->_highestYPosition = fVar14;
        if (self->_currentWordMaskController != (WorldMaskController *)0x0) {
          WorldMaskController_SetHeight_187594c
                    (self->_currentWordMaskController,self->bottomEdgeY - fVar14,pvVar8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

