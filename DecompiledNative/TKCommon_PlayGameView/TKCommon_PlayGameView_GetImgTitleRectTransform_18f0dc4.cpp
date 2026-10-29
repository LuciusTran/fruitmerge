// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private RectTransform GetImgTitleRectTransform() { }
// Ghidra address: 019f4dc4; ELF VA: 0x18f4dc4; file offset: 0x18f0dc4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * TKCommon_PlayGameView_GetImgTitleRectTransform_18f0dc4
                 (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  void **ppvVar1;
  undefined *puVar2;
  bool bVar3;
  void *extraout_x1;
  void *pvVar4;
  void *pvVar5;
  
  puVar2 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2596 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865028);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386abc0);
    bRam0000000003ab2596 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar5 = self->_imgTitleRectTransform;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar2,runtimeMethod);
  }
  ppvVar1 = &self->_imgTitleRectTransform;
  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    pvVar5 = self->m_trans_GameTop;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
    pvVar5 = (void *)0x0;
    if (bVar3) {
      if (self->m_trans_GameTop == (void *)0x0) goto LAB_019f4ef0;
      pvVar5 = UnityEngine_Transform_Find_325c35c
                         (self->m_trans_GameTop,*(void **)PTR_DAT_0386abc0,(void *)0x0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
    pvVar4 = (void *)0x0;
    if (bVar3) {
      if (pvVar5 == (void *)0x0) {
LAB_019f4ef0:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      pvVar4 = UnityEngine_Component_GetComponent_1b08498(pvVar5,*(void **)PTR_DAT_03865028);
    }
    *ppvVar1 = pvVar4;
    NativeHelper_017ef228(ppvVar1);
  }
  return *ppvVar1;
}

