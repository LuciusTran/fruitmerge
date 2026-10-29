// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private ComboEffect[] FindAllEffects() { }
// Ghidra address: 0197b310; ELF VA: 0x187b310; file offset: 0x1877310
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * FruitItem_FindAllEffects_1877310(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20a9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038670e8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20a9 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_038670e8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
    runtimeMethod = extraout_x1_00;
  }
  lVar3 = *(long *)puVar2;
  puVar8 = *(undefined8 **)(lVar3 + 0x38);
  if (puVar8 == (undefined8 *)0x0) {
    NativeHelper_017ef284(&DAT_03930f08);
    puVar8 = *(undefined8 **)(lVar3 + 0x38);
    runtimeMethod = extraout_x1_01;
    if (puVar8 == (undefined8 *)0x0) {
      NativeHelper_01827500(lVar3);
      puVar8 = *(undefined8 **)(lVar3 + 0x38);
      runtimeMethod = extraout_x1_02;
    }
  }
  uVar9 = *puVar8;
  if (*(int *)(lRam0000000003ac0b48 + 0xe4) == 0) {
    NativeHelper_017ef404(lRam0000000003ac0b48,runtimeMethod);
  }
  uVar9 = NativeHelper_02c1ee48(uVar9,0);
  if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0);
  }
  lVar4 = func_0x03357d78(uVar9,0,0);
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    NativeHelper_01827500(lVar3);
  }
  if (lVar4 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    lVar5 = **(long **)(lVar3 + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = NativeHelper_018274a4();
    }
    pvVar6 = (void *)NativeHelper_017ef374(lVar5,*(undefined4 *)(lVar4 + 0x18));
    if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (0 < *(int *)((long)pvVar6 + 0x18)) {
      uVar12 = 0;
      plVar10 = (long *)((long)pvVar6 + 0x20);
      do {
        if (*(uint *)(lVar4 + 0x18) <= uVar12) {
code_r0x01d4443c:
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        lVar11 = *(long *)(lVar4 + 0x20 + uVar12 * 8);
        lVar5 = *(long *)(*(long *)(lVar3 + 0x38) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = NativeHelper_018274a4(lVar5);
        }
        if (lVar11 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = NativeHelper_017ef408(lVar11,lVar5);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef8b0(lVar11,lVar5);
          }
        }
        if (*(uint *)((long)pvVar6 + 0x18) <= uVar12) goto code_r0x01d4443c;
        *plVar10 = lVar7;
        NativeHelper_017ef228(plVar10);
        uVar12 = uVar12 + 1;
        plVar10 = plVar10 + 1;
      } while ((long)uVar12 < (long)*(int *)((long)pvVar6 + 0x18));
    }
  }
  return pvVar6;
}

