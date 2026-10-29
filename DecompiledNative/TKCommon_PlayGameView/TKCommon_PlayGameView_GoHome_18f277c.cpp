// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GoHome(int ticket) { }
// Ghidra address: 019f677c; ELF VA: 0x18f677c; file offset: 0x18f277c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_GoHome_18f277c
               (TKCommon_PlayGameView *self,int ticket,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  Game_UserData *pGVar5;
  TKCommon_PlayGameView *self_01;
  TKCommon_PlayGameView *self_02;
  long lVar6;
  long lVar7;
  TKLClient_TKLSwitcherConfig *pTVar8;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  void *runtimeMethod_05;
  void *pvVar9;
  void *pvVar10;
  undefined1 auVar11 [16];
  TKCommon_PlayGameView *self_00;
  
  pvVar9 = (void *)(ulong)(uint)ticket;
  self_00 = self;
  pvVar10 = pvVar9;
  if ((bRam0000000003ab25ab & 1) == 0) {
    auVar11 = NativeHelper_017ef284(PTR_DAT_0385d918);
    pvVar10 = auVar11._8_8_;
    self_00 = auVar11._0_8_;
    bRam0000000003ab25ab = 1;
  }
  bVar3 = TKCommon_PlayGameView_ShouldStartNextGameDirectly_18f2808(self_00,pvVar10);
  puVar1 = PTR_DAT_0385db10;
  if (bVar3) {
    if ((bRam0000000003ab25ae & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385db10);
      bRam0000000003ab25ae = 1;
      pvVar9 = extraout_x1;
    }
    TKCommon_PlayGameView_RefreshCurrentScore_18f2ad0(self,pvVar9);
    TKCommon_PlayGameView_QuitGame_18f2b2c(self,runtimeMethod_00);
    pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar5 != (Game_UserData *)0x0) {
      Game_UserData_IncrementGamesWithoutBuild_18c9ef8(pGVar5,(void *)0x0);
      TKCommon_PlayGameView_AddGameCompleteReward_18f2d60(self_01,ticket,runtimeMethod);
      self->IsFinishing = false;
      self->UseContinueCount = 0;
      UnityEngine_Time_set_timeScale_32575d0(1.0,(void *)0x0);
      TKCommon_PlayGameView_CheckDialogClose_18f2e1c(self_02,runtimeMethod_01);
      pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar5 != (Game_UserData *)0x0) {
        pvVar9 = (void *)0x0;
        Game_UserData_SaveCurrentScore_18c9a5c(pGVar5,0,(void *)0x0);
        pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pGVar5 != (Game_UserData *)0x0) {
          iVar4 = Game_UserData_GetHistoryScore_18c9a14(pGVar5,(void *)0x0);
          pvVar10 = *(void **)puVar1;
          self->mHistoryScore = iVar4;
          pGVar5 = Singleton_get_Instance_27784f4(pvVar10);
          if (pGVar5 != (Game_UserData *)0x0) {
            iVar4 = Game_UserData_GetCurrentScore_18c9ab0(pGVar5,(void *)0x0);
            self->mCurrentScore = iVar4;
            self->_unlockGrade = 5;
            TKCommon_PlayGameView_OnSwitchSkin_18f12e4(self,self->_currentUsingSkin,pvVar9);
            TKCommon_PlayGameView_ResetComboAnimation_18f2f28(self,runtimeMethod_02);
            TKCommon_PlayGameView_RefreshScoreTxt_18f1888(self,runtimeMethod_03);
            if (self->mMergeFruit != (MergeFruit *)0x0) {
              MergeFruit_NewStart_187d228(self->mMergeFruit,(void *)0x0);
              if ((bRam0000000003ab25cc & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_0385d918);
                bRam0000000003ab25cc = 1;
              }
              puVar1 = PTR_DAT_0385d918;
              if (self->adsBreakWaitingCoroutine != (void *)0x0) {
                UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                          (self,self->adsBreakWaitingCoroutine,(void *)0x0);
              }
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
              if (pTVar8 != (TKLClient_TKLSwitcherConfig *)0x0) {
                if (pTVar8->FM_ShowAdsBreak != false) {
                  pvVar9 = (void *)NativeHelper_019f9420(self);
                  pvVar9 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar9,(void *)0x0)
                  ;
                  self->adsBreakWaitingCoroutine = pvVar9;
                  if (iRam0000000003cd3780 != 0) {
                    func_0x018dcb10(1L << ((ulong)&self->adsBreakWaitingCoroutine >> 0xc & 0x3f),
                                    ((ulong)&self->adsBreakWaitingCoroutine >> 0x12 & 0x7fff) * 8 +
                                    0x3b07758);
                  }
                  return;
                }
                return;
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
  puVar1 = PTR_DAT_0386ac28;
  if (pTVar8 == (TKLClient_TKLSwitcherConfig *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  bVar3 = pTVar8->JumpToRoomBuild;
  if ((bRam0000000003ab25ac & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386ac30);
    NativeHelper_017ef284(PTR_DAT_0386ac28);
    bRam0000000003ab25ac = 1;
  }
  lVar6 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar6,0);
  puVar1 = PTR_DAT_0385db10;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = self;
    NativeHelper_017ef228((undefined8 *)(lVar6 + 0x10),self);
    *(byte *)(lVar6 + 0x18) = bVar3 & 1;
    *(int *)(lVar6 + 0x1c) = ticket;
    TKCommon_PlayGameView_RefreshCurrentScore_18f2ad0(self,runtimeMethod_04);
    TKCommon_PlayGameView_QuitGame_18f2b2c(self,runtimeMethod_05);
    pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    puVar2 = PTR_DAT_0386ac30;
    puVar1 = PTR_DAT_0385c9f8;
    if (pGVar5 != (Game_UserData *)0x0) {
      Game_UserData_IncrementGamesWithoutBuild_18c9ef8(pGVar5,(void *)0x0);
      lVar7 = NativeHelper_017ef520(*(undefined8 *)puVar1);
      NativeHelper_02b8e36c(lVar7,lVar6,*(undefined8 *)puVar2,0);
      if (self->_IsShowGame_k__BackingField == false) {
        return;
      }
      self->_IsShowGame_k__BackingField = false;
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019f6aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

