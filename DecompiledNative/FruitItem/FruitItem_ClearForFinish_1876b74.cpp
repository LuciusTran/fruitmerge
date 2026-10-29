// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClearForFinish() { }
// Ghidra address: 0197ab74; ELF VA: 0x187ab74; file offset: 0x1876b74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_ClearForFinish_1876b74(FruitItem *self,void *runtimeMethod)

{
  ulong uVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *extraout_x1;
  long lVar4;
  undefined8 uVar5;
  
  if (self->_isRedAnimationStarted != false) {
    self->_isRedAnimationStarted = false;
    FruitItem_ResetRedAnimation_1876994(self,runtimeMethod);
    runtimeMethod = extraout_x1;
  }
  FruitItem_ResetRedAnimation_1876994(self,runtimeMethod);
  if (self->checkComboEndCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->checkComboEndCoroutine,(void *)0x0);
  }
  if (self->_waitingBlinkCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->_waitingBlinkCoroutine,(void *)0x0);
  }
  pvVar3 = self->_blinkCoroutine;
  if (pvVar3 != (void *)0x0) {
    if (pvVar3 == (void *)0x0) {
      NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
      uVar2 = NativeHelper_017ef520();
      uVar5 = NativeHelper_017ef298(PTR_DAT_038a78d0);
      NativeHelper_02c12308(uVar2,uVar5,0);
    }
    else {
      uVar1 = NativeHelper_03353b80();
      if ((uVar1 & 1) != 0) {
        if ((bRam0000000003abb850 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a7898);
          bRam0000000003abb850 = 1;
        }
        if (self != (FruitItem *)0x0) {
          lVar4 = *(long *)&self->field_0x10;
          if (lVar4 != 0) {
            uVar5 = 0;
            if (pvVar3 != (void *)0x0) {
              uVar5 = *(undefined8 *)((long)pvVar3 + 0x10);
            }
            if (pcRam0000000003abb8c8 == (code *)0x0) {
              pcRam0000000003abb8c8 = (code *)NativeHelper_017ef240(&UNK_00a5f9fc);
            }
                    /* WARNING: Could not recover jumptable at 0x033540f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abb8c8)(lVar4,uVar5);
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_0334bff8();
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      NativeHelper_017ef298(PTR_DAT_03865620);
      uVar2 = NativeHelper_017ef520();
      uVar5 = NativeHelper_017ef298(PTR_DAT_038a78b8);
      NativeHelper_02b8eaa8(uVar2,uVar5,0);
    }
    uVar5 = NativeHelper_017ef298(PTR_DAT_038a78e8);
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef3f4(uVar2,uVar5);
  }
  return;
}

