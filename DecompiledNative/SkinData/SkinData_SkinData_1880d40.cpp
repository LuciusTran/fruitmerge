// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public SkinData() { }
// Ghidra address: 01984d40; ELF VA: 0x1884d40; file offset: 0x1880d40
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinData_SkinData_1880d40(SkinData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_038674d8;
  puVar1 = PTR_DAT_038674d0;
  if ((bRam0000000003ab210a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038674d8);
    NativeHelper_017ef284(PTR_DAT_038674d0);
    bRam0000000003ab210a = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_02568f74(pvVar3,*(undefined8 *)puVar2);
  self->SkinItems = pvVar3;
  NativeHelper_017ef228(&self->SkinItems,pvVar3);
  return;
}

