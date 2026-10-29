// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int get_CurrentFinishedGift() { }
// Ghidra address: 0198a1a8; ELF VA: 0x188a1a8; file offset: 0x18861a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int BuildHouse_get_CurrentFinishedGift_18861a8(BuildHouse *self,void *runtimeMethod)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = runtimeMethod;
  auVar1._0_8_ = self;
  if ((bRam0000000003ab213f & 1) == 0) {
    auVar1 = NativeHelper_017ef284(PTR_DAT_038678a0);
    bRam0000000003ab213f = 1;
  }
  if (self->mItemList != (void *)0x0) {
    return self->mItemTotalCount - *(int *)((long)self->mItemList + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(auVar1._0_8_,auVar1._8_8_);
}

