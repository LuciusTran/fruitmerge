// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowCurrentFruit() { }
// Ghidra address: 01980330; ELF VA: 0x1880330; file offset: 0x187c330
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_ShowCurrentFruit_187c330(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  WorldMaskController *pWVar4;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar5;
  long lVar6;
  Recovered_Vector3 RVar7;
  undefined1 auVar8 [16];
  
  if (self->_currentFruit != (void *)0x0) {
    NativeHelper_0335236c(self->_currentFruit,1,0);
    runtimeMethod = extraout_x1;
  }
  if ((self->_currentIndicator != (void *)0x0) &&
     (auVar8 = NativeHelper_0334f4c8(self->_currentIndicator,0), runtimeMethod = auVar8._8_8_,
     auVar8._0_8_ != 0)) {
    NativeHelper_0335236c(auVar8._0_8_,1,0);
    pWVar4 = self->_currentWordMaskController;
    runtimeMethod = extraout_x1_00;
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
        RVar7 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
        puVar2 = PTR_DAT_03867030;
        pvVar5 = pWVar4->maskMaterial;
        if (*(int *)(*(long *)PTR_DAT_03867030 + 0xe4) == 0) {
          NativeHelper_017ef404(RVar7.component0,RVar7.component1,RVar7.component2);
        }
        if (pvVar5 != (void *)0x0) {
          uVar1 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
          if ((bRam0000000003abae9d & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_038a6ef8,uVar1,0);
            NativeHelper_017ef284(PTR_DAT_03865390);
            bRam0000000003abae9d = 1;
          }
          if (pvVar5 != (void *)0x0) {
            lVar6 = *(long *)((long)pvVar5 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_0334bff8(pvVar5,0);
            }
            if (*(int *)(*(long *)PTR_DAT_03865390 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            if (pcRam0000000003abaf38 == (code *)0x0) {
              pcRam0000000003abaf38 = (code *)NativeHelper_017ef240(&UNK_00a5f9a1);
            }
            (*pcRam0000000003abaf38)(lVar6,uVar1,&stack0xffffffffffffffc0);
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
  NativeHelper_017ef530(0,runtimeMethod);
}

