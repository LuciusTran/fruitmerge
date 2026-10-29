// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 0197d824; ELF VA: 0x187d824; file offset: 0x1879824
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool FruitItem__WaitingComboEnd_d__64_MoveNext_1879824
               (FruitItem__WaitingComboEnd_d__64 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  TKCommon_PlayGameView *self_00;
  void *self_01;
  void *extraout_x1;
  FruitItem *pFVar4;
  
  if ((bRam0000000003ab20c2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867188);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385d380);
    NativeHelper_017ef284(PTR_DAT_03867190);
    bRam0000000003ab20c2 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_0385d380;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    self_01 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
    UnityEngine_WaitForSeconds_WaitForSeconds_32555e8(self_01,1.0,(void *)0x0);
    self->__2__current = self_01;
    NativeHelper_017ef228(&self->__2__current,self_01);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pFVar4 = self->__4__this;
    self->__1__state = -1;
    if (pFVar4 == (FruitItem *)0x0) {
LAB_0197d95c:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (2 < pFVar4->ComboCount) {
      self_00 = Game_Controller_FMViewController_GetView_1b724a8
                          (*(void **)PTR_DAT_03867190,*(void **)PTR_DAT_03867188);
      if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0);
      }
      bVar3 = UnityEngine_object_op_Implicit_3252d84(self_00,(void *)0x0);
      if (bVar3) {
        if (self_00 == (TKCommon_PlayGameView *)0x0) goto LAB_0197d95c;
        TKCommon_PlayGameView_ShowComboAnimation_18f569c(self_00,pFVar4->ComboCount,(void *)0x0);
      }
    }
    pFVar4->ComboCount = 0;
  }
  return iVar1 == 0;
}

