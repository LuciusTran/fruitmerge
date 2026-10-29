// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <DoToolShake>b__1() { }
// Ghidra address: 01983fb0; ELF VA: 0x1883fb0; file offset: 0x187ffb0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit___c__DisplayClass130_0__DoToolShake_b__1_187ffb0(long param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(MergeFruit **)(param_1 + 0x10) != (MergeFruit *)0x0) {
    MergeFruit_ShowCurrentFruit_187c330(*(MergeFruit **)(param_1 + 0x10),param_2);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined1 *)(lVar2 + 0x8c) = 0;
      *(undefined4 *)(lVar2 + 0xbc) = 0;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01983fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

