// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DestroyOldFruits(FruitItem fruit) { }
// Ghidra address: 0197c86c; ELF VA: 0x187c86c; file offset: 0x187886c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_DestroyOldFruits_187886c(FruitItem *self,FruitItem *fruit,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20b4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20b4 = 1;
  }
  uVar2 = NativeHelper_0334f4c8(self,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  NativeHelper_03357b5c(uVar2,0);
  if (fruit != (FruitItem *)0x0) {
    lVar3 = NativeHelper_0334f4c8(fruit,0);
    puVar1 = PTR_DAT_0385c2a0;
    uVar2 = 0;
    if ((bRam0000000003abb946 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
      bRam0000000003abb946 = 1;
      uVar2 = extraout_x1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
      uVar2 = extraout_x1_00;
    }
    puVar1 = PTR_DAT_038a6cb0;
    if ((bRam0000000003abb945 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a6cb0,uVar2);
      NativeHelper_017ef284(PTR_DAT_0385c2a0);
      bRam0000000003abb945 = 1;
    }
    if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
      NativeHelper_01827500();
    }
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    if (pcRam0000000003abb988 == (code *)0x0) {
      pcRam0000000003abb988 = (code *)NativeHelper_017ef240(&UNK_00a562d4);
    }
                    /* WARNING: Could not recover jumptable at 0x03357b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abb988)(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

