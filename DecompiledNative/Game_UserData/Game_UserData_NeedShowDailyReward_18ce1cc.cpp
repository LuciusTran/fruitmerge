// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool NeedShowDailyReward() { }
// Ghidra address: 019d21cc; ELF VA: 0x18d21cc; file offset: 0x18ce1cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_NeedShowDailyReward_18ce1cc(Game_UserData *self,void *runtimeMethod)

{
  bool bVar1;
  int iVar2;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  
  bVar1 = Game_UserData_IsTodayDailyRewardCollected_18ce1fc(self,runtimeMethod);
  if (!bVar1) {
    bVar1 = Game_UserData_IsTodayDailyRewardShown_18ce3a8((Game_UserData *)0x0,runtimeMethod_00);
    if (!bVar1) {
      iVar2 = Game_UserData_GetClaimedDailyRewardDay_18ce554
                        ((Game_UserData *)(ulong)bVar1,runtimeMethod_01);
      return iVar2 < 0xf;
    }
  }
  return false;
}

