// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopFixPenetration() { }
// Ghidra address: 0197d3d4; ELF VA: 0x187d3d4; file offset: 0x18793d4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StopFixPenetration_18793d4(MergeFruit *self,void *runtimeMethod)

{
  self->clearFrictionGravityTime = self->clearFrictionGravityDuration;
  return;
}

