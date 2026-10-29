// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowDailyReward() { }
// Ghidra address: 019a7ad0; ELF VA: 0x18a7ad0; file offset: 0x18a3ad0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019db294) */
/* WARNING: Removing unreachable block (ram,0x019db2a4) */
/* WARNING: Removing unreachable block (ram,0x019db2b0) */
/* WARNING: Removing unreachable block (ram,0x019db2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomeView_ShowDailyReward_18a3ad0(HomeView *self,void *runtimeMethod)

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
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  Game_UserData *pGVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  void *pvVar18;
  undefined8 uVar19;
  IAPItemManager *self_00;
  DailyRewardModel *pDVar20;
  void *pvVar21;
  long *self_01;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *runtimeMethod_01;
  undefined8 *puVar22;
  void *pvVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab227b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03868788);
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03868840);
    NativeHelper_017ef284(PTR_DAT_03868848);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868798);
    bRam0000000003ab227b = 1;
  }
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar13 == (Game_UserData *)0x0) {
LAB_019a7c70:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  bVar9 = Game_UserData_NeedShowDailyReward_18ce1cc(pGVar13,(void *)0x0);
  puVar1 = PTR_DAT_0385d920;
  if (bVar9) {
    lVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868788);
    NativeHelper_01efbaf0(lVar14,self,*(undefined8 *)PTR_DAT_03868840,0);
    lVar15 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(lVar15,self,*(undefined8 *)PTR_DAT_03868848,0);
    plVar16 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,2);
    if (plVar16 == (long *)0x0) goto LAB_019a7c70;
    if ((lVar14 != 0) &&
       (lVar17 = NativeHelper_017ef408(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar17 == 0)) {
LAB_019a7c78:
      uVar19 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar19,0);
    }
    if ((int)plVar16[3] == 0) {
LAB_019a7c74:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar16[4] = lVar14;
    NativeHelper_017ef228(plVar16 + 4,lVar14);
    if ((lVar15 != 0) &&
       (lVar14 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_019a7c78;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_019a7c74;
    plVar16[5] = lVar15;
    NativeHelper_017ef228(plVar16 + 5,lVar15);
    pvVar18 = *(void **)PTR_DAT_03868798;
code_r0x019daf2c:
    puVar1 = PTR_DAT_0385c2a0;
    pvVar21 = pvVar18;
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
      pvVar21 = (void *)NativeHelper_017ef284(PTR_DAT_0386a248);
      bRam0000000003ab24dc = 1;
    }
    Game_Controller_FMViewController_Init_18d63c8(pvVar21);
    pvVar21 = Game_Controller_FMViewController_loadRes_18d6898(pvVar18,runtimeMethod_01);
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar14);
    }
    bVar9 = UnityEngine_object_op_Equality_324f284(pvVar21,(void *)0x0,(void *)0x0);
    puVar4 = PTR_DAT_0386a180;
    puVar2 = PTR_DAT_03868698;
    puVar3 = PTR_DAT_0385c360;
    if (bVar9) {
      pvVar18 = (void *)NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_0386a198,pvVar18,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)puVar3);
      }
      UnityEngine_Debug_LogError_321e360(pvVar18,(void *)0x0);
      return;
    }
    pvVar23 = *(void **)(*(long *)(*(long *)PTR_DAT_0386a180 + 0xb8) + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pvVar21 = UnityEngine_object_Instantiate_1ba983c(pvVar21,pvVar23,*(void **)puVar2);
    if (pvVar21 != (void *)0x0) {
      UnityEngine_object_set_name_3252f54(pvVar21,pvVar18,(void *)0x0);
      self_01 = UnityEngine_GameObject_GetComponent_1b75510(pvVar21,*(void **)PTR_DAT_0386a188);
      puVar1 = PTR_DAT_0386a170;
      if ((self_01 != (long *)0x0) &&
         (pvVar21 = UnityEngine_Component_GetComponent_1b08498(self_01,*(void **)PTR_DAT_0386a170),
         pvVar21 != (void *)0x0)) {
        NativeHelper_0364318c(pvVar21,1,0);
        NativeHelper_036444cc(pvVar21,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0);
        NativeHelper_03643840(0x40a00000,pvVar21,0);
        lVar14 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar14 != 0) {
          if (*(int *)(lVar14 + 0x18) < 1) {
            iVar11 = 0;
          }
          else {
            pvVar23 = (void *)NativeHelper_0256950c
                                        (lVar14,*(int *)(lVar14 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_0386a240);
            if ((pvVar23 == (void *)0x0) ||
               (pvVar23 = UnityEngine_Component_GetComponent_1b08498(pvVar23,*(void **)puVar1),
               pvVar23 == (void *)0x0)) goto code_r0x019db304;
            iVar11 = NativeHelper_03643b40(pvVar23,0);
            iVar11 = iVar11 + 1;
          }
          uVar12 = NativeHelper_0331acd0(*(undefined8 *)PTR_DAT_0386a248,0);
          NativeHelper_03643e20(pvVar21,uVar12,0);
          NativeHelper_03643bf4(pvVar21,iVar11,0);
          lVar14 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          if (lVar14 != 0) {
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar17 = *(long *)PTR_DAT_0386a190;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar10 = *(uint *)(lVar14 + 0x18);
              if (uVar10 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar10 + 1;
                puVar22 = (undefined8 *)(lVar15 + (long)(int)uVar10 * 8 + 0x20);
                *puVar22 = self_01;
                NativeHelper_017ef228(puVar22,self_01);
              }
              else {
                NativeHelper_025697dc
                          (lVar14,self_01,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar14 = NativeHelper_02aa6b6c
                                 (*(undefined8 *)PTR_DAT_0386a220,pvVar18,
                                  *(undefined8 *)PTR_DAT_038678e8,0);
              self_01[4] = lVar14;
              NativeHelper_017ef228();
              (**(code **)(*self_01 + 0x178))(self_01,plVar16,*(undefined8 *)(*self_01 + 0x180));
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
    if (pGVar13 == (Game_UserData *)0x0) goto LAB_019a833c;
    bVar9 = Game_UserData_IsTodaySubscriptionDailyClaimed_18ce690(pGVar13,(void *)0x0);
    if (!bVar9) {
      pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar13 == (Game_UserData *)0x0) {
LAB_019a833c:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      Game_UserData_SaveSubscriptionDailyClaimed_18ce934(pGVar13,(void *)0x0);
      iVar11 = UnityEngine_Random_Range_3246f40(0,4,(void *)0x0);
      pDVar20 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
      DailyRewardModel_DailyRewardModel_1880ca8(pDVar20,(void *)0x0);
      if (pDVar20 == (DailyRewardModel *)0x0) goto LAB_019a833c;
      pDVar20->day = 999;
      if (iVar11 == 2) {
        pDVar20->upgrade = 1;
      }
      else if (iVar11 == 1) {
        pDVar20->bomb = 1;
      }
      else if (iVar11 == 0) {
        pDVar20->clean = 1;
      }
      else {
        pDVar20->shake = 1;
      }
      lVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
      NativeHelper_02b8e36c(lVar14,self,*(undefined8 *)PTR_DAT_03868858,0);
      plVar16 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
      if (plVar16 == (long *)0x0) goto LAB_019a833c;
      lVar15 = NativeHelper_017ef408(pDVar20,*(undefined8 *)(*plVar16 + 0x40));
      if (lVar15 == 0) {
LAB_019a8344:
        uVar19 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef3f4(uVar19,0);
      }
      if ((int)plVar16[3] == 0) {
LAB_019a8340:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
      plVar16[4] = (long)pDVar20;
      NativeHelper_017ef228(plVar16 + 4,pDVar20);
      puVar1 = PTR_DAT_03868860;
      if ((*(long *)PTR_DAT_03868860 != 0) &&
         (lVar15 = NativeHelper_017ef408(*(long *)PTR_DAT_03868860,*(undefined8 *)(*plVar16 + 0x40))
         , lVar15 == 0)) goto LAB_019a8344;
      if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_019a8340;
      plVar16[5] = *(long *)puVar1;
      NativeHelper_017ef228();
      if ((lVar14 != 0) &&
         (lVar15 = NativeHelper_017ef408(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
      goto LAB_019a8344;
      if (*(uint *)(plVar16 + 3) < 3) goto LAB_019a8340;
      plVar16[6] = lVar14;
      NativeHelper_017ef228(plVar16 + 6,lVar14);
      pvVar18 = *(void **)PTR_DAT_038687e0;
      goto code_r0x019daf2c;
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
  uVar10 = Game_UserData_get_LastWeekRank_18d3f6c(pGVar13,(void *)0x0);
  puVar2 = PTR_DAT_0385c2d8;
  uStack_70 = uVar10;
  uVar19 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_70);
  uVar19 = NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar19,0);
  NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar19,0);
  if ((int)uVar10 < 1) {
    HomeView_CheckAndShowDailyQuest_18a49e8(self,runtimeMethod_00);
    return;
  }
  uStack_64 = 0;
  if (uVar10 == 3) {
    uStack_64 = 3;
  }
  else if (uVar10 == 2) {
    uStack_64 = 2;
  }
  else if (uVar10 == 1) {
    uStack_64 = 1;
  }
  else {
    pvVar18 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar18 == (void *)0x0) goto LAB_019a89d4;
    if ((int)uVar10 <= *(int *)((long)pvVar18 + 0x40)) {
      pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      pvVar18 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if ((pvVar18 == (void *)0x0) || (pGVar13 == (Game_UserData *)0x0)) goto LAB_019a89d4;
      bVar9 = Game_UserData_IsUserActuallyHasSkin_18cfd00
                        (pGVar13,*(void **)((long)pvVar18 + 0x48),(void *)0x0);
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
  lVar14 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar14,*(undefined8 *)puVar3);
  uStack_70 = uStack_64;
  uVar19 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
  puVar8 = PTR_DAT_038688a0;
  puVar7 = PTR_DAT_03868898;
  puVar6 = PTR_DAT_03868890;
  puVar5 = PTR_DAT_0385ccb0;
  puVar4 = PTR_DAT_0385cca8;
  puVar3 = PTR_DAT_0385ca48;
  if (lVar14 == 0) goto LAB_019a89d4;
  NativeHelper_02133494
            (lVar14,*(undefined8 *)PTR_DAT_038688a0,uVar19,*(undefined8 *)PTR_DAT_0385ca48);
  iStack_74 = iStack_68;
  uVar19 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_74);
  NativeHelper_02133494(lVar14,*(undefined8 *)puVar7,uVar19,*(undefined8 *)puVar3);
  iStack_78 = iStack_6c;
  uVar19 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_78);
  NativeHelper_02133494(lVar14,*(undefined8 *)puVar6,uVar19,*(undefined8 *)puVar3);
  lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar15,*(undefined8 *)puVar5);
  uVar19 = NativeHelper_02c0d29c(&uStack_64,0);
  puVar4 = PTR_DAT_0385e750;
  puVar3 = PTR_DAT_0385ccb8;
  if (lVar15 == 0) goto LAB_019a89d4;
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar8,uVar19,*(undefined8 *)PTR_DAT_0385ccb8);
  uVar19 = NativeHelper_02c0d29c(&iStack_68,0);
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar7,uVar19,*(undefined8 *)puVar3);
  uVar19 = NativeHelper_02c0d29c(&iStack_6c,0);
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar6,uVar19,*(undefined8 *)puVar3);
  pvVar18 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  puVar3 = PTR_DAT_038620d8;
  if (pvVar18 == (void *)0x0) goto LAB_019a89d4;
  EventLogger_TkLogEvent_1888ca0(pvVar18,*(undefined8 *)PTR_DAT_038620d8,lVar14,0,0);
  pvVar18 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if (pvVar18 == (void *)0x0) goto LAB_019a89d4;
  EventLogger_LogEvent_1888558(pvVar18,*(undefined8 *)puVar3,lVar15,0,0);
  pvVar18 = extraout_x1;
  if (uVar10 < 4) {
    lVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(lVar14,self,*(undefined8 *)PTR_DAT_03868868,0);
    pvVar18 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar18 == (void *)0x0) goto LAB_019a89d4;
    auVar25 = Game_UserData_get_WaitRewardList_18d3d04(pvVar18,0);
    pvVar18 = auVar25._8_8_;
    lVar15 = auVar25._0_8_;
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) < (int)uVar10)) goto LAB_019a8788;
    lVar17 = NativeHelper_0256950c(lVar15,uVar10 - 1,*(undefined8 *)PTR_DAT_03868880);
    iVar11 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (0 < iVar11) {
      NativeHelper_02c326b8(*(undefined8 *)(lVar15 + 0x10),0,iVar11,0);
    }
    pvVar18 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar18 == (void *)0x0) goto LAB_019a89d4;
    Game_UserData_set_WaitRewardList_18d3ea4(pvVar18,lVar15,0);
    pDVar20 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
    DailyRewardModel_DailyRewardModel_1880ca8(pDVar20,(void *)0x0);
    if ((pDVar20 == (DailyRewardModel *)0x0) || (pDVar20->day = 999, lVar17 == 0))
    goto LAB_019a89d4;
    uVar24 = *(undefined8 *)(lVar17 + 0x18);
    uVar19 = *(undefined8 *)(lVar17 + 0x10);
    pDVar20->bomb = (int)uVar24;
    pDVar20->upgrade = (int)((ulong)uVar24 >> 0x20);
    pDVar20->coin = (int)uVar19;
    pDVar20->clean = (int)((ulong)uVar19 >> 0x20);
    pDVar20->shake = *(int *)(lVar17 + 0x20);
    uStack_70 = uVar10;
    uVar19 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
    uVar19 = NativeHelper_02a9d074(*(undefined8 *)PTR_DAT_038688a8,uVar19,0);
    NativeHelper_01919320(0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,uVar19,0);
    plVar16 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    if (plVar16 == (long *)0x0) goto LAB_019a89d4;
    lVar15 = NativeHelper_017ef408(pDVar20,*(undefined8 *)(*plVar16 + 0x40));
    if (lVar15 == 0) {
LAB_019a89dc:
      uVar19 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar19,0);
    }
    if ((int)plVar16[3] == 0) {
LAB_019a89d8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar16[4] = (long)pDVar20;
    NativeHelper_017ef228(plVar16 + 4,pDVar20);
    puVar3 = PTR_DAT_038688b0;
    if ((*(long *)PTR_DAT_038688b0 != 0) &&
       (lVar15 = NativeHelper_017ef408(*(long *)PTR_DAT_038688b0,*(undefined8 *)(*plVar16 + 0x40)),
       lVar15 == 0)) goto LAB_019a89dc;
    if ((*(uint *)(plVar16 + 3) & 0xfffffffe) == 0) goto LAB_019a89d8;
    plVar16[5] = *(long *)puVar3;
    NativeHelper_017ef228();
    if ((lVar14 != 0) &&
       (lVar15 = NativeHelper_017ef408(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
    goto LAB_019a89dc;
    if (*(uint *)(plVar16 + 3) < 3) goto LAB_019a89d8;
    plVar16[6] = lVar14;
    NativeHelper_017ef228(plVar16 + 6,lVar14);
    Game_Controller_FMViewController_ShowView_18d6f2c
              (*(void **)PTR_DAT_038687e0,false,plVar16,(void *)0x0);
  }
  else {
LAB_019a8788:
    HomeView_TryGainRankSkin_18a4a60(self,pvVar18);
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

