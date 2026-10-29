// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool CanMerge(FruitItem fruit) { }
// Ghidra address: 0197c0a0; ELF VA: 0x187c0a0; file offset: 0x18780a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool FruitItem_CanMerge_18780a0(FruitItem *self,FruitItem *fruit,void *runtimeMethod)

{
  if (fruit == (FruitItem *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((self->m_FruitType == fruit->m_FruitType) && (self->IsMerged == false)) {
    return fruit->IsMerged == false;
  }
  return false;
}

