// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_IsHadSubScriptionSuccessed(bool value) { }
// Ghidra address: 019d2d90; ELF VA: 0x18d2d90; file offset: 0x18ced90
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_set_IsHadSubScriptionSuccessed_18ced90
               (Game_UserData *self,bool value,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_03869de0;
  if ((bRam0000000003ab2462 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869de0);
    bRam0000000003ab2462 = 1;
  }
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar1,(uint)value,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

