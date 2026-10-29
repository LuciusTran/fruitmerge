// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RestartAction() { }
// Ghidra address: 019f7844; ELF VA: 0x18f7844; file offset: 0x18f3844
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019c7794) */
/* WARNING: Removing unreachable block (ram,0x019c7858) */
/* WARNING: Removing unreachable block (ram,0x019c7888) */
/* WARNING: Removing unreachable block (ram,0x019c788c) */
/* WARNING: Removing unreachable block (ram,0x019c7890) */

void TKCommon_PlayGameView_RestartAction_18f3844(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  void *runtimeMethod_00;
  IAPItemManager *pIVar9;
  long lVar10;
  UnityMainThreadDispatcher *self_00;
  LocalNotification_Action *action;
  Ads_AdsPlayController *pAVar11;
  Ads_AdsPlayController *self_01;
  void *pvVar12;
  void *extraout_x1;
  void *pvVar13;
  double adValue;
  
  puVar4 = PTR_DAT_0385d3d0;
  if ((bRam0000000003ab25ba & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d4c8);
    NativeHelper_017ef284(PTR_DAT_0385d3d0);
    NativeHelper_017ef284(PTR_DAT_0386aca0);
    bRam0000000003ab25ba = 1;
    runtimeMethod = extraout_x1;
  }
  puVar5 = PTR_DAT_0386aca0;
  puVar3 = PTR_DAT_0385d4c8;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar4,runtimeMethod);
  }
  self_01 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_01efa3d0(pvVar12,self,*(undefined8 *)puVar5,0);
  puVar4 = PTR_DAT_03869888;
  if (self_01 == (Ads_AdsPlayController *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar13 = (void *)0x0;
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
  lVar8 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02c51f64(lVar8,0);
  puVar4 = PTR_DAT_0385d920;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = self_01;
    NativeHelper_017ef228((undefined8 *)(lVar8 + 0x10),self_01);
    runtimeMethod_00 = *(void **)puVar4;
    *(undefined4 *)(lVar8 + 0x18) = 3;
    pIVar9 = Singleton_get_Instance_27784f4(runtimeMethod_00);
    if (pIVar9 != (IAPItemManager *)0x0) {
      bVar6 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar9,(void *)0x0);
      puVar3 = PTR_DAT_0385d390;
      if (!bVar6) {
        if (*(int *)(*(long *)PTR_DAT_0385d390 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        if (cRam0000000003ab1e6c == '\0') {
          NativeHelper_017ef284(PTR_DAT_0385d390);
          cRam0000000003ab1e6c = '\x01';
        }
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar10 = *(long *)puVar3;
        }
        if (**(long **)(lVar10 + 0xb8) == 0) goto code_r0x019c79c4;
        if (*(char *)(**(long **)(lVar10 + 0xb8) + 0x21) == '\0') {
          pIVar9 = Singleton_get_Instance_27784f4(*(void **)puVar4);
          if (pIVar9 == (IAPItemManager *)0x0) goto code_r0x019c79c4;
          bVar6 = IAPItemManager_get_IsNoAdsActive_180ff84(pIVar9,(void *)0x0);
          if (!bVar6) {
            if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            bVar6 = Global_get_CloseAds_1804480((void *)0x0);
            if (!bVar6) {
              bVar6 = Ads_AdsPlayController_ShouldPlay_18c3db4
                                (self_01,(void *)(ulong)*(uint *)(lVar8 + 0x18),true,true,pvVar13);
              puVar4 = PTR_DAT_038682f8;
              if (*(int *)(*(long *)PTR_DAT_038682f8 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              lVar10 = NativeHelper_02da96d0(0);
              if (lVar10 != 0) {
                pvVar13 = (void *)0x0;
                uVar7 = NativeHelper_02daae00(lVar10,2);
                if (!bVar6 || ((uVar7 ^ 0xffffffff) & 1) != 0) {
                  if (bVar6) {
                    self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866d50);
                    action = (LocalNotification_Action *)
                             NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
                    NativeHelper_02b8e36c(action,lVar8,*(undefined8 *)PTR_DAT_03869890,0);
                    if (self_00 == (UnityMainThreadDispatcher *)0x0) goto code_r0x019c79c4;
                    UnityMainThreadDispatcher_Enqueue_17f9c94(self_00,action,false,(void *)0x0);
                    TKCommon_DotEvent_IntVideoNotReady_191ae10((void *)0x0);
                  }
                  goto code_r0x019c7760;
                }
                Game_Controller_FMViewController_EnableTouch_18d699c(false,(void *)0x0);
                uVar1 = *(undefined4 *)(lVar8 + 0x18);
                self_01->completeAction = pvVar12;
                *(undefined4 *)&self_01->field_0x10 = uVar1;
                NativeHelper_017ef228(&self_01->completeAction,pvVar12);
                pAVar11 = (Ads_AdsPlayController *)
                          NativeHelper_02aa606c(*(undefined8 *)(self_01 + 1),0);
                adValue = 0.0;
                if (((ulong)pAVar11 & 1) == 0) {
                  adValue = *(double *)&self_01[1].isFirstAdPlay;
                }
                pvVar12 = Ads_AdsPlayController_GetReason_18c34e8
                                    (pAVar11,(void *)(ulong)*(uint *)(lVar8 + 0x18),pvVar13);
                pvVar13 = (void *)0x0;
                TKCommon_DotEvent_StartWatchVideo_191a024(pvVar12,false,adValue,(void *)0x0);
                puVar3 = PTR_DAT_0385d3d0;
                self_01->isInterstitialDisplayed = false;
                lVar8 = *(long *)puVar3;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                  lVar8 = *(long *)puVar3;
                }
                lVar10 = *(long *)puVar4;
                iVar2 = *(int *)(lVar10 + 0xe4);
                *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x18) = 1;
                if (iVar2 == 0) {
                  NativeHelper_017ef404(lVar10);
                }
                pAVar11 = (Ads_AdsPlayController *)NativeHelper_02da96d0(0);
                pvVar12 = Ads_AdsPlayController_GetReason_18c34e8
                                    (pAVar11,(void *)(ulong)*(uint *)&self_01->field_0x10,pvVar13);
                if (pAVar11 != (Ads_AdsPlayController *)0x0) {
                  NativeHelper_02daaf14(pAVar11,2,pvVar12,0);
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

