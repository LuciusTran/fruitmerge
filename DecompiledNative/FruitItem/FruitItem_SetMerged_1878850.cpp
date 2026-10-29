// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetMerged(FruitItem fruit) { }
// Ghidra address: 0197c850; ELF VA: 0x187c850; file offset: 0x1878850
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_SetMerged_1878850(FruitItem *self,FruitItem *fruit,void *runtimeMethod)

{
  self->IsMerged = true;
  if (fruit != (FruitItem *)0x0) {
    fruit->IsMerged = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

