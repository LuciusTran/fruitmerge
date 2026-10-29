// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public long GetRoomUseTime(string roomName) { }
// Ghidra address: 019d1750; ELF VA: 0x18d1750; file offset: 0x18cd750
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


longlong Game_UserData_GetRoomUseTime_18cd750
                   (Game_UserData *self,void *roomName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  
  puVar1 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab244a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869d80);
    bRam0000000003ab244a = 1;
  }
  puVar2 = PTR_DAT_03869d80;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar6 = NativeHelper_02bf109c(0);
  iVar4 = NativeHelper_019d8390(uVar6,0);
  pvVar7 = (void *)NativeHelper_02a9c49c(roomName,*(undefined8 *)puVar2,0);
  bVar3 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar7,(void *)0x0);
  if (bVar3) {
    pvVar7 = (void *)NativeHelper_02a9c49c(roomName,*(undefined8 *)puVar2,0);
    pvVar7 = UnityEngine_PlayerPrefs_GetString_324669c(pvVar7,(void *)0x0);
    iVar4 = NativeHelper_02c0ed04(pvVar7,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar6 = NativeHelper_02bf109c(0);
  iVar5 = NativeHelper_019d8390(uVar6,0);
  return (long)(iVar5 - iVar4);
}

