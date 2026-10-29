// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateScoreUI() { }
// Ghidra address: 0197d05c; ELF VA: 0x187d05c; file offset: 0x187905c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_UpdateScoreUI_187905c(FruitItem *self,void *runtimeMethod)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  TKCommon_PlayGameView *self_00;
  Game_UserData *self_01;
  TKLClient_TKLSwitcherConfig *pTVar7;
  TKCommon_AdjustSDK *self_02;
  void *extraout_x1;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20b6 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03867168);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20b6 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar4 = PTR_DAT_03867168;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar3,runtimeMethod);
  }
  self_00 = (TKCommon_PlayGameView *)NativeHelper_01cad430(*(undefined8 *)puVar4);
  bVar5 = UnityEngine_object_op_Inequality_324dec8(self_00,(void *)0x0,(void *)0x0);
  if (!bVar5) {
    return;
  }
  if (self_00 != (TKCommon_PlayGameView *)0x0) {
    TKCommon_PlayGameView_UpdateScore_18f1930(self_00,self->m_MergeScore,(void *)0x0);
    self_01 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (self_01 != (Game_UserData *)0x0) {
      Game_UserData_AddLevelMergeScore_18cb7a4(self_01,self->m_MergeScore,(void *)0x0);
      if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      pTVar7 = Global_get_RemoteConfig_18048d8((void *)0x0);
      puVar3 = PTR_DAT_0386acb0;
      if (pTVar7 != (TKLClient_TKLSwitcherConfig *)0x0) {
        if (self->m_FruitType != pTVar7->FM_ShowRateUsForFruitLevel + -1) {
          return;
        }
        if ((bRam0000000003ab25c2 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385c390,0);
          NativeHelper_017ef284(PTR_DAT_03866d18);
          NativeHelper_017ef284(PTR_DAT_0386acb0);
          NativeHelper_017ef284(PTR_DAT_0386acb8);
          NativeHelper_017ef284(PTR_DAT_0386acc0);
          bRam0000000003ab25c2 = 1;
        }
        iVar6 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar3,0,(void *)0x0);
        if (iVar6 != 0) {
          return;
        }
        self_02 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866d18);
        if (self_02 == (TKCommon_AdjustSDK *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        bVar5 = TKCommon_AdjustSDK_get_IsAdUser_1918238(self_02,(void *)0x0);
        lVar9 = *(long *)PTR_DAT_0385c390;
        lVar8 = *(long *)(lVar9 + 0x38);
        if (bVar5) {
          if (lVar8 == 0) {
            NativeHelper_01827500(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = NativeHelper_018274a4();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          uVar1 = *(ushort *)(lVar8 + 0x135);
          puVar2 = (undefined8 *)PTR_DAT_0386acb8;
        }
        else {
          if (lVar8 == 0) {
            NativeHelper_01827500(lVar9);
            lVar8 = *(long *)(lVar9 + 0x38);
          }
          lVar8 = *(long *)(lVar8 + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = NativeHelper_018274a4();
          }
          if (*(int *)(lVar8 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          uVar1 = *(ushort *)(lVar8 + 0x135);
          puVar2 = (undefined8 *)PTR_DAT_0386acc0;
        }
        if ((uVar1 & 1) == 0) {
          lVar8 = NativeHelper_018274a4();
        }
        Game_Controller_FMViewController_ShowTopView_18d5bb0
                  ((void *)*puVar2,100,false,(void *)**(undefined8 **)(lVar8 + 0xb8),(void *)0x0);
        UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,1,(void *)0x0);
        if (pcRam0000000003abb5f0 == (code *)0x0) {
          pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
        }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abb5f0)();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

