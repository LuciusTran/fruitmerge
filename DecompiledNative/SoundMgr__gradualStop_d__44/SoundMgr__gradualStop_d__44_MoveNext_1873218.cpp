// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 01977218; ELF VA: 0x1877218; file offset: 0x1873218
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool SoundMgr__gradualStop_d__44_MoveNext_1873218
               (SoundMgr__gradualStop_d__44 *self,void *runtimeMethod)

{
  LocalNotification_Action *pLVar1;
  SoundMgr *pSVar2;
  float fVar3;
  float fVar4;
  
  pSVar2 = self->__4__this;
  if (self->__1__state - 1U < 2) {
    fVar4 = self->_volume_5__2;
    self->__1__state = -1;
    if (0.0 <= fVar4) {
      fVar3 = UnityEngine_Time_get_deltaTime_32574e0((void *)0x0);
      fVar4 = fVar4 - (fVar3 + fVar3);
      self->_volume_5__2 = fVar4;
      if ((pSVar2 != (SoundMgr *)0x0) && (pSVar2->LoopSoundPlayer != (void *)0x0)) {
        UnityEngine_AudioSource_set_volume_3210fe0(pSVar2->LoopSoundPlayer,fVar4,(void *)0x0);
        self->__2__current = (void *)0x0;
        NativeHelper_017ef228(&self->__2__current,0);
        self->__1__state = 2;
        return true;
      }
LAB_01977308:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    pLVar1 = self->callback;
    if (pLVar1 != (LocalNotification_Action *)0x0) {
      (*pLVar1->Title)(*(undefined8 *)(pLVar1 + 1),*(undefined8 *)&pLVar1->Foreground);
    }
  }
  else if (self->__1__state == 0) {
    self->__1__state = -1;
    if ((pSVar2 != (SoundMgr *)0x0) && (pSVar2->LoopSoundPlayer != (void *)0x0)) {
      fVar4 = UnityEngine_AudioSource_get_volume_3210f2c(pSVar2->LoopSoundPlayer,(void *)0x0);
      self->__2__current = (void *)0x0;
      self->_volume_5__2 = fVar4;
      NativeHelper_017ef228(&self->__2__current,0);
      self->__1__state = 1;
      return true;
    }
    goto LAB_01977308;
  }
  return false;
}

