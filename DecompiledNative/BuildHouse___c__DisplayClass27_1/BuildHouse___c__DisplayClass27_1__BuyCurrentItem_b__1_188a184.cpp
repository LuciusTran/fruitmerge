// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <BuyCurrentItem>b__1() { }
// Ghidra address: 0198e184; ELF VA: 0x188e184; file offset: 0x188a184
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse___c__DisplayClass27_1__BuyCurrentItem_b__1_188a184(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  Game_UserData *pGVar10;
  DataManager *self;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  longlong lStack_68;
  longlong lStack_58;
  
  if ((bRam0000000003ab2158 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038679a8);
    NativeHelper_017ef284(PTR_DAT_038678a0);
    NativeHelper_017ef284(PTR_DAT_038679b0);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_038679b8);
    NativeHelper_017ef284(PTR_DAT_03867978);
    NativeHelper_017ef284(PTR_DAT_038678f0);
    bRam0000000003ab2158 = 1;
  }
  puVar6 = PTR_DAT_03867978;
  puVar5 = PTR_DAT_0385e750;
  puVar4 = PTR_DAT_0385d098;
  puVar3 = PTR_DAT_0385ccb0;
  puVar1 = PTR_DAT_0385cca8;
  lStack_58 = 0;
  if (((*(long *)(param_1 + 0x18) != 0) &&
      (lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar12 != 0)) &&
     (lVar12 = *(long *)(lVar12 + 0x40), lVar12 != 0)) {
    pvVar8 = (void *)NativeHelper_02aa70d0
                               (*(undefined8 *)PTR_DAT_038678f0,*(undefined8 *)(lVar12 + 0x10),
                                *(undefined8 *)PTR_DAT_0385d098,*(undefined8 *)(param_1 + 0x10),0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar8,1,(void *)0x0);
    pvVar8 = (void *)NativeHelper_02a9c49c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar6,0);
    UnityEngine_PlayerPrefs_DeleteKey_324686c(pvVar8,(void *)0x0);
    NativeHelper_0334aa10(0);
    pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar5);
    lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar1);
    NativeHelper_02132ae8(lVar12,*(undefined8 *)puVar3);
    if (((*(long *)(param_1 + 0x18) != 0) &&
        (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar13 != 0)) &&
       ((lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0 &&
        (uVar9 = NativeHelper_02aa6b6c
                           (*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar4,
                            *(undefined8 *)(param_1 + 0x10),0), puVar6 = PTR_DAT_038679b8,
        puVar3 = PTR_DAT_0385db10, puVar1 = PTR_DAT_0385ccb8, lVar12 != 0)))) {
      NativeHelper_02133494
                (lVar12,*(undefined8 *)PTR_DAT_038679b8,uVar9,*(undefined8 *)PTR_DAT_0385ccb8);
      pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
      puVar7 = PTR_DAT_038679b0;
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar13 != 0)) &&
         ((lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0 && (pGVar10 != (Game_UserData *)0x0)))) {
        lStack_58 = Game_UserData_GetRoomTaskUseTime_18cd990
                              (pGVar10,*(void **)(lVar13 + 0x10),*(void **)(param_1 + 0x10),
                               (void *)0x0);
        uVar9 = NativeHelper_02c0e330(&lStack_58,0);
        NativeHelper_02133494(lVar12,*(undefined8 *)puVar7,uVar9,*(undefined8 *)puVar1);
        puVar2 = PTR_DAT_0385ca30;
        puVar1 = PTR_DAT_0385ca28;
        if (pvVar8 != (void *)0x0) {
          EventLogger_LogEvent_1888558(pvVar8,*(undefined8 *)puVar6,lVar12,0);
          pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar5);
          lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar2);
          NativeHelper_02132ae8(lVar12,*(undefined8 *)puVar1);
          if ((((*(long *)(param_1 + 0x18) != 0) &&
               (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar13 != 0)) &&
              (lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0)) &&
             (uVar9 = NativeHelper_02aa6b6c
                                (*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)puVar4,
                                 *(undefined8 *)(param_1 + 0x10),0), puVar1 = PTR_DAT_0385ca48,
             lVar12 != 0)) {
            NativeHelper_02133494
                      (lVar12,*(undefined8 *)puVar6,uVar9,*(undefined8 *)PTR_DAT_0385ca48);
            pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
            if (((*(long *)(param_1 + 0x18) != 0) &&
                (lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar13 != 0)) &&
               ((lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0 && (pGVar10 != (Game_UserData *)0x0)
                ))) {
              lStack_68 = Game_UserData_GetRoomTaskUseTime_18cd990
                                    (pGVar10,*(void **)(lVar13 + 0x10),*(void **)(param_1 + 0x10),
                                     (void *)0x0);
              uVar9 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x68),&lStack_68);
              uVar9 = NativeHelper_02133494
                                (lVar12,*(undefined8 *)puVar7,uVar9,*(undefined8 *)puVar1);
              puVar1 = PTR_DAT_0385d9d8;
              if (pvVar8 != (void *)0x0) {
                EventLogger_TkLogEvent_1888ca0(uVar9,*(undefined8 *)puVar6,lVar12,0);
                self = Singleton_get_Instance_27784f4(*(void **)puVar1);
                if (self != (DataManager *)0x0) {
                  DataManager_UpdateDailyTaskProgress_1809ddc(self,10,1,-1,(void *)0x0);
                  if ((*(long *)(param_1 + 0x18) != 0) &&
                     (lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar12 != 0)) {
                    puVar11 = (undefined8 *)(lVar12 + 0x58);
                    *puVar11 = 0;
                    NativeHelper_017ef228(puVar11,0);
                    if ((*(long *)(param_1 + 0x18) != 0) &&
                       ((lVar12 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar12 != 0 &&
                        (lVar12 = *(long *)(lVar12 + 0x50), lVar12 != 0)))) {
                      NativeHelper_02891e18(lVar12,*(undefined8 *)PTR_DAT_038679a8);
                      lVar12 = *(long *)(param_1 + 0x18);
                      if ((lVar12 != 0) &&
                         (((lVar13 = *(long *)(lVar12 + 0x10), lVar13 != 0 &&
                           (*(long *)(lVar13 + 0x50) != 0)) &&
                          (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)))) {
                        (**(code **)(lVar12 + 0x18))
                                  (*(undefined8 *)(lVar12 + 0x40),1,
                                   *(int *)(lVar13 + 0x48) -
                                   *(int *)(*(long *)(lVar13 + 0x50) + 0x18),*(int *)(lVar13 + 0x48)
                                   ,*(undefined8 *)(lVar12 + 0x28));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

