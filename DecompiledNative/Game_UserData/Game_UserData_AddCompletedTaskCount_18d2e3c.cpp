// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AddCompletedTaskCount() { }
// Ghidra address: 019d6e3c; ELF VA: 0x18d6e3c; file offset: 0x18d2e3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_AddCompletedTaskCount_18d2e3c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_03869f28;
  auVar3._8_8_ = runtimeMethod;
  auVar3._0_8_ = self;
  if ((bRam0000000003ab2494 & 1) == 0) {
    auVar3 = NativeHelper_017ef284(PTR_DAT_03869f28);
    bRam0000000003ab2494 = 1;
  }
  iVar2 = Game_UserData_GetCompletedTaskCount_18d2df4(auVar3._0_8_,auVar3._8_8_);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar1,iVar2 + 1,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

