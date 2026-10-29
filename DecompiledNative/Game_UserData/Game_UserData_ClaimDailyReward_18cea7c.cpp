// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClaimDailyReward(int day) { }
// Ghidra address: 019d2a7c; ELF VA: 0x18d2a7c; file offset: 0x18cea7c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_ClaimDailyReward_18cea7c(Game_UserData *self,int day,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  void *value;
  undefined8 uStack_28;
  
  puVar3 = PTR_DAT_03869db0;
  puVar1 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab245c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869da0);
    NativeHelper_017ef284(PTR_DAT_03869db0);
    bRam0000000003ab245c = 1;
  }
  puVar2 = PTR_DAT_03869da0;
  uStack_28 = 0;
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,day,(void *)0x0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar4 = NativeHelper_02bf109c(0);
  uStack_28 = NativeHelper_019d8390(uVar4,0);
  value = (void *)NativeHelper_02c0e330(&uStack_28,0);
  UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar2,value,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

