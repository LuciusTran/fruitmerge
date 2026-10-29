// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void OpenRank(Button button, string where) { }
// Ghidra address: 019a67a4; ELF VA: 0x18a67a4; file offset: 0x18a27a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0198cd64) */
/* WARNING: Removing unreachable block (ram,0x0198cd78) */
/* WARNING: Removing unreachable block (ram,0x0198cd8c) */

void HomePage_OpenRank_18a27a4(void *button,void *where,void *runtimeMethod)

{
  void *value;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  Game_UserData *pGVar9;
  TKLClient_TKLSwitcherConfig *pTVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  WebHelper *self;
  ulong uVar16;
  EventLogger *self_00;
  int *piVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  void *pvVar22;
  int iStack_38;
  int iStack_34;
  
  puVar1 = PTR_DAT_038687a0;
  if ((bRam0000000003ab2268 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d4c8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385de08);
    NativeHelper_017ef284(PTR_DAT_038687a8);
    NativeHelper_017ef284(PTR_DAT_038687a0);
    bRam0000000003ab2268 = 1;
  }
  lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar15,0);
  puVar1 = PTR_DAT_0385c2a0;
  if (lVar15 == 0) {
LAB_019a6968:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  plVar21 = (long *)(lVar15 + 0x10);
  *plVar21 = (long)button;
  NativeHelper_017ef228(plVar21,button);
  puVar18 = (undefined8 *)(lVar15 + 0x18);
  *puVar18 = where;
  NativeHelper_017ef228(puVar18,where);
  pvVar22 = (void *)*plVar21;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar22,(void *)0x0,(void *)0x0);
  if (bVar6) {
    if (*plVar21 == 0) goto LAB_019a6968;
    NativeHelper_036609c4(*plVar21,0,0);
  }
  puVar3 = PTR_DAT_0385de08;
  self = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385de08);
  if (self == (WebHelper *)0x0) goto LAB_019a6968;
  pvVar22 = WebHelper_get_tk_UserID_1881918(self,(void *)0x0);
  uVar16 = NativeHelper_02aa606c(pvVar22,0);
  if ((uVar16 & 1) == 0) {
    pvVar22 = Singleton_get_Instance_27784f4(*(void **)puVar3);
    lVar19 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385d4c8);
    NativeHelper_01efa3d0(lVar19,lVar15,*(undefined8 *)PTR_DAT_038687a8,0);
    puVar1 = PTR_DAT_03867608;
    if (pvVar22 == (void *)0x0) goto LAB_019a6968;
    if ((bRam0000000003ab2122 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385c2e0,lVar19,0);
      NativeHelper_017ef284(PTR_DAT_03867610);
      NativeHelper_017ef284(PTR_DAT_0385c360);
      NativeHelper_017ef284(PTR_DAT_0385d918);
      NativeHelper_017ef284(PTR_DAT_0385db10);
      NativeHelper_017ef284(PTR_DAT_03867618);
      NativeHelper_017ef284(PTR_DAT_03867620);
      NativeHelper_017ef284(PTR_DAT_03867608);
      NativeHelper_017ef284(PTR_DAT_038675d8);
      NativeHelper_017ef284(PTR_DAT_03867628);
      NativeHelper_017ef284(PTR_DAT_03867630);
      bRam0000000003ab2122 = 1;
    }
    lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar1);
    WebHelper___c__DisplayClass44_0___c__DisplayClass44_0_188328c(lVar15,0);
    puVar1 = PTR_DAT_0385db10;
    if (lVar15 != 0) {
      *(undefined8 *)(lVar15 + 0x10) = pvVar22;
      NativeHelper_017ef228((undefined8 *)(lVar15 + 0x10),pvVar22);
      plVar21 = (long *)(lVar15 + 0x18);
      *plVar21 = lVar19;
      NativeHelper_017ef228(plVar21,lVar19);
      pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      puVar3 = PTR_DAT_0385d918;
      if (pGVar9 != (Game_UserData *)0x0) {
        iVar7 = Game_UserData_GetHistoryScore_18c9a14(pGVar9,(void *)0x0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar3);
        }
        pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
        if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
          if (0 < pTVar10->FM_LeaderboardMaxScore) {
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
            puVar2 = PTR_DAT_0385c2d8;
            if (pTVar10 == (TKLClient_TKLSwitcherConfig *)0x0) goto code_r0x01986540;
            if (pTVar10->FM_LeaderboardMaxScore < iVar7) {
              iStack_34 = iVar7;
              uVar13 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_34);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                NativeHelper_017ef404(*(long *)puVar3);
              }
              pTVar10 = Global_get_RemoteConfig_18048d8((void *)0x0);
              if (pTVar10 != (TKLClient_TKLSwitcherConfig *)0x0) {
                iStack_38 = pTVar10->FM_LeaderboardMaxScore;
                uVar11 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_38);
                pvVar22 = (void *)NativeHelper_02aa74d0
                                            (*(undefined8 *)PTR_DAT_03867628,uVar13,uVar11,0);
                if (*(int *)(*(long *)PTR_DAT_0385c360 + 0xe4) == 0) {
                  NativeHelper_017ef404(*(long *)PTR_DAT_0385c360);
                }
                UnityEngine_Debug_Log_321dd14(pvVar22,(void *)0x0);
                lVar15 = *plVar21;
                if (lVar15 == 0) {
                  return;
                }
                (**(code **)(lVar15 + 0x18))
                          (*(undefined8 *)(lVar15 + 0x40),0,*(undefined8 *)(lVar15 + 0x28));
                return;
              }
              goto code_r0x01986540;
            }
          }
          bVar6 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)PTR_DAT_03867630,(void *)0x0);
          puVar3 = PTR_DAT_038675d8;
          if ((bVar6) &&
             (bVar6 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)PTR_DAT_038675d8,(void *)0x0)
             , bVar6)) {
            iVar7 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
            pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar1);
            if (pGVar9 == (Game_UserData *)0x0) goto code_r0x01986540;
            iVar8 = Game_UserData_GetHistoryScore_18c9a14(pGVar9,(void *)0x0);
            if (iVar7 == iVar8) {
              lVar15 = *plVar21;
              if (lVar15 == 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x019864c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar15 + 0x18))
                        (*(undefined8 *)(lVar15 + 0x40),1,*(undefined8 *)(lVar15 + 0x28));
              return;
            }
          }
          puVar2 = PTR_DAT_03867620;
          puVar3 = PTR_DAT_03867618;
          puVar1 = PTR_DAT_0385c2e0;
          lVar19 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867610);
          NativeHelper_020f6594(lVar19,lVar15,*(undefined8 *)puVar3,0);
          uVar13 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          NativeHelper_01efbaf0(uVar13,lVar15,*(undefined8 *)puVar2,0);
          puVar1 = PTR_DAT_03867638;
          if ((bRam0000000003ab2126 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_03867588);
            NativeHelper_017ef284(PTR_DAT_03867640);
            NativeHelper_017ef284(PTR_DAT_03867638);
            NativeHelper_017ef284(PTR_DAT_03867648);
            NativeHelper_017ef284(PTR_DAT_03867650);
            NativeHelper_017ef284(PTR_DAT_03867658);
            bRam0000000003ab2126 = 1;
          }
          lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          WebHelper___c__DisplayClass48_0___c__DisplayClass48_0_1883e48(lVar15,0);
          puVar1 = PTR_DAT_03867648;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          plVar21 = (long *)(lVar15 + 0x10);
          *plVar21 = lVar19;
          NativeHelper_017ef228(plVar21,lVar19);
          *(undefined8 *)(lVar15 + 0x18) = uVar13;
          NativeHelper_017ef228((undefined8 *)(lVar15 + 0x18),uVar13);
          bVar6 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)puVar1,(void *)0x0);
          if (bVar6) {
            pvVar22 = UnityEngine_PlayerPrefs_GetString_324669c(*(void **)puVar1,(void *)0x0);
            iVar7 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)PTR_DAT_03867650,(void *)0x0);
            lVar15 = *plVar21;
            if (lVar15 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x0198666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar15 + 0x18))
                      (*(undefined8 *)(lVar15 + 0x40),pvVar22,iVar7,*(undefined8 *)(lVar15 + 0x28));
            return;
          }
          uVar11 = *(undefined8 *)PTR_DAT_03867658;
          uVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867588);
          NativeHelper_020f5eb0(uVar13,lVar15,*(undefined8 *)PTR_DAT_03867640,0);
          lVar15 = NativeHelper_0198558c(pvVar22,uVar11,uVar13,*(undefined8 *)(lVar15 + 0x18));
          if (lVar15 == 0) {
            NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
            uVar11 = NativeHelper_017ef520();
            uVar13 = NativeHelper_017ef298(PTR_DAT_038a78d0);
            NativeHelper_02c12308(uVar11,uVar13,0);
          }
          else {
            uVar16 = NativeHelper_03353b80();
            if ((uVar16 & 1) != 0) {
              if ((bRam0000000003abb84f & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_038a7898);
                bRam0000000003abb84f = 1;
              }
              if (pvVar22 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
              lVar19 = *(long *)((long)pvVar22 + 0x10);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_0334bff8();
              }
              if (pcRam0000000003abb8c0 == (code *)0x0) {
                pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
              }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003abb8c0)(lVar19,lVar15);
              return;
            }
            NativeHelper_017ef298(PTR_DAT_03865620);
            uVar11 = NativeHelper_017ef520();
            uVar13 = NativeHelper_017ef298(PTR_DAT_038a78b8);
            NativeHelper_02b8eaa8(uVar11,uVar13,0);
          }
          uVar13 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef3f4(uVar11,uVar13);
        }
      }
    }
