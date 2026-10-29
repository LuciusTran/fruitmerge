// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool CheckRoomCompleted() { }
// Ghidra address: 0198a200; ELF VA: 0x188a200; file offset: 0x1886200
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool BuildHouse_CheckRoomCompleted_1886200(BuildHouse *self,void *runtimeMethod)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = runtimeMethod;
  auVar1._0_8_ = self;
  if ((bRam0000000003ab2140 & 1) == 0) {
    auVar1 = NativeHelper_017ef284(PTR_DAT_038678a0);
    bRam0000000003ab2140 = 1;
  }
  if (self->mItemList != (void *)0x0) {
    return *(int *)((long)self->mItemList + 0x18) == 0;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(auVar1._0_8_,auVar1._8_8_);
}

