// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool ShouldStartNextGameDirectly() { }
// Ghidra address: 019f6808; ELF VA: 0x18f6808; file offset: 0x18f2808
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView_ShouldStartNextGameDirectly_18f2808
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  TKLClient_TKLSwitcherConfig *pTVar2;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab25ad & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab25ad = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  pTVar2 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar2 != (TKLClient_TKLSwitcherConfig *)0x0) {
    return pTVar2->NextGameDirectlyForNewUser;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

