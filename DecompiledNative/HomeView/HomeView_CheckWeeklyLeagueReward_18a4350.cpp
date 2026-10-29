// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckWeeklyLeagueReward() { }
// Ghidra address: 019a8350; ELF VA: 0x18a8350; file offset: 0x18a4350
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomeView_CheckWeeklyLeagueReward_18a4350(HomeView *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  Game_UserData *pGVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  DailyRewardModel *self_00;
  long *data;
  void *runtimeMethod_00;
  void *extraout_x1;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  
  puVar6 = PTR_DAT_0385db10;
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
  pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar6);
  puVar3 = PTR_DAT_03868888;
  if (pGVar12 == (Game_UserData *)0x0) goto LAB_019a89d4;
  uVar11 = Game_UserData_get_LastWeekRank_18d3f6c(pGVar12,(void *)0x0);
  puVar2 = PTR_DAT_0385c2d8;
  uStack_70 = uVar11;
  uVar13 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_70);
  uVar13 = NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar13,0);
  NativeHelper_01919320(0,0x3f800000,0x3f800000,0x3f800000,uVar13,0);
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
    pvVar16 = Singleton_get_Instance_27784f4(*(void **)puVar6);
    if (pvVar16 == (void *)0x0) goto LAB_019a89d4;
    if ((int)uVar11 <= *(int *)((long)pvVar16 + 0x40)) {
      pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar6);
      pvVar16 = Singleton_get_Instance_27784f4(*(void **)puVar6);
      if ((pvVar16 == (void *)0x0) || (pGVar12 == (Game_UserData *)0x0)) goto LAB_019a89d4;
      bVar10 = Game_UserData_IsUserActuallyHasSkin_18cfd00
                         (pGVar12,*(void **)((long)pvVar16 + 0x48),(void *)0x0);
      if (!bVar10) {
        uStack_64 = 4;
      }
    }
  }
  pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar6);
  if (pGVar12 == (Game_UserData *)0x0) goto LAB_019a89d4;
  iStack_68 = Game_UserData_get_LastWeekTargetNum_18d4008(pGVar12,(void *)0x0);
  pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar6);
  puVar4 = PTR_DAT_0385ca30;
  puVar3 = PTR_DAT_0385ca28;
  if (pGVar12 == (Game_UserData *)0x0) goto LAB_019a89d4;
  iStack_6c = Game_UserData_get_LastWeekTargetId_18d40a4(pGVar12,(void *)0x0);
  lVar14 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar14,*(undefined8 *)puVar3);
  uStack_70 = uStack_64;
  uVar13 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
  puVar9 = PTR_DAT_038688a0;
  puVar8 = PTR_DAT_03868898;
  puVar7 = PTR_DAT_03868890;
  puVar5 = PTR_DAT_0385ccb0;
  puVar4 = PTR_DAT_0385cca8;
  puVar3 = PTR_DAT_0385ca48;
  if (lVar14 == 0) goto LAB_019a89d4;
  NativeHelper_02133494
            (lVar14,*(undefined8 *)PTR_DAT_038688a0,uVar13,*(undefined8 *)PTR_DAT_0385ca48);
  iStack_74 = iStack_68;
  uVar13 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_74);
  NativeHelper_02133494(lVar14,*(undefined8 *)puVar8,uVar13,*(undefined8 *)puVar3);
  iStack_78 = iStack_6c;
  uVar13 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_78);
  NativeHelper_02133494(lVar14,*(undefined8 *)puVar7,uVar13,*(undefined8 *)puVar3);
  lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar15,*(undefined8 *)puVar5);
  uVar13 = NativeHelper_02c0d29c(&uStack_64,0);
  puVar4 = PTR_DAT_0385e750;
  puVar3 = PTR_DAT_0385ccb8;
  if (lVar15 == 0) goto LAB_019a89d4;
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar9,uVar13,*(undefined8 *)PTR_DAT_0385ccb8);
  uVar13 = NativeHelper_02c0d29c(&iStack_68,0);
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar8,uVar13,*(undefined8 *)puVar3);
  uVar13 = NativeHelper_02c0d29c(&iStack_6c,0);
  NativeHelper_02133494(lVar15,*(undefined8 *)puVar7,uVar13,*(undefined8 *)puVar3);
  pvVar16 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  puVar3 = PTR_DAT_038620d8;
  if (pvVar16 == (void *)0x0) goto LAB_019a89d4;
  EventLogger_TkLogEvent_1888ca0(pvVar16,*(undefined8 *)PTR_DAT_038620d8,lVar14,0,0);
  pvVar16 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if (pvVar16 == (void *)0x0) goto LAB_019a89d4;
  EventLogger_LogEvent_1888558(pvVar16,*(undefined8 *)puVar3,lVar15,0,0);
  pvVar16 = extraout_x1;
  if (uVar11 < 4) {
    lVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(lVar14,self,*(undefined8 *)PTR_DAT_03868868,0);
    pvVar16 = Singleton_get_Instance_27784f4(*(void **)puVar6);
    if (pvVar16 == (void *)0x0) goto LAB_019a89d4;
    auVar19 = Game_UserData_get_WaitRewardList_18d3d04(pvVar16,0);
    pvVar16 = auVar19._8_8_;
    lVar15 = auVar19._0_8_;
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) < (int)uVar11)) goto LAB_019a8788;
    lVar17 = NativeHelper_0256950c(lVar15,uVar11 - 1,*(undefined8 *)PTR_DAT_03868880);
    iVar1 = *(int *)(lVar15 + 0x18);
    *(undefined4 *)(lVar15 + 0x18) = 0;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (0 < iVar1) {
      NativeHelper_02c326b8(*(undefined8 *)(lVar15 + 0x10),0,iVar1,0);
    }
    pvVar16 = Singleton_get_Instance_27784f4(*(void **)puVar6);
    if (pvVar16 == (void *)0x0) goto LAB_019a89d4;
    Game_UserData_set_WaitRewardList_18d3ea4(pvVar16,lVar15,0);
    self_00 = (DailyRewardModel *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868850);
    DailyRewardModel_DailyRewardModel_1880ca8(self_00,(void *)0x0);
    if ((self_00 == (DailyRewardModel *)0x0) || (self_00->day = 999, lVar17 == 0))
    goto LAB_019a89d4;
    uVar18 = *(undefined8 *)(lVar17 + 0x18);
    uVar13 = *(undefined8 *)(lVar17 + 0x10);
    self_00->bomb = (int)uVar18;
    self_00->upgrade = (int)((ulong)uVar18 >> 0x20);
    self_00->coin = (int)uVar13;
    self_00->clean = (int)((ulong)uVar13 >> 0x20);
    self_00->shake = *(int *)(lVar17 + 0x20);
    uStack_70 = uVar11;
    uVar13 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_70);
    uVar13 = NativeHelper_02a9d074(*(undefined8 *)PTR_DAT_038688a8,uVar13,0);
    NativeHelper_01919320(0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,uVar13,0);
    data = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    if (data == (long *)0x0) goto LAB_019a89d4;
    lVar15 = NativeHelper_017ef408(self_00,*(undefined8 *)(*data + 0x40));
    if (lVar15 == 0) {
LAB_019a89dc:
      uVar13 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar13,0);
    }
    if ((int)data[3] == 0) {
LAB_019a89d8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    data[4] = (long)self_00;
    NativeHelper_017ef228(data + 4,self_00);
    puVar3 = PTR_DAT_038688b0;
    if ((*(long *)PTR_DAT_038688b0 != 0) &&
       (lVar15 = NativeHelper_017ef408(*(long *)PTR_DAT_038688b0,*(undefined8 *)(*data + 0x40)),
       lVar15 == 0)) goto LAB_019a89dc;
    if ((*(uint *)(data + 3) & 0xfffffffe) == 0) goto LAB_019a89d8;
    data[5] = *(long *)puVar3;
    NativeHelper_017ef228();
    if ((lVar14 != 0) &&
       (lVar15 = NativeHelper_017ef408(lVar14,*(undefined8 *)(*data + 0x40)), lVar15 == 0))
    goto LAB_019a89dc;
    if (*(uint *)(data + 3) < 3) goto LAB_019a89d8;
    data[6] = lVar14;
    NativeHelper_017ef228(data + 6,lVar14);
    Game_Controller_FMViewController_ShowView_18d6f2c
              (*(void **)PTR_DAT_038687e0,false,data,(void *)0x0);
  }
  else {
LAB_019a8788:
    HomeView_TryGainRankSkin_18a4a60(self,pvVar16);
  }
  pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar6);
  if (pGVar12 != (Game_UserData *)0x0) {
    Game_UserData_set_LastWeekRank_18d3fb4(pGVar12,0,(void *)0x0);
    return;
  }
LAB_019a89d4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

