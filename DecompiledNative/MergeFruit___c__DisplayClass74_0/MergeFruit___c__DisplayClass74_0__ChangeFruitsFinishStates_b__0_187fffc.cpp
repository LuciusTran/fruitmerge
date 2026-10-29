// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <ChangeFruitsFinishStates>b__0() { }
// Ghidra address: 01983ffc; ELF VA: 0x1883ffc; file offset: 0x187fffc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit___c__DisplayClass74_0__ChangeFruitsFinishStates_b__0_187fffc(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = NativeHelper_0334f400(*(long *)(param_1 + 0x10),0);
    if (cRam0000000003ab204a == '\0') {
      NativeHelper_017ef284(PTR_DAT_038654f0);
      cRam0000000003ab204a = '\x01';
    }
    if (lVar1 != 0) {
      puVar2 = *(undefined4 **)(*(long *)PTR_DAT_038654f0 + 0xb8);
      uStack_2c = *puVar2;
      uStack_28 = puVar2[1];
      uStack_24 = puVar2[2];
      if ((bRam0000000003abbd2b & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a79f0,0);
        bRam0000000003abbd2b = 1;
      }
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 0x10);
        if (lVar1 != 0) {
          if (pcRam0000000003abbd68 == (code *)0x0) {
            pcRam0000000003abbd68 = (code *)NativeHelper_017ef240(&UNK_00a65123);
          }
          (*pcRam0000000003abbd68)(lVar1,&uStack_2c);
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

