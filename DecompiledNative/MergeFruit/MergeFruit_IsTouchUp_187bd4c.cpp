// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool IsTouchUp() { }
// Ghidra address: 0197fd4c; ELF VA: 0x187fd4c; file offset: 0x187bd4c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit_IsTouchUp_187bd4c(MergeFruit *self,void *runtimeMethod)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_a4 [68];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar3 = NativeHelper_033a751c(0,0);
  if ((uVar3 & 1) == 0) {
    iVar2 = NativeHelper_033a7d4c(0);
    if (iVar2 < 1) {
      bVar1 = false;
    }
    else {
      NativeHelper_033a7558(auStack_a4,0,0);
      NativeHelper_036886b0(&uStack_60,auStack_a4,0x44);
      iVar2 = NativeHelper_033a6a5c(&uStack_60,0);
      bVar1 = iVar2 == 3;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

