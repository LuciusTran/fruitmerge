// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDestroy() { }
// Ghidra address: 0197dc58; ELF VA: 0x187dc58; file offset: 0x1879c58
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_OnDestroy_1879c58(MergeFruit *self,void *runtimeMethod)

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
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  void *pvVar15;
  long *eventType;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  void *extraout_x1;
  void *pvVar19;
  long lVar20;
  void *in_x3;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  uint uVar28;
  ulong uVar29;
  uint *puVar30;
  
  puVar11 = PTR_DAT_038671c0;
  puVar5 = PTR_DAT_03866c68;
  puVar4 = PTR_DAT_0385d950;
  if ((bRam0000000003ab20c4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_038671b0);
    NativeHelper_017ef284(PTR_DAT_038671b8);
    NativeHelper_017ef284(PTR_DAT_038671c0);
    NativeHelper_017ef284(PTR_DAT_03867098);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_038671c8);
    NativeHelper_017ef284(PTR_DAT_038671d0);
    bRam0000000003ab20c4 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar13 = PTR_DAT_038671d0;
  puVar12 = PTR_DAT_038671c8;
  puVar10 = PTR_DAT_038671b8;
  puVar9 = PTR_DAT_038671b0;
  puVar8 = PTR_DAT_03867098;
  puVar7 = PTR_DAT_03867070;
  puVar6 = PTR_DAT_03867040;
  pvVar15 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar5,runtimeMethod);
  pvVar19 = *(void **)puVar11;
  Callback_Callback_186ef98(pvVar15,self,pvVar19,in_x3);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_RemoveListener_186f258(*(void **)puVar12,pvVar15,pvVar19);
  pvVar15 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar5);
  pvVar19 = *(void **)puVar9;
  Callback_Callback_186ef98(pvVar15,self,pvVar19,in_x3);
  Messenger_RemoveListener_186f258(*(void **)puVar13,pvVar15,pvVar19);
  pvVar15 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  NativeHelper_02015018(pvVar15,self,*(undefined8 *)puVar10,0);
  eventType = *(long **)puVar7;
  lVar20 = *(long *)puVar8;
  if (*(long *)(lVar20 + 0x38) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_03866c88);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    if (*(long *)(lVar20 + 0x38) == 0) {
      NativeHelper_01827500(lVar20);
    }
  }
  puVar4 = PTR_DAT_0385d950;
  if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_OnListenerRemoving_187509c(eventType,pvVar15,(void *)0x0);
  lVar24 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar16 = NativeHelper_02133414(lVar24,eventType,*(undefined8 *)PTR_DAT_03866c80);
  lVar26 = **(long **)(lVar20 + 0x38);
  if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = NativeHelper_018274a4(lVar26);
  }
  if (lVar16 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = NativeHelper_017ef408(lVar16,lVar26);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(lVar16,lVar26);
    }
  }
  lVar16 = NativeHelper_02c55360(lVar17,pvVar15,0);
  lVar20 = **(long **)(lVar20 + 0x38);
  if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
    lVar20 = NativeHelper_018274a4(lVar20);
  }
  if (lVar16 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = NativeHelper_017ef408(lVar16,lVar20);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(lVar16,lVar20);
    }
  }
  NativeHelper_02133480(lVar24,eventType,lVar26,*(undefined8 *)PTR_DAT_03866c88);
  puVar4 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2092 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866f60,0);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2092 = 1;
  }
  lVar20 = *(long *)puVar4;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar20 = *(long *)puVar4;
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
  if (lVar20 == 0) {
code_r0x01979374:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar20 = NativeHelper_02133414(lVar20,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if (lVar20 != 0) {
    return;
  }
  lVar20 = *(long *)puVar4;
  if (*(int *)(lVar20 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar20 = *(long *)puVar4;
  }
  lVar20 = *(long *)(*(long *)(lVar20 + 0xb8) + 8);
  if (lVar20 == 0) goto code_r0x01979374;
  lVar24 = *(long *)PTR_DAT_03866f60;
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  if (*(long *)(lVar20 + 0x10) != 0) {
    plVar25 = *(long **)(lVar20 + 0x30);
    if (plVar25 == (long *)0x0) {
      if (eventType == (long *)0x0) goto code_r0x02134cbc;
      uVar14 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
    }
    else {
      lVar16 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = NativeHelper_018274a4(lVar16);
      }
      lVar26 = *plVar25;
      uVar21 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar21 != 0) {
        piVar23 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar23 + -2) == lVar16) {
            puVar18 = (undefined8 *)(lVar26 + (long)(*piVar23 + 1) * 0x10 + 0x138);
            goto code_r0x02134a80;
          }
          uVar21 = uVar21 - 1;
          piVar23 = piVar23 + 4;
        } while (uVar21 != 0);
      }
      puVar18 = (undefined8 *)NativeHelper_018277d8(plVar25,lVar16,1);
