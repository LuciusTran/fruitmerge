// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DefaultInGame() { }
// Ghidra address: 019f2de0; ELF VA: 0x18f2de0; file offset: 0x18eede0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_DefaultInGame_18eede0(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  undefined8 *puVar3;
  void *runtimeMethod_00;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0386ab40;
  if ((bRam0000000003ab2590 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0386ab48);
    NativeHelper_017ef284(PTR_DAT_0386ab40);
    bRam0000000003ab2590 = 1;
    runtimeMethod = extraout_x1;
  }
  TKCommon_PlayGameView_InitGameView_18f0524(self,runtimeMethod);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  runtimeMethod_00 = (void *)puVar3[1];
  if (runtimeMethod_00 == (void *)0x0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *puVar3;
    runtimeMethod_00 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(runtimeMethod_00,uVar4,*(undefined8 *)PTR_DAT_0386ab48,0);
    puVar3 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *puVar3 = runtimeMethod_00;
    NativeHelper_017ef228(puVar3,runtimeMethod_00);
  }
  if (self == (TKCommon_PlayGameView *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if (self->_IsShowGame_k__BackingField != false) {
    return;
  }
  self->_IsShowGame_k__BackingField = true;
  TKCommon_PlayGameView_StartAdsBreakWaiting_18f2fc4(self,runtimeMethod_00);
  if (runtimeMethod_00 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019f45fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)runtimeMethod_00 + 0x18))
              (*(undefined8 *)((long)runtimeMethod_00 + 0x40),
               *(undefined8 *)((long)runtimeMethod_00 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

