// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: protected MainBasePage() { }
// Ghidra address: 019a568c; ELF VA: 0x18a568c; file offset: 0x18a168c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainBasePage_MainBasePage_18a168c(MainBasePage *self,void *runtimeMethod)

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

