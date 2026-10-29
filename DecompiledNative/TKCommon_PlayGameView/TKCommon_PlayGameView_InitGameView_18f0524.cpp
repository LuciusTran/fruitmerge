// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void InitGameView() { }
// Ghidra address: 019f4524; ELF VA: 0x18f4524; file offset: 0x18f0524
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_InitGameView_18f0524(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  Game_UserData *pGVar4;
  undefined8 uVar5;
  void *runtimeMethod_00;
  long *plVar6;
  
  if ((bRam0000000003ab25b0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25b0 = 1;
  }
  if ((self->m_trans_PlayGame != (void *)0x0) &&
     (lVar3 = NativeHelper_0334f4c8(self->m_trans_PlayGame,0), puVar1 = PTR_DAT_0385db10, lVar3 != 0
     )) {
    NativeHelper_0335236c(lVar3,1,0);
    pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar4 != (Game_UserData *)0x0) {
      iVar2 = Game_UserData_GetHistoryScore_18c9a14(pGVar4,(void *)0x0);
      runtimeMethod_00 = *(void **)puVar1;
      self->mHistoryScore = iVar2;
      pGVar4 = Singleton_get_Instance_27784f4(runtimeMethod_00);
      if (pGVar4 != (Game_UserData *)0x0) {
        iVar2 = Game_UserData_GetCurrentScore_18c9ab0(pGVar4,(void *)0x0);
        self->mCurrentScore = iVar2;
        plVar6 = self->m_txt_HistoryScore;
        uVar5 = NativeHelper_02c0d29c(&self->mHistoryScore,0);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x5f0));
          plVar6 = self->m_txt_Score;
          uVar5 = NativeHelper_02c0d29c(&self->mCurrentScore,0);
          if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019f58f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x5e8))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x5f0));
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

