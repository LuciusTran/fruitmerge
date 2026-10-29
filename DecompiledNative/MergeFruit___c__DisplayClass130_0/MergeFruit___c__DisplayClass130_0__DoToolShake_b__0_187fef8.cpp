// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <DoToolShake>b__0() { }
// Ghidra address: 01983ef8; ELF VA: 0x1883ef8; file offset: 0x187fef8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit___c__DisplayClass130_0__DoToolShake_b__0_187fef8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1;
  if ((bRam0000000003ab2101 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    lVar1 = NativeHelper_017ef284(PTR_DAT_03867480);
    bRam0000000003ab2101 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
    NativeHelper_02b8e36c(lVar6,param_1,*(undefined8 *)PTR_DAT_03867480,0);
    *(long *)(param_1 + 0x20) = lVar6;
    lVar1 = NativeHelper_017ef228((long *)(param_1 + 0x20),lVar6);
  }
  if (lVar5 != 0) {
    lVar1 = NativeHelper_01980eb0(0x3f800000,lVar1,lVar6);
    if (lVar1 == 0) {
      NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
      uVar3 = NativeHelper_017ef520();
      uVar4 = NativeHelper_017ef298(PTR_DAT_038a78d0);
      NativeHelper_02c12308(uVar3,uVar4,0);
    }
    else {
      uVar2 = NativeHelper_03353b80();
      if ((uVar2 & 1) != 0) {
        if ((bRam0000000003abb84f & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a7898);
          bRam0000000003abb84f = 1;
        }
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          if (lVar6 != 0) {
            if (pcRam0000000003abb8c0 == (code *)0x0) {
              pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
            }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abb8c0)(lVar6,lVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_0334bff8();
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      NativeHelper_017ef298(PTR_DAT_03865620);
      uVar3 = NativeHelper_017ef520();
      uVar4 = NativeHelper_017ef298(PTR_DAT_038a78b8);
      NativeHelper_02b8eaa8(uVar3,uVar4,0);
    }
    uVar4 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef3f4(uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

