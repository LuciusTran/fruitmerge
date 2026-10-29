// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <CloseToolDescriptionAnim>b__0(float width) { }
// Ghidra address: 019fd75c; ELF VA: 0x18fd75c; file offset: 0x18f975c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView___c__DisplayClass212_0__CloseToolDescriptionAnim_b__0_18f975c
               (undefined4 param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x1d0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  uStack_14 = 0x433c0000;
  uStack_18 = param_1;
  if ((bRam0000000003abbcba & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a7b60,0);
    bRam0000000003abbcba = 1;
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 != 0) {
      if (pcRam0000000003abbd08 == (code *)0x0) {
        pcRam0000000003abbd08 = (code *)NativeHelper_017ef240(&UNK_00a6507b);
      }
      (*pcRam0000000003abbd08)(lVar1,&uStack_18);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

