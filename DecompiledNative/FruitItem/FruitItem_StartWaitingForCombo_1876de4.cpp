// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartWaitingForCombo() { }
// Ghidra address: 0197ade4; ELF VA: 0x187ade4; file offset: 0x1876de4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_StartWaitingForCombo_1876de4(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  void *extraout_x1;
  void *runtimeMethod_00;
  MergeFruit *x;
  void **ppvVar4;
  
  if ((bRam0000000003ab20a7 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20a7 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  if (1 < self->ComboCount) {
    FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod);
    x = self->_mergeFruit;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
    if (bVar2) {
      pvVar3 = FruitItem_ShowComboEffect_1876eb4(self,runtimeMethod_00);
      self->mComboEffectObj = pvVar3;
      NativeHelper_017ef228();
    }
  }
  ppvVar4 = &self->checkComboEndCoroutine;
  if (*ppvVar4 != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,*ppvVar4,(void *)0x0);
  }
  pvVar3 = (void *)NativeHelper_0197b0a0(self);
  pvVar3 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar3,(void *)0x0);
  self->checkComboEndCoroutine = pvVar3;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)ppvVar4 >> 0xc & 0x3f),
                    ((ulong)ppvVar4 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

