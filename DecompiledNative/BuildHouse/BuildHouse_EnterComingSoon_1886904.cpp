// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void EnterComingSoon() { }
// Ghidra address: 0198a904; ELF VA: 0x188a904; file offset: 0x1886904
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuildHouse_EnterComingSoon_1886904(BuildHouse *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *extraout_x1;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((bRam0000000003ab2142 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678c8);
    bRam0000000003ab2142 = 1;
    runtimeMethod = extraout_x1;
  }
  self->inBuilding = true;
  puVar2 = PTR_DAT_038678c8;
  if (self->mRoomObj == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(0,runtimeMethod);
  }
  uVar8 = NativeHelper_0335213c(self->mRoomObj,0);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar10);
    lVar10 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_0386d7c8;
  uVar1 = _UNK_00a4765c;
  lVar10 = *(long *)(lVar10 + 0xb8);
  uVar12 = *(undefined4 *)(lVar10 + 0x18);
  uVar13 = *(undefined4 *)(lVar10 + 0x1c);
  uVar14 = *(undefined4 *)(lVar10 + 0x20);
  if ((bRam0000000003ab2943 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865fb0,0);
    NativeHelper_017ef284(PTR_DAT_03865fb8);
    NativeHelper_017ef284(PTR_DAT_03865f58);
    NativeHelper_017ef284(PTR_DAT_03868800);
    NativeHelper_017ef284(PTR_DAT_0386d7d0);
    NativeHelper_017ef284(PTR_DAT_0386d7d8);
    NativeHelper_017ef284(PTR_DAT_0386d7c8);
    bRam0000000003ab2943 = 1;
  }
  lVar10 = NativeHelper_017ef520(*(undefined8 *)puVar2);
  NativeHelper_02c51f64(lVar10,0);
  puVar7 = PTR_DAT_0386d7d8;
  puVar6 = PTR_DAT_0386d7d0;
  puVar5 = PTR_DAT_03868800;
  puVar4 = PTR_DAT_03865fb8;
  puVar3 = PTR_DAT_03865fb0;
  puVar2 = PTR_DAT_03865f58;
  if (lVar10 != 0) {
    puVar11 = (undefined8 *)(lVar10 + 0x10);
    *puVar11 = uVar8;
    NativeHelper_017ef228(puVar11,uVar8);
    uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar3);
    func_0x0209afa0(uVar8,lVar10,*(undefined8 *)puVar6,0);
    uVar9 = NativeHelper_017ef520(*(undefined8 *)puVar4);
    func_0x0209c194(uVar9,lVar10,*(undefined8 *)puVar7,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar8 = func_0x01a5138c(uVar12,uVar13,uVar14,uVar1,uVar8,uVar9);
    NativeHelper_01d70028(uVar8,*puVar11,*(undefined8 *)puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

