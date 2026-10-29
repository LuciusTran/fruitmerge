// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnEnable() { }
// Ghidra address: 019a5f00; ELF VA: 0x18a5f00; file offset: 0x18a1f00
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x02134388) */
/* WARNING: Removing unreachable block (ram,0x02134394) */

void HomePage_OnEnable_18a1f00(HomePage *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  void *pvVar10;
  long *eventType;
  undefined8 *puVar11;
  void *extraout_x1;
  long lVar12;
  void *runtimeMethod_00;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  uint uVar24;
  int *piVar25;
  
  puVar5 = PTR_DAT_03868758;
  puVar4 = PTR_DAT_03866c68;
  puVar2 = PTR_DAT_0385d950;
  if ((bRam0000000003ab225c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03868758);
    NativeHelper_017ef284(PTR_DAT_03868760);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385e758);
    NativeHelper_017ef284(PTR_DAT_03868768);
    bRam0000000003ab225c = 1;
    runtimeMethod = extraout_x1;
  }
  puVar7 = PTR_DAT_03868768;
  puVar6 = PTR_DAT_03868760;
  puVar3 = PTR_DAT_0385e758;
  pvVar10 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4,runtimeMethod);
  Callback_Callback_186ef98(pvVar10,self,*(void **)puVar5,(void *)0x0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_AddListener_186f034(*(void **)puVar3,pvVar10,(void *)0x0);
  pvVar10 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
  Callback_Callback_186ef98(pvVar10,self,*(void **)puVar6,(void *)0x0);
  puVar2 = PTR_DAT_0385d950;
  eventType = *(long **)puVar7;
  runtimeMethod_00 = (void *)0x0;
  if ((bRam0000000003ab2094 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_03866c88);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2094 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_OnListenerAdding_1874e0c(eventType,pvVar10,runtimeMethod_00);
  puVar4 = PTR_DAT_03866c68;
  lVar18 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  plVar9 = (long *)NativeHelper_02133414(lVar18,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0();
  }
  plVar9 = (long *)NativeHelper_02c55174(plVar9,pvVar10,0);
  if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0(plVar9);
  }
  lVar13 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_03866c88 + 0x20) + 0xc0) + 0x110);
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  *(int *)(lVar18 + 0x2c) = *(int *)(lVar18 + 0x2c) + 1;
  if (*(long *)(lVar18 + 0x10) == 0) {
    func_0x02133e40(lVar18,0,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x10));
  }
  plVar20 = *(long **)(lVar18 + 0x30);
  lVar23 = *(long *)(lVar18 + 0x18);
  if (plVar20 == (long *)0x0) {
    if (eventType == (long *)0x0) goto code_r0x021343a0;
    uVar8 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
  }
  else {
    lVar12 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = NativeHelper_018274a4(lVar12);
    }
    lVar14 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar25 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar25 + -2) == lVar12) {
          puVar11 = (undefined8 *)(lVar14 + (long)(*piVar25 + 1) * 0x10 + 0x138);
          goto code_r0x0213401c;
        }
        uVar16 = uVar16 - 1;
        piVar25 = piVar25 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)NativeHelper_018277d8(plVar20,lVar12,1);
