// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <IsUsingClean>b__1() { }
// Ghidra address: 01983e60; ELF VA: 0x1883e60; file offset: 0x187fe60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit___c__DisplayClass117_1__IsUsingClean_b__1_187fe60(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  Recovered_Vector3 RVar7;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(*(long *)(lVar4 + 0x18) + 0x18) + -1) {
      return;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x128);
      *(undefined4 *)(lVar4 + 0xbc) = 0;
      *(undefined1 *)(lVar4 + 0x8c) = 0;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
          *(undefined8 *)(lVar4 + 0x128) = 0;
          NativeHelper_017ef228(lVar4 + 0x128,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar4 != 0)) {
            if (*(long *)(lVar4 + 0x98) != 0) {
              NativeHelper_0335236c(*(long *)(lVar4 + 0x98),1,0);
            }
            if ((*(long *)(lVar4 + 0xa0) != 0) &&
               (lVar5 = NativeHelper_0334f4c8(*(long *)(lVar4 + 0xa0),0), lVar5 != 0)) {
              NativeHelper_0335236c(lVar5,1,0);
              lVar4 = *(long *)(lVar4 + 0xa8);
              if (lVar4 != 0) {
                *(undefined4 *)(lVar4 + 0x2c) = 0;
                puVar2 = PTR_DAT_0385c2a0;
                if ((bRam0000000003ab209c & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_0385c2a0);
                  NativeHelper_017ef284(PTR_DAT_03867030);
                  bRam0000000003ab209c = 1;
                }
                pvVar6 = *(void **)(lVar4 + 0x20);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
                if (!bVar3) {
                  return;
                }
                pvVar6 = (void *)NativeHelper_0334f400(lVar4,0);
                if (pvVar6 != (void *)0x0) {
                  RVar7 = UnityEngine_Transform_get_position_325a714(pvVar6,(void *)0x0);
                  puVar2 = PTR_DAT_03867030;
                  lVar4 = *(long *)(lVar4 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03867030 + 0xe4) == 0) {
                    NativeHelper_017ef404(RVar7.component0,RVar7.component1,RVar7.component2);
                  }
                  if (lVar4 != 0) {
                    uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
                    if ((bRam0000000003abae9d & 1) == 0) {
                      NativeHelper_017ef284(PTR_DAT_038a6ef8,uVar1,0);
                      NativeHelper_017ef284(PTR_DAT_03865390);
                      bRam0000000003abae9d = 1;
                    }
                    if (lVar4 != 0) {
                      lVar5 = *(long *)(lVar4 + 0x10);
                      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_0334bff8(lVar4,0);
                      }
                      if (*(int *)(*(long *)PTR_DAT_03865390 + 0xe4) == 0) {
                        NativeHelper_017ef404();
                      }
                      if (pcRam0000000003abaf38 == (code *)0x0) {
                        pcRam0000000003abaf38 = (code *)NativeHelper_017ef240(&UNK_00a5f9a1);
                      }
                      (*pcRam0000000003abaf38)(lVar5,uVar1,&stack0xffffffffffffffc0);
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef530();
                  }
                }
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

