// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RecordStartPlayLevelData() { }
// Ghidra address: 019cde18; ELF VA: 0x18cde18; file offset: 0x18c9e18
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_RecordStartPlayLevelData_18c9e18(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *key;
  void *value;
  undefined1 auVar5 [16];
  int iStack_24;
  undefined8 uStack_18;
  
  puVar1 = PTR_DAT_0385dc10;
  auVar5._8_8_ = runtimeMethod;
  auVar5._0_8_ = self;
  if ((bRam0000000003ab2416 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    auVar5 = NativeHelper_017ef284(PTR_DAT_03869b78);
    bRam0000000003ab2416 = 1;
  }
  puVar2 = PTR_DAT_03869b78;
  uStack_18 = 0;
  iVar3 = Game_UserData_GetTotalLevels_18c9af8(auVar5._0_8_,auVar5._8_8_);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  uVar4 = NativeHelper_02bf109c(0);
  uStack_18 = NativeHelper_019d8390(uVar4,0);
  iStack_24 = iVar3;
  uVar4 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
  key = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar2,uVar4,0);
  value = (void *)NativeHelper_02c0e330(&uStack_18,0);
  UnityEngine_PlayerPrefs_SetString_3246394(key,value,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

