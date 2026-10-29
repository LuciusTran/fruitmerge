// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CleanShadow() { }
// Ghidra address: 0198af8c; ELF VA: 0x188af8c; file offset: 0x1886f8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_CleanShadow_1886f8c(BuildHouse *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  void *extraout_x1;
  void **ppvVar5;
  void *x;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2146 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2146 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  ppvVar5 = &self->mWaitingBuyItemShadow;
  x = *ppvVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar3,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (*ppvVar5 != (void *)0x0) {
      uVar4 = NativeHelper_0334f4c8(*ppvVar5,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar3);
      }
      NativeHelper_03357b5c(uVar4,0);
      *ppvVar5 = (void *)0x0;
      if (iRam0000000003cd3780 != 0) {
        func_0x018dcb10(1L << ((ulong)ppvVar5 >> 0xc & 0x3f),
                        ((ulong)ppvVar5 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return;
}

