// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResetCurrentPlayLevelData(int lastPlayLevel) { }
// Ghidra address: 019cdd9c; ELF VA: 0x18cdd9c; file offset: 0x18c9d9c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_ResetCurrentPlayLevelData_18c9d9c
               (Game_UserData *self,int lastPlayLevel,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  void *key;
  int iStack_24;
  
  puVar1 = PTR_DAT_03869b80;
  if ((bRam0000000003ab2415 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869b80);
    bRam0000000003ab2415 = 1;
  }
  iStack_24 = lastPlayLevel;
  uVar2 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
  key = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar1,uVar2,0);
  UnityEngine_PlayerPrefs_DeleteKey_324686c(key,(void *)0x0);
  return;
}

