// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_CurrentTaskSkinGainProgress(int value) { }
// Ghidra address: 019d7480; ELF VA: 0x18d7480; file offset: 0x18d3480
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_set_CurrentTaskSkinGainProgress_18d3480
               (Game_UserData *self,int value,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_03869fc0;
  if ((bRam0000000003ab249a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869fc0);
    bRam0000000003ab249a = 1;
  }
  UnityEngine_PlayerPrefs_SetInt_3245fa8
            (*(void **)puVar1,value & (value >> 0x1f ^ 0xffffffffU),(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

