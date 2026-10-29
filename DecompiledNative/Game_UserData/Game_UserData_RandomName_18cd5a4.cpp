// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public string RandomName() { }
// Ghidra address: 019d15a4; ELF VA: 0x18d15a4; file offset: 0x18cd5a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * Game_UserData_RandomName_18cd5a4(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iStack_14;
  
  puVar1 = PTR_DAT_03869d78;
  if ((bRam0000000003ab2448 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869d78);
    bRam0000000003ab2448 = 1;
  }
  iStack_14 = UnityEngine_Random_Range_3246f40(1,100000,(void *)0x0);
  uVar2 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_14);
  pvVar3 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar1,uVar2,0);
  return pvVar3;
}

