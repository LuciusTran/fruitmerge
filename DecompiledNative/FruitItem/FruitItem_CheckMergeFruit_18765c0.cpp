// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckMergeFruit() { }
// Ghidra address: 0197a5c0; ELF VA: 0x187a5c0; file offset: 0x18765c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_CheckMergeFruit_18765c0(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  void *extraout_x1;
  MergeFruit **ppMVar5;
  MergeFruit *pMVar6;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20a1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038670a8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20a1 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  ppMVar5 = &self->_mergeFruit;
  pMVar6 = *ppMVar5;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar4,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Equality_324f284(pMVar6,(void *)0x0,(void *)0x0);
  puVar2 = PTR_DAT_038670a8;
  if (bVar3) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pMVar6 = (MergeFruit *)NativeHelper_01cad430(*(undefined8 *)puVar2);
    *ppMVar5 = pMVar6;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppMVar5 >> 0xc & 0x3f),
                      ((ulong)ppMVar5 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
  return;
}

