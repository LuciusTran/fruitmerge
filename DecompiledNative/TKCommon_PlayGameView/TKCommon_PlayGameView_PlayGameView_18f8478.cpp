// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public PlayGameView() { }
// Ghidra address: 019fc478; ELF VA: 0x18fc478; file offset: 0x18f8478
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_PlayGameView_18f8478(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  self->_unlockGrade = 5;
  self->lastComboCount = -1;
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

