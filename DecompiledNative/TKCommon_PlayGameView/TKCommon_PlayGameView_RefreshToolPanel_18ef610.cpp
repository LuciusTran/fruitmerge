// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshToolPanel(bool hasAd) { }
// Ghidra address: 019f3610; ELF VA: 0x18f3610; file offset: 0x18ef610
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_RefreshToolPanel_18ef610
               (TKCommon_PlayGameView *self,bool hasAd,void *runtimeMethod)

{
  undefined *puVar1;
  float fVar2;
  bool bVar3;
  long *self_00;
  void *pvVar4;
  ulong uVar5;
  MergeFruit *exists;
  float fVar6;
  Recovered_Vector3 RVar7;
  Recovered_Vector2 RVar8;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2589 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038673b8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03865268);
    NativeHelper_017ef284(PTR_DAT_038654f8);
    NativeHelper_017ef284(PTR_DAT_038661f0);
    NativeHelper_017ef284(PTR_DAT_038687e8);
    bRam0000000003ab2589 = 1;
  }
  exists = self->mMergeFruit;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar3 = UnityEngine_object_op_Implicit_3252d84(exists,(void *)0x0);
  if (!bVar3) {
    return;
  }
  if (self->mMergeFruit != (MergeFruit *)0x0) {
    RVar8 = MergeFruit_GetBoxBottomScreenY_187ca54(self->mMergeFruit,(void *)0x0);
    if (self->m_trans_ToolPanel != (void *)0x0) {
      self_00 = UnityEngine_Transform_get_parent_325a644(self->m_trans_ToolPanel,(void *)0x0);
      if (self_00 == (long *)0x0) {
        self_00 = (long *)0x0;
      }
      else if (*self_00 != *(long *)PTR_DAT_038654f8) {
        self_00 = (long *)0x0;
      }
      pvVar4 = (void *)NativeHelper_03352a84(*(undefined8 *)PTR_DAT_038687e8,0);
      if (pvVar4 != (void *)0x0) {
        pvVar4 = UnityEngine_GameObject_GetComponent_1b75510(pvVar4,*(void **)PTR_DAT_038673b8);
        if (*(int *)(*(long *)PTR_DAT_03865268 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)PTR_DAT_03865268);
        }
        uVar5 = NativeHelper_03642670(RVar8.component0,RVar8.component1,self_00,pvVar4,&uStack_28,0)
        ;
        if ((uVar5 & 1) == 0) {
          return;
        }
        fVar2 = uStack_28._4_4_;
        if (hasAd) {
          pvVar4 = (void *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_038661f0,4);
          if ((self->m_trans_bannerBottom == (void *)0x0) ||
             (UnityEngine_RectTransform_GetWorldCorners_325a14c
                        (self->m_trans_bannerBottom,pvVar4,(void *)0x0), pvVar4 == (void *)0x0))
          goto LAB_019f3848;
          if ((*(uint *)((long)pvVar4 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          if (self_00 == (long *)0x0) goto LAB_019f3848;
          RVar7 = UnityEngine_Transform_InverseTransformPoint_325bc94
                            (self_00,*(Recovered_Vector3 *)((long)pvVar4 + 0x2c),(void *)0x0);
          fVar6 = RVar7.component1 + -55.0;
        }
        else {
          pvVar4 = SafeAreaManager_get_Instance_18a1a60((void *)0x0);
          if (pvVar4 == (void *)0x0) goto LAB_019f3848;
          fVar6 = SafeAreaManager_get_BottomSafeAreaHeight_18abce0(pvVar4,(void *)0x0);
        }
        if (self->m_trans_ToolPanel != (void *)0x0) {
          RVar8 = UnityEngine_RectTransform_get_anchoredPosition_32596c4
                            (self->m_trans_ToolPanel,(void *)0x0);
          if (self->m_trans_ToolPanel != (void *)0x0) {
            RVar8.component1 = (fVar2 + fVar6) * 0.5;
            UnityEngine_RectTransform_set_anchoredPosition_3259788
                      (self->m_trans_ToolPanel,RVar8,(void *)0x0);
            pvVar4 = (void *)NativeHelper_019f3850(self);
            UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar4,(void *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_019f3848:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

