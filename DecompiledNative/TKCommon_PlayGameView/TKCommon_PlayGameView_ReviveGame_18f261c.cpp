// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ReviveGame() { }
// Ghidra address: 019f661c; ELF VA: 0x18f661c; file offset: 0x18f261c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ReviveGame_18f261c(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  if (self->mMergeFruit != (MergeFruit *)0x0) {
    MergeFruit_ClearFruitsByRevive_187cf8c(self->mMergeFruit,(void *)0x0);
    self->IsFinishing = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

