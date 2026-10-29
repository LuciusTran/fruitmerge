// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartCountdown() { }
// Ghidra address: 019fc33c; ELF VA: 0x18fc33c; file offset: 0x18f833c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_StartCountdown_18f833c(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined8 uVar1;
  void *pvVar2;
  long *plVar3;
  undefined4 uStack_14;
  
  plVar3 = self->m_txt_ShakeCountdown;
  self->_countdownTime = 3.0;
  uStack_14 = 3;
  uVar1 = NativeHelper_02c0d29c(&uStack_14,0);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x5f0));
    if (self->_countdownCoroutine != (void *)0x0) {
      UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->_countdownCoroutine,(void *)0x0);
    }
    pvVar2 = (void *)NativeHelper_019fc3e4(self);
    pvVar2 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar2,(void *)0x0);
    self->_countdownCoroutine = pvVar2;
    NativeHelper_017ef228(&self->_countdownCoroutine,pvVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

