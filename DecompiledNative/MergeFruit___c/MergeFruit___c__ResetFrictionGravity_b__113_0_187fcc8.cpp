// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <ResetFrictionGravity>b__113_0(FruitItem item) { }
// Ghidra address: 01983cc8; ELF VA: 0x1883cc8; file offset: 0x187fcc8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


byte MergeFruit___c__ResetFrictionGravity_b__113_0_187fcc8(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if ((param_2 != 0) && (*(void **)(param_2 + 0x28) != (void *)0x0)) {
    bVar1 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(*(void **)(param_2 + 0x28),(void *)0x0);
    return (bVar1 ^ 0xffU) & 1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

