// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshDailyRewardButton() { }
// Ghidra address: 019a5e38; ELF VA: 0x18a5e38; file offset: 0x18a1e38
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomePage_RefreshDailyRewardButton_18a1e38(HomePage *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  Game_UserData *self_00;
  long lVar4;
  void *extraout_x1;
  void *x;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2260 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab2260 = 1;
    runtimeMethod = extraout_x1;
  }
  x = self->m_DailyRewardButton;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
  if (bVar2) {
    self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (self_00 != (Game_UserData *)0x0) {
      iVar3 = Game_UserData_GetClaimedDailyRewardDay_18ce554(self_00,(void *)0x0);
      if ((self->m_DailyRewardButton != (void *)0x0) &&
         (lVar4 = NativeHelper_0334f4c8(self->m_DailyRewardButton,0), lVar4 != 0)) {
        if ((bRam0000000003abb79b & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a76a8,iVar3 < 0xf,0);
          bRam0000000003abb79b = 1;
        }
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            if (pcRam0000000003abb800 == (code *)0x0) {
              pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
            }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abb800)(lVar4,iVar3 < 0xf);
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

