// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowStarterPackDialog() { }
// Ghidra address: 019f2ed0; ELF VA: 0x18f2ed0; file offset: 0x18eeed0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ShowStarterPackDialog_18eeed0
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  TKLClient_TKLSwitcherConfig *pTVar4;
  IAPItemManager *self_00;
  Game_UserData *pGVar5;
  undefined8 uVar6;
  void *key;
  void *extraout_x1;
  long lVar7;
  long lVar8;
  int iStack_14;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2598 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867228);
    NativeHelper_017ef284(PTR_DAT_038687d0);
    NativeHelper_017ef284(PTR_DAT_03867240);
    bRam0000000003ab2598 = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  pTVar4 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar4 != (TKLClient_TKLSwitcherConfig *)0x0) {
    if (pTVar4->ShowStarterPackDialog != false) {
      self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d920);
      if (self_00 == (IAPItemManager *)0x0) goto LAB_019f30d4;
      bVar2 = IAPItemManager_get_IsStarterBundleActive_18100b4(self_00,(void *)0x0);
      puVar1 = PTR_DAT_0385db10;
      if (!bVar2) {
        pGVar5 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        if (pGVar5 == (Game_UserData *)0x0) goto LAB_019f30d4;
        iVar3 = Game_UserData_GetTotalLevels_18c9af8(pGVar5,(void *)0x0);
        if (0 < iVar3) {
          pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if (pGVar5 == (Game_UserData *)0x0) goto LAB_019f30d4;
          iStack_14 = Game_UserData_GetTotalLevels_18c9af8(pGVar5,(void *)0x0);
          iStack_14 = iStack_14 + 1;
          uVar6 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_14);
          uVar6 = NativeHelper_02a9d074(*(undefined8 *)PTR_DAT_03867228,uVar6,0);
          key = (void *)NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_03867240,uVar6,0);
          bVar2 = UnityEngine_PlayerPrefs_HasKey_32466e4(key,(void *)0x0);
          if (!bVar2) {
            pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
            if (pGVar5 == (Game_UserData *)0x0) goto LAB_019f30d4;
            bVar2 = Game_UserData_IsTodayStarterPackShown_18cdd24(pGVar5,(void *)0x0);
            if (!bVar2) {
              lVar8 = *(long *)PTR_DAT_0385c390;
              lVar7 = *(long *)(lVar8 + 0x38);
              if (lVar7 == 0) {
                NativeHelper_01827500(lVar8);
                lVar7 = *(long *)(lVar8 + 0x38);
              }
              lVar7 = *(long *)(lVar7 + 0x10);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = NativeHelper_018274a4();
              }
              if (*(int *)(lVar7 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = NativeHelper_018274a4();
              }
              Game_Controller_FMViewController_ShowView_18d6f2c
                        (*(void **)PTR_DAT_038687d0,false,(void *)**(undefined8 **)(lVar7 + 0xb8),
                         (void *)0x0);
              pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
              if (pGVar5 == (Game_UserData *)0x0) goto LAB_019f30d4;
              Game_UserData_SaveLastShowStarterPack_18cded0(pGVar5,(void *)0x0);
            }
          }
        }
      }
    }
    return;
  }
LAB_019f30d4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

