// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static void SetButtonRedPoint(Component button, bool active) { }
// Ghidra address: 019f73c4; ELF VA: 0x18f73c4; file offset: 0x18f33c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_SetButtonRedPoint_18f33c4(void *button,bool active,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab25b6 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386ac70);
    NativeHelper_017ef284(PTR_DAT_0386ac78);
    bRam0000000003ab25b6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Equality_324f284(button,(void *)0x0,(void *)0x0);
  if (bVar2) {
    return;
  }
  if ((button != (void *)0x0) &&
     (pvVar3 = (void *)NativeHelper_0334f400(button,0), pvVar3 != (void *)0x0)) {
    pvVar3 = UnityEngine_Transform_Find_325c35c(pvVar3,*(void **)PTR_DAT_0386ac70,(void *)0x0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Equality_324f284(pvVar3,(void *)0x0,(void *)0x0);
    if (bVar2) {
      pvVar3 = (void *)NativeHelper_0334f400(button,0);
      if (pvVar3 == (void *)0x0) goto LAB_019f7518;
      pvVar3 = UnityEngine_Transform_Find_325c35c(pvVar3,*(void **)PTR_DAT_0386ac78,(void *)0x0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar3,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      return;
    }
    if ((pvVar3 != (void *)0x0) && (lVar4 = NativeHelper_0334f4c8(pvVar3,0), lVar4 != 0)) {
      if ((bRam0000000003abb79b & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a76a8,active,0);
        bRam0000000003abb79b = 1;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8();
      }
      if (pcRam0000000003abb800 == (code *)0x0) {
        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb800)(lVar4,active);
      return;
    }
  }
LAB_019f7518:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

