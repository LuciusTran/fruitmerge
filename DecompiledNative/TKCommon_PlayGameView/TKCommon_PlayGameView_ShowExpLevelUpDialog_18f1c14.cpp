// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowExpLevelUpDialog() { }
// Ghidra address: 019f5c14; ELF VA: 0x18f5c14; file offset: 0x18f1c14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ShowExpLevelUpDialog_18f1c14
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  TKLClient_TKLSwitcherConfig *pTVar8;
  undefined8 uVar9;
  void *pvVar10;
  Game_UserData *pGVar11;
  TKCommon_AdjustSDK *self_00;
  void *extraout_x1;
  long lVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_0385d918;
  if ((bRam0000000003ab25a4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0386abe8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25a4 = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar4,runtimeMethod);
  }
  pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
  puVar5 = PTR_DAT_0386abe8;
  puVar3 = PTR_DAT_0385c9f8;
  if (pTVar8 != (TKLClient_TKLSwitcherConfig *)0x0) {
    if (pTVar8->FM_ShowExpLevelUpDialog != false) {
      if (self->showExpLevelUpCoroutine != (void *)0x0) {
        UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                  (self,self->showExpLevelUpCoroutine,(void *)0x0);
      }
      uVar9 = NativeHelper_017ef520(*(undefined8 *)puVar3);
      NativeHelper_02b8e36c(uVar9,self,*(undefined8 *)puVar5,0);
      pvVar10 = (void *)NativeHelper_019da168(0x3f000000,self,uVar9,0);
      pvVar10 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar10,(void *)0x0);
      self->showExpLevelUpCoroutine = pvVar10;
      if (iRam0000000003cd3780 != 0) {
        func_0x018dcb10(1L << ((ulong)&self->showExpLevelUpCoroutine >> 0xc & 0x3f),
                        ((ulong)&self->showExpLevelUpCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
      }
      return;
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar8 != (TKLClient_TKLSwitcherConfig *)0x0) {
      bVar6 = pTVar8->SwitchCoinsAndTickets;
      pGVar11 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
      lVar12 = *(long *)puVar4;
      if (bVar6 == false) {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          NativeHelper_017ef404(lVar12);
        }
        pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
        if ((pTVar8 == (TKLClient_TKLSwitcherConfig *)0x0) || (pGVar11 == (Game_UserData *)0x0))
        goto LAB_019f5db8;
        Game_UserData_AddDiamonds_18cb8cc(pGVar11,pTVar8->FM_AddCoinPerLevel,(void *)0x0);
      }
      else {
        if (*(int *)(lVar12 + 0xe4) == 0) {
          NativeHelper_017ef404(lVar12);
        }
        pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
        if ((pTVar8 == (TKLClient_TKLSwitcherConfig *)0x0) || (pGVar11 == (Game_UserData *)0x0))
        goto LAB_019f5db8;
        Game_UserData_AddTickets_18cbb94(pGVar11,pTVar8->FM_AddTicketPerLevel,(void *)0x0);
      }
      puVar4 = PTR_DAT_0385db10;
      if ((bRam0000000003ab25c1 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d918);
        NativeHelper_017ef284(PTR_DAT_0385db10);
        bRam0000000003ab25c1 = 1;
      }
      pGVar11 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      puVar4 = PTR_DAT_0385d918;
      if (pGVar11 != (Game_UserData *)0x0) {
        iVar7 = Game_UserData_GetExpLevel_18c70c4(pGVar11,(void *)0x0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar4);
        }
        pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
        puVar4 = PTR_DAT_0386acb0;
        if (pTVar8 != (TKLClient_TKLSwitcherConfig *)0x0) {
          if (iVar7 <= pTVar8->FM_ShowRateUsForExpLevel) {
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
              lVar13 = *(long *)PTR_DAT_0385c390;
              lVar12 = *(long *)(lVar13 + 0x38);
              if (bVar6) {
                if (lVar12 == 0) {
                  NativeHelper_01827500(lVar13);
                  lVar12 = *(long *)(lVar13 + 0x38);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = NativeHelper_018274a4();
                }
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                uVar1 = *(ushort *)(lVar12 + 0x135);
                puVar2 = (undefined8 *)PTR_DAT_0386acb8;
              }
              else {
                if (lVar12 == 0) {
                  NativeHelper_01827500(lVar13);
                  lVar12 = *(long *)(lVar13 + 0x38);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = NativeHelper_018274a4();
                }
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
                uVar1 = *(ushort *)(lVar12 + 0x135);
                puVar2 = (undefined8 *)PTR_DAT_0386acc0;
              }
              if ((uVar1 & 1) == 0) {
                lVar12 = NativeHelper_018274a4();
              }
              Game_Controller_FMViewController_ShowTopView_18d5bb0
                        ((void *)*puVar2,100,false,(void *)**(undefined8 **)(lVar12 + 0xb8),
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

