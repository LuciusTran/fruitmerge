// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public UserData() { }
// Ghidra address: 019d828c; ELF VA: 0x18d828c; file offset: 0x18d428c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_UserData_18d428c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_0386a050;
  if ((bRam0000000003ab24b7 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a050);
    bRam0000000003ab24b7 = 1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  uVar3 = *(undefined8 *)puVar2;
  if ((bRam0000000003abb74b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
    bRam0000000003abb74b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  return;
}

