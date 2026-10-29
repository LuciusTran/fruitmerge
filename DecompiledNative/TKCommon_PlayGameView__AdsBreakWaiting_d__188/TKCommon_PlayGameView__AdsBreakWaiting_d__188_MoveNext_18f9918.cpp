// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019fd918; ELF VA: 0x18fd918; file offset: 0x18f9918
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView__AdsBreakWaiting_d__188_MoveNext_18f9918
               (TKCommon_PlayGameView__AdsBreakWaiting_d__188 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  TKLClient_TKLSwitcherConfig *pTVar3;
  void *self_00;
  void *extraout_x1;
  int iVar4;
  
  if ((bRam0000000003ab25ee & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d380);
    bRam0000000003ab25ee = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_0385d918;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar3 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar3 == (TKLClient_TKLSwitcherConfig *)0x0) {
LAB_019fda00:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    iVar4 = pTVar3->FM_AdsBreakWaitingTime;
    self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385d380);
    UnityEngine_WaitForSeconds_WaitForSeconds_32555e8(self_00,(float)iVar4,(void *)0x0);
    self->__2__current = self_00;
    NativeHelper_017ef228(&self->__2__current,self_00);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    self->__1__state = -1;
    if (self->__4__this == (TKCommon_PlayGameView *)0x0) goto LAB_019fda00;
    TKCommon_PlayGameView_ShowAdBreakView_18f54b4(self->__4__this,runtimeMethod);
  }
  return iVar1 == 0;
}

