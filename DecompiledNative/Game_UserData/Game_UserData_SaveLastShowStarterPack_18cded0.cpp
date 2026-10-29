// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveLastShowStarterPack() { }
// Ghidra address: 019d1ed0; ELF VA: 0x18d1ed0; file offset: 0x18cded0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveLastShowStarterPack_18cded0(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  void *value;
  undefined1 auVar4 [16];
  undefined8 uStack_18;
  
  auVar4._8_8_ = runtimeMethod;
  auVar4._0_8_ = self;
  if ((bRam0000000003ab2454 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    auVar4 = NativeHelper_017ef284(PTR_DAT_03869d90);
    bRam0000000003ab2454 = 1;
  }
  uStack_18 = 0;
  bVar2 = Game_UserData_IsTodayStarterPackShown_18cdd24(auVar4._0_8_,auVar4._8_8_);
  puVar1 = PTR_DAT_03869d90;
  if (!bVar2) {
    if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar3 = NativeHelper_02bf109c(0);
    uStack_18 = NativeHelper_019d8390(uVar3,0);
    value = (void *)NativeHelper_02c0e330(&uStack_18,0);
    UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,value,(void *)0x0);
    NativeHelper_0334aa10(0);
  }
  return;
}

