// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static <>c() { }
// Ghidra address: 01983c2c; ELF VA: 0x1883c2c; file offset: 0x187fc2c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit___c___c_187fc2c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_03867300;
  if ((bRam0000000003ab2100 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867300);
    bRam0000000003ab2100 = 1;
  }
  uVar2 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                    (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

