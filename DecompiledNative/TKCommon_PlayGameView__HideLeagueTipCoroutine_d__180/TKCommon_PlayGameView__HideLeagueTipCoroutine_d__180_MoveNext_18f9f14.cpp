// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019fdf14; ELF VA: 0x18fdf14; file offset: 0x18f9f14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool TKCommon_PlayGameView__HideLeagueTipCoroutine_d__180_MoveNext_18f9f14
               (TKCommon_PlayGameView__HideLeagueTipCoroutine_d__180 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *extraout_x1;
  TKCommon_PlayGameView *pTVar6;
  void *pvVar7;
  float fVar8;
  Recovered_Rect RVar9;
  
  if ((bRam0000000003ab25f1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386ae68);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_0386ace0);
    NativeHelper_017ef284(PTR_DAT_0386a8e8);
    NativeHelper_017ef284(PTR_DAT_0386a890);
    NativeHelper_017ef284(PTR_DAT_03866ef0);
    bRam0000000003ab25f1 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_03866ef0;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    fVar8 = self->delay;
    self->__1__state = -1;
    pvVar7 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
    UnityEngine_WaitForSecondsRealtime_WaitForSecondsRealtime_32556e4(pvVar7,fVar8,(void *)0x0);
    self->__2__current = pvVar7;
    NativeHelper_017ef228(&self->__2__current,pvVar7);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pTVar6 = self->__4__this;
    self->__1__state = -1;
    if (pTVar6 == (TKCommon_PlayGameView *)0x0) {
LAB_019fe0f8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    pvVar7 = pTVar6->m_trans_Tip;
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
    if (bVar3) {
      if (pvVar7 == (void *)0x0) goto LAB_019fe0f8;
      fVar8 = (pTVar6->_leagueTipOriginPos).component0;
      RVar9 = UnityEngine_RectTransform_get_rect_32592ec(pvVar7,(void *)0x0);
      uVar4 = NativeHelper_019669d0
                        (fVar8 + RVar9.component2,_UNK_00a47794,RVar9.component2,RVar9.component3,
                         pvVar7,0,0);
      uVar4 = NativeHelper_01d6fa88(uVar4,5,*(undefined8 *)PTR_DAT_0386a8e8);
      uVar4 = NativeHelper_01d70168(uVar4,1,*(undefined8 *)PTR_DAT_0386a890);
      uVar5 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866068);
      NativeHelper_01a4f8cc(uVar5,pTVar6,*(undefined8 *)PTR_DAT_0386ae68,0);
      NativeHelper_01d6f2e8(uVar4,uVar5,*(undefined8 *)PTR_DAT_0386ace0);
    }
    pTVar6->_leagueTipCoroutine = (void *)0x0;
    NativeHelper_017ef228(&pTVar6->_leagueTipCoroutine,0);
  }
  return iVar1 == 0;
}

