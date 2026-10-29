// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool get_EnableTask() { }
// Ghidra address: 019ceb28; ELF VA: 0x18ceb28; file offset: 0x18cab28
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_get_EnableTask_18cab28(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_03869c28;
  if ((bRam0000000003ab24a3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869c28);
    bRam0000000003ab24a3 = 1;
  }
  iVar2 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar1,1,(void *)0x0);
  return iVar2 == 1;
}

