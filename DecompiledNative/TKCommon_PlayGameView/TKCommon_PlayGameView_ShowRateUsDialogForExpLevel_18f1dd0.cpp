// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowRateUsDialogForExpLevel() { }
// Ghidra address: 019f5dd0; ELF VA: 0x18f5dd0; file offset: 0x18f1dd0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ShowRateUsDialogForExpLevel_18f1dd0
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  Game_UserData *self_00;
  TKLClient_TKLSwitcherConfig *pTVar6;
  TKCommon_AdjustSDK *self_01;
  long lVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25c1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25c1 = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar3);
  puVar3 = PTR_DAT_0385d918;
  if (self_00 != (Game_UserData *)0x0) {
    iVar5 = Game_UserData_GetExpLevel_18c70c4(self_00,(void *)0x0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar3);
    }
    pTVar6 = Global_get_RemoteConfig_18048d8((void *)0x0);
    puVar3 = PTR_DAT_0386acb0;
    if (pTVar6 != (TKLClient_TKLSwitcherConfig *)0x0) {
      if (iVar5 <= pTVar6->FM_ShowRateUsForExpLevel) {
        return;
      }
      if ((bRam0000000003ab25c2 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c390);
        NativeHelper_017ef284(PTR_DAT_03866d18);
        NativeHelper_017ef284(PTR_DAT_0386acb0);
        NativeHelper_017ef284(PTR_DAT_0386acb8);
        NativeHelper_017ef284(PTR_DAT_0386acc0);
        bRam0000000003ab25c2 = 1;
      }
      iVar5 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar3,0,(void *)0x0);
      if (iVar5 == 0) {
        self_01 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866d18);
        if (self_01 != (TKCommon_AdjustSDK *)0x0) {
          bVar4 = TKCommon_AdjustSDK_get_IsAdUser_1918238(self_01,(void *)0x0);
          lVar8 = *(long *)PTR_DAT_0385c390;
          lVar7 = *(long *)(lVar8 + 0x38);
          if (bVar4) {
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
            uVar1 = *(ushort *)(lVar7 + 0x135);
            puVar2 = (undefined8 *)PTR_DAT_0386acb8;
          }
          else {
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
            uVar1 = *(ushort *)(lVar7 + 0x135);
            puVar2 = (undefined8 *)PTR_DAT_0386acc0;
          }
          if ((uVar1 & 1) == 0) {
            lVar7 = NativeHelper_018274a4();
          }
          Game_Controller_FMViewController_ShowTopView_18d5bb0
                    ((void *)*puVar2,100,false,(void *)**(undefined8 **)(lVar7 + 0xb8),(void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,1,(void *)0x0);
          if (pcRam0000000003abb5f0 == (code *)0x0) {
            pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
          }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003abb5f0)();
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

