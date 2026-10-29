// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RecordStartExpLevelData() { }
// Ghidra address: 019cea2c; ELF VA: 0x18cea2c; file offset: 0x18caa2c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_RecordStartExpLevelData_18caa2c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  void *key;
  void *value;
  int iStack_2c;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_03869c00;
  puVar1 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab2428 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869c00);
    NativeHelper_017ef284(PTR_DAT_03869c20);
    bRam0000000003ab2428 = 1;
  }
  puVar3 = PTR_DAT_03869c20;
  uStack_28 = 0;
  iVar4 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  uVar5 = NativeHelper_02bf109c(0);
  uStack_28 = NativeHelper_019d8390(uVar5,0);
  iStack_2c = iVar4;
  uVar5 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_2c);
  key = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar5,0);
  value = (void *)NativeHelper_02c0e330(&uStack_28,0);
  UnityEngine_PlayerPrefs_SetString_3246394(key,value,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

