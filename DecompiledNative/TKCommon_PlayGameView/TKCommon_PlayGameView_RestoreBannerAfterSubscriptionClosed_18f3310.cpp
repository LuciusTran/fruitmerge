// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RestoreBannerAfterSubscriptionClosed() { }
// Ghidra address: 019f7310; ELF VA: 0x18f7310; file offset: 0x18f3310
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_RestoreBannerAfterSubscriptionClosed_18f3310
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *pvVar6;
  IAPItemManager *pIVar7;
  long lVar8;
  long lVar9;
  Ads_AdsPlayController *pAVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000003ab25b4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d3d0);
    bRam0000000003ab25b4 = 1;
  }
  if (self->_IsShowGame_k__BackingField == false) {
    return;
  }
  lVar9 = NativeHelper_0334f4c8(self,0);
  if (lVar9 != 0) {
    auVar12 = NativeHelper_033524d4(lVar9,0);
    if ((auVar12._0_8_ & 1) == 0) {
      return;
    }
    TKCommon_PlayGameView_RefreshRemoveAd_18f0238(self,auVar12._8_8_);
    if (*(int *)(*(long *)PTR_DAT_0385d3d0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pAVar10 = Ads_AdsPlayController_get_Instance_18c155c((void *)0x0);
    puVar3 = PTR_DAT_0385d920;
    if (pAVar10 != (Ads_AdsPlayController *)0x0) {
      if ((bRam0000000003ab23c4 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385d910,0);
        NativeHelper_017ef284(PTR_DAT_0385d918);
        NativeHelper_017ef284(PTR_DAT_038682f8);
        NativeHelper_017ef284(PTR_DAT_0385d920);
        bRam0000000003ab23c4 = 1;
      }
      pIVar7 = Singleton_get_Instance_27784f4(*(void **)puVar3);
      if (pIVar7 == (IAPItemManager *)0x0) {
code_r0x019c6180:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      bVar5 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar7,(void *)0x0);
      if (!bVar5) {
        pIVar7 = Singleton_get_Instance_27784f4(*(void **)puVar3);
        if (pIVar7 == (IAPItemManager *)0x0) goto code_r0x019c6180;
        bVar5 = IAPItemManager_get_IsNoAdsActive_180ff84(pIVar7,(void *)0x0);
        puVar3 = PTR_DAT_0385d918;
        if (!bVar5) {
          if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar5 = Global_IsBottomBannerValid_18041c4((void *)0x0);
          if (bVar5) {
            if (pAVar10->m_isBannerCreate == false) {
              if (*(int *)(*(long *)PTR_DAT_038682f8 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              lVar9 = NativeHelper_02da96d0(0);
              puVar2 = PTR_DAT_0385d910;
              if (*(int *)(*(long *)PTR_DAT_0385d910 + 0xe4) == 0) {
                NativeHelper_017ef404(*(long *)PTR_DAT_0385d910);
              }
              if (cRam0000000003ab1e70 == '\0') {
                NativeHelper_017ef284(PTR_DAT_0385d910);
                cRam0000000003ab1e70 = '\x01';
              }
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                NativeHelper_017ef404();
                lVar8 = *(long *)puVar2;
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
              if ((lVar8 == 0) || (lVar9 == 0)) goto code_r0x019c6180;
              NativeHelper_02daaf98(lVar9,*(undefined8 *)(lVar8 + 0x48),6,0);
              pAVar10->m_isBannerCreate = true;
            }
            puVar2 = PTR_DAT_038682f8;
            pAVar10->m_HasCallShownBanner = true;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            lVar9 = NativeHelper_02da96d0(0);
            if (lVar9 == 0) goto code_r0x019c6180;
            NativeHelper_02dab0b4(lVar9,0);
            if (pAVar10->m_HasLoadedBanner != false) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              puVar3 = PTR_DAT_0385d918;
              if ((bRam0000000003ab1df4 & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_0385d918,0);
                NativeHelper_017ef284(PTR_DAT_0385d948);
                NativeHelper_017ef284(PTR_DAT_0385d950);
                NativeHelper_017ef284(PTR_DAT_0385d958);
                bRam0000000003ab1df4 = 1;
              }
              puVar2 = PTR_DAT_0385d950;
              lVar9 = *(long *)puVar3;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                NativeHelper_017ef404();
                lVar9 = *(long *)puVar3;
              }
              puVar4 = PTR_DAT_0385d958;
              puVar3 = PTR_DAT_0385d948;
              lVar8 = *(long *)puVar2;
              iVar1 = *(int *)(lVar8 + 0xe4);
              *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 0x7e) = 1;
              if (iVar1 == 0) {
                NativeHelper_017ef404(lVar8);
              }
              pvVar6 = *(void **)puVar4;
              lVar9 = *(long *)puVar3;
              if (*(long *)(lVar9 + 0x38) == 0) {
                NativeHelper_017ef284(PTR_DAT_03867000);
                NativeHelper_017ef284(PTR_DAT_0385d950);
                if (*(long *)(lVar9 + 0x38) == 0) {
                  NativeHelper_01827500(lVar9);
                }
              }
              puVar3 = PTR_DAT_0385d950;
              if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              Messenger_OnBroadcasting_1875378(pvVar6,(void *)0x0);
              lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
              uVar11 = NativeHelper_02134ffc
                                 (lVar8,pvVar6,&stack0xffffffffffffffd8,
                                  *(undefined8 *)PTR_DAT_03867000);
              if ((uVar11 & 1) != 0) {
                lVar8 = **(long **)(lVar9 + 0x38);
                if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = NativeHelper_018274a4(lVar8);
                }
                lVar8 = NativeHelper_017ef408(0,lVar8);
                if (lVar8 == 0) {
                  NativeHelper_017ef298(PTR_DAT_0385d950);
                  NativeHelper_0160f45c();
                  pvVar6 = Messenger_CreateBroadcastSignatureException_187537c(pvVar6,(void *)0x0);
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef3f4(pvVar6,lVar9);
                }
                (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),1,*(undefined8 *)(lVar8 + 0x28));
              }
              return;
            }
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

