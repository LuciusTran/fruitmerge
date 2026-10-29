// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public long GetRoomTaskUseTime(string roomName, string taskName) { }
// Ghidra address: 019d1990; ELF VA: 0x18d1990; file offset: 0x18cd990
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


longlong Game_UserData_GetRoomTaskUseTime_18cd990
                   (Game_UserData *self,void *roomName,void *taskName,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  Game_UserData *self_00;
  void *pvVar5;
  
  puVar1 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab244d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869d80);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    bRam0000000003ab244d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar4 = NativeHelper_02bf109c(0);
  self_00 = (Game_UserData *)NativeHelper_019d8390(uVar4,0);
  bVar2 = Game_UserData_HasRoomTaskStarted_18cd838(self_00,roomName,taskName,runtimeMethod);
  if (bVar2) {
    pvVar5 = (void *)NativeHelper_02aa70d0
                               (roomName,*(undefined8 *)PTR_DAT_0385d098,taskName,
                                *(undefined8 *)PTR_DAT_03869d80,0);
    pvVar5 = UnityEngine_PlayerPrefs_GetString_324669c(pvVar5,(void *)0x0);
    self_00 = (Game_UserData *)NativeHelper_02c0ed04(pvVar5,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar4 = NativeHelper_02bf109c(0);
  iVar3 = NativeHelper_019d8390(uVar4,0);
  return (long)(iVar3 - (int)self_00);
}

