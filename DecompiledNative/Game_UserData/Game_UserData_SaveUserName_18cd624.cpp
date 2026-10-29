// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveUserName(string name) { }
// Ghidra address: 019d1624; ELF VA: 0x18d1624; file offset: 0x18cd624
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveUserName_18cd624(Game_UserData *self,void *name,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_03869d70;
  if ((bRam0000000003ab2447 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d70);
    bRam0000000003ab2447 = 1;
  }
  UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,name,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

