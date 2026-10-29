// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static void OpenRankDialog(string where) { }
// Ghidra address: 019a6974; ELF VA: 0x18a6974; file offset: 0x18a2974
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0198cd64) */
/* WARNING: Removing unreachable block (ram,0x0198cd78) */
/* WARNING: Removing unreachable block (ram,0x0198cd8c) */

void HomePage_OpenRankDialog_18a2974(void *where,void *runtimeMethod)

{
  void *value;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  EventLogger *self;
  void *pvVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long *plVar16;
  
  puVar2 = PTR_DAT_0385f448;
  puVar1 = PTR_DAT_0385c390;
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
  uVar11 = NativeHelper_02aa606c(where,0);
  lVar15 = *(long *)puVar1;
  lVar13 = *(long *)(lVar15 + 0x38);
  value = *(void **)puVar2;
  if ((uVar11 & 1) == 0) {
    value = where;
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
  pvVar12 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  lVar13 = NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_02132ae8(lVar13,*(undefined8 *)puVar2);
  if ((lVar13 == 0) ||
     (NativeHelper_02133494(lVar13,*(undefined8 *)puVar5,value,*(undefined8 *)PTR_DAT_0385ca48),
     pvVar12 == (void *)0x0)) goto LAB_019a6b5c;
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
  lVar6 = *(long *)PTR_DAT_038679d0;
  if (lVar13 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar6 = *(long *)puVar1;
    }
    plVar16 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    plVar7 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,1);
    if (plVar7 == (long *)0x0) goto code_r0x0198d074;
    if ((lVar15 != 0) &&
       (lVar6 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
    goto code_r0x0198d07c;
    if ((int)plVar7[3] == 0) goto code_r0x0198d078;
    plVar7[4] = lVar15;
    NativeHelper_017ef228(plVar7 + 4,lVar15);
    if (plVar16 == (long *)0x0) goto code_r0x0198d074;
    lVar9 = *plVar16;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar6 = *(long *)PTR_DAT_03866d68;
    uVar8 = *(undefined8 *)PTR_DAT_038679e8;
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar6) goto code_r0x0198d004;
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar6 = *(long *)puVar1;
    }
    plVar16 = (long *)**(undefined8 **)(lVar6 + 0xb8);
    plVar7 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    if (plVar7 == (long *)0x0) goto code_r0x0198d074;
    if ((lVar15 != 0) &&
       (lVar6 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
code_r0x0198d07c:
      uVar8 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar8,0);
    }
    if ((int)plVar7[3] == 0) {
code_r0x0198d078:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar7[4] = lVar15;
    NativeHelper_017ef228(plVar7 + 4,lVar15);
    uVar8 = NativeHelper_0213315c(lVar13,*(undefined8 *)PTR_DAT_038679f8);
    uVar8 = NativeHelper_01c6ad88(uVar8,*(undefined8 *)PTR_DAT_0385de40);
    puVar1 = PTR_DAT_0385d098;
    lVar6 = NativeHelper_02aa78f4(*(undefined8 *)PTR_DAT_0385d098,uVar8,0);
    if ((lVar6 != 0) &&
       (lVar9 = NativeHelper_017ef408(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto code_r0x0198d07c;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto code_r0x0198d078;
    plVar7[5] = lVar6;
    NativeHelper_017ef228(plVar7 + 5,lVar6);
    uVar8 = NativeHelper_021332b8(lVar13,*(undefined8 *)PTR_DAT_03867a00);
    uVar8 = NativeHelper_01c6ad88(uVar8,*(undefined8 *)PTR_DAT_03867a08);
    lVar6 = NativeHelper_02aa798c(*(undefined8 *)puVar1,uVar8,0);
    if ((lVar6 != 0) &&
       (lVar9 = NativeHelper_017ef408(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
    goto code_r0x0198d07c;
    if (*(uint *)(plVar7 + 3) < 3) goto code_r0x0198d078;
    plVar7[6] = lVar6;
    NativeHelper_017ef228(plVar7 + 6,lVar6);
    if (plVar16 == (long *)0x0) goto code_r0x0198d074;
    lVar9 = *plVar16;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    lVar6 = *(long *)PTR_DAT_03866d68;
    uVar8 = *(undefined8 *)PTR_DAT_038679d8;
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar6) goto code_r0x0198d004;
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
  }
  puVar10 = (undefined8 *)NativeHelper_018277d8(plVar16,lVar6,5);
code_r0x0198d014:
  (*(code *)*puVar10)(plVar16,uVar8,plVar7,puVar10[1]);
  puVar1 = PTR_DAT_03867a10;
  if (*(int *)(*(long *)PTR_DAT_03867a18 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar6 = NativeHelper_028dee4c(*(undefined8 *)puVar1);
  if (lVar6 != 0) {
    if ((bRam0000000003ab93cb & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a0c48,lVar15,lVar13,0);
      bRam0000000003ab93cb = 1;
    }
    plVar7 = *(long **)(lVar6 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    lVar6 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_038a0c48) {
          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar14 + 0xf) * 0x10 + 0x138);
          goto code_r0x032086a8;
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)NativeHelper_018277d8(plVar7,*(long *)PTR_DAT_038a0c48,0xf);
code_r0x032086a8:
                    /* WARNING: Could not recover jumptable at 0x032086c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar10)(plVar7,lVar15,lVar13,puVar10[1]);
    return;
  }
code_r0x0198d074:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
code_r0x0198d004:
  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar14 + 5) * 0x10 + 0x138);
  goto code_r0x0198d014;
}

