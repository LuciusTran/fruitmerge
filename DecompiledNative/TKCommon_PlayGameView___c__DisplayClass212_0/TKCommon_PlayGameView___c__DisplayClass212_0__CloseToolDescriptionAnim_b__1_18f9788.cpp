// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <CloseToolDescriptionAnim>b__1() { }
// Ghidra address: 019fd788; ELF VA: 0x18fd788; file offset: 0x18f9788
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView___c__DisplayClass212_0__CloseToolDescriptionAnim_b__1_18f9788
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    pvVar3 = *(void **)(*(long *)(param_1 + 0x10) + 0x120);
    if (cRam0000000003ab1f83 == '\0') {
      NativeHelper_017ef284(PTR_DAT_038654f0);
      cRam0000000003ab1f83 = '\x01';
    }
    puVar1 = PTR_DAT_038654f0;
    if (pvVar3 != (void *)0x0) {
      UnityEngine_Transform_set_localScale_325af4c
                (pvVar3,*(Recovered_Vector3 *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0xc),
                 (void *)0x0);
      if (*(long *)(param_1 + 0x10) != 0) {
        pvVar3 = *(void **)(*(long *)(param_1 + 0x10) + 0x128);
        if (cRam0000000003ab1f83 == '\0') {
          NativeHelper_017ef284(PTR_DAT_038654f0);
          cRam0000000003ab1f83 = '\x01';
        }
        if (pvVar3 != (void *)0x0) {
          UnityEngine_Transform_set_localScale_325af4c
                    (pvVar3,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                     (void *)0x0);
          if (*(long *)(param_1 + 0x10) != 0) {
            pvVar3 = *(void **)(*(long *)(param_1 + 0x10) + 0x130);
            if (cRam0000000003ab1f83 == '\0') {
              NativeHelper_017ef284(PTR_DAT_038654f0);
              cRam0000000003ab1f83 = '\x01';
            }
            if (pvVar3 != (void *)0x0) {
              UnityEngine_Transform_set_localScale_325af4c
                        (pvVar3,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                         (void *)0x0);
              if (*(long *)(param_1 + 0x10) != 0) {
                pvVar3 = *(void **)(*(long *)(param_1 + 0x10) + 0x120);
                if (cRam0000000003ab1f83 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_038654f0);
                  cRam0000000003ab1f83 = '\x01';
                }
                if (pvVar3 != (void *)0x0) {
                  UnityEngine_Transform_set_localScale_325af4c
                            (pvVar3,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                             (void *)0x0);
                  if (((*(long *)(param_1 + 0x10) != 0) &&
                      (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x1c8), lVar2 != 0)) &&
                     (lVar2 = NativeHelper_0334f4c8(lVar2,0), lVar2 != 0)) {
                    NativeHelper_0335236c(lVar2,0,0);
                    lVar2 = *(long *)(param_1 + 0x18);
                    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019fd90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(lVar2 + 0x18))
                                (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

