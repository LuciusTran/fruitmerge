// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public string UserName() { }
// Ghidra address: 019d1530; ELF VA: 0x18d1530; file offset: 0x18cd530
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * Game_UserData_UserName_18cd530(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  void *runtimeMethod_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void **ppvVar12;
  undefined1 auVar13 [12];
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  void **ppvStack_90;
  void *pvStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  puVar2 = PTR_DAT_03869d70;
  if ((bRam0000000003ab2446 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d70);
    bRam0000000003ab2446 = 1;
  }
  bVar3 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)puVar2,(void *)0x0);
  if (!bVar3) {
    pvVar4 = Game_UserData_RandomName_18cd5a4((Game_UserData *)0x0,runtimeMethod_00);
    UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar2,pvVar4,(void *)0x0);
    NativeHelper_0334aa10(0);
  }
  puVar1 = PTR_DAT_0385cbb8;
  lVar5 = *(long *)puVar2;
  if ((bRam0000000003abb5df & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385cbb8,0);
    bRam0000000003abb5df = 1;
  }
  lVar8 = *(long *)puVar1;
  if ((bRam0000000003abb5de & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a63a0);
    NativeHelper_017ef284(PTR_DAT_03876f90);
    bRam0000000003abb5de = 1;
  }
  puStack_a8 = &uStack_38;
  puStack_98 = &uStack_80;
  uStack_30 = 0;
  uStack_28 = 0;
  lStack_b0 = 0;
  puStack_a0 = &uStack_60;
  ppvStack_90 = &pvStack_88;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  pvStack_88 = (void *)0x0;
  if (lVar5 == 0) {
    uStack_48 = 0;
  }
  else {
    if (*(int *)(lVar5 + 0x10) != 0) {
      if (cRam0000000003ab56c6 == '\0') {
        NativeHelper_017ef284(PTR_DAT_03873070);
        cRam0000000003ab56c6 = '\x01';
      }
      uStack_30 = NativeHelper_02aa3aa0(lVar5,0);
      uStack_28 = (ulong)*(uint *)(lVar5 + 0x10);
      uStack_38 = NativeHelper_0285f8bc(&uStack_30,*(undefined8 *)PTR_DAT_038a63a0);
      uStack_40 = CONCAT44(uStack_40._4_4_,(undefined4)uStack_28);
      uStack_48 = uStack_38;
      goto joined_r0x0334a4d0;
    }
    uVar6 = NativeHelper_02c68cd4(1,0);
    uStack_48 = NativeHelper_02c68cd8(uVar6,0);
  }
  uStack_40 = 0;
joined_r0x0334a4d0:
  if (lVar8 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else if (*(int *)(lVar8 + 0x10) == 0) {
    uVar6 = NativeHelper_02c68cd4(1,0);
    uStack_70 = NativeHelper_02c68cd8(uVar6,0);
    uStack_68 = 0;
  }
  else {
    if (cRam0000000003ab56c6 == '\0') {
      NativeHelper_017ef284(PTR_DAT_03873070);
      cRam0000000003ab56c6 = '\x01';
    }
    uStack_58 = NativeHelper_02aa3aa0(lVar8,0);
    uStack_50 = (ulong)*(uint *)(lVar8 + 0x10);
    uStack_70 = NativeHelper_0285f8bc(&uStack_58,*(undefined8 *)PTR_DAT_038a63a0);
    uStack_68 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_50);
    uStack_60 = uStack_70;
  }
  if (pcRam0000000003abb620 == (code *)0x0) {
    pcRam0000000003abb620 = (code *)NativeHelper_017ef240(&UNK_00a507a1);
  }
  (*pcRam0000000003abb620)(&uStack_48,&uStack_70,&uStack_80);
  lVar5 = 0;
  puVar9 = &uStack_38;
  puVar10 = &uStack_60;
  puVar11 = &uStack_80;
  ppvVar12 = &pvStack_88;
  while( true ) {
    *puVar9 = 0;
    *puVar10 = 0;
    pvVar4 = UnityEngine_Bindings_OutStringMarshaller_GetStringAndDispose_325faf0
                       ((void *)*puVar11,(void *)puVar11[1]);
    *ppvVar12 = pvVar4;
    if (lVar5 == 0) {
      return pvStack_88;
    }
    auVar13 = NativeHelper_017ef528(lVar5);
    if (auVar13._8_4_ != 1) break;
    plVar7 = (long *)NativeHelper_03688650(auVar13._0_8_);
    lVar5 = *plVar7;
    lStack_b0 = lVar5;
    NativeHelper_03688660();
    puVar9 = puStack_a8;
    puVar10 = puStack_a0;
    puVar11 = puStack_98;
    ppvVar12 = ppvStack_90;
  }
  NativeHelper_017d0418(&lStack_b0);
  NativeHelper_018dcd9c(auVar13._0_8_);
                    /* WARNING: Subroutine does not return */
  NativeHelper_0160d8e0();
}

