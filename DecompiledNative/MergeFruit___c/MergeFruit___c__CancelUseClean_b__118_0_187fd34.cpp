// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <CancelUseClean>b__118_0(FruitItem fruit) { }
// Ghidra address: 01983d34; ELF VA: 0x1883d34; file offset: 0x187fd34
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit___c__CancelUseClean_b__118_0_187fd34(undefined8 param_1,long param_2)

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

