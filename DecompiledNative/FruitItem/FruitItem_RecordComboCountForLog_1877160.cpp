// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RecordComboCountForLog() { }
// Ghidra address: 0197b160; ELF VA: 0x187b160; file offset: 0x1877160
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_RecordComboCountForLog_1877160(FruitItem *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
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
  undefined *puVar13;
  long lVar14;
  void *pvVar15;
  DataManager *pDVar16;
  void *extraout_x1;
  
  puVar3 = PTR_DAT_0385d918;
  if ((bRam0000000003ab20af & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20af = 1;
    runtimeMethod = extraout_x1;
  }
  puVar4 = PTR_DAT_0385d9d8;
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar14,runtimeMethod);
    lVar14 = *(long *)puVar3;
  }
  pvVar15 = *(void **)puVar4;
  *(int *)(*(long *)(lVar14 + 0xb8) + 0x48) = *(int *)(*(long *)(lVar14 + 0xb8) + 0x48) + 1;
  pDVar16 = Singleton_get_Instance_27784f4(pvVar15);
  if (pDVar16 == (DataManager *)0x0) goto LAB_0197b30c;
  DataManager_UpdateDailyTaskProgress_1809ddc(pDVar16,3,1,-1,(void *)0x0);
  pDVar16 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  puVar4 = PTR_DAT_0385db10;
  if (pDVar16 == (DataManager *)0x0) goto LAB_0197b30c;
  DataManager_UpdateDailyTaskProgress_1809ddc(pDVar16,4,1,self->ComboCount,(void *)0x0);
  lVar14 = *(long *)puVar3;
  iVar1 = self->ComboCount;
  iVar2 = *(int *)(lVar14 + 0xe4);
  if (iVar1 < 4) {
    if (iVar1 == 2) {
      if (iVar2 == 0) {
        NativeHelper_017ef404();
        lVar14 = *(long *)puVar3;
      }
      *(int *)(*(long *)(lVar14 + 0xb8) + 0x4c) = *(int *)(*(long *)(lVar14 + 0xb8) + 0x4c) + 1;
    }
    else if (iVar1 == 3) {
      if (iVar2 == 0) {
        NativeHelper_017ef404();
        lVar14 = *(long *)puVar3;
      }
      *(int *)(*(long *)(lVar14 + 0xb8) + 0x50) = *(int *)(*(long *)(lVar14 + 0xb8) + 0x50) + 1;
    }
    else {
LAB_0197b294:
      if (iVar2 == 0) {
        NativeHelper_017ef404();
        lVar14 = *(long *)puVar3;
      }
      *(int *)(*(long *)(lVar14 + 0xb8) + 0x5c) = *(int *)(*(long *)(lVar14 + 0xb8) + 0x5c) + 1;
    }
  }
  else if (iVar1 == 4) {
    if (iVar2 == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar3;
    }
    *(int *)(*(long *)(lVar14 + 0xb8) + 0x54) = *(int *)(*(long *)(lVar14 + 0xb8) + 0x54) + 1;
  }
  else {
    if (iVar1 != 5) goto LAB_0197b294;
    if (iVar2 == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar3;
    }
    *(int *)(*(long *)(lVar14 + 0xb8) + 0x58) = *(int *)(*(long *)(lVar14 + 0xb8) + 0x58) + 1;
  }
  pvVar15 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  puVar3 = PTR_DAT_0385d918;
  if (pvVar15 != (void *)0x0) {
    if ((bRam0000000003ab2441 & 1) == 0) {
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
      bRam0000000003ab2441 = 1;
    }
    puVar4 = PTR_DAT_03869ca0;
    lVar14 = *(long *)puVar3;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar3;
    }
    puVar13 = PTR_DAT_03869cf0;
    puVar12 = PTR_DAT_03869ce8;
    puVar11 = PTR_DAT_03869cd0;
    puVar10 = PTR_DAT_03869cb8;
    puVar9 = PTR_DAT_03869ca8;
    puVar8 = PTR_DAT_03869c98;
    puVar7 = PTR_DAT_03869c80;
    puVar6 = PTR_DAT_03869c78;
    puVar5 = PTR_DAT_03869c68;
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar4,(uint)*(byte *)(*(long *)(lVar14 + 0xb8) + 0x19),(void *)0x0);
    lVar14 = *(long *)puVar3;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar3;
    }
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar9,*(int *)(*(long *)(lVar14 + 0xb8) + 0x1c),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar13,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar6,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar10,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar7,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x2c),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar11,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar5,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x34),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar8,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar12,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cb0,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cc8,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_038670f8,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cd8,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x4c),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869ce0,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cf8,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c70,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cc0,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03867100,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x74),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c60,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c88,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 100),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c58,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869d00,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x6c),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c90,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03868898,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78),
               (void *)0x0);
    if (pcRam0000000003abb5f0 == (code *)0x0) {
      pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
    }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abb5f0)();
    return;
  }
LAB_0197b30c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

