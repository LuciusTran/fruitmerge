// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveRoom(string roomName) { }
// Ghidra address: 019d1bb8; ELF VA: 0x18d1bb8; file offset: 0x18cdbb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SaveRoom_18cdbb8(Game_UserData *self,void *roomName,void *runtimeMethod)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *value;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000003ab2450 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c830);
    NativeHelper_017ef284(PTR_DAT_0385de50);
    NativeHelper_017ef284(PTR_DAT_03869d88);
    self = (Game_UserData *)NativeHelper_017ef284(PTR_DAT_0385cc18);
    bRam0000000003ab2450 = 1;
  }
  lVar2 = Game_UserData_GetRoomNames_18cdae0(self);
  if (lVar2 != 0) {
    uVar3 = NativeHelper_02569b78(lVar2,roomName,*(undefined8 *)PTR_DAT_0385de50);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)PTR_DAT_0385c830;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = roomName;
        NativeHelper_017ef228(puVar4,roomName);
      }
      else {
        NativeHelper_025697dc
                  (lVar2,roomName,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
        ;
      }
      value = (void *)NativeHelper_02aa7b4c(*(undefined8 *)PTR_DAT_0385cc18,lVar2,0);
      UnityEngine_PlayerPrefs_SetString_3246394(*(void **)PTR_DAT_03869d88,value,(void *)0x0);
      if (pcRam0000000003abb5f0 == (code *)0x0) {
        pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
      }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb5f0)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