code_r0x01986540:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar22 = (void *)*plVar21;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar22,(void *)0x0,(void *)0x0);
  if (bVar6) {
    if (*plVar21 == 0) goto LAB_019a6968;
    NativeHelper_036609c4(*plVar21,1,0);
  }
  puVar3 = PTR_DAT_0385f448;
  puVar1 = PTR_DAT_0385c390;
  pvVar22 = (void *)*puVar18;
  if ((bRam0000000003ab226b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385f448);
    NativeHelper_017ef284(PTR_DAT_038687b0);
    NativeHelper_017ef284(PTR_DAT_0385db20);
    NativeHelper_017ef284(PTR_DAT_0385e920);
    bRam0000000003ab226b = 1;
  }
  uVar16 = NativeHelper_02aa606c(pvVar22,0);
  lVar19 = *(long *)puVar1;
  lVar15 = *(long *)(lVar19 + 0x38);
  value = *(void **)puVar3;
  if ((uVar16 & 1) == 0) {
    value = pvVar22;
  }
  if (lVar15 == 0) {
    NativeHelper_01827500(lVar19);
    lVar15 = *(long *)(lVar19 + 0x38);
  }
  lVar15 = *(long *)(lVar15 + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4();
  }
  if (*(int *)(lVar15 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar3 = PTR_DAT_038687b0;
  puVar1 = PTR_DAT_0385e750;
  lVar15 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
  if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
    lVar15 = NativeHelper_018274a4();
  }
  Game_Controller_FMViewController_ShowView_18d6f2c
            (*(void **)puVar3,false,(void *)**(undefined8 **)(lVar15 + 0xb8),(void *)0x0);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar5 = PTR_DAT_0385e920;
  puVar4 = PTR_DAT_0385db20;
  puVar2 = PTR_DAT_0385ca30;
  puVar3 = PTR_DAT_0385ca28;
  if (self_00 == (EventLogger *)0x0) {
LAB_019a6b5c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  EventLogger_LogEvent_189b15c
            (self_00,*(void **)PTR_DAT_0385db20,*(void **)PTR_DAT_0385e920,value,(void *)0x0,
             (void *)0x0);
  pvVar22 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  lVar15 = NativeHelper_017ef520(*(undefined8 *)puVar2);
  NativeHelper_02132ae8(lVar15,*(undefined8 *)puVar3);
  if ((lVar15 == 0) ||
     (NativeHelper_02133494(lVar15,*(undefined8 *)puVar5,value,*(undefined8 *)PTR_DAT_0385ca48),
     pvVar22 == (void *)0x0)) goto LAB_019a6b5c;
  lVar19 = *(long *)puVar4;
  if ((bRam0000000003ab221c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038679f8);
    NativeHelper_017ef284(PTR_DAT_03867a00);
    NativeHelper_017ef284(PTR_DAT_03867a08);
    NativeHelper_017ef284(PTR_DAT_0385de40);
    NativeHelper_017ef284(PTR_DAT_038679d0);
    NativeHelper_017ef284(PTR_DAT_03866d68);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_03867a10);
    NativeHelper_017ef284(PTR_DAT_03867a18);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_038679d8);
    NativeHelper_017ef284(PTR_DAT_038679e8);
    bRam0000000003ab221c = 1;
  }
  puVar1 = PTR_DAT_038679d0;
  lVar12 = *(long *)PTR_DAT_038679d0;
  if (lVar15 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar12 = *(long *)puVar1;
    }
    plVar20 = (long *)**(undefined8 **)(lVar12 + 0xb8);
    plVar21 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,1);
    if (plVar21 == (long *)0x0) goto code_r0x0198d074;
    if ((lVar19 != 0) &&
       (lVar12 = NativeHelper_017ef408(lVar19,*(undefined8 *)(*plVar21 + 0x40)), lVar12 == 0))
    goto code_r0x0198d07c;
    if ((int)plVar21[3] == 0) goto code_r0x0198d078;
    plVar21[4] = lVar19;
    NativeHelper_017ef228(plVar21 + 4,lVar19);
    if (plVar20 == (long *)0x0) goto code_r0x0198d074;
    lVar14 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    lVar12 = *(long *)PTR_DAT_03866d68;
    uVar13 = *(undefined8 *)PTR_DAT_038679e8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) goto code_r0x0198d004;
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
  }
  else {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar12 = *(long *)puVar1;
    }
    plVar20 = (long *)**(undefined8 **)(lVar12 + 0xb8);
    plVar21 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,3);
    if (plVar21 == (long *)0x0) goto code_r0x0198d074;
    if ((lVar19 != 0) &&
       (lVar12 = NativeHelper_017ef408(lVar19,*(undefined8 *)(*plVar21 + 0x40)), lVar12 == 0)) {
code_r0x0198d07c:
      uVar13 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar13,0);
    }
    if ((int)plVar21[3] == 0) {
code_r0x0198d078:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    plVar21[4] = lVar19;
    NativeHelper_017ef228(plVar21 + 4,lVar19);
    uVar13 = NativeHelper_0213315c(lVar15,*(undefined8 *)PTR_DAT_038679f8);
    uVar13 = NativeHelper_01c6ad88(uVar13,*(undefined8 *)PTR_DAT_0385de40);
    puVar1 = PTR_DAT_0385d098;
    lVar12 = NativeHelper_02aa78f4(*(undefined8 *)PTR_DAT_0385d098,uVar13,0);
    if ((lVar12 != 0) &&
       (lVar14 = NativeHelper_017ef408(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar14 == 0))
    goto code_r0x0198d07c;
    if ((*(uint *)(plVar21 + 3) & 0xfffffffe) == 0) goto code_r0x0198d078;
    plVar21[5] = lVar12;
    NativeHelper_017ef228(plVar21 + 5,lVar12);
    uVar13 = NativeHelper_021332b8(lVar15,*(undefined8 *)PTR_DAT_03867a00);
    uVar13 = NativeHelper_01c6ad88(uVar13,*(undefined8 *)PTR_DAT_03867a08);
    lVar12 = NativeHelper_02aa798c(*(undefined8 *)puVar1,uVar13,0);
    if ((lVar12 != 0) &&
       (lVar14 = NativeHelper_017ef408(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar14 == 0))
    goto code_r0x0198d07c;
    if (*(uint *)(plVar21 + 3) < 3) goto code_r0x0198d078;
    plVar21[6] = lVar12;
    NativeHelper_017ef228(plVar21 + 6,lVar12);
    if (plVar20 == (long *)0x0) goto code_r0x0198d074;
    lVar14 = *plVar20;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    lVar12 = *(long *)PTR_DAT_03866d68;
    uVar13 = *(undefined8 *)PTR_DAT_038679d8;
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) goto code_r0x0198d004;
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
  }
  puVar18 = (undefined8 *)NativeHelper_018277d8(plVar20,lVar12,5);
code_r0x0198d014:
  (*(code *)*puVar18)(plVar20,uVar13,plVar21,puVar18[1]);
  puVar1 = PTR_DAT_03867a10;
  if (*(int *)(*(long *)PTR_DAT_03867a18 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar12 = NativeHelper_028dee4c(*(undefined8 *)puVar1);
  if (lVar12 != 0) {
    if ((bRam0000000003ab93cb & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a0c48,lVar19,lVar15,0);
      bRam0000000003ab93cb = 1;
    }
    plVar21 = *(long **)(lVar12 + 0x10);
    if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    lVar12 = *plVar21;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_038a0c48) {
          puVar18 = (undefined8 *)(lVar12 + (long)(*piVar17 + 0xf) * 0x10 + 0x138);
          goto code_r0x032086a8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar18 = (undefined8 *)NativeHelper_018277d8(plVar21,*(long *)PTR_DAT_038a0c48,0xf);
code_r0x032086a8:
                    /* WARNING: Could not recover jumptable at 0x032086c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar18)(plVar21,lVar19,lVar15,puVar18[1]);
    return;
  }
code_r0x0198d074:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
code_r0x0198d004:
  puVar18 = (undefined8 *)(lVar14 + (long)(*piVar17 + 5) * 0x10 + 0x138);
  goto code_r0x0198d014;
}

