// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshRemoveAd() { }
// Ghidra address: 019f4238; ELF VA: 0x18f4238; file offset: 0x18f0238
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019f47d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_RefreshRemoveAd_18f0238(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  IAPItemManager *pIVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  undefined1 uVar15;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *pvVar16;
  MergeFruit *x;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  Recovered_Vector3 RVar21;
  Recovered_Vector3 RVar22;
  Recovered_Vector2 value;
  Recovered_Vector2 value_00;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  
  puVar1 = PTR_DAT_0385d920;
  if ((bRam0000000003ab25a5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d920);
    bRam0000000003ab25a5 = 1;
    runtimeMethod = extraout_x1;
  }
  TKCommon_PlayGameView_CacheSubscriptionIcon_18f20f4(self,runtimeMethod);
  pvVar16 = (void *)0x0;
  TKCommon_SubscriptionIconHelper_Apply_1920114
            (self->_removeAdIconImage,self->_subscriptionIconSprite,self->m_RemoveAdsIconSprite,
             (void *)0x0);
  pIVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pIVar5 == (IAPItemManager *)0x0) goto LAB_019f4348;
  bVar2 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar5,(void *)0x0);
  pvVar6 = self->m_trans_RemoveAd;
  if (bVar2) {
    if ((pvVar6 == (void *)0x0) || (lVar7 = NativeHelper_0334f4c8(pvVar6,0), lVar7 == 0))
    goto LAB_019f4348;
    NativeHelper_0335236c(lVar7,0,0);
    if ((self->m_trans_bannerBottom == (void *)0x0) ||
       (lVar7 = NativeHelper_0334f4c8(self->m_trans_bannerBottom,0), lVar7 == 0)) goto LAB_019f4348;
    uVar15 = 0;
  }
  else {
    if ((pvVar6 == (void *)0x0) || (lVar7 = NativeHelper_0334f4c8(pvVar6,0), lVar7 == 0))
    goto LAB_019f4348;
    NativeHelper_0335236c(lVar7,1,0);
    if ((self->m_trans_bannerBottom == (void *)0x0) ||
       (lVar7 = NativeHelper_0334f4c8(self->m_trans_bannerBottom,0), lVar7 == 0)) goto LAB_019f4348;
    uVar15 = self->isBannerShow;
  }
  pvVar6 = (void *)0x0;
  NativeHelper_0335236c(lVar7,uVar15);
  pIVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pIVar5 == (IAPItemManager *)0x0) {
LAB_019f4348:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  bVar2 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar5,(void *)0x0);
  bVar2 = (bool)((bVar2 ^ 0xffU) & 1);
  if ((bRam0000000003ab25cb & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab25cb = 1;
  }
  pvVar12 = (void *)NativeHelper_03320a8c(0);
  if (bVar2 == false) {
    if ((self->m_trans_bannerBottom == (void *)0x0) ||
       (lVar7 = NativeHelper_0334f4c8(self->m_trans_bannerBottom,0), lVar7 == 0)) goto LAB_019f60f0;
    pvVar6 = (void *)0x0;
    NativeHelper_0335236c(lVar7,0);
    iVar3 = NativeHelper_03329744(0);
    if (pvVar12 == (void *)0x0) goto LAB_019f60f0;
    fVar17 = UnityEngine_Camera_get_orthographicSize_321b22c(pvVar12,(void *)0x0);
    iVar4 = NativeHelper_033200f4(pvVar12,0);
    pvVar14 = (void *)NativeHelper_0334f400(pvVar12,0);
    if (pvVar14 == (void *)0x0) goto LAB_019f60f0;
    RVar21 = UnityEngine_Transform_get_up_325abe8(pvVar14,(void *)0x0);
    pvVar13 = (void *)NativeHelper_0334f400(pvVar12,0);
    pvVar14 = (void *)NativeHelper_0334f400(pvVar12,0);
    if (pvVar14 == (void *)0x0) goto LAB_019f60f0;
    RVar22 = UnityEngine_Transform_get_position_325a714(pvVar14,(void *)0x0);
    if (pvVar13 == (void *)0x0) goto LAB_019f60f0;
    fVar20 = (float)iVar3 / _UNK_00a475b8;
    fVar19 = 1.0;
    if (fVar20 <= 1.0) {
      fVar19 = fVar20;
    }
    fVar18 = 24.0;
    if (_UNK_00a4765c <= fVar20) {
      fVar18 = fVar19 * 120.0;
    }
    fVar18 = fVar18 * ((fVar17 + fVar17) / (float)iVar4);
    fVar20 = fVar18 * RVar21.component2 + RVar22.component2;
    fVar19 = fVar18 * RVar21.component1 + 0.0;
    fVar17 = fVar18 * RVar21.component0 + 0.0;
  }
  else {
    if (pvVar12 == (void *)0x0) goto LAB_019f60f0;
    pvVar13 = (void *)NativeHelper_0334f400(pvVar12,0);
    pvVar14 = (void *)NativeHelper_0334f400(pvVar12,0);
    if (pvVar14 == (void *)0x0) goto LAB_019f60f0;
    RVar21 = UnityEngine_Transform_get_position_325a714(pvVar14,(void *)0x0);
    fVar20 = RVar21.component2;
    if (pvVar13 == (void *)0x0) goto LAB_019f60f0;
    fVar17 = 0.0;
    fVar19 = 0.0;
  }
  RVar21.component1 = fVar19;
  RVar21.component0 = fVar17;
  RVar21.component2 = fVar20;
  UnityEngine_Transform_set_position_325a7e8(pvVar13,RVar21,(void *)0x0);
  if (self->_fruitCamera != (void *)0x0) {
    pvVar14 = (void *)NativeHelper_0334f400(self->_fruitCamera,0);
    pvVar13 = (void *)NativeHelper_0334f400(pvVar12,0);
    if ((pvVar13 != (void *)0x0) &&
       (RVar21 = UnityEngine_Transform_get_position_325a714(pvVar13,(void *)0x0),
       pvVar14 != (void *)0x0)) {
      UnityEngine_Transform_set_position_325a7e8(pvVar14,RVar21,(void *)0x0);
      pvVar12 = (void *)NativeHelper_0334f400(pvVar12,0);
      puVar1 = PTR_DAT_0385d918;
      if (pvVar12 != (void *)0x0) {
        RVar21 = UnityEngine_Transform_get_position_325a714(pvVar12,(void *)0x0);
        lVar7 = *(long *)puVar1;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar7 = *(long *)puVar1;
        }
        lVar7 = *(long *)(lVar7 + 0xb8);
        *(float *)(lVar7 + 0xc) = RVar21.component0;
        *(float *)(lVar7 + 0x10) = RVar21.component1;
        *(float *)(lVar7 + 0x14) = RVar21.component2;
        TKCommon_PlayGameView_RefreshToolPanel_18ef610(self,bVar2,pvVar6);
        lVar7 = NativeHelper_0334f4c8(self,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        uVar8 = NativeHelper_033524d4(lVar7,0);
        puVar1 = PTR_DAT_0385c2a0;
        if ((uVar8 & 1) != 0) {
          if (self->_adjustGameTopCoroutine != (void *)0x0) {
            UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                      (self,self->_adjustGameTopCoroutine,(void *)0x0);
          }
          pvVar16 = (void *)NativeHelper_019f4ae8(self);
          pvVar16 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar16,(void *)0x0);
          self->_adjustGameTopCoroutine = pvVar16;
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
          pvVar6 = self->m_trans_GameTop;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar2 = UnityEngine_object_op_Equality_324f284(pvVar6,(void *)0x0,(void *)0x0);
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
                                   (float *)&stack0xffffffffffffffa0,pvVar16);
                if (!bVar2) {
                  return;
                }
                fVar17 = 0.0;
                fVar19 = (self->_gameTopOriginPosition).component0;
                if (self->m_trans_GameTop != (void *)0x0) {
                  fVar20 = (self->_gameTopOriginPosition).component1 + 60.0;
                  value.component1 = fVar20;
                  value.component0 = fVar19;
                  UnityEngine_RectTransform_set_anchoredPosition_3259788
                            (self->m_trans_GameTop,value,(void *)0x0);
                  NativeHelper_036446d4(0);
                  bVar2 = TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
                                    (self,(float *)&stack0xffffffffffffffa0,
                                     (float *)&stack0xffffffffffffffa4,pvVar16);
                  if (bVar2) {
                    iVar3 = NativeHelper_03329744(0);
                    fVar17 = 0.0;
                    if (0.0 <= (float)iVar3 - 0.0) {
                      fVar17 = (float)iVar3 - 0.0;
                    }
                    if (0.0 < fVar17) {
                      if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ad4;
                      value_00.component1 = fVar20 + fVar17;
                      value_00.component0 = fVar19;
                      UnityEngine_RectTransform_set_anchoredPosition_3259788
                                (self->m_trans_GameTop,value_00,(void *)0x0);
                    }
                  }
                  plVar9 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,7);
                  puVar1 = PTR_DAT_0385c2d8;
                  fStack_64 = 0.0;
                  lVar7 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x78),&fStack_64)
                  ;
                  if (plVar9 != (long *)0x0) {
                    if ((lVar7 != 0) &&
                       (lVar10 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar10 == 0)) {
LAB_019f4adc:
                      uVar11 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef3f4(uVar11,0);
                    }
                    if ((int)plVar9[3] != 0) {
                      plVar9[4] = lVar7;
                      NativeHelper_017ef228(plVar9 + 4,lVar7);
                      fStack_68 = 0.0;
                      lVar7 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_68);
                      if ((lVar7 != 0) &&
                         (lVar10 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                         lVar10 == 0)) goto LAB_019f4adc;
                      if ((*(uint *)(plVar9 + 3) & 0xfffffffe) != 0) {
                        plVar9[5] = lVar7;
                        NativeHelper_017ef228(plVar9 + 5,lVar7);
                        uStack_6c = 0;
                        lVar7 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&uStack_6c);
                        if ((lVar7 != 0) &&
                           (lVar10 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                           lVar10 == 0)) goto LAB_019f4adc;
                        if (2 < *(uint *)(plVar9 + 3)) {
                          plVar9[6] = lVar7;
                          NativeHelper_017ef228(plVar9 + 6,lVar7);
                          uStack_70 = 0x435c0000;
                          lVar7 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&uStack_70);
                          if ((lVar7 != 0) &&
                             (lVar10 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                             lVar10 == 0)) goto LAB_019f4adc;
                          if ((*(uint *)(plVar9 + 3) & 0xfffffffc) != 0) {
                            plVar9[7] = lVar7;
                            NativeHelper_017ef228(plVar9 + 7,lVar7);
                            uStack_74 = 0x42700000;
                            lVar7 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&uStack_74)
                            ;
                            if ((lVar7 != 0) &&
                               (lVar10 = NativeHelper_017ef408
                                                   (lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                               lVar10 == 0)) goto LAB_019f4adc;
                            if (4 < *(uint *)(plVar9 + 3)) {
                              plVar9[8] = lVar7;
                              NativeHelper_017ef228(plVar9 + 8,lVar7);
                              fStack_78 = fVar17;
                              lVar7 = NativeHelper_017ef40c
                                                (*(undefined8 *)(puVar1 + 0x78),&fStack_78);
                              if ((lVar7 != 0) &&
                                 (lVar10 = NativeHelper_017ef408
                                                     (lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                                 lVar10 == 0)) goto LAB_019f4adc;
                              if (5 < *(uint *)(plVar9 + 3)) {
                                plVar9[9] = lVar7;
                                NativeHelper_017ef228(plVar9 + 9,lVar7);
                                fStack_7c = fVar17 + 60.0;
                                lVar7 = NativeHelper_017ef40c
                                                  (*(undefined8 *)(puVar1 + 0x78),&fStack_7c);
                                if ((lVar7 != 0) &&
                                   (lVar10 = NativeHelper_017ef408
                                                       (lVar7,*(undefined8 *)(*plVar9 + 0x40)),
                                   lVar10 == 0)) goto LAB_019f4adc;
                                if (6 < *(uint *)(plVar9 + 3)) {
                                  plVar9[10] = lVar7;
                                  NativeHelper_017ef228(plVar9 + 10,lVar7);
                                  uVar11 = NativeHelper_02aa7558
                                                     (*(undefined8 *)PTR_DAT_0386abb0,plVar9,0);
                                  NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar11,0)
                                  ;
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

