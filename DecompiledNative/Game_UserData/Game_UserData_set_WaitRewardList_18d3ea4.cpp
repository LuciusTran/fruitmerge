// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void set_WaitRewardList(List<RoomRewardModel> value) { }
// Ghidra address: 019d7ea4; ELF VA: 0x18d7ea4; file offset: 0x18d3ea4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_set_WaitRewardList_18d3ea4(undefined8 param_1,void *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *value;
  
  if ((bRam0000000003ab24ac & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db00);
    NativeHelper_017ef284(PTR_DAT_0386a018);
    NativeHelper_017ef284(PTR_DAT_0386a020);
    NativeHelper_017ef284(PTR_DAT_0386a008);
    bRam0000000003ab24ac = 1;
  }
  puVar1 = PTR_DAT_0385db00;
  if (param_2 == (void *)0x0) {
    param_2 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0386a020);
    NativeHelper_02568f74(param_2,*(undefined8 *)PTR_DAT_0386a018);
  }
  puVar2 = PTR_DAT_0386a008;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  value = LitJson_JsonMapper_ToJson_1854b54(param_2,(void *)0x0);
  UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar2,value,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

