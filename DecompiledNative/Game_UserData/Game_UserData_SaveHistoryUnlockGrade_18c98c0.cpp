// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveHistoryUnlockGrade(int grade) { }
// Ghidra address: 019cd8c0; ELF VA: 0x18cd8c0; file offset: 0x18c98c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveHistoryUnlockGrade_18c98c0(Game_UserData *self,int grade,void *runtimeMethod)

{
  int iVar1;
  void *runtimeMethod_00;
  undefined1 auVar2 [16];
  
  runtimeMethod_00 = (void *)(ulong)(uint)grade;
  if ((bRam0000000003ab240c & 1) == 0) {
    auVar2 = NativeHelper_017ef284(PTR_DAT_03869b60);
    runtimeMethod_00 = auVar2._8_8_;
    self = auVar2._0_8_;
    bRam0000000003ab240c = 1;
  }
  iVar1 = Game_UserData_GetHistoryUnlockGrade_18c9878(self,runtimeMethod_00);
  if (iVar1 < grade) {
    UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)PTR_DAT_03869b60,grade,(void *)0x0);
    if (pcRam0000000003abb5f0 == (code *)0x0) {
      pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
    }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abb5f0)();
    return;
  }
  return;
}

