// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private int GetCurrentCombo(FruitItem fruit) { }
// Ghidra address: 0197ad84; ELF VA: 0x187ad84; file offset: 0x1876d84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int FruitItem_GetCurrentCombo_1876d84(FruitItem *self,FruitItem *fruit,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  
  if (fruit != (FruitItem *)0x0) {
    iVar1 = self->ComboCount;
    iVar2 = fruit->ComboCount;
    self->ComboCount = 0;
    if (self->checkComboEndCoroutine != (void *)0x0) {
      UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->checkComboEndCoroutine,(void *)0x0)
      ;
    }
    fruit->ComboCount = 0;
    if (fruit->checkComboEndCoroutine != (void *)0x0) {
      UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
                (fruit,fruit->checkComboEndCoroutine,(void *)0x0);
    }
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

