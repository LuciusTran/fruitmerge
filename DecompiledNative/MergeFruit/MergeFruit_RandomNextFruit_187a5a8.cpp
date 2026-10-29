// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RandomNextFruit() { }
// Ghidra address: 0197e5a8; ELF VA: 0x187e5a8; file offset: 0x187a5a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_RandomNextFruit_187a5a8(MergeFruit *self,void *runtimeMethod)

{
  int iVar1;
  
  iVar1 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
  self->_nextRandomIndex = iVar1;
  return;
}

