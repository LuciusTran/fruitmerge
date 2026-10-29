// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal virtual void Show() { }
// Ghidra address: 019a59d0; ELF VA: 0x18a59d0; file offset: 0x18a19d0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomePage_Show_18a19d0(HomePage *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  void *runtimeMethod_00;
  void *pvVar4;
  void *pvVar5;
  Game_UserData *self_00;
  long lVar6;
  void *extraout_x1;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *in_x2;
  
  if ((bRam0000000003ab225b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865028);
    bRam0000000003ab225b = 1;
    runtimeMethod = extraout_x1;
  }
  MainBasePage_Show_18a11d0((MainBasePage *)self,runtimeMethod);
  pvVar4 = SafeAreaManager_get_Instance_18a1a60(runtimeMethod_00);
  pvVar5 = (void *)NativeHelper_0334f400(self,0);
  if ((pvVar5 == (void *)0x0) ||
     (pvVar5 = UnityEngine_Component_GetComponent_1b08498(pvVar5,*(void **)PTR_DAT_03865028),
     pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  SafeAreaManager_ApplyTopSafeAreaToRectTransform_18a1b8c(pvVar5,pvVar5,-30.0,in_x2);
  HomePage_RefreshRemoveAd_18a1c74(self,runtimeMethod_01);
  HomePage_RefreshStartPack_18a1da4(self,runtimeMethod_02);
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2260 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab2260 = 1;
  }
  pvVar4 = self->m_DailyRewardButton;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar4,(void *)0x0,(void *)0x0);
  if (bVar2) {
    self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (self_00 != (Game_UserData *)0x0) {
      iVar3 = Game_UserData_GetClaimedDailyRewardDay_18ce554(self_00,(void *)0x0);
      if ((self->m_DailyRewardButton != (void *)0x0) &&
         (lVar6 = NativeHelper_0334f4c8(self->m_DailyRewardButton,0), lVar6 != 0)) {
        if ((bRam0000000003abb79b & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a76a8,iVar3 < 0xf,0);
          bRam0000000003abb79b = 1;
        }
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 != 0) {
            if (pcRam0000000003abb800 == (code *)0x0) {
              pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
            }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abb800)(lVar6,iVar3 < 0xf);
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_0334bff8();
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return;
}

