// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void TryUpdateCurrentTask(int targetGrade, bool delayCompleteTask) { }
// Ghidra address: 019d74d4; ELF VA: 0x18d74d4; file offset: 0x18d34d4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_TryUpdateCurrentTask_18d34d4
               (Game_UserData *self,int targetGrade,bool delayCompleteTask,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar9;
  int iVar8;
  Game_UserData *pGVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  void *pvVar14;
  Game_UserData *self_00;
  Game_UserData *self_01;
  Game_UserData *self_02;
  Game_UserData *self_03;
  Game_UserData *self_04;
  long *data;
  long lVar15;
  void *runtimeMethod_00;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_01;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  undefined8 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  pvVar13 = (void *)(ulong)delayCompleteTask;
  pGVar10 = (Game_UserData *)
            Game_UserData_GetCurrentTaskItem_18d2e94(self,(void *)(ulong)(uint)targetGrade);
  if ((pGVar10 != (Game_UserData *)0x0) && (*(int *)&pGVar10->field_0x10 == targetGrade)) {
    uVar7 = Game_UserData_get_CurrentTaskCompletedNum_18d3344(pGVar10,runtimeMethod_00);
    Game_UserData_set_CurrentTaskCompletedNum_18d338c
              ((Game_UserData *)(ulong)uVar7,uVar7 + 1,pvVar13);
    if (!delayCompleteTask) {
      pvVar13 = extraout_x1;
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
        pvVar13 = extraout_x1_00;
      }
      uStack_68 = 0;
      pGVar10 = (Game_UserData *)Game_UserData_GetCurrentTaskItem_18d2e94(self,pvVar13);
      iVar8 = Game_UserData_get_CurrentTaskCompletedNum_18d3344(pGVar10,runtimeMethod_01);
      puVar3 = PTR_DAT_0385dbb0;
      if (pGVar10 != (Game_UserData *)0x0) {
        if (iVar8 < *(int *)&pGVar10->field_0x14) {
          return;
        }
        uVar7 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)PTR_DAT_0385dbb0,0,(void *)0x0);
        auVar18._4_4_ = 0;
        auVar18._0_4_ = uVar7;
        auVar18._8_8_ = extraout_x1_01;
        if (uVar7 != 0xffffffff) {
          iVar8 = -1;
          if ((int)(uVar7 + 1) < 8) {
            iVar8 = uVar7 + 1;
          }
          UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,iVar8,(void *)0x0);
          auVar18 = NativeHelper_0334aa10(0);
        }
        uVar16 = *(undefined8 *)PTR_DAT_03869fe0;
        iVar8 = Game_UserData_get_CurrentTaskDuration_18d39b4(auVar18._0_8_,auVar18._8_8_);
        fVar17 = self->CurrentTaskPlayTime;
        uVar12 = extraout_x1_02;
        if (cRam0000000003ab1f7f == '\0') {
          NativeHelper_017ef284(PTR_DAT_0385d8b8);
          cRam0000000003ab1f7f = '\x01';
          uVar12 = extraout_x1_03;
        }
        auVar19._8_8_ = uVar12;
        auVar19._0_8_ = *(long *)PTR_DAT_0385d8b8;
        if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
          auVar19 = NativeHelper_017ef404();
        }
        iVar1 = -0x80000000;
        if ((float)(int)fVar17 != INFINITY) {
          iVar1 = (int)fVar17;
        }
        uStack_68._4_4_ = iVar1 + iVar8;
        iVar9 = Game_UserData_get_CurrentTaskClickNumber_18d39fc(auVar19._0_8_,auVar19._8_8_);
        iVar9 = self->CurrentTaskPlayClickNumber + iVar9;
        uStack_68 = CONCAT44(uStack_68._4_4_,iVar9);
        lVar11 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
        NativeHelper_02132ae8(lVar11,*(undefined8 *)PTR_DAT_0385ca28);
        uVar12 = NativeHelper_02c0d29c(&pGVar10->field_0x10,0);
        puVar6 = PTR_DAT_03869fd0;
        puVar3 = PTR_DAT_0385ca48;
        if (lVar11 != 0) {
          NativeHelper_02133494
                    (lVar11,*(undefined8 *)PTR_DAT_03869fd0,uVar12,*(undefined8 *)PTR_DAT_0385ca48);
          puVar2 = PTR_DAT_0385c2d8;
          iStack_6c = iVar1 + iVar8;
          uVar12 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_6c);
          puVar5 = PTR_DAT_03869fc8;
          NativeHelper_02133494(lVar11,*(undefined8 *)PTR_DAT_03869fc8,uVar12,*(undefined8 *)puVar3)
          ;
          iStack_70 = iVar9;
          uVar12 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_70);
          puVar4 = PTR_DAT_03867100;
          NativeHelper_02133494(lVar11,*(undefined8 *)PTR_DAT_03867100,uVar12,*(undefined8 *)puVar3)
          ;
          pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385cca8);
          NativeHelper_02132ae8(pvVar13,*(undefined8 *)PTR_DAT_0385ccb0);
          uVar12 = NativeHelper_02c0d29c(&pGVar10->field_0x10,0);
          puVar3 = PTR_DAT_0385ccb8;
          if (pvVar13 != (void *)0x0) {
            NativeHelper_02133494
                      (pvVar13,*(undefined8 *)puVar6,uVar12,*(undefined8 *)PTR_DAT_0385ccb8);
            uVar12 = NativeHelper_02c0d29c((long)&uStack_68 + 4,0);
            NativeHelper_02133494(pvVar13,*(undefined8 *)puVar5,uVar12,*(undefined8 *)puVar3);
            uVar12 = NativeHelper_02c0d29c(&uStack_68,0);
            NativeHelper_02133494(pvVar13,*(undefined8 *)puVar4,uVar12,*(undefined8 *)puVar3);
            puVar3 = PTR_DAT_0385e750;
            pvVar14 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
            if (pvVar14 != (void *)0x0) {
              EventLogger_TkLogEvent_1888ca0(pvVar14,uVar16,lVar11,0,0);
              pvVar14 = Singleton_get_Instance_27784f4(*(void **)puVar3);
              if (pvVar14 != (void *)0x0) {
                self_00 = (Game_UserData *)
                          EventLogger_OtherLogEvent_189c590(pvVar14,uVar16,pvVar13,0,0);
                Game_UserData_set_CurrentTaskDuration_18d3b08(self_00,0,pvVar13);
                self->CurrentTaskPlayTime = 0.0;
                Game_UserData_set_CurrentTaskClickNumber_18d3b5c(self_01,0,pvVar13);
                self->CurrentTaskPlayClickNumber = 0;
                Game_UserData_UpdateCurrentTaskItem_18d2f48(self_02,runtimeMethod_02);
                Game_UserData_set_CurrentTaskCompletedNum_18d338c(self_03,0,pvVar13);
                Game_UserData_AddCompletedTaskCount_18d2e3c(self_04,runtimeMethod_03);
                data = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,2);
                uStack_74 = *(undefined4 *)&pGVar10->field_0x18;
                lVar11 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_74);
                if (data != (long *)0x0) {
                  if ((lVar11 != 0) &&
                     (lVar15 = NativeHelper_017ef408(lVar11,*(undefined8 *)(*data + 0x40)),
                     lVar15 == 0)) {
LAB_019d79a8:
                    uVar12 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef3f4(uVar12,0);
                  }
                  if ((int)data[3] != 0) {
                    data[4] = lVar11;
                    NativeHelper_017ef228(data + 4,lVar11);
                    uStack_78 = *(undefined4 *)&pGVar10->field_0x1c;
                    lVar11 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_78);
                    if ((lVar11 != 0) &&
                       (lVar15 = NativeHelper_017ef408(lVar11,*(undefined8 *)(*data + 0x40)),
                       lVar15 == 0)) goto LAB_019d79a8;
                    if ((*(uint *)(data + 3) & 0xfffffffe) != 0) {
                      data[5] = lVar11;
                      NativeHelper_017ef228(data + 5,lVar11);
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
  }
  return;
}

