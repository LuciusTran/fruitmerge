// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 01984634; ELF VA: 0x1884634; file offset: 0x1880634
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool MergeFruit__UpgradeFruit_d__123_MoveNext_1880634
               (MergeFruit__UpgradeFruit_d__123 *self,void *runtimeMethod)

{
  MergeFruit *self_00;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 uVar6;
  FruitItem *pFVar7;
  DataManager *pDVar8;
  Game_UserData *pGVar9;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *in_x2;
  LocalNotification_Action *pLVar10;
  Recovered_Vector3 RVar11;
  
  if ((bRam0000000003ab2106 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_03867128);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03866ef0);
    NativeHelper_017ef284(PTR_DAT_03867130);
    bRam0000000003ab2106 = 1;
  }
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    if (self->fruit == (FruitItem *)0x0) goto LAB_019848f4;
    uVar6 = NativeHelper_0334f400(self->fruit,0);
    NativeHelper_01a630d4(uVar6,0,0);
    pvVar5 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866ef0);
    UnityEngine_WaitForSecondsRealtime_WaitForSecondsRealtime_32556e4
              (pvVar5,_UNK_00a47734,(void *)0x0);
    self->__2__current = pvVar5;
    NativeHelper_017ef228(&self->__2__current,pvVar5);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pFVar7 = self->fruit;
    self_00 = self->__4__this;
    self->__1__state = -1;
    if (pFVar7 != (FruitItem *)0x0) {
      iVar2 = pFVar7->m_FruitType;
      pvVar5 = (void *)NativeHelper_0334f400(pFVar7,0);
      if ((pvVar5 != (void *)0x0) &&
         (RVar11 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0),
         self_00 != (MergeFruit *)0x0)) {
        pvVar5 = MergeFruit_CreateFruitItem_1878ab8(self_00,iVar2 + 1,RVar11,in_x2);
        if (self->fruit != (FruitItem *)0x0) {
          uVar6 = NativeHelper_0334f4c8(self->fruit,0);
          if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0);
          }
          NativeHelper_03357b5c(uVar6,0);
          if ((pvVar5 != (void *)0x0) &&
             (pFVar7 = UnityEngine_GameObject_GetComponent_1b75510
                                 (pvVar5,*(void **)PTR_DAT_03867120), pFVar7 != (FruitItem *)0x0)) {
            FruitItem_ReleaseDown_187657c(pFVar7,runtimeMethod_00);
            pvVar5 = (void *)NativeHelper_0335213c(pvVar5,0);
            if (pvVar5 != (void *)0x0) {
              RVar11 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
              FruitItem_UpdateAnimation_18793e0(pFVar7,RVar11,runtimeMethod_01);
              FruitItem_RecordFruitMax_1877984(pFVar7,runtimeMethod_02);
              iVar2 = pFVar7->m_FruitType;
              if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              NativeHelper_01ca5cc4
                        (*(undefined8 *)PTR_DAT_03867130,iVar2,*(undefined8 *)PTR_DAT_03867128);
              puVar3 = PTR_DAT_0385d9d8;
              pDVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d9d8);
              if (pDVar8 != (DataManager *)0x0) {
                DataManager_UpdateDailyTaskProgress_1809ddc(pDVar8,1,1,-1,(void *)0x0);
                pDVar8 = Singleton_get_Instance_27784f4(*(void **)puVar3);
                if (pDVar8 != (DataManager *)0x0) {
                  DataManager_UpdateDailyTaskProgress_1809ddc
                            (pDVar8,2,1,pFVar7->m_FruitType + 1,(void *)0x0);
                  pLVar10 = self->action;
                  if (pLVar10 != (LocalNotification_Action *)0x0) {
                    (*pLVar10->Title)(*(undefined8 *)(pLVar10 + 1),
                                      *(undefined8 *)&pLVar10->Foreground);
                  }
                  puVar3 = PTR_DAT_0385db10;
                  pGVar9 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
                  if (pGVar9 != (Game_UserData *)0x0) {
                    bVar4 = Game_UserData_get_EnableTask_18cab28(pGVar9,(void *)0x0);
                    if (bVar4) {
                      pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar3);
                      if (pGVar9 == (Game_UserData *)0x0) goto LAB_019848f4;
                      Game_UserData_TryUpdateCurrentTask_18d34d4
                                (pGVar9,pFVar7->m_FruitType + 1,self_00->_gameState == 4,(void *)0x0
                                );
                    }
                    goto LAB_019848dc;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_019848f4:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_019848dc:
  return iVar1 == 0;
}

