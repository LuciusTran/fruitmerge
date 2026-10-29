// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DestroyCurrentFruit() { }
// Ghidra address: 01981188; ELF VA: 0x1881188; file offset: 0x187d188
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_DestroyCurrentFruit_187d188(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *extraout_x1;
  void **ppvVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20dd & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20dd = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  ppvVar4 = &self->_currentFruit;
  pvVar5 = *ppvVar4;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar3,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (bVar2) {
    pvVar5 = *ppvVar4;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    NativeHelper_03357ca8(pvVar5,0);
    *ppvVar4 = (void *)0x0;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppvVar4 >> 0xc & 0x3f),
                      ((ulong)ppvVar4 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
  return;
}

