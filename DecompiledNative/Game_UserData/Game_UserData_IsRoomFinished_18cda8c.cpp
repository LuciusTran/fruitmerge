// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsRoomFinished(string roomName) { }
// Ghidra address: 019d1a8c; ELF VA: 0x18d1a8c; file offset: 0x18cda8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_IsRoomFinished_18cda8c(Game_UserData *self,void *roomName,void *runtimeMethod)

{
  int iVar1;
  long lVar2;
  
  if ((bRam0000000003ab244f & 1) == 0) {
    self = (Game_UserData *)NativeHelper_017ef284(PTR_DAT_0385de50);
    bRam0000000003ab244f = 1;
  }
  lVar2 = Game_UserData_GetRoomNames_18cdae0(self);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      iVar1 = func_0x01d88804(*(undefined8 *)(lVar2 + 0x10),roomName,0,*(int *)(lVar2 + 0x18),
                              *(undefined8 *)
                               (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_0385de50 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                         0xc0) + 0x148));
      return iVar1 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

