// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool HasRoomTaskStarted(string roomName, string taskName) { }
// Ghidra address: 019d1838; ELF VA: 0x18d1838; file offset: 0x18cd838
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_HasRoomTaskStarted_18cd838
               (Game_UserData *self,void *roomName,void *taskName,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = PTR_DAT_03869d80;
  puVar2 = PTR_DAT_0385d098;
  if ((bRam0000000003ab244b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d80);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    bRam0000000003ab244b = 1;
  }
  lVar5 = NativeHelper_02aa70d0(roomName,*(undefined8 *)puVar2,taskName,*(undefined8 *)puVar3,0);
  uVar6 = 0;
  if ((bRam0000000003abb5e0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a63a0,0);
    NativeHelper_017ef284(PTR_DAT_03876f90);
    bRam0000000003abb5e0 = 1;
    uVar6 = extraout_x1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  if (lVar5 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else if (*(int *)(lVar5 + 0x10) == 0) {
    uVar6 = NativeHelper_02c68cd4(1,0);
    uStack_40 = NativeHelper_02c68cd8(uVar6,0);
    uStack_38 = 0;
  }
  else {
    if (cRam0000000003ab56c6 == '\0') {
      NativeHelper_017ef284(PTR_DAT_03873070,uVar6);
      cRam0000000003ab56c6 = '\x01';
    }
    NativeHelper_02aa3aa0(lVar5,0);
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    uStack_40 = NativeHelper_0285f8bc(&stack0xffffffffffffffd0,*(undefined8 *)PTR_DAT_038a63a0);
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  }
  if (pcRam0000000003abb628 == (code *)0x0) {
    pcRam0000000003abb628 = (code *)NativeHelper_017ef240(&UNK_00a4acad);
  }
  bVar4 = (*pcRam0000000003abb628)(&uStack_40);
  return (bool)(bVar4 & 1);
}

