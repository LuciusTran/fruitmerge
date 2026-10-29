// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void TryGainRankSkin() { }
// Ghidra address: 019a8a60; ELF VA: 0x18a8a60; file offset: 0x18a4a60
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomeView_TryGainRankSkin_18a4a60(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  Game_UserData *pGVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  IAPItemManager *self_00;
  long *data;
  long lVar8;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *skinName;
  undefined1 auVar9 [16];
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab227e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038688b8);
    NativeHelper_017ef284(PTR_DAT_038688c0);
    bRam0000000003ab227e = 1;
  }
  pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar4 != (Game_UserData *)0x0) {
    iVar3 = Game_UserData_get_LastWeekRank_18d3f6c(pGVar4,(void *)0x0);
    pvVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pvVar5 != (void *)0x0) {
      skinName = *(void **)((long)pvVar5 + 0x48);
      auVar9 = NativeHelper_02aa606c(skinName,0);
      pvVar5 = auVar9._8_8_;
      if ((auVar9._0_8_ & 1) != 0) goto LAB_019a8c4c;
      pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar4 != (Game_UserData *)0x0) {
        auStack_24[0] = Game_UserData_IsUserHasSkin_18cf48c(pGVar4,skinName,(void *)0x0);
        uVar6 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x28),auStack_24);
        uVar6 = NativeHelper_02aa74d0(*(undefined8 *)PTR_DAT_038688b8,skinName,uVar6,0);
        NativeHelper_01919320(0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,uVar6,0);
        pvVar7 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pvVar7 != (void *)0x0) {
          pvVar5 = extraout_x1;
          if (*(int *)((long)pvVar7 + 0x40) < iVar3) {
LAB_019a8c4c:
            HomeView_CheckAndShowDailyQuest_18a49e8(self,pvVar5);
            return;
          }
          pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if (pGVar4 != (Game_UserData *)0x0) {
            bVar2 = Game_UserData_IsUserActuallyHasSkin_18cfd00(pGVar4,skinName,(void *)0x0);
            pvVar5 = extraout_x1_00;
            if (bVar2) goto LAB_019a8c4c;
            pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
            if (pGVar4 != (Game_UserData *)0x0) {
              Game_UserData_AddUserSkin_18d022c(pGVar4,skinName,(void *)0x0);
              self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d920);
              if (self_00 != (IAPItemManager *)0x0) {
                bVar2 = IAPItemManager_get_IsSubscriptionActive_1804360(self_00,(void *)0x0);
                pvVar5 = extraout_x1_01;
                if (!bVar2) {
                  data = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,1);
                  if (data == (long *)0x0) goto LAB_019a8c64;
                  if ((skinName != (void *)0x0) &&
                     (lVar8 = NativeHelper_017ef408(skinName,*(undefined8 *)(*data + 0x40)),
                     lVar8 == 0)) {
                    uVar6 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef3f4(uVar6,0);
                  }
                  if ((int)data[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef538();
                  }
                  data[4] = (long)skinName;
                  NativeHelper_017ef228(data + 4,skinName);
                  Game_Controller_FMViewController_ShowView_18d6f2c
                            (*(void **)PTR_DAT_038688c0,false,data,(void *)0x0);
                  pvVar5 = extraout_x1_02;
                }
                goto LAB_019a8c4c;
              }
            }
          }
        }
      }
    }
  }
LAB_019a8c64:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

