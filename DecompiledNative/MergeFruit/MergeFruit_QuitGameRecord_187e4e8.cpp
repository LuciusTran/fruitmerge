// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void QuitGameRecord() { }
// Ghidra address: 019824e8; ELF VA: 0x18824e8; file offset: 0x187e4e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_QuitGameRecord_187e4e8(MergeFruit *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  Game_UserData *pGVar5;
  Game_UserData *pGVar6;
  void *pvVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_0385db10;
  if ((bRam0000000003ab20e8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20e8 = 1;
  }
  pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if ((pGVar6 != (Game_UserData *)0x0) &&
     (iVar4 = Game_UserData_GetExpLevel_18c70c4(pGVar6,(void *)0x0), pGVar5 != (Game_UserData *)0x0)
     ) {
    Game_UserData_RecordQuitExpLevelData_18ca884(pGVar5,iVar4,(void *)0x0);
    pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if ((pGVar6 != (Game_UserData *)0x0) &&
       (iVar4 = Game_UserData_GetTotalLevels_18c9af8(pGVar6,(void *)0x0),
       pGVar5 != (Game_UserData *)0x0)) {
      Game_UserData_RecordQuitPlayLevelData_18c9b9c(pGVar5,iVar4,(void *)0x0);
      pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (pGVar5 != (Game_UserData *)0x0) {
        Game_UserData_RecordOnceGameData_18caf38(pGVar5,(void *)0x0);
        pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pGVar5 != (Game_UserData *)0x0) {
          bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar5,(void *)0x0);
          if (!bVar3) {
            return;
          }
          pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
          if (pGVar5 != (Game_UserData *)0x0) {
            iVar4 = Game_UserData_get_CurrentTaskDuration_18d39b4(pGVar5,(void *)0x0);
            pvVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
            if (pvVar7 != (void *)0x0) {
              fVar8 = *(float *)((long)pvVar7 + 0x20);
              if (cRam0000000003ab1f7f == '\0') {
                NativeHelper_017ef284(PTR_DAT_0385d8b8);
                cRam0000000003ab1f7f = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              iVar1 = -0x80000000;
              if ((float)(int)fVar8 != INFINITY) {
                iVar1 = (int)fVar8;
              }
              Game_UserData_set_CurrentTaskDuration_18d3b08(pGVar5,iVar1 + iVar4,(void *)0x0);
              pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
              if (pGVar5 != (Game_UserData *)0x0) {
                iVar4 = Game_UserData_get_CurrentTaskClickNumber_18d39fc(pGVar5,(void *)0x0);
                pvVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                puVar2 = PTR_DAT_03869ff0;
                if (pvVar7 != (void *)0x0) {
                  iVar4 = *(int *)((long)pvVar7 + 0x24) + iVar4;
                  if ((bRam0000000003ab24a1 & 1) == 0) {
                    NativeHelper_017ef284(PTR_DAT_03869ff0,iVar4,0);
                    bRam0000000003ab24a1 = 1;
                  }
                  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar2,iVar4,(void *)0x0);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

