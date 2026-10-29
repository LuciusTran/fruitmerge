// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GoNextGameDirectly(int ticket) { }
// Ghidra address: 019f6868; ELF VA: 0x18f6868; file offset: 0x18f2868
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_GoNextGameDirectly_18f2868
               (TKCommon_PlayGameView *self,int ticket,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  Game_UserData *pGVar3;
  TKCommon_PlayGameView *self_00;
  TKCommon_PlayGameView *self_01;
  TKLClient_TKLSwitcherConfig *pTVar4;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *pvVar5;
  void *runtimeMethod_04;
  
  puVar1 = PTR_DAT_0385db10;
  pvVar5 = (void *)(ulong)(uint)ticket;
  if ((bRam0000000003ab25ae & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25ae = 1;
    pvVar5 = extraout_x1;
  }
  TKCommon_PlayGameView_RefreshCurrentScore_18f2ad0(self,pvVar5);
  TKCommon_PlayGameView_QuitGame_18f2b2c(self,runtimeMethod_00);
  pGVar3 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar3 != (Game_UserData *)0x0) {
    Game_UserData_IncrementGamesWithoutBuild_18c9ef8(pGVar3,(void *)0x0);
    TKCommon_PlayGameView_AddGameCompleteReward_18f2d60(self_00,ticket,runtimeMethod);
    self->IsFinishing = false;
    self->UseContinueCount = 0;
    UnityEngine_Time_set_timeScale_32575d0(1.0,(void *)0x0);
    TKCommon_PlayGameView_CheckDialogClose_18f2e1c(self_01,runtimeMethod_01);
    pGVar3 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar3 != (Game_UserData *)0x0) {
      pvVar5 = (void *)0x0;
      Game_UserData_SaveCurrentScore_18c9a5c(pGVar3,0,(void *)0x0);
      pGVar3 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar3 != (Game_UserData *)0x0) {
        iVar2 = Game_UserData_GetHistoryScore_18c9a14(pGVar3,(void *)0x0);
        runtimeMethod_04 = *(void **)puVar1;
        self->mHistoryScore = iVar2;
        pGVar3 = Singleton_get_Instance_27784f4(runtimeMethod_04);
        if (pGVar3 != (Game_UserData *)0x0) {
          iVar2 = Game_UserData_GetCurrentScore_18c9ab0(pGVar3,(void *)0x0);
          self->mCurrentScore = iVar2;
          self->_unlockGrade = 5;
          TKCommon_PlayGameView_OnSwitchSkin_18f12e4(self,self->_currentUsingSkin,pvVar5);
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
            pTVar4 = Global_get_RemoteConfig_18048d8((void *)0x0);
            if (pTVar4 != (TKLClient_TKLSwitcherConfig *)0x0) {
              if (pTVar4->FM_ShowAdsBreak != false) {
                pvVar5 = (void *)NativeHelper_019f9420(self);
                pvVar5 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar5,(void *)0x0);
                self->adsBreakWaitingCoroutine = pvVar5;
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

