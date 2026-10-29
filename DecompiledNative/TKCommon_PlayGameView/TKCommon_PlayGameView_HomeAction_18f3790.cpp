// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void HomeAction() { }
// Ghidra address: 019f7790; ELF VA: 0x18f7790; file offset: 0x18f3790
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_HomeAction_18f3790(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_0386ac98;
  puVar1 = PTR_DAT_0385c9f8;
  if ((bRam0000000003ab25be & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0386ac98);
    bRam0000000003ab25be = 1;
    runtimeMethod = extraout_x1;
  }
  TKCommon_PlayGameView_QuitGame_18f2b2c(self,runtimeMethod);
  lVar3 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02b8e36c(lVar3,self,*(undefined8 *)puVar2,0);
  if (self->_IsShowGame_k__BackingField != false) {
    self->_IsShowGame_k__BackingField = false;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019f782c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return;
}

