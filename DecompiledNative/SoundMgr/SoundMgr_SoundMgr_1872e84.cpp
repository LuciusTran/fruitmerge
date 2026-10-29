// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public SoundMgr() { }
// Ghidra address: 01976e84; ELF VA: 0x1876e84; file offset: 0x1872e84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_SoundMgr_1872e84(SoundMgr *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_03866ee8;
  puVar1 = PTR_DAT_03866ee0;
  if ((bRam0000000003ab207f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866ee8);
    NativeHelper_017ef284(PTR_DAT_03866ee0);
    bRam0000000003ab207f = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_02519790(pvVar3,*(undefined8 *)puVar2);
  self->m_TouchSounds = pvVar3;
  NativeHelper_017ef228(&self->m_TouchSounds,pvVar3);
  pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02519790(pvVar3,*(undefined8 *)puVar2);
  self->m_MatchSounds = pvVar3;
  NativeHelper_017ef228(&self->m_MatchSounds,pvVar3);
  pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02519790(pvVar3,*(undefined8 *)puVar2);
  self->m_ComboSounds = pvVar3;
  NativeHelper_017ef228(&self->m_ComboSounds,pvVar3);
  self->_pushPlayPulse = 0.05;
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003abb74b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
    bRam0000000003abb74b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  return;
}

