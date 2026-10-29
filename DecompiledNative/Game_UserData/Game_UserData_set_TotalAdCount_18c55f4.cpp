// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_TotalAdCount(int value) { }
// Ghidra address: 019c95f4; ELF VA: 0x18c95f4; file offset: 0x18c55f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_set_TotalAdCount_18c55f4(Game_UserData *self,int value,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_03869998;
  if ((bRam0000000003ab2476 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869998);
    bRam0000000003ab2476 = 1;
  }
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar1,value,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

