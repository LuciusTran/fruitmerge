// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void InitForUI() { }
// Ghidra address: 019f2b94; ELF VA: 0x18f2b94; file offset: 0x18eeb94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_InitForUI_18eeb94(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  Game_UserData *pGVar6;
  DataManager *self_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *runtimeMethod_02;
  void *in_x2;
  void *pvVar7;
  int *piVar8;
  TKCommon_NormalClickButton *pTVar9;
  uint uVar10;
  
  if ((bRam0000000003ab259b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab259b = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_0385db10;
  puVar1 = PTR_DAT_0385d918;
  TKCommon_PlayGameView_BindComboAnimationEvent_18f10f0(self,runtimeMethod);
  TKCommon_PlayGameView_InitToolPanelLayout_18f11a0(self,runtimeMethod_00);
  uVar10 = 0xb;
  self->_unlockGrade = 5;
  do {
    if ((int)uVar10 < 9) {
      if (uVar10 == 6) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        piVar8 = (int *)(*(long *)(lVar5 + 0xb8) + 0x30);
        goto LAB_019f2cf0;
      }
      if (uVar10 == 7) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        piVar8 = (int *)(*(long *)(lVar5 + 0xb8) + 0x34);
        goto LAB_019f2cf0;
      }
      if (uVar10 == 8) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        piVar8 = (int *)(*(long *)(lVar5 + 0xb8) + 0x38);
        goto LAB_019f2cf0;
      }
    }
    else {
      if (uVar10 == 9) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        piVar8 = (int *)(*(long *)(lVar5 + 0xb8) + 0x3c);
      }
      else if (uVar10 == 10) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        piVar8 = (int *)(*(long *)(lVar5 + 0xb8) + 0x40);
      }
      else {
        if (uVar10 != 0xb) goto LAB_019f2cfc;
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        piVar8 = (int *)(*(long *)(lVar5 + 0xb8) + 0x44);
      }
LAB_019f2cf0:
      if (0 < *piVar8) {
        pvVar7 = *(void **)puVar2;
        self->_unlockGrade = uVar10;
        pGVar6 = Singleton_get_Instance_27784f4(pvVar7);
        if (pGVar6 == (Game_UserData *)0x0) goto LAB_019f2ddc;
        in_x2 = (void *)0x0;
        Game_UserData_SaveHistoryUnlockGrade_18c98c0(pGVar6,self->_unlockGrade,(void *)0x0);
        break;
      }
    }
LAB_019f2cfc:
    uVar10 = uVar10 - 1;
  } while (5 < uVar10);
  TKCommon_PlayGameView_OnSwitchSkin_18f12e4(self,self->_currentUsingSkin,in_x2);
  pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if (pGVar6 != (Game_UserData *)0x0) {
    bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar6,(void *)0x0);
    if ((self->m_trans_Task != (void *)0x0) &&
       (lVar5 = NativeHelper_0334f4c8(self->m_trans_Task,0), lVar5 != 0)) {
      NativeHelper_0335236c(lVar5,bVar3,0);
      if ((self->m_trans_Level != (void *)0x0) &&
         (lVar5 = NativeHelper_0334f4c8(self->m_trans_Level,0), lVar5 != 0)) {
        pvVar7 = (void *)0x0;
        NativeHelper_0335236c(lVar5,(bVar3 ^ 0xffU) & 1);
        pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pGVar6 != (Game_UserData *)0x0) {
          bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar6,(void *)0x0);
          if (bVar3) {
            TKCommon_PlayGameView_UpdateTaskUI_18f15c4(self,runtimeMethod_01);
            runtimeMethod_02 = extraout_x1_00;
          }
          else {
            TKCommon_PlayGameView_RefreshExp_18f173c(self,runtimeMethod_01);
            runtimeMethod_02 = extraout_x1_01;
          }
          TKCommon_PlayGameView_RefreshScoreTxt_18f1888(self,runtimeMethod_02);
          puVar1 = PTR_DAT_0385d9d8;
          if ((bRam0000000003ab25b5 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385d9d8);
            NativeHelper_017ef284(PTR_DAT_0385db10);
            bRam0000000003ab25b5 = 1;
          }
          pTVar9 = self->m_btn_Task;
          self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          puVar1 = PTR_DAT_0385db10;
          if (self_00 != (DataManager *)0x0) {
            bVar3 = DataManager_HasAnyDailyQuestRewardToClaim_1809fa0(self_00,(void *)0x0);
            TKCommon_PlayGameView_SetButtonRedPoint_18f33c4(pTVar9,bVar3,pvVar7);
            pTVar9 = self->m_btn_Room;
            pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar1);
            if (pGVar6 != (Game_UserData *)0x0) {
              bVar3 = Game_UserData_CanBuildCurrentRoomItem_18c9fac(pGVar6,0,(void *)0x0);
              puVar1 = PTR_DAT_0385c2a0;
              if ((bRam0000000003ab25b6 & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_0385c2a0);
                NativeHelper_017ef284(PTR_DAT_0386ac70);
                NativeHelper_017ef284(PTR_DAT_0386ac78);
                bRam0000000003ab25b6 = 1;
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              bVar4 = UnityEngine_object_op_Equality_324f284(pTVar9,(void *)0x0,(void *)0x0);
              if (bVar4) {
                return;
              }
              if ((pTVar9 != (TKCommon_NormalClickButton *)0x0) &&
                 (pvVar7 = (void *)NativeHelper_0334f400(pTVar9,0), pvVar7 != (void *)0x0)) {
                pvVar7 = UnityEngine_Transform_Find_325c35c
                                   (pvVar7,*(void **)PTR_DAT_0386ac70,(void *)0x0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  NativeHelper_017ef404(*(long *)puVar1);
                }
                bVar4 = UnityEngine_object_op_Equality_324f284(pvVar7,(void *)0x0,(void *)0x0);
                if (bVar4) {
                  pvVar7 = (void *)NativeHelper_0334f400(pTVar9,0);
                  if (pvVar7 == (void *)0x0) goto LAB_019f7518;
                  pvVar7 = UnityEngine_Transform_Find_325c35c
                                     (pvVar7,*(void **)PTR_DAT_0386ac78,(void *)0x0);
                }
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
                if (!bVar4) {
                  return;
                }
                if ((pvVar7 != (void *)0x0) && (lVar5 = NativeHelper_0334f4c8(pvVar7,0), lVar5 != 0)
                   ) {
                  if ((bRam0000000003abb79b & 1) == 0) {
                    NativeHelper_017ef284(PTR_DAT_038a76a8,bVar3,0);
                    bRam0000000003abb79b = 1;
                  }
                  if (lVar5 != 0) {
                    lVar5 = *(long *)(lVar5 + 0x10);
                    if (lVar5 != 0) {
                      if (pcRam0000000003abb800 == (code *)0x0) {
                        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
                      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*pcRam0000000003abb800)(lVar5,bVar3);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    NativeHelper_0334bff8();
                  }
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef530();
                }
              }
LAB_019f7518:
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
      }
    }
  }
LAB_019f2ddc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

