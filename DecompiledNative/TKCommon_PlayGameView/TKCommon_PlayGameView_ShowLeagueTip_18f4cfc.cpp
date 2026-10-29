// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ShowLeagueTip(float displayDuration = 3) { }
// Ghidra address: 019f8cfc; ELF VA: 0x18f8cfc; file offset: 0x18f4cfc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_ShowLeagueTip_18f4cfc
               (TKCommon_PlayGameView *self,float displayDuration,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  Game_UserData *self_00;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *extraout_x1;
  undefined8 *puVar8;
  void *pvVar9;
  long *plVar10;
  float fVar11;
  Recovered_Vector2 RVar12;
  Recovered_Vector2 value;
  Recovered_Rect RVar13;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab25c9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386a8e8);
    NativeHelper_017ef284(PTR_DAT_0386a890);
    NativeHelper_017ef284(PTR_DAT_038673c0);
    bRam0000000003ab25c9 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  pvVar9 = self->m_trans_Tip;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar4,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Equality_324f284(pvVar9,(void *)0x0,(void *)0x0);
  puVar2 = PTR_DAT_0385db10;
  if (bVar3) {
    return;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
  if (self_00 != (Game_UserData *)0x0) {
    pvVar9 = Game_UserData_GetUsingSkin_18cf374(self_00,(void *)0x0);
    uVar5 = NativeHelper_02aa50f4(pvVar9,self->_lastShowTargetSkinName,0);
    if ((uVar5 & 1) != 0) {
      pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if ((pvVar6 == (void *)0x0) || (*(long *)((long)pvVar6 + 0x30) == 0)) goto LAB_019f90ac;
      pvVar6 = Game_Const_GetSprite_FruitPreview_18da76c
                         (pvVar9,*(int *)(*(long *)((long)pvVar6 + 0x30) + 0x10),true,(void *)0x0);
      self->_targetIcon = pvVar6;
      NativeHelper_017ef228(&self->_targetIcon,pvVar6);
      self->_lastShowTargetSkinName = pvVar9;
      NativeHelper_017ef228(&self->_lastShowTargetSkinName,pvVar9);
    }
    if (self->m_img_TargetFruit != (void *)0x0) {
      NativeHelper_0345dd98(self->m_img_TargetFruit,self->_targetIcon,0);
      plVar10 = self->m_txt_TargetNum;
      pvVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (((pvVar9 != (void *)0x0) && (*(long *)((long)pvVar9 + 0x38) != 0)) &&
         (uVar7 = NativeHelper_02c0d29c(*(long *)((long)pvVar9 + 0x38) + 0x10,0),
         plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x5f0));
        pvVar9 = self->m_trans_Tip;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        bVar3 = UnityEngine_object_op_Equality_324f284(pvVar9,(void *)0x0,(void *)0x0);
        if (bVar3) {
          return;
        }
        if (self->_isLeagueTipInitialized == false) {
          if (pvVar9 == (void *)0x0) goto LAB_019f90ac;
          RVar12 = UnityEngine_RectTransform_get_anchoredPosition_32596c4(pvVar9,(void *)0x0);
          (self->_leagueTipOriginPos).component0 = RVar12.component0;
          (self->_leagueTipOriginPos).component1 = RVar12.component1;
          self->_isLeagueTipInitialized = true;
          RVar13 = UnityEngine_RectTransform_get_rect_32592ec(pvVar9,(void *)0x0);
          RVar12.component0 = RVar12.component0 + RVar13.component2;
          RVar12.component1 = (self->_leagueTipOriginPos).component1;
          UnityEngine_RectTransform_set_anchoredPosition_3259788(pvVar9,RVar12,(void *)0x0);
        }
        NativeHelper_01a630d4(pvVar9,0,0);
        if (cRam0000000003ab1f83 == '\0') {
          NativeHelper_017ef284(PTR_DAT_038654f0);
          cRam0000000003ab1f83 = '\x01';
        }
        puVar1 = PTR_DAT_038654f0;
        if (pvVar9 != (void *)0x0) {
          UnityEngine_Transform_set_localScale_325af4c
                    (pvVar9,*(Recovered_Vector3 *)
                             (*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0xc),(void *)0x0);
          if (self->_leagueTipCoroutine != (void *)0x0) {
            UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                      (self,self->_leagueTipCoroutine,(void *)0x0);
            self->_leagueTipCoroutine = (void *)0x0;
            NativeHelper_017ef228(&self->_leagueTipCoroutine,0);
          }
          if ((self->m_trans_Tip != (void *)0x0) &&
             (lVar4 = NativeHelper_0334f4c8(self->m_trans_Tip,0), lVar4 != 0)) {
            NativeHelper_0335236c(lVar4,1,0);
            RVar12 = UnityEngine_RectTransform_get_anchoredPosition_32596c4(pvVar9,(void *)0x0);
            fVar11 = (self->_leagueTipOriginPos).component0;
            if (RVar12.component0 <= fVar11 + 10.0) {
              value.component1 = (self->_leagueTipOriginPos).component1;
              value.component0 = fVar11;
              UnityEngine_RectTransform_set_anchoredPosition_3259788(pvVar9,value,(void *)0x0);
              if (cRam0000000003ab1f83 == '\0') {
                NativeHelper_017ef284(PTR_DAT_038654f0);
                cRam0000000003ab1f83 = '\x01';
              }
              uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
              uVar7 = NativeHelper_01a5f330
                                ((float)uVar7 * 0.1,(float)((ulong)uVar7 >> 0x20) * 0.1,
                                 *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) *
                                 _UNK_00a47714,_UNK_00a47720,0x3f800000,pvVar9,5,0);
              puVar8 = (undefined8 *)PTR_DAT_038673c0;
            }
            else {
              uVar7 = NativeHelper_019669d0(fVar11,_UNK_00a47794,pvVar9,0,0);
              uVar7 = NativeHelper_01d6fa88(uVar7,6,*(undefined8 *)PTR_DAT_0386a8e8);
              puVar8 = (undefined8 *)PTR_DAT_0386a890;
            }
            NativeHelper_01d70168(uVar7,1,*puVar8);
            pvVar9 = (void *)NativeHelper_019f932c(displayDuration,self);
            pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar9,(void *)0x0);
            self->_leagueTipCoroutine = pvVar9;
            if (iRam0000000003cd3780 != 0) {
              func_0x018dcb10(1L << ((ulong)&self->_leagueTipCoroutine >> 0xc & 0x3f),
                              ((ulong)&self->_leagueTipCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
            }
            return;
          }
        }
      }
    }
  }
LAB_019f90ac:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

