// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void InitEdges() { }
// Ghidra address: 0197deb8; ELF VA: 0x187deb8; file offset: 0x1879eb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_InitEdges_1879eb8(MergeFruit *self,void *runtimeMethod)

{
  void *pvVar1;
  void *self_00;
  void *extraout_x1;
  Recovered_Vector3 RVar2;
  Recovered_Vector3 RVar3;
  
  if ((bRam0000000003ab20d0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038671e8);
    NativeHelper_017ef284(PTR_DAT_038671f0);
    NativeHelper_017ef284(PTR_DAT_038671f8);
    bRam0000000003ab20d0 = 1;
    runtimeMethod = extraout_x1;
  }
  MergeFruit_BoxAdapt_187c64c(self,runtimeMethod);
  if (self->m_Box != (void *)0x0) {
    pvVar1 = UnityEngine_Transform_Find_325c35c(self->m_Box,*(void **)PTR_DAT_038671f0,(void *)0x0);
    if ((self->m_Box != (void *)0x0) &&
       (self_00 = UnityEngine_Transform_Find_325c35c
                            (self->m_Box,*(void **)PTR_DAT_038671e8,(void *)0x0),
       pvVar1 != (void *)0x0)) {
      RVar2 = UnityEngine_Transform_get_position_325a714(pvVar1,(void *)0x0);
      if (self_00 != (void *)0x0) {
        RVar3 = UnityEngine_Transform_get_position_325a714(self_00,(void *)0x0);
        self->leftEdgeX = RVar2.component0 + 0.5;
        self->rightEdgeX = RVar3.component0 + -0.5;
        if ((self->m_Box != (void *)0x0) &&
           (pvVar1 = UnityEngine_Transform_Find_325c35c
                               (self->m_Box,*(void **)PTR_DAT_038671f8,(void *)0x0),
           pvVar1 != (void *)0x0)) {
          RVar2 = UnityEngine_Transform_get_position_325a714(pvVar1,(void *)0x0);
          self->bottomEdgeY = RVar2.component1 + 1.0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

