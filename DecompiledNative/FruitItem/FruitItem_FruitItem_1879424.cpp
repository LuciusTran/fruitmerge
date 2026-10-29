// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public FruitItem() { }
// Ghidra address: 0197d424; ELF VA: 0x187d424; file offset: 0x1879424
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_FruitItem_1879424(FruitItem *self,void *runtimeMethod)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = _UNK_00a463f8;
  self->m_DestroyScale = 1.0;
  uVar4 = _UNK_00a463f8;
  _UNK_00a463f8 = (undefined4)uVar1;
  _UNK_00a463fc = SUB84(uVar1,4);
  uVar2 = _UNK_00a463fc;
  self->scaleAnimationDuration = (float)_UNK_00a463f8;
  _UNK_00a463f8 = uVar4;
  puVar3 = PTR_DAT_0385c2a0;
  self->minScaleFactor = (float)uVar2;
  if ((bRam0000000003abb74b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
    bRam0000000003abb74b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  return;
}

