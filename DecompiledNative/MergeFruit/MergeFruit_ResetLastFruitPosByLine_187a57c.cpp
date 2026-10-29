// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetLastFruitPosByLine() { }
// Ghidra address: 0197e57c; ELF VA: 0x187e57c; file offset: 0x187a57c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_ResetLastFruitPosByLine_187a57c(MergeFruit *self,void *runtimeMethod)

{
  Recovered_Vector3 RVar1;
  
  if (self->m_LineTrans != (void *)0x0) {
    RVar1 = UnityEngine_Transform_get_position_325a714(self->m_LineTrans,(void *)0x0);
    (self->_lastFruitPos).component0 = RVar1.component0;
    (self->_lastFruitPos).component1 = RVar1.component1;
    (self->_lastFruitPos).component2 = RVar1.component2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

