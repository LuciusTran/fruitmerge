// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public BuildHouse() { }
// Ghidra address: 0198d4fc; ELF VA: 0x188d4fc; file offset: 0x18894fc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_BuildHouse_18894fc(BuildHouse *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_03867a68;
  puVar1 = PTR_DAT_03867a60;
  if ((bRam0000000003ab2154 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867a68);
    NativeHelper_017ef284(PTR_DAT_03867a60);
    bRam0000000003ab2154 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_02891844(pvVar3,*(undefined8 *)puVar2);
  self->mItemList = pvVar3;
  NativeHelper_017ef228(&self->mItemList,pvVar3);
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

