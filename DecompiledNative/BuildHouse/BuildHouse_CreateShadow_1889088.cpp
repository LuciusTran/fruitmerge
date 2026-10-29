// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CreateShadow(Transform item) { }
// Ghidra address: 0198d088; ELF VA: 0x188d088; file offset: 0x1889088
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BuildHouse_CreateShadow_1889088(BuildHouse *self,void *item,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_58;
  undefined8 uStack_50;
  void *pvStack_48;
  
  if ((bRam0000000003ab2150 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867a20);
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_03867a28);
    NativeHelper_017ef284(PTR_DAT_03867a30);
    NativeHelper_017ef284(PTR_DAT_03867a38);
    NativeHelper_017ef284(PTR_DAT_03867a40);
    NativeHelper_017ef284(PTR_DAT_03867a48);
    NativeHelper_017ef284(PTR_DAT_03867a50);
    NativeHelper_017ef284(PTR_DAT_03867a58);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2150 = 1;
  }
  puVar2 = PTR_DAT_0385c2a0;
  uStack_58 = 0;
  uStack_50 = 0;
  pvStack_48 = (void *)0x0;
  if (item != (void *)0x0) {
    pvVar6 = UnityEngine_Component_GetComponent_1b08498(item,*(void **)PTR_DAT_03867a20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    bVar4 = UnityEngine_object_op_Implicit_3252d84(pvVar6,(void *)0x0);
    if (bVar4) {
      if (pvVar6 != (void *)0x0) {
        lVar7 = NativeHelper_0334f4c8(pvVar6,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar2);
        }
        puVar2 = PTR_DAT_0385c2a0;
        uVar9 = 0;
        if ((bRam0000000003abb946 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
          bRam0000000003abb946 = 1;
          uVar9 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404();
          uVar9 = extraout_x1_00;
        }
        puVar2 = PTR_DAT_038a6cb0;
        if ((bRam0000000003abb945 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a6cb0,uVar9);
          NativeHelper_017ef284(PTR_DAT_0385c2a0);
          bRam0000000003abb945 = 1;
        }
        if (*(long *)(*(long *)puVar2 + 0x38) == 0) {
          NativeHelper_01827500();
        }
        uVar9 = 0;
        if (lVar7 != 0) {
          uVar9 = *(undefined8 *)(lVar7 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        if (pcRam0000000003abb988 == (code *)0x0) {
          pcRam0000000003abb988 = (code *)NativeHelper_017ef240(&UNK_00a562d4);
        }
                    /* WARNING: Could not recover jumptable at 0x03357b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abb988)(0,uVar9);
        return;
      }
    }
    else {
      pvVar6 = UnityEngine_Component_GetComponent_1b08498(item,*(void **)PTR_DAT_03867058);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)puVar2);
      }
      bVar4 = UnityEngine_object_op_Implicit_3252d84(pvVar6,(void *)0x0);
      if (!bVar4) {
        iVar5 = NativeHelper_0335fe50(item,0);
        lVar7 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867a58);
        NativeHelper_02568f74(lVar7,*(undefined8 *)PTR_DAT_03867a50);
        puVar2 = PTR_DAT_03867a40;
        if (iVar5 < 1) {
          if (lVar7 == 0) goto LAB_0198d384;
        }
        else {
          iVar12 = 0;
          do {
            runtimeMethod = (void *)0x0;
            uVar9 = NativeHelper_0336077c(item,iVar12);
            if (lVar7 == 0) goto LAB_0198d384;
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar11 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0198d384;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              NativeHelper_017ef228();
            }
            else {
              runtimeMethod = *(void **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
              NativeHelper_025697dc(lVar7);
            }
            iVar12 = iVar12 + 1;
          } while (iVar5 != iVar12);
        }
        NativeHelper_0256a338(&uStack_58,lVar7,*(undefined8 *)PTR_DAT_03867a48);
        puVar2 = PTR_DAT_03867a30;
        while (uVar8 = NativeHelper_02240184(&uStack_58,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
          BuildHouse_CreateShadow_1889088(self,pvStack_48,runtimeMethod);
        }
        NativeHelper_02240180(&uStack_58,*(undefined8 *)PTR_DAT_03867a28);
        return;
      }
      if (pvVar6 != (void *)0x0) {
        UnityEngine_SpriteRenderer_set_color_3215380
                  (pvVar6,(Recovered_Color)(ZEXT416(_UNK_00a4765c) << 0x60),(void *)0x0);
        if ((bRam0000000003ab2151 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_03865f58);
          NativeHelper_017ef284(PTR_DAT_0385c2a0);
          bRam0000000003ab2151 = 1;
        }
        if (item == (void *)0x0) {
LAB_0198d4f8:
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        iVar5 = NativeHelper_0335fe50(item,0);
        puVar3 = PTR_DAT_03865f58;
        puVar2 = PTR_DAT_0385c2a0;
        if (0 < iVar5) {
          iVar12 = 0;
          do {
            lVar7 = NativeHelper_0336077c(item,iVar12,0);
            if (lVar7 == 0) goto LAB_0198d4f8;
            uVar9 = NativeHelper_0334f4c8(lVar7,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              NativeHelper_017ef404(*(long *)puVar3);
            }
            NativeHelper_01a53364(uVar9,0,0);
            lVar7 = NativeHelper_0336077c(item,iVar12,0);
            if (lVar7 == 0) goto LAB_0198d4f8;
            uVar9 = NativeHelper_0334f4c8(lVar7,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              NativeHelper_017ef404(*(long *)puVar2);
            }
            NativeHelper_03357b5c(uVar9,0);
            iVar12 = iVar12 + 1;
          } while (iVar5 != iVar12);
        }
        return;
      }
    }
  }
LAB_0198d384:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

