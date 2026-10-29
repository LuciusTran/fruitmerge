// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public RoomModel GetCurrentRoomModel() { }
// Ghidra address: 019ce1c8; ELF VA: 0x18ce1c8; file offset: 0x18ca1c8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


RoomModel * Game_UserData_GetCurrentRoomModel_18ca1c8(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *in_x2;
  RoomModel *pRVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  RoomModel *pRStack_38;
  
  puVar1 = PTR_DAT_0385d9c8;
  if ((bRam0000000003ab244e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869bb8);
    NativeHelper_017ef284(PTR_DAT_03869bc0);
    NativeHelper_017ef284(PTR_DAT_03869bc8);
    NativeHelper_017ef284(PTR_DAT_03869bd0);
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    bRam0000000003ab244e = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  pRStack_38 = (RoomModel *)0x0;
  pvVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar5 = ConfigManager_GetRoomList_180644c(pvVar4,0);
  puVar2 = PTR_DAT_03869bc0;
  puVar1 = PTR_DAT_03869bb8;
  if (lVar5 == 0) {
    pRVar7 = (RoomModel *)0x0;
  }
  else {
    NativeHelper_0256a338(&uStack_48,lVar5,*(undefined8 *)PTR_DAT_03869bd0);
    do {
      uVar6 = NativeHelper_02240184(&uStack_48,*(undefined8 *)puVar2);
      pRVar7 = pRStack_38;
      if ((uVar6 & 1) == 0) {
        pRVar7 = (RoomModel *)0x0;
        break;
      }
      if (pRStack_38 == (RoomModel *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      bVar3 = Game_UserData_IsRoomFinished_18cda8c(self,pRStack_38->RoomName,in_x2);
    } while (bVar3);
    NativeHelper_02240180(&uStack_48,*(undefined8 *)puVar1);
  }
  return pRVar7;
}

