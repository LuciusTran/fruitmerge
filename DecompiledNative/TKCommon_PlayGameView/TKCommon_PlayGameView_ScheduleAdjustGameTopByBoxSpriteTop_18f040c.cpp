// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ScheduleAdjustGameTopByBoxSpriteTop() { }
// Ghidra address: 019f440c; ELF VA: 0x18f440c; file offset: 0x18f040c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Type propagation algorithm not settling */

void TKCommon_PlayGameView_ScheduleAdjustGameTopByBoxSpriteTop_18f040c
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  void *runtimeMethod_00;
  void *in_x3;
  MergeFruit *x;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  Recovered_Vector2 value;
  Recovered_Vector2 value_00;
  float fStack_7c;
  float fStack_78;
  float afStack_74 [3];
  float fStack_68;
  float fStack_64;
  float afStack_60 [4];
  
  lVar5 = NativeHelper_0334f4c8(self,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  uVar6 = NativeHelper_033524d4(lVar5,0);
  puVar1 = PTR_DAT_0385c2a0;
  if ((uVar6 & 1) != 0) {
    if (self->_adjustGameTopCoroutine != (void *)0x0) {
      UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                (self,self->_adjustGameTopCoroutine,(void *)0x0);
    }
    pvVar7 = (void *)NativeHelper_019f4ae8(self);
    pvVar7 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar7,(void *)0x0);
    self->_adjustGameTopCoroutine = pvVar7;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)&self->_adjustGameTopCoroutine >> 0xc & 0x3f),
                      ((ulong)&self->_adjustGameTopCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
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
  afStack_60[0] = 0.0;
  afStack_60[1] = 0.0;
  afStack_60[2] = 0.0;
  afStack_60[3] = 0.0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar3 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    pvVar7 = self->m_trans_GameTop;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Equality_324f284(pvVar7,(void *)0x0,(void *)0x0);
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
          fVar16 = 0.0;
          fVar13 = (self->_gameTopOriginPosition).component0;
          fVar14 = (self->_gameTopOriginPosition).component1;
          fVar17 = afStack_60[2] - afStack_60[3];
          fVar11 = 220.0 - fVar17;
          fVar12 = 60.0;
          if (fVar11 <= 60.0) {
            fVar12 = fVar11;
          }
          fVar15 = 0.0;
          if (0.0 <= fVar11) {
            fVar15 = fVar12;
          }
          if (0.0 < fVar15) {
            if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ad4;
            fVar14 = fVar14 + fVar15;
            value.component1 = fVar14;
            value.component0 = fVar13;
            UnityEngine_RectTransform_set_anchoredPosition_3259788
                      (self->m_trans_GameTop,value,(void *)0x0);
          }
          NativeHelper_036446d4(0);
          bVar3 = TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
                            (self,afStack_60,afStack_60 + 1,in_x3);
          if (bVar3) {
            iVar4 = NativeHelper_03329744(0);
            fVar16 = 0.0;
            if (0.0 <= (float)iVar4 - afStack_60[1]) {
              fVar16 = (float)iVar4 - afStack_60[1];
            }
            if (0.0 < fVar16) {
              if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ad4;
              value_00.component1 = fVar14 + fVar16;
              value_00.component0 = fVar13;
              UnityEngine_RectTransform_set_anchoredPosition_3259788
                        (self->m_trans_GameTop,value_00,(void *)0x0);
            }
          }
          plVar8 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,7);
          puVar1 = PTR_DAT_0385c2d8;
          fStack_64 = afStack_60[3];
          lVar5 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x78),&fStack_64);
          if (plVar8 != (long *)0x0) {
            if ((lVar5 != 0) &&
               (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_019f4adc:
              uVar10 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef3f4(uVar10,0);
            }
            if ((int)plVar8[3] != 0) {
              plVar8[4] = lVar5;
              NativeHelper_017ef228(plVar8 + 4,lVar5);
              fStack_68 = fVar2;
              lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_68);
              if ((lVar5 != 0) &&
                 (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
              goto LAB_019f4adc;
              if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                plVar8[5] = lVar5;
                NativeHelper_017ef228(plVar8 + 5,lVar5);
                afStack_74[2] = fVar17;
                lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),afStack_74 + 2);
                if ((lVar5 != 0) &&
                   (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0
                   )) goto LAB_019f4adc;
                if (2 < *(uint *)(plVar8 + 3)) {
                  plVar8[6] = lVar5;
                  NativeHelper_017ef228(plVar8 + 6,lVar5);
                  afStack_74[1] = 220.0;
                  lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),afStack_74 + 1);
                  if ((lVar5 != 0) &&
                     (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar9 == 0)) goto LAB_019f4adc;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                    plVar8[7] = lVar5;
                    NativeHelper_017ef228(plVar8 + 7,lVar5);
                    afStack_74[0] = fVar15;
                    lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),afStack_74);
                    if ((lVar5 != 0) &&
                       (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_019f4adc;
                    if (4 < *(uint *)(plVar8 + 3)) {
                      plVar8[8] = lVar5;
                      NativeHelper_017ef228(plVar8 + 8,lVar5);
                      fStack_78 = fVar16;
                      lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_78);
                      if ((lVar5 != 0) &&
                         (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_019f4adc;
                      if (5 < *(uint *)(plVar8 + 3)) {
                        plVar8[9] = lVar5;
                        NativeHelper_017ef228(plVar8 + 9,lVar5);
                        fStack_7c = fVar15 + fVar16;
                        lVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x78),&fStack_7c);
                        if ((lVar5 != 0) &&
                           (lVar9 = NativeHelper_017ef408(lVar5,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar9 == 0)) goto LAB_019f4adc;
                        if (6 < *(uint *)(plVar8 + 3)) {
                          plVar8[10] = lVar5;
                          NativeHelper_017ef228(plVar8 + 10,lVar5);
                          uVar10 = NativeHelper_02aa7558(*(undefined8 *)PTR_DAT_0386abb0,plVar8,0);
                          NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar10,0);
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

