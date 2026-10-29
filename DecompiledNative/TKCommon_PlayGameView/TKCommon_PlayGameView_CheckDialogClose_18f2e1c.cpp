// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckDialogClose() { }
// Ghidra address: 019f6e1c; ELF VA: 0x18f6e1c; file offset: 0x18f2e1c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019dba04) */
/* WARNING: Removing unreachable block (ram,0x019dba08) */
/* WARNING: Removing unreachable block (ram,0x019dba2c) */
/* WARNING: Removing unreachable block (ram,0x019dba34) */
/* WARNING: Removing unreachable block (ram,0x019dba88) */
/* WARNING: Removing unreachable block (ram,0x019dba48) */
/* WARNING: Removing unreachable block (ram,0x019dba50) */
/* WARNING: Removing unreachable block (ram,0x019dba98) */
/* WARNING: Removing unreachable block (ram,0x019dba9c) */

void TKCommon_PlayGameView_CheckDialogClose_18f2e1c(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar6 = PTR_DAT_0386ac58;
  puVar5 = PTR_DAT_0386ac50;
  puVar4 = PTR_DAT_0386ac48;
  puVar3 = PTR_DAT_0386ac40;
  puVar1 = PTR_DAT_0386ac38;
  puVar2 = PTR_DAT_038687c8;
  if ((bRam0000000003ab25bf & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386ac40);
    NativeHelper_017ef284(PTR_DAT_0386ac50);
    NativeHelper_017ef284(PTR_DAT_0386ac58);
    NativeHelper_017ef284(PTR_DAT_038687c8);
    NativeHelper_017ef284(PTR_DAT_0386ac38);
    NativeHelper_017ef284(PTR_DAT_0386ac48);
    bRam0000000003ab25bf = 1;
  }
  Game_Controller_FMViewController_CloseView_18d7c14(*(void **)puVar1,0.0,(void *)0x0);
  Game_Controller_FMViewController_CloseView_18d7c14(*(void **)puVar3,0.0,(void *)0x0);
  Game_Controller_FMViewController_CloseView_18d7c14(*(void **)puVar2,0.0,(void *)0x0);
  Game_Controller_FMViewController_CloseView_18d7c14(*(void **)puVar4,0.0,(void *)0x0);
  Game_Controller_FMViewController_CloseView_18d7c14(*(void **)puVar5,0.0,(void *)0x0);
  puVar1 = PTR_DAT_03867258;
  puVar2 = PTR_DAT_0385c2a0;
  pvVar11 = *(void **)puVar6;
  if ((bRam0000000003ab24e2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867258,0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab24e2 = 1;
  }
  plVar10 = Game_Controller_FMViewController_GetView_1b724a8(pvVar11,*(void **)puVar1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar2);
  }
  bVar7 = UnityEngine_object_op_Equality_324f284(plVar10,(void *)0x0,(void *)0x0);
  puVar2 = PTR_DAT_0386a258;
  if (bVar7) {
    return;
  }
  if ((bRam0000000003ab24e3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a180);
    NativeHelper_017ef284(PTR_DAT_0386a260);
    NativeHelper_017ef284(PTR_DAT_0386a268);
    NativeHelper_017ef284(PTR_DAT_0386a1a8);
    NativeHelper_017ef284(PTR_DAT_0386a1b0);
    NativeHelper_017ef284(PTR_DAT_0386a208);
    NativeHelper_017ef284(PTR_DAT_0386a240);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03866ec0);
    NativeHelper_017ef284(PTR_DAT_0386a270);
    NativeHelper_017ef284(PTR_DAT_0386a278);
    NativeHelper_017ef284(PTR_DAT_0386a258);
    bRam0000000003ab24e3 = 1;
  }
  lVar8 = NativeHelper_017ef520(*(undefined8 *)puVar2);
  NativeHelper_02c51f64(lVar8,0);
  puVar2 = PTR_DAT_0386a180;
  if (plVar10 != (long *)0x0) {
    pvVar11 = UnityEngine_object_get_name_3252e0c(plVar10,(void *)0x0);
    lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (lVar12 != 0) {
      NativeHelper_0256ac7c(lVar12,plVar10,*(undefined8 *)PTR_DAT_0386a1a8);
      (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      uVar9 = NativeHelper_0334f4c8(plVar10,0);
      puVar1 = PTR_DAT_0385c2a0;
      if (lVar8 != 0) {
        puVar13 = (undefined8 *)(lVar8 + 0x10);
        *puVar13 = uVar9;
        NativeHelper_017ef228(puVar13,uVar9);
        uVar9 = *puVar13;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        NativeHelper_03357b5c(uVar9,0);
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
        if (lVar8 != 0) {
          NativeHelper_0256b364(lVar8,*(undefined8 *)PTR_DAT_0386a1b0);
          lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          if (lVar8 != 0) {
            if (0 < *(int *)(lVar8 + 0x18)) {
              plVar10 = (long *)NativeHelper_0256950c
                                          (lVar8,*(int *)(lVar8 + 0x18) + -1,
                                           *(undefined8 *)PTR_DAT_0386a240);
              lVar8 = *(long *)puVar1;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                NativeHelper_017ef404(lVar8);
              }
              bVar7 = UnityEngine_object_op_Equality_324f284(plVar10,(void *)0x0,(void *)0x0);
              if (!bVar7) {
                if (plVar10 != (long *)0x0) {
                  bVar7 = (char)plVar10[7] != '\0';
                  lVar8 = 0x1c0;
                  if (bVar7) {
                    lVar8 = 0x1b0;
                  }
                  lVar12 = 0x1b8;
                  if (bVar7) {
                    lVar12 = 0x1a8;
                  }
                    /* WARNING: Could not recover jumptable at 0x019dbc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar10 + lVar12))
                            (plVar10,pvVar11,*(undefined8 *)(*plVar10 + lVar8));
                  return;
                }
                goto code_r0x019dbc10;
              }
            }
            return;
          }
        }
      }
    }
  }
code_r0x019dbc10:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

