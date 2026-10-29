// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DoBombTool() { }
// Ghidra address: 019fb0c0; ELF VA: 0x18fb0c0; file offset: 0x18f70c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_DoBombTool_18f70c0(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  LocalNotification_Action *pLVar5;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  void *extraout_x1_01;
  long *plVar6;
  void *pvVar7;
  MergeFruit *pMVar8;
  FruitItem *self_00;
  uint uVar9;
  
  puVar2 = PTR_DAT_0386a518;
  if ((bRam0000000003ab25de & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03868608);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386ada0);
    NativeHelper_017ef284(PTR_DAT_0386a518);
    NativeHelper_017ef284(PTR_DAT_0385d2d8);
    bRam0000000003ab25de = 1;
    runtimeMethod = extraout_x1_01;
  }
  TKCommon_PlayGameView_HideTop_18f79cc(self,runtimeMethod);
  plVar6 = self->m_txt_ToolDescription;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x5e8))
              (plVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
               *(undefined8 *)(*plVar6 + 0x5f0));
    if (self->_fruitCamera != (void *)0x0) {
      UnityEngine_Behaviour_set_enabled_324ac04(self->_fruitCamera,true,(void *)0x0);
      if (self->m_trans_Bomb != (void *)0x0) {
        pvVar7 = self->m_img_Tool;
        pvVar4 = UnityEngine_Transform_Find_325c35c
                           (self->m_trans_Bomb,*(void **)PTR_DAT_0385d2d8,(void *)0x0);
        if (((pvVar4 != (void *)0x0) &&
            (pvVar4 = UnityEngine_Component_GetComponent_1b08498(pvVar4,*(void **)PTR_DAT_03868608),
            puVar2 = PTR_DAT_0385c2a0, pvVar4 != (void *)0x0)) && (pvVar7 != (void *)0x0)) {
          NativeHelper_0345dd98(pvVar7,*(undefined8 *)((long)pvVar4 + 0xd8),0);
          pMVar8 = self->mMergeFruit;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar3 = UnityEngine_object_op_Implicit_3252d84(pMVar8,(void *)0x0);
          if (!bVar3) {
            return;
          }
          pMVar8 = self->mMergeFruit;
          pLVar5 = (LocalNotification_Action *)
                   NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
          NativeHelper_02b8e36c(pLVar5,self,*(undefined8 *)PTR_DAT_0386ada0,0);
          if (pMVar8 != (MergeFruit *)0x0) {
            if ((bRam0000000003ab20f8 & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_03867118,pLVar5,0);
              bRam0000000003ab20f8 = 1;
            }
            if (pMVar8->_gameState != 0) {
              return;
            }
            pMVar8->_gameState = 3;
            if ((pMVar8->m_GamePanel != (void *)0x0) &&
               (pvVar4 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                                   (pMVar8->m_GamePanel,*(void **)PTR_DAT_03867118),
               pvVar4 != (void *)0x0)) {
              uVar1 = *(uint *)((long)pvVar4 + 0x18);
              pvVar7 = extraout_x1;
              if (0 < (int)uVar1) {
                uVar9 = 0;
                do {
                  if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef538();
                  }
                  self_00 = *(FruitItem **)((long)pvVar4 + (long)(int)uVar9 * 8 + 0x20);
                  if ((self_00 == (FruitItem *)0x0) || (self_00->_rigidbody2D == (void *)0x0))
                  goto LAB_019833e8;
                  bVar3 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c
                                    (self_00->_rigidbody2D,(void *)0x0);
                  pvVar7 = runtimeMethod_00;
                  if (!bVar3) {
                    FruitItem_ShowToolEffect_1876ce8(self_00,runtimeMethod_00);
                    pvVar7 = extraout_x1_00;
                  }
                  uVar1 = *(uint *)((long)pvVar4 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar1);
              }
              MergeFruit_HideCurrentFruit_187c2dc(pMVar8,pvVar7);
              pMVar8->_bombAction = pLVar5;
              if (iRam0000000003cd3780 != 0) {
                func_0x018dcb10(1L << ((ulong)&pMVar8->_bombAction >> 0xc & 0x3f),
                                ((ulong)&pMVar8->_bombAction >> 0x12 & 0x7fff) * 8 + 0x3b07758);
              }
              return;
            }
LAB_019833e8:
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

