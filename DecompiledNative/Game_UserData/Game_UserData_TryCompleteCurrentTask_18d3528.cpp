// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void TryCompleteCurrentTask() { }
// Ghidra address: 019d7528; ELF VA: 0x18d7528; file offset: 0x18d3528
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_TryCompleteCurrentTask_18d3528(Game_UserData *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar9;
  uint uVar8;
  Game_UserData *self_00;
  long lVar10;
  undefined8 uVar11;
  void *runtimeMethod_00;
  void *pvVar12;
  Game_UserData *self_01;
  Game_UserData *self_02;
  Game_UserData *self_03;
  Game_UserData *self_04;
  Game_UserData *self_05;
  long *data;
  long lVar13;
  void *extraout_x1;
  void *runtimeMethod_01;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  undefined8 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000003ab249b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_03869fc8);
    NativeHelper_017ef284(PTR_DAT_03869fd0);
    NativeHelper_017ef284(PTR_DAT_03867100);
    NativeHelper_017ef284(PTR_DAT_03869fd8);
    NativeHelper_017ef284(PTR_DAT_03869fe0);
    NativeHelper_017ef284(PTR_DAT_0385dbb0);
    bRam0000000003ab249b = 1;
    runtimeMethod = extraout_x1;
  }
  uStack_68 = 0;
  self_00 = (Game_UserData *)Game_UserData_GetCurrentTaskItem_18d2e94(self,runtimeMethod);
  iVar7 = Game_UserData_get_CurrentTaskCompletedNum_18d3344(self_00,runtimeMethod_01);
  puVar3 = PTR_DAT_0385dbb0;
  if (self_00 != (Game_UserData *)0x0) {
    if (iVar7 < *(int *)&self_00->field_0x14) {
      return;
    }
    uVar8 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)PTR_DAT_0385dbb0,0,(void *)0x0);
    auVar16._4_4_ = 0;
    auVar16._0_4_ = uVar8;
    auVar16._8_8_ = extraout_x1_00;
    if (uVar8 != 0xffffffff) {
      iVar7 = -1;
      if ((int)(uVar8 + 1) < 8) {
        iVar7 = uVar8 + 1;
      }
      UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,iVar7,(void *)0x0);
      auVar16 = NativeHelper_0334aa10(0);
    }
    uVar14 = *(undefined8 *)PTR_DAT_03869fe0;
    iVar7 = Game_UserData_get_CurrentTaskDuration_18d39b4(auVar16._0_8_,auVar16._8_8_);
    fVar15 = self->CurrentTaskPlayTime;
    uVar11 = extraout_x1_01;
    if (cRam0000000003ab1f7f == '\0') {
      NativeHelper_017ef284(PTR_DAT_0385d8b8);
      cRam0000000003ab1f7f = '\x01';
      uVar11 = extraout_x1_02;
    }
    auVar17._8_8_ = uVar11;
    auVar17._0_8_ = *(long *)PTR_DAT_0385d8b8;
    if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
      auVar17 = NativeHelper_017ef404();
    }
    iVar1 = -0x80000000;
    if ((float)(int)fVar15 != INFINITY) {
      iVar1 = (int)fVar15;
    }
    uStack_68._4_4_ = iVar1 + iVar7;
    iVar9 = Game_UserData_get_CurrentTaskClickNumber_18d39fc(auVar17._0_8_,auVar17._8_8_);
    iVar9 = self->CurrentTaskPlayClickNumber + iVar9;
    uStack_68 = CONCAT44(uStack_68._4_4_,iVar9);
    lVar10 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
    NativeHelper_02132ae8(lVar10,*(undefined8 *)PTR_DAT_0385ca28);
    uVar11 = NativeHelper_02c0d29c(&self_00->field_0x10,0);
    puVar6 = PTR_DAT_03869fd0;
    puVar3 = PTR_DAT_0385ca48;
    if (lVar10 != 0) {
      NativeHelper_02133494
                (lVar10,*(undefined8 *)PTR_DAT_03869fd0,uVar11,*(undefined8 *)PTR_DAT_0385ca48);
      puVar2 = PTR_DAT_0385c2d8;
      iStack_6c = iVar1 + iVar7;
      uVar11 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_6c);
      puVar5 = PTR_DAT_03869fc8;
      NativeHelper_02133494(lVar10,*(undefined8 *)PTR_DAT_03869fc8,uVar11,*(undefined8 *)puVar3);
      iStack_70 = iVar9;
      uVar11 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_70);
      puVar4 = PTR_DAT_03867100;
      NativeHelper_02133494(lVar10,*(undefined8 *)PTR_DAT_03867100,uVar11,*(undefined8 *)puVar3);
      runtimeMethod_00 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385cca8);
      NativeHelper_02132ae8(runtimeMethod_00,*(undefined8 *)PTR_DAT_0385ccb0);
      uVar11 = NativeHelper_02c0d29c(&self_00->field_0x10,0);
      puVar3 = PTR_DAT_0385ccb8;
      if (runtimeMethod_00 != (void *)0x0) {
        NativeHelper_02133494
                  (runtimeMethod_00,*(undefined8 *)puVar6,uVar11,*(undefined8 *)PTR_DAT_0385ccb8);
        uVar11 = NativeHelper_02c0d29c((long)&uStack_68 + 4,0);
        NativeHelper_02133494(runtimeMethod_00,*(undefined8 *)puVar5,uVar11,*(undefined8 *)puVar3);
        uVar11 = NativeHelper_02c0d29c(&uStack_68,0);
        NativeHelper_02133494(runtimeMethod_00,*(undefined8 *)puVar4,uVar11,*(undefined8 *)puVar3);
        puVar3 = PTR_DAT_0385e750;
        pvVar12 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
        if (pvVar12 != (void *)0x0) {
          EventLogger_TkLogEvent_1888ca0(pvVar12,uVar14,lVar10,0,0);
          pvVar12 = Singleton_get_Instance_27784f4(*(void **)puVar3);
          if (pvVar12 != (void *)0x0) {
            self_01 = (Game_UserData *)
                      EventLogger_OtherLogEvent_189c590(pvVar12,uVar14,runtimeMethod_00,0,0);
            Game_UserData_set_CurrentTaskDuration_18d3b08(self_01,0,runtimeMethod_00);
            self->CurrentTaskPlayTime = 0.0;
            Game_UserData_set_CurrentTaskClickNumber_18d3b5c(self_02,0,runtimeMethod_00);
            self->CurrentTaskPlayClickNumber = 0;
            Game_UserData_UpdateCurrentTaskItem_18d2f48(self_03,runtimeMethod_02);
            Game_UserData_set_CurrentTaskCompletedNum_18d338c(self_04,0,runtimeMethod_00);
            Game_UserData_AddCompletedTaskCount_18d2e3c(self_05,runtimeMethod_03);
            data = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,2);
            uStack_74 = *(undefined4 *)&self_00->field_0x18;
            lVar10 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_74);
            if (data != (long *)0x0) {
              if ((lVar10 != 0) &&
                 (lVar13 = NativeHelper_017ef408(lVar10,*(undefined8 *)(*data + 0x40)), lVar13 == 0)
                 ) {
LAB_019d79a8:
                uVar11 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef3f4(uVar11,0);
              }
              if ((int)data[3] != 0) {
                data[4] = lVar10;
                NativeHelper_017ef228(data + 4,lVar10);
                uStack_78 = *(undefined4 *)&self_00->field_0x1c;
                lVar10 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_78);
                if ((lVar10 != 0) &&
                   (lVar13 = NativeHelper_017ef408(lVar10,*(undefined8 *)(*data + 0x40)),
                   lVar13 == 0)) goto LAB_019d79a8;
                if ((*(uint *)(data + 3) & 0xfffffffe) != 0) {
                  data[5] = lVar10;
                  NativeHelper_017ef228(data + 5,lVar10);
                  Game_Controller_FMViewController_ShowView_18d6f2c
                            (*(void **)PTR_DAT_03869fd8,false,data,(void *)0x0);
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef538();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

