// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartAdsBreakWaiting() { }
// Ghidra address: 019f6fc4; ELF VA: 0x18f6fc4; file offset: 0x18f2fc4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_StartAdsBreakWaiting_18f2fc4
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  TKLClient_TKLSwitcherConfig *pTVar2;
  void *pvVar3;
  
  if ((bRam0000000003ab25cc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab25cc = 1;
  }
  puVar1 = PTR_DAT_0385d918;
  if (self->adsBreakWaitingCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->adsBreakWaitingCoroutine,(void *)0x0)
    ;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pTVar2 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar2 != (TKLClient_TKLSwitcherConfig *)0x0) {
    if (pTVar2->FM_ShowAdsBreak != false) {
      pvVar3 = (void *)NativeHelper_019f9420(self);
      pvVar3 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar3,(void *)0x0);
      self->adsBreakWaitingCoroutine = pvVar3;
      if (iRam0000000003cd3780 != 0) {
        func_0x018dcb10(1L << ((ulong)&self->adsBreakWaitingCoroutine >> 0xc & 0x3f),
                        ((ulong)&self->adsBreakWaitingCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

