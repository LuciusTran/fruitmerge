// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LogFruitMerge() { }
// Ghidra address: 0197ba18; ELF VA: 0x187ba18; file offset: 0x1877a18
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_LogFruitMerge_1877a18(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  void *extraout_x1;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_48;
  int iStack_44;
  
  if ((bRam0000000003ab20b1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_038670f0);
    NativeHelper_017ef284(PTR_DAT_038670f8);
    NativeHelper_017ef284(PTR_DAT_03867100);
    NativeHelper_017ef284(PTR_DAT_03867108);
    bRam0000000003ab20b1 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_0385ccb0;
  puVar3 = PTR_DAT_0385ca30;
  puVar2 = PTR_DAT_0385ca28;
  iStack_44 = 0;
  if (self->m_FruitType < 9) {
    return;
  }
  lVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385cca8,runtimeMethod);
  NativeHelper_02132ae8(lVar6,*(undefined8 *)puVar1);
  lVar7 = NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_02132ae8(lVar7,*(undefined8 *)puVar2);
  iStack_44 = self->m_FruitType + 1;
  uVar8 = NativeHelper_02c0d29c(&iStack_44,0);
  puVar3 = PTR_DAT_03867108;
  puVar2 = PTR_DAT_0385ccb8;
  if (lVar6 != 0) {
    NativeHelper_02133494
              (lVar6,*(undefined8 *)PTR_DAT_03867108,uVar8,*(undefined8 *)PTR_DAT_0385ccb8);
    puVar1 = PTR_DAT_0385c2d8;
    iStack_48 = self->m_FruitType + 1;
    uVar8 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_48);
    puVar4 = PTR_DAT_0385ca48;
    if (lVar7 != 0) {
      NativeHelper_02133494(lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)PTR_DAT_0385ca48);
      puVar3 = PTR_DAT_0385d918;
      lVar9 = *(long *)PTR_DAT_0385d918;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        NativeHelper_017ef404();
        lVar9 = *(long *)puVar3;
      }
      uVar8 = NativeHelper_02c0d29c(*(long *)(lVar9 + 0xb8) + 0x74,0);
      puVar5 = PTR_DAT_03867100;
      NativeHelper_02133494(lVar6,*(undefined8 *)PTR_DAT_03867100,uVar8,*(undefined8 *)puVar2);
      uStack_54 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x74);
      uVar8 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&uStack_54);
      NativeHelper_02133494(lVar7,*(undefined8 *)puVar5,uVar8,*(undefined8 *)puVar4);
      uVar8 = NativeHelper_02c0d29c(&self->ComboCount,0);
      puVar3 = PTR_DAT_038670f8;
      NativeHelper_02133494(lVar6,*(undefined8 *)PTR_DAT_038670f8,uVar8,*(undefined8 *)puVar2);
      iStack_58 = self->ComboCount;
      uVar8 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_58);
      NativeHelper_02133494(lVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar4);
      puVar2 = PTR_DAT_0385e750;
      pvVar10 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
      puVar3 = PTR_DAT_038670f0;
      if (pvVar10 != (void *)0x0) {
        EventLogger_LogEvent_1888558(pvVar10,*(undefined8 *)PTR_DAT_038670f0,lVar6,0,0);
        pvVar10 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pvVar10 != (void *)0x0) {
          EventLogger_TkLogEvent_1888ca0(pvVar10,*(undefined8 *)puVar3,lVar7,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

