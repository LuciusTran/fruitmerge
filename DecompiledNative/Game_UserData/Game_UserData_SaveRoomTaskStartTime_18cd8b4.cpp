// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveRoomTaskStartTime(string roomName, string taskName) { }
// Ghidra address: 019d18b4; ELF VA: 0x18d18b4; file offset: 0x18cd8b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveRoomTaskStartTime_18cd8b4
               (Game_UserData *self,void *roomName,void *taskName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  void *key;
  void *value;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab244c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869d80);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    bRam0000000003ab244c = 1;
  }
  puVar3 = PTR_DAT_03869d80;
  puVar1 = PTR_DAT_0385d098;
  uStack_28 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar4 = NativeHelper_02bf109c(0);
  uStack_28 = NativeHelper_019d8390(uVar4,0);
  key = (void *)NativeHelper_02aa70d0
                          (roomName,*(undefined8 *)puVar1,taskName,*(undefined8 *)puVar3,0);
  value = (void *)NativeHelper_02c0e330(&uStack_28,0);
  UnityEngine_PlayerPrefs_SetString_3246394(key,value,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

