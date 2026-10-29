// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CancelUseUpgrade() { }
// Ghidra address: 01982b74; ELF VA: 0x1882b74; file offset: 0x187eb74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_CancelUseUpgrade_187eb74(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  WorldMaskController *pWVar4;
  void *pvVar5;
  FruitItem *self_00;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  uint uVar6;
  long lVar7;
  Recovered_Vector3 RVar8;
  
  if ((bRam0000000003ab20f0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    bRam0000000003ab20f0 = 1;
  }
  if ((self->m_GamePanel != (void *)0x0) &&
     (pvVar5 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                         (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar5 != (void *)0x0)) {
    uVar6 = *(uint *)((long)pvVar5 + 0x18);
    if (0 < (int)uVar6) {
      lVar7 = 0;
      runtimeMethod_00 = extraout_x1;
      do {
        if (uVar6 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        self_00 = *(FruitItem **)((long)pvVar5 + lVar7 * 8 + 0x20);
        if (self_00 == (FruitItem *)0x0) goto LAB_01982c18;
        FruitItem_HideToolEffect_1876bd0(self_00,runtimeMethod_00);
        uVar6 = *(uint *)((long)pvVar5 + 0x18);
        lVar7 = lVar7 + 1;
        runtimeMethod_00 = extraout_x1_00;
      } while ((int)lVar7 < (int)uVar6);
    }
    self->_isBlock = false;
    self->_gameState = 0;
    if (self->_currentFruit != (void *)0x0) {
      NativeHelper_0335236c(self->_currentFruit,1,0);
    }
    if ((self->_currentIndicator != (void *)0x0) &&
       (lVar7 = NativeHelper_0334f4c8(self->_currentIndicator,0), lVar7 != 0)) {
      NativeHelper_0335236c(lVar7,1,0);
      pWVar4 = self->_currentWordMaskController;
      if (pWVar4 != (WorldMaskController *)0x0) {
        pWVar4->height = 0.0;
        puVar2 = PTR_DAT_0385c2a0;
        if ((bRam0000000003ab209c & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385c2a0);
          NativeHelper_017ef284(PTR_DAT_03867030);
          bRam0000000003ab209c = 1;
        }
        pvVar5 = pWVar4->maskMaterial;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
        if (!bVar3) {
          return;
        }
        pvVar5 = (void *)NativeHelper_0334f400(pWVar4,0);
        if (pvVar5 != (void *)0x0) {
          RVar8 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
          puVar2 = PTR_DAT_03867030;
          pvVar5 = pWVar4->maskMaterial;
          if (*(int *)(*(long *)PTR_DAT_03867030 + 0xe4) == 0) {
            NativeHelper_017ef404(RVar8.component0,RVar8.component1,RVar8.component2);
          }
          if (pvVar5 != (void *)0x0) {
            uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
            if ((bRam0000000003abae9d & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_038a6ef8,uVar1,0);
              NativeHelper_017ef284(PTR_DAT_03865390);
              bRam0000000003abae9d = 1;
            }
            if (pvVar5 != (void *)0x0) {
              lVar7 = *(long *)((long)pvVar5 + 0x10);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_0334bff8(pvVar5,0);
              }
              if (*(int *)(*(long *)PTR_DAT_03865390 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              if (pcRam0000000003abaf38 == (code *)0x0) {
                pcRam0000000003abaf38 = (code *)NativeHelper_017ef240(&UNK_00a5f9a1);
              }
              (*pcRam0000000003abaf38)(lVar7,uVar1,&stack0xffffffffffffffc0);
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
LAB_01982c18:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

