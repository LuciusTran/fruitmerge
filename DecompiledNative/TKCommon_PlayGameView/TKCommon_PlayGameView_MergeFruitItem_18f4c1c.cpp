// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void MergeFruitItem(int grade) { }
// Ghidra address: 019f8c1c; ELF VA: 0x18f8c1c; file offset: 0x18f4c1c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_MergeFruitItem_18f4c1c
               (TKCommon_PlayGameView *self,int grade,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  Game_UserData *pGVar10;
  void *pvVar11;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar12;
  int iVar13;
  int aiStack_54 [3];
  
  puVar4 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25c7 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25c7 = 1;
  }
  pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if ((pvVar8 == (void *)0x0) || (*(long *)((long)pvVar8 + 0x30) == 0)) {
LAB_019f8cf8:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if (*(int *)(*(long *)((long)pvVar8 + 0x30) + 0x10) + -1 == grade) {
    pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar4);
    puVar4 = PTR_DAT_0385d918;
    if ((pvVar8 == (void *)0x0) || (lVar12 = *(long *)((long)pvVar8 + 0x38), lVar12 == 0))
    goto LAB_019f8cf8;
    lVar9 = *(long *)PTR_DAT_0385d918;
    *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + 1;
    pvVar8 = extraout_x1;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar9 = *(long *)puVar4;
      pvVar8 = extraout_x1_00;
    }
    *(int *)(*(long *)(lVar9 + 0xb8) + 0x78) = *(int *)(*(long *)(lVar9 + 0xb8) + 0x78) + 1;
    TKCommon_PlayGameView_ShowLeagueTip_18f4cfc(self,3.0,pvVar8);
  }
  puVar4 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25c8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386abd8);
    bRam0000000003ab25c8 = 1;
  }
  pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if (pGVar10 != (Game_UserData *)0x0) {
    iVar7 = Game_UserData_GetSkinUnlockedGrade_18d3c58(pGVar10,(void *)0x0);
    if (iVar7 < grade) {
      pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      if (pGVar10 == (Game_UserData *)0x0) goto LAB_019f9328;
      Game_UserData_SetSkinUnlockedGrade_18d3ca0(pGVar10,grade,(void *)0x0);
    }
    puVar5 = PTR_DAT_0386abd8;
    puVar3 = PTR_DAT_0385c2d8;
    puVar2 = PTR_DAT_0385c2a0;
    iVar13 = self->_unlockGrade;
    iVar7 = grade + 1;
    if (iVar13 < iVar7) {
      pvVar8 = (void *)0x0;
      do {
        if (iVar13 < 5) {
          if (iVar13 < 2) {
            if (iVar13 == 0) {
              pvVar8 = self->m_img_1_Preview;
            }
            else if (iVar13 == 1) {
              pvVar8 = self->m_img_2_Preview;
            }
            else {
LAB_019f9238:
              aiStack_54[0] = iVar13 + 1;
              pvVar11 = (void *)NativeHelper_017ef40c(*(undefined8 *)(puVar3 + 0x48),aiStack_54);
              _PrivateImplementationDetails__ThrowSwitchExpressionException_186cffc
                        (pvVar11,(void *)0x0);
            }
          }
          else if (iVar13 == 2) {
            pvVar8 = self->m_img_3_Preview;
          }
          else if (iVar13 == 3) {
            pvVar8 = self->m_img_4_Preview;
          }
          else {
            if (iVar13 != 4) goto LAB_019f9238;
            pvVar8 = self->m_img_5_Preview;
          }
        }
        else if (iVar13 < 8) {
          if (iVar13 == 5) {
            pvVar8 = self->m_img_6_Preview;
          }
          else if (iVar13 == 6) {
            pvVar8 = self->m_img_7_Preview;
          }
          else {
            if (iVar13 != 7) goto LAB_019f9238;
            pvVar8 = self->m_img_8_Preview;
          }
        }
        else if (iVar13 == 8) {
          pvVar8 = self->m_img_9_Preview;
        }
        else if (iVar13 == 9) {
          pvVar8 = self->m_img_10_Preview;
        }
        else {
          if (iVar13 != 10) goto LAB_019f9238;
          pvVar8 = self->m_img_11_Preview;
        }
        pvVar11 = Game_Const_GetSprite_FruitPreview_18da76c
                            (self->_currentUsingSkin,iVar13 + 1,true,(void *)0x0);
        if (pvVar8 == (void *)0x0) goto LAB_019f9328;
        NativeHelper_0345dd98(pvVar8,pvVar11,0);
        pvVar11 = (void *)NativeHelper_0334f400(pvVar8,0);
        if (pvVar11 == (void *)0x0) goto LAB_019f9328;
        pvVar11 = UnityEngine_Transform_Find_325c35c(pvVar11,*(void **)puVar5,(void *)0x0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar2);
        }
        bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar11,(void *)0x0,(void *)0x0);
        if (bVar6) {
          if ((pvVar11 == (void *)0x0) || (lVar12 = NativeHelper_0334f4c8(pvVar11,0), lVar12 == 0))
          goto LAB_019f9328;
          NativeHelper_0335236c(lVar12,0,0);
        }
        iVar1 = iVar13 + 2;
        iVar13 = iVar13 + 1;
      } while (iVar1 <= iVar7);
      pvVar8 = *(void **)puVar4;
      self->_unlockGrade = iVar7;
      pGVar10 = Singleton_get_Instance_27784f4(pvVar8);
      if (pGVar10 == (Game_UserData *)0x0) goto LAB_019f9328;
      Game_UserData_SaveHistoryUnlockGrade_18c98c0(pGVar10,iVar7,(void *)0x0);
    }
    return;
  }
LAB_019f9328:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

