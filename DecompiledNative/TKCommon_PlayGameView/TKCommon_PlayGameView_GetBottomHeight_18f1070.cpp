// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public float GetBottomHeight() { }
// Ghidra address: 019f5070; ELF VA: 0x18f5070; file offset: 0x18f1070
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


float TKCommon_PlayGameView_GetBottomHeight_18f1070(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  void *self_00;
  Recovered_Vector2 RVar1;
  Recovered_Rect RVar2;
  
  if ((bRam0000000003ab259a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865028);
    bRam0000000003ab259a = 1;
  }
  if ((self->m_trans_GameBottom != (void *)0x0) &&
     (self_00 = UnityEngine_Component_GetComponent_1b08498
                          (self->m_trans_GameBottom,*(void **)PTR_DAT_03865028),
     self_00 != (void *)0x0)) {
    RVar2 = UnityEngine_RectTransform_get_rect_32592ec(self_00,(void *)0x0);
    RVar1 = UnityEngine_RectTransform_get_offsetMin_3259ccc(self_00,(void *)0x0);
    return RVar2.component3 + RVar1.component1;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

