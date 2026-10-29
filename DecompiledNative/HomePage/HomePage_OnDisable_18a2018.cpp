// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void OnDisable() { }
// Ghidra address: 019a6018; ELF VA: 0x18a6018; file offset: 0x18a2018
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomePage_OnDisable_18a2018(HomePage *self,void *runtimeMethod)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long *plVar11;
  void *pvVar12;
  long *eventType;
  undefined8 *puVar13;
  void *extraout_x1;
  long lVar14;
  long lVar15;
  void *runtimeMethod_00;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  
  puVar7 = PTR_DAT_03868758;
  puVar6 = PTR_DAT_03866c68;
  puVar4 = PTR_DAT_0385d950;
  if ((bRam0000000003ab225d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03868758);
    NativeHelper_017ef284(PTR_DAT_03868760);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385e758);
    NativeHelper_017ef284(PTR_DAT_03868768);
    bRam0000000003ab225d = 1;
    runtimeMethod = extraout_x1;
  }
  puVar9 = PTR_DAT_03868768;
  puVar8 = PTR_DAT_03868760;
  puVar5 = PTR_DAT_0385e758;
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6,runtimeMethod);
  Callback_Callback_186ef98(pvVar12,self,*(void **)puVar7,(void *)0x0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_RemoveListener_186f258(*(void **)puVar5,pvVar12,(void *)0x0);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(pvVar12,self,*(void **)puVar8,(void *)0x0);
  puVar4 = PTR_DAT_0385d950;
  eventType = *(long **)puVar9;
  runtimeMethod_00 = (void *)0x0;
  if ((bRam0000000003ab2095 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_03866c88);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2095 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_OnListenerRemoving_187509c(eventType,pvVar12,runtimeMethod_00);
  puVar6 = PTR_DAT_03866c68;
  lVar21 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  plVar11 = (long *)NativeHelper_02133414(lVar21,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0();
  }
  plVar11 = (long *)NativeHelper_02c55360(plVar11,pvVar12,0);
  if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0(plVar11);
  }
  NativeHelper_02133480(lVar21,eventType,plVar11,*(undefined8 *)PTR_DAT_03866c88);
  puVar4 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2092 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866f60);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2092 = 1;
  }
  lVar21 = *(long *)puVar4;
  if (*(int *)(lVar21 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar21 = *(long *)puVar4;
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar21 == 0) {
code_r0x01979374:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar21 = NativeHelper_02133414(lVar21,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if (lVar21 != 0) {
    return;
  }
  lVar21 = *(long *)puVar4;
  if (*(int *)(lVar21 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar21 = *(long *)puVar4;
  }
  lVar21 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar21 == 0) goto code_r0x01979374;
  lVar15 = *(long *)PTR_DAT_03866f60;
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  if (*(long *)(lVar21 + 0x10) != 0) {
    plVar11 = *(long **)(lVar21 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (eventType == (long *)0x0) goto code_r0x02134cbc;
      uVar10 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
    }
    else {
      lVar14 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = NativeHelper_018274a4(lVar14);
      }
      lVar16 = *plVar11;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar14) {
            puVar13 = (undefined8 *)(lVar16 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto code_r0x02134a80;
          }
          uVar18 = uVar18 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)NativeHelper_018277d8(plVar11,lVar14,1);
code_r0x02134a80:
      uVar10 = (*(code *)*puVar13)(plVar11,eventType,puVar13[1]);
    }
    lVar14 = *(long *)(lVar21 + 0x10);
    if (lVar14 == 0) {
code_r0x02134cbc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar23 = *(uint *)(lVar14 + 0x18);
    uVar10 = uVar10 & 0x7fffffff;
    iVar3 = 0;
    if (uVar23 != 0) {
      iVar3 = (int)uVar10 / (int)uVar23;
    }
    uVar2 = uVar10 - iVar3 * uVar23;
    if (uVar23 <= uVar2) {
code_r0x02134cc0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    uVar23 = *(int *)(lVar14 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar23) {
      uVar18 = 0xffffffff;
      do {
        lVar14 = *(long *)(lVar21 + 0x18);
        if (lVar14 == 0) goto code_r0x02134cbc;
        if (*(uint *)(lVar14 + 0x18) <= uVar23) goto code_r0x02134cc0;
        lVar14 = lVar14 + 0x20;
        puVar25 = (uint *)(lVar14 + (ulong)uVar23 * 0x18);
        uVar24 = (ulong)uVar23;
        if (*puVar25 == uVar10) {
          plVar11 = *(long **)(lVar21 + 0x30);
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)func_0x01b96270(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x18));
            if (plVar11 == (long *)0x0) goto code_r0x02134cbc;
            uVar19 = (**(code **)(*plVar11 + 0x1b8))
                               (plVar11,*(undefined8 *)(lVar14 + uVar24 * 0x18 + 8),eventType,
                                *(undefined8 *)(*plVar11 + 0x1c0));
          }
          else {
            lVar16 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 8);
            uVar22 = *(undefined8 *)(lVar14 + uVar24 * 0x18 + 8);
            if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = NativeHelper_018274a4(lVar16);
            }
            lVar17 = *plVar11;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar16) {
                  puVar13 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto code_r0x02134bcc;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar13 = (undefined8 *)NativeHelper_018277d8(plVar11,lVar16,0);
code_r0x02134bcc:
            uVar19 = (*(code *)*puVar13)(plVar11,uVar22,eventType,puVar13[1]);
          }
          if ((uVar19 & 1) != 0) {
            if ((int)(uint)uVar18 < 0) {
              lVar15 = *(long *)(lVar21 + 0x10);
              if (lVar15 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar15 + 0x18) <= uVar2) goto code_r0x02134cc0;
              *(int *)(lVar15 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar14 + uVar24 * 0x18 + 4) + 1;
            }
            else {
              lVar15 = *(long *)(lVar21 + 0x18);
              if (lVar15 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)uVar18) goto code_r0x02134cc0;
              *(undefined4 *)(lVar15 + uVar18 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar14 + uVar24 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(lVar21 + 0x24);
            lVar14 = lVar14 + uVar24 * 0x18;
            *puVar25 = 0xffffffff;
            *(undefined4 *)(lVar14 + 4) = uVar1;
            *(undefined8 *)(lVar14 + 8) = 0;
            *(undefined8 *)(lVar14 + 0x10) = 0;
            *(uint *)(lVar21 + 0x24) = uVar23;
            *(ulong *)(lVar21 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar21 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar21 + 0x28) + 1);
            return;
          }
        }
        uVar18 = (ulong)uVar23;
        uVar23 = *(uint *)(lVar14 + uVar24 * 0x18 + 4);
      } while (-1 < (int)uVar23);
    }
  }
  return;
}

