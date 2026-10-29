// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void TryUnlockGrade(int grade) { }
// Ghidra address: 019f90b0; ELF VA: 0x18f90b0; file offset: 0x18f50b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_TryUnlockGrade_18f50b0
               (TKCommon_PlayGameView *self,int grade,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  Game_UserData *pGVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  int iVar12;
  int iStack_54;
  
  puVar4 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25c8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386abd8);
    bRam0000000003ab25c8 = 1;
  }
  pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if (pGVar8 != (Game_UserData *)0x0) {
    iVar7 = Game_UserData_GetSkinUnlockedGrade_18d3c58(pGVar8,(void *)0x0);
    if (iVar7 < grade) {
      pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      if (pGVar8 == (Game_UserData *)0x0) goto LAB_019f9328;
      Game_UserData_SetSkinUnlockedGrade_18d3ca0(pGVar8,grade,(void *)0x0);
    }
    puVar5 = PTR_DAT_0386abd8;
    puVar3 = PTR_DAT_0385c2d8;
    puVar2 = PTR_DAT_0385c2a0;
    iVar12 = self->_unlockGrade;
    iVar7 = grade + 1;
    if (iVar12 < iVar7) {
      pvVar11 = (void *)0x0;
      do {
        if (iVar12 < 5) {
          if (iVar12 < 2) {
            if (iVar12 == 0) {
              pvVar11 = self->m_img_1_Preview;
            }
            else if (iVar12 == 1) {
              pvVar11 = self->m_img_2_Preview;
            }
            else {
LAB_019f9238:
              iStack_54 = iVar12 + 1;
              pvVar9 = (void *)NativeHelper_017ef40c(*(undefined8 *)(puVar3 + 0x48),&iStack_54);
              _PrivateImplementationDetails__ThrowSwitchExpressionException_186cffc
                        (pvVar9,(void *)0x0);
            }
          }
          else if (iVar12 == 2) {
            pvVar11 = self->m_img_3_Preview;
          }
          else if (iVar12 == 3) {
            pvVar11 = self->m_img_4_Preview;
          }
          else {
            if (iVar12 != 4) goto LAB_019f9238;
            pvVar11 = self->m_img_5_Preview;
          }
        }
        else if (iVar12 < 8) {
          if (iVar12 == 5) {
            pvVar11 = self->m_img_6_Preview;
          }
          else if (iVar12 == 6) {
            pvVar11 = self->m_img_7_Preview;
          }
          else {
            if (iVar12 != 7) goto LAB_019f9238;
            pvVar11 = self->m_img_8_Preview;
          }
        }
        else if (iVar12 == 8) {
          pvVar11 = self->m_img_9_Preview;
        }
        else if (iVar12 == 9) {
          pvVar11 = self->m_img_10_Preview;
        }
        else {
          if (iVar12 != 10) goto LAB_019f9238;
          pvVar11 = self->m_img_11_Preview;
        }
        pvVar9 = Game_Const_GetSprite_FruitPreview_18da76c
                           (self->_currentUsingSkin,iVar12 + 1,true,(void *)0x0);
        if (pvVar11 == (void *)0x0) goto LAB_019f9328;
        NativeHelper_0345dd98(pvVar11,pvVar9,0);
        pvVar9 = (void *)NativeHelper_0334f400(pvVar11,0);
        if (pvVar9 == (void *)0x0) goto LAB_019f9328;
        pvVar9 = UnityEngine_Transform_Find_325c35c(pvVar9,*(void **)puVar5,(void *)0x0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar2);
        }
        bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar9,(void *)0x0,(void *)0x0);
        if (bVar6) {
          if ((pvVar9 == (void *)0x0) || (lVar10 = NativeHelper_0334f4c8(pvVar9,0), lVar10 == 0))
          goto LAB_019f9328;
          NativeHelper_0335236c(lVar10,0,0);
        }
        iVar1 = iVar12 + 2;
        iVar12 = iVar12 + 1;
      } while (iVar1 <= iVar7);
      pvVar11 = *(void **)puVar4;
      self->_unlockGrade = iVar7;
      pGVar8 = Singleton_get_Instance_27784f4(pvVar11);
      if (pGVar8 == (Game_UserData *)0x0) goto LAB_019f9328;
      Game_UserData_SaveHistoryUnlockGrade_18c98c0(pGVar8,iVar7,(void *)0x0);
    }
    return;
  }
LAB_019f9328:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

