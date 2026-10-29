// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GoReviveDialog() { }
// Ghidra address: 019f6300; ELF VA: 0x18f6300; file offset: 0x18f2300
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019c7794) */
/* WARNING: Removing unreachable block (ram,0x019c7858) */
/* WARNING: Removing unreachable block (ram,0x019c7888) */
/* WARNING: Removing unreachable block (ram,0x019c788c) */
/* WARNING: Removing unreachable block (ram,0x019c7890) */
/* WARNING: Removing unreachable block (ram,0x019db294) */
/* WARNING: Removing unreachable block (ram,0x019db2a4) */
/* WARNING: Removing unreachable block (ram,0x019db2b0) */
/* WARNING: Removing unreachable block (ram,0x019db2c4) */

void TKCommon_PlayGameView_GoReviveDialog_18f2300(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  IAPItemManager *pIVar9;
  UnityMainThreadDispatcher *self_00;
  LocalNotification_Action *action;
  Ads_AdsPlayController *pAVar10;
  void *pvVar11;
  long *self_01;
  Game_UserData *pGVar12;
  TKLClient_TKLSwitcherConfig *pTVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  void *pvVar18;
  Ads_AdsPlayController *self_02;
  ulong uVar19;
  undefined8 uVar20;
  void *runtimeMethod_00;
  undefined8 *puVar21;
  long lVar22;
  void *pvVar23;
  double adValue;
  Recovered_Rect RVar24;
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25a8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0386abf8);
    NativeHelper_017ef284(PTR_DAT_0386ac00);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867288);
    bRam0000000003ab25a8 = 1;
  }
  pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar1 = PTR_DAT_0385d918;
  if (pGVar12 != (Game_UserData *)0x0) {
    iVar8 = Game_UserData_GetExpLevel_18c70c4(pGVar12,(void *)0x0);
    lVar22 = *(long *)puVar1;
    if (*(int *)(lVar22 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar22);
    }
    pTVar13 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar13 != (TKLClient_TKLSwitcherConfig *)0x0) {
      if (pTVar13->FM_ContinueLimitExpLevel <= iVar8) {
        iVar8 = self->UseContinueCount;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        pTVar13 = Global_get_RemoteConfig_18048d8((void *)0x0);
        puVar1 = PTR_DAT_0385c9f8;
        if (pTVar13 == (TKLClient_TKLSwitcherConfig *)0x0) goto LAB_019f6504;
        if (iVar8 < pTVar13->FM_ContinueUseLimitCount) {
          uVar14 = *(undefined8 *)PTR_DAT_0385c9f8;
          self->UseContinueCount = self->UseContinueCount + 1;
          lVar22 = NativeHelper_017ef520(uVar14);
          NativeHelper_02b8e36c(lVar22,self,*(undefined8 *)PTR_DAT_0386ac00,0);
          lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          NativeHelper_02b8e36c(lVar15,self,*(undefined8 *)PTR_DAT_0386abf8,0);
          plVar16 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,2);
          if (plVar16 != (long *)0x0) {
            if ((lVar22 != 0) &&
               (lVar17 = NativeHelper_017ef408(lVar22,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0
               )) {
LAB_019f650c:
              uVar14 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef3f4(uVar14,0);
            }
            if ((int)plVar16[3] != 0) {
              plVar16[4] = lVar22;
              NativeHelper_017ef228(plVar16 + 4,lVar22);
              if ((lVar15 != 0) &&
                 (lVar22 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar16 + 0x40)),
                 lVar22 == 0)) goto LAB_019f650c;
              if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
                plVar16[5] = lVar15;
                NativeHelper_017ef228(plVar16 + 5,lVar15);
                puVar1 = PTR_DAT_0385c2a0;
                pvVar18 = *(void **)PTR_DAT_03867288;
                pvVar11 = pvVar18;
                if ((bRam0000000003ab24dc & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_0386a170,0,plVar16,0);
                  NativeHelper_017ef284(PTR_DAT_0385c360);
                  NativeHelper_017ef284(PTR_DAT_0386a180);
                  NativeHelper_017ef284(PTR_DAT_0386a188);
                  NativeHelper_017ef284(PTR_DAT_0386a190);
                  NativeHelper_017ef284(PTR_DAT_0386a208);
                  NativeHelper_017ef284(PTR_DAT_0386a240);
                  NativeHelper_017ef284(PTR_DAT_03868698);
                  NativeHelper_017ef284(PTR_DAT_0385c2a0);
                  NativeHelper_017ef284(PTR_DAT_0386a198);
                  NativeHelper_017ef284(PTR_DAT_038678e8);
                  NativeHelper_017ef284(PTR_DAT_0386a220);
                  pvVar11 = (void *)NativeHelper_017ef284(PTR_DAT_0386a248);
                  bRam0000000003ab24dc = 1;
                }
                Game_Controller_FMViewController_Init_18d63c8(pvVar11);
                pvVar11 = Game_Controller_FMViewController_loadRes_18d6898(pvVar18,runtimeMethod_00)
                ;
                lVar22 = *(long *)puVar1;
                if (*(int *)(lVar22 + 0xe4) == 0) {
                  NativeHelper_017ef404(lVar22);
                }
                bVar5 = UnityEngine_object_op_Equality_324f284(pvVar11,(void *)0x0,(void *)0x0);
                puVar4 = PTR_DAT_0386a180;
                puVar3 = PTR_DAT_03868698;
                puVar2 = PTR_DAT_0385c360;
                if (bVar5) {
                  pvVar11 = (void *)NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_0386a198,pvVar18,0)
                  ;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    NativeHelper_017ef404(*(long *)puVar2);
                  }
                  UnityEngine_Debug_LogError_321e360(pvVar11,(void *)0x0);
                  return;
                }
                pvVar23 = *(void **)(*(long *)(*(long *)PTR_DAT_0386a180 + 0xb8) + 0x28);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                pvVar11 = UnityEngine_object_Instantiate_1ba983c(pvVar11,pvVar23,*(void **)puVar3);
                if (pvVar11 != (void *)0x0) {
                  UnityEngine_object_set_name_3252f54(pvVar11,pvVar18,(void *)0x0);
                  self_01 = UnityEngine_GameObject_GetComponent_1b75510
                                      (pvVar11,*(void **)PTR_DAT_0386a188);
                  puVar1 = PTR_DAT_0386a170;
                  if ((self_01 != (long *)0x0) &&
                     (pvVar11 = UnityEngine_Component_GetComponent_1b08498
                                          (self_01,*(void **)PTR_DAT_0386a170),
                     pvVar11 != (void *)0x0)) {
                    NativeHelper_0364318c(pvVar11,1,0);
                    NativeHelper_036444cc
                              (pvVar11,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
                    NativeHelper_03643840(0x40a00000,pvVar11,0);
                    lVar22 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                    if (lVar22 != 0) {
                      if (*(int *)(lVar22 + 0x18) < 1) {
                        iVar8 = 0;
                      }
                      else {
                        pvVar23 = (void *)NativeHelper_0256950c
                                                    (lVar22,*(int *)(lVar22 + 0x18) + -1,
                                                     *(undefined8 *)PTR_DAT_0386a240);
                        if ((pvVar23 == (void *)0x0) ||
                           (pvVar23 = UnityEngine_Component_GetComponent_1b08498
                                                (pvVar23,*(void **)puVar1), pvVar23 == (void *)0x0))
                        goto code_r0x019db304;
                        iVar8 = NativeHelper_03643b40(pvVar23,0);
                        iVar8 = iVar8 + 1;
                      }
                      uVar7 = NativeHelper_0331acd0(*(undefined8 *)PTR_DAT_0386a248,0);
                      NativeHelper_03643e20(pvVar11,uVar7,0);
                      NativeHelper_03643bf4(pvVar11,iVar8,0);
                      lVar22 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                      if (lVar22 != 0) {
                        lVar15 = *(long *)(lVar22 + 0x10);
                        lVar17 = *(long *)PTR_DAT_0386a190;
                        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
                        if (lVar15 != 0) {
                          uVar6 = *(uint *)(lVar22 + 0x18);
                          if (uVar6 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar22 + 0x18) = uVar6 + 1;
                            puVar21 = (undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
                            *puVar21 = self_01;
                            NativeHelper_017ef228(puVar21,self_01);
                          }
                          else {
                            NativeHelper_025697dc
                                      (lVar22,self_01,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar22 = NativeHelper_02aa6b6c
                                             (*(undefined8 *)PTR_DAT_0386a220,pvVar18,
                                              *(undefined8 *)PTR_DAT_038678e8,0);
                          self_01[4] = lVar22;
                          NativeHelper_017ef228();
                          (**(code **)(*self_01 + 0x178))
                                    (self_01,plVar16,*(undefined8 *)(*self_01 + 0x180));
                          (**(code **)(*self_01 + 0x188))(self_01,*(undefined8 *)(*self_01 + 400));
                          return;
                        }
                      }
                    }
                  }
                }
code_r0x019db304:
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          goto LAB_019f6504;
        }
      }
      puVar1 = PTR_DAT_0385d918;
      if ((bRam0000000003ab25a9 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d4c8);
        NativeHelper_017ef284(PTR_DAT_0385d3d0);
        NativeHelper_017ef284(PTR_DAT_0385d918);
        NativeHelper_017ef284(PTR_DAT_0386ac08);
        bRam0000000003ab25a9 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      pTVar13 = Global_get_RemoteConfig_18048d8((void *)0x0);
      puVar2 = PTR_DAT_0386ac08;
      puVar1 = PTR_DAT_0385d4c8;
      if (pTVar13 != (TKLClient_TKLSwitcherConfig *)0x0) {
        if (pTVar13->PlayAdWhenDone == false) {
          if ((bRam0000000003ab25aa & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0386ac10);
            NativeHelper_017ef284(PTR_DAT_0386ac18);
            NativeHelper_017ef284(PTR_DAT_0386ac20);
            NativeHelper_017ef284(PTR_DAT_0385db10);
            bRam0000000003ab25aa = 1;
          }
          puVar1 = PTR_DAT_0385db10;
          if (self->mMergeFruit != (MergeFruit *)0x0) {
            MergeFruit_ClearFruitsPrefs_187e47c(self->mMergeFruit,(void *)0x0);
            pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar1);
            if (pGVar12 != (Game_UserData *)0x0) {
              Game_UserData_SaveCurrentScore_18c9a5c(pGVar12,0,(void *)0x0);
              if (self->_fruitCamera != (void *)0x0) {
                pvVar11 = UnityEngine_Component_GetComponent_1b08498
                                    (self->_fruitCamera,*(void **)PTR_DAT_0386ac18);
                puVar2 = PTR_DAT_0386ac20;
                puVar1 = PTR_DAT_0386ac10;
                if (self->mMergeFruit != (MergeFruit *)0x0) {
                  RVar24 = MergeFruit_CaptureRect_187df14
                                     (self->mMergeFruit,self->_fruitCamera,(void *)0x0);
                  uVar14 = NativeHelper_017ef520(*(undefined8 *)puVar1);
                  NativeHelper_01efbaf0(uVar14,self,*(undefined8 *)puVar2,0);
                  if (pvVar11 != (void *)0x0) {
                    if (*(char *)((long)pvVar11 + 0x38) != '\0') {
                      return;
                    }
                    lVar22 = NativeHelper_01907288
                                       (RVar24.component0,RVar24.component1,RVar24.component2,
                                        RVar24.component3,pvVar11,uVar14,0);
                    if (lVar22 == 0) {
                      NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
                      uVar20 = NativeHelper_017ef520();
                      uVar14 = NativeHelper_017ef298(PTR_DAT_038a78d0);
                      NativeHelper_02c12308(uVar20,uVar14,0);
                    }
                    else {
                      uVar19 = NativeHelper_03353b80();
                      if ((uVar19 & 1) != 0) {
                        if ((bRam0000000003abb84f & 1) == 0) {
                          NativeHelper_017ef284(PTR_DAT_038a7898);
                          bRam0000000003abb84f = 1;
                        }
                        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                          NativeHelper_017ef530();
                        }
                        lVar15 = *(long *)((long)pvVar11 + 0x10);
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          NativeHelper_0334bff8();
                        }
                        if (pcRam0000000003abb8c0 == (code *)0x0) {
                          pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
                        }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam0000000003abb8c0)(lVar15,lVar22);
                        return;
                      }
                      NativeHelper_017ef298(PTR_DAT_03865620);
                      uVar20 = NativeHelper_017ef520();
                      uVar14 = NativeHelper_017ef298(PTR_DAT_038a78b8);
                      NativeHelper_02b8eaa8(uVar20,uVar14,0);
                    }
                    uVar14 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef3f4(uVar20,uVar14);
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
        self_02 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
        pvVar11 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1);
        NativeHelper_01efa3d0(pvVar11,self,*(undefined8 *)puVar2,0);
        puVar1 = PTR_DAT_03869888;
        if (self_02 != (Ads_AdsPlayController *)0x0) {
          pvVar18 = (void *)0x0;
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
          lVar22 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          NativeHelper_02c51f64(lVar22,0);
          puVar1 = PTR_DAT_0385d920;
          if (lVar22 != 0) {
            *(undefined8 *)(lVar22 + 0x10) = self_02;
            NativeHelper_017ef228((undefined8 *)(lVar22 + 0x10),self_02);
            pvVar23 = *(void **)puVar1;
            *(undefined4 *)(lVar22 + 0x18) = 3;
            pIVar9 = Singleton_get_Instance_27784f4(pvVar23);
            if (pIVar9 != (IAPItemManager *)0x0) {
              bVar5 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar9,(void *)0x0);
              puVar2 = PTR_DAT_0385d390;
              if (!bVar5) {
                if (*(int *)(*(long *)PTR_DAT_0385d390 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                if (cRam0000000003ab1e6c == '\0') {
                  NativeHelper_017ef284(PTR_DAT_0385d390);
                  cRam0000000003ab1e6c = '\x01';
                }
                lVar15 = *(long *)puVar2;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                  lVar15 = *(long *)puVar2;
                }
                if (**(long **)(lVar15 + 0xb8) == 0) goto code_r0x019c79c4;
                if (*(char *)(**(long **)(lVar15 + 0xb8) + 0x21) == '\0') {
                  pIVar9 = Singleton_get_Instance_27784f4(*(void **)puVar1);
                  if (pIVar9 == (IAPItemManager *)0x0) goto code_r0x019c79c4;
                  bVar5 = IAPItemManager_get_IsNoAdsActive_180ff84(pIVar9,(void *)0x0);
                  if (!bVar5) {
                    if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
                      NativeHelper_017ef404();
                    }
                    bVar5 = Global_get_CloseAds_1804480((void *)0x0);
                    if (!bVar5) {
                      bVar5 = Ads_AdsPlayController_ShouldPlay_18c3db4
                                        (self_02,(void *)(ulong)*(uint *)(lVar22 + 0x18),true,true,
                                         pvVar18);
                      puVar1 = PTR_DAT_038682f8;
                      if (*(int *)(*(long *)PTR_DAT_038682f8 + 0xe4) == 0) {
                        NativeHelper_017ef404();
                      }
                      lVar15 = NativeHelper_02da96d0(0);
                      if (lVar15 != 0) {
                        pvVar18 = (void *)0x0;
                        uVar6 = NativeHelper_02daae00(lVar15,2);
                        if (!bVar5 || ((uVar6 ^ 0xffffffff) & 1) != 0) {
                          if (bVar5) {
                            self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866d50);
                            action = (LocalNotification_Action *)
                                     NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
                            NativeHelper_02b8e36c(action,lVar22,*(undefined8 *)PTR_DAT_03869890,0);
                            if (self_00 == (UnityMainThreadDispatcher *)0x0) goto code_r0x019c79c4;
                            UnityMainThreadDispatcher_Enqueue_17f9c94
                                      (self_00,action,false,(void *)0x0);
                            TKCommon_DotEvent_IntVideoNotReady_191ae10((void *)0x0);
                          }
                          goto code_r0x019c7760;
                        }
                        Game_Controller_FMViewController_EnableTouch_18d699c(false,(void *)0x0);
                        uVar7 = *(undefined4 *)(lVar22 + 0x18);
                        self_02->completeAction = pvVar11;
                        *(undefined4 *)&self_02->field_0x10 = uVar7;
                        NativeHelper_017ef228(&self_02->completeAction,pvVar11);
                        pAVar10 = (Ads_AdsPlayController *)
                                  NativeHelper_02aa606c(*(undefined8 *)(self_02 + 1),0);
                        adValue = 0.0;
                        if (((ulong)pAVar10 & 1) == 0) {
                          adValue = *(double *)&self_02[1].isFirstAdPlay;
                        }
                        pvVar11 = Ads_AdsPlayController_GetReason_18c34e8
                                            (pAVar10,(void *)(ulong)*(uint *)(lVar22 + 0x18),pvVar18
                                            );
                        pvVar18 = (void *)0x0;
                        TKCommon_DotEvent_StartWatchVideo_191a024(pvVar11,false,adValue,(void *)0x0)
                        ;
                        puVar2 = PTR_DAT_0385d3d0;
                        self_02->isInterstitialDisplayed = false;
                        lVar22 = *(long *)puVar2;
                        if (*(int *)(lVar22 + 0xe4) == 0) {
                          NativeHelper_017ef404();
                          lVar22 = *(long *)puVar2;
                        }
                        lVar15 = *(long *)puVar1;
                        iVar8 = *(int *)(lVar15 + 0xe4);
                        *(undefined1 *)(*(long *)(lVar22 + 0xb8) + 0x18) = 1;
                        if (iVar8 == 0) {
                          NativeHelper_017ef404(lVar15);
                        }
                        pAVar10 = (Ads_AdsPlayController *)NativeHelper_02da96d0(0);
                        pvVar11 = Ads_AdsPlayController_GetReason_18c34e8
                                            (pAVar10,(void *)(ulong)*(uint *)&self_02->field_0x10,
                                             pvVar18);
                        if (pAVar10 != (Ads_AdsPlayController *)0x0) {
                          NativeHelper_02daaf14(pAVar10,2,pvVar11,0);
                          if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
                            NativeHelper_017ef404();
                          }
                          pvVar11 = (void *)NativeHelper_02bf109c(0);
                          self_02->lastPlayTime = pvVar11;
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
              if (pvVar11 == (void *)0x0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x019c778c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((long)pvVar11 + 0x18))
                        (*(undefined8 *)((long)pvVar11 + 0x40),0,
                         *(undefined8 *)((long)pvVar11 + 0x28));
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
  }
LAB_019f6504:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

