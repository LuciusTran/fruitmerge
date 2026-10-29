// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetRoomStagedRewardCollected(string roomName, int stage) { }
// Ghidra address: 019ce5e4; ELF VA: 0x18ce5e4; file offset: 0x18ca5e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SetRoomStagedRewardCollected_18ca5e4
               (Game_UserData *self,void *roomName,int stage,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  void *key;
  int iStack_24;
  
  puVar1 = PTR_DAT_03869bf0;
  if ((bRam0000000003ab241d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869bf0);
    bRam0000000003ab241d = 1;
  }
  iStack_24 = stage;
  uVar2 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
  key = (void *)NativeHelper_02aa74d0(*(undefined8 *)puVar1,roomName,uVar2,0);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(key,1,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

