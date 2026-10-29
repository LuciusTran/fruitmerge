// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayTouchSound() { }
// Ghidra address: 0197c410; ELF VA: 0x187c410; file offset: 0x1878410
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_PlayTouchSound_1878410(FruitItem *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  void *runtimeMethod_00;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  void *extraout_x1;
  void *in_x4;
  SoundMgr *self_00;
  float fVar13;
  undefined4 uStack_4c;
  undefined8 auStack_48 [2];
  
  if ((bRam0000000003ab20bb & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab20bb = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->isPlayTouchSound != false) {
    return;
  }
  lVar9 = **(long **)(*(long *)PTR_DAT_0385d490 + 0xb8);
  self->isPlayTouchSound = true;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(0,runtimeMethod);
  }
  if ((bRam0000000003ab206e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03866e68);
    NativeHelper_017ef284(PTR_DAT_03866e70);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    NativeHelper_017ef284(PTR_DAT_03866e78);
    bRam0000000003ab206e = 1;
  }
  fVar13 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  if (fVar13 - *(float *)(lVar9 + 0x40) < _UNK_00a47714) {
    return;
  }
  fVar13 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  lVar7 = *(long *)(lVar9 + 0x20);
  *(float *)(lVar9 + 0x40) = fVar13;
  if (lVar7 == 0) {
LAB_01975d48:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  iVar6 = *(int *)(lVar7 + 0x18);
  iVar1 = 0;
  if (iVar6 != 0) {
    iVar1 = *(int *)(lVar9 + 0x38) / iVar6;
  }
  self_00 = (SoundMgr *)**(undefined8 **)(*(long *)PTR_DAT_0385d490 + 0xb8);
  uVar8 = NativeHelper_02519d28
                    (lVar7,*(int *)(lVar9 + 0x38) - iVar1 * iVar6,*(undefined8 *)PTR_DAT_03866e70);
  if (self_00 == (SoundMgr *)0x0) goto LAB_01975d48;
  SoundMgr_PlaySound_1871d4c(self_00,(void *)(uVar8 & 0xffffffff),false,1.0,false,in_x4);
  iVar6 = *(int *)(*(long *)PTR_DAT_0385d918 + 0xe4);
  *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
  if (iVar6 == 0) {
    NativeHelper_017ef404();
  }
  bVar5 = Global_get_IsActiveVibrate_1803fcc((void *)0x0);
  if (!bVar5) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_03866e78 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar4 = PTR_DAT_03866e78;
  if ((bRam0000000003ab21e3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866e78);
    bRam0000000003ab21e3 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar4 = PTR_DAT_03866e78;
  if ((bRam0000000003ab21e7 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c370);
    NativeHelper_017ef284(PTR_DAT_0385c608);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_03866e78);
    NativeHelper_017ef284(PTR_DAT_0385d400);
    NativeHelper_017ef284(PTR_DAT_0385d3f0);
    NativeHelper_017ef284(PTR_DAT_0385d410);
    bRam0000000003ab21e7 = 1;
  }
  runtimeMethod_00 = *(void **)puVar4;
  if (*(int *)((long)runtimeMethod_00 + 0xe4) == 0) {
    runtimeMethod_00 = (void *)NativeHelper_017ef404();
  }
  puVar3 = PTR_DAT_0385c420;
  iVar6 = Vibration_AndroidSDKInit_1897098(runtimeMethod_00);
  puVar2 = PTR_DAT_0385d3f0;
  if (iVar6 < 0x1a) {
    lVar9 = *(long *)puVar4;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar9 = *(long *)puVar4;
    }
    lVar7 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
    plVar10 = (long *)NativeHelper_017ef374(*(undefined8 *)puVar3,1);
    auStack_48[0] = 0x32;
    lVar9 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x68),auStack_48);
    if (plVar10 == (long *)0x0) goto code_r0x0199ad4c;
    if ((lVar9 != 0) &&
       (lVar11 = NativeHelper_017ef408(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto code_r0x0199ad54;
    if ((int)plVar10[3] == 0) goto code_r0x0199ad50;
    plVar10[4] = lVar9;
    NativeHelper_017ef228(plVar10 + 4,lVar9);
  }
  else {
    lVar9 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c370);
    NativeHelper_03308550(lVar9,*(undefined8 *)puVar2,0);
    plVar10 = (long *)NativeHelper_017ef374(*(undefined8 *)puVar3,2);
    puVar2 = PTR_DAT_0385c2d8;
    auStack_48[0] = 0x32;
    lVar7 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x68),auStack_48);
    if (plVar10 == (long *)0x0) goto code_r0x0199ad4c;
    if ((lVar7 != 0) &&
       (lVar11 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
code_r0x0199ad54:
      uVar12 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar12,0);
    }
    if ((int)plVar10[3] == 0) {
code_r0x0199ad50:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar10[4] = lVar7;
    NativeHelper_017ef228(plVar10 + 4,lVar7);
    uStack_4c = 0xff;
    lVar7 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_4c);
    if ((lVar7 != 0) &&
       (lVar11 = NativeHelper_017ef408(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto code_r0x0199ad54;
    if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto code_r0x0199ad50;
    plVar10[5] = lVar7;
    NativeHelper_017ef228(plVar10 + 5,lVar7);
    if (lVar9 == 0) goto code_r0x0199ad4c;
    lVar9 = NativeHelper_01b078f4
                      (lVar9,*(undefined8 *)PTR_DAT_0385d410,plVar10,*(undefined8 *)PTR_DAT_0385c608
                      );
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar7);
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    plVar10 = (long *)NativeHelper_017ef374(*(undefined8 *)puVar3,1);
    if (plVar10 == (long *)0x0) goto code_r0x0199ad4c;
    if ((lVar9 != 0) &&
       (lVar11 = NativeHelper_017ef408(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto code_r0x0199ad54;
    if ((int)plVar10[3] == 0) goto code_r0x0199ad50;
    plVar10[4] = lVar9;
    NativeHelper_017ef228(plVar10 + 4,lVar9);
  }
  if (lVar7 != 0) {
    NativeHelper_0330b418(lVar7,*(undefined8 *)PTR_DAT_0385d400,plVar10,0);
    return;
  }
code_r0x0199ad4c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

