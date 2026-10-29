// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public string UserAvatar() { }
// Ghidra address: 019d146c; ELF VA: 0x18d146c; file offset: 0x18cd46c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * Game_UserData_UserAvatar_18cd46c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void **ppvVar11;
  undefined1 auVar12 [12];
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
  
  puVar2 = PTR_DAT_03869d68;
  puVar1 = PTR_DAT_038674c8;
  if ((bRam0000000003ab2444 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d68);
    NativeHelper_017ef284(PTR_DAT_038674c8);
    bRam0000000003ab2444 = 1;
  }
  lVar3 = *(long *)puVar2;
  lVar7 = *(long *)puVar1;
  if ((bRam0000000003abb5de & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a63a0,lVar7,0);
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
  if (lVar3 == 0) {
    uStack_48 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x10) != 0) {
      if (cRam0000000003ab56c6 == '\0') {
        NativeHelper_017ef284(PTR_DAT_03873070);
        cRam0000000003ab56c6 = '\x01';
      }
      uStack_30 = NativeHelper_02aa3aa0(lVar3,0);
      uStack_28 = (ulong)*(uint *)(lVar3 + 0x10);
      uStack_38 = NativeHelper_0285f8bc(&uStack_30,*(undefined8 *)PTR_DAT_038a63a0);
      uStack_40 = CONCAT44(uStack_40._4_4_,(undefined4)uStack_28);
      uStack_48 = uStack_38;
      goto joined_r0x0334a4d0;
    }
    uVar4 = NativeHelper_02c68cd4(1,0);
    uStack_48 = NativeHelper_02c68cd8(uVar4,0);
  }
  uStack_40 = 0;
joined_r0x0334a4d0:
  if (lVar7 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else if (*(int *)(lVar7 + 0x10) == 0) {
    uVar4 = NativeHelper_02c68cd4(1,0);
    uStack_70 = NativeHelper_02c68cd8(uVar4,0);
    uStack_68 = 0;
  }
  else {
    if (cRam0000000003ab56c6 == '\0') {
      NativeHelper_017ef284(PTR_DAT_03873070);
      cRam0000000003ab56c6 = '\x01';
    }
    uStack_58 = NativeHelper_02aa3aa0(lVar7,0);
    uStack_50 = (ulong)*(uint *)(lVar7 + 0x10);
    uStack_70 = NativeHelper_0285f8bc(&uStack_58,*(undefined8 *)PTR_DAT_038a63a0);
    uStack_68 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_50);
    uStack_60 = uStack_70;
  }
  if (pcRam0000000003abb620 == (code *)0x0) {
    pcRam0000000003abb620 = (code *)NativeHelper_017ef240(&UNK_00a507a1);
  }
  (*pcRam0000000003abb620)(&uStack_48,&uStack_70,&uStack_80);
  lVar3 = 0;
  puVar8 = &uStack_38;
  puVar9 = &uStack_60;
  puVar10 = &uStack_80;
  ppvVar11 = &pvStack_88;
  while( true ) {
    *puVar8 = 0;
    *puVar9 = 0;
    pvVar5 = UnityEngine_Bindings_OutStringMarshaller_GetStringAndDispose_325faf0
                       ((void *)*puVar10,(void *)puVar10[1]);
    *ppvVar11 = pvVar5;
    if (lVar3 == 0) {
      return pvStack_88;
    }
    auVar12 = NativeHelper_017ef528(lVar3);
    if (auVar12._8_4_ != 1) break;
    plVar6 = (long *)NativeHelper_03688650(auVar12._0_8_);
    lVar3 = *plVar6;
    lStack_b0 = lVar3;
    NativeHelper_03688660();
    puVar8 = puStack_a8;
    puVar9 = puStack_a0;
    puVar10 = puStack_98;
    ppvVar11 = ppvStack_90;
  }
  NativeHelper_017d0418(&lStack_b0);
  NativeHelper_018dcd9c(auVar12._0_8_);
                    /* WARNING: Subroutine does not return */
  NativeHelper_0160d8e0();
}

