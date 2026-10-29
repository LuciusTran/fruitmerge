// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateCurrentTaskItem() { }
// Ghidra address: 019d6f48; ELF VA: 0x18d6f48; file offset: 0x18d2f48
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Game_UserData_UpdateCurrentTaskItem_18d2f48(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *value;
  undefined8 *puVar9;
  void *extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  void *pvVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uStack_44;
  undefined4 uStack_38;
  int iStack_34;
  
  puVar2 = PTR_DAT_03869f48;
  puVar1 = PTR_DAT_03869f40;
  if ((bRam0000000003ab2496 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869f50);
    NativeHelper_017ef284(PTR_DAT_03869f58);
    NativeHelper_017ef284(PTR_DAT_0385db00);
    NativeHelper_017ef284(PTR_DAT_03869f60);
    NativeHelper_017ef284(PTR_DAT_03869f68);
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    NativeHelper_017ef284(PTR_DAT_03869f70);
    NativeHelper_017ef284(PTR_DAT_03869f40);
    NativeHelper_017ef284(PTR_DAT_03869f78);
    NativeHelper_017ef284(PTR_DAT_03869f30);
    NativeHelper_017ef284(PTR_DAT_03869f80);
    NativeHelper_017ef284(PTR_DAT_03869f88);
    NativeHelper_017ef284(PTR_DAT_03869f90);
    NativeHelper_017ef284(PTR_DAT_03869f98);
    NativeHelper_017ef284(PTR_DAT_03869fa0);
    NativeHelper_017ef284(PTR_DAT_03869fa8);
    NativeHelper_017ef284(PTR_DAT_03869f48);
    NativeHelper_017ef284(PTR_DAT_0385dbb0);
    bRam0000000003ab2496 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  Game_UserData___c__DisplayClass158_0___c__DisplayClass158_0_18d4354(lVar5,0);
  iVar4 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar2,0,(void *)0x0);
  puVar3 = PTR_DAT_03869fa0;
  puVar1 = PTR_DAT_0385d9c8;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x14) = iVar4;
    iVar4 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)puVar3,0,(void *)0x0);
    pvVar10 = *(void **)puVar1;
    *(int *)(lVar5 + 0x10) = iVar4;
    pvVar10 = Singleton_get_Instance_27784f4(pvVar10);
    if (pvVar10 != (void *)0x0) {
      lVar6 = ConfigManager_GetTaskList_18065e4(pvVar10,0);
      puVar9 = (undefined8 *)PTR_DAT_03869f80;
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x18) != 0)) {
        iVar4 = UnityEngine_PlayerPrefs_GetInt_3246000(*(void **)PTR_DAT_0385dbb0,0,(void *)0x0);
        if (iVar4 == -1) {
          uVar7 = Game_Util_Utils_Shuffle_1cf604c(lVar6,*(undefined8 *)PTR_DAT_03869f78);
          uVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03869f58);
          NativeHelper_023aa920(uVar8,lVar5,*(undefined8 *)PTR_DAT_03869f70,0);
          pvVar10 = (void *)NativeHelper_01c5ec38(uVar7,uVar8,*(undefined8 *)PTR_DAT_03869f50);
          puVar9 = (undefined8 *)PTR_DAT_03869f98;
          if (pvVar10 != (void *)0x0) {
            uStack_44 = *(undefined4 *)((long)pvVar10 + 0x10);
            uVar7 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_44);
            uVar7 = NativeHelper_02a9d074(*(undefined8 *)PTR_DAT_03869f88,uVar7,0);
            uVar8 = 0;
            uVar14 = 0x3f800000;
            uVar15 = 0x3f800000;
            goto LAB_019d729c;
          }
        }
        else {
          puVar9 = (undefined8 *)PTR_DAT_03869fa8;
          if (iVar4 < *(int *)(lVar6 + 0x18)) {
            pvVar10 = (void *)NativeHelper_0256950c(lVar6,iVar4,*(undefined8 *)PTR_DAT_03869f68);
            puVar1 = PTR_DAT_0385c2d8;
            iStack_34 = iVar4;
            uVar7 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_34);
            if (pvVar10 == (void *)0x0) goto LAB_019d7340;
            uStack_38 = *(undefined4 *)((long)pvVar10 + 0x10);
            uVar8 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
            uVar7 = NativeHelper_02aa74d0(*(undefined8 *)PTR_DAT_03869f90,uVar7,uVar8,0);
            uVar8 = 0x3f800000;
            uVar14 = _UNK_00a47658;
            uVar15 = _UNK_00a47754;
LAB_019d729c:
            NativeHelper_01919320(uVar8,uVar14,uVar15,0x3f800000,uVar7,0);
            if (*(int *)(*(long *)PTR_DAT_0385db00 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            value = LitJson_JsonMapper_ToJson_1854b54(pvVar10,(void *)0x0);
            UnityEngine_PlayerPrefs_SetString_3246394(*(void **)PTR_DAT_03869f30,value,(void *)0x0);
            UnityEngine_PlayerPrefs_SetInt_3245fa8
                      (*(void **)puVar2,*(int *)(lVar5 + 0x10),(void *)0x0);
            UnityEngine_PlayerPrefs_SetInt_3245fa8
                      (*(void **)puVar3,*(int *)((long)pvVar10 + 0x10),(void *)0x0);
            NativeHelper_0334aa10(0);
            return;
          }
        }
      }
      uVar7 = *puVar9;
      if (cRam0000000003ab24ba == '\0') {
        NativeHelper_017ef284(PTR_DAT_0385c360);
        cRam0000000003ab24ba = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0385c360 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      puVar1 = PTR_DAT_0385c360;
      uVar8 = 0;
      if ((bRam0000000003abaa1e & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c360,0);
        NativeHelper_017ef284(PTR_DAT_03868160);
        bRam0000000003abaa1e = 1;
        uVar8 = extraout_x1_00;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
        uVar8 = extraout_x1_01;
      }
      if (cRam0000000003ab2238 == '\0') {
        NativeHelper_017ef284(PTR_DAT_0385c360,uVar8);
        cRam0000000003ab2238 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        NativeHelper_017ef404();
        lVar5 = *(long *)puVar1;
      }
      plVar13 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      lVar5 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03868160) {
            puVar9 = (undefined8 *)(lVar5 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto code_r0x03322448;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)NativeHelper_018277d8(plVar13,*(long *)PTR_DAT_03868160,4);
code_r0x03322448:
                    /* WARNING: Could not recover jumptable at 0x03322460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar9)(plVar13,0,uVar7,puVar9[1]);
      return;
    }
  }
LAB_019d7340:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

