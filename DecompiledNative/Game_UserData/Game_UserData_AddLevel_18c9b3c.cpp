// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddLevel() { }
// Ghidra address: 019cdb3c; ELF VA: 0x18cdb3c; file offset: 0x18c9b3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_AddLevel_18c9b3c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  uint lastPlayLevel;
  void *in_x2;
  undefined1 auVar2 [16];
  
  puVar1 = PTR_DAT_03869b70;
  auVar2._8_8_ = runtimeMethod;
  auVar2._0_8_ = self;
  if ((bRam0000000003ab2413 & 1) == 0) {
    auVar2 = NativeHelper_017ef284(PTR_DAT_03869b70);
    bRam0000000003ab2413 = 1;
  }
  lastPlayLevel = Game_UserData_GetTotalLevels_18c9af8(auVar2._0_8_,auVar2._8_8_);
  Game_UserData_RecordQuitPlayLevelData_18c9b9c
            ((Game_UserData *)(ulong)lastPlayLevel,lastPlayLevel,in_x2);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar1,lastPlayLevel + 1,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

