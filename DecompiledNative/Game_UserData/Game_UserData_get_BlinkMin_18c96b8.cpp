// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int get_BlinkMin() { }
// Ghidra address: 019cd6b8; ELF VA: 0x18cd6b8; file offset: 0x18c96b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int Game_UserData_get_BlinkMin_18c96b8(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *extraout_x1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2407 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03869b50);
    bRam0000000003ab2407 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar3,runtimeMethod);
    lVar3 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x7f) != '\0') {
    lVar3 = *(long *)PTR_DAT_03869b50;
    if ((bRam0000000003abb5dc & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a63a0,5,0);
      NativeHelper_017ef284(PTR_DAT_03876f90);
      bRam0000000003abb5dc = 1;
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    if (lVar3 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else if (*(int *)(lVar3 + 0x10) == 0) {
      uVar4 = NativeHelper_02c68cd4(1,0);
      uStack_40 = NativeHelper_02c68cd8(uVar4,0);
      uStack_38 = 0;
    }
    else {
      if (cRam0000000003ab56c6 == '\0') {
        NativeHelper_017ef284(PTR_DAT_03873070);
        cRam0000000003ab56c6 = '\x01';
      }
      uStack_30 = NativeHelper_02aa3aa0(lVar3,0);
      uStack_28 = (ulong)*(uint *)(lVar3 + 0x10);
      uStack_40 = NativeHelper_0285f8bc(&uStack_30,*(undefined8 *)PTR_DAT_038a63a0);
      uStack_38 = CONCAT44(uStack_38._4_4_,(undefined4)uStack_28);
    }
    if (pcRam0000000003abb610 == (code *)0x0) {
      pcRam0000000003abb610 = (code *)NativeHelper_017ef240(&UNK_00a54a51);
    }
    iVar2 = (*pcRam0000000003abb610)(&uStack_40,5);
    return iVar2;
  }
  return 5;
}

