// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static string GetSimpleNumber(int number) { }
// Ghidra address: 019d2bec; ELF VA: 0x18d2bec; file offset: 0x18cebec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * Game_UserData_GetSimpleNumber_18cebec(int number,void *runtimeMethod)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uStack_28;
  float fStack_18;
  int iStack_14;
  
  iStack_14 = number;
  if ((bRam0000000003ab2461 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869dc8);
    NativeHelper_017ef284(PTR_DAT_0385dea0);
    NativeHelper_017ef284(PTR_DAT_03869dd0);
    NativeHelper_017ef284(PTR_DAT_03869dd8);
    NativeHelper_017ef284(PTR_DAT_03867508);
    bRam0000000003ab2461 = 1;
  }
  fStack_18 = 0.0;
  uStack_28 = 0;
  if (number < 10000) {
    pvVar2 = (void *)NativeHelper_02c0d29c(&iStack_14,0);
  }
  else {
    if ((uint)number < 1000000) {
      fStack_18 = (float)number / 1000.0;
      puVar3 = (undefined8 *)PTR_DAT_03867508;
      if (fStack_18 < 100.0) {
        puVar3 = (undefined8 *)PTR_DAT_03869dd0;
      }
      uVar1 = NativeHelper_02c22840(&fStack_18,*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_03869dc8;
    }
    else if ((uint)number < 1000000000) {
      uStack_28 = (ulong)(uint)((float)number / _UNK_00a476c8) << 0x20;
      puVar3 = (undefined8 *)PTR_DAT_03867508;
      if ((float)number / _UNK_00a476c8 < 100.0) {
        puVar3 = (undefined8 *)PTR_DAT_03869dd0;
      }
      uVar1 = NativeHelper_02c22840((long)&uStack_28 + 4,*puVar3,0);
      puVar3 = (undefined8 *)PTR_DAT_03869dd8;
    }
    else {
      uStack_28 = (ulong)((uint)number >> 9) * 0x44b83 >> 0x27;
      uVar1 = NativeHelper_02c0d330(&uStack_28,*(undefined8 *)PTR_DAT_03869dd0,0);
      puVar3 = (undefined8 *)PTR_DAT_0385dea0;
    }
    pvVar2 = (void *)NativeHelper_02a9c49c(uVar1,*puVar3,0);
  }
  return pvVar2;
}

