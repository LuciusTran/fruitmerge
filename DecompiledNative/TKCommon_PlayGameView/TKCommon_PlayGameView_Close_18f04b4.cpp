// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Close() { }
// Ghidra address: 019f44b4; ELF VA: 0x18f44b4; file offset: 0x18f04b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_Close_18f04b4(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  Ads_AdsPlayController *pAVar3;
  
  puVar1 = PTR_DAT_0385d3d0;
  if ((bRam0000000003ab258d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d3d0);
    bRam0000000003ab258d = 1;
  }
  Game_Controller_View_Close_18d5904((Game_Controller_View *)self,(void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pAVar3 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
  puVar1 = PTR_DAT_038682f8;
  if (pAVar3 != (Ads_AdsPlayController *)0x0) {
    if ((bRam0000000003ab23c5 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385d918,0);
      NativeHelper_017ef284(PTR_DAT_038682f8);
      bRam0000000003ab23c5 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    lVar2 = NativeHelper_02da96d0(0);
    puVar1 = PTR_DAT_0385d918;
    if (lVar2 != 0) {
      NativeHelper_02dab0cc(lVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      Global_set_IsBannerActive_180456c(false,(void *)0x0);
      pAVar3->m_HasCallShownBanner = false;
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

