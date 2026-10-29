// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void BuyCurrentItem(Action<Boolean, Int32, Int32> completedAction) { }
// Ghidra address: 0198b0d0; ELF VA: 0x188b0d0; file offset: 0x18870d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuildHouse_BuyCurrentItem_18870d0(long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_03867918;
  if ((bRam0000000003ab2148 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038678a0);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03867920);
    NativeHelper_017ef284(PTR_DAT_03867918);
    bRam0000000003ab2148 = 1;
  }
  lVar3 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar3,0);
  puVar1 = PTR_DAT_0385c2a0;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    NativeHelper_017ef228((long *)(lVar3 + 0x10),param_1);
    plVar8 = (long *)(lVar3 + 0x18);
    *plVar8 = param_2;
    NativeHelper_017ef228(plVar8,param_2);
    pvVar7 = *(void **)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
    if (bVar2) {
      pvVar7 = *(void **)(param_1 + 0x60);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
      if (bVar2) {
        lVar4 = NativeHelper_01a5e79c(0,_UNK_00a4765c,*(undefined8 *)(param_1 + 0x60),0);
        uVar5 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866068);
        NativeHelper_01a4f8cc(uVar5,lVar3,*(undefined8 *)PTR_DAT_03867920,0);
        if (lVar4 != 0) {
          puVar6 = (undefined8 *)(lVar4 + 0x80);
          *puVar6 = uVar5;
          if (iRam0000000003cd3780 != 0) {
            func_0x018dcb10(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                            ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
          }
          return;
        }
        goto LAB_0198b278;
      }
    }
    if ((*(long *)(param_1 + 0x50) != 0) && (lVar3 = *plVar8, lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0198b274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),0,
                 *(int *)(param_1 + 0x48) - *(int *)(*(long *)(param_1 + 0x50) + 0x18),
                 *(int *)(param_1 + 0x48),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
LAB_0198b278:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

