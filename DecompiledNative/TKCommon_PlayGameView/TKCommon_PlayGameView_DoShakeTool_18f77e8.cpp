// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DoShakeTool() { }
// Ghidra address: 019fb7e8; ELF VA: 0x18fb7e8; file offset: 0x18f77e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_DoShakeTool_18f77e8(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *runtimeMethod_00;
  void *extraout_x1;
  undefined8 *puVar7;
  long *plVar8;
  void *pvVar9;
  MergeFruit *pMVar10;
  float fVar11;
  Recovered_Vector2 RVar12;
  
  puVar1 = PTR_DAT_0386a518;
  if ((bRam0000000003ab25e0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03868608);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386adc0);
    NativeHelper_017ef284(PTR_DAT_0386adc8);
    NativeHelper_017ef284(PTR_DAT_0386a518);
    NativeHelper_017ef284(PTR_DAT_0385d2d8);
    bRam0000000003ab25e0 = 1;
    runtimeMethod = extraout_x1;
  }
  TKCommon_PlayGameView_HideTop_18f79cc(self,runtimeMethod);
  plVar8 = self->m_txt_ToolDescription;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x5e8))
              (plVar8,*(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),
               *(undefined8 *)(*plVar8 + 0x5f0));
    if ((self->m_trans_shakeGuide != (void *)0x0) &&
       (lVar3 = NativeHelper_0334f4c8(self->m_trans_shakeGuide,0), lVar3 != 0)) {
      NativeHelper_0335236c(lVar3,1,0);
      if (self->m_trans_Shake != (void *)0x0) {
        pvVar9 = self->m_img_Tool;
        pvVar4 = UnityEngine_Transform_Find_325c35c
                           (self->m_trans_Shake,*(void **)PTR_DAT_0385d2d8,(void *)0x0);
        if (((pvVar4 != (void *)0x0) &&
            (pvVar4 = UnityEngine_Component_GetComponent_1b08498(pvVar4,*(void **)PTR_DAT_03868608),
            puVar1 = PTR_DAT_0385c2a0, pvVar4 != (void *)0x0)) && (pvVar9 != (void *)0x0)) {
          NativeHelper_0345dd98(pvVar9,*(undefined8 *)((long)pvVar4 + 0xd8),0);
          pMVar10 = self->mMergeFruit;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar2 = UnityEngine_object_op_Implicit_3252d84(pMVar10,(void *)0x0);
          puVar1 = PTR_DAT_0385c9f8;
          if (!bVar2) {
            return;
          }
          pMVar10 = self->mMergeFruit;
          uVar5 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
          NativeHelper_02b8e36c(uVar5,self,*(undefined8 *)PTR_DAT_0386adc0,0);
          uVar6 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          NativeHelper_02b8e36c(uVar6,self,*(undefined8 *)PTR_DAT_0386adc8,0);
          puVar1 = PTR_DAT_03867468;
          if (pMVar10 != (MergeFruit *)0x0) {
            if ((bRam0000000003ab20fa & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_0385c9f8,uVar5,uVar6,0);
              NativeHelper_017ef284(PTR_DAT_03867470);
              NativeHelper_017ef284(PTR_DAT_03867478);
              NativeHelper_017ef284(PTR_DAT_03867468);
              bRam0000000003ab20fa = 1;
            }
            lVar3 = NativeHelper_017ef520(*(undefined8 *)puVar1);
            NativeHelper_02c51f64(lVar3,0);
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x10) = pMVar10;
              NativeHelper_017ef228((undefined8 *)(lVar3 + 0x10),pMVar10);
              *(undefined8 *)(lVar3 + 0x18) = uVar6;
              NativeHelper_017ef228((undefined8 *)(lVar3 + 0x18),uVar6);
              if (pMVar10->_gameState != 0) {
                return;
              }
              pMVar10->_gameState = 4;
              pMVar10->_isBlock = true;
              MergeFruit_HideCurrentFruit_187c2dc(pMVar10,runtimeMethod_00);
              pMVar10->clearFrictionGravityTime = pMVar10->clearFrictionGravityDuration;
              if (pMVar10->m_Box != (void *)0x0) {
                pvVar4 = UnityEngine_Component_GetComponent_1b08498
                                   (pMVar10->m_Box,*(void **)PTR_DAT_03867470);
                uVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
                NativeHelper_02b8e36c(uVar6,lVar3,*(undefined8 *)PTR_DAT_03867478,0);
                if (pvVar4 != (void *)0x0) {
                  if (*(void **)((long)pvVar4 + 0x38) != (void *)0x0) {
                    fVar11 = UnityEngine_Rigidbody2D_get_rotation_32aaf04
                                       (*(void **)((long)pvVar4 + 0x38),(void *)0x0);
                    *(float *)((long)pvVar4 + 0x44) = fVar11;
                    if (*(void **)((long)pvVar4 + 0x38) != (void *)0x0) {
                      RVar12 = UnityEngine_Rigidbody2D_get_position_32aad70
                                         (*(void **)((long)pvVar4 + 0x38),(void *)0x0);
                      *(Recovered_Vector2 *)((long)pvVar4 + 0x48) = RVar12;
                      *(undefined1 *)((long)pvVar4 + 0x50) = 1;
                      *(undefined8 *)((long)pvVar4 + 0x58) = uVar5;
                      NativeHelper_017ef228((undefined8 *)((long)pvVar4 + 0x58),uVar5);
                      puVar7 = (undefined8 *)((long)pvVar4 + 0x60);
                      *puVar7 = uVar6;
                      if (iRam0000000003cd3780 != 0) {
                        func_0x018dcb10(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                                        ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
                      }
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef530();
                }
              }
            }
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

