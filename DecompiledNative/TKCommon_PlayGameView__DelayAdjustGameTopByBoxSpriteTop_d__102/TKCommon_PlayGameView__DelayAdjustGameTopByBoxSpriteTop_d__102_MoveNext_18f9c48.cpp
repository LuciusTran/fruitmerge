// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019fdc48; ELF VA: 0x18fdc48; file offset: 0x18f9c48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView__DelayAdjustGameTopByBoxSpriteTop_d__102_MoveNext_18f9c48
               (TKCommon_PlayGameView__DelayAdjustGameTopByBoxSpriteTop_d__102 *self,
               void *runtimeMethod)

{
  int iVar1;
  void *self_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  TKCommon_PlayGameView *self_01;
  
  if ((bRam0000000003ab25ef & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d8b0);
    bRam0000000003ab25ef = 1;
    runtimeMethod = extraout_x1;
  }
  iVar1 = self->__1__state;
  if (iVar1 == 2) {
    self_01 = self->__4__this;
    self->__1__state = -1;
    NativeHelper_036446d4(0,runtimeMethod);
    if (self_01 == (TKCommon_PlayGameView *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    TKCommon_PlayGameView_AdjustGameTopByBoxSpriteTop_18f06b0(self_01,runtimeMethod_00);
    self_01->_adjustGameTopCoroutine = (void *)0x0;
    NativeHelper_017ef228(&self_01->_adjustGameTopCoroutine,0);
  }
  else {
    if (iVar1 == 1) {
      self->__1__state = -1;
      NativeHelper_036446d4(0,runtimeMethod);
      self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385d8b0);
      UnityEngine_WaitForEndOfFrame_WaitForEndOfFrame_32555d8(self_00,(void *)0x0);
      self->__2__current = self_00;
      NativeHelper_017ef228(&self->__2__current,self_00);
      self->__1__state = 2;
      return true;
    }
    if (iVar1 == 0) {
      self->__2__current = (void *)0x0;
      self->__1__state = -1;
      NativeHelper_017ef228(&self->__2__current,0);
      self->__1__state = 1;
      return true;
    }
  }
  return false;
}

