// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <BuyCurrentItem>b__0() { }
// Ghidra address: 0198de18; ELF VA: 0x188de18; file offset: 0x1889e18
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong BuildHouse___c__DisplayClass27_0__BuyCurrentItem_b__0_1889e18(long param_1)

{
  Recovered_Quaternion rotation;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  Recovered_Vector3 position;
  
  puVar1 = PTR_DAT_03867ab8;
  if ((bRam0000000003ab2157 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867ac0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03867148);
    NativeHelper_017ef284(PTR_DAT_03867ac8);
    NativeHelper_017ef284(PTR_DAT_03867ab8);
    bRam0000000003ab2157 = 1;
  }
  lVar6 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar6,0);
  puVar1 = PTR_DAT_0385d490;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = param_1;
    NativeHelper_017ef228((long *)(lVar6 + 0x18),param_1);
    if ((SoundMgr *)**(undefined8 **)(*(long *)puVar1 + 0xb8) != (SoundMgr *)0x0) {
      SoundMgr_PlaySound_1871d4c
                ((SoundMgr *)**(undefined8 **)(*(long *)puVar1 + 0xb8),(void *)0x10,false,1.0,false,
                 (void *)0x0);
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x58), lVar7 != 0)) &&
         (lVar7 = NativeHelper_0334f4c8(lVar7,0), lVar7 != 0)) {
        NativeHelper_0335236c(lVar7,1,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          pvVar9 = *(void **)(*(long *)(param_1 + 0x10) + 0x58);
          if (cRam0000000003ab204a == '\0') {
            NativeHelper_017ef284(PTR_DAT_038654f0);
            cRam0000000003ab204a = '\x01';
          }
          puVar1 = PTR_DAT_038654f0;
          if (pvVar9 != (void *)0x0) {
            UnityEngine_Transform_set_localScale_325af4c
                      (pvVar9,**(Recovered_Vector3 **)(*(long *)PTR_DAT_038654f0 + 0xb8),(void *)0x0
                      );
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (pvVar9 = *(void **)(*(long *)(param_1 + 0x10) + 0x58), pvVar9 != (void *)0x0)) {
              pvVar9 = UnityEngine_object_get_name_3252e0c(pvVar9,(void *)0x0);
              *(void **)(lVar6 + 0x10) = pvVar9;
              NativeHelper_017ef228();
              puVar4 = PTR_DAT_03867ac8;
              puVar3 = PTR_DAT_03867148;
              puVar2 = PTR_DAT_03866068;
              if (*(long *)(param_1 + 0x10) != 0) {
                uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
                if (cRam0000000003ab1f83 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_038654f0);
                  cRam0000000003ab1f83 = '\x01';
                }
                lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
                uVar10 = NativeHelper_01a5e5fc
                                   (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                                    *(undefined4 *)(lVar7 + 0x14),_UNK_00a47794,uVar10,0);
                lVar7 = NativeHelper_01d6fa88(uVar10,0x1b,*(undefined8 *)puVar3);
                uVar10 = NativeHelper_017ef520(*(undefined8 *)puVar2);
                NativeHelper_01a4f8cc(uVar10,lVar6,*(undefined8 *)puVar4,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x80) = uVar10;
                  NativeHelper_017ef228((undefined8 *)(lVar7 + 0x80),uVar10);
                  puVar1 = PTR_DAT_0385c2a0;
                  if (*(long *)(param_1 + 0x10) != 0) {
                    pvVar9 = *(void **)(*(long *)(param_1 + 0x10) + 0x28);
                    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
                      NativeHelper_017ef404();
                    }
                    bVar5 = UnityEngine_object_op_Implicit_3252d84(pvVar9,(void *)0x0);
                    if (!bVar5) {
                      return (ulong)bVar5;
                    }
                    lVar6 = *(long *)(param_1 + 0x10);
                    if ((lVar6 != 0) && (*(void **)(lVar6 + 0x58) != (void *)0x0)) {
                      pvVar9 = *(void **)(lVar6 + 0x28);
                      position = UnityEngine_Transform_get_position_325a714
                                           (*(void **)(lVar6 + 0x58),(void *)0x0);
                      if (cRam0000000003ab212c == '\0') {
                        NativeHelper_017ef284(PTR_DAT_038670d8);
                        cRam0000000003ab212c = '\x01';
                      }
                      rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        NativeHelper_017ef404();
                      }
                      lVar6 = *(long *)PTR_DAT_03867ac0;
                      if (*(long *)(lVar6 + 0x38) == 0) {
                        NativeHelper_017ef284(&DAT_03930f08);
                        if (*(long *)(lVar6 + 0x38) == 0) {
                          NativeHelper_01827500(lVar6);
                        }
                      }
                      if (*(int *)(_DAT_03930f08 + 0xe4) == 0) {
                        NativeHelper_017ef404();
                      }
                      pvVar9 = UnityEngine_object_Instantiate_32530e8
                                         (pvVar9,position,rotation,(void *)0x0);
                      lVar6 = **(long **)(lVar6 + 0x38);
                      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                        lVar6 = NativeHelper_018274a4(lVar6);
                      }
                      if (pvVar9 == (void *)0x0) {
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = NativeHelper_017ef408(pvVar9,lVar6);
                        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                          NativeHelper_017ef8b0(pvVar9,lVar6);
                        }
                      }
                      return uVar8;
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

