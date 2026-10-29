// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetPlayLevelUseTime(int lastPlayLevel) { }
// Ghidra address: 019cdd20; ELF VA: 0x18cdd20; file offset: 0x18c9d20
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int Game_UserData_GetPlayLevelUseTime_18c9d20
              (Game_UserData *self,int lastPlayLevel,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *key;
  int iStack_24;
  
  puVar1 = PTR_DAT_03869b80;
  if ((bRam0000000003ab2414 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869b80);
    bRam0000000003ab2414 = 1;
  }
  iStack_24 = lastPlayLevel;
  uVar3 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
  key = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar1,uVar3,0);
  iVar2 = UnityEngine_PlayerPrefs_GetInt_3246194(key,(void *)0x0);
  return iVar2;
}

