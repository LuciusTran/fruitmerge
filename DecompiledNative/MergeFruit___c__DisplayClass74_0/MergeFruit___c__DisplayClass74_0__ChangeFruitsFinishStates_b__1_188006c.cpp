// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <ChangeFruitsFinishStates>b__1() { }
// Ghidra address: 0198406c; ELF VA: 0x188406c; file offset: 0x188006c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit___c__DisplayClass74_0__ChangeFruitsFinishStates_b__1_188006c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_038673b0;
  puVar2 = PTR_DAT_0385e858;
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2102 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038673b0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385e858);
    bRam0000000003ab2102 = 1;
  }
  pvVar5 = Game_Controller_FMViewController_GetTopView_1b722c4(*(void **)puVar2,*(void **)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (bVar4) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    pvVar5 = (void *)NativeHelper_0334f4c8(pvVar5,0);
    Game_Controller_FMViewController_CloseTopView_18d5f40(pvVar5,(void *)0x0);
  }
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0198413c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    return;
  }
  return;
}

