// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void InitTest() { }
// Ghidra address: 019a7a5c; ELF VA: 0x18a7a5c; file offset: 0x18a3a5c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_InitTest_18a3a5c(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  void *extraout_x1;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2276 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab2276 = 1;
    runtimeMethod = extraout_x1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar3,runtimeMethod);
    lVar3 = *(long *)puVar1;
  }
  pvVar4 = self->m_TestPanel;
  if (pvVar4 != (void *)0x0) {
    bVar2 = *(char *)(*(long *)(lVar3 + 0xb8) + 0x7f) != '\0';
    if ((bRam0000000003abb79b & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a76a8,bVar2,0);
      bRam0000000003abb79b = 1;
    }
    if (pvVar4 != (void *)0x0) {
      lVar3 = *(long *)((long)pvVar4 + 0x10);
      if (lVar3 != 0) {
        if (pcRam0000000003abb800 == (code *)0x0) {
          pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
        }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abb800)(lVar3,bVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8();
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

