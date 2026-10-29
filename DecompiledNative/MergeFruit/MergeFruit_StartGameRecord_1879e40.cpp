// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartGameRecord() { }
// Ghidra address: 0197de40; ELF VA: 0x187de40; file offset: 0x1879e40
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StartGameRecord_1879e40(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
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
  int iVar12;
  Game_UserData *pGVar13;
  void *pvVar14;
  long lVar15;
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab20e7 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20e7 = 1;
  }
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar13 != (Game_UserData *)0x0) {
    Game_UserData_RecordStartExpLevelData_18caa2c(pGVar13,(void *)0x0);
    pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar13 != (Game_UserData *)0x0) {
      Game_UserData_RecordStartPlayLevelData_18c9e18(pGVar13,(void *)0x0);
      pvVar14 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      puVar2 = PTR_DAT_03869ca0;
      puVar1 = PTR_DAT_0385d918;
      if (pvVar14 != (void *)0x0) {
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
        puVar11 = PTR_DAT_03869cf0;
        puVar10 = PTR_DAT_03869ce8;
        puVar9 = PTR_DAT_03869cd0;
        puVar8 = PTR_DAT_03869cb8;
        puVar7 = PTR_DAT_03869ca8;
        puVar6 = PTR_DAT_03869c98;
        puVar5 = PTR_DAT_03869c80;
        puVar4 = PTR_DAT_03869c78;
        puVar3 = PTR_DAT_03869c68;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar2,0,(void *)0x0);
        lVar15 = *(long *)puVar1;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          NativeHelper_017ef404(lVar15);
          lVar15 = *(long *)puVar1;
        }
        pvVar14 = *(void **)puVar7;
        *(bool *)(*(long *)(lVar15 + 0xb8) + 0x19) = iVar12 == 1;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar11;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar4;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar8;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar5;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar9;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar3;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar6;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        pvVar14 = *(void **)puVar10;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
        puVar2 = PTR_DAT_03869cb0;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869cc8;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_038670f8;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869cd8;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869ce0;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869cf8;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869c70;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869cc0;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03867100;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x5c) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869c60;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x74) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869c88;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869c58;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 100) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869d00;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03869c90;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar2,(void *)0x0);
        puVar2 = PTR_DAT_03868898;
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70) = iVar12;
        iVar12 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar2,0,(void *)0x0);
        *(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78) = iVar12;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

