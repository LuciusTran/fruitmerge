// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void QuitGame() { }
// Ghidra address: 019f6b2c; ELF VA: 0x18f6b2c; file offset: 0x18f2b2c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_QuitGame_18f2b2c(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  Game_UserData *pGVar5;
  Game_UserData *self_00;
  void *pvVar6;
  void *runtimeMethod_00;
  float fVar7;
  
  puVar2 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25bb & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25bb = 1;
  }
  pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if (pGVar5 != (Game_UserData *)0x0) {
    Game_UserData_SaveCurrentScore_18c9a5c(pGVar5,self->mCurrentScore,(void *)0x0);
    pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if ((self_00 != (Game_UserData *)0x0) &&
       (iVar4 = Game_UserData_GetHistoryScore_18c9a14(self_00,(void *)0x0),
       pGVar5 != (Game_UserData *)0x0)) {
      Game_UserData_RecordQuitExpLevelData_18ca884(pGVar5,iVar4,(void *)0x0);
      pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (pGVar5 != (Game_UserData *)0x0) {
        Game_UserData_RecordOnceGameData_18caf38(pGVar5,(void *)0x0);
        if (self->delayAdCoroutine != (void *)0x0) {
          UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->delayAdCoroutine,(void *)0x0);
        }
        if (self->showExpLevelUpCoroutine != (void *)0x0) {
          UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                    (self,self->showExpLevelUpCoroutine,(void *)0x0);
        }
        if (self->adsBreakWaitingCoroutine != (void *)0x0) {
          UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                    (self,self->adsBreakWaitingCoroutine,(void *)0x0);
        }
        pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pGVar5 != (Game_UserData *)0x0) {
          bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar5,(void *)0x0);
          if (!bVar3) {
            return;
          }
          pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
          if (pGVar5 != (Game_UserData *)0x0) {
            iVar4 = Game_UserData_get_CurrentTaskDuration_18d39b4(pGVar5,(void *)0x0);
            pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
            if (pvVar6 != (void *)0x0) {
              fVar7 = *(float *)((long)pvVar6 + 0x20);
              if (cRam0000000003ab1f7f == '\0') {
                NativeHelper_017ef284(PTR_DAT_0385d8b8);
                cRam0000000003ab1f7f = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              iVar1 = -0x80000000;
              if ((float)(int)fVar7 != INFINITY) {
                iVar1 = (int)fVar7;
              }
              Game_UserData_set_CurrentTaskDuration_18d3b08(pGVar5,iVar1 + iVar4,(void *)0x0);
              pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
              if (pGVar5 != (Game_UserData *)0x0) {
                iVar4 = Game_UserData_get_CurrentTaskClickNumber_18d39fc(pGVar5,(void *)0x0);
                pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                if (pvVar6 != (void *)0x0) {
                  Game_UserData_set_CurrentTaskClickNumber_18d3b5c
                            (pGVar5,*(int *)((long)pvVar6 + 0x24) + iVar4,(void *)0x0);
                  pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                  if (pvVar6 != (void *)0x0) {
                    runtimeMethod_00 = *(void **)puVar2;
                    *(undefined4 *)((long)pvVar6 + 0x20) = 0;
                    pvVar6 = Singleton_get_Instance_27784f4(runtimeMethod_00);
                    if (pvVar6 != (void *)0x0) {
                      *(undefined4 *)((long)pvVar6 + 0x24) = 0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