code_r0x0213401c:
    uVar8 = (*(code *)*puVar11)(plVar20,eventType,puVar11[1]);
  }
  lVar12 = *(long *)(lVar18 + 0x10);
  if (lVar12 == 0) goto code_r0x021343a0;
  uVar24 = *(uint *)(lVar12 + 0x18);
  uVar8 = uVar8 & 0x7fffffff;
  iVar19 = 0;
  if (uVar24 != 0) {
    iVar19 = (int)uVar8 / (int)uVar24;
  }
  uVar21 = uVar8 - iVar19 * uVar24;
  if (uVar24 <= uVar21) {
code_r0x0213439c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef538();
  }
  piVar25 = (int *)(lVar12 + (ulong)uVar21 * 4 + 0x20);
  uVar24 = *piVar25 - 1;
  if (plVar20 == (long *)0x0) {
    plVar20 = (long *)func_0x01b96270(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x18));
    if (lVar23 == 0) goto code_r0x021343a0;
    uVar22 = *(undefined8 *)(lVar23 + 0x18);
    uVar21 = (uint)uVar22;
    if (uVar24 < uVar21) {
      iVar19 = 0;
      lVar12 = lVar23 + 0x20;
      do {
        uVar21 = (uint)uVar22;
        if (*(uint *)(lVar12 + (long)(int)uVar24 * 0x18) == uVar8) {
          if (plVar20 == (long *)0x0) goto code_r0x021343a0;
          uVar16 = (**(code **)(*plVar20 + 0x1b8))
                             (plVar20,*(undefined8 *)(lVar12 + (long)(int)uVar24 * 0x18 + 8),
                              eventType,*(undefined8 *)(*plVar20 + 0x1c0));
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(lVar23 + 0x18) <= uVar24) goto code_r0x0213439c;
            lVar12 = lVar12 + (long)(int)uVar24 * 0x18;
            goto code_r0x02134378;
          }
          uVar21 = *(uint *)(lVar23 + 0x18);
        }
        if (uVar21 <= uVar24) goto code_r0x0213439c;
        uVar24 = *(uint *)(lVar12 + (long)(int)uVar24 * 0x18 + 4);
        if ((int)uVar21 <= iVar19) {
          func_0x02c311b8(0);
        }
        uVar22 = *(undefined8 *)(lVar23 + 0x18);
        iVar19 = iVar19 + 1;
        uVar21 = (uint)uVar22;
      } while (uVar24 < uVar21);
    }
  }
  else {
    if (lVar23 == 0) goto code_r0x021343a0;
    uVar22 = *(undefined8 *)(lVar23 + 0x18);
    uVar21 = (uint)uVar22;
    if (uVar24 < uVar21) {
      iVar19 = 0;
      lVar12 = lVar23 + 0x20;
      do {
        uVar21 = (uint)uVar22;
        if (*(uint *)(lVar12 + (long)(int)uVar24 * 0x18) == uVar8) {
          lVar14 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
          uVar22 = *(undefined8 *)(lVar12 + (long)(int)uVar24 * 0x18 + 8);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = NativeHelper_018274a4(lVar14);
          }
          lVar15 = *plVar20;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x0213410c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar11 = (undefined8 *)NativeHelper_018277d8(plVar20,lVar14,0);
code_r0x0213410c:
          uVar16 = (*(code *)*puVar11)(plVar20,uVar22,eventType,puVar11[1]);
          if ((uVar16 & 1) != 0) {
            if (uVar24 < *(uint *)(lVar23 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar24 * 0x18;
code_r0x02134378:
              *(long **)(lVar12 + 0x10) = plVar9;
              NativeHelper_017ef228();
              return;
            }
            goto code_r0x0213439c;
          }
          uVar21 = *(uint *)(lVar23 + 0x18);
        }
        if (uVar21 <= uVar24) goto code_r0x0213439c;
        uVar24 = *(uint *)(lVar12 + (long)(int)uVar24 * 0x18 + 4);
        if ((int)uVar21 <= iVar19) {
          func_0x02c311b8(0);
        }
        uVar22 = *(undefined8 *)(lVar23 + 0x18);
        iVar19 = iVar19 + 1;
        uVar21 = (uint)uVar22;
      } while (uVar24 < uVar21);
    }
  }
  if (*(int *)(lVar18 + 0x28) < 1) {
    uVar24 = *(uint *)(lVar18 + 0x20);
    if (uVar24 == uVar21) {
      func_0x02134760(lVar18,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x1b0));
      lVar13 = *(long *)(lVar18 + 0x10);
      *(uint *)(lVar18 + 0x20) = uVar21 + 1;
      if (lVar13 == 0) goto code_r0x021343a0;
      uVar21 = *(uint *)(lVar13 + 0x18);
      iVar19 = 0;
      if (uVar21 != 0) {
        iVar19 = (int)uVar8 / (int)uVar21;
      }
      uVar1 = uVar8 - iVar19 * uVar21;
      if (uVar21 <= uVar1) goto code_r0x0213439c;
      lVar23 = *(long *)(lVar18 + 0x18);
      piVar25 = (int *)(lVar13 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar23 = *(long *)(lVar18 + 0x18);
      *(uint *)(lVar18 + 0x20) = uVar24 + 1;
    }
    if (lVar23 == 0) {
code_r0x021343a0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (*(uint *)(lVar23 + 0x18) <= uVar24) goto code_r0x0213439c;
    lVar23 = lVar23 + (long)(int)uVar24 * 0x18;
  }
  else {
    uVar24 = *(uint *)(lVar18 + 0x24);
    *(int *)(lVar18 + 0x28) = *(int *)(lVar18 + 0x28) + -1;
    if (uVar21 <= uVar24) goto code_r0x0213439c;
    lVar23 = lVar23 + (long)(int)uVar24 * 0x18;
    *(undefined4 *)(lVar18 + 0x24) = *(undefined4 *)(lVar23 + 0x24);
  }
  *(uint *)(lVar23 + 0x20) = uVar8;
  iVar19 = *piVar25;
  *(undefined8 *)(lVar23 + 0x28) = eventType;
  *(int *)(lVar23 + 0x24) = iVar19 + -1;
  NativeHelper_017ef228((undefined8 *)(lVar23 + 0x28),eventType);
  *(long *)(lVar23 + 0x30) = (long)plVar9;
  NativeHelper_017ef228((long *)(lVar23 + 0x30),plVar9);
  *piVar25 = uVar24 + 1;
  return;
}

