// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetLevelPreviewsForNextGame() { }
// Ghidra address: 019f58f8; ELF VA: 0x18f58f8; file offset: 0x18f18f8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ResetLevelPreviewsForNextGame_18f18f8
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  DataManager *self_00;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  int iStack_64;
  
  pvVar9 = self->_currentUsingSkin;
  self->_unlockGrade = 5;
  if ((bRam0000000003ab25a2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0386abd8);
    bRam0000000003ab25a2 = 1;
  }
  self->_currentUsingSkin = pvVar9;
  NativeHelper_017ef228(&self->_currentUsingSkin,pvVar9);
  pvVar10 = self->m_img_NextPreview;
  pvVar9 = Game_Const_GetSprite_FruitPreview_18da76c
                     (self->_currentUsingSkin,self->_nextItemIndex + 1,true,(void *)0x0);
  if (pvVar10 != (void *)0x0) {
    NativeHelper_0345dd98(pvVar10,pvVar9,0);
    puVar4 = PTR_DAT_0386abd8;
    puVar3 = PTR_DAT_0385d9d8;
    puVar2 = PTR_DAT_0385c2d8;
    puVar1 = PTR_DAT_0385c2a0;
    pvVar9 = self->m_trans_LevelPreviews;
    if (pvVar9 != (void *)0x0) {
      iVar11 = 0;
      pvVar10 = (void *)0x0;
      while (iVar7 = NativeHelper_0335fe50(pvVar9,0), iVar11 < iVar7) {
        iVar7 = self->_unlockGrade;
        if (iVar11 < 5) {
          if (iVar11 < 2) {
            if (iVar11 == 0) {
              pvVar10 = self->m_img_1_Preview;
            }
            else if (iVar11 == 1) {
              pvVar10 = self->m_img_2_Preview;
            }
            else {
LAB_019f5494:
              iStack_64 = iVar11 + 1;
              pvVar9 = (void *)NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_64);
              _PrivateImplementationDetails__ThrowSwitchExpressionException_186cffc
                        (pvVar9,(void *)0x0);
            }
          }
          else if (iVar11 == 2) {
            pvVar10 = self->m_img_3_Preview;
          }
          else if (iVar11 == 3) {
            pvVar10 = self->m_img_4_Preview;
          }
          else {
            if (iVar11 != 4) goto LAB_019f5494;
            pvVar10 = self->m_img_5_Preview;
          }
        }
        else if (iVar11 < 8) {
          if (iVar11 == 5) {
            pvVar10 = self->m_img_6_Preview;
          }
          else if (iVar11 == 6) {
            pvVar10 = self->m_img_7_Preview;
          }
          else {
            if (iVar11 != 7) goto LAB_019f5494;
            pvVar10 = self->m_img_8_Preview;
          }
        }
        else if (iVar11 == 8) {
          pvVar10 = self->m_img_9_Preview;
        }
        else if (iVar11 == 9) {
          pvVar10 = self->m_img_10_Preview;
        }
        else {
          if (iVar11 != 10) goto LAB_019f5494;
          pvVar10 = self->m_img_11_Preview;
        }
        self_00 = Singleton_get_Instance_27784f4(*(void **)puVar3);
        if (self_00 == (DataManager *)0x0) goto LAB_019f556c;
        bVar5 = DataManager_IsOldPlayerWithFullSkinUnlock_18075fc(self_00,(void *)0x0);
        bVar5 = bVar5 || iVar11 < iVar7;
        pvVar9 = Game_Const_GetSprite_FruitPreview_18da76c
                           (self->_currentUsingSkin,iVar11 + 1,bVar5,(void *)0x0);
        if (pvVar10 == (void *)0x0) goto LAB_019f556c;
        NativeHelper_0345dd98(pvVar10,pvVar9,0);
        pvVar9 = (void *)NativeHelper_0334f400(pvVar10,0);
        if (pvVar9 == (void *)0x0) goto LAB_019f556c;
        pvVar9 = UnityEngine_Transform_Find_325c35c(pvVar9,*(void **)puVar4,(void *)0x0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar1);
        }
        bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar9,(void *)0x0,(void *)0x0);
        if (bVar6) {
          if ((pvVar9 == (void *)0x0) || (lVar8 = NativeHelper_0334f4c8(pvVar9,0), lVar8 == 0))
          goto LAB_019f556c;
          NativeHelper_0335236c(lVar8,(bVar5 ^ 0xffU) & 1,0);
        }
        pvVar9 = self->m_trans_LevelPreviews;
        iVar11 = iVar11 + 1;
        if (pvVar9 == (void *)0x0) goto LAB_019f556c;
      }
      if (self->_currentTask != (TaskItemData *)0x0) {
        pvVar10 = self->m_img_Target;
        pvVar9 = Game_Const_GetSprite_FruitPreview_18da76c
                           (self->_currentUsingSkin,self->_currentTask->TargetGrade,true,(void *)0x0
                           );
        if (pvVar10 == (void *)0x0) goto LAB_019f556c;
        NativeHelper_0345dd98(pvVar10,pvVar9,0);
      }
      return;
    }
  }
LAB_019f556c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

