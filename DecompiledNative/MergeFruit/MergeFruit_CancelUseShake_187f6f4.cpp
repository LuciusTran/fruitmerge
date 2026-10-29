// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void CancelUseShake() { }
// Ghidra address: 019836f4; ELF VA: 0x18836f4; file offset: 0x187f6f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_CancelUseShake_187f6f4(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  WorldMaskController *pWVar5;
  ShakeWithRigidbody2D *self_00;
  void *runtimeMethod_00;
  void *pvVar6;
  Recovered_Vector3 RVar7;
  
  if ((bRam0000000003ab20fb & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867470);
    bRam0000000003ab20fb = 1;
  }
  self->_isBlock = false;
  self->_gameState = 0;
  if ((self->m_Box == (void *)0x0) ||
     (self_00 = UnityEngine_Component_GetComponent_1b08498(self->m_Box,*(void **)PTR_DAT_03867470),
     self_00 == (ShakeWithRigidbody2D *)0x0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  ShakeWithRigidbody2D_CancelShake_1873684(self_00,runtimeMethod_00);
  if (self->_currentFruit != (void *)0x0) {
    NativeHelper_0335236c(self->_currentFruit,1,0);
  }
  if ((self->_currentIndicator != (void *)0x0) &&
     (lVar4 = NativeHelper_0334f4c8(self->_currentIndicator,0), lVar4 != 0)) {
    NativeHelper_0335236c(lVar4,1,0);
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
      bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
      if (!bVar3) {
        return;
      }
      pvVar6 = (void *)NativeHelper_0334f400(pWVar5,0);
      if (pvVar6 != (void *)0x0) {
        RVar7 = UnityEngine_Transform_get_position_325a714(pvVar6,(void *)0x0);
        puVar2 = PTR_DAT_03867030;
        pvVar6 = pWVar5->maskMaterial;
        if (*(int *)(*(long *)PTR_DAT_03867030 + 0xe4) == 0) {
          NativeHelper_017ef404(RVar7.component0,RVar7.component1,RVar7.component2);
        }
        if (pvVar6 != (void *)0x0) {
          uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
          if ((bRam0000000003abae9d & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_038a6ef8,uVar1,0);
            NativeHelper_017ef284(PTR_DAT_03865390);
            bRam0000000003abae9d = 1;
          }
          if (pvVar6 != (void *)0x0) {
            lVar4 = *(long *)((long)pvVar6 + 0x10);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_0334bff8(pvVar6,0);
            }
            if (*(int *)(*(long *)PTR_DAT_03865390 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            if (pcRam0000000003abaf38 == (code *)0x0) {
              pcRam0000000003abaf38 = (code *)NativeHelper_017ef240(&UNK_00a5f9a1);
            }
            (*pcRam0000000003abaf38)(lVar4,uVar1,&stack0xffffffffffffffc0);
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

