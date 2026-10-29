// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <StartClearFrictionGravity>b__111_0(FruitItem item) { }
// Ghidra address: 01983c9c; ELF VA: 0x1883c9c; file offset: 0x187fc9c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


byte MergeFruit___c__StartClearFrictionGravity_b__111_0_187fc9c(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if ((param_2 != 0) && (*(void **)(param_2 + 0x28) != (void *)0x0)) {
    bVar1 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(*(void **)(param_2 + 0x28),(void *)0x0);
    return (bVar1 ^ 0xffU) & 1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

