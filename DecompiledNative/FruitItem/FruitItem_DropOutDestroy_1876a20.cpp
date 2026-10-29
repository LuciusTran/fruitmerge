// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DropOutDestroy() { }
// Ghidra address: 0197aa20; ELF VA: 0x187aa20; file offset: 0x1876a20
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_DropOutDestroy_1876a20(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *self_00;
  long lVar2;
  undefined8 uVar3;
  Recovered_Vector3 RVar4;
  
  if ((bRam0000000003ab20a3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20a3 = 1;
  }
  self_00 = (void *)NativeHelper_0334f400(self,0);
  if (self_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  RVar4 = UnityEngine_Transform_get_position_325a714(self_00,(void *)0x0);
  if (RVar4.component1 < -100.0) {
    lVar2 = NativeHelper_0334f4c8(0xc2c80000,RVar4.component1,RVar4.component2,self,0);
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0);
    }
    puVar1 = PTR_DAT_0385c2a0;
    if ((bRam0000000003abb948 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
      bRam0000000003abb948 = 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    puVar1 = PTR_DAT_038a6cb0;
    if ((bRam0000000003abb947 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a6cb0);
      NativeHelper_017ef284(PTR_DAT_0385c2a0);
      bRam0000000003abb947 = 1;
    }
    if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
      NativeHelper_01827500();
    }
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
    }
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    if (pcRam0000000003abb990 == (code *)0x0) {
      pcRam0000000003abb990 = (code *)NativeHelper_017ef240(&UNK_00a509bd);
    }
                    /* WARNING: Could not recover jumptable at 0x03357c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abb990)(uVar3,0);
    return;
  }
  return;
}

