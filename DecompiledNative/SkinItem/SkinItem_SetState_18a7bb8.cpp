// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetState(E_SkinItem_State state, SkinItemData itemData, bool homeView = true) { }
// Ghidra address: 019abbb8; ELF VA: 0x18abbb8; file offset: 0x18a7bb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinItem_SetState_18a7bb8
               (SkinItem *self,void *state,SkinItemData *itemData,bool homeView,void *runtimeMethod)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  TKCommon_NormalClickButton *pTVar7;
  LocalizationManager *pLVar8;
  Game_UserData *pGVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  void *pvVar15;
  void **ppvVar16;
  undefined *puVar17;
  Recovered_Color RVar18;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  uVar2 = (uint)state;
  if ((bRam0000000003ab2291 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db48);
    NativeHelper_017ef284(PTR_DAT_0385e8e0);
    NativeHelper_017ef284(PTR_DAT_03866aa0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868a00);
    NativeHelper_017ef284(PTR_DAT_03868a08);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    NativeHelper_017ef284(PTR_DAT_03868a10);
    NativeHelper_017ef284(PTR_DAT_03868a18);
    NativeHelper_017ef284(PTR_DAT_0385db50);
    NativeHelper_017ef284(PTR_DAT_03868a20);
    NativeHelper_017ef284(PTR_DAT_03868a28);
    NativeHelper_017ef284(PTR_DAT_03860940);
    NativeHelper_017ef284(PTR_DAT_03868a30);
    NativeHelper_017ef284(PTR_DAT_038610d8);
    NativeHelper_017ef284(PTR_DAT_03868a38);
    NativeHelper_017ef284(PTR_DAT_03863c08);
    NativeHelper_017ef284(PTR_DAT_03868a40);
    NativeHelper_017ef284(PTR_DAT_03864730);
    NativeHelper_017ef284(PTR_DAT_03864ca8);
    bRam0000000003ab2291 = 1;
  }
  if (uVar2 == 2) {
    pvVar15 = self->_imgSkin;
    pvVar5 = *(void **)PTR_DAT_03868a30;
  }
  else {
    if (itemData == (SkinItemData *)0x0) goto LAB_019ac488;
    ppvVar16 = &self->_skinName;
    *ppvVar16 = itemData->Name;
    NativeHelper_017ef228(ppvVar16);
    pvVar15 = self->_imgSkin;
    pvVar5 = *ppvVar16;
  }
  pvVar5 = Game_Const_GetSprite_GetSkin_18da8ec(pvVar5,(void *)0x0);
  if (pvVar15 == (void *)0x0) goto LAB_019ac488;
  NativeHelper_0345dd98(pvVar15,pvVar5,0);
  bVar3 = uVar2 == 2;
  self->_isHomeView = homeView;
  bVar1 = 1 < uVar2;
  if (self->_imgLock == (void *)0x0) goto LAB_019ac488;
  NativeHelper_0335236c(self->_imgLock,bVar3 != bVar1,0);
  if (self->_imgMask == (void *)0x0) goto LAB_019ac488;
  NativeHelper_0335236c(self->_imgMask,bVar3 != bVar1,0);
  if (self->_txtComingSoon == (void *)0x0) goto LAB_019ac488;
  NativeHelper_0335236c(self->_txtComingSoon,uVar2 == 2,0);
  if ((self->_txtUnlock == (void *)0x0) ||
     (lVar6 = NativeHelper_0334f4c8(self->_txtUnlock,0), lVar6 == 0)) goto LAB_019ac488;
  NativeHelper_0335236c(lVar6,bVar3 != bVar1,0);
  if ((self->_btnSkin == (TKCommon_NormalClickButton *)0x0) ||
     (lVar6 = NativeHelper_0334f4c8(self->_btnSkin,0), lVar6 == 0)) goto LAB_019ac488;
  NativeHelper_0335236c(lVar6,uVar2 < 2,0);
  if ((self->_btnSkin == (TKCommon_NormalClickButton *)0x0) ||
     (pvVar5 = *(void **)&self->_btnSkin->field_0x100, pvVar5 == (void *)0x0)) goto LAB_019ac488;
  UnityEngine_Events_UnityEventBase_RemoveAllListeners_325f478(pvVar5,(void *)0x0);
  if (self->_progressRoot == (void *)0x0) goto LAB_019ac488;
  NativeHelper_0335236c(self->_progressRoot,uVar2 == 3 || uVar2 == 5,0);
  pTVar7 = self->_btnInfo;
  if ((uVar2 == 2) || (!homeView)) {
    if ((pTVar7 == (TKCommon_NormalClickButton *)0x0) ||
       (lVar6 = NativeHelper_0334f4c8(pTVar7,0), lVar6 == 0)) goto LAB_019ac488;
    NativeHelper_0335236c(lVar6,0,0);
  }
  else {
    if ((pTVar7 == (TKCommon_NormalClickButton *)0x0) ||
       (lVar6 = NativeHelper_0334f4c8(pTVar7,0), lVar6 == 0)) goto LAB_019ac488;
    NativeHelper_0335236c(lVar6,1,0);
    if ((self->_btnInfo == (TKCommon_NormalClickButton *)0x0) ||
       (pvVar5 = *(void **)&self->_btnInfo->field_0x100, pvVar5 == (void *)0x0)) goto LAB_019ac488;
    UnityEngine_Events_UnityEventBase_RemoveAllListeners_325f478(pvVar5,(void *)0x0);
    if (self->_btnInfo == (TKCommon_NormalClickButton *)0x0) goto LAB_019ac488;
    pvVar15 = *(void **)&self->_btnInfo->field_0x100;
    pvVar5 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
    UnityEngine_Events_UnityAction_UnityAction_325f530
              (pvVar5,self,*(void **)PTR_DAT_03868a08,(void *)0x0);
    if (pvVar15 == (void *)0x0) goto LAB_019ac488;
    UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar15,pvVar5,(void *)0x0);
  }
  puVar17 = PTR_DAT_0385db10;
  if (uVar2 < 2) {
    pTVar7 = self->_btnSkin;
    if (uVar2 == 0) {
      if (pTVar7 != (TKCommon_NormalClickButton *)0x0) {
        pTVar7->field_0x117 = 0;
        lVar6 = NativeHelper_03660b60(pTVar7,0);
        pvVar5 = self->_btnSprites;
        if (pvVar5 != (void *)0x0) {
          if (*(int *)((long)pvVar5 + 0x18) == 0) goto LAB_019ac48c;
          if (lVar6 != 0) {
            NativeHelper_0345dd98(lVar6,*(undefined8 *)((long)pvVar5 + 0x20),0);
            puVar17 = PTR_DAT_0385e8e0;
            plVar14 = self->_txtUseState;
            if (*(int *)(*(long *)PTR_DAT_0385e8e0 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            if (plVar14 != (long *)0x0) {
              (**(code **)(*plVar14 + 0x5e8))
                        (plVar14,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 0x58),
                         *(undefined8 *)(*plVar14 + 0x5f0));
              if (*(int *)(*(long *)PTR_DAT_0385db48 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              RVar18 = ColorUtil_HexToColor_1873c78(*(void **)PTR_DAT_03868a10,(void *)0x0);
              if (self->_txtUseStateOutline != (CircleOutline *)0x0) {
                NativeHelper_0366a8f8
                          (RVar18.component0,RVar18.component1,RVar18.component2,RVar18.component3,
                           self->_txtUseStateOutline,0);
                if (self->_txtUseStateShadow != (void *)0x0) {
                  NativeHelper_0366a8f8
                            (RVar18.component0,RVar18.component1,RVar18.component2,RVar18.component3
                             ,self->_txtUseStateShadow,0);
                  goto LAB_019ac464;
                }
              }
            }
          }
        }
      }
    }
    else if (pTVar7 != (TKCommon_NormalClickButton *)0x0) {
      pTVar7->field_0x117 = 1;
      lVar6 = NativeHelper_03660b60(pTVar7,0);
      pvVar5 = self->_btnSprites;
      if (pvVar5 != (void *)0x0) {
        if ((*(uint *)((long)pvVar5 + 0x18) & 0xfffffffe) == 0) {
LAB_019ac48c:
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        if (lVar6 != 0) {
          NativeHelper_0345dd98(lVar6,*(undefined8 *)((long)pvVar5 + 0x28),0);
          puVar17 = PTR_DAT_0385e8e0;
          plVar14 = self->_txtUseState;
          if (*(int *)(*(long *)PTR_DAT_0385e8e0 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x5e8))
                      (plVar14,*(undefined8 *)(*(long *)(*(long *)puVar17 + 0xb8) + 0x50),
                       *(undefined8 *)(*plVar14 + 0x5f0));
            if (*(int *)(*(long *)PTR_DAT_0385db48 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            RVar18 = ColorUtil_HexToColor_1873c78(*(void **)PTR_DAT_03868a28,(void *)0x0);
            if (self->_txtUseStateOutline != (CircleOutline *)0x0) {
              NativeHelper_0366a8f8
                        (RVar18.component0,RVar18.component1,RVar18.component2,RVar18.component3,
                         self->_txtUseStateOutline,0);
              if (self->_txtUseStateShadow != (void *)0x0) {
                NativeHelper_0366a8f8
                          (RVar18.component0,RVar18.component1,RVar18.component2,RVar18.component3,
                           self->_txtUseStateShadow,0);
                if (self->_btnSkin != (TKCommon_NormalClickButton *)0x0) {
                  pvVar15 = *(void **)&self->_btnSkin->field_0x100;
                  pvVar5 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
                  UnityEngine_Events_UnityAction_UnityAction_325f530
                            (pvVar5,self,*(void **)PTR_DAT_03868a00,(void *)0x0);
                  if (pvVar15 != (void *)0x0) {
                    UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar15,pvVar5,(void *)0x0);
                    goto LAB_019ac464;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_019ac488;
  }
  if (uVar2 == 2) goto LAB_019ac464;
  if ((int)uVar2 < 5) {
    if (uVar2 == 3) {
      pvVar15 = self->_skinName;
      pvVar5 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
      if (pvVar5 == (void *)0x0) goto LAB_019ac488;
      uVar10 = NativeHelper_02aa50f0(pvVar15,*(undefined8 *)((long)pvVar5 + 0x28),0);
      if ((uVar10 & 1) == 0) {
        iVar4 = 0;
      }
      else {
        pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar17);
        if (pGVar9 == (Game_UserData *)0x0) goto LAB_019ac488;
        iVar4 = Game_UserData_GetNextSkinAccumulatedScore_18d0198(pGVar9,(void *)0x0);
      }
      plVar14 = self->_txtUnlock;
      pLVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866aa0);
      if ((pLVar8 == (LocalizationManager *)0x0) ||
         (pvVar5 = LocalizationManager_LoadLocalizedText_186dc88
                             (pLVar8,*(void **)PTR_DAT_03860940,(void *)0x0),
         puVar17 = PTR_DAT_0385c2d8, itemData == (SkinItemData *)0x0)) goto LAB_019ac488;
      iStack_64 = itemData->UnlockValue;
      uVar11 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_64);
      puVar13 = (undefined8 *)PTR_DAT_03868a40;
      goto LAB_019ac380;
    }
    if (uVar2 != 4) goto LAB_019ac464;
    plVar14 = self->_txtUnlock;
    pLVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866aa0);
    puVar13 = (undefined8 *)PTR_DAT_038610d8;
joined_r0x019ac170:
    if ((pLVar8 == (LocalizationManager *)0x0) ||
       (pvVar5 = LocalizationManager_LoadLocalizedText_186dc88(pLVar8,(void *)*puVar13,(void *)0x0),
       itemData == (SkinItemData *)0x0)) goto LAB_019ac488;
    iStack_64 = itemData->UnlockValue;
    uVar11 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_64);
    uVar11 = NativeHelper_02aa74d0
                       (*(undefined8 *)PTR_DAT_0385db50,*(undefined8 *)PTR_DAT_03868a18,uVar11,0);
    if ((pvVar5 == (void *)0x0) ||
       (pvVar5 = (void *)NativeHelper_02aa8c18(pvVar5,*(undefined8 *)PTR_DAT_03868a20,uVar11,0),
       plVar14 == (long *)0x0)) goto LAB_019ac488;
    lVar6 = *plVar14;
  }
  else if (uVar2 == 5) {
    pvVar5 = self->_skinName;
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_019ac488;
    pvVar15 = Game_UserData_GetCurrentTaskSkin_18d0598(pGVar9,(void *)0x0);
    uVar10 = NativeHelper_02aa50f0(pvVar5,pvVar15,0);
    if ((uVar10 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar17);
      if (pGVar9 == (Game_UserData *)0x0) goto LAB_019ac488;
      iVar4 = Game_UserData_get_CurrentTaskSkinGainProgress_18d3438(pGVar9,(void *)0x0);
    }
    plVar14 = self->_txtUnlock;
    pLVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866aa0);
    if ((pLVar8 == (LocalizationManager *)0x0) ||
       (pvVar5 = LocalizationManager_LoadLocalizedText_186dc88
                           (pLVar8,*(void **)PTR_DAT_03864730,(void *)0x0),
       puVar17 = PTR_DAT_0385c2d8, itemData == (SkinItemData *)0x0)) goto LAB_019ac488;
    iStack_64 = itemData->UnlockValue;
    uVar11 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_64);
    puVar13 = (undefined8 *)PTR_DAT_0385db50;
LAB_019ac380:
    uVar11 = NativeHelper_02aa74d0(*puVar13,*(undefined8 *)PTR_DAT_03868a18,uVar11,0);
    if ((pvVar5 == (void *)0x0) ||
       (uVar11 = NativeHelper_02aa8c18(pvVar5,*(undefined8 *)PTR_DAT_03868a20,uVar11,0),
       plVar14 == (long *)0x0)) {
LAB_019ac488:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar11,*(undefined8 *)(*plVar14 + 0x5f0));
    if (self->_imgProgress == (void *)0x0) goto LAB_019ac488;
    NativeHelper_0346b188((float)iVar4 / (float)itemData->UnlockValue,self->_imgProgress,0);
    plVar14 = self->_txtProgress;
    iStack_68 = iVar4;
    uVar11 = NativeHelper_017ef40c(*(undefined8 *)(puVar17 + 0x48),&iStack_68);
    iStack_6c = itemData->UnlockValue;
    uVar12 = NativeHelper_017ef40c(*(undefined8 *)(puVar17 + 0x48),&iStack_6c);
    pvVar5 = (void *)NativeHelper_02aa74d0(*(undefined8 *)PTR_DAT_03868a38,uVar11,uVar12,0);
    if (plVar14 == (long *)0x0) goto LAB_019ac488;
    lVar6 = *plVar14;
  }
  else {
    if (uVar2 == 6) {
      plVar14 = self->_txtUnlock;
      pLVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866aa0);
      puVar13 = (undefined8 *)PTR_DAT_03864ca8;
      goto joined_r0x019ac170;
    }
    if (uVar2 != 7) goto LAB_019ac464;
    plVar14 = self->_txtUnlock;
    pLVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_03866aa0);
    if ((pLVar8 == (LocalizationManager *)0x0) ||
       (pvVar5 = LocalizationManager_LoadLocalizedText_186dc88
                           (pLVar8,*(void **)PTR_DAT_03863c08,(void *)0x0), plVar14 == (long *)0x0))
    goto LAB_019ac488;
    lVar6 = *plVar14;
  }
  (**(code **)(lVar6 + 0x5e8))(plVar14,pvVar5,*(undefined8 *)(lVar6 + 0x5f0));
LAB_019ac464:
  *(uint *)&self->_currentState = uVar2;
  return;
}

