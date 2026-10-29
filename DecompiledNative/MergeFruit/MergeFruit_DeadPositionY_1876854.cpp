// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float DeadPositionY() { }
// Ghidra address: 0197a854; ELF VA: 0x187a854; file offset: 0x1876854
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float MergeFruit_DeadPositionY_1876854(MergeFruit *self,void *runtimeMethod)

{
  Recovered_Vector3 RVar1;
  
  if (self->m_DeadLine != (void *)0x0) {
    RVar1 = UnityEngine_Transform_get_position_325a714(self->m_DeadLine,(void *)0x0);
    return RVar1.component1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

