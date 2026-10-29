// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool get_CurrentUserIsExecuteTKLog() { }
// Ghidra address: 019d2e8c; ELF VA: 0x18d2e8c; file offset: 0x18cee8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_get_CurrentUserIsExecuteTKLog_18cee8c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_03869de8;
  if ((bRam0000000003ab2465 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869de8);
    bRam0000000003ab2465 = 1;
  }
  iVar2 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar1,0,(void *)0x0);
  return iVar2 != 0;
}

