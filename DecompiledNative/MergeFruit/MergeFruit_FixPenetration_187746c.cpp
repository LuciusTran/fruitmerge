// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void FixPenetration() { }
// Ghidra address: 0197b46c; ELF VA: 0x187b46c; file offset: 0x187746c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_FixPenetration_187746c(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar3;
  long lVar4;
  
  if ((bRam0000000003ab20ea & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab20ea = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_0385d918;
  if (self->_gameState != 4) {
    lVar2 = *(long *)PTR_DAT_0385d918;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar2,runtimeMethod);
      lVar2 = *(long *)puVar1;
      runtimeMethod = extraout_x1_00;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if (*(char *)(lVar4 + 2) != '\0') {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar2,runtimeMethod);
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      pvVar3 = self->clearFrictionGravityCoroutine;
      *(undefined1 *)(lVar4 + 2) = 0;
      if (pvVar3 != (void *)0x0) {
        UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,pvVar3,(void *)0x0);
      }
      pvVar3 = (void *)NativeHelper_019827a0(self->clearFrictionGravityDuration,self);
      pvVar3 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar3,(void *)0x0);
      self->clearFrictionGravityCoroutine = pvVar3;
      if (iRam0000000003cd3780 != 0) {
        func_0x018dcb10(1L << ((ulong)&self->clearFrictionGravityCoroutine >> 0xc & 0x3f),
                        ((ulong)&self->clearFrictionGravityCoroutine >> 0x12 & 0x7fff) * 8 +
                        0x3b07758);
      }
      return;
    }
  }
  return;
}

