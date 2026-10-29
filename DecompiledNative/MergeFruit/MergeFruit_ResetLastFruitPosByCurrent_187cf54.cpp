// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetLastFruitPosByCurrent() { }
// Ghidra address: 01980f54; ELF VA: 0x1880f54; file offset: 0x187cf54
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_ResetLastFruitPosByCurrent_187cf54(MergeFruit *self,void *runtimeMethod)

{
  Recovered_Vector3 RVar1;
  undefined1 auVar2 [16];
  
  if ((self->_currentFruit != (void *)0x0) &&
     (auVar2 = NativeHelper_0335213c(self->_currentFruit,0), runtimeMethod = auVar2._8_8_,
     auVar2._0_8_ != (void *)0x0)) {
    RVar1 = UnityEngine_Transform_get_position_325a714(auVar2._0_8_,(void *)0x0);
    (self->_lastFruitPos).component0 = RVar1.component0;
    (self->_lastFruitPos).component1 = RVar1.component1;
    (self->_lastFruitPos).component2 = RVar1.component2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(0,runtimeMethod);
}

