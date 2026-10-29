// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <DoToolCleanGuide>b__127_0(FruitItem item) { }
// Ghidra address: 01983de0; ELF VA: 0x1883de0; file offset: 0x187fde0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit___c__DoToolCleanGuide_b__127_0_187fde0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if ((param_2 != 0) && (*(void **)(param_2 + 0x28) != (void *)0x0)) {
    bVar1 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(*(void **)(param_2 + 0x28),(void *)0x0);
    if (bVar1) {
      bVar1 = false;
    }
    else {
      bVar1 = *(uint *)(param_2 + 0x20) < 2;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

