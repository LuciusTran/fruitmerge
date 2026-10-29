// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <DoToolUpgrade>b__129_0(FruitItem item) { }
// Ghidra address: 01983e20; ELF VA: 0x1883e20; file offset: 0x187fe20
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit___c__DoToolUpgrade_b__129_0_187fe20(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if ((param_2 != 0) && (*(void **)(param_2 + 0x28) != (void *)0x0)) {
    bVar1 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(*(void **)(param_2 + 0x28),(void *)0x0);
    if (bVar1) {
      bVar1 = false;
    }
    else {
      bVar1 = *(int *)(param_2 + 0x20) != 10;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

