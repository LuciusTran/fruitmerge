// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetBombToolNum() { }
// Ghidra address: 019d0308; ELF VA: 0x18d0308; file offset: 0x18cc308
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int Game_UserData_GetBombToolNum_18cc308(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  TKLClient_TKLSwitcherConfig *pTVar3;
  long lVar4;
  undefined8 uVar5;
  void *extraout_x1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab243a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03869d48);
    bRam0000000003ab243a = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  pTVar3 = Global_get_RemoteConfig_18048d8((void *)0x0);
  if (pTVar3 != (TKLClient_TKLSwitcherConfig *)0x0) {
    iVar2 = pTVar3->FM_DefaultBombCount;
    lVar4 = *(long *)PTR_DAT_03869d48;
    if ((bRam0000000003abb5dc & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a63a0,iVar2,0);
      NativeHelper_017ef284(PTR_DAT_03876f90);
      bRam0000000003abb5dc = 1;
    }
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    if (lVar4 == 0) {
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else if (*(int *)(lVar4 + 0x10) == 0) {
      uVar5 = NativeHelper_02c68cd4(1,0);
      uStack_40 = NativeHelper_02c68cd8(uVar5,0);
      uStack_38 = 0;
    }
    else {
      if (cRam0000000003ab56c6 == '\0') {
        NativeHelper_017ef284(PTR_DAT_03873070);
        cRam0000000003ab56c6 = '\x01';
      }
      uStack_30 = NativeHelper_02aa3aa0(lVar4,0);
      uStack_28 = (ulong)*(uint *)(lVar4 + 0x10);
      uStack_40 = NativeHelper_0285f8bc(&uStack_30,*(undefined8 *)PTR_DAT_038a63a0);
      uStack_38 = CONCAT44(uStack_38._4_4_,(undefined4)uStack_28);
    }
    if (pcRam0000000003abb610 == (code *)0x0) {
      pcRam0000000003abb610 = (code *)NativeHelper_017ef240(&UNK_00a54a51);
    }
    iVar2 = (*pcRam0000000003abb610)(&uStack_40,iVar2);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

