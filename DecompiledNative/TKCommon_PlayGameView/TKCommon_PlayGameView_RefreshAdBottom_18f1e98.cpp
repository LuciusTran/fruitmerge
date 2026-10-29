// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshAdBottom(bool hasAd) { }
// Ghidra address: 019f5e98; ELF VA: 0x18f5e98; file offset: 0x18f1e98
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019f47d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_RefreshAdBottom_18f1e98
               (TKCommon_PlayGameView *self,bool hasAd,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  long lVar12;
  void *runtimeMethod_00;
  void *in_x3;
  MergeFruit *x;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector3 RVar18;
  Recovered_Vector2 value;
  Recovered_Vector2 value_00;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  
  if ((bRam0000000003ab25cb & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab25cb = 1;
  }
  pvVar9 = (void *)NativeHelper_03320a8c(0);
  if (hasAd) {
    if (pvVar9 == (void *)0x0) goto LAB_019f60f0;
    pvVar10 = (void *)NativeHelper_0334f400(pvVar9,0);
    pvVar11 = (void *)NativeHelper_0334f400(pvVar9,0);
    if (pvVar11 == (void *)0x0) goto LAB_019f60f0;
    RVar17 = UnityEngine_Transform_get_position_325a714(pvVar11,(void *)0x0);
    fVar16 = RVar17.component2;
    if (pvVar10 == (void *)0x0) goto LAB_019f60f0;
    fVar13 = 0.0;
    fVar15 = 0.0;
  }
  else {
    if ((self->m_trans_bannerBottom == (void *)0x0) ||
       (lVar12 = NativeHelper_0334f4c8(self->m_trans_bannerBottom,0), lVar12 == 0))
    goto LAB_019f60f0;
    runtimeMethod = (void *)0x0;
    NativeHelper_0335236c(lVar12,0);
    iVar3 = NativeHelper_03329744(0);
    if (pvVar9 == (void *)0x0) goto LAB_019f60f0;
    fVar13 = UnityEngine_Camera_get_orthographicSize_321b22c(pvVar9,(void *)0x0);
    iVar4 = NativeHelper_033200f4(pvVar9,0);
    pvVar11 = (void *)NativeHelper_0334f400(pvVar9,0);
    if (pvVar11 == (void *)0x0) goto LAB_019f60f0;
    RVar17 = UnityEngine_Transform_get_up_325abe8(pvVar11,(void *)0x0);
    pvVar10 = (void *)NativeHelper_0334f400(pvVar9,0);
    pvVar11 = (void *)NativeHelper_0334f400(pvVar9,0);
    if (pvVar11 == (void *)0x0) goto LAB_019f60f0;
    RVar18 = UnityEngine_Transform_get_position_325a714(pvVar11,(void *)0x0);
    if (pvVar10 == (void *)0x0) goto LAB_019f60f0;
    fVar16 = (float)iVar3 / _UNK_00a475b8;
    fVar15 = 1.0;
    if (fVar16 <= 1.0) {
      fVar15 = fVar16;
    }
    fVar14 = 24.0;
    if (_UNK_00a4765c <= fVar16) {
      fVar14 = fVar15 * 120.0;
    }
    fVar14 = fVar14 * ((fVar13 + fVar13) / (float)iVar4);
    fVar16 = fVar14 * RVar17.component2 + RVar18.component2;
    fVar15 = fVar14 * RVar17.component1 + 0.0;
    fVar13 = fVar14 * RVar17.component0 + 0.0;
  }
  RVar17.component1 = fVar15;
  RVar17.component0 = fVar13;
  RVar17.component2 = fVar16;
  UnityEngine_Transform_set_position_325a7e8(pvVar10,RVar17,(void *)0x0);
  if (self->_fruitCamera != (void *)0x0) {
    pvVar11 = (void *)NativeHelper_0334f400(self->_fruitCamera,0);
    pvVar10 = (void *)NativeHelper_0334f400(pvVar9,0);
    if ((pvVar10 != (void *)0x0) &&
       (RVar17 = UnityEngine_Transform_get_position_325a714(pvVar10,(void *)0x0),
       pvVar11 != (void *)0x0)) {
      UnityEngine_Transform_set_position_325a7e8(pvVar11,RVar17,(void *)0x0);
      pvVar9 = (void *)NativeHelper_0334f400(pvVar9,0);
      puVar1 = PTR_DAT_0385d918;
      if (pvVar9 != (void *)0x0) {
        RVar17 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar12 = *(long *)puVar1;
        }
        lVar12 = *(long *)(lVar12 + 0xb8);
        *(float *)(lVar12 + 0xc) = RVar17.component0;
        *(float *)(lVar12 + 0x10) = RVar17.component1;
        *(float *)(lVar12 + 0x14) = RVar17.component2;
        TKCommon_PlayGameView_RefreshToolPanel_18ef610(self,hasAd,runtimeMethod);
        lVar12 = NativeHelper_0334f4c8(self,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        uVar5 = NativeHelper_033524d4(lVar12,0);
        puVar1 = PTR_DAT_0385c2a0;
        if ((uVar5 & 1) != 0) {
          if (self->_adjustGameTopCoroutine != (void *)0x0) {
            UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                      (self,self->_adjustGameTopCoroutine,(void *)0x0);
          }
          pvVar9 = (void *)NativeHelper_019f4ae8(self);
          pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar9,(void *)0x0);
          self->_adjustGameTopCoroutine = pvVar9;
          if (iRam0000000003cd3780 != 0) {
            func_0x018dcb10(1L << ((ulong)&self->_adjustGameTopCoroutine >> 0xc & 0x3f),
                            ((ulong)&self->_adjustGameTopCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758
                           );
          }
          return;
        }
        if ((bRam0000000003ab2593 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385c420);
          NativeHelper_017ef284(PTR_DAT_0385c2a0);
          NativeHelper_017ef284(PTR_DAT_0386abb0);
          bRam0000000003ab2593 = 1;
        }
        x = self->mMergeFruit;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        bVar2 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
        if (!bVar2) {
          pvVar9 = self->m_trans_GameTop;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar2 = UnityEngine_object_op_Equality_324f284(pvVar9,(void *)0x0,(void *)0x0);
          if (!bVar2) {
            TKCommon_PlayGameView_CacheGameTopOriginPosition_18f0b7c(self,runtimeMethod_00);
            if (self->m_trans_GameTop != (void *)0x0) {
              UnityEngine_RectTransform_set_anchoredPosition_3259788
                        (self->m_trans_GameTop,self->_gameTopOriginPosition,(void *)0x0);
              if (self->mMergeFruit != (MergeFruit *)0x0) {
                bVar2 = MergeFruit_TryGetBoxSpriteTopScreenY_187ca94
                                  (self->mMergeFruit,(float *)&stack0xffffffffffffffac,(void *)0x0);
                if (!bVar2) {
                  return;
                }
                bVar2 = TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
                                  (self,(float *)&stack0xffffffffffffffa8,
                                   (float *)&stack0xffffffffffffffa0,in_x3);
                if (!bVar2) {
                  return;
                }
                fVar13 = 0.0;
                fVar15 = (self->_gameTopOriginPosition).component0;
                if (self->m_trans_GameTop != (void *)0x0) {
                  fVar16 = (self->_gameTopOriginPosition).component1 + 60.0;
                  value.component1 = fVar16;
                  value.component0 = fVar15;
                  UnityEngine_RectTransform_set_anchoredPosition_3259788
                            (self->m_trans_GameTop,value,(void *)0x0);
                  NativeHelper_036446d4(0);
                  bVar2 = TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
                                    (self,(float *)&stack0xffffffffffffffa0,
                                     (float *)&stack0xffffffffffffffa4,in_x3);
                  if (bVar2) {
                    iVar3 = NativeHelper_03329744(0);
                    fVar13 = 0.0;
                    if (0.0 <= (float)iVar3 - 0.0) {
                      fVar13 = (float)iVar3 - 0.0;
                    }
                    if (0.0 < fVar13) {
                      if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ad4;
                      value_00.component1 = fVar16 + fVar13;
                      value_00.component0 = fVar15;
                      UnityEngine_RectTransform_set_anchoredPosition_3259788
                                (self->m_trans_GameTop,value_00,(void *)0x0);
                    }
                  }
                  plVar6 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,7);
                  puVar1 = PTR_DAT_0385c2d8;
                  fStack_64 = 0.0;
                  lVar12 = NativeHelper_017ef40c
                                     (*(undefined8 *)(PTR_DAT_0385c2d8 + 0x78),&fStack_64);
                  if (plVar6 != (long *)0x0) {
                    if ((lVar12 != 0) &&
                       (lVar7 = NativeHelper_017ef408(lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) {
LAB_019f4adc:
                      uVar8 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef3f4(uVar8,0);
                    }
                    if ((int)plVar6[3] != 0) {
                      plVar6[4] = lVar12;
                      NativeHelper_017ef228(plVar6 + 4,lVar12);
                      fStack_68 = 0.0;
                      lVar12 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_68);
                      if ((lVar12 != 0) &&
                         (lVar7 = NativeHelper_017ef408(lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar7 == 0)) goto LAB_019f4adc;
                      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                        plVar6[5] = lVar12;
                        NativeHelper_017ef228(plVar6 + 5,lVar12);
                        uStack_6c = 0;
                        lVar12 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&uStack_6c);
                        if ((lVar12 != 0) &&
                           (lVar7 = NativeHelper_017ef408(lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar7 == 0)) goto LAB_019f4adc;
                        if (2 < *(uint *)(plVar6 + 3)) {
                          plVar6[6] = lVar12;
                          NativeHelper_017ef228(plVar6 + 6,lVar12);
                          uStack_70 = 0x435c0000;
                          lVar12 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&uStack_70);
                          if ((lVar12 != 0) &&
                             (lVar7 = NativeHelper_017ef408(lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar7 == 0)) goto LAB_019f4adc;
                          if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                            plVar6[7] = lVar12;
                            NativeHelper_017ef228(plVar6 + 7,lVar12);
                            uStack_74 = 0x42700000;
                            lVar12 = NativeHelper_017ef40c
                                               (*(undefined8 *)(puVar1 + 0x78),&uStack_74);
                            if ((lVar12 != 0) &&
                               (lVar7 = NativeHelper_017ef408
                                                  (lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar7 == 0)) goto LAB_019f4adc;
                            if (4 < *(uint *)(plVar6 + 3)) {
                              plVar6[8] = lVar12;
                              NativeHelper_017ef228(plVar6 + 8,lVar12);
                              fStack_78 = fVar13;
                              lVar12 = NativeHelper_017ef40c
                                                 (*(undefined8 *)(puVar1 + 0x78),&fStack_78);
                              if ((lVar12 != 0) &&
                                 (lVar7 = NativeHelper_017ef408
                                                    (lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar7 == 0)) goto LAB_019f4adc;
                              if (5 < *(uint *)(plVar6 + 3)) {
                                plVar6[9] = lVar12;
                                NativeHelper_017ef228(plVar6 + 9,lVar12);
                                fStack_7c = fVar13 + 60.0;
                                lVar12 = NativeHelper_017ef40c
                                                   (*(undefined8 *)(puVar1 + 0x78),&fStack_7c);
                                if ((lVar12 != 0) &&
                                   (lVar7 = NativeHelper_017ef408
                                                      (lVar12,*(undefined8 *)(*plVar6 + 0x40)),
                                   lVar7 == 0)) goto LAB_019f4adc;
                                if (6 < *(uint *)(plVar6 + 3)) {
                                  plVar6[10] = lVar12;
                                  NativeHelper_017ef228(plVar6 + 10,lVar12);
                                  uVar8 = NativeHelper_02aa7558
                                                    (*(undefined8 *)PTR_DAT_0386abb0,plVar6,0);
                                  NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar8,0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef538();
                  }
                }
              }
            }
LAB_019f4ad4:
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
        }
        return;
      }
    }
  }
LAB_019f60f0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

