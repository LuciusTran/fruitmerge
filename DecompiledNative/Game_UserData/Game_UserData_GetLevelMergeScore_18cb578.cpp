// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetLevelMergeScore(int lastExpLevel) { }
// Ghidra address: 019cf578; ELF VA: 0x18cf578; file offset: 0x18cb578
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int Game_UserData_GetLevelMergeScore_18cb578
              (Game_UserData *self,int lastExpLevel,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *key;
  int iStack_24;
  
  puVar1 = PTR_DAT_03869d18;
  if ((bRam0000000003ab2427 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d18);
    bRam0000000003ab2427 = 1;
  }
  iStack_24 = lastExpLevel;
  uVar3 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
  key = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar1,uVar3,0);
  iVar2 = UnityEngine_PlayerPrefs_GetInt_3246194(key,(void *)0x0);
  return iVar2;
}

