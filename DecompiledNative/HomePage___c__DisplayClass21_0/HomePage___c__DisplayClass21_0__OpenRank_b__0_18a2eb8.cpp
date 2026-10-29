// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <OpenRank>b__0(bool result) { }
// Ghidra address: 019a6eb8; ELF VA: 0x18a6eb8; file offset: 0x18a2eb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0198cd64) */
/* WARNING: Removing unreachable block (ram,0x0198cd78) */
/* WARNING: Removing unreachable block (ram,0x0198cd8c) */

void HomePage___c__DisplayClass21_0__OpenRank_b__0_18a2eb8(long param_1,ulong param_2)

{
  void *value;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  EventLogger *self;
  TKCommon_ToastParams *self_00;
  long lVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  void *pvVar17;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab226f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385e8e0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385e8f0);
    bRam0000000003ab226f = 1;
  }
  pvVar17 = *(void **)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar17,(void *)0x0,(void *)0x0);
  if (bVar6) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_019a6fc4;
    NativeHelper_036609c4(*(long *)(param_1 + 0x10),1,0);
  }
  if ((param_2 & 1) == 0) {
    self_00 = (TKCommon_ToastParams *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385e8f0);
    TKCommon_ToastParams_ToastParams_191226c(self_00,(void *)0x0);
    puVar1 = PTR_DAT_0385e8e0;
    if (*(int *)(*(long *)PTR_DAT_0385e8e0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    if (self_00 == (TKCommon_ToastParams *)0x0) {
LAB_019a6fc4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    self_00->_Msg_k__BackingField = *(void **)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    NativeHelper_017ef228();
    self_00->_Time_k__BackingField = 2.0;
    TKCommon_UIExtension_OpenToast_1912274(self_00,(void *)0x0);
  }
  puVar2 = PTR_DAT_0385f448;
  puVar1 = PTR_DAT_0385c390;
  pvVar17 = *(void **)(param_1 + 0x18);
  if ((bRam0000000003ab226b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385f448);
    NativeHelper_017ef284(PTR_DAT_038687b0);
    NativeHelper_017ef284(PTR_DAT_0385db20);
    NativeHelper_017ef284(PTR_DAT_0385e920);
    bRam0000000003ab226b = 1;
  }
  uVar12 = NativeHelper_02aa606c(pvVar17,0);
  lVar15 = *(long *)puVar1;
  lVar13 = *(long *)(lVar15 + 0x38);
  value = *(void **)puVar2;
  if ((uVar12 & 1) == 0) {
    value = pvVar17;
  }
  if (lVar13 == 0) {
    NativeHelper_01827500(lVar15);
    lVar13 = *(long *)(lVar15 + 0x38);
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = NativeHelper_018274a4();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar2 = PTR_DAT_038687b0;
  puVar1 = PTR_DAT_0385e750;
  lVar13 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = NativeHelper_018274a4();
  }
  Game_Controller_FMViewController_ShowView_18d6f2c
            (*(void **)puVar2,false,(void *)**(undefined8 **)(lVar13 + 0xb8),(void *)0x0);
  self = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar5 = PTR_DAT_0385e920;
  puVar4 = PTR_DAT_0385db20;
  puVar3 = PTR_DAT_0385ca30;
  puVar2 = PTR_DAT_0385ca28;
  if (self == (EventLogger *)0x0) {
LAB_019a6b5c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  EventLogger_LogEvent_189b15c
            (self,*(void **)PTR_DAT_0385db20,*(void **)PTR_DAT_0385e920,value,(void *)0x0,
             (void *)0x0);
  pvVar17 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  lVar13 = NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_02132ae8(lVar13,*(undefined8 *)puVar2);
  if ((lVar13 == 0) ||
     (NativeHelper_02133494(lVar13,*(undefined8 *)puVar5,value,*(undefined8 *)PTR_DAT_0385ca48),
     pvVar17 == (void *)0x0)) goto LAB_019a6b5c;
  lVar15 = *(long *)puVar4;
  if ((bRam0000000003ab221c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038679f8);
    NativeHelper_017ef284(PTR_DAT_03867a00);
    NativeHelper_017ef284(PTR_DAT_03867a08);
    NativeHelper_017ef284(PTR_DAT_0385de40);
    NativeHelper_017ef284(PTR_DAT_038679d0);
    NativeHelper_017ef284(PTR_DAT_03866d68);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_03867a10);
    NativeHelper_017ef284(PTR_DAT_03867a18);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_038679d8);
    NativeHelper_017ef284(PTR_DAT_038679e8);
    bRam0000000003ab221c = 1;
  }
  puVar1 = PTR_DAT_038679d0;
  lVar7 = *(long *)PTR_DAT_038679d0;
  if (lVar13 == 0) {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar7 = *(long *)puVar1;
    }
    plVar16 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    plVar8 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,1);
    if (plVar8 == (long *)0x0) goto code_r0x0198d074;
    if ((lVar15 != 0) &&
       (lVar7 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
    goto code_r0x0198d07c;
    if ((int)plVar8[3] == 0) goto code_r0x0198d078;
    plVar8[4] = lVar15;
    NativeHelper_017ef228(plVar8 + 4,lVar15);
    if (plVar16 == (long *)0x0) goto code_r0x0198d074;
    lVar10 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar7 = *(long *)PTR_DAT_03866d68;
    uVar9 = *(undefined8 *)PTR_DAT_038679e8;
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) goto code_r0x0198d004;
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar7 = *(long *)puVar1;
    }
    plVar16 = (long *)**(undefined8 **)(lVar7 + 0xb8);
    plVar8 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    if (plVar8 == (long *)0x0) goto code_r0x0198d074;
    if ((lVar15 != 0) &&
       (lVar7 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
code_r0x0198d07c:
      uVar9 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar9,0);
    }
    if ((int)plVar8[3] == 0) {
code_r0x0198d078:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar8[4] = lVar15;
    NativeHelper_017ef228(plVar8 + 4,lVar15);
    uVar9 = NativeHelper_0213315c(lVar13,*(undefined8 *)PTR_DAT_038679f8);
    uVar9 = NativeHelper_01c6ad88(uVar9,*(undefined8 *)PTR_DAT_0385de40);
    puVar1 = PTR_DAT_0385d098;
    lVar7 = NativeHelper_02aa78f4(*(undefined8 *)PTR_DAT_0385d098,uVar9,0);
    if ((lVar7 != 0) &&
       (lVar10 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto code_r0x0198d07c;
    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto code_r0x0198d078;
    plVar8[5] = lVar7;
    NativeHelper_017ef228(plVar8 + 5,lVar7);
    uVar9 = NativeHelper_021332b8(lVar13,*(undefined8 *)PTR_DAT_03867a00);
    uVar9 = NativeHelper_01c6ad88(uVar9,*(undefined8 *)PTR_DAT_03867a08);
    lVar7 = NativeHelper_02aa798c(*(undefined8 *)puVar1,uVar9,0);
    if ((lVar7 != 0) &&
       (lVar10 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
    goto code_r0x0198d07c;
    if (*(uint *)(plVar8 + 3) < 3) goto code_r0x0198d078;
    plVar8[6] = lVar7;
    NativeHelper_017ef228(plVar8 + 6,lVar7);
    if (plVar16 == (long *)0x0) goto code_r0x0198d074;
    lVar10 = *plVar16;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar7 = *(long *)PTR_DAT_03866d68;
    uVar9 = *(undefined8 *)PTR_DAT_038679d8;
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar7) goto code_r0x0198d004;
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
  }
  puVar11 = (undefined8 *)NativeHelper_018277d8(plVar16,lVar7,5);
code_r0x0198d014:
  (*(code *)*puVar11)(plVar16,uVar9,plVar8,puVar11[1]);
  puVar1 = PTR_DAT_03867a10;
  if (*(int *)(*(long *)PTR_DAT_03867a18 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar7 = NativeHelper_028dee4c(*(undefined8 *)puVar1);
  if (lVar7 != 0) {
    if ((bRam0000000003ab93cb & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a0c48,lVar15,lVar13,0);
      bRam0000000003ab93cb = 1;
    }
    plVar8 = *(long **)(lVar7 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    lVar7 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_038a0c48) {
          puVar11 = (undefined8 *)(lVar7 + (long)(*piVar14 + 0xf) * 0x10 + 0x138);
          goto code_r0x032086a8;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar11 = (undefined8 *)NativeHelper_018277d8(plVar8,*(long *)PTR_DAT_038a0c48,0xf);
code_r0x032086a8:
                    /* WARNING: Could not recover jumptable at 0x032086c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar11)(plVar8,lVar15,lVar13,puVar11[1]);
    return;
  }
code_r0x0198d074:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
code_r0x0198d004:
  puVar11 = (undefined8 *)(lVar10 + (long)(*piVar14 + 5) * 0x10 + 0x138);
  goto code_r0x0198d014;
}

