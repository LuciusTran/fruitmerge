// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdateScore(int score) { }
// Ghidra address: 019f5930; ELF VA: 0x18f5930; file offset: 0x18f1930
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_UpdateScore_18f1930
               (TKCommon_PlayGameView *self,int score,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Game_UserData *self_00;
  long *plVar4;
  
  if ((bRam0000000003ab25a0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25a0 = 1;
  }
  iVar1 = self->mCurrentScore + score;
  self->mCurrentScore = iVar1;
  puVar2 = PTR_DAT_0385db10;
  if (self->mHistoryScore < iVar1) {
    self->mHistoryScore = iVar1;
    self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (self_00 == (Game_UserData *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    Game_UserData_SetHistoryScore_18c997c(self_00,self->mHistoryScore,(void *)0x0);
  }
  plVar4 = self->m_txt_HistoryScore;
  uVar3 = NativeHelper_02c0d29c(&self->mHistoryScore,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5f0));
    plVar4 = self->m_txt_Score;
    uVar3 = NativeHelper_02c0d29c(&self->mCurrentScore,0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x019f58f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x5f0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

