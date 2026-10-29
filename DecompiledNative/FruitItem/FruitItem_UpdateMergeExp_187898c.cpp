// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateMergeExp() { }
// Ghidra address: 0197c98c; ELF VA: 0x187c98c; file offset: 0x187898c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_UpdateMergeExp_187898c(FruitItem *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  int lastExpLevel;
  uint value;
  long lVar15;
  TKLClient_TKLSwitcherConfig *pTVar16;
  Game_UserData *self_00;
  Game_UserData *self_01;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *pvVar17;
  int *piVar18;
  MergeFruit *pMVar19;
  undefined1 auVar20 [16];
  
  puVar2 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20b7 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20b7 = 1;
    runtimeMethod = extraout_x1;
  }
  pMVar19 = self->_mergeFruit;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar2,runtimeMethod);
  }
  bVar13 = UnityEngine_object_op_Implicit_3252d84(pMVar19,(void *)0x0);
  puVar2 = PTR_DAT_0385d918;
  if (!bVar13) {
    return;
  }
  pMVar19 = self->_mergeFruit;
  if (pMVar19 != (MergeFruit *)0x0) {
    lVar15 = *(long *)PTR_DAT_0385d918;
    iVar1 = pMVar19->expMergeCount + 1;
    pMVar19->expMergeCount = iVar1;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar16 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar16 != (TKLClient_TKLSwitcherConfig *)0x0) {
      if (pTVar16->FM_LimitExpCount < iVar1) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        pTVar16 = Global_get_RemoteConfig_18048d8((void *)0x0);
        if (pTVar16 == (TKLClient_TKLSwitcherConfig *)0x0) goto LAB_0197cab4;
        piVar18 = &pTVar16->FM_LimitExpPerMerge;
      }
      else {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        pTVar16 = Global_get_RemoteConfig_18048d8((void *)0x0);
        if (pTVar16 == (TKLClient_TKLSwitcherConfig *)0x0) goto LAB_0197cab4;
        piVar18 = &pTVar16->FM_ExpPerMerge;
      }
      iVar1 = *piVar18;
      self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
      puVar3 = PTR_DAT_03869bf8;
      puVar2 = PTR_DAT_0385d950;
      if (self_00 != (Game_UserData *)0x0) {
        auVar20._8_4_ = iVar1;
        auVar20._0_8_ = self_00;
        auVar20._12_4_ = 0;
        if ((bRam0000000003ab241f & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385d918,iVar1,0);
          NativeHelper_017ef284(PTR_DAT_0385d950);
          NativeHelper_017ef284(PTR_DAT_03869c00);
          NativeHelper_017ef284(PTR_DAT_03869c08);
          NativeHelper_017ef284(PTR_DAT_03869bf8);
          NativeHelper_017ef284(PTR_DAT_03868b40);
          auVar20 = NativeHelper_017ef284(PTR_DAT_03869c10);
          bRam0000000003ab241f = 1;
        }
        puVar5 = PTR_DAT_03869c08;
        puVar4 = PTR_DAT_03869c00;
        iVar14 = Game_UserData_GetExp_18ca674(auVar20._0_8_,auVar20._8_8_);
        pvVar17 = (void *)0x0;
        UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,iVar14 + iVar1,(void *)0x0);
        NativeHelper_0334aa10(0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        Messenger_Broadcast_1875470(*(void **)puVar5,(void *)0x0);
        lastExpLevel = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar4,(void *)0x0);
        value = Game_UserData_GetExpLevel_18c70c4(self_00,runtimeMethod_00);
        if ((0 < iVar14 + iVar1) && (lastExpLevel < (int)value)) {
          Game_UserData_RecordQuitExpLevelData_18ca884
                    ((Game_UserData *)(ulong)value,lastExpLevel,pvVar17);
          UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar4,value,(void *)0x0);
          auVar20 = NativeHelper_0334aa10(0);
          Game_UserData_RecordStartExpLevelData_18caa2c(auVar20._0_8_,auVar20._8_8_);
          bVar13 = Game_UserData_get_EnableTask_18cab28(self_01,runtimeMethod_01);
          pvVar17 = extraout_x1_00;
          if (!bVar13) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            Messenger_Broadcast_1875470(*(void **)PTR_DAT_03869c10,(void *)0x0);
            Messenger_Broadcast_1875470(*(void **)PTR_DAT_03868b40,(void *)0x0);
            pvVar17 = extraout_x1_01;
          }
          puVar2 = PTR_DAT_0385d918;
          lVar15 = *(long *)PTR_DAT_0385d918;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar15 = *(long *)puVar2;
            pvVar17 = extraout_x1_02;
          }
          *(int *)(*(long *)(lVar15 + 0xb8) + 100) = *(int *)(*(long *)(lVar15 + 0xb8) + 100) + 1;
          Game_UserData_LogLevelUp_18cab7c(self_00,pvVar17);
          puVar2 = PTR_DAT_0385d918;
          if ((bRam0000000003ab2441 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385d918);
            NativeHelper_017ef284(PTR_DAT_03869c58);
            NativeHelper_017ef284(PTR_DAT_03869c60);
            NativeHelper_017ef284(PTR_DAT_03869c68);
            NativeHelper_017ef284(PTR_DAT_03869c70);
            NativeHelper_017ef284(PTR_DAT_03869c78);
            NativeHelper_017ef284(PTR_DAT_03869c80);
            NativeHelper_017ef284(PTR_DAT_03869c88);
            NativeHelper_017ef284(PTR_DAT_03869c90);
            NativeHelper_017ef284(PTR_DAT_03869c98);
            NativeHelper_017ef284(PTR_DAT_03868898);
            NativeHelper_017ef284(PTR_DAT_03869ca0);
            NativeHelper_017ef284(PTR_DAT_038670f8);
            NativeHelper_017ef284(PTR_DAT_03867100);
            NativeHelper_017ef284(PTR_DAT_03869ca8);
            NativeHelper_017ef284(PTR_DAT_03869cb0);
            NativeHelper_017ef284(PTR_DAT_03869cb8);
            NativeHelper_017ef284(PTR_DAT_03869cc0);
            NativeHelper_017ef284(PTR_DAT_03869cc8);
            NativeHelper_017ef284(PTR_DAT_03869cd0);
            NativeHelper_017ef284(PTR_DAT_03869cd8);
            NativeHelper_017ef284(PTR_DAT_03869ce0);
            NativeHelper_017ef284(PTR_DAT_03869ce8);
            NativeHelper_017ef284(PTR_DAT_03869cf0);
            NativeHelper_017ef284(PTR_DAT_03869cf8);
            NativeHelper_017ef284(PTR_DAT_03869d00);
            bRam0000000003ab2441 = 1;
          }
          puVar3 = PTR_DAT_03869ca0;
          lVar15 = *(long *)puVar2;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar15 = *(long *)puVar2;
          }
          puVar12 = PTR_DAT_03869cf0;
          puVar11 = PTR_DAT_03869ce8;
          puVar10 = PTR_DAT_03869cd0;
          puVar9 = PTR_DAT_03869cb8;
          puVar8 = PTR_DAT_03869ca8;
          puVar7 = PTR_DAT_03869c98;
          puVar6 = PTR_DAT_03869c80;
          puVar5 = PTR_DAT_03869c78;
          puVar4 = PTR_DAT_03869c68;
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar3,(uint)*(byte *)(*(long *)(lVar15 + 0xb8) + 0x19),(void *)0x0);
          lVar15 = *(long *)puVar2;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar15 = *(long *)puVar2;
          }
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar8,*(int *)(*(long *)(lVar15 + 0xb8) + 0x1c),(void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar12,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar5,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24),(void *)0x0
                    );
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar9,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),(void *)0x0
                    );
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar6,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c),(void *)0x0
                    );
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar10,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar4,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34),(void *)0x0
                    );
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar7,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),(void *)0x0
                    );
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)puVar11,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869cb0,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869cc8,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_038670f8,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869cd8,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4c),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869ce0,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869cf8,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869c70,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869cc0,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x5c),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03867100,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x74),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869c60,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869c88,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 100),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869c58,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869d00,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x6c),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03869c90,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70),
                     (void *)0x0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8
                    (*(void **)PTR_DAT_03868898,*(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78),
                     (void *)0x0);
          if (pcRam0000000003abb5f0 == (code *)0x0) {
            pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
          }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003abb5f0)();
          return;
        }
        return;
      }
    }
  }
LAB_0197cab4:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

