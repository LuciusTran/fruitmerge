// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnApplicationQuit() { }
// Ghidra address: 019faa3c; ELF VA: 0x18faa3c; file offset: 0x18f6a3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_OnApplicationQuit_18f6a3c
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *pvVar6;
  int value;
  
  puVar4 = PTR_DAT_03868928;
  puVar3 = PTR_DAT_03867258;
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab25d5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867258);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868928);
    bRam0000000003ab25d5 = 1;
  }
  puVar2 = PTR_DAT_0385db10;
  pvVar6 = Game_Controller_FMViewController_GetView_1b724a8(*(void **)puVar4,*(void **)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  bVar5 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
  pvVar6 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  puVar1 = PTR_DAT_03869b68;
  if (bVar5) {
    if (pvVar6 == (void *)0x0) {
LAB_019fab24:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    value = 0;
  }
  else {
    if (pvVar6 == (void *)0x0) goto LAB_019fab24;
    value = self->mCurrentScore;
  }
  if ((bRam0000000003ab2410 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869b68,value,0);
    bRam0000000003ab2410 = 1;
  }
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar1,value,(void *)0x0);
  if (pcRam0000000003abb5f0 == (code *)0x0) {
    pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
  }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb5f0)();
  return;
}

