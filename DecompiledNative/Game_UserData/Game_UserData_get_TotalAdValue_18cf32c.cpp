// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float get_TotalAdValue() { }
// Ghidra address: 019d332c; ELF VA: 0x18d332c; file offset: 0x18cf32c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float Game_UserData_get_TotalAdValue_18cf32c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  float fVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_03869e20;
  if ((bRam0000000003ab2475 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869e20);
    bRam0000000003ab2475 = 1;
  }
  lVar2 = *(long *)puVar1;
  uVar3 = 0;
  if ((bRam0000000003abb5dd & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a63a0,0);
    NativeHelper_017ef284(PTR_DAT_03876f90);
    bRam0000000003abb5dd = 1;
    uVar3 = extraout_x1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (lVar2 == 0) {
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else if (*(int *)(lVar2 + 0x10) == 0) {
    uVar3 = NativeHelper_02c68cd4(1,0);
    uStack_40 = NativeHelper_02c68cd8(uVar3,0);
    uStack_38 = 0;
  }
  else {
    if (cRam0000000003ab56c6 == '\0') {
      NativeHelper_017ef284(PTR_DAT_03873070,uVar3);
      cRam0000000003ab56c6 = '\x01';
    }
    uStack_30 = NativeHelper_02aa3aa0(lVar2,0);
    uStack_28 = (ulong)*(uint *)(lVar2 + 0x10);
    uStack_40 = NativeHelper_0285f8bc(&uStack_30,*(undefined8 *)PTR_DAT_038a63a0);
    uStack_38 = CONCAT44(uStack_38._4_4_,(undefined4)uStack_28);
  }
  if (pcRam0000000003abb618 == (code *)0x0) {
    pcRam0000000003abb618 = (code *)NativeHelper_017ef240(&UNK_00a66b0b);
  }
  fVar4 = (float)(*pcRam0000000003abb618)(0x3f800000,&uStack_40);
  return fVar4;
}

