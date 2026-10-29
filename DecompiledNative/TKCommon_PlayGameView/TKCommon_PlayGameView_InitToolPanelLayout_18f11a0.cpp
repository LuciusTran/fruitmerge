// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void InitToolPanelLayout() { }
// Ghidra address: 019f51a0; ELF VA: 0x18f51a0; file offset: 0x18f11a0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_InitToolPanelLayout_18f11a0
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *x;
  long *plVar12;
  ulong uVar13;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  void *pvVar18;
  undefined8 uVar19;
  long *plStack_68;
  
  puVar3 = PTR_DAT_0385d918;
  if ((bRam0000000003ab259c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386abd0);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03868ad8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab259c = 1;
    runtimeMethod = extraout_x1;
  }
  lVar11 = *(long *)puVar3;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar11,runtimeMethod);
    lVar11 = *(long *)puVar3;
    runtimeMethod = extraout_x1_00;
  }
  puVar3 = PTR_DAT_0385c2a0;
  if (**(char **)(lVar11 + 0xb8) != '\0') {
    return;
  }
  pvVar18 = self->m_trans_ToolPanel;
  if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0,runtimeMethod);
  }
  bVar8 = UnityEngine_object_op_Equality_324f284(pvVar18,(void *)0x0,(void *)0x0);
  if (bVar8) {
    return;
  }
  if (self->m_trans_ToolPanel == (void *)0x0) {
LAB_019f52e0:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar18 = UnityEngine_Component_GetComponent_1b08498
                      (self->m_trans_ToolPanel,*(void **)PTR_DAT_0386abd0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar3);
  }
  bVar8 = UnityEngine_object_op_Equality_324f284(pvVar18,(void *)0x0,(void *)0x0);
  if (bVar8) {
    return;
  }
  if ((pvVar18 == (void *)0x0) || (*(void **)((long)pvVar18 + 0x20) == (void *)0x0))
  goto LAB_019f52e0;
  UnityEngine_RectOffset_set_top_3223f00(*(void **)((long)pvVar18 + 0x20),0x14,(void *)0x0);
  plVar17 = self->m_trans_ToolPanel;
  if (*(int *)(*(long *)PTR_DAT_03868ad8 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar3 = PTR_DAT_0385c2a0;
  if ((bRam0000000003abf4a4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03871970,0);
    NativeHelper_017ef284(PTR_DAT_03871930);
    NativeHelper_017ef284(PTR_DAT_03871938);
    NativeHelper_017ef284(PTR_DAT_03871940);
    NativeHelper_017ef284(PTR_DAT_038bc310);
    NativeHelper_017ef284(PTR_DAT_03868ad8);
    NativeHelper_017ef284(PTR_DAT_0386cf00);
    NativeHelper_017ef284(PTR_DAT_0386cf08);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038654f8);
    bRam0000000003abf4a4 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar8 = UnityEngine_object_op_Equality_324f284(plVar17,(void *)0x0,(void *)0x0);
  if (bVar8) {
    return;
  }
  if (plVar17 == (long *)0x0) {
code_r0x0364f1d0:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar18 = (void *)NativeHelper_0334f4c8(plVar17,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar3);
  }
  bVar8 = UnityEngine_object_op_Equality_324f284(pvVar18,(void *)0x0,(void *)0x0);
  if (bVar8) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_03871940 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar11 = func_0x020213c8(*(undefined8 *)PTR_DAT_03871930);
  x = UnityEngine_Transform_get_parent_325a644(plVar17,(void *)0x0);
  puVar7 = PTR_DAT_038bc310;
  puVar6 = PTR_DAT_03871970;
  puVar5 = PTR_DAT_0386cf08;
  puVar4 = PTR_DAT_0385c2d8;
  plStack_68 = plVar17;
  if (x == (long *)0x0) {
    x = (long *)0x0;
  }
  else if (*x != *(long *)PTR_DAT_038654f8) {
    x = (long *)0x0;
  }
code_r0x0364ef94:
  do {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar8 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
    if (bVar8) break;
    if (x == (long *)0x0) goto code_r0x0364f1d0;
    pvVar18 = (void *)NativeHelper_0334f4c8(x,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar3);
    }
    bVar8 = UnityEngine_object_op_Equality_324f284(pvVar18,(void *)0x0,(void *)0x0);
    if (bVar8) break;
    uVar19 = *(undefined8 *)puVar7;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar19 = NativeHelper_02c1ee48(uVar19,0);
    UnityEngine_Component_GetComponents_324ba64(x,uVar19,lVar11,0);
    if (lVar11 == 0) goto code_r0x0364f1d0;
    bVar8 = 0 < *(int *)(lVar11 + 0x18);
    plVar12 = plStack_68;
    if (0 < *(int *)(lVar11 + 0x18)) {
      iVar10 = 0;
      do {
        plVar12 = (long *)NativeHelper_0256950c(lVar11,iVar10,*(undefined8 *)puVar5);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar3);
        }
        bVar9 = UnityEngine_object_op_Inequality_324dec8(plVar12,(void *)0x0,(void *)0x0);
        if ((bVar9) && (plVar12 != (long *)0x0)) {
          bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
             ((*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6 &&
              (uVar13 = NativeHelper_0334ecc0(plVar12,0), plVar12 = x, (uVar13 & 1) != 0)))) break;
        }
        iVar10 = iVar10 + 1;
        bVar8 = iVar10 < *(int *)(lVar11 + 0x18);
        plVar12 = plStack_68;
      } while (iVar10 < *(int *)(lVar11 + 0x18));
    }
    plStack_68 = plVar12;
    x = UnityEngine_Transform_get_parent_325a644(x,(void *)0x0);
    if (x != (long *)0x0) {
      if (*x != *(long *)PTR_DAT_038654f8) {
        x = (long *)0x0;
      }
      if (!bVar8) break;
      goto code_r0x0364ef94;
    }
    x = (long *)0x0;
  } while (bVar8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar8 = UnityEngine_object_op_Equality_324f284(plStack_68,plVar17,(void *)0x0);
  if (bVar8) {
    if (*(int *)(*(long *)PTR_DAT_03868ad8 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar13 = func_0x03654518(plStack_68,lVar11);
    if ((uVar13 & 1) != 0) goto code_r0x0364f168;
  }
  else {
code_r0x0364f168:
    if (*(int *)(*(long *)PTR_DAT_03868ad8 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    func_0x03654700(plStack_68);
  }
  if (*(int *)(*(long *)PTR_DAT_03871940 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar14 = *(long *)PTR_DAT_03871938;
  lVar15 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4(lVar15);
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar15 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4();
  }
  pvVar18 = (void *)**(undefined8 **)(lVar15 + 0xb8);
  if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar15 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x40);
  lVar14 = *(long *)((long)pvVar18 + 0x28);
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x18))
              (*(undefined8 *)(lVar14 + 0x40),lVar11,*(undefined8 *)(lVar14 + 0x28));
  }
  plVar17 = (long *)((long)pvVar18 + 0x40);
  if (*plVar17 == 0) {
    *plVar17 = lVar11;
NativeHelper_017ef228:
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)plVar17 >> 0xc & 0x3f),
                      ((ulong)plVar17 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
  iVar10 = UnityEngine_Pool_ObjectPool_get_CountInactive_26173f0
                     (pvVar18,*(void **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x90));
  if (*(int *)((long)pvVar18 + 0x38) <= iVar10) {
    lVar15 = *(long *)((long)pvVar18 + 0x30);
    *(int *)((long)pvVar18 + 0x48) = *(int *)((long)pvVar18 + 0x48) + -1;
    if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01c21458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 0x18))
                (*(undefined8 *)(lVar15 + 0x40),lVar11,*(undefined8 *)(lVar15 + 0x28));
      return;
    }
    return;
  }
  lVar14 = *(long *)((long)pvVar18 + 0x10);
  if (lVar14 != 0) {
    lVar16 = *(long *)(lVar14 + 0x10);
    lVar15 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x98);
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar16 != 0) {
      uVar2 = *(uint *)(lVar14 + 0x18);
      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        plVar17 = (long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
        *plVar17 = lVar11;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0x18);
        func_0x02569dc0(lVar14,uVar2 + 1,
                        *(undefined8 *)
                         (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                       0x70) + 0x20) + 0xc0) + 0x78));
        lVar15 = *(long *)(lVar14 + 0x10);
        *(uint *)(lVar14 + 0x18) = uVar2 + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        plVar17 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
        *plVar17 = lVar11;
      }
      goto NativeHelper_017ef228;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

