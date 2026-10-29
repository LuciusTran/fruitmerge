// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public List<String> GetUserSkins() { }
// Ghidra address: 019d37ac; ELF VA: 0x18d37ac; file offset: 0x18cf7ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


long Game_UserData_GetUserSkins_18cf7ac(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  IAPItemManager *self;
  long lVar13;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  long lStack_50;
  
  puVar5 = PTR_DAT_03869e58;
  puVar4 = PTR_DAT_03869e50;
  puVar3 = PTR_DAT_03868a68;
  if ((bRam0000000003ab247c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869e60);
    NativeHelper_017ef284(PTR_DAT_0385c308);
    NativeHelper_017ef284(PTR_DAT_0385c3a8);
    NativeHelper_017ef284(PTR_DAT_0385dae0);
    NativeHelper_017ef284(PTR_DAT_03869e68);
    NativeHelper_017ef284(PTR_DAT_0385dae8);
    NativeHelper_017ef284(PTR_DAT_03869e70);
    NativeHelper_017ef284(PTR_DAT_0385c3b0);
    NativeHelper_017ef284(PTR_DAT_0385c3b8);
    NativeHelper_017ef284(PTR_DAT_03869e78);
    NativeHelper_017ef284(PTR_DAT_0385daf0);
    NativeHelper_017ef284(PTR_DAT_03869e80);
    NativeHelper_017ef284(PTR_DAT_03869e88);
    NativeHelper_017ef284(PTR_DAT_03869e50);
    NativeHelper_017ef284(PTR_DAT_03868a68);
    NativeHelper_017ef284(PTR_DAT_0385c830);
    NativeHelper_017ef284(PTR_DAT_03869670);
    NativeHelper_017ef284(PTR_DAT_0385c3d8);
    NativeHelper_017ef284(PTR_DAT_0385db08);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    NativeHelper_017ef284(PTR_DAT_03867ca8);
    NativeHelper_017ef284(PTR_DAT_03869e58);
    bRam0000000003ab247c = 1;
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  lStack_70 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  lVar7 = NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_023cf1d4(lVar7,*(undefined8 *)puVar4);
  pvVar8 = UnityEngine_PlayerPrefs_GetString_32463ec(*(void **)puVar5,(void *)0x0,(void *)0x0);
  pvVar9 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
  puVar3 = PTR_DAT_03869e80;
  if (lVar7 == 0) goto LAB_019d3c00;
  NativeHelper_023d03c8(lVar7,pvVar9,*(undefined8 *)PTR_DAT_03869e80);
  uVar10 = NativeHelper_02aa606c(pvVar8,0);
  if ((uVar10 & 1) == 0) {
    if (pvVar8 == (void *)0x0) goto LAB_019d3c00;
    uVar11 = NativeHelper_02aa9268(pvVar8,0x7c,0,0);
    lVar12 = NativeHelper_01c6c4c4(uVar11,*(undefined8 *)PTR_DAT_03869e60);
    if (lVar12 == 0) goto LAB_019d3c00;
    NativeHelper_023cfd4c(&uStack_b0,lVar12,*(undefined8 *)PTR_DAT_03869e88);
    puVar4 = PTR_DAT_03869e70;
    puStack_58 = puStack_a8;
    uStack_60 = uStack_b0;
    lStack_50 = lStack_a0;
    uStack_b0 = 0;
    puStack_a8 = &uStack_60;
    while (uVar10 = NativeHelper_0223fbf0(&uStack_60,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
      NativeHelper_023d03c8(lVar7,lStack_50,*(undefined8 *)puVar3);
    }
    NativeHelper_0223fbec(&uStack_60,*(undefined8 *)PTR_DAT_03869e68);
  }
  puVar3 = PTR_DAT_0385d920;
  lVar7 = NativeHelper_01c6c954(lVar7,*(undefined8 *)PTR_DAT_0385c308);
  self = Singleton_get_Instance_27784f4(*(void **)puVar3);
  if (self == (IAPItemManager *)0x0) goto LAB_019d3c00;
  bVar6 = IAPItemManager_get_IsSubscriptionActive_1804360(self,(void *)0x0);
  if (bVar6) {
    if (lVar7 == 0) goto LAB_019d3c00;
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      NativeHelper_02c326b8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
    pvVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d9c8);
    if ((pvVar8 == (void *)0x0) ||
       (lVar12 = ConfigManager_GetSkinList_1806518(pvVar8,0), lVar12 == 0)) goto LAB_019d3c00;
    NativeHelper_0256a338(&uStack_b0,lVar12,*(undefined8 *)PTR_DAT_0385db08);
    puVar4 = PTR_DAT_0385dae8;
    puVar3 = PTR_DAT_0385c830;
    puStack_78 = puStack_a8;
    uStack_80 = uStack_b0;
    lStack_70 = lStack_a0;
    uStack_b0 = 0;
    puStack_a8 = &uStack_80;
    while (uVar10 = NativeHelper_02240184(&uStack_80,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      lVar12 = *(long *)(lVar7 + 0x10);
      uVar11 = *(undefined8 *)(lStack_70 + 0x10);
      lVar13 = *(long *)puVar3;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (uVar2 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
        NativeHelper_017ef228();
      }
      else {
        NativeHelper_025697dc
                  (lVar7,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    NativeHelper_02240180(&uStack_80,*(undefined8 *)PTR_DAT_0385dae0);
  }
  puVar5 = PTR_DAT_03867ca8;
  puVar4 = PTR_DAT_0385c3b0;
  puVar3 = PTR_DAT_0385c3a8;
  if (lVar7 != 0) {
    uVar11 = **(undefined8 **)(*(long *)(PTR_DAT_0385c2d8 + 0x90) + 0xb8);
    NativeHelper_0256a338(&uStack_98,lVar7,*(undefined8 *)PTR_DAT_0385c3d8);
    uStack_b0 = 0;
    puStack_a8 = &uStack_98;
    while (uVar10 = NativeHelper_02240184(&uStack_98,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
      uVar11 = NativeHelper_02aa6b6c(uVar11,uStack_88,*(undefined8 *)puVar5,0);
    }
    NativeHelper_02240180(&uStack_98,*(undefined8 *)puVar3);
    return lVar7;
  }
LAB_019d3c00:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

