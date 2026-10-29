// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsFirstShowDailyReward() { }
// Ghidra address: 019d2598; ELF VA: 0x18d2598; file offset: 0x18ce598
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_IsFirstShowDailyReward_18ce598(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = PTR_DAT_03869db0;
  if ((bRam0000000003ab2457 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869db0);
    bRam0000000003ab2457 = 1;
  }
  bVar2 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)puVar1,(void *)0x0);
  return (bool)((bVar2 ^ 0xffU) & 1);
}

