// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AdjustGameTopByBoxSpriteTop() { }
// Ghidra address: 019f46b0; ELF VA: 0x18f46b0; file offset: 0x18f06b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Type propagation algorithm not settling */

void TKCommon_PlayGameView_AdjustGameTopByBoxSpriteTop_18f06b0
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *in_x3;
  MergeFruit *x;
  void *x_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  Recovered_Vector2 value;
  Recovered_Vector2 value_00;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  float fStack_64;
  float afStack_60 [4];
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2593 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386abb0);
    bRam0000000003ab2593 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar1;
  x = self->mMergeFruit;
  afStack_60[0] = 0.0;
  afStack_60[1] = 0.0;
  afStack_60[2] = 0.0;
  afStack_60[3] = 0.0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar5,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    x_00 = self->m_trans_GameTop;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Equality_324f284(x_00,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      TKCommon_PlayGameView_CacheGameTopOriginPosition_18f0b7c(self,runtimeMethod_00);
      if (self->m_trans_GameTop != (void *)0x0) {
        UnityEngine_RectTransform_set_anchoredPosition_3259788
                  (self->m_trans_GameTop,self->_gameTopOriginPosition,(void *)0x0);
        if (self->mMergeFruit != (MergeFruit *)0x0) {
          bVar3 = MergeFruit_TryGetBoxSpriteTopScreenY_187ca94
                            (self->mMergeFruit,afStack_60 + 3,(void *)0x0);
          if (!bVar3) {
            return;
          }
          bVar3 = TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
                            (self,afStack_60 + 2,afStack_60,in_x3);
          if (!bVar3) {
            return;
          }
          fVar2 = afStack_60[2];
          fVar14 = 0.0;
          fVar11 = (self->_gameTopOriginPosition).component0;
          fVar12 = (self->_gameTopOriginPosition).component1;
          fVar15 = afStack_60[2] - afStack_60[3];
          fVar9 = 220.0 - fVar15;
          fVar10 = 60.0;
          if (fVar9 <= 60.0) {
            fVar10 = fVar9;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar9) {
            fVar13 = fVar10;
          }
          if (0.0 < fVar13) {
            if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ad4;
            fVar12 = fVar12 + fVar13;
            value.component1 = fVar12;
            value.component0 = fVar11;
            UnityEngine_RectTransform_set_anchoredPosition_3259788
                      (self->m_trans_GameTop,value,(void *)0x0);
          }
          NativeHelper_036446d4(0);
          bVar3 = TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
                            (self,afStack_60,afStack_60 + 1,in_x3);
          if (bVar3) {
            iVar4 = NativeHelper_03329744(0);
            fVar14 = 0.0;
            if (0.0 <= (float)iVar4 - afStack_60[1]) {
              fVar14 = (float)iVar4 - afStack_60[1];
            }
            if (0.0 < fVar14) {
              if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ad4;
              value_00.component1 = fVar12 + fVar14;
              value_00.component0 = fVar11;
              UnityEngine_RectTransform_set_anchoredPosition_3259788
                        (self->m_trans_GameTop,value_00,(void *)0x0);
            }
          }
          plVar6 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,7);
          puVar1 = PTR_DAT_0385c2d8;
          fStack_64 = afStack_60[3];
          lVar5 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x78),&fStack_64);
          if (plVar6 != (long *)0x0) {
            if ((lVar5 != 0) &&
               (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_019f4adc:
              uVar8 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef3f4(uVar8,0);
            }
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar5;
              NativeHelper_017ef228(plVar6 + 4,lVar5);
              fStack_68 = fVar2;
              lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_68);
              if ((lVar5 != 0) &&
                 (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_019f4adc;
              if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                plVar6[5] = lVar5;
                NativeHelper_017ef228(plVar6 + 5,lVar5);
                afStack_74[2] = fVar15;
                lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),afStack_74 + 2);
                if ((lVar5 != 0) &&
                   (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0
                   )) goto LAB_019f4adc;
                if (2 < *(uint *)(plVar6 + 3)) {
                  plVar6[6] = lVar5;
                  NativeHelper_017ef228(plVar6 + 6,lVar5);
                  afStack_74[1] = 220.0;
                  lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),afStack_74 + 1);
                  if ((lVar5 != 0) &&
                     (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                     lVar7 == 0)) goto LAB_019f4adc;
                  if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                    plVar6[7] = lVar5;
                    NativeHelper_017ef228(plVar6 + 7,lVar5);
                    afStack_74[0] = fVar13;
                    lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),afStack_74);
                    if ((lVar5 != 0) &&
                       (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) goto LAB_019f4adc;
                    if (4 < *(uint *)(plVar6 + 3)) {
                      plVar6[8] = lVar5;
                      NativeHelper_017ef228(plVar6 + 8,lVar5);
                      fStack_78 = fVar14;
                      lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_78);
                      if ((lVar5 != 0) &&
                         (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar7 == 0)) goto LAB_019f4adc;
                      if (5 < *(uint *)(plVar6 + 3)) {
                        plVar6[9] = lVar5;
                        NativeHelper_017ef228(plVar6 + 9,lVar5);
                        fStack_7c = fVar13 + fVar14;
                        lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_7c);
                        if ((lVar5 != 0) &&
                           (lVar7 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar7 == 0)) goto LAB_019f4adc;
                        if (6 < *(uint *)(plVar6 + 3)) {
                          plVar6[10] = lVar5;
                          NativeHelper_017ef228(plVar6 + 10,lVar5);
                          uVar8 = NativeHelper_02aa7558(*(undefined8 *)PTR_DAT_0386abb0,plVar6,0);
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
LAB_019f4ad4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return;
}

