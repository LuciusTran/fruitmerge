// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetExpLevel() { }
// Ghidra address: 019cb0c4; ELF VA: 0x18cb0c4; file offset: 0x18c70c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int Game_UserData_GetExpLevel_18c70c4(Game_UserData *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  TKLClient_TKLSwitcherConfig *pTVar4;
  undefined1 auVar5 [16];
  
  puVar2 = PTR_DAT_0385d918;
  auVar5._8_8_ = runtimeMethod;
  auVar5._0_8_ = self;
  if ((bRam0000000003ab242a & 1) == 0) {
    auVar5 = NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab242a = 1;
  }
  iVar3 = Game_UserData_GetExp_18ca674(auVar5._0_8_,auVar5._8_8_);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar2);
  }
  pTVar4 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar4 != (TKLClient_TKLSwitcherConfig *)0x0) {
    iVar1 = 0;
    if (pTVar4->FM_ExpPerLevel != 0) {
      iVar1 = iVar3 / pTVar4->FM_ExpPerLevel;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

