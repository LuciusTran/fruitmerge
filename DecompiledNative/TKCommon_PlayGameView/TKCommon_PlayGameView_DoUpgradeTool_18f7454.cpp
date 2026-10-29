// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DoUpgradeTool() { }
// Ghidra address: 019fb454; ELF VA: 0x18fb454; file offset: 0x18f7454
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_DoUpgradeTool_18f7454(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  FruitItem *self_00;
  void *pvVar4;
  LocalNotification_Action *pLVar5;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  void *pvVar9;
  MergeFruit *pMVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar2 = PTR_DAT_0386a518;
  if ((bRam0000000003ab25df & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03868608);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386adb0);
    NativeHelper_017ef284(PTR_DAT_0386a518);
    NativeHelper_017ef284(PTR_DAT_0385d2d8);
    bRam0000000003ab25df = 1;
    runtimeMethod = extraout_x1_00;
  }
  TKCommon_PlayGameView_HideTop_18f79cc(self,runtimeMethod);
  plVar8 = self->m_txt_ToolDescription;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x5e8))
              (plVar8,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),
               *(undefined8 *)(*plVar8 + 0x5f0));
    if (self->_fruitCamera != (void *)0x0) {
      UnityEngine_Behaviour_set_enabled_324ac04(self->_fruitCamera,true,(void *)0x0);
      if (self->m_trans_Upgrade != (void *)0x0) {
        pvVar9 = self->m_img_Tool;
        pvVar4 = UnityEngine_Transform_Find_325c35c
                           (self->m_trans_Upgrade,*(void **)PTR_DAT_0385d2d8,(void *)0x0);
        if (((pvVar4 != (void *)0x0) &&
            (pvVar4 = UnityEngine_Component_GetComponent_1b08498(pvVar4,*(void **)PTR_DAT_03868608),
            puVar2 = PTR_DAT_0385c2a0, pvVar4 != (void *)0x0)) && (pvVar9 != (void *)0x0)) {
          NativeHelper_0345dd98(pvVar9,*(undefined8 *)((long)pvVar4 + 0xd8),0);
          pMVar10 = self->mMergeFruit;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar3 = UnityEngine_object_op_Implicit_3252d84(pMVar10,(void *)0x0);
          if (!bVar3) {
            return;
          }
          pMVar10 = self->mMergeFruit;
          pLVar5 = (LocalNotification_Action *)
                   NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
          NativeHelper_02b8e36c(pLVar5,self,*(undefined8 *)PTR_DAT_0386adb0,0);
          if (pMVar10 != (MergeFruit *)0x0) {
            if ((bRam0000000003ab20f9 & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_038672d8,pLVar5,0);
              NativeHelper_017ef284(PTR_DAT_03867118);
              NativeHelper_017ef284(PTR_DAT_038672e0);
              NativeHelper_017ef284(PTR_DAT_03867460);
              NativeHelper_017ef284(PTR_DAT_03867300);
              bRam0000000003ab20f9 = 1;
            }
            if (pMVar10->_gameState != 0) {
              return;
            }
            pMVar10->_gameState = 2;
            if (pMVar10->m_GamePanel != (void *)0x0) {
              pvVar4 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                                 (pMVar10->m_GamePanel,*(void **)PTR_DAT_03867118);
              puVar2 = PTR_DAT_03867300;
              lVar6 = *(long *)PTR_DAT_03867300;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                NativeHelper_017ef404(lVar6);
                lVar6 = *(long *)puVar2;
              }
              puVar7 = *(undefined8 **)(lVar6 + 0xb8);
              lVar11 = puVar7[8];
              if (lVar11 == 0) {
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  NativeHelper_017ef404(lVar6);
                  puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
                }
                uVar12 = *puVar7;
                lVar11 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038672e0);
                NativeHelper_02731c08(lVar11,uVar12,*(undefined8 *)PTR_DAT_03867460,0);
                plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40);
                *plVar8 = lVar11;
                NativeHelper_017ef228(plVar8,lVar11);
              }
              auVar13 = NativeHelper_01d82dcc(pvVar4,lVar11,*(undefined8 *)PTR_DAT_038672d8);
              pvVar4 = auVar13._8_8_;
              lVar6 = auVar13._0_8_;
              if (lVar6 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (0 < (int)uVar1) {
                  lVar11 = 0;
                  do {
                    if (uVar1 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef538();
                    }
                    self_00 = *(FruitItem **)(lVar6 + 0x20 + lVar11 * 8);
                    if (self_00 == (FruitItem *)0x0) goto LAB_019835a0;
                    FruitItem_ShowToolEffect_1876ce8(self_00,pvVar4);
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    lVar11 = lVar11 + 1;
                    pvVar4 = extraout_x1;
                  } while ((int)lVar11 < (int)uVar1);
                }
                MergeFruit_HideCurrentFruit_187c2dc(pMVar10,pvVar4);
                pMVar10->_upgradeAction = pLVar5;
                if (iRam0000000003cd3780 != 0) {
                  func_0x018dcb10(1L << ((ulong)&pMVar10->_upgradeAction >> 0xc & 0x3f),
                                  ((ulong)&pMVar10->_upgradeAction >> 0x12 & 0x7fff) * 8 + 0x3b07758
                                 );
                }
                return;
              }
            }
LAB_019835a0:
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

