// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private Camera GetUICamera() { }
// Ghidra address: 019f4ef4; ELF VA: 0x18f4ef4; file offset: 0x18f0ef4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * TKCommon_PlayGameView_GetUICamera_18f0ef4(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  void *x;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_28;
  
  puVar2 = PTR_DAT_0386a170;
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2597 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a170);
    NativeHelper_017ef284(PTR_DAT_038673b8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038687e8);
    bRam0000000003ab2597 = 1;
  }
  pvVar5 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if (pvVar5 == (void *)0x0) goto LAB_019f506c;
    iVar4 = NativeHelper_036430d8(pvVar5,0);
    if (iVar4 == 0) {
      return (void *)0x0;
    }
    x = (void *)NativeHelper_036443fc(pvVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1);
    }
    bVar3 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if ((bRam0000000003abf310 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038bc1d8,0);
        NativeHelper_017ef284(PTR_DAT_038a6c38);
        bRam0000000003abf310 = 1;
      }
      puVar1 = PTR_DAT_038a6c38;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      lVar8 = *(long *)((long)pvVar5 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8(pvVar5,0);
      }
      if (pcRam0000000003abf3d0 == (code *)0x0) {
        pcRam0000000003abf3d0 = (code *)NativeHelper_017ef240(&UNK_00a5bf66);
      }
      uVar7 = (*pcRam0000000003abf3d0)(lVar8);
      lVar8 = *(long *)puVar1;
      if (*(long *)(lVar8 + 0x38) == 0) {
        NativeHelper_01827500(lVar8);
      }
      if (uVar7 != 0) {
        if (cRam0000000003ab32a8 == '\0') {
          NativeHelper_017ef284(&DAT_03957898);
          cRam0000000003ab32a8 = '\x01';
        }
        if ((uVar7 & 1) == 0) {
          plVar6 = (long *)NativeHelper_02c5af30();
          lVar10 = *plVar6;
        }
        else {
          lVar10 = NativeHelper_02b3fa58(uVar7,0);
        }
        lVar8 = **(long **)(lVar8 + 0x38);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = NativeHelper_018274a4(lVar8);
        }
        if (lVar10 != 0) {
          pvVar5 = (void *)NativeHelper_017ef408(lVar10,lVar8);
          if (pvVar5 != (void *)0x0) {
            return pvVar5;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef8b0(lVar10,lVar8);
        }
      }
      return (void *)0x0;
    }
  }
  pvVar5 = (void *)NativeHelper_03352a84(*(undefined8 *)PTR_DAT_038687e8,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    return (void *)0x0;
  }
  if (pvVar5 != (void *)0x0) {
    lVar8 = *(long *)PTR_DAT_038673b8;
    lVar10 = *(long *)(lVar8 + 0x38);
    if (lVar10 == 0) {
      NativeHelper_01827500(lVar8);
      lVar10 = *(long *)(lVar8 + 0x38);
    }
    uStack_28 = 0;
    uVar9 = *(undefined8 *)(lVar10 + 8);
    if (*(int *)(*(long *)(PTR_DAT_0385c2d8 + 0xe0) + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar9 = NativeHelper_02c1ee48(uVar9,0);
    NativeHelper_03351b6c(pvVar5,uVar9,&uStack_28,0);
    return (void *)0x0;
  }
LAB_019f506c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

