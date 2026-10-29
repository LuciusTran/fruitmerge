// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public SettingDialogForHome() { }
// Ghidra address: 01a0cab0; ELF VA: 0x190cab0; file offset: 0x1908ab0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_SettingDialogForHome_SettingDialogForHome_1908ab0
               (TKCommon_SettingDialogForHome *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_0385cbb8;
  puVar2 = PTR_DAT_0385c818;
  puVar1 = PTR_DAT_0385c810;
  if ((bRam0000000003ab24d4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c818,0);
    NativeHelper_017ef284(PTR_DAT_0385c810);
    NativeHelper_017ef284(PTR_DAT_0385cbb8);
    bRam0000000003ab24d4 = 1;
  }
  *(undefined8 *)&self->field_0x20 = *(undefined8 *)puVar3;
  NativeHelper_017ef228();
  uVar4 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02568f74(uVar4,*(undefined8 *)puVar2);
  *(undefined8 *)&self->field_0x28 = uVar4;
  NativeHelper_017ef228(&self->field_0x28,uVar4);
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

