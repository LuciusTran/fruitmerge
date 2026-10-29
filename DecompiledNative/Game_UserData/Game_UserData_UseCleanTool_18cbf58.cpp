// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UseCleanTool(int num) { }
// Ghidra address: 019cff58; ELF VA: 0x18cff58; file offset: 0x18cbf58
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_UseCleanTool_18cbf58(Game_UserData *self,int num,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  DataManager *self_00;
  Game_UserData *pGVar10;
  EventLogger *self_01;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  undefined1 auVar14 [16];
  int iStack_58;
  int iStack_54;
  
  pvVar11 = (void *)(ulong)(uint)num;
  if ((bRam0000000003ab2436 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867230);
    NativeHelper_017ef284(PTR_DAT_03869d30);
    NativeHelper_017ef284(PTR_DAT_03868b40);
    NativeHelper_017ef284(PTR_DAT_03869d38);
    NativeHelper_017ef284(PTR_DAT_03869d40);
    auVar14 = NativeHelper_017ef284(PTR_DAT_03869d28);
    pvVar11 = auVar14._8_8_;
    self = auVar14._0_8_;
    bRam0000000003ab2436 = 1;
  }
  puVar2 = PTR_DAT_03869d28;
  puVar4 = PTR_DAT_03868b40;
  puVar3 = PTR_DAT_0385d9d8;
  puVar1 = PTR_DAT_0385d950;
  iStack_54 = 0;
  if (num < 1) {
    return;
  }
  iVar9 = Game_UserData_GetCleanToolNum_18cbedc(self,pvVar11);
  UnityEngine_PlayerPrefs_SetInt_3245fa8
            (*(void **)puVar2,iVar9 - num & (iVar9 - num >> 0x1f ^ 0xffffffffU),(void *)0x0);
  NativeHelper_0334aa10(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_Broadcast_1875470(*(void **)puVar4,(void *)0x0);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar3);
  puVar4 = PTR_DAT_0385e750;
  puVar3 = PTR_DAT_0385db10;
  puVar1 = PTR_DAT_0385d918;
  if (self_00 != (DataManager *)0x0) {
    DataManager_UpdateDailyTaskProgress_1809ddc(self_00,7,num,1,(void *)0x0);
    pGVar10 = *(Game_UserData **)puVar1;
    pvVar11 = extraout_x1;
    if (*(int *)((long)&pGVar10[2].PlayerLeagueData + 4) == 0) {
      NativeHelper_017ef404();
      pGVar10 = *(Game_UserData **)puVar1;
      pvVar11 = extraout_x1_00;
    }
    *(int *)(*(long *)&pGVar10[2].field_0x10 + 0x70) =
         *(int *)(*(long *)&pGVar10[2].field_0x10 + 0x70) + 1;
    Game_UserData_RecordOnceGameData_18caf38(pGVar10,pvVar11);
    self_01 = Singleton_get_Instance_27784f4(*(void **)puVar4);
    pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
    if (pGVar10 != (Game_UserData *)0x0) {
      iStack_54 = Game_UserData_GetTotalLevels_18c9af8(pGVar10,runtimeMethod_00);
      iStack_54 = iStack_54 + 1;
      pvVar11 = (void *)NativeHelper_02c0d29c(&iStack_54,0);
      puVar8 = PTR_DAT_03869d40;
      puVar7 = PTR_DAT_03869d38;
      puVar6 = PTR_DAT_03869d30;
      puVar5 = PTR_DAT_03867230;
      puVar2 = PTR_DAT_0385ca30;
      puVar1 = PTR_DAT_0385ca28;
      if (self_01 != (EventLogger *)0x0) {
        EventLogger_LogEvent_189bb54
                  (self_01,*(void **)PTR_DAT_03869d30,*(void **)PTR_DAT_03869d40,
                   *(void **)PTR_DAT_03869d38,*(void **)PTR_DAT_03867230,pvVar11,(void *)0x0,
                   (void *)0x0);
        pvVar11 = Singleton_get_Instance_27784f4(*(void **)puVar4);
        lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar2);
        NativeHelper_02132ae8(lVar12,*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_0385ca48;
        if (lVar12 != 0) {
          NativeHelper_02133494
                    (lVar12,*(undefined8 *)puVar8,*(undefined8 *)puVar7,
                     *(undefined8 *)PTR_DAT_0385ca48);
          pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
          if (pGVar10 != (Game_UserData *)0x0) {
            iStack_58 = Game_UserData_GetTotalLevels_18c9af8(pGVar10,runtimeMethod_01);
            iStack_58 = iStack_58 + 1;
            uVar13 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_58);
            NativeHelper_02133494(lVar12,*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar1);
            if (pvVar11 != (void *)0x0) {
              EventLogger_TkLogEvent_1888ca0(pvVar11,*(undefined8 *)puVar6,lVar12,0,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

