// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Merge(FruitItem fruit) { }
// Ghidra address: 0197c0dc; ELF VA: 0x187c0dc; file offset: 0x18780dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_Merge_18780dc(FruitItem *self,FruitItem *fruit,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  FruitItem *self_00;
  FruitItem *self_01;
  Game_UserData *pGVar10;
  long lVar11;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  void *runtimeMethod_05;
  void *runtimeMethod_06;
  void *runtimeMethod_07;
  void *runtimeMethod_08;
  void *runtimeMethod_09;
  void *extraout_x1;
  void *runtimeMethod_10;
  void *runtimeMethod_11;
  void *pvVar12;
  void *in_x4;
  SoundMgr *self_02;
  float fVar13;
  float fVar14;
  float fVar15;
  Recovered_Vector3 RVar16;
  Recovered_Vector3 RVar17;
  undefined1 auVar18 [16];
  
  if ((bRam0000000003ab20b5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_03867128);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867130);
    bRam0000000003ab20b5 = 1;
  }
  uVar8 = NativeHelper_0334f400(self,0);
  NativeHelper_01a630d4(uVar8,0,0);
  if (fruit != (FruitItem *)0x0) {
    uVar8 = NativeHelper_0334f400(fruit,0);
    pvVar12 = (void *)0x0;
    NativeHelper_01a630d4(uVar8,0);
    self->IsMerged = true;
    fruit->IsMerged = true;
    FruitItem_RecordMergeCountForLog_1877698(self,runtimeMethod_00);
    pvVar9 = (void *)NativeHelper_0334f400(self,0);
    if (pvVar9 != (void *)0x0) {
      RVar16 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
      pvVar9 = (void *)NativeHelper_0334f400(fruit,0);
      if (pvVar9 != (void *)0x0) {
        RVar17 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
        FruitItem_PlayMergeVibrate_1878900(self_00,runtimeMethod_01);
        iVar5 = FruitItem_GetCurrentCombo_1876d84(self,fruit,pvVar12);
        if (self->m_FruitType == 10) {
          pvVar9 = (void *)NativeHelper_0334f400(self,0);
          if (pvVar9 != (void *)0x0) {
            RVar16 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
            FruitItem_PlayDestroyParticle_1879178(self,RVar16,runtimeMethod_03);
            pvVar9 = (void *)NativeHelper_0334f400(fruit,0);
            if (pvVar9 != (void *)0x0) {
              RVar16 = UnityEngine_Transform_get_position_325a714(pvVar9,(void *)0x0);
              FruitItem_PlayDestroyParticle_1879178(self,RVar16,runtimeMethod_04);
              FruitItem_DestroyOldFruits_187886c(self,fruit,pvVar12);
LAB_0197c244:
              puVar3 = PTR_DAT_0385d490;
              if ((bRam0000000003ab20bc & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_0385d490);
                bRam0000000003ab20bc = 1;
              }
              lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
              if ((bRam0000000003ab206f & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_03866e68);
                NativeHelper_017ef284(PTR_DAT_03866e70);
                NativeHelper_017ef284(PTR_DAT_0385d490);
                bRam0000000003ab206f = 1;
              }
              fVar13 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
              if (fVar13 - *(float *)(lVar11 + 0x44) < _UNK_00a47714) {
                return;
              }
              fVar13 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
              lVar6 = *(long *)(lVar11 + 0x28);
              *(float *)(lVar11 + 0x44) = fVar13;
              if (lVar6 != 0) {
                iVar5 = *(int *)(lVar6 + 0x18);
                iVar2 = 0;
                if (iVar5 != 0) {
                  iVar2 = *(int *)(lVar11 + 0x3c) / iVar5;
                }
                self_02 = (SoundMgr *)**(undefined8 **)(*(long *)PTR_DAT_0385d490 + 0xb8);
                iVar1 = 0;
                if (iVar5 != 1) {
                  iVar1 = *(int *)(lVar11 + 0x3c) - iVar2 * iVar5;
                }
                uVar7 = NativeHelper_02519d28(lVar6,iVar1,*(undefined8 *)PTR_DAT_03866e70);
                if (self_02 != (SoundMgr *)0x0) {
                  SoundMgr_PlaySound_1871d4c
                            (self_02,(void *)(uVar7 & 0xffffffff),false,1.0,false,in_x4);
                  *(int *)(lVar11 + 0x3c) = *(int *)(lVar11 + 0x3c) + 1;
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
          }
        }
        else {
          FruitItem_UpdateMergeExp_187898c(self,runtimeMethod_02);
          FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod_05);
          iVar2 = self->m_FruitType;
          if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          pvVar9 = *(void **)PTR_DAT_03867128;
          NativeHelper_01ca5cc4(*(undefined8 *)PTR_DAT_03867130,iVar2 + 1);
          if (self->_mergeFruit != (MergeFruit *)0x0) {
            fVar13 = (RVar16.component0 + RVar17.component0) * 0.5;
            fVar14 = (RVar16.component1 + RVar17.component1) * 0.5;
            fVar15 = (RVar16.component2 + RVar17.component2) * 0.5;
            RVar16.component1 = fVar14;
            RVar16.component0 = fVar13;
            RVar16.component2 = fVar15;
            pvVar12 = MergeFruit_CreateFruitItem_1878ab8(self->_mergeFruit,iVar2 + 1,RVar16,pvVar9);
            if ((pvVar12 != (void *)0x0) &&
               (self_01 = UnityEngine_GameObject_GetComponent_1b75510
                                    (pvVar12,*(void **)PTR_DAT_03867120),
               self_01 != (FruitItem *)0x0)) {
              self_01->isPlayTouchSound = true;
              self_01->ComboCount = iVar5 + 1;
              FruitItem_StartWaitingForCombo_1876de4(self_01,runtimeMethod_06);
              FruitItem_ReleaseDown_187657c(self_01,runtimeMethod_07);
              FruitItem_PlayCreateAnimation_1878c14(self_01,runtimeMethod_08);
              RVar17.component1 = fVar14;
              RVar17.component0 = fVar13;
              RVar17.component2 = fVar15;
              FruitItem_PlayMergeParticle_1878dc4(self_01,RVar17,runtimeMethod_09);
              if (self->_toolEffect != (void *)0x0) {
                auVar18 = NativeHelper_03352428(self->_toolEffect,0);
                pvVar12 = auVar18._8_8_;
                if ((auVar18._0_8_ & 1) != 0) {
                  FruitItem_ShowToolEffect_1876ce8(self_01,pvVar12);
                  pvVar12 = extraout_x1;
                }
                FruitItem_UpdateScoreUI_187905c(self_01,pvVar12);
                iVar5 = self_01->ComboCount;
                FruitItem_LogFruitMerge_1877a18(self_01,runtimeMethod_10);
                FruitItem_RecordFruitMax_1877984(self_01,runtimeMethod_11);
                puVar3 = PTR_DAT_0385db10;
                pGVar10 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
                if (pGVar10 != (Game_UserData *)0x0) {
                  bVar4 = Game_UserData_get_EnableTask_18cab28(pGVar10,(void *)0x0);
                  if (bVar4) {
                    pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
                    if ((self->_mergeFruit == (MergeFruit *)0x0) ||
                       (pGVar10 == (Game_UserData *)0x0)) goto LAB_0197c40c;
                    bVar4 = self->_mergeFruit->_gameState == 4;
                    pvVar9 = (void *)(ulong)bVar4;
                    Game_UserData_TryUpdateCurrentTask_18d34d4
                              (pGVar10,self_01->m_FruitType + 1,bVar4,(void *)0x0);
                    FruitItem_DestroyOldFruits_187886c(self,fruit,pvVar9);
                  }
                  else {
                    FruitItem_DestroyOldFruits_187886c(self,fruit,pvVar9);
                  }
                  if (1 < iVar5) {
                    return;
                  }
                  goto LAB_0197c244;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0197c40c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

