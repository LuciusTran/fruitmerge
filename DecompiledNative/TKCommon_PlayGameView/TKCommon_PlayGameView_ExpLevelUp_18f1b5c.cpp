// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ExpLevelUp() { }
// Ghidra address: 019f5b5c; ELF VA: 0x18f5b5c; file offset: 0x18f1b5c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ExpLevelUp_18f1b5c(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  LocalNotification_Action **ppLVar8;
  LocalNotification_Action *pLVar9;
  TKLClient_TKLSwitcherConfig *pTVar10;
  undefined8 uVar11;
  void *pvVar12;
  Game_UserData *pGVar13;
  TKCommon_AdjustSDK *self_00;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = runtimeMethod;
  auVar16._0_8_ = self;
  if ((bRam0000000003ab25a3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    auVar16 = NativeHelper_017ef284(PTR_DAT_0386abe0);
    bRam0000000003ab25a3 = 1;
  }
  puVar4 = PTR_DAT_0385d918;
  if (self->_IsShowGame_k__BackingField == false) {
    return;
  }
  if (self->mMergeFruit == (MergeFruit *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(auVar16._0_8_,auVar16._8_8_);
  }
  if (self->mMergeFruit->_gameState != 4) {
    if ((bRam0000000003ab25a4 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385c9f8);
      NativeHelper_017ef284(PTR_DAT_0385d918);
      NativeHelper_017ef284(PTR_DAT_0386abe8);
      NativeHelper_017ef284(PTR_DAT_0385db10);
      bRam0000000003ab25a4 = 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
    puVar5 = PTR_DAT_0386abe8;
    puVar3 = PTR_DAT_0385c9f8;
    if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
      if (pTVar10->FM_ShowExpLevelUpDialog != false) {
        if (self->showExpLevelUpCoroutine != (void *)0x0) {
          UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                    (self,self->showExpLevelUpCoroutine,(void *)0x0);
        }
        uVar11 = NativeHelper_017ef520(*(undefined8 *)puVar3);
        NativeHelper_02b8e36c(uVar11,self,*(undefined8 *)puVar5,0);
        pvVar12 = (void *)NativeHelper_019da168(0x3f000000,self,uVar11,0);
        pvVar12 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar12,(void *)0x0);
        ppLVar8 = &self->showExpLevelUpCoroutine;
        self->showExpLevelUpCoroutine = pvVar12;
        goto NativeHelper_017ef228;
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
      if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
        bVar6 = pTVar10->SwitchCoinsAndTickets;
        pGVar13 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        lVar14 = *(long *)puVar4;
        if (bVar6 == false) {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            NativeHelper_017ef404(lVar14);
          }
          pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
          if ((pTVar10 == (TKLClient_TKLSwitcherConfig *)0x0) || (pGVar13 == (Game_UserData *)0x0))
          goto LAB_019f5db8;
          Game_UserData_AddDiamonds_18cb8cc(pGVar13,pTVar10->FM_AddCoinPerLevel,(void *)0x0);
        }
        else {
          if (*(int *)(lVar14 + 0xe4) == 0) {
            NativeHelper_017ef404(lVar14);
          }
          pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
          if ((pTVar10 == (TKLClient_TKLSwitcherConfig *)0x0) || (pGVar13 == (Game_UserData *)0x0))
          goto LAB_019f5db8;
          Game_UserData_AddTickets_18cbb94(pGVar13,pTVar10->FM_AddTicketPerLevel,(void *)0x0);
        }
        puVar4 = PTR_DAT_0385db10;
        if ((bRam0000000003ab25c1 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385d918);
          NativeHelper_017ef284(PTR_DAT_0385db10);
          bRam0000000003ab25c1 = 1;
        }
        pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar4);
        puVar4 = PTR_DAT_0385d918;
        if (pGVar13 != (Game_UserData *)0x0) {
          iVar7 = Game_UserData_GetExpLevel_18c70c4(pGVar13,(void *)0x0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar4);
          }
          pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
          puVar4 = PTR_DAT_0386acb0;
          if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
            if (iVar7 <= pTVar10->FM_ShowRateUsForExpLevel) {
              return;
            }
            if ((bRam0000000003ab25c2 & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_0385c390);
              NativeHelper_017ef284(PTR_DAT_03866d18);
              NativeHelper_017ef284(PTR_DAT_0386acb0);
              NativeHelper_017ef284(PTR_DAT_0386acb8);
              NativeHelper_017ef284(PTR_DAT_0386acc0);
              bRam0000000003ab25c2 = 1;
            }
            iVar7 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar4,0,(void *)0x0);
            if (iVar7 == 0) {
              self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866d18);
              if (self_00 != (TKCommon_AdjustSDK *)0x0) {
                bVar6 = TKCommon_AdjustSDK_get_IsAdUser_1918238(self_00,(void *)0x0);
                lVar15 = *(long *)PTR_DAT_0385c390;
                lVar14 = *(long *)(lVar15 + 0x38);
                if (bVar6) {
                  if (lVar14 == 0) {
                    NativeHelper_01827500(lVar15);
                    lVar14 = *(long *)(lVar15 + 0x38);
                  }
                  lVar14 = *(long *)(lVar14 + 0x10);
                  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                    lVar14 = NativeHelper_018274a4();
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                  uVar1 = *(ushort *)(lVar14 + 0x135);
                  puVar2 = (undefined8 *)PTR_DAT_0386acb8;
                }
                else {
                  if (lVar14 == 0) {
                    NativeHelper_01827500(lVar15);
                    lVar14 = *(long *)(lVar15 + 0x38);
                  }
                  lVar14 = *(long *)(lVar14 + 0x10);
                  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                    lVar14 = NativeHelper_018274a4();
                  }
                  if (*(int *)(lVar14 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
                  uVar1 = *(ushort *)(lVar14 + 0x135);
                  puVar2 = (undefined8 *)PTR_DAT_0386acc0;
                }
                if ((uVar1 & 1) == 0) {
                  lVar14 = NativeHelper_018274a4();
                }
                Game_Controller_FMViewController_ShowTopView_18d5bb0
                          ((void *)*puVar2,100,false,(void *)**(undefined8 **)(lVar14 + 0xb8),
                           (void *)0x0);
                UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar4,1,(void *)0x0);
                if (pcRam0000000003abb5f0 == (code *)0x0) {
                  pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
                }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000003abb5f0)();
                return;
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
LAB_019f5db8:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pLVar9 = (LocalNotification_Action *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
  NativeHelper_02b8e36c(pLVar9,self,*(undefined8 *)PTR_DAT_0386abe0,0);
  ppLVar8 = &self->ExpUpAction;
  self->ExpUpAction = pLVar9;
NativeHelper_017ef228:
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)ppLVar8 >> 0xc & 0x3f),
                    ((ulong)ppLVar8 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

