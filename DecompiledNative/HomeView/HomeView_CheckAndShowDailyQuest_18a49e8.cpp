// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CheckAndShowDailyQuest() { }
// Ghidra address: 019a89e8; ELF VA: 0x18a89e8; file offset: 0x18a49e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_CheckAndShowDailyQuest_18a49e8(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  DataManager *self_00;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0385d9d8;
  if ((bRam0000000003ab227f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    bRam0000000003ab227f = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (self_00 == (DataManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  bVar2 = DataManager_HasAnyDailyQuestRewardToClaim_1809fa0(self_00,(void *)0x0);
  if (!bVar2) {
    return;
  }
  lVar3 = NativeHelper_019a8c78();
  if (lVar3 == 0) {
    NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
    uVar5 = NativeHelper_017ef520();
    uVar6 = NativeHelper_017ef298(PTR_DAT_038a78d0);
    NativeHelper_02c12308(uVar5,uVar6,0);
  }
  else {
    uVar4 = NativeHelper_03353b80();
    if ((uVar4 & 1) != 0) {
      if ((bRam0000000003abb84f & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a7898);
        bRam0000000003abb84f = 1;
      }
      if (self != (HomeView *)0x0) {
        lVar7 = *(long *)&self->field_0x10;
        if (lVar7 != 0) {
          if (pcRam0000000003abb8c0 == (code *)0x0) {
            pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
          }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003abb8c0)(lVar7,lVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8();
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    NativeHelper_017ef298(PTR_DAT_03865620);
    uVar5 = NativeHelper_017ef520();
    uVar6 = NativeHelper_017ef298(PTR_DAT_038a78b8);
    NativeHelper_02b8eaa8(uVar5,uVar6,0);
  }
  uVar6 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef3f4(uVar5,uVar6);
}

