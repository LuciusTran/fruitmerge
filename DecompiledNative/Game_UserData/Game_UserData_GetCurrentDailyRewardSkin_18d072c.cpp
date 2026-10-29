// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public string GetCurrentDailyRewardSkin() { }
// Ghidra address: 019d472c; ELF VA: 0x18d472c; file offset: 0x18d072c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * Game_UserData_GetCurrentDailyRewardSkin_18d072c(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  Game_UserData *self_00;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_DAT_0385d9c8;
  if ((bRam0000000003ab2482 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dae0);
    NativeHelper_017ef284(PTR_DAT_0385dae8);
    NativeHelper_017ef284(PTR_DAT_0385daf0);
    NativeHelper_017ef284(PTR_DAT_0385db08);
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    NativeHelper_017ef284(PTR_DAT_03861a08);
    bRam0000000003ab2482 = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  pvVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if ((pvVar5 == (void *)0x0) ||
     (lVar6 = ConfigManager_GetSkinList_1806518(pvVar5,0), puVar3 = PTR_DAT_03861a08,
     puVar2 = PTR_DAT_0385dae8, puVar1 = PTR_DAT_0385dae0, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  NativeHelper_0256a338(&uStack_48,lVar6,*(undefined8 *)PTR_DAT_0385db08);
  do {
    uVar7 = NativeHelper_02240184(&uStack_48,*(undefined8 *)puVar2);
    lVar6 = lStack_38;
    if ((uVar7 & 1) == 0) {
      pvVar5 = (void *)0x0;
      goto LAB_019d4838;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    pvVar5 = (void *)0x0;
    self_00 = (Game_UserData *)
              NativeHelper_02aa50f0(*(undefined8 *)(lStack_38 + 0x18),*(undefined8 *)puVar3);
  } while ((((ulong)self_00 & 1) == 0) ||
          (bVar4 = Game_UserData_IsUserActuallyHasSkin_18cfd00
                             (self_00,*(void **)(lVar6 + 0x10),pvVar5), bVar4));
  pvVar5 = *(void **)(lVar6 + 0x10);
LAB_019d4838:
  NativeHelper_02240180(&uStack_48,*(undefined8 *)puVar1);
  return pvVar5;
}

