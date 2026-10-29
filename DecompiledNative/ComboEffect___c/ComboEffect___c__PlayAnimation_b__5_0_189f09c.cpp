// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <PlayAnimation>b__5_0() { }
// Ghidra address: 019a309c; ELF VA: 0x18a309c; file offset: 0x189f09c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void ComboEffect___c__PlayAnimation_b__5_0_189f09c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam0000000003ab2244 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab2244 = 1;
  }
  lVar2 = NativeHelper_03320a8c(0);
  puVar1 = PTR_DAT_0385d918;
  if (lVar2 != 0) {
    lVar2 = NativeHelper_0334f400(lVar2,0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar3);
    }
    if (lVar2 != 0) {
      lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
      uStack_2c = *(undefined4 *)(lVar3 + 0xc);
      uStack_28 = *(undefined4 *)(lVar3 + 0x10);
      uStack_24 = *(undefined4 *)(lVar3 + 0x14);
      if ((bRam0000000003abbd29 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a79f0,0);
        bRam0000000003abbd29 = 1;
      }
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 != 0) {
          if (pcRam0000000003abbd58 == (code *)0x0) {
            pcRam0000000003abbd58 = (code *)NativeHelper_017ef240(&UNK_00a72571);
          }
          (*pcRam0000000003abbd58)(lVar2,&uStack_2c);
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8();
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

