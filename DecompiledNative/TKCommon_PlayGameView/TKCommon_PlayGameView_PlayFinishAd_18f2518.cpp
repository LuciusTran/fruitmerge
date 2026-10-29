// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayFinishAd() { }
// Ghidra address: 019f6518; ELF VA: 0x18f6518; file offset: 0x18f2518
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019c7794) */
/* WARNING: Removing unreachable block (ram,0x019c7858) */
/* WARNING: Removing unreachable block (ram,0x019c7888) */
/* WARNING: Removing unreachable block (ram,0x019c788c) */
/* WARNING: Removing unreachable block (ram,0x019c7890) */

void TKCommon_PlayGameView_PlayFinishAd_18f2518(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  void *runtimeMethod_00;
  IAPItemManager *pIVar8;
  long lVar9;
  UnityMainThreadDispatcher *self_00;
  LocalNotification_Action *action;
  Ads_AdsPlayController *pAVar10;
  TKLClient_TKLSwitcherConfig *pTVar11;
  Ads_AdsPlayController *self_01;
  void *pvVar12;
  Game_UserData *self_02;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *extraout_x1;
  void *pvVar16;
  double adValue;
  Recovered_Rect RVar17;
  
  puVar4 = PTR_DAT_0385d918;
  if ((bRam0000000003ab25a9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d4c8);
    NativeHelper_017ef284(PTR_DAT_0385d3d0);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0386ac08);
    bRam0000000003ab25a9 = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar4,runtimeMethod);
  }
  pTVar11 = Global_get_RemoteConfig_18048d8((void *)0x0);
  puVar3 = PTR_DAT_0386ac08;
  puVar4 = PTR_DAT_0385d4c8;
  if (pTVar11 != (TKLClient_TKLSwitcherConfig *)0x0) {
    if (pTVar11->PlayAdWhenDone == false) {
      if ((bRam0000000003ab25aa & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0386ac10);
        NativeHelper_017ef284(PTR_DAT_0386ac18);
        NativeHelper_017ef284(PTR_DAT_0386ac20);
        NativeHelper_017ef284(PTR_DAT_0385db10);
        bRam0000000003ab25aa = 1;
      }
      puVar4 = PTR_DAT_0385db10;
      if (self->mMergeFruit != (MergeFruit *)0x0) {
        MergeFruit_ClearFruitsPrefs_187e47c(self->mMergeFruit,(void *)0x0);
        self_02 = Singleton_get_Instance_27784f4(*(void **)puVar4);
        if (self_02 != (Game_UserData *)0x0) {
          Game_UserData_SaveCurrentScore_18c9a5c(self_02,0,(void *)0x0);
          if (self->_fruitCamera != (void *)0x0) {
            pvVar12 = UnityEngine_Component_GetComponent_1b08498
                                (self->_fruitCamera,*(void **)PTR_DAT_0386ac18);
            puVar3 = PTR_DAT_0386ac20;
            puVar4 = PTR_DAT_0386ac10;
            if (self->mMergeFruit != (MergeFruit *)0x0) {
              RVar17 = MergeFruit_CaptureRect_187df14
                                 (self->mMergeFruit,self->_fruitCamera,(void *)0x0);
              uVar13 = NativeHelper_017ef520(*(undefined8 *)puVar4);
              NativeHelper_01efbaf0(uVar13,self,*(undefined8 *)puVar3,0);
              if (pvVar12 != (void *)0x0) {
                if (*(char *)((long)pvVar12 + 0x38) != '\0') {
                  return;
                }
                lVar7 = NativeHelper_01907288
                                  (RVar17.component0,RVar17.component1,RVar17.component2,
                                   RVar17.component3,pvVar12,uVar13,0);
                if (lVar7 == 0) {
                  NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
                  uVar15 = NativeHelper_017ef520();
                  uVar13 = NativeHelper_017ef298(PTR_DAT_038a78d0);
                  NativeHelper_02c12308(uVar15,uVar13,0);
                }
                else {
                  uVar14 = NativeHelper_03353b80();
                  if ((uVar14 & 1) != 0) {
                    if ((bRam0000000003abb84f & 1) == 0) {
                      NativeHelper_017ef284(PTR_DAT_038a7898);
                      bRam0000000003abb84f = 1;
                    }
                    if (pvVar12 != (void *)0x0) {
                      lVar9 = *(long *)((long)pvVar12 + 0x10);
                      if (lVar9 != 0) {
                        if (pcRam0000000003abb8c0 == (code *)0x0) {
                          pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
                        }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000003abb8c0)(lVar9,lVar7);
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      NativeHelper_0334bff8();
                    }
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef530();
                  }
                  NativeHelper_017ef298(PTR_DAT_03865620);
                  uVar15 = NativeHelper_017ef520();
                  uVar13 = NativeHelper_017ef298(PTR_DAT_038a78b8);
                  NativeHelper_02b8eaa8(uVar15,uVar13,0);
                }
                uVar13 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef3f4(uVar15,uVar13);
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (*(int *)(*(long *)PTR_DAT_0385d3d0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    self_01 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
    pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
    NativeHelper_01efa3d0(pvVar12,self,*(undefined8 *)puVar3,0);
    puVar4 = PTR_DAT_03869888;
    if (self_01 != (Ads_AdsPlayController *)0x0) {
      pvVar16 = (void *)0x0;
      if ((bRam0000000003ab23d2 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c9f8);
        NativeHelper_017ef284(PTR_DAT_0385d3d0);
        NativeHelper_017ef284(PTR_DAT_0385dc10);
        NativeHelper_017ef284(PTR_DAT_0385c360);
        NativeHelper_017ef284(PTR_DAT_0385e8e0);
        NativeHelper_017ef284(PTR_DAT_0385d918);
        NativeHelper_017ef284(PTR_DAT_038682f8);
        NativeHelper_017ef284(PTR_DAT_0385d390);
        NativeHelper_017ef284(PTR_DAT_0385d920);
        NativeHelper_017ef284(PTR_DAT_03866d50);
        NativeHelper_017ef284(PTR_DAT_0385e8f0);
        NativeHelper_017ef284(PTR_DAT_03869890);
        NativeHelper_017ef284(PTR_DAT_03869888);
        NativeHelper_017ef284(PTR_DAT_03869860);
        bRam0000000003ab23d2 = 1;
      }
      lVar7 = NativeHelper_017ef520(*(undefined8 *)puVar4);
      NativeHelper_02c51f64(lVar7,0);
      puVar4 = PTR_DAT_0385d920;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x10) = self_01;
        NativeHelper_017ef228((undefined8 *)(lVar7 + 0x10),self_01);
        runtimeMethod_00 = *(void **)puVar4;
        *(undefined4 *)(lVar7 + 0x18) = 3;
        pIVar8 = Singleton_get_Instance_27784f4(runtimeMethod_00);
        if (pIVar8 != (IAPItemManager *)0x0) {
          bVar5 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar8,(void *)0x0);
          puVar3 = PTR_DAT_0385d390;
          if (!bVar5) {
            if (*(int *)(*(long *)PTR_DAT_0385d390 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            if (cRam0000000003ab1e6c == '\0') {
              NativeHelper_017ef284(PTR_DAT_0385d390);
              cRam0000000003ab1e6c = '\x01';
            }
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              NativeHelper_017ef404();
              lVar9 = *(long *)puVar3;
            }
            if (**(long **)(lVar9 + 0xb8) == 0) goto code_r0x019c79c4;
            if (*(char *)(**(long **)(lVar9 + 0xb8) + 0x21) == '\0') {
              pIVar8 = Singleton_get_Instance_27784f4(*(void **)puVar4);
              if (pIVar8 == (IAPItemManager *)0x0) goto code_r0x019c79c4;
              bVar5 = IAPItemManager_get_IsNoAdsActive_180ff84(pIVar8,(void *)0x0);
              if (!bVar5) {
                if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                bVar5 = Global_get_CloseAds_1804480((void *)0x0);
                if (!bVar5) {
                  bVar5 = Ads_AdsPlayController_ShouldPlay_18c3db4
                                    (self_01,(void *)(ulong)*(uint *)(lVar7 + 0x18),true,true,
                                     pvVar16);
                  puVar4 = PTR_DAT_038682f8;
                  if (*(int *)(*(long *)PTR_DAT_038682f8 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  lVar9 = NativeHelper_02da96d0(0);
                  if (lVar9 != 0) {
                    pvVar16 = (void *)0x0;
                    uVar6 = NativeHelper_02daae00(lVar9,2);
                    if (!bVar5 || ((uVar6 ^ 0xffffffff) & 1) != 0) {
                      if (bVar5) {
                        self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866d50);
                        action = (LocalNotification_Action *)
                                 NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
                        NativeHelper_02b8e36c(action,lVar7,*(undefined8 *)PTR_DAT_03869890,0);
                        if (self_00 == (UnityMainThreadDispatcher *)0x0) goto code_r0x019c79c4;
                        UnityMainThreadDispatcher_Enqueue_17f9c94(self_00,action,false,(void *)0x0);
                        TKCommon_DotEvent_IntVideoNotReady_191ae10((void *)0x0);
                      }
                      goto code_r0x019c7760;
                    }
                    Game_Controller_FMViewController_EnableTouch_18d699c(false,(void *)0x0);
                    uVar1 = *(undefined4 *)(lVar7 + 0x18);
                    self_01->completeAction = pvVar12;
                    *(undefined4 *)&self_01->field_0x10 = uVar1;
                    NativeHelper_017ef228(&self_01->completeAction,pvVar12);
                    pAVar10 = (Ads_AdsPlayController *)
                              NativeHelper_02aa606c(*(undefined8 *)(self_01 + 1),0);
                    adValue = 0.0;
                    if (((ulong)pAVar10 & 1) == 0) {
                      adValue = *(double *)&self_01[1].isFirstAdPlay;
                    }
                    pvVar12 = Ads_AdsPlayController_GetReason_18c34e8
                                        (pAVar10,(void *)(ulong)*(uint *)(lVar7 + 0x18),pvVar16);
                    pvVar16 = (void *)0x0;
                    TKCommon_DotEvent_StartWatchVideo_191a024(pvVar12,false,adValue,(void *)0x0);
                    puVar3 = PTR_DAT_0385d3d0;
                    self_01->isInterstitialDisplayed = false;
                    lVar7 = *(long *)puVar3;
                    if (*(int *)(lVar7 + 0xe4) == 0) {
                      NativeHelper_017ef404();
                      lVar7 = *(long *)puVar3;
                    }
                    lVar9 = *(long *)puVar4;
                    iVar2 = *(int *)(lVar9 + 0xe4);
                    *(undefined1 *)(*(long *)(lVar7 + 0xb8) + 0x18) = 1;
                    if (iVar2 == 0) {
                      NativeHelper_017ef404(lVar9);
                    }
                    pAVar10 = (Ads_AdsPlayController *)NativeHelper_02da96d0(0);
                    pvVar12 = Ads_AdsPlayController_GetReason_18c34e8
                                        (pAVar10,(void *)(ulong)*(uint *)&self_01->field_0x10,
                                         pvVar16);
                    if (pAVar10 != (Ads_AdsPlayController *)0x0) {
                      NativeHelper_02daaf14(pAVar10,2,pvVar12,0);
                      if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
                        NativeHelper_017ef404();
                      }
                      pvVar12 = (void *)NativeHelper_02bf109c(0);
                      self_01->lastPlayTime = pvVar12;
                      return;
                    }
                  }
                  goto code_r0x019c79c4;
                }
                if (*(int *)(*(long *)PTR_DAT_0385c360 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                UnityEngine_Debug_Log_321dd14(*(void **)PTR_DAT_03869860,(void *)0x0);
              }
            }
          }
code_r0x019c7760:
          if (pvVar12 == (void *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x019c778c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((long)pvVar12 + 0x18))
                    (*(undefined8 *)((long)pvVar12 + 0x40),0,*(undefined8 *)((long)pvVar12 + 0x28));
          return;
        }
      }
code_r0x019c79c4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

