// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 01976fec; ELF VA: 0x1876fec; file offset: 0x1872fec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool SoundMgr__DelayResetSoundName_d__38_MoveNext_1872fec
               (SoundMgr__DelayResetSoundName_d__38 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  void *self_00;
  void *extraout_x1;
  float time;
  
  if ((bRam0000000003ab2080 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866ef0);
    bRam0000000003ab2080 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_03866ef0;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    time = self->time;
    self->__1__state = -1;
    self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
    UnityEngine_WaitForSecondsRealtime_WaitForSecondsRealtime_32556e4(self_00,time,(void *)0x0);
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
    *(undefined4 *)&self->__4__this->field_0x70 = 0;
  }
  return iVar1 == 0;
}

