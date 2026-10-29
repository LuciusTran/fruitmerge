// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void BoxAdapt() { }
// Ghidra address: 0198064c; ELF VA: 0x188064c; file offset: 0x187c64c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_BoxAdapt_187c64c(MergeFruit *self,void *runtimeMethod)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  MergeFruit *self_00;
  long lVar9;
  void *self_01;
  TKLClient_TKLSwitcherConfig *pTVar10;
  void *extraout_x1;
  void *runtimeMethod_00;
  float fVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Recovered_Vector3 RVar19;
  Recovered_Vector3 RVar20;
  Recovered_Vector3 value;
  Recovered_Vector2 RVar21;
  Recovered_Vector2 value_00;
  
  if ((bRam0000000003ab20cb & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d8b8);
    NativeHelper_017ef284(PTR_DAT_038671e8);
    NativeHelper_017ef284(PTR_DAT_03867350);
    NativeHelper_017ef284(PTR_DAT_038671f0);
    bRam0000000003ab20cb = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar8 = (void *)NativeHelper_03320a8c(0,runtimeMethod);
  if (pvVar8 != (void *)0x0) {
    uVar14 = 0;
    uVar13 = 0;
    RVar19 = UnityEngine_Camera_ScreenToWorldPoint_321c814
                       (pvVar8,(Recovered_Vector3)ZEXT812(0),(void *)0x0);
    pvVar8 = (void *)NativeHelper_03320a8c
                               (RVar19.component0,CONCAT44(uVar13,RVar19.component1),
                                CONCAT44(uVar14,RVar19.component2),0);
    iVar6 = NativeHelper_0332971c(0);
    if (pvVar8 != (void *)0x0) {
      RVar20.component0 = (float)iVar6;
      RVar20.component1 = 0.0;
      RVar20.component2 = 0.0;
      RVar20 = UnityEngine_Camera_ScreenToWorldPoint_321c814(pvVar8,RVar20,(void *)0x0);
      fVar15 = RVar20.component0 - RVar19.component0;
      bVar5 = MergeFruit_IsUType_187c5e4(self_00,runtimeMethod_00);
      puVar4 = PTR_DAT_03867058;
      fVar16 = fVar15 + _UNK_00a475b0;
      if (!bVar5) {
        fVar16 = fVar15;
      }
      if ((self->m_BoxSpriteRenderer != (void *)0x0) &&
         (pvVar8 = UnityEngine_Component_GetComponent_1b08498
                             (self->m_BoxSpriteRenderer,*(void **)PTR_DAT_03867058),
         puVar3 = PTR_DAT_0385d918, pvVar8 != (void *)0x0)) {
        RVar21 = UnityEngine_SpriteRenderer_get_size_3215114(pvVar8,(void *)0x0);
        uVar12 = (ulong)RVar21 & 0xffffffff;
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          uVar12 = NativeHelper_017ef404(uVar12);
          lVar9 = *(long *)puVar3;
        }
        puVar2 = PTR_DAT_0385d8b8;
        if (*(char *)(*(long *)(lVar9 + 0xb8) + 1) != '\0') {
          if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
            NativeHelper_017ef404(uVar12);
          }
          uVar12 = NativeHelper_02c10d60(_UNK_00a47660,fVar16,0);
          fVar16 = (float)uVar12;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          uVar12 = NativeHelper_017ef404(uVar12);
        }
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          NativeHelper_017ef404(uVar12);
          lVar9 = *(long *)puVar3;
        }
        if (self->_playGameView != (TKCommon_PlayGameView *)0x0) {
          fVar17 = *(float *)(*(long *)(lVar9 + 0xb8) + 8);
          fVar15 = TKCommon_PlayGameView_GetBottomHeight_18f1070(self->_playGameView,(void *)0x0);
          iVar6 = NativeHelper_03329744(0);
          fVar18 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
          iVar7 = NativeHelper_03329744(0);
          if (self->m_Box != (void *)0x0) {
            fVar11 = ABS(RVar19.component1);
            RVar19 = UnityEngine_Transform_get_position_325a714(self->m_Box,(void *)0x0);
            fVar15 = (((fVar17 * 0.5 - fVar15) * (float)iVar6) / fVar18) /
                     ((float)iVar7 / (fVar11 + fVar11)) -
                     (RVar21.component1 * 0.5 - RVar19.component1);
            if (fVar15 < 0.0) {
              self_01 = (void *)NativeHelper_0334f400(self,0);
              if (self_01 == (void *)0x0) goto LAB_01980a50;
              auVar1._4_8_ = 0;
              auVar1._0_4_ = -fVar15;
              UnityEngine_Transform_set_position_325a7e8
                        (self_01,(Recovered_Vector3)(auVar1 << 0x20),(void *)0x0);
            }
            RVar21.component0 = fVar16;
            UnityEngine_SpriteRenderer_set_size_32151e0(pvVar8,RVar21,(void *)0x0);
            if ((self->m_Box != (void *)0x0) &&
               (pvVar8 = UnityEngine_Transform_Find_325c35c
                                   (self->m_Box,*(void **)PTR_DAT_038671f0,(void *)0x0),
               pvVar8 != (void *)0x0)) {
              RVar19 = UnityEngine_Transform_get_position_325a714(pvVar8,(void *)0x0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                NativeHelper_017ef404(RVar19.component0);
              }
              pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
              if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
                fVar15 = fVar16 * -0.5;
                if (pTVar10->UseBox != false) {
                  fVar15 = fVar16 * -0.5 + _UNK_00a47568;
                }
                RVar19.component0 = fVar15;
                UnityEngine_Transform_set_position_325a7e8(pvVar8,RVar19,(void *)0x0);
                if ((self->m_Box != (void *)0x0) &&
                   (pvVar8 = UnityEngine_Transform_Find_325c35c
                                       (self->m_Box,*(void **)PTR_DAT_038671e8,(void *)0x0),
                   pvVar8 != (void *)0x0)) {
                  RVar19 = UnityEngine_Transform_get_position_325a714(pvVar8,(void *)0x0);
                  value.component2 = RVar19.component2;
                  value.component1 = RVar19.component1;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    NativeHelper_017ef404(RVar19.component0);
                  }
                  pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
                  if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
                    fVar15 = fVar16 * 0.5;
                    if (pTVar10->UseBox != false) {
                      fVar15 = fVar16 * 0.5 + _UNK_00a47794;
                    }
                    value.component0 = fVar15;
                    UnityEngine_Transform_set_position_325a7e8(pvVar8,value,(void *)0x0);
                    if (((self->m_BoxSpriteRenderer != (void *)0x0) &&
                        (pvVar8 = UnityEngine_Transform_Find_325c35c
                                            (self->m_BoxSpriteRenderer,*(void **)PTR_DAT_03867350,
                                             (void *)0x0), pvVar8 != (void *)0x0)) &&
                       (pvVar8 = UnityEngine_Component_GetComponent_1b08498(pvVar8,*(void **)puVar4)
                       , pvVar8 != (void *)0x0)) {
                      RVar21 = UnityEngine_SpriteRenderer_get_size_3215114(pvVar8,(void *)0x0);
                      value_00.component1 = RVar21.component1;
                      value_00.component0 = fVar16;
                      UnityEngine_SpriteRenderer_set_size_32151e0(pvVar8,value_00,(void *)0x0);
                      if ((self->m_RedLine != (void *)0x0) &&
                         (pvVar8 = UnityEngine_Component_GetComponent_1b08498
                                             (self->m_RedLine,*(void **)puVar4),
                         pvVar8 != (void *)0x0)) {
                        UnityEngine_SpriteRenderer_get_size_3215114(pvVar8,(void *)0x0);
                        if ((bRam0000000003aba5df & 1) == 0) {
                          NativeHelper_017ef284(PTR_DAT_038a6b00,0);
                          bRam0000000003aba5df = 1;
                        }
                        if (pvVar8 != (void *)0x0) {
                          lVar9 = *(long *)((long)pvVar8 + 0x10);
                          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                            NativeHelper_0334bff8(pvVar8,0);
                          }
                          if (pcRam0000000003aba608 == (code *)0x0) {
                            pcRam0000000003aba608 = (code *)NativeHelper_017ef240(&UNK_00a62172);
                          }
                          (*pcRam0000000003aba608)(lVar9,&stack0xffffffffffffffe8);
                          return;
                        }
                    /* WARNING: Subroutine does not return */
                        NativeHelper_017ef530();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01980a50:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

