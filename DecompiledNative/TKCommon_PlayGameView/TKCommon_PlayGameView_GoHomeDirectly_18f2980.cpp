// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GoHomeDirectly(int ticket, bool allowJumpToRoomBuild) { }
// Ghidra address: 019f6980; ELF VA: 0x18f6980; file offset: 0x18f2980
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_GoHomeDirectly_18f2980
               (TKCommon_PlayGameView *self,int ticket,bool allowJumpToRoomBuild,void *runtimeMethod
               )

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  Game_UserData *self_00;
  long lVar4;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  
  puVar1 = PTR_DAT_0386ac28;
  if ((bRam0000000003ab25ac & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386ac30);
    NativeHelper_017ef284(PTR_DAT_0386ac28);
    bRam0000000003ab25ac = 1;
  }
  lVar3 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar3,0);
  puVar1 = PTR_DAT_0385db10;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = self;
    NativeHelper_017ef228((undefined8 *)(lVar3 + 0x10),self);
    *(bool *)(lVar3 + 0x18) = allowJumpToRoomBuild;
    *(int *)(lVar3 + 0x1c) = ticket;
    TKCommon_PlayGameView_RefreshCurrentScore_18f2ad0(self,runtimeMethod_00);
    TKCommon_PlayGameView_QuitGame_18f2b2c(self,runtimeMethod_01);
    self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    puVar2 = PTR_DAT_0386ac30;
    puVar1 = PTR_DAT_0385c9f8;
    if (self_00 != (Game_UserData *)0x0) {
      Game_UserData_IncrementGamesWithoutBuild_18c9ef8(self_00,(void *)0x0);
      lVar4 = NativeHelper_017ef520(*(undefined8 *)puVar1);
      NativeHelper_02b8e36c(lVar4,lVar3,*(undefined8 *)puVar2,0);
      if (self->_IsShowGame_k__BackingField == false) {
        return;
      }
      self->_IsShowGame_k__BackingField = false;
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x019f6aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

