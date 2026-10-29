// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ResetCounts() { }
// Ghidra address: 01975bfc; ELF VA: 0x1875bfc; file offset: 0x1871bfc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_ResetCounts_1871bfc(SoundMgr *self,void *runtimeMethod)

{
  self->touchCount = 0;
  self->matchCount = 0;
  self->lastTouchSoundTime = 0.0;
  self->lastMatchSoundTime = 0.0;
  return;
}

