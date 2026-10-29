// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RecordMergeCountForLog() { }
// Ghidra address: 0197b698; ELF VA: 0x187b698; file offset: 0x1877698
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_RecordMergeCountForLog_1877698(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  DataManager *pDVar7;
  Game_UserData *self_00;
  undefined8 uVar8;
  void *extraout_x1;
  int iStack_28;
  int iStack_24;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab20ae & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20ae = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_0385d9d8;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar5,runtimeMethod);
    lVar5 = *(long *)puVar1;
  }
  pvVar6 = *(void **)puVar2;
  *(int *)(*(long *)(lVar5 + 0xb8) + 0x1c) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x1c) + 1;
  pDVar7 = Singleton_get_Instance_27784f4(pvVar6);
  if (pDVar7 != (DataManager *)0x0) {
    DataManager_UpdateDailyTaskProgress_1809ddc(pDVar7,1,1,-1,(void *)0x0);
    pDVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    puVar2 = PTR_DAT_0385db10;
    if (pDVar7 != (DataManager *)0x0) {
      DataManager_UpdateDailyTaskProgress_1809ddc(pDVar7,2,1,self->m_FruitType + 2,(void *)0x0);
      iVar3 = self->m_FruitType;
      if (iVar3 < 5) {
        if (iVar3 < 2) {
          if (iVar3 == 0) {
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              NativeHelper_017ef404();
              lVar5 = *(long *)puVar1;
            }
            *(int *)(*(long *)(lVar5 + 0xb8) + 0x20) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x20) + 1;
          }
          else if (iVar3 == 1) {
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              NativeHelper_017ef404();
              lVar5 = *(long *)puVar1;
            }
            *(int *)(*(long *)(lVar5 + 0xb8) + 0x24) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x24) + 1;
          }
        }
        else if (iVar3 == 2) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar5 = *(long *)puVar1;
          }
          *(int *)(*(long *)(lVar5 + 0xb8) + 0x28) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x28) + 1;
        }
        else if (iVar3 == 3) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar5 = *(long *)puVar1;
          }
          *(int *)(*(long *)(lVar5 + 0xb8) + 0x2c) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x2c) + 1;
        }
        else if (iVar3 == 4) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar5 = *(long *)puVar1;
          }
          *(int *)(*(long *)(lVar5 + 0xb8) + 0x30) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x30) + 1;
        }
      }
      else if (iVar3 < 7) {
        if (iVar3 == 5) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar5 = *(long *)puVar1;
          }
          *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) + 1;
        }
        else if (iVar3 == 6) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar5 = *(long *)puVar1;
          }
          *(int *)(*(long *)(lVar5 + 0xb8) + 0x38) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x38) + 1;
        }
      }
      else if (iVar3 == 7) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) + 1;
      }
      else if (iVar3 == 8) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        *(int *)(*(long *)(lVar5 + 0xb8) + 0x40) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x40) + 1;
      }
      else if (iVar3 == 9) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar5 = *(long *)puVar1;
        }
        *(int *)(*(long *)(lVar5 + 0xb8) + 0x44) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x44) + 1;
      }
      self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (self_00 != (Game_UserData *)0x0) {
        Game_UserData_RecordOnceGameData_18caf38(self_00,(void *)0x0);
        pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        puVar2 = PTR_DAT_03869d10;
        puVar1 = PTR_DAT_03869c00;
        if (pvVar6 != (void *)0x0) {
          if ((bRam0000000003ab2425 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_03869c00,0);
            NativeHelper_017ef284(PTR_DAT_03869d10);
            bRam0000000003ab2425 = 1;
          }
          iVar3 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar1,(void *)0x0);
          puVar1 = PTR_DAT_0385c2d8;
          iStack_24 = iVar3;
          uVar8 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
          pvVar6 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar2,uVar8,0);
          iVar4 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar6,(void *)0x0);
          iStack_28 = iVar3;
          uVar8 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_28);
          pvVar6 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar2,uVar8,0);
          UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar6,iVar4 + 1,(void *)0x0);
          NativeHelper_0334aa10(0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

