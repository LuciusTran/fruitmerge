// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CacheGameTopOriginPosition() { }
// Ghidra address: 019f4b7c; ELF VA: 0x18f4b7c; file offset: 0x18f0b7c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_CacheGameTopOriginPosition_18f0b7c
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  bool bVar1;
  void *extraout_x1;
  void *x;
  Recovered_Vector2 RVar2;
  
  if ((bRam0000000003ab2594 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2594 = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->_hasGameTopOriginPosition == false) {
    x = self->m_trans_GameTop;
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0,runtimeMethod);
    }
    bVar1 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
    if (!bVar1) {
      if (self->m_trans_GameTop == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      RVar2 = UnityEngine_RectTransform_get_anchoredPosition_32596c4
                        (self->m_trans_GameTop,(void *)0x0);
      self->_gameTopOriginPosition = RVar2;
      self->_hasGameTopOriginPosition = true;
    }
  }
  return;
}

