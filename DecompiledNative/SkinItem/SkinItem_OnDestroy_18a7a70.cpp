// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDestroy() { }
// Ghidra address: 019aba70; ELF VA: 0x18aba70; file offset: 0x18a7a70
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinItem_OnDestroy_18a7a70(SkinItem *self,void *runtimeMethod)

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
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  void *self_00;
  long *eventType;
  undefined8 *puVar15;
  void *extraout_x1;
  long lVar16;
  long lVar17;
  void *runtimeMethod_00;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  uint *puVar26;
  
  puVar9 = PTR_DAT_03868990;
  puVar5 = PTR_DAT_03867040;
  puVar4 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2290 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03867098);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03868990);
    NativeHelper_017ef284(PTR_DAT_03868998);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_038689f8);
    bRam0000000003ab2290 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar11 = PTR_DAT_038689f8;
  puVar10 = PTR_DAT_03868998;
  puVar8 = PTR_DAT_03867098;
  puVar7 = PTR_DAT_03867070;
  puVar6 = PTR_DAT_03866c68;
  uVar14 = NativeHelper_017ef520(*(undefined8 *)puVar5,runtimeMethod);
  NativeHelper_02015018(uVar14,self,*(undefined8 *)puVar9,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  NativeHelper_01ca6ae0(*(undefined8 *)puVar7,uVar14,*(undefined8 *)puVar8);
  self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(self_00,self,*(void **)puVar10,(void *)0x0);
  puVar4 = PTR_DAT_0385d950;
  eventType = *(long **)puVar11;
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
  Messenger_OnListenerRemoving_187509c(eventType,self_00,runtimeMethod_00);
  puVar5 = PTR_DAT_03866c68;
  lVar23 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  plVar13 = (long *)NativeHelper_02133414(lVar23,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0();
  }
  plVar13 = (long *)NativeHelper_02c55360(plVar13,self_00,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0(plVar13);
  }
  NativeHelper_02133480(lVar23,eventType,plVar13,*(undefined8 *)PTR_DAT_03866c88);
  puVar4 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2092 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866f60);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2092 = 1;
  }
  lVar23 = *(long *)puVar4;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar23 = *(long *)puVar4;
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
  if (lVar23 == 0) {
code_r0x01979374:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar23 = NativeHelper_02133414(lVar23,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if (lVar23 != 0) {
    return;
  }
  lVar23 = *(long *)puVar4;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar23 = *(long *)puVar4;
  }
  lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
  if (lVar23 == 0) goto code_r0x01979374;
  lVar17 = *(long *)PTR_DAT_03866f60;
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  if (*(long *)(lVar23 + 0x10) != 0) {
    plVar13 = *(long **)(lVar23 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (eventType == (long *)0x0) goto code_r0x02134cbc;
      uVar12 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
    }
    else {
      lVar16 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = NativeHelper_018274a4(lVar16);
      }
      lVar18 = *plVar13;
      uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar20 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar16) {
            puVar15 = (undefined8 *)(lVar18 + (long)(*piVar22 + 1) * 0x10 + 0x138);
            goto code_r0x02134a80;
          }
          uVar20 = uVar20 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)NativeHelper_018277d8(plVar13,lVar16,1);
code_r0x02134a80:
      uVar12 = (*(code *)*puVar15)(plVar13,eventType,puVar15[1]);
    }
    lVar16 = *(long *)(lVar23 + 0x10);
    if (lVar16 == 0) {
code_r0x02134cbc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar24 = *(uint *)(lVar16 + 0x18);
    uVar12 = uVar12 & 0x7fffffff;
    iVar3 = 0;
    if (uVar24 != 0) {
      iVar3 = (int)uVar12 / (int)uVar24;
    }
    uVar2 = uVar12 - iVar3 * uVar24;
    if (uVar24 <= uVar2) {
code_r0x02134cc0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    uVar24 = *(int *)(lVar16 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar24) {
      uVar20 = 0xffffffff;
      do {
        lVar16 = *(long *)(lVar23 + 0x18);
        if (lVar16 == 0) goto code_r0x02134cbc;
        if (*(uint *)(lVar16 + 0x18) <= uVar24) goto code_r0x02134cc0;
        lVar16 = lVar16 + 0x20;
        puVar26 = (uint *)(lVar16 + (ulong)uVar24 * 0x18);
        uVar25 = (ulong)uVar24;
        if (*puVar26 == uVar12) {
          plVar13 = *(long **)(lVar23 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)func_0x01b96270(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x18));
            if (plVar13 == (long *)0x0) goto code_r0x02134cbc;
            uVar21 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(lVar16 + uVar25 * 0x18 + 8),eventType,
                                *(undefined8 *)(*plVar13 + 0x1c0));
          }
          else {
            lVar18 = *(long *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 8);
            uVar14 = *(undefined8 *)(lVar16 + uVar25 * 0x18 + 8);
            if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
              lVar18 = NativeHelper_018274a4(lVar18);
            }
            lVar19 = *plVar13;
            uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == lVar18) {
                  puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                  goto code_r0x02134bcc;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar15 = (undefined8 *)NativeHelper_018277d8(plVar13,lVar18,0);
code_r0x02134bcc:
            uVar21 = (*(code *)*puVar15)(plVar13,uVar14,eventType,puVar15[1]);
          }
          if ((uVar21 & 1) != 0) {
            if ((int)(uint)uVar20 < 0) {
              lVar17 = *(long *)(lVar23 + 0x10);
              if (lVar17 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto code_r0x02134cc0;
              *(int *)(lVar17 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar16 + uVar25 * 0x18 + 4) + 1;
            }
            else {
              lVar17 = *(long *)(lVar23 + 0x18);
              if (lVar17 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar17 + 0x18) <= (uint)uVar20) goto code_r0x02134cc0;
              *(undefined4 *)(lVar17 + uVar20 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar16 + uVar25 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(lVar23 + 0x24);
            lVar16 = lVar16 + uVar25 * 0x18;
            *puVar26 = 0xffffffff;
            *(undefined4 *)(lVar16 + 4) = uVar1;
            *(undefined8 *)(lVar16 + 8) = 0;
            *(undefined8 *)(lVar16 + 0x10) = 0;
            *(uint *)(lVar23 + 0x24) = uVar24;
            *(ulong *)(lVar23 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar23 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar23 + 0x28) + 1);
            return;
          }
        }
        uVar20 = (ulong)uVar24;
        uVar24 = *(uint *)(lVar16 + uVar25 * 0x18 + 4);
      } while (-1 < (int)uVar24);
    }
  }
  return;
}

