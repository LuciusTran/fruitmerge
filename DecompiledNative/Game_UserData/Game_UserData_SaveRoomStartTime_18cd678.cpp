// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveRoomStartTime(string roomName) { }
// Ghidra address: 019d1678; ELF VA: 0x18d1678; file offset: 0x18cd678
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveRoomStartTime_18cd678(Game_UserData *self,void *roomName,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *value;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_03869d80;
  if ((bRam0000000003ab2449 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869d80);
    bRam0000000003ab2449 = 1;
  }
  uStack_28 = 0;
  pvVar3 = (void *)NativeHelper_02a9c49c(roomName,*(undefined8 *)puVar1,0);
  bVar2 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar3,(void *)0x0);
  if (!bVar2) {
    if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar4 = NativeHelper_02bf109c(0);
    uStack_28 = NativeHelper_019d8390(uVar4,0);
    pvVar3 = (void *)NativeHelper_02a9c49c(roomName,*(undefined8 *)puVar1,0);
    value = (void *)NativeHelper_02c0e330(&uStack_28,0);
    UnityEngine_PlayerPrefs_SetString_3246394(pvVar3,value,(void *)0x0);
    NativeHelper_0334aa10(0);
  }
  return;
}

