// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool get_OpenTextLogForRelease() { }
// Ghidra address: 019d2f34; ELF VA: 0x18d2f34; file offset: 0x18cef34
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_get_OpenTextLogForRelease_18cef34(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_03869df0;
  if ((bRam0000000003ab2467 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869df0);
    bRam0000000003ab2467 = 1;
  }
  iVar2 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar1,0,(void *)0x0);
  return iVar2 != 0;
}

