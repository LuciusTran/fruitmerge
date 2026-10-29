// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CacheSubscriptionIcon() { }
// Ghidra address: 019f60f4; ELF VA: 0x18f60f4; file offset: 0x18f20f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_CacheSubscriptionIcon_18f20f4
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  void **ppvVar1;
  void **ppvVar2;
  undefined *puVar3;
  bool bVar4;
  void *extraout_x1;
  void *pvVar5;
  
  puVar3 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab25a6 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03868608);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab25a6 = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar5 = self->m_trans_RemoveAd;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar3,runtimeMethod);
  }
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar4) {
    pvVar5 = self->_removeAdIconImage;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    ppvVar1 = &self->_removeAdIconImage;
    bVar4 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar4) {
      if (self->m_trans_RemoveAd == (void *)0x0) goto LAB_019f6238;
      pvVar5 = UnityEngine_Component_GetComponent_1b08498
                         (self->m_trans_RemoveAd,*(void **)PTR_DAT_03868608);
      *ppvVar1 = pvVar5;
      NativeHelper_017ef228(ppvVar1,pvVar5);
    }
    pvVar5 = self->_subscriptionIconSprite;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar4 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar4) {
      pvVar5 = *ppvVar1;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
      if (bVar4) {
        if (*ppvVar1 != (void *)0x0) {
          ppvVar2 = &self->_subscriptionIconSprite;
          *ppvVar2 = *(void **)((long)*ppvVar1 + 0xd8);
          if (iRam0000000003cd3780 != 0) {
            func_0x018dcb10(1L << ((ulong)ppvVar2 >> 0xc & 0x3f),
                            ((ulong)ppvVar2 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
          }
          return;
        }
LAB_019f6238:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
  }
  return;
}

