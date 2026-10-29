// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private int GetTickets() { }
// Ghidra address: 019fa880; ELF VA: 0x18fa880; file offset: 0x18f6880
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int TKCommon_PlayGameView_GetTickets_18f6880(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  TKLClient_TKLSwitcherConfig *pTVar3;
  ulong uVar4;
  void *extraout_x1;
  long lVar5;
  int iVar6;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab25d4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386aa58);
    NativeHelper_017ef284(PTR_DAT_0386aa60);
    NativeHelper_017ef284(PTR_DAT_0386aa68);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0386aa70);
    bRam0000000003ab25d4 = 1;
    runtimeMethod = extraout_x1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  pTVar3 = Global_get_RemoteConfig_18048d8((void *)0x0);
  puVar2 = PTR_DAT_0386aa60;
  puVar1 = PTR_DAT_0386aa58;
  if ((pTVar3 == (TKLClient_TKLSwitcherConfig *)0x0) ||
     (pTVar3->FM_ScoreRange2Ticket == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  NativeHelper_0256a338(&uStack_58,pTVar3->FM_ScoreRange2Ticket,*(undefined8 *)PTR_DAT_0386aa70);
  lStack_30 = lStack_48;
  uStack_38 = puStack_50;
  uStack_40 = uStack_58;
  uStack_58 = 0;
  puStack_50 = &uStack_40;
  do {
    do {
      uVar4 = NativeHelper_02240184(&uStack_40,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        iVar6 = 0;
        goto LAB_019fa9a8;
      }
      if (lStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      lVar5 = *(long *)(lStack_30 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
    } while (self->mCurrentScore < *(int *)(lVar5 + 0x20));
    if (*(int *)(lVar5 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
  } while (*(int *)(lVar5 + 0x24) <= self->mCurrentScore);
  iVar6 = *(int *)(lStack_30 + 0x18);
LAB_019fa9a8:
  NativeHelper_02240180(&uStack_40,*(undefined8 *)puVar1);
  return iVar6;
}

