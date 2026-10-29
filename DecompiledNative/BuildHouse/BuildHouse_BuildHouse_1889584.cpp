// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private static BuildHouse() { }
// Ghidra address: 0198d584; ELF VA: 0x188d584; file offset: 0x1889584
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuildHouse_BuildHouse_1889584(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2155 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678c8);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab2155 = 1;
  }
  puVar3 = PTR_DAT_038678c8;
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar6 = *(long *)puVar1;
  }
  cVar4 = cRam0000000003ab1f83;
  puVar7 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
  uVar9 = *(undefined4 *)
           (&UNK_00a465a8 + (ulong)(*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') * 4);
  *puVar7 = 0;
  puVar7[2] = 0;
  puVar7[1] = uVar9;
  if (cVar4 == '\0') {
    NativeHelper_017ef284(PTR_DAT_038654f0);
    cRam0000000003ab1f83 = '\x01';
  }
  puVar2 = PTR_DAT_038654f0;
  lVar6 = *(long *)puVar1;
  uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0xc);
  fVar12 = *(float *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0x14);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar6 = *(long *)puVar1;
    bVar5 = cRam0000000003ab1f83 == '\0';
  }
  else {
    bVar5 = false;
  }
  fVar10 = _UNK_00a475b4;
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) != '\0') {
    fVar10 = 0.75;
  }
  lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
  *(ulong *)(lVar8 + 0xc) = CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar10,(float)uVar11 * fVar10)
  ;
  *(float *)(lVar8 + 0x14) = fVar12 * fVar10;
  if (bVar5) {
    NativeHelper_017ef284(PTR_DAT_038654f0);
    lVar6 = *(long *)puVar1;
    cRam0000000003ab1f83 = '\x01';
  }
  uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
  fVar12 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar6 = *(long *)puVar1;
  }
  fVar10 = *(float *)(&UNK_00a46118 + (ulong)(*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') * 4);
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  *(ulong *)(lVar6 + 0x18) =
       CONCAT44((float)((ulong)uVar11 >> 0x20) * fVar10,(float)uVar11 * fVar10);
  *(float *)(lVar6 + 0x20) = fVar12 * fVar10;
  return;
}

