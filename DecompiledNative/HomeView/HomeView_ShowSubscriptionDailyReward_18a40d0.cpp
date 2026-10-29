// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowSubscriptionDailyReward() { }
// Ghidra address: 019a80d0; ELF VA: 0x18a80d0; file offset: 0x18a40d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019db294) */
/* WARNING: Removing unreachable block (ram,0x019db2a4) */
/* WARNING: Removing unreachable block (ram,0x019db2b0) */
/* WARNING: Removing unreachable block (ram,0x019db2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomeView_ShowSubscriptionDailyReward_18a40d0(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  IAPItemManager *self_00;
  Game_UserData *pGVar13;
  void *ViewName;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  void *pvVar17;
  long lVar18;
  DailyRewardModel *pDVar19;
  long *plVar20;
  long *self_01;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *runtimeMethod_01;
  undefined8 *puVar21;
  void *pvVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  
  puVar1 = PTR_DAT_0385d920;
  if ((bRam0000000003ab227c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03868850);
    NativeHelper_017ef284(PTR_DAT_03868858);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038687e0);
    NativeHelper_017ef284(PTR_DAT_03868860);
    bRam0000000003ab227c = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (self_00 == (IAPItemManager *)0x0) goto LAB_019a833c;
  bVar9 = IAPItemManager_get_IsSubscriptionActive_1804360(self_00,(void *)0x0);
  if ((bVar9) &&
     (bVar9 = WebHelper_get_HasSyncedServerTime_1880ef0((void *)0x0), puVar1 = PTR_DAT_0385db10,
     bVar9)) {
    pGVar13 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (pGVar13 == (Game_UserData *)0x0) {
LAB_019a833c:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    bVar9 = Game_UserData_IsTodaySubscriptionDailyClaimed_18ce690(pGVar13,(void *)0x0);
    if (!bVar9) {
      pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar13 != (Game_UserData *)0x0) {
        Game_UserData_SaveSubscriptionDailyClaimed_18ce934(pGVar13,(void *)0x0);
        iVar10 = UnityEngine_Random_Range_3246f40(0,4,(void *)0x0);
        pDVar19 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
        DailyRewardModel_DailyRewardModel_1880ca8(pDVar19,(void *)0x0);
        if (pDVar19 != (DailyRewardModel *)0x0) {
          pDVar19->day = 999;
          if (iVar10 == 2) {
            pDVar19->upgrade = 1;
          }
          else if (iVar10 == 1) {
            pDVar19->bomb = 1;
          }
          else if (iVar10 == 0) {
            pDVar19->clean = 1;
          }
          else {
            pDVar19->shake = 1;
          }
          lVar15 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
          NativeHelper_02b8e36c(lVar15,self,*(undefined8 *)PTR_DAT_03868858,0);
          plVar20 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
          if (plVar20 != (long *)0x0) {
            lVar16 = NativeHelper_017ef408(pDVar19,*(undefined8 *)(*plVar20 + 0x40));
            if (lVar16 == 0) {
LAB_019a8344:
              uVar14 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef3f4(uVar14,0);
            }
            if ((int)plVar20[3] != 0) {
              plVar20[4] = (long)pDVar19;
              NativeHelper_017ef228(plVar20 + 4,pDVar19);
              puVar1 = PTR_DAT_03868860;
              if ((*(long *)PTR_DAT_03868860 != 0) &&
                 (lVar16 = NativeHelper_017ef408
                                     (*(long *)PTR_DAT_03868860,*(undefined8 *)(*plVar20 + 0x40)),
                 lVar16 == 0)) goto LAB_019a8344;
              if ((*(uint *)(plVar20 + 3) & 0xfffffffe) != 0) {
                plVar20[5] = *(long *)puVar1;
                NativeHelper_017ef228();
                if ((lVar15 != 0) &&
                   (lVar16 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar20 + 0x40)),
                   lVar16 == 0)) goto LAB_019a8344;
                if (2 < *(uint *)(plVar20 + 3)) {
                  plVar20[6] = lVar15;
                  NativeHelper_017ef228(plVar20 + 6,lVar15);
                  puVar1 = PTR_DAT_0385c2a0;
                  ViewName = *(void **)PTR_DAT_038687e0;
                  pvVar17 = ViewName;
                  if ((bRam0000000003ab24dc & 1) == 0) {
                    NativeHelper_017ef284(PTR_DAT_0386a170,0,plVar20,0);
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
                    pvVar17 = (void *)NativeHelper_017ef284(PTR_DAT_0386a248);
                    bRam0000000003ab24dc = 1;
                  }
                  Game_Controller_FMViewController_Init_18d63c8(pvVar17);
                  pvVar17 = Game_Controller_FMViewController_loadRes_18d6898
                                      (ViewName,runtimeMethod_01);
                  lVar15 = *(long *)puVar1;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    NativeHelper_017ef404(lVar15);
                  }
                  bVar9 = UnityEngine_object_op_Equality_324f284(pvVar17,(void *)0x0,(void *)0x0);
                  puVar4 = PTR_DAT_0386a180;
                  puVar2 = PTR_DAT_03868698;
                  puVar3 = PTR_DAT_0385c360;
                  if (bVar9) {
                    pvVar17 = (void *)NativeHelper_02a9c49c
                                                (*(undefined8 *)PTR_DAT_0386a198,ViewName,0);
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      NativeHelper_017ef404(*(long *)puVar3);
                    }
                    UnityEngine_Debug_LogError_321e360(pvVar17,(void *)0x0);
                    return;
                  }
                  pvVar22 = *(void **)(*(long *)(*(long *)PTR_DAT_0386a180 + 0xb8) + 0x28);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  pvVar17 = UnityEngine_object_Instantiate_1ba983c(pvVar17,pvVar22,*(void **)puVar2)
                  ;
                  if (pvVar17 != (void *)0x0) {
                    UnityEngine_object_set_name_3252f54(pvVar17,ViewName,(void *)0x0);
                    self_01 = UnityEngine_GameObject_GetComponent_1b75510
                                        (pvVar17,*(void **)PTR_DAT_0386a188);
                    puVar1 = PTR_DAT_0386a170;
                    if ((self_01 != (long *)0x0) &&
                       (pvVar17 = UnityEngine_Component_GetComponent_1b08498
                                            (self_01,*(void **)PTR_DAT_0386a170),
                       pvVar17 != (void *)0x0)) {
                      NativeHelper_0364318c(pvVar17,1,0);
                      NativeHelper_036444cc
                                (pvVar17,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
                      NativeHelper_03643840(0x40a00000,pvVar17,0);
                      lVar15 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                      if (lVar15 != 0) {
                        if (*(int *)(lVar15 + 0x18) < 1) {
                          iVar10 = 0;
                        }
                        else {
                          pvVar22 = (void *)NativeHelper_0256950c
                                                      (lVar15,*(int *)(lVar15 + 0x18) + -1,
                                                       *(undefined8 *)PTR_DAT_0386a240);
                          if ((pvVar22 == (void *)0x0) ||
                             (pvVar22 = UnityEngine_Component_GetComponent_1b08498
                                                  (pvVar22,*(void **)puVar1), pvVar22 == (void *)0x0
                             )) goto code_r0x019db304;
                          iVar10 = NativeHelper_03643b40(pvVar22,0);
                          iVar10 = iVar10 + 1;
                        }
                        uVar12 = NativeHelper_0331acd0(*(undefined8 *)PTR_DAT_0386a248,0);
                        NativeHelper_03643e20(pvVar17,uVar12,0);
                        NativeHelper_03643bf4(pvVar17,iVar10,0);
                        lVar15 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
                        if (lVar15 != 0) {
                          lVar16 = *(long *)(lVar15 + 0x10);
                          lVar18 = *(long *)PTR_DAT_0386a190;
                          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                          if (lVar16 != 0) {
                            uVar11 = *(uint *)(lVar15 + 0x18);
                            if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                              *(uint *)(lVar15 + 0x18) = uVar11 + 1;
                              puVar21 = (undefined8 *)(lVar16 + (long)(int)uVar11 * 8 + 0x20);
                              *puVar21 = self_01;
                              NativeHelper_017ef228(puVar21,self_01);
                            }
                            else {
                              NativeHelper_025697dc
                                        (lVar15,self_01,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar15 = NativeHelper_02aa6b6c
                                               (*(undefined8 *)PTR_DAT_0386a220,ViewName,
                                                *(undefined8 *)PTR_DAT_038678e8,0);
                            self_01[4] = lVar15;
                            NativeHelper_017ef228();
                            (**(code **)(*self_01 + 0x178))
                                      (self_01,plVar20,*(undefined8 *)(*self_01 + 0x180));
                            (**(code **)(*self_01 + 0x188))(self_01,*(undefined8 *)(*self_01 + 400))
                            ;
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
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
        }
      }
      goto LAB_019a833c;
    }
  }
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab227d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03868850);
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_03868868);
    NativeHelper_017ef284(PTR_DAT_03868870);
    NativeHelper_017ef284(PTR_DAT_03868878);
    NativeHelper_017ef284(PTR_DAT_03868880);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868888);
    NativeHelper_017ef284(PTR_DAT_038687e0);
    NativeHelper_017ef284(PTR_DAT_03868890);
    NativeHelper_017ef284(PTR_DAT_03868898);
    NativeHelper_017ef284(PTR_DAT_038688a0);
    NativeHelper_017ef284(PTR_DAT_038620d8);
    NativeHelper_017ef284(PTR_DAT_038688a8);
    NativeHelper_017ef284(PTR_DAT_038688b0);
    bRam0000000003ab227d = 1;
  }
  iStack_68 = 0;
  uStack_64 = 0;
  iStack_6c = 0;
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar3 = PTR_DAT_03868888;
  if (pGVar13 == (Game_UserData *)0x0) goto LAB_019a89d4;
  uVar11 = Game_UserData_get_LastWeekRank_18d3f6c(pGVar13,(void *)0x0);
  puVar2 = PTR_DAT_0385c2d8;
  uStack_70 = uVar11;
  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_70);
  uVar14 = NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar14,0);
  NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar14,0);
  if ((int)uVar11 < 1) {
    HomeView_CheckAndShowDailyQuest_18a49e8(self,runtimeMethod_00);
    return;
  }
  uStack_64 = 0;
  if (uVar11 == 3) {
    uStack_64 = 3;
  }
  else if (uVar11 == 2) {
    uStack_64 = 2;
  }
  else if (uVar11 == 1) {
    uStack_64 = 1;
  }
  else {
    pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar17 == (void *)0x0) goto LAB_019a89d4;
    if ((int)uVar11 <= *(int *)((long)pvVar17 + 0x40)) {
      pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if ((pvVar17 == (void *)0x0) || (pGVar13 == (Game_UserData *)0x0)) goto LAB_019a89d4;
      bVar9 = Game_UserData_IsUserActuallyHasSkin_18cfd00
                        (pGVar13,*(void **)((long)pvVar17 + 0x48),(void *)0x0);
      if (!bVar9) {
        uStack_64 = 4;
      }
    }
  }
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar13 == (Game_UserData *)0x0) goto LAB_019a89d4;
  iStack_68 = Game_UserData_get_LastWeekTargetNum_18d4008(pGVar13,(void *)0x0);
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar4 = PTR_DAT_0385ca30;
  puVar3 = PTR_DAT_0385ca28;
  if (pGVar13 == (Game_UserData *)0x0) goto LAB_019a89d4;
  iStack_6c = Game_UserData_get_LastWeekTargetId_18d40a4(pGVar13,(void *)0x0);
  lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar15,*(undefined8 *)puVar3);
  uStack_70 = uStack_64;
  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
  puVar8 = PTR_DAT_038688a0;
  puVar7 = PTR_DAT_03868898;
  puVar6 = PTR_DAT_03868890;
  puVar5 = PTR_DAT_0385ccb0;
  puVar4 = PTR_DAT_0385cca8;
  puVar3 = PTR_DAT_0385ca48;
  if (lVar15 == 0) goto LAB_019a89d4;
  NativeHelper_02133494
            (lVar15,*(undefined8 *)PTR_DAT_038688a0,uVar14,*(undefined8 *)PTR_DAT_0385ca48);
  iStack_74 = iStack_68;
  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_74);
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar3);
  iStack_78 = iStack_6c;
  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_78);
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar3);
  lVar16 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar16,*(undefined8 *)puVar5);
  uVar14 = NativeHelper_02c0d29c(&uStack_64,0);
  puVar4 = PTR_DAT_0385e750;
  puVar3 = PTR_DAT_0385ccb8;
  if (lVar16 == 0) goto LAB_019a89d4;
  NativeHelper_02133494(lVar16,*(undefined8 *)puVar8,uVar14,*(undefined8 *)PTR_DAT_0385ccb8);
  uVar14 = NativeHelper_02c0d29c(&iStack_68,0);
  NativeHelper_02133494(lVar16,*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar3);
  uVar14 = NativeHelper_02c0d29c(&iStack_6c,0);
  NativeHelper_02133494(lVar16,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar3);
  pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  puVar3 = PTR_DAT_038620d8;
  if (pvVar17 == (void *)0x0) goto LAB_019a89d4;
  EventLogger_TkLogEvent_1888ca0(pvVar17,*(undefined8 *)PTR_DAT_038620d8,lVar15,0,0);
  pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if (pvVar17 == (void *)0x0) goto LAB_019a89d4;
  EventLogger_LogEvent_1888558(pvVar17,*(undefined8 *)puVar3,lVar16,0,0);
  pvVar17 = extraout_x1;
  if (uVar11 < 4) {
    lVar15 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(lVar15,self,*(undefined8 *)PTR_DAT_03868868,0);
    pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar17 == (void *)0x0) goto LAB_019a89d4;
    auVar24 = Game_UserData_get_WaitRewardList_18d3d04(pvVar17,0);
    pvVar17 = auVar24._8_8_;
    lVar16 = auVar24._0_8_;
    if ((lVar16 == 0) || (*(int *)(lVar16 + 0x18) < (int)uVar11)) goto LAB_019a8788;
    lVar18 = NativeHelper_0256950c(lVar16,uVar11 - 1,*(undefined8 *)PTR_DAT_03868880);
    iVar10 = *(int *)(lVar16 + 0x18);
    *(undefined4 *)(lVar16 + 0x18) = 0;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (0 < iVar10) {
      NativeHelper_02c326b8(*(undefined8 *)(lVar16 + 0x10),0,iVar10,0);
    }
    pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar17 == (void *)0x0) goto LAB_019a89d4;
    Game_UserData_set_WaitRewardList_18d3ea4(pvVar17,lVar16,0);
    pDVar19 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
    DailyRewardModel_DailyRewardModel_1880ca8(pDVar19,(void *)0x0);
    if ((pDVar19 == (DailyRewardModel *)0x0) || (pDVar19->day = 999, lVar18 == 0))
    goto LAB_019a89d4;
    uVar23 = *(undefined8 *)(lVar18 + 0x18);
    uVar14 = *(undefined8 *)(lVar18 + 0x10);
    pDVar19->bomb = (int)uVar23;
    pDVar19->upgrade = (int)((ulong)uVar23 >> 0x20);
    pDVar19->coin = (int)uVar14;
    pDVar19->clean = (int)((ulong)uVar14 >> 0x20);
    pDVar19->shake = *(int *)(lVar18 + 0x20);
    uStack_70 = uVar11;
    uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
    uVar14 = NativeHelper_02a9d074(*(undefined8 *)PTR_DAT_038688a8,uVar14,0);
    NativeHelper_01919320(0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,uVar14,0);
    plVar20 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    if (plVar20 == (long *)0x0) goto LAB_019a89d4;
    lVar16 = NativeHelper_017ef408(pDVar19,*(undefined8 *)(*plVar20 + 0x40));
    if (lVar16 == 0) {
LAB_019a89dc:
      uVar14 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar14,0);
    }
    if ((int)plVar20[3] == 0) {
LAB_019a89d8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar20[4] = (long)pDVar19;
    NativeHelper_017ef228(plVar20 + 4,pDVar19);
    puVar3 = PTR_DAT_038688b0;
    if ((*(long *)PTR_DAT_038688b0 != 0) &&
       (lVar16 = NativeHelper_017ef408(*(long *)PTR_DAT_038688b0,*(undefined8 *)(*plVar20 + 0x40)),
       lVar16 == 0)) goto LAB_019a89dc;
    if ((*(uint *)(plVar20 + 3) & 0xfffffffe) == 0) goto LAB_019a89d8;
    plVar20[5] = *(long *)puVar3;
    NativeHelper_017ef228();
    if ((lVar15 != 0) &&
       (lVar16 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0))
    goto LAB_019a89dc;
    if (*(uint *)(plVar20 + 3) < 3) goto LAB_019a89d8;
    plVar20[6] = lVar15;
    NativeHelper_017ef228(plVar20 + 6,lVar15);
    Game_Controller_FMViewController_ShowView_18d6f2c
              (*(void **)PTR_DAT_038687e0,false,plVar20,(void *)0x0);
  }
  else {
LAB_019a8788:
    HomeView_TryGainRankSkin_18a4a60(self,pvVar17);
  }
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar13 != (Game_UserData *)0x0) {
    Game_UserData_set_LastWeekRank_18d3fb4(pGVar13,0,(void *)0x0);
    return;
  }
LAB_019a89d4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

