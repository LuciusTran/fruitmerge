// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <CanBombOrUpgradeOrShake>b__125_0(FruitItem it) { }
// Ghidra address: 01983db4; ELF VA: 0x1883db4; file offset: 0x187fdb4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


byte MergeFruit___c__CanBombOrUpgradeOrShake_b__125_0_187fdb4(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if ((param_2 != 0) && (*(void **)(param_2 + 0x28) != (void *)0x0)) {
    bVar1 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(*(void **)(param_2 + 0x28),(void *)0x0);
    return (bVar1 ^ 0xffU) & 1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

