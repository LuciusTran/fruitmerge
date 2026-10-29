// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowAdBreakView() { }
// Ghidra address: 019f94b4; ELF VA: 0x18f94b4; file offset: 0x18f54b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ShowAdBreakView_18f54b4(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void **ppvVar3;
  TKLClient_TKLSwitcherConfig *pTVar4;
  Ads_AdsPlayController *self_00;
  void *pvVar5;
  void *extraout_x1;
  void *runtimeMethod_00;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0385d3d0;
  if ((bRam0000000003ab25ce & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d3d0);
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_0386ac58);
    bRam0000000003ab25ce = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  self_00 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
  if (self_00 != (Ads_AdsPlayController *)0x0) {
    bVar2 = Ads_AdsPlayController_IsInterstitialReady_18c39e4(self_00,(void *)0x1,false,(void *)0x0)
    ;
    if (bVar2) {
      lVar7 = *(long *)PTR_DAT_0385c390;
      lVar6 = *(long *)(lVar7 + 0x38);
      if (lVar6 == 0) {
        NativeHelper_01827500(lVar7);
        lVar6 = *(long *)(lVar7 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = NativeHelper_018274a4();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = NativeHelper_018274a4();
      }
      Game_Controller_FMViewController_ShowView_18d6f2c
                (*(void **)PTR_DAT_0386ac58,false,(void *)**(undefined8 **)(lVar6 + 0xb8),
                 (void *)0x0);
      if (self->delayAdCoroutine != (void *)0x0) {
        UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->delayAdCoroutine,(void *)0x0);
      }
      pvVar5 = (void *)NativeHelper_019f9608(self);
      pvVar5 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar5,(void *)0x0);
      ppvVar3 = &self->delayAdCoroutine;
      self->delayAdCoroutine = pvVar5;
    }
    else {
      TKCommon_PlayGameView_ShowRateUsDialogForExpLevel_18f1dd0(self,runtimeMethod_00);
      if ((bRam0000000003ab25cc & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d918);
        bRam0000000003ab25cc = 1;
      }
      puVar1 = PTR_DAT_0385d918;
      if (self->adsBreakWaitingCoroutine != (void *)0x0) {
        UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                  (self,self->adsBreakWaitingCoroutine,(void *)0x0);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      pTVar4 = Global_get_RemoteConfig_18048d8((void *)0x0);
      if (pTVar4 == (TKLClient_TKLSwitcherConfig *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      if (pTVar4->FM_ShowAdsBreak == false) {
        return;
      }
      pvVar5 = (void *)NativeHelper_019f9420(self);
      pvVar5 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar5,(void *)0x0);
      ppvVar3 = &self->adsBreakWaitingCoroutine;
      self->adsBreakWaitingCoroutine = pvVar5;
    }
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppvVar3 >> 0xc & 0x3f),
                      ((ulong)ppvVar3 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

