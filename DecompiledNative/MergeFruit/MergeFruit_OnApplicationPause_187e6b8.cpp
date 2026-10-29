// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnApplicationPause(bool pauseStatus) { }
// Ghidra address: 019826b8; ELF VA: 0x18826b8; file offset: 0x187e6b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_OnApplicationPause_187e6b8(MergeFruit *self,bool pauseStatus,void *runtimeMethod)

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
  Game_UserData *pGVar15;
  Game_UserData *pGVar16;
  void *pvVar17;
  long lVar18;
  float fVar19;
  
  if (!pauseStatus) {
    self->_isPaused = false;
    puVar2 = PTR_DAT_0385db10;
    if ((bRam0000000003ab20e7 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385db10);
      bRam0000000003ab20e7 = 1;
    }
    pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar15 != (Game_UserData *)0x0) {
      Game_UserData_RecordStartExpLevelData_18caa2c(pGVar15,(void *)0x0);
      pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (pGVar15 != (Game_UserData *)0x0) {
        Game_UserData_RecordStartPlayLevelData_18c9e18(pGVar15,(void *)0x0);
        pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        puVar3 = PTR_DAT_03869ca0;
        puVar2 = PTR_DAT_0385d918;
        if (pvVar17 != (void *)0x0) {
          if ((bRam0000000003ab2442 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385d918,0);
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
            bRam0000000003ab2442 = 1;
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
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar3,0,(void *)0x0);
          lVar18 = *(long *)puVar2;
          if (*(int *)(lVar18 + 0xe4) == 0) {
            NativeHelper_017ef404(lVar18);
            lVar18 = *(long *)puVar2;
          }
          pvVar17 = *(void **)puVar8;
          *(bool *)(*(long *)(lVar18 + 0xb8) + 0x19) = iVar14 == 1;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar12;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar5;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar9;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar6;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar10;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar4;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar7;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          pvVar17 = *(void **)puVar11;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar17,(void *)0x0);
          puVar3 = PTR_DAT_03869cb0;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869cc8;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_038670f8;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869cd8;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869ce0;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4c) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869cf8;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869c70;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869cc0;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x58) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03867100;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x5c) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869c60;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x74) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869c88;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869c58;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 100) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869d00;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03869c90;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x6c) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
          puVar3 = PTR_DAT_03868898;
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x70) = iVar14;
          iVar14 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar3,0,(void *)0x0);
          *(int *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78) = iVar14;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  self->_isPaused = true;
  MergeFruit_SaveFruits_187a718(self,(void *)(ulong)pauseStatus);
  puVar2 = PTR_DAT_0385db10;
  if ((bRam0000000003ab20e8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20e8 = 1;
  }
  pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if ((pGVar16 != (Game_UserData *)0x0) &&
     (iVar14 = Game_UserData_GetExpLevel_18c70c4(pGVar16,(void *)0x0),
     pGVar15 != (Game_UserData *)0x0)) {
    Game_UserData_RecordQuitExpLevelData_18ca884(pGVar15,iVar14,(void *)0x0);
    pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    pGVar16 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if ((pGVar16 != (Game_UserData *)0x0) &&
       (iVar14 = Game_UserData_GetTotalLevels_18c9af8(pGVar16,(void *)0x0),
       pGVar15 != (Game_UserData *)0x0)) {
      Game_UserData_RecordQuitPlayLevelData_18c9b9c(pGVar15,iVar14,(void *)0x0);
      pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (pGVar15 != (Game_UserData *)0x0) {
        Game_UserData_RecordOnceGameData_18caf38(pGVar15,(void *)0x0);
        pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pGVar15 != (Game_UserData *)0x0) {
          bVar13 = Game_UserData_get_EnableTask_18cab28(pGVar15,(void *)0x0);
          if (!bVar13) {
            return;
          }
          pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
          if (pGVar15 != (Game_UserData *)0x0) {
            iVar14 = Game_UserData_get_CurrentTaskDuration_18d39b4(pGVar15,(void *)0x0);
            pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar2);
            if (pvVar17 != (void *)0x0) {
              fVar19 = *(float *)((long)pvVar17 + 0x20);
              if (cRam0000000003ab1f7f == '\0') {
                NativeHelper_017ef284(PTR_DAT_0385d8b8);
                cRam0000000003ab1f7f = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              iVar1 = -0x80000000;
              if ((float)(int)fVar19 != INFINITY) {
                iVar1 = (int)fVar19;
              }
              Game_UserData_set_CurrentTaskDuration_18d3b08(pGVar15,iVar1 + iVar14,(void *)0x0);
              pGVar15 = Singleton_get_Instance_27784f4(*(void **)puVar2);
              if (pGVar15 != (Game_UserData *)0x0) {
                iVar14 = Game_UserData_get_CurrentTaskClickNumber_18d39fc(pGVar15,(void *)0x0);
                pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                puVar2 = PTR_DAT_03869ff0;
                if (pvVar17 != (void *)0x0) {
                  iVar14 = *(int *)((long)pvVar17 + 0x24) + iVar14;
                  if ((bRam0000000003ab24a1 & 1) == 0) {
                    NativeHelper_017ef284(PTR_DAT_03869ff0,iVar14,0);
                    bRam0000000003ab24a1 = 1;
                  }
                  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar2,iVar14,(void *)0x0);
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