code_r0x02134a80:
      uVar14 = (*(code *)*puVar18)(plVar25,eventType,puVar18[1]);
    }
    lVar16 = *(long *)(lVar20 + 0x10);
    if (lVar16 == 0) {
code_r0x02134cbc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar28 = *(uint *)(lVar16 + 0x18);
    uVar14 = uVar14 & 0x7fffffff;
    iVar3 = 0;
    if (uVar28 != 0) {
      iVar3 = (int)uVar14 / (int)uVar28;
    }
    uVar2 = uVar14 - iVar3 * uVar28;
    if (uVar28 <= uVar2) {
code_r0x02134cc0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    uVar28 = *(int *)(lVar16 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar28) {
      uVar21 = 0xffffffff;
      do {
        lVar16 = *(long *)(lVar20 + 0x18);
        if (lVar16 == 0) goto code_r0x02134cbc;
        if (*(uint *)(lVar16 + 0x18) <= uVar28) goto code_r0x02134cc0;
        lVar16 = lVar16 + 0x20;
        puVar30 = (uint *)(lVar16 + (ulong)uVar28 * 0x18);
        uVar29 = (ulong)uVar28;
        if (*puVar30 == uVar14) {
          plVar25 = *(long **)(lVar20 + 0x30);
          if (plVar25 == (long *)0x0) {
            plVar25 = (long *)func_0x01b96270(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x18));
            if (plVar25 == (long *)0x0) goto code_r0x02134cbc;
            uVar22 = (**(code **)(*plVar25 + 0x1b8))
                               (plVar25,*(undefined8 *)(lVar16 + uVar29 * 0x18 + 8),eventType,
                                *(undefined8 *)(*plVar25 + 0x1c0));
          }
          else {
            lVar26 = *(long *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 8);
            uVar27 = *(undefined8 *)(lVar16 + uVar29 * 0x18 + 8);
            if ((*(ushort *)(lVar26 + 0x135) & 1) == 0) {
              lVar26 = NativeHelper_018274a4(lVar26);
            }
            lVar17 = *plVar25;
            uVar22 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar22 != 0) {
              piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == lVar26) {
                  puVar18 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
                  goto code_r0x02134bcc;
                }
                uVar22 = uVar22 - 1;
                piVar23 = piVar23 + 4;
              } while (uVar22 != 0);
            }
            puVar18 = (undefined8 *)NativeHelper_018277d8(plVar25,lVar26,0);
code_r0x02134bcc:
            uVar22 = (*(code *)*puVar18)(plVar25,uVar27,eventType,puVar18[1]);
          }
          if ((uVar22 & 1) != 0) {
            if ((int)(uint)uVar21 < 0) {
              lVar24 = *(long *)(lVar20 + 0x10);
              if (lVar24 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar24 + 0x18) <= uVar2) goto code_r0x02134cc0;
              *(int *)(lVar24 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar16 + uVar29 * 0x18 + 4) + 1;
            }
            else {
              lVar24 = *(long *)(lVar20 + 0x18);
              if (lVar24 == 0) goto code_r0x02134cbc;
              if (*(uint *)(lVar24 + 0x18) <= (uint)uVar21) goto code_r0x02134cc0;
              *(undefined4 *)(lVar24 + uVar21 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar16 + uVar29 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(lVar20 + 0x24);
            lVar16 = lVar16 + uVar29 * 0x18;
            *puVar30 = 0xffffffff;
            *(undefined4 *)(lVar16 + 4) = uVar1;
            *(undefined8 *)(lVar16 + 8) = 0;
            *(undefined8 *)(lVar16 + 0x10) = 0;
            *(uint *)(lVar20 + 0x24) = uVar28;
            *(ulong *)(lVar20 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(lVar20 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(lVar20 + 0x28) + 1);
            return;
          }
        }
        uVar21 = (ulong)uVar28;
        uVar28 = *(uint *)(lVar16 + uVar29 * 0x18 + 4);
      } while (-1 < (int)uVar28);
    }
  }
  return;
}

