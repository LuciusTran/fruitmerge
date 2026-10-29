// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019fe148; ELF VA: 0x18fe148; file offset: 0x18fa148
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView__RefreshDescPosCoroutine_d__116_MoveNext_18fa148
               (TKCommon_PlayGameView__RefreshDescPosCoroutine_d__116 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  void *pvVar4;
  TKCommon_PlayGameView *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Recovered_Vector3 RVar10;
  Recovered_Vector3 RVar11;
  
  if ((bRam0000000003ab25f2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038661f0);
    NativeHelper_017ef284(PTR_DAT_0385d8b0);
    bRam0000000003ab25f2 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_0385d8b0;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
    UnityEngine_WaitForEndOfFrame_WaitForEndOfFrame_32555d8(pvVar3,(void *)0x0);
    self->__2__current = pvVar3;
    NativeHelper_017ef228(&self->__2__current,pvVar3);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pTVar5 = self->__4__this;
    self->__1__state = -1;
    puVar2 = PTR_DAT_038661f0;
    if (pTVar5 != (TKCommon_PlayGameView *)0x0) {
      pvVar4 = pTVar5->m_trans_Clean;
      pvVar3 = (void *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_038661f0,4);
      if ((pvVar4 != (void *)0x0) &&
         (UnityEngine_RectTransform_GetWorldCorners_325a14c(pvVar4,pvVar3,(void *)0x0),
         pvVar3 != (void *)0x0)) {
        if ((*(uint *)((long)pvVar3 + 0x18) & 0xfffffffe) != 0) {
          fVar8 = *(float *)((long)pvVar3 + 0x30);
          fVar9 = *(float *)((long)pvVar3 + 0x24);
          pvVar4 = pTVar5->m_trans_DescBg;
          pvVar3 = (void *)NativeHelper_017ef374(*(undefined8 *)puVar2,4);
          if ((pvVar4 == (void *)0x0) ||
             (UnityEngine_RectTransform_GetWorldCorners_325a14c(pvVar4,pvVar3,(void *)0x0),
             pvVar3 == (void *)0x0)) goto LAB_019fe2d4;
          if ((*(uint *)((long)pvVar3 + 0x18) & 0xfffffffe) != 0) {
            fVar6 = *(float *)((long)pvVar3 + 0x30);
            fVar7 = *(float *)((long)pvVar3 + 0x24);
            RVar10 = UnityEngine_Transform_get_position_325a714(pvVar4,(void *)0x0);
            RVar11 = UnityEngine_Transform_get_position_325a714(pvVar4,(void *)0x0);
            RVar11.component1 = (fVar8 + fVar9) * 0.5 + RVar10.component1 + (fVar6 + fVar7) * -0.5;
            UnityEngine_Transform_set_position_325a7e8(pvVar4,RVar11,(void *)0x0);
            goto LAB_019fe2b8;
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
    }
LAB_019fe2d4:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_019fe2b8:
  return iVar1 == 0;
}

