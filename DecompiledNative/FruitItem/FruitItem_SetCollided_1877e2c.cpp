// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SetCollided(FruitItem fruit) { }
// Ghidra address: 0197be2c; ELF VA: 0x187be2c; file offset: 0x1877e2c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_SetCollided_1877e2c(FruitItem *self,FruitItem *fruit,void *runtimeMethod)

{
  self->IsCollided = true;
  if (fruit != (FruitItem *)0x0) {
    fruit->IsCollided = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

