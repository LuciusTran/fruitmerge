// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDestroy() { }
// Ghidra address: 0197a09c; ELF VA: 0x187a09c; file offset: 0x187609c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_OnDestroy_187609c(FruitItem *self,void *runtimeMethod)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  void *listenerBeingRemoved;
  long *eventType;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  
  if ((bRam0000000003ab209f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03867060);
    NativeHelper_017ef284(PTR_DAT_03867098);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03867070);
    bRam0000000003ab209f = 1;
  }
  uVar9 = NativeHelper_0334f400(self,0);
  NativeHelper_01a630d4(uVar9,0,0);
  lVar10 = NativeHelper_0334f400(self,0);
  if (lVar10 == 0) {
LAB_0197a1e0:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  iVar7 = NativeHelper_0335fe50(lVar10,0);
  if (0 < iVar7) {
    iVar17 = 0;
    do {
      lVar10 = NativeHelper_0334f400(self,0);
      if (lVar10 == 0) goto LAB_0197a1e0;
      uVar9 = NativeHelper_0336077c(lVar10,iVar17,0);
      NativeHelper_01a630d4(uVar9,0,0);
      iVar17 = iVar17 + 1;
    } while (iVar7 != iVar17);
  }
  puVar6 = PTR_DAT_03867098;
  puVar5 = PTR_DAT_03867070;
  puVar4 = PTR_DAT_03867060;
  puVar3 = PTR_DAT_0385d950;
  listenerBeingRemoved = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867040);
  NativeHelper_02015018(listenerBeingRemoved,self,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  eventType = *(long **)puVar5;
  lVar10 = *(long *)puVar6;
  if (*(long *)(lVar10 + 0x38) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_03866c88);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    if (*(long *)(lVar10 + 0x38) == 0) {
      NativeHelper_01827500(lVar10);
    }
  }
  puVar3 = PTR_DAT_0385d950;
  if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_OnListenerRemoving_187509c(eventType,listenerBeingRemoved,(void *)0x0);
  lVar18 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar11 = NativeHelper_02133414(lVar18,eventType,*(undefined8 *)PTR_DAT_03866c80);
  lVar20 = **(long **)(lVar10 + 0x38);
  if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = NativeHelper_018274a4(lVar20);
  }
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = NativeHelper_017ef408(lVar11,lVar20);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(lVar11,lVar20);
    }
  }
  lVar11 = NativeHelper_02c55360(lVar12,listenerBeingRemoved,0);
  lVar10 = **(long **)(lVar10 + 0x38);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = NativeHelper_018274a4(lVar10);
  }
  if (lVar11 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = NativeHelper_017ef408(lVar11,lVar10);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(lVar11,lVar10);
    }
  }
  NativeHelper_02133480(lVar18,eventType,lVar20,*(undefined8 *)PTR_DAT_03866c88);
  puVar3 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2092 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866f60,0);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2092 = 1;
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar10 = *(long *)puVar3;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar10 == 0) {
code_r0x01979374:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar10 = NativeHelper_02133414(lVar10,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if (lVar10 != 0) {
    return;
  }
  lVar10 = *(long *)puVar3;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar10 = *(long *)puVar3;
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar10 == 0) goto code_r0x01979374;
  lVar18 = *(long *)PTR_DAT_03866f60;
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  if (*(long *)(lVar10 + 0x10) != 0) {
    plVar19 = *(long **)(lVar10 + 0x30);
    if (plVar19 == (long *)0x0) {
      if (eventType == (long *)0x0) goto code_r0x02134cbc;
      uVar8 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
    }
    else {
      lVar11 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = NativeHelper_018274a4(lVar11);
      }
      lVar20 = *plVar19;
      uVar14 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar11) {
            puVar13 = (undefined8 *)(lVar20 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto code_r0x02134a80;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar13 = (undefined8 *)NativeHelper_018277d8(plVar19,lVar11,1);
code_r0x02134a80:
      uVar8 = (*(code *)*puVar13)(plVar19,eventType,puVar13[1]);
    }
    lVar11 = *(long *)(lVar10 + 0x10);
    if (lVar11 == 0) {
code_r0x02134cbc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar21 = *(uint *)(lVar11 + 0x18);
    uVar8 = uVar8 & 0x7fffffff;
    iVar7 = 0;
    if (uVar21 != 0) {
      iVar7 = (int)uVar8 / (int)uVar21;
    }
    uVar2 = uVar8 - iVar7 * uVar21;
    if (uVar21 <= uVar2) {
code_r0x02134cc0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    uVar21 = *(int *)(lVar11 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar21) {
      uVar14 = 0xffffffff;
      do {
        lVar11 = *(long *)(lVar10 + 0x18);
        if (lVar11 == 0) goto code_r0x02134cbc;
        if (*(uint *)(lVar11 + 0x18) <= uVar21) goto code_r0x02134cc0;
        lVar11 = lVar11 + 0x20;
        puVar23 = (uint *)(lVar11 + (ulong)uVar21 * 0x18);
        uVar22 = (ulong)uVar21;
        if (*puVar23 == uVar8) {
          plVar19 = *(long **)(lVar10 + 0x30);
          if (plVar19 == (long *)0x0) {
            plVar19 = (long *)func_0x01b96270(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x18));
            if (plVar19 == (long *)0x0) goto code_r0x02134cbc;
            uVar15 = (**(code **)(*plVar19 + 0x1b8))
                               (plVar19,*(undefined8 *)(lVar11 + uVar22 * 0x18 + 8),eventType,
                                *(undefined8 *)(*plVar19 + 0x1c0));
          }
          else {
            lVar20 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 8);
            uVar9 = *(undefined8 *)(lVar11 + uVar22 * 0x18 + 8);
            if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
              lVar20 = NativeHelper_018274a4(lVar20);
            }
            lVar12 = *plVar19;
            uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar20) {
                  puVar13 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                  goto code_r0x02134bcc;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar13 = (undefined8 *)NativeHelper_018277d8(plVar19,lVar20,0);
code_r0x02134bcc:
            uVar15 = (*(code *)*puVar13)(plVar19,uVar9,eventType,puVar13[1]);
          }
          if ((uVar15 & 1) != 0) {
            if ((int)(uint)uVar14 < 0) {
              lVar18 = *(long *)(lVar10 + 0x10);
              if (lVar18 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar18 + 0x18) <= uVar2) goto code_r0x02134cc0;
              *(int *)(lVar18 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar11 + uVar22 * 0x18 + 4) + 1;
            }
            else {
              lVar18 = *(long *)(lVar10 + 0x18);
              if (lVar18 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar18 + 0x18) <= (uint)uVar14) goto code_r0x02134cc0;
              *(undefined4 *)(lVar18 + uVar14 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar11 + uVar22 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(lVar10 + 0x24);
            lVar11 = lVar11 + uVar22 * 0x18;
            *puVar23 = 0xffffffff;
            *(undefined4 *)(lVar11 + 4) = uVar1;
            *(undefined8 *)(lVar11 + 8) = 0;
            *(undefined8 *)(lVar11 + 0x10) = 0;
            *(uint *)(lVar10 + 0x24) = uVar21;
            *(ulong *)(lVar10 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar10 + 0x28) + 1);
            return;
          }
        }
        uVar14 = (ulong)uVar21;
        uVar21 = *(uint *)(lVar11 + uVar22 * 0x18 + 4);
      } while (-1 < (int)uVar21);
    }
  }
  return;
}

