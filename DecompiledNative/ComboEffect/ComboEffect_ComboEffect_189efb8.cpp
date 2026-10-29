// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public ComboEffect() { }
// Ghidra address: 019a2fb8; ELF VA: 0x18a2fb8; file offset: 0x189efb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void ComboEffect_ComboEffect_189efb8(ComboEffect *self,void *runtimeMethod)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003abb74b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
    bRam0000000003abb74b = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  return;
}

