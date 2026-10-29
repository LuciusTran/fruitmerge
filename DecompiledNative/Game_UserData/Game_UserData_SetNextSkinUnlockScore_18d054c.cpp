// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetNextSkinUnlockScore(int retainScore) { }
// Ghidra address: 019d454c; ELF VA: 0x18d454c; file offset: 0x18d054c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SetNextSkinUnlockScore_18d054c
               (Game_UserData *self,int retainScore,void *runtimeMethod)

{
  undefined *puVar1;
  ulong uVar2;
  void *self_00;
  void *error;
  undefined8 uVar3;
  void *runtimeMethod_00;
  
  puVar1 = PTR_DAT_03869e90;
  if ((bRam0000000003ab24aa & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869e90);
    bRam0000000003ab24aa = 1;
  }
  runtimeMethod_00 = (void *)0x0;
  uVar2 = NativeHelper_03349a34(*(undefined8 *)puVar1,retainScore);
  if ((uVar2 & 1) != 0) {
    return;
  }
  NativeHelper_017ef298(PTR_DAT_038a74a8);
  self_00 = (void *)NativeHelper_017ef520();
  error = (void *)NativeHelper_017ef298(PTR_DAT_038a74b0);
  UnityEngine_PlayerPrefsException_PlayerPrefsException_32459cc(self_00,error,runtimeMethod_00);
  uVar3 = NativeHelper_017ef298(PTR_DAT_038a74b8);
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef3f4(self_00,uVar3);
}

