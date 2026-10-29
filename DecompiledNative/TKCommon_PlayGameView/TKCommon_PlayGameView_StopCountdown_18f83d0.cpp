// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StopCountdown() { }
// Ghidra address: 019fc3d0; ELF VA: 0x18fc3d0; file offset: 0x18f83d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_StopCountdown_18f83d0(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  pvVar3 = self->_countdownCoroutine;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (pvVar3 == (void *)0x0) {
    NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
    uVar2 = NativeHelper_017ef520();
    uVar5 = NativeHelper_017ef298(PTR_DAT_038a78d0);
    NativeHelper_02c12308(uVar2,uVar5,0);
  }
  else {
    uVar1 = NativeHelper_03353b80();
    if ((uVar1 & 1) != 0) {
      if ((bRam0000000003abb850 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a7898);
        bRam0000000003abb850 = 1;
      }
      if (self != (TKCommon_PlayGameView *)0x0) {
        lVar4 = *(long *)&self->field_0x10;
        if (lVar4 != 0) {
          uVar5 = 0;
          if (pvVar3 != (void *)0x0) {
            uVar5 = *(undefined8 *)((long)pvVar3 + 0x10);
          }
          if (pcRam0000000003abb8c8 == (code *)0x0) {
            pcRam0000000003abb8c8 = (code *)NativeHelper_017ef240(&UNK_00a5f9fc);
          }
                    /* WARNING: Could not recover jumptable at 0x033540f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003abb8c8)(lVar4,uVar5);
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8();
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    NativeHelper_017ef298(PTR_DAT_03865620);
    uVar2 = NativeHelper_017ef520();
    uVar5 = NativeHelper_017ef298(PTR_DAT_038a78b8);
    NativeHelper_02b8eaa8(uVar2,uVar5,0);
  }
  uVar5 = NativeHelper_017ef298(PTR_DAT_038a78e8);
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef3f4(uVar2,uVar5);
}

