// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool GetRoomStagedRewardCollected(string roomName, int stage) { }
// Ghidra address: 019ce554; ELF VA: 0x18ce554; file offset: 0x18ca554
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_GetRoomStagedRewardCollected_18ca554
               (Game_UserData *self,void *roomName,int stage,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  void *key;
  int iStack_24;
  
  puVar1 = PTR_DAT_03869bf0;
  if ((bRam0000000003ab241c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869bf0);
    bRam0000000003ab241c = 1;
  }
  iStack_24 = stage;
  uVar3 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
  key = (void *)NativeHelper_02aa74d0(*(undefined8 *)puVar1,roomName,uVar3,0);
  iVar2 = UnityEngine_PlayerPrefs_GetInt_3246000(key,0,(void *)0x0);
  return iVar2 == 1;
}

