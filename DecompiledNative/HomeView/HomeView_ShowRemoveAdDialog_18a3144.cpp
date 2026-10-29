// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowRemoveAdDialog() { }
// Ghidra address: 019a7144; ELF VA: 0x18a7144; file offset: 0x18a3144
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_ShowRemoveAdDialog_18a3144(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  TKLClient_TKLSwitcherConfig *pTVar4;
  IAPItemManager *self_00;
  Game_UserData *self_01;
  long *data;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *extraout_x1;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2281 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038687f8);
    NativeHelper_017ef284(PTR_DAT_038687c8);
    bRam0000000003ab2281 = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  pTVar4 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar4 != (TKLClient_TKLSwitcherConfig *)0x0) {
    if (pTVar4->ShowRemoveAdDialog == false) {
      return;
    }
    self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d920);
    if (self_00 != (IAPItemManager *)0x0) {
      bVar3 = IAPItemManager_get_IsSubscriptionActive_1804360(self_00,(void *)0x0);
      puVar1 = PTR_DAT_0385db10;
      if (bVar3) {
        return;
      }
      self_01 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
      if (self_01 != (Game_UserData *)0x0) {
        bVar3 = Game_UserData_IsTodayRemoveAdShown_18cdf78(self_01,(void *)0x0);
        if (bVar3) {
          return;
        }
        data = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
        puVar2 = PTR_DAT_038687f8;
        if (data != (long *)0x0) {
          if ((*(long *)PTR_DAT_038687f8 != 0) &&
             (lVar5 = NativeHelper_017ef408(*(long *)PTR_DAT_038687f8,*(undefined8 *)(*data + 0x40))
             , lVar5 == 0)) {
            uVar7 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef3f4(uVar7,0);
          }
          if ((int)data[3] == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          data[4] = *(long *)puVar2;
          NativeHelper_017ef228();
          Game_Controller_FMViewController_ShowView_18d6f2c
                    (*(void **)PTR_DAT_038687c8,false,data,(void *)0x0);
          pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if (pvVar6 != (void *)0x0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = pvVar6;
            if ((bRam0000000003ab2456 & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_0385dc10);
              auVar8 = NativeHelper_017ef284(PTR_DAT_03869d98);
              bRam0000000003ab2456 = 1;
            }
            bVar3 = Game_UserData_IsTodayRemoveAdShown_18cdf78(auVar8._0_8_,auVar8._8_8_);
            puVar1 = PTR_DAT_03869d98;
            if (!bVar3) {
              if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              uVar7 = NativeHelper_02bf109c(0);
              NativeHelper_019d8390(uVar7,0);
              pvVar6 = (void *)NativeHelper_02c0e330(&stack0xffffffffffffffe8,0);
              UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,pvVar6,(void *)0x0);
              NativeHelper_0334aa10(0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

