// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019fdd8c; ELF VA: 0x18fdd8c; file offset: 0x18f9d8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView__DelayAdsPlay_d__190_MoveNext_18f9d8c
               (TKCommon_PlayGameView__DelayAdsPlay_d__190 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Ads_AdsPlayController *pAVar4;
  undefined8 uVar5;
  void *self_00;
  void *extraout_x1;
  TKCommon_PlayGameView *pTVar6;
  
  if ((bRam0000000003ab25f0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d4c8);
    NativeHelper_017ef284(PTR_DAT_0385d3d0);
    NativeHelper_017ef284(PTR_DAT_0386ae58);
    NativeHelper_017ef284(PTR_DAT_03866ef0);
    bRam0000000003ab25f0 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_03866ef0;
  puVar2 = PTR_DAT_0385d3d0;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3,runtimeMethod);
    UnityEngine_WaitForSecondsRealtime_WaitForSecondsRealtime_32556e4(self_00,2.0,(void *)0x0);
    self->__2__current = self_00;
    NativeHelper_017ef228(&self->__2__current,self_00);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pTVar6 = self->__4__this;
    self->__1__state = -1;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pAVar4 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
    uVar5 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385d4c8);
    NativeHelper_01efa3d0(uVar5,pTVar6,*(undefined8 *)PTR_DAT_0386ae58,0);
    if (pAVar4 == (Ads_AdsPlayController *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    Ads_AdsPlayController_StartPlayInterstitial_18c354c(pAVar4,1,uVar5,0);
  }
  return iVar1 == 0;
}

