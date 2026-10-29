// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private Transform GetEffectParent() { }
// Ghidra address: 0197a66c; ELF VA: 0x187a66c; file offset: 0x187666c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * FruitItem_GetEffectParent_187666c(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  void *pvVar4;
  ulong uVar5;
  void *extraout_x1;
  long lVar6;
  MergeFruit *pMVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20a2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20a2 = 1;
    runtimeMethod = extraout_x1;
  }
  FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod);
  pMVar7 = self->_mergeFruit;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pMVar7,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    return (void *)0x0;
  }
  pMVar7 = self->_mergeFruit;
  if (pMVar7 == (MergeFruit *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003abb746 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a7698,0);
    NativeHelper_017ef284(PTR_DAT_038a6eb8);
    bRam0000000003abb746 = 1;
  }
  puVar1 = PTR_DAT_038a6eb8;
  if (pMVar7 != (MergeFruit *)0x0) {
    lVar6 = *(long *)&pMVar7->field_0x10;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8();
    }
    if (pcRam0000000003abb750 == (code *)0x0) {
      pcRam0000000003abb750 = (code *)NativeHelper_017ef240(&UNK_00a508a8);
    }
    uVar5 = (*pcRam0000000003abb750)(lVar6);
    lVar6 = *(long *)puVar1;
    if (*(long *)(lVar6 + 0x38) == 0) {
      NativeHelper_01827500(lVar6);
    }
    if (uVar5 != 0) {
      if (cRam0000000003ab32a8 == '\0') {
        NativeHelper_017ef284(&DAT_03957898);
        cRam0000000003ab32a8 = '\x01';
      }
      if ((uVar5 & 1) == 0) {
        plVar3 = (long *)NativeHelper_02c5af30();
        lVar8 = *plVar3;
      }
      else {
        lVar8 = NativeHelper_02b3fa58(uVar5,0);
      }
      lVar6 = **(long **)(lVar6 + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = NativeHelper_018274a4(lVar6);
      }
      if (lVar8 != 0) {
        pvVar4 = (void *)NativeHelper_017ef408(lVar8,lVar6);
        if (pvVar4 != (void *)0x0) {
          return pvVar4;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef8b0(lVar8,lVar6);
      }
    }
    return (void *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

