// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void EnterBuilding(Action<Int32, Int32> onProgress, Action<Vector3, Int32, Int32> onEnterComplete) { }
// Ghidra address: 0198ad40; ELF VA: 0x188ad40; file offset: 0x1886d40
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuildHouse_EnterBuilding_1886d40(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_03867908;
  if ((bRam0000000003ab2144 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678c8);
    NativeHelper_017ef284(PTR_DAT_038678a0);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03867910);
    NativeHelper_017ef284(PTR_DAT_03867908);
    bRam0000000003ab2144 = 1;
  }
  lVar4 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_1;
    NativeHelper_017ef228((long *)(lVar4 + 0x10),param_1);
    *(undefined8 *)(lVar4 + 0x18) = param_3;
    NativeHelper_017ef228((undefined8 *)(lVar4 + 0x18),param_3);
    *(undefined1 *)(param_1 + 0x30) = 1;
    puVar3 = PTR_DAT_03867910;
    puVar2 = PTR_DAT_038678c8;
    puVar1 = PTR_DAT_03866068;
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar5 = NativeHelper_0335213c(*(long *)(param_1 + 0x38),0);
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar6);
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      lVar6 = NativeHelper_01a5e5fc
                        (*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                         *(undefined4 *)(lVar6 + 0x20),_UNK_00a4765c,uVar5,0);
      uVar5 = NativeHelper_017ef520(*(undefined8 *)puVar1);
      NativeHelper_01a4f8cc(uVar5,lVar4,*(undefined8 *)puVar3,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x80) = uVar5;
        NativeHelper_017ef228((undefined8 *)(lVar6 + 0x80),uVar5);
        if (param_2 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0198aec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_2 + 0x18))
                    (*(undefined8 *)(param_2 + 0x40),
                     *(int *)(param_1 + 0x48) - *(int *)(*(long *)(param_1 + 0x50) + 0x18),
                     *(int *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x28));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

