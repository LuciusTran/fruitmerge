// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal virtual void Init() { }
// Ghidra address: 019a5798; ELF VA: 0x18a5798; file offset: 0x18a1798
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomePage_Init_18a1798(HomePage *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  ulong uVar5;
  void *extraout_x1;
  void **ppvVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2258 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03868730);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03861a08);
    bRam0000000003ab2258 = 1;
    runtimeMethod = extraout_x1;
  }
  HomePage_BuildRoom_18a18ec(self,runtimeMethod);
  ppvVar6 = &self->m_DailyRewardButton;
  pvVar7 = *ppvVar6;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar3 = UnityEngine_object_op_Equality_324f284(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar3) {
    pvVar7 = (void *)NativeHelper_0334f400(self,0);
    if ((pvVar7 == (void *)0x0) ||
       (pvVar7 = UnityEngine_Component_GetComponentsInChildren_1b08ddc
                           (pvVar7,true,*(void **)PTR_DAT_03868730), puVar2 = PTR_DAT_03861a08,
       pvVar7 == (void *)0x0)) {
LAB_019a58e4:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar1 = *(uint *)((long)pvVar7 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        pvVar8 = *(void **)((long)pvVar7 + lVar9 * 8 + 0x20);
        if ((pvVar8 == (void *)0x0) ||
           (pvVar4 = (void *)NativeHelper_0334f4c8(pvVar8,0), pvVar4 == (void *)0x0))
        goto LAB_019a58e4;
        pvVar4 = UnityEngine_object_get_name_3252e0c(pvVar4,(void *)0x0);
        uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)puVar2,0);
        if ((uVar5 & 1) != 0) {
          *ppvVar6 = pvVar8;
          if (iRam0000000003cd3780 != 0) {
            func_0x018dcb10(1L << ((ulong)ppvVar6 >> 0xc & 0x3f),
                            ((ulong)ppvVar6 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
          }
          return;
        }
        uVar1 = *(uint *)((long)pvVar7 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
  }
  return;
}

