// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <RefreshSkinItems>b__5_0(SkinItemData x) { }
// Ghidra address: 019ad730; ELF VA: 0x18ad730; file offset: 0x18a9730
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool SkinPage___c__RefreshSkinItems_b__5_0_18a9730(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar10 = *(void **)(param_2 + 0x10);
  pvVar4 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
  if (pvVar10 == pvVar4) {
    return true;
  }
  if (pvVar10 == (void *)0x0) {
    return false;
  }
  if (pvVar4 != (void *)0x0) {
    if (*(int *)((long)pvVar10 + 0x10) != *(int *)((long)pvVar4 + 0x10)) {
      return false;
    }
    lVar9 = (long)*(int *)((long)pvVar10 + 0x10) << 1;
    lVar1 = (long)pvVar10 + 0x14;
    lVar2 = (long)pvVar4 + 0x14;
    if (lVar1 != lVar2) {
      lVar5 = func_0x02c5af1c(0,0,lVar9,0);
      uVar6 = NativeHelper_02c5af28(lVar9,0);
      uVar7 = NativeHelper_02c5af30(uVar6,0);
      if (7 < uVar7) {
        lVar9 = func_0x02c5af44(uVar6,8,0);
        while( true ) {
          uVar7 = NativeHelper_02c5af30(lVar9,0);
          uVar8 = NativeHelper_02c5af30(lVar5,0);
          if (uVar7 <= uVar8) {
            return *(long *)(lVar1 + lVar9) == *(long *)(lVar2 + lVar9);
          }
          uVar7 = func_0x02c68cc8(*(undefined8 *)(lVar1 + lVar5),*(undefined8 *)(lVar2 + lVar5),0);
          if ((uVar7 & 1) != 0) break;
          lVar5 = func_0x02c5af3c(lVar5,8,0);
        }
        return false;
      }
      uVar7 = NativeHelper_02c5af30(uVar6,0);
      uVar8 = NativeHelper_02c5af30(lVar5,0);
      if (uVar8 < uVar7) {
        do {
          bVar3 = *(char *)(lVar1 + lVar5) == *(char *)(lVar2 + lVar5);
          if (!bVar3) {
            return bVar3;
          }
          lVar5 = func_0x02c5af3c(lVar5,1,0);
          uVar7 = NativeHelper_02c5af30(uVar6,0);
          uVar8 = NativeHelper_02c5af30(lVar5,0);
        } while (uVar8 < uVar7);
        return bVar3;
      }
    }
    return true;
  }
  return false;
}

