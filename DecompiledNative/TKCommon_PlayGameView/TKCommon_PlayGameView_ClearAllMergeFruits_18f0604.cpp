// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ClearAllMergeFruits() { }
// Ghidra address: 019f4604; ELF VA: 0x18f4604; file offset: 0x18f0604
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ClearAllMergeFruits_18f0604
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  void *x;
  void *extraout_x1;
  void *extraout_x1_00;
  
  puVar2 = PTR_DAT_038670a8;
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2599 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038670a8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2599 = 1;
    runtimeMethod = extraout_x1;
  }
  while( true ) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar5,runtimeMethod);
    }
    x = (void *)NativeHelper_01cad430(*(undefined8 *)puVar2);
    bVar3 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
    if (!bVar3) break;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    lVar5 = NativeHelper_01cad430(*(undefined8 *)puVar2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar4 = NativeHelper_0334f4c8(lVar5,0);
    NativeHelper_03357b5c(uVar4,0);
    runtimeMethod = extraout_x1_00;
  }
  return;
}

