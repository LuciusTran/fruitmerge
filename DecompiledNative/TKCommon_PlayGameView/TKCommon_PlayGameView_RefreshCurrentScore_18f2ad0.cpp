// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshCurrentScore() { }
// Ghidra address: 019f6ad0; ELF VA: 0x18f6ad0; file offset: 0x18f2ad0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_RefreshCurrentScore_18f2ad0
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  Game_UserData *self_00;
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25b1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25b1 = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (self_00 != (Game_UserData *)0x0) {
    iVar2 = Game_UserData_GetCurrentScore_18c9ab0(self_00,(void *)0x0);
    self->mCurrentScore = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

