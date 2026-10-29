// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AddGameCompleteReward(int ticket) { }
// Ghidra address: 019f6d60; ELF VA: 0x18f6d60; file offset: 0x18f2d60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_AddGameCompleteReward_18f2d60
               (TKCommon_PlayGameView *self,int ticket,void *runtimeMethod)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  DataManager *pDVar9;
  TKLClient_TKLSwitcherConfig *pTVar10;
  void *pvVar11;
  void *runtimeMethod_00;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plStack_28;
  
  if ((bRam0000000003ab25af & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25af = 1;
  }
  if (ticket < 1) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
    bVar1 = pTVar10->SwitchCoinsAndTickets;
    pvVar11 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    puVar4 = PTR_DAT_03869d20;
    puVar3 = PTR_DAT_03869bd8;
    puVar2 = PTR_DAT_0385d9d8;
    if (bVar1 == false) {
      if (pvVar11 == (void *)0x0) goto LAB_019f6e18;
      auVar13._8_4_ = ticket;
      auVar13._0_8_ = pvVar11;
      auVar13._12_4_ = 0;
      if ((bRam0000000003ab2431 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d950,ticket,0);
        NativeHelper_017ef284(PTR_DAT_0385d9d8);
        NativeHelper_017ef284(PTR_DAT_03868b10);
        auVar13 = NativeHelper_017ef284(PTR_DAT_03869bd8);
        bRam0000000003ab2431 = 1;
      }
      iVar5 = Game_UserData_GetTickets_18ca33c(auVar13._0_8_,auVar13._8_8_);
      UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,iVar5 + ticket,(void *)0x0);
      NativeHelper_0334aa10(0);
      pDVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      puVar3 = PTR_DAT_03868b10;
      puVar2 = PTR_DAT_0385d950;
      if (pDVar9 == (DataManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      DataManager_UpdateDailyTaskProgress_1809ddc(pDVar9,9,ticket,-1,(void *)0x0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      pvVar11 = *(void **)puVar3;
    }
    else {
      if (pvVar11 == (void *)0x0) goto LAB_019f6e18;
      auVar12._8_4_ = ticket;
      auVar12._0_8_ = pvVar11;
      auVar12._12_4_ = 0;
      if ((bRam0000000003ab242c & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d950,ticket,0);
        NativeHelper_017ef284(PTR_DAT_0385d9d8);
        NativeHelper_017ef284(PTR_DAT_03868688);
        auVar12 = NativeHelper_017ef284(PTR_DAT_03869d20);
        bRam0000000003ab242c = 1;
      }
      iVar5 = Game_UserData_GetDiamonds_18cb888(auVar12._0_8_,auVar12._8_8_);
      UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar4,iVar5 + ticket,(void *)0x0);
      NativeHelper_0334aa10(0);
      pDVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      puVar3 = PTR_DAT_03868688;
      puVar2 = PTR_DAT_0385d950;
      if (pDVar9 == (DataManager *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      DataManager_UpdateDailyTaskProgress_1809ddc(pDVar9,8,ticket,-1,(void *)0x0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      pvVar11 = *(void **)puVar3;
    }
    puVar2 = PTR_DAT_0385d950;
    if ((bRam0000000003ab2096 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_03866c68,0);
      NativeHelper_017ef284(PTR_DAT_03867000);
      NativeHelper_017ef284(PTR_DAT_0385d950);
      bRam0000000003ab2096 = 1;
    }
    lVar6 = *(long *)puVar2;
    plStack_28 = (long *)0x0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 != 0) {
      uVar7 = NativeHelper_02134ffc(lVar6,pvVar11,&plStack_28,*(undefined8 *)PTR_DAT_03867000);
      if ((uVar7 & 1) != 0) {
        if ((plStack_28 == (long *)0x0) || (*plStack_28 != *(long *)PTR_DAT_03866c68)) {
          NativeHelper_017ef298(PTR_DAT_0385d950);
          NativeHelper_0160f45c();
          pvVar11 = Messenger_CreateBroadcastSignatureException_187537c(pvVar11,runtimeMethod_00);
          uVar8 = NativeHelper_017ef298(PTR_DAT_03867008);
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef3f4(pvVar11,uVar8);
        }
        (*(code *)plStack_28[3])(plStack_28[8],plStack_28[5]);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_019f6e18:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

