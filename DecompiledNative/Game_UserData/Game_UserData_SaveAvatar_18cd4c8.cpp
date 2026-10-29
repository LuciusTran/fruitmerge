// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveAvatar(int index) { }
// Ghidra address: 019d14c8; ELF VA: 0x18d14c8; file offset: 0x18cd4c8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveAvatar_18cd4c8(Game_UserData *self,int index,void *runtimeMethod)

{
  undefined *puVar1;
  void *value;
  int iStack_14;
  
  puVar1 = PTR_DAT_03869d68;
  iStack_14 = index;
  if ((bRam0000000003ab2445 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d68);
    bRam0000000003ab2445 = 1;
  }
  value = (void *)NativeHelper_02c0d29c(&iStack_14,0);
  UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,value,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

