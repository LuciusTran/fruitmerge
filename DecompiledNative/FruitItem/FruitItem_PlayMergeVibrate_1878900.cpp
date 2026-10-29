// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayMergeVibrate() { }
// Ghidra address: 0197c900; ELF VA: 0x187c900; file offset: 0x1878900
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_PlayMergeVibrate_1878900(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  void *extraout_x1;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_0385d918;
  if ((bRam0000000003ab20be & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03866e78);
    bRam0000000003ab20be = 1;
    runtimeMethod = extraout_x1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar2,runtimeMethod);
  }
  bVar4 = Global_get_IsActiveVibrate_1803fcc((void *)0x0);
  if (!bVar4) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_03866e78 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar3 = PTR_DAT_038681a8;
  puVar1 = PTR_DAT_03868198;
  puVar2 = PTR_DAT_03866e78;
  if ((bRam0000000003ab21e6 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03868198);
    NativeHelper_017ef284(PTR_DAT_038681a8);
    NativeHelper_017ef284(PTR_DAT_03866e78);
    bRam0000000003ab21e6 = 1;
  }
  lVar9 = NativeHelper_017ef374(*(undefined8 *)puVar1,4);
  NativeHelper_02b455b8(lVar9,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar2 = PTR_DAT_03866e78;
  if ((bRam0000000003ab21e8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_03866e78);
    NativeHelper_017ef284(PTR_DAT_0385d400);
    bRam0000000003ab21e8 = 1;
  }
  puVar1 = PTR_DAT_0385c420;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  plVar6 = (long *)NativeHelper_017ef374(*(undefined8 *)puVar1,2);
  if (plVar6 == (long *)0x0) {
code_r0x0199afe4:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((lVar9 != 0) &&
     (lVar7 = NativeHelper_017ef408(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
code_r0x0199afec:
    uVar8 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef3f4(uVar8,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar9;
    NativeHelper_017ef228(plVar6 + 4,lVar9);
    uStack_24 = 0xffffffff;
    lVar9 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_24);
    if ((lVar9 != 0) &&
       (lVar7 = NativeHelper_017ef408(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto code_r0x0199afec;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar9;
      NativeHelper_017ef228(plVar6 + 5,lVar9);
      if (lVar5 != 0) {
        NativeHelper_0330b418(lVar5,*(undefined8 *)PTR_DAT_0385d400,plVar6,0);
        return;
      }
      goto code_r0x0199afe4;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef538();
}

