// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UseTicketsWithoutBroadcast(int num) { }
// Ghidra address: 019cfd20; ELF VA: 0x18cfd20; file offset: 0x18cbd20
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_UseTicketsWithoutBroadcast_18cbd20
               (Game_UserData *self,int num,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  void *runtimeMethod_00;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_03869bd8;
  runtimeMethod_00 = (void *)(ulong)(uint)num;
  if ((bRam0000000003ab2433 & 1) == 0) {
    auVar3 = NativeHelper_017ef284(PTR_DAT_03869bd8);
    runtimeMethod_00 = auVar3._8_8_;
    self = auVar3._0_8_;
    bRam0000000003ab2433 = 1;
  }
  iVar2 = Game_UserData_GetTickets_18ca33c(self,runtimeMethod_00);
  UnityEngine_PlayerPrefs_SetInt_3245fa8
            (*(void **)puVar1,iVar2 - num & (iVar2 - num >> 0x1f ^ 0xffffffffU),(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

