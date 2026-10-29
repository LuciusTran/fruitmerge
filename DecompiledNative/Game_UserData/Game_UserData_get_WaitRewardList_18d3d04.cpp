// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public List<RoomRewardModel> get_WaitRewardList() { }
// Ghidra address: 019d7d04; ELF VA: 0x18d7d04; file offset: 0x18d3d04
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * Game_UserData_get_WaitRewardList_18d3d04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_0386a008;
  if ((bRam0000000003ab24ab & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a010);
    NativeHelper_017ef284(PTR_DAT_0385db00);
    NativeHelper_017ef284(PTR_DAT_0386a018);
    NativeHelper_017ef284(PTR_DAT_0386a020);
    NativeHelper_017ef284(PTR_DAT_0386a008);
    bRam0000000003ab24ab = 1;
  }
  puVar3 = PTR_DAT_0386a020;
  puVar2 = PTR_DAT_0386a018;
  bVar4 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)puVar1,(void *)0x0);
  if (bVar4) {
    pvVar5 = UnityEngine_PlayerPrefs_GetString_324669c(*(void **)puVar1,(void *)0x0);
    if (*(int *)(*(long *)PTR_DAT_0385db00 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pvVar5 = LitJson_JsonMapper_ToObject_1b85474(pvVar5,*(void **)PTR_DAT_0386a010);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
      NativeHelper_02568f74(pvVar5,*(undefined8 *)puVar2);
    }
  }
  else {
    pvVar5 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
    NativeHelper_02568f74(pvVar5,*(undefined8 *)puVar2);
  }
  return pvVar5;
}

