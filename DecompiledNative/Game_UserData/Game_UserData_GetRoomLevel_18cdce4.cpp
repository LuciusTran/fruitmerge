// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetRoomLevel() { }
// Ghidra address: 019d1ce4; ELF VA: 0x18d1ce4; file offset: 0x18cdce4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int Game_UserData_GetRoomLevel_18cdce4(Game_UserData *self,void *runtimeMethod)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = runtimeMethod;
  auVar2._0_8_ = self;
  if ((bRam0000000003ab2452 & 1) == 0) {
    auVar2 = NativeHelper_017ef284(PTR_DAT_0385c320);
    bRam0000000003ab2452 = 1;
  }
  lVar1 = Game_UserData_GetRoomNames_18cdae0(auVar2._0_8_,auVar2._8_8_);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x18) + 1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

