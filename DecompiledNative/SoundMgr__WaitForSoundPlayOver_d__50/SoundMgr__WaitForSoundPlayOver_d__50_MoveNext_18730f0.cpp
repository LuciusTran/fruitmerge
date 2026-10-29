// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019770f0; ELF VA: 0x18770f0; file offset: 0x18730f0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool SoundMgr__WaitForSoundPlayOver_d__50_MoveNext_18730f0
               (SoundMgr__WaitForSoundPlayOver_d__50 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  void *self_00;
  void *extraout_x1;
  LocalNotification_Action *pLVar3;
  LocalNotification_Action **ppLVar4;
  float seconds;
  
  if ((bRam0000000003ab2081 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d380);
    bRam0000000003ab2081 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_0385d380;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    seconds = self->soundLength;
    self->__1__state = -1;
    self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
    UnityEngine_WaitForSeconds_WaitForSeconds_32555e8(self_00,seconds,(void *)0x0);
    self->__2__current = self_00;
    NativeHelper_017ef228(&self->__2__current,self_00);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    self->__1__state = -1;
    if (self->__4__this == (SoundMgr *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    ppLVar4 = &self->__4__this->_onPlayOver;
    pLVar3 = *ppLVar4;
    if (pLVar3 != (LocalNotification_Action *)0x0) {
      (*pLVar3->Title)(*(undefined8 *)(pLVar3 + 1),*(undefined8 *)&pLVar3->Foreground);
    }
    *ppLVar4 = (LocalNotification_Action *)0x0;
    NativeHelper_017ef228(ppLVar4,0);
  }
  return iVar1 == 0;
}

