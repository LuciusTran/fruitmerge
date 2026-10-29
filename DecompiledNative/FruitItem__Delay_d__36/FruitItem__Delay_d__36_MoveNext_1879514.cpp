// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 0197d514; ELF VA: 0x187d514; file offset: 0x1879514
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool FruitItem__Delay_d__36_MoveNext_1879514(FruitItem__Delay_d__36 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  void *self_00;
  void *extraout_x1;
  LocalNotification_Action *pLVar3;
  float time;
  
  if ((bRam0000000003ab20c0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866ef0);
    bRam0000000003ab20c0 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_03866ef0;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    time = self->duration;
    self->__1__state = -1;
    self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
    UnityEngine_WaitForSecondsRealtime_WaitForSecondsRealtime_32556e4(self_00,time,(void *)0x0);
    self->__2__current = self_00;
    NativeHelper_017ef228(&self->__2__current,self_00);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pLVar3 = self->action;
    self->__1__state = -1;
    if (pLVar3 == (LocalNotification_Action *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    (*pLVar3->Title)(*(undefined8 *)(pLVar3 + 1),*(undefined8 *)&pLVar3->Foreground);
  }
  return iVar1 == 0;
}

