// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CheatCompleteCurrentRoom() { }
// Ghidra address: 0198c174; ELF VA: 0x188c174; file offset: 0x1888174
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_CheatCompleteCurrentRoom_1888174(BuildHouse *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  undefined8 uVar11;
  Game_UserData *pGVar12;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *pvVar13;
  longlong lStack_70;
  longlong lStack_68;
  
  if ((bRam0000000003ab214d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038679a8);
    NativeHelper_017ef284(PTR_DAT_038678a0);
    NativeHelper_017ef284(PTR_DAT_038679b0);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_038679b8);
    NativeHelper_017ef284(PTR_DAT_03867978);
    NativeHelper_017ef284(PTR_DAT_038678f0);
    bRam0000000003ab214d = 1;
    runtimeMethod = extraout_x1;
  }
  puVar7 = PTR_DAT_038679b8;
  puVar6 = PTR_DAT_038679b0;
  puVar5 = PTR_DAT_0385e750;
  puVar4 = PTR_DAT_0385db10;
  puVar3 = PTR_DAT_0385d098;
  puVar2 = PTR_DAT_0385ccb8;
  puVar1 = PTR_DAT_0385ca48;
  lStack_68 = 0;
  if (self->mRoomModel == (RoomModel *)0x0) {
    return;
  }
  pvVar8 = self->mItemList;
  if (pvVar8 != (void *)0x0) {
    while( true ) {
      if (*(int *)((long)pvVar8 + 0x18) < 1) {
        NativeHelper_0334aa10(0,runtimeMethod);
        self->mWaitingBuyItem = (void *)0x0;
        NativeHelper_017ef228(&self->mWaitingBuyItem,0);
        BuildHouse_CleanShadow_1886f8c(self,runtimeMethod_00);
        BuildHouse_FindCurrentBuyItem_1887390(self,0);
        return;
      }
      pvVar8 = (void *)NativeHelper_02891e18(pvVar8,*(undefined8 *)PTR_DAT_038679a8);
      if ((self->mRoomModel == (RoomModel *)0x0) || (pvVar8 == (void *)0x0)) break;
      pvVar13 = self->mRoomModel->RoomName;
      pvVar9 = UnityEngine_object_get_name_3252e0c(pvVar8,(void *)0x0);
      pvVar9 = (void *)NativeHelper_02aa70d0
                                 (*(undefined8 *)PTR_DAT_038678f0,pvVar13,*(undefined8 *)puVar3,
                                  pvVar9,0);
      UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar9,1,(void *)0x0);
      pvVar9 = UnityEngine_object_get_name_3252e0c(pvVar8,(void *)0x0);
      pvVar9 = (void *)NativeHelper_02a9c49c(pvVar9,*(undefined8 *)PTR_DAT_03867978,0);
      UnityEngine_PlayerPrefs_DeleteKey_324686c(pvVar9,(void *)0x0);
      pvVar9 = UnityEngine_object_get_name_3252e0c(pvVar8,(void *)0x0);
      lVar10 = NativeHelper_0334f4c8(pvVar8,0);
      if (lVar10 == 0) break;
      NativeHelper_0335236c(lVar10,1,0);
      pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar5);
      lVar10 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385cca8);
      NativeHelper_02132ae8(lVar10,*(undefined8 *)PTR_DAT_0385ccb0);
      if ((self->mRoomModel == (RoomModel *)0x0) ||
         (uVar11 = NativeHelper_02aa6b6c(self->mRoomModel->RoomName,*(undefined8 *)puVar3,pvVar9,0),
         lVar10 == 0)) break;
      NativeHelper_02133494(lVar10,*(undefined8 *)puVar7,uVar11,*(undefined8 *)puVar2);
      pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      if ((self->mRoomModel == (RoomModel *)0x0) || (pGVar12 == (Game_UserData *)0x0)) break;
      lStack_68 = Game_UserData_GetRoomTaskUseTime_18cd990
                            (pGVar12,self->mRoomModel->RoomName,pvVar9,(void *)0x0);
      uVar11 = NativeHelper_02c0e330(&lStack_68,0);
      NativeHelper_02133494(lVar10,*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar2);
      if (pvVar8 == (void *)0x0) break;
      EventLogger_LogEvent_1888558(pvVar8,*(undefined8 *)puVar7,lVar10,0);
      pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar5);
      lVar10 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
      NativeHelper_02132ae8(lVar10,*(undefined8 *)PTR_DAT_0385ca28);
      if ((self->mRoomModel == (RoomModel *)0x0) ||
         (uVar11 = NativeHelper_02aa6b6c(self->mRoomModel->RoomName,*(undefined8 *)puVar3,pvVar9,0),
         lVar10 == 0)) break;
      NativeHelper_02133494(lVar10,*(undefined8 *)puVar7,uVar11,*(undefined8 *)puVar1);
      pGVar12 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      if ((self->mRoomModel == (RoomModel *)0x0) || (pGVar12 == (Game_UserData *)0x0)) break;
      lStack_70 = Game_UserData_GetRoomTaskUseTime_18cd990
                            (pGVar12,self->mRoomModel->RoomName,pvVar9,(void *)0x0);
      uVar11 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x68),&lStack_70);
      uVar11 = NativeHelper_02133494(lVar10,*(undefined8 *)puVar6,uVar11,*(undefined8 *)puVar1);
      if (pvVar8 == (void *)0x0) break;
      EventLogger_TkLogEvent_1888ca0(uVar11,*(undefined8 *)puVar7,lVar10,0);
      pvVar8 = self->mItemList;
      runtimeMethod = extraout_x1_00;
      if (pvVar8 == (void *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

