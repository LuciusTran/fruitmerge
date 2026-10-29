// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsTodayDailyRewardShown() { }
// Ghidra address: 019d23a8; ELF VA: 0x18d23a8; file offset: 0x18ce3a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_IsTodayDailyRewardShown_18ce3a8(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  void *extraout_x1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab2458 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869da8);
    NativeHelper_017ef284(PTR_DAT_03867508);
    bRam0000000003ab2458 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_03869da8;
  puVar2 = PTR_DAT_03867508;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  uStack_28 = NativeHelper_02bf109c(0);
  pvVar6 = UnityEngine_PlayerPrefs_GetString_32463ec(*(void **)puVar3,*(void **)puVar2,(void *)0x0);
  lVar7 = NativeHelper_02c0ed04(pvVar6,0);
  plVar8 = (long *)NativeHelper_02c27a2c(0);
  uStack_40 = 0;
  NativeHelper_02beecb8(&uStack_40,0x7b2,1,1,0,0,0,0);
  if (plVar8 != (long *)0x0) {
    uStack_30 = (**(code **)(*plVar8 + 0x178))(plVar8,uStack_40,*(undefined8 *)(*plVar8 + 0x180));
    uStack_38 = NativeHelper_02bf0134((double)lVar7,&uStack_30,0);
    iVar4 = NativeHelper_02bed938(&uStack_28,0);
    iVar5 = NativeHelper_02bed938(&uStack_38,0);
    if (iVar4 == iVar5) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      iVar4 = NativeHelper_02bf1044(&uStack_28,0);
      iVar5 = NativeHelper_02bf1044(&uStack_38,0);
      if (iVar4 == iVar5) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        iVar4 = NativeHelper_02bf0d08(&uStack_28,0);
        iVar5 = NativeHelper_02bf0d08(&uStack_38,0);
        return iVar4 == iVar5;
      }
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

