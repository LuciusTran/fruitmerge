// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool GoNextRoom() { }
// Ghidra address: 0198b284; ELF VA: 0x188b284; file offset: 0x1887284
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool BuildHouse_GoNextRoom_1887284(BuildHouse *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  Game_UserData *self_00;
  RoomModel *roomModel;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *pvVar3;
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab2149 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865f58);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab2149 = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar2 = PTR_DAT_03865f58;
  puVar1 = PTR_DAT_0385c2a0;
  if (self_00 != (Game_UserData *)0x0) {
    roomModel = Game_UserData_GetCurrentRoomModel_18ca1c8(self_00,(void *)0x0);
    pvVar3 = self->mRoomObj;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    runtimeMethod_01 = (void *)0x0;
    NativeHelper_01a53364(pvVar3,0);
    pvVar3 = self->mRoomObj;
    if (roomModel == (RoomModel *)0x0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      NativeHelper_03357b5c(pvVar3,0);
      BuildHouse_LoadComingSoon_188674c(self,runtimeMethod_00);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      NativeHelper_03357b5c(pvVar3,0);
      BuildHouse_LoadRoom_18863b8(self,roomModel,runtimeMethod_01);
    }
    return roomModel != (RoomModel *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

