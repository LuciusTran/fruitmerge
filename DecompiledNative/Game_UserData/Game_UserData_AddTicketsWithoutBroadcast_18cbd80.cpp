// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddTicketsWithoutBroadcast(int num) { }
// Ghidra address: 019cfd80; ELF VA: 0x18cfd80; file offset: 0x18cbd80
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0190deb8) */
/* WARNING: Removing unreachable block (ram,0x0190dec4) */
/* WARNING: Removing unreachable block (ram,0x0190ded8) */
/* WARNING: Removing unreachable block (ram,0x0190decc) */
/* WARNING: Removing unreachable block (ram,0x0190ded4) */

void Game_UserData_AddTicketsWithoutBroadcast_18cbd80
               (Game_UserData *self,int num,void *runtimeMethod)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  DataManager *self_00;
  void *runtimeMethod_00;
  DailyQuestData *pDVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = PTR_DAT_03869bd8;
  puVar3 = PTR_DAT_0385d9d8;
  pvVar6 = (void *)(ulong)(uint)num;
  if ((bRam0000000003ab2434 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    auVar9 = NativeHelper_017ef284(PTR_DAT_03869bd8);
    pvVar6 = auVar9._8_8_;
    self = auVar9._0_8_;
    bRam0000000003ab2434 = 1;
  }
  iVar5 = Game_UserData_GetTickets_18ca33c(self,pvVar6);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar4,iVar5 + num,(void *)0x0);
  NativeHelper_0334aa10(0);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar3);
  if (self_00 != (DataManager *)0x0) {
    if ((bRam0000000003ab1e2b & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385dd48);
      NativeHelper_017ef284(PTR_DAT_0385dd58);
      NativeHelper_017ef284(PTR_DAT_0385dd68);
      NativeHelper_017ef284(PTR_DAT_0385dda0);
      bRam0000000003ab1e2b = 1;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    lStack_48 = 0;
    if (((self_00->gameAchiveMain != (GameAchiveMain *)0x0) &&
        (pDVar8 = self_00->gameAchiveMain->dailyQuest, pDVar8 != (DailyQuestData *)0x0)) &&
       (pvVar6 = pDVar8->dailyTask, pvVar6 != (void *)0x0)) {
      NativeHelper_0256a338(&uStack_58,pvVar6,*(undefined8 *)PTR_DAT_0385dda0);
      puVar3 = PTR_DAT_0385dd58;
      bVar2 = false;
      while (uVar7 = NativeHelper_02240184(&uStack_58,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        if (*(int *)(lStack_48 + 0x20) == 9) {
          iVar5 = *(int *)(lStack_48 + 0x18);
          if (*(int *)(lStack_48 + 0x28) < iVar5) {
            iVar1 = *(int *)(lStack_48 + 0x28) + num;
            bVar2 = true;
            if (iVar5 <= iVar1) {
              iVar1 = iVar5;
            }
            *(int *)(lStack_48 + 0x28) = iVar1;
          }
        }
      }
      NativeHelper_02240180(&uStack_58,*(undefined8 *)PTR_DAT_0385dd48);
      if (bVar2) {
        DataManager_SaveDailyQuestSaveData_1808f94(self_00,runtimeMethod_00);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

