// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <CanClean>b__124_0(FruitItem item) { }
// Ghidra address: 01983d74; ELF VA: 0x1883d74; file offset: 0x187fd74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit___c__CanClean_b__124_0_187fd74(undefined8 param_1,long param_2)

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

