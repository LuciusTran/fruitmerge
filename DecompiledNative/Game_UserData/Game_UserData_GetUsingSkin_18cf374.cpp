// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public string GetUsingSkin() { }
// Ghidra address: 019d3374; ELF VA: 0x18d3374; file offset: 0x18cf374
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * Game_UserData_GetUsingSkin_18cf374(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  void *runtimeMethod_00;
  
  puVar1 = PTR_DAT_03869e28;
  if ((bRam0000000003ab247a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869e30);
    NativeHelper_017ef284(PTR_DAT_03869e28);
    bRam0000000003ab247a = 1;
  }
  pvVar3 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
  pvVar3 = UnityEngine_PlayerPrefs_GetString_32463ec(*(void **)puVar1,pvVar3,(void *)0x0);
  uVar4 = NativeHelper_02aa606c(pvVar3,0);
  if ((uVar4 & 1) != 0) {
    pvVar3 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
  }
  pvVar5 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
  runtimeMethod_00 = (void *)0x0;
  uVar4 = NativeHelper_02aa50f4(pvVar3,pvVar5);
  if (((uVar4 & 1) != 0) &&
     (bVar2 = Game_UserData_IsUserHasSkin_18cf48c(self,pvVar3,runtimeMethod_00), !bVar2)) {
    pvVar3 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
    pvVar5 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
    UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,pvVar5,(void *)0x0);
    NativeHelper_0334aa10(0);
    NativeHelper_01919320
              (0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,*(undefined8 *)PTR_DAT_03869e30,0);
  }
  return pvVar3;
}

