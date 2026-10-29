// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CancelUseClean() { }
// Ghidra address: 019829ec; ELF VA: 0x18829ec; file offset: 0x187e9ec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_CancelUseClean_187e9ec(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  WorldMaskController *pWVar5;
  void *pvVar6;
  long *plVar7;
  FruitItem *self_00;
  void *extraout_x1;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  Recovered_Vector3 RVar13;
  undefined1 auVar14 [16];
  
  if ((bRam0000000003ab20ee & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038672d8);
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_038672e0);
    NativeHelper_017ef284(PTR_DAT_03867438);
    NativeHelper_017ef284(PTR_DAT_03867300);
    bRam0000000003ab20ee = 1;
  }
  puVar2 = PTR_DAT_03867300;
  if (self->m_GamePanel != (void *)0x0) {
    pvVar6 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                       (self->m_GamePanel,*(void **)PTR_DAT_03867118);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar9);
      lVar9 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_038672d8;
    puVar10 = *(undefined8 **)(lVar9 + 0xb8);
    lVar11 = puVar10[4];
    if (lVar11 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar9);
        puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar12 = *puVar10;
      lVar11 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038672e0);
      NativeHelper_02731c08(lVar11,uVar12,*(undefined8 *)PTR_DAT_03867438,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar7 = lVar11;
      NativeHelper_017ef228(plVar7,lVar11);
    }
    auVar14 = NativeHelper_01d82dcc(pvVar6,lVar11,*(undefined8 *)puVar3);
    pvVar6 = auVar14._8_8_;
    lVar9 = auVar14._0_8_;
    if (lVar9 != 0) {
      uVar8 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar8) {
        lVar11 = 0;
        do {
          if (uVar8 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          self_00 = *(FruitItem **)(lVar9 + 0x20 + lVar11 * 8);
          if (self_00 == (FruitItem *)0x0) goto LAB_01982b6c;
          FruitItem_HideToolEffect_1876bd0(self_00,pvVar6);
          uVar8 = *(uint *)(lVar9 + 0x18);
          lVar11 = lVar11 + 1;
          pvVar6 = extraout_x1;
        } while ((int)lVar11 < (int)uVar8);
      }
      self->_isBlock = false;
      self->_gameState = 0;
      if (self->_currentFruit != (void *)0x0) {
        NativeHelper_0335236c(self->_currentFruit,1,0);
      }
      if ((self->_currentIndicator != (void *)0x0) &&
         (lVar9 = NativeHelper_0334f4c8(self->_currentIndicator,0), lVar9 != 0)) {
        NativeHelper_0335236c(lVar9,1,0);
        pWVar5 = self->_currentWordMaskController;
        if (pWVar5 != (WorldMaskController *)0x0) {
          pWVar5->height = 0.0;
          puVar2 = PTR_DAT_0385c2a0;
          if ((bRam0000000003ab209c & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385c2a0);
            NativeHelper_017ef284(PTR_DAT_03867030);
            bRam0000000003ab209c = 1;
          }
          pvVar6 = pWVar5->maskMaterial;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
          if (bVar4) {
            pvVar6 = (void *)NativeHelper_0334f400(pWVar5,0);
            if (pvVar6 != (void *)0x0) {
              RVar13 = UnityEngine_Transform_get_position_325a714(pvVar6,(void *)0x0);
              puVar2 = PTR_DAT_03867030;
              pvVar6 = pWVar5->maskMaterial;
              if (*(int *)(*(long *)PTR_DAT_03867030 + 0xe4) == 0) {
                NativeHelper_017ef404(RVar13.component0,RVar13.component1,RVar13.component2);
              }
              if (pvVar6 != (void *)0x0) {
                uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
                if ((bRam0000000003abae9d & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_038a6ef8,uVar1,0);
                  NativeHelper_017ef284(PTR_DAT_03865390);
                  bRam0000000003abae9d = 1;
                }
                if (pvVar6 != (void *)0x0) {
                  lVar9 = *(long *)((long)pvVar6 + 0x10);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_0334bff8(pvVar6,0);
                  }
                  if (*(int *)(*(long *)PTR_DAT_03865390 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  if (pcRam0000000003abaf38 == (code *)0x0) {
                    pcRam0000000003abaf38 = (code *)NativeHelper_017ef240(&UNK_00a5f9a1);
                  }
                  (*pcRam0000000003abaf38)(lVar9,uVar1,&stack0xffffffffffffffc0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
            }
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
LAB_01982b6c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

