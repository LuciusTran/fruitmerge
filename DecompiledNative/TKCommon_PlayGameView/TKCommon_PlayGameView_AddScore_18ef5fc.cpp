// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void AddScore() { }
// Ghidra address: 019f35fc; ELF VA: 0x18f35fc; file offset: 0x18ef5fc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_AddScore_18ef5fc(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  self->mCurrentScore = self->mCurrentScore + 10000;
  return;
}

