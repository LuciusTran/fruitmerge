// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnBtnCancel() { }
// Ghidra address: 019fc288; ELF VA: 0x18fc288; file offset: 0x18f8288
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_OnBtnCancel_18f8288(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  LocalNotification_Action *completeAction;
  MergeFruit *self_00;
  long lVar4;
  void *runtimeMethod_00;
  
  self_00 = self->mMergeFruit;
  if (self_00 == (MergeFruit *)0x0) goto LAB_019fc338;
  iVar1 = self_00->_gameState;
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      MergeFruit_CancelUseClean_187e9ec(self_00,(void *)0x0);
    }
    else {
      if (iVar1 != 2) goto TKCommon_PlayGameView_ShowTop_18f7eb8;
      MergeFruit_CancelUseUpgrade_187eb74(self_00,(void *)0x0);
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        if ((self->m_trans_shakeGuide != (void *)0x0) &&
           (lVar4 = NativeHelper_0334f4c8(self->m_trans_shakeGuide,0), lVar4 != 0)) {
          NativeHelper_0335236c(lVar4,0,0);
          if (self->mMergeFruit != (MergeFruit *)0x0) {
            MergeFruit_CancelUseShake_187f6f4(self->mMergeFruit,(void *)0x0);
            goto TKCommon_PlayGameView_ShowTop_18f7eb8;
          }
        }
        goto LAB_019fc338;
      }
      goto TKCommon_PlayGameView_ShowTop_18f7eb8;
    }
    MergeFruit_CancelUseBomb_187ecbc(self_00,(void *)0x0);
  }
  if (self->_fruitCamera == (void *)0x0) {
LAB_019fc338:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  UnityEngine_Behaviour_set_enabled_324ac04(self->_fruitCamera,false,(void *)0x0);
TKCommon_PlayGameView_ShowTop_18f7eb8:
  puVar3 = PTR_DAT_0386ade0;
  puVar2 = PTR_DAT_0385c9f8;
  if ((bRam0000000003ab25da & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0386ade0);
    bRam0000000003ab25da = 1;
  }
  completeAction = (LocalNotification_Action *)NativeHelper_017ef520(*(undefined8 *)puVar2);
  runtimeMethod_00 = *(void **)puVar3;
  NativeHelper_02b8e36c(completeAction,self,runtimeMethod_00,0);
  TKCommon_PlayGameView_CloseToolDescriptionAnim_18f7f44(self,completeAction,runtimeMethod_00);
  if (pcRam0000000003abbbe8 == (code *)0x0) {
    pcRam0000000003abbbe8 = (code *)NativeHelper_017ef240(&UNK_00a537f7);
  }
                    /* WARNING: Could not recover jumptable at 0x0335b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abbbe8)(0x3f800000);
  return;
}

