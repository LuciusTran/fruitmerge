// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LogLevelUp() { }
// Ghidra address: 019ceb7c; ELF VA: 0x18ceb7c; file offset: 0x18cab7c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_LogLevelUp_18cab7c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  Game_UserData *pGVar15;
  void *extraout_x1;
  void *runtimeMethod_00;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_0385ccb0;
  puVar1 = PTR_DAT_0385cca8;
  puVar3 = PTR_DAT_0385ca30;
  puVar2 = PTR_DAT_0385ca28;
  if ((bRam0000000003ab2420 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_03867230);
    NativeHelper_017ef284(PTR_DAT_03869c30);
    NativeHelper_017ef284(PTR_DAT_03869c38);
    NativeHelper_017ef284(PTR_DAT_03869c40);
    NativeHelper_017ef284(PTR_DAT_03869c48);
    NativeHelper_017ef284(PTR_DAT_03869c50);
    bRam0000000003ab2420 = 1;
    runtimeMethod = extraout_x1;
  }
  uStack_68 = 0;
  lVar11 = NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_02132ae8(lVar11,*(undefined8 *)puVar4);
  lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_02132ae8(lVar12,*(undefined8 *)puVar2);
  iVar10 = Game_UserData_GetExpLevel_18c70c4(self,runtimeMethod_00);
  uStack_68._4_4_ = iVar10;
  uVar13 = NativeHelper_02c0d29c((long)&uStack_68 + 4,0);
  puVar3 = PTR_DAT_03867230;
  puVar2 = PTR_DAT_0385ccb8;
  if (lVar11 != 0) {
    NativeHelper_02133494
              (lVar11,*(undefined8 *)PTR_DAT_03867230,uVar13,*(undefined8 *)PTR_DAT_0385ccb8);
    puVar1 = PTR_DAT_0385c2d8;
    iStack_6c = uStack_68._4_4_;
    pvVar14 = (void *)NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_6c);
    puVar9 = PTR_DAT_03869c50;
    puVar8 = PTR_DAT_03869c48;
    puVar7 = PTR_DAT_03869c38;
    puVar6 = PTR_DAT_03869c30;
    puVar5 = PTR_DAT_0385e750;
    puVar4 = PTR_DAT_0385ca48;
    if (lVar12 != 0) {
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494
                          (lVar12,*(undefined8 *)puVar3,pvVar14,*(undefined8 *)PTR_DAT_0385ca48);
      uStack_68._0_4_ =
           Game_UserData_GetExpLevelUseTime_18cb404(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_02c0d29c(&uStack_68,0);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar11,*(undefined8 *)puVar7,pvVar14,*(undefined8 *)puVar2);
      iStack_70 = Game_UserData_GetExpLevelUseTime_18cb404(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_70);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar12,*(undefined8 *)puVar7,pvVar14,*(undefined8 *)puVar4);
      uStack_68._0_4_ = Game_UserData_GetLevelClick_18cb480(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_02c0d29c(&uStack_68,0);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar11,*(undefined8 *)puVar9,pvVar14,*(undefined8 *)puVar2);
      iStack_74 = Game_UserData_GetLevelClick_18cb480(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_74);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar12,*(undefined8 *)puVar9,pvVar14,*(undefined8 *)puVar4);
      uStack_68._0_4_ = Game_UserData_GetLevelMerge_18cb4fc(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_02c0d29c(&uStack_68,0);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar11,*(undefined8 *)puVar8,pvVar14,*(undefined8 *)puVar2);
      iStack_78 = Game_UserData_GetLevelMerge_18cb4fc(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_78);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar12,*(undefined8 *)puVar8,pvVar14,*(undefined8 *)puVar4);
      uStack_68._0_4_ =
           Game_UserData_GetLevelMergeScore_18cb578(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      pvVar14 = (void *)NativeHelper_02c0d29c(&uStack_68,0);
      pGVar15 = (Game_UserData *)
                NativeHelper_02133494(lVar11,*(undefined8 *)puVar6,pvVar14,*(undefined8 *)puVar2);
      iStack_7c = Game_UserData_GetLevelMergeScore_18cb578(pGVar15,uStack_68._4_4_ + -1,pvVar14);
      uVar13 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_7c);
      NativeHelper_02133494(lVar12,*(undefined8 *)puVar6,uVar13,*(undefined8 *)puVar4);
      pvVar14 = Singleton_get_Instance_27784f4(*(void **)puVar5);
      puVar2 = PTR_DAT_03869c40;
      if (pvVar14 != (void *)0x0) {
        EventLogger_LogEvent_1888558(pvVar14,*(undefined8 *)PTR_DAT_03869c40,lVar11,0,0);
        pvVar14 = Singleton_get_Instance_27784f4(*(void **)puVar5);
        if (pvVar14 != (void *)0x0) {
          EventLogger_TkLogEvent_1888ca0(pvVar14,*(undefined8 *)puVar2,lVar12,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

