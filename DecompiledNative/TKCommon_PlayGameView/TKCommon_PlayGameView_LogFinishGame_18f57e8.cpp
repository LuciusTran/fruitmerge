// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LogFinishGame() { }
// Ghidra address: 019f97e8; ELF VA: 0x18f97e8; file offset: 0x18f57e8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_LogFinishGame_18f57e8(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  Game_UserData *pGVar13;
  undefined8 uVar14;
  Game_UserData *self_00;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *pvVar22;
  void *extraout_x1;
  void *runtimeMethod_00;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  puVar9 = PTR_DAT_0385db10;
  puVar6 = PTR_DAT_0385ccb0;
  puVar2 = PTR_DAT_0385cca8;
  puVar4 = PTR_DAT_0385ca30;
  puVar3 = PTR_DAT_0385ca28;
  if ((bRam0000000003ab25d3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c320);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386ad08);
    NativeHelper_017ef284(PTR_DAT_03869c58);
    NativeHelper_017ef284(PTR_DAT_0386ad10);
    NativeHelper_017ef284(PTR_DAT_0386ad18);
    NativeHelper_017ef284(PTR_DAT_0386ad20);
    NativeHelper_017ef284(PTR_DAT_03867230);
    NativeHelper_017ef284(PTR_DAT_0386ad28);
    NativeHelper_017ef284(PTR_DAT_03869e40);
    NativeHelper_017ef284(PTR_DAT_0386ad30);
    NativeHelper_017ef284(PTR_DAT_0386ad38);
    NativeHelper_017ef284(PTR_DAT_03869c88);
    NativeHelper_017ef284(PTR_DAT_03868890);
    NativeHelper_017ef284(PTR_DAT_03869c90);
    NativeHelper_017ef284(PTR_DAT_03868898);
    NativeHelper_017ef284(PTR_DAT_0386ad40);
    NativeHelper_017ef284(PTR_DAT_0386ad48);
    NativeHelper_017ef284(PTR_DAT_0386ad50);
    NativeHelper_017ef284(PTR_DAT_0386ad58);
    NativeHelper_017ef284(PTR_DAT_038670f8);
    NativeHelper_017ef284(PTR_DAT_03869ca8);
    NativeHelper_017ef284(PTR_DAT_0386ad60);
    NativeHelper_017ef284(PTR_DAT_0386ad68);
    NativeHelper_017ef284(PTR_DAT_0386ad70);
    NativeHelper_017ef284(PTR_DAT_03867aa8);
    NativeHelper_017ef284(PTR_DAT_0386ad78);
    NativeHelper_017ef284(PTR_DAT_0386ad80);
    NativeHelper_017ef284(PTR_DAT_03869d00);
    bRam0000000003ab25d3 = 1;
    runtimeMethod = extraout_x1;
  }
  iStack_70 = 0;
  uStack_6c = 0;
  iStack_68 = 0;
  iStack_64 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  iStack_7c = 0;
  lVar11 = NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
  NativeHelper_02132ae8(lVar11,*(undefined8 *)puVar6);
  lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02132ae8(lVar12,*(undefined8 *)puVar3);
  pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar9);
  if (pGVar13 != (Game_UserData *)0x0) {
    iStack_7c = Game_UserData_GetTotalLevels_18c9af8(pGVar13,(void *)0x0);
    uVar14 = NativeHelper_02c0d29c(&iStack_7c,0);
    puVar4 = PTR_DAT_0386ad30;
    puVar3 = PTR_DAT_0385ccb8;
    if (lVar11 != 0) {
      NativeHelper_02133494
                (lVar11,*(undefined8 *)PTR_DAT_0386ad30,uVar14,*(undefined8 *)PTR_DAT_0385ccb8);
      pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar9);
      if (pGVar13 != (Game_UserData *)0x0) {
        uStack_80 = Game_UserData_GetTotalLevels_18c9af8(pGVar13,(void *)0x0);
        puVar2 = PTR_DAT_0385c2d8;
        uVar14 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_80);
        if (lVar12 != 0) {
          NativeHelper_02133494(lVar12,*(undefined8 *)puVar4,uVar14,*(undefined8 *)PTR_DAT_0385ca48)
          ;
          pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar9);
          puVar4 = PTR_DAT_03867230;
          if (pGVar13 != (Game_UserData *)0x0) {
            iStack_7c = Game_UserData_GetTotalLevels_18c9af8(pGVar13,(void *)0x0);
            uVar14 = NativeHelper_02c0d29c(&iStack_7c,0);
            NativeHelper_02133494(lVar11,*(undefined8 *)puVar4,uVar14,*(undefined8 *)puVar3);
            pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar9);
            if (pGVar13 != (Game_UserData *)0x0) {
              iStack_84 = Game_UserData_GetTotalLevels_18c9af8(pGVar13,(void *)0x0);
              uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_84);
              NativeHelper_02133494
                        (lVar12,*(undefined8 *)puVar4,uVar14,*(undefined8 *)PTR_DAT_0385ca48);
              pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar9);
              self_00 = Singleton_get_Instance_27784f4(*(void **)puVar9);
              if (self_00 != (Game_UserData *)0x0) {
                iVar10 = Game_UserData_GetTotalLevels_18c9af8(self_00,(void *)0x0);
                puVar7 = PTR_DAT_0386ad28;
                puVar8 = PTR_DAT_0386ad10;
                puVar9 = PTR_DAT_03869ca8;
                puVar6 = PTR_DAT_03867aa8;
                puVar4 = PTR_DAT_0385d918;
                if (pGVar13 != (Game_UserData *)0x0) {
                  iStack_64 = Game_UserData_GetPlayLevelUseTime_18c9d20
                                        (pGVar13,iVar10 + -1,(void *)0x0);
                  uVar14 = NativeHelper_02c0d29c(&iStack_64,0);
                  NativeHelper_02133494(lVar11,*(undefined8 *)puVar6,uVar14,*(undefined8 *)puVar3);
                  iStack_88 = iStack_64;
                  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_88);
                  puVar5 = PTR_DAT_0385ca48;
                  NativeHelper_02133494
                            (lVar12,*(undefined8 *)puVar6,uVar14,*(undefined8 *)PTR_DAT_0385ca48);
                  uVar14 = NativeHelper_02c0d29c(&self->mCurrentScore,0);
                  NativeHelper_02133494(lVar11,*(undefined8 *)puVar8,uVar14,*(undefined8 *)puVar3);
                  iStack_8c = self->mCurrentScore;
                  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&iStack_8c);
                  NativeHelper_02133494(lVar12,*(undefined8 *)puVar8,uVar14,*(undefined8 *)puVar5);
                  lVar15 = *(long *)puVar4;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                    lVar15 = *(long *)puVar4;
                  }
                  uVar14 = NativeHelper_02c0d29c(*(long *)(lVar15 + 0xb8) + 0x1c,0);
                  NativeHelper_02133494(lVar11,*(undefined8 *)puVar9,uVar14,*(undefined8 *)puVar3);
                  uStack_90 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c);
                  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_90);
                  NativeHelper_02133494
                            (lVar12,*(undefined8 *)puVar9,uVar14,*(undefined8 *)PTR_DAT_0385ca48);
                  uStack_94 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
                  uVar14 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_94);
                  uStack_98 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24);
                  uVar16 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_98);
                  uStack_9c = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
                  uVar17 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_9c);
                  uVar14 = NativeHelper_02aa7514(*(undefined8 *)puVar7,uVar14,uVar16,uVar17,0);
                  plVar18 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,4);
                  uStack_a0 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c);
                  lVar15 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_a0);
                  if (plVar18 != (long *)0x0) {
                    if ((lVar15 != 0) &&
                       (lVar19 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                       lVar19 == 0)) {
LAB_019fa874:
                      uVar14 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef3f4(uVar14,0);
                    }
                    if ((int)plVar18[3] != 0) {
                      plVar18[4] = lVar15;
                      NativeHelper_017ef228(plVar18 + 4,lVar15);
                      uStack_a4 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
                      lVar15 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_a4);
                      if ((lVar15 != 0) &&
                         (lVar19 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                         lVar19 == 0)) goto LAB_019fa874;
                      if ((*(uint *)(plVar18 + 3) & 0xfffffffe) != 0) {
                        plVar18[5] = lVar15;
                        NativeHelper_017ef228(plVar18 + 5,lVar15);
                        uStack_a8 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x34);
                        lVar15 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_a8);
                        if ((lVar15 != 0) &&
                           (lVar19 = NativeHelper_017ef408(lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                           lVar19 == 0)) goto LAB_019fa874;
                        if (2 < *(uint *)(plVar18 + 3)) {
                          plVar18[6] = lVar15;
                          NativeHelper_017ef228(plVar18 + 6,lVar15);
                          uStack_ac = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                          lVar15 = NativeHelper_017ef40c(*(undefined8 *)(puVar2 + 0x48),&uStack_ac);
                          if ((lVar15 != 0) &&
                             (lVar19 = NativeHelper_017ef408
                                                 (lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                             lVar19 == 0)) goto LAB_019fa874;
                          puVar8 = PTR_DAT_0386ad80;
                          puVar9 = PTR_DAT_0386ad78;
                          puVar6 = PTR_DAT_0386ad58;
                          puVar3 = PTR_DAT_038670f8;
                          if ((*(uint *)(plVar18 + 3) & 0xfffffffc) != 0) {
                            plVar18[7] = lVar15;
                            NativeHelper_017ef228(plVar18 + 7,lVar15);
                            uVar16 = NativeHelper_02aa7558(*(undefined8 *)puVar8,plVar18,0);
                            uStack_b0 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x3c);
                            uVar17 = NativeHelper_017ef40c
                                               (*(undefined8 *)(puVar2 + 0x48),&uStack_b0);
                            uStack_b4 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                            uVar20 = NativeHelper_017ef40c
                                               (*(undefined8 *)(puVar2 + 0x48),&uStack_b4);
                            uStack_b8 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x44);
                            uVar21 = NativeHelper_017ef40c
                                               (*(undefined8 *)(puVar2 + 0x48),&uStack_b8);
                            uVar17 = NativeHelper_02aa7514
                                               (*(undefined8 *)puVar6,uVar17,uVar20,uVar21,0);
                            uVar14 = NativeHelper_02aa6b6c(uVar14,uVar16,uVar17,0);
                            puVar8 = PTR_DAT_0385ccb8;
                            NativeHelper_02133494
                                      (lVar11,*(undefined8 *)puVar9,uVar14,
                                       *(undefined8 *)PTR_DAT_0385ccb8);
                            puVar6 = PTR_DAT_0385ca48;
                            NativeHelper_02133494
                                      (lVar12,*(undefined8 *)puVar9,uVar14,
                                       *(undefined8 *)PTR_DAT_0385ca48);
                            uVar14 = NativeHelper_02c0d29c
                                               (*(long *)(*(long *)puVar4 + 0xb8) + 0x48,0);
                            NativeHelper_02133494
                                      (lVar11,*(undefined8 *)puVar3,uVar14,*(undefined8 *)puVar8);
                            uStack_bc = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
                            uVar14 = NativeHelper_017ef40c
                                               (*(undefined8 *)(puVar2 + 0x48),&uStack_bc);
                            NativeHelper_02133494
                                      (lVar12,*(undefined8 *)puVar3,uVar14,*(undefined8 *)puVar6);
                            plVar18 = (long *)NativeHelper_017ef374
                                                        (*(undefined8 *)PTR_DAT_0385c420,5);
                            uStack_c0 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x4c);
                            lVar15 = NativeHelper_017ef40c
                                               (*(undefined8 *)(puVar2 + 0x48),&uStack_c0);
                            if (plVar18 == (long *)0x0) goto LAB_019fa86c;
                            if ((lVar15 != 0) &&
                               (lVar19 = NativeHelper_017ef408
                                                   (lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                               lVar19 == 0)) goto LAB_019fa874;
                            if ((int)plVar18[3] != 0) {
                              plVar18[4] = lVar15;
                              NativeHelper_017ef228(plVar18 + 4,lVar15);
                              uStack_c4 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                              lVar15 = NativeHelper_017ef40c
                                                 (*(undefined8 *)(puVar2 + 0x48),&uStack_c4);
                              if ((lVar15 != 0) &&
                                 (lVar19 = NativeHelper_017ef408
                                                     (lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                                 lVar19 == 0)) goto LAB_019fa874;
                              if ((*(uint *)(plVar18 + 3) & 0xfffffffe) != 0) {
                                plVar18[5] = lVar15;
                                NativeHelper_017ef228(plVar18 + 5,lVar15);
                                uStack_c8 = *(undefined4 *)
                                             (*(long *)(*(long *)puVar4 + 0xb8) + 0x54);
                                lVar15 = NativeHelper_017ef40c
                                                   (*(undefined8 *)(puVar2 + 0x48),&uStack_c8);
                                if ((lVar15 != 0) &&
                                   (lVar19 = NativeHelper_017ef408
                                                       (lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                                   lVar19 == 0)) goto LAB_019fa874;
                                if (2 < *(uint *)(plVar18 + 3)) {
                                  plVar18[6] = lVar15;
                                  NativeHelper_017ef228(plVar18 + 6,lVar15);
                                  uStack_cc = *(undefined4 *)
                                               (*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                                  lVar15 = NativeHelper_017ef40c
                                                     (*(undefined8 *)(puVar2 + 0x48),&uStack_cc);
                                  if ((lVar15 != 0) &&
                                     (lVar19 = NativeHelper_017ef408
                                                         (lVar15,*(undefined8 *)(*plVar18 + 0x40)),
                                     lVar19 == 0)) goto LAB_019fa874;
                                  if ((*(uint *)(plVar18 + 3) & 0xfffffffc) != 0) {
                                    plVar18[7] = lVar15;
                                    NativeHelper_017ef228(plVar18 + 7,lVar15);
                                    uStack_d0 = *(undefined4 *)
                                                 (*(long *)(*(long *)puVar4 + 0xb8) + 0x5c);
                                    lVar15 = NativeHelper_017ef40c
                                                       (*(undefined8 *)(puVar2 + 0x48),&uStack_d0);
                                    if ((lVar15 != 0) &&
                                       (lVar19 = NativeHelper_017ef408
                                                           (lVar15,*(undefined8 *)(*plVar18 + 0x40))
                                       , lVar19 == 0)) goto LAB_019fa874;
                                    puVar7 = PTR_DAT_0386ad50;
                                    puVar8 = PTR_DAT_0386ad40;
                                    puVar9 = PTR_DAT_0386ad38;
                                    puVar6 = PTR_DAT_0386ad18;
                                    puVar3 = PTR_DAT_03869c88;
                                    if (4 < *(uint *)(plVar18 + 3)) {
                                      plVar18[8] = lVar15;
                                      NativeHelper_017ef228(plVar18 + 8,lVar15);
                                      uVar14 = NativeHelper_02aa7558
                                                         (*(undefined8 *)puVar7,plVar18,0);
                                      puVar5 = PTR_DAT_0385ccb8;
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)puVar6,uVar14,
                                                 *(undefined8 *)PTR_DAT_0385ccb8);
                                      puVar7 = PTR_DAT_0385ca48;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar6,uVar14,
                                                 *(undefined8 *)PTR_DAT_0385ca48);
                                      iStack_7c = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60)
                                                  + 1;
                                      uVar14 = NativeHelper_02c0d29c(&iStack_7c,0);
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)puVar9,uVar14,
                                                 *(undefined8 *)puVar5);
                                      iStack_d4 = *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60)
                                                  + 1;
                                      uVar14 = NativeHelper_017ef40c
                                                         (*(undefined8 *)(puVar2 + 0x48),&iStack_d4)
                                      ;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar9,uVar14,
                                                 *(undefined8 *)puVar7);
                                      uVar14 = NativeHelper_02c0d29c
                                                         (*(long *)(*(long *)puVar4 + 0xb8) + 100,0)
                                      ;
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)puVar3,uVar14,
                                                 *(undefined8 *)puVar5);
                                      uStack_d8 = *(undefined4 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 100);
                                      uVar14 = NativeHelper_017ef40c
                                                         (*(undefined8 *)(puVar2 + 0x48),&uStack_d8)
                                      ;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar3,uVar14,
                                                 *(undefined8 *)puVar7);
                                      uVar14 = NativeHelper_02c0d29c
                                                         (*(long *)(*(long *)puVar4 + 0xb8) + 0x74,0
                                                         );
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)puVar8,uVar14,
                                                 *(undefined8 *)puVar5);
                                      uStack_dc = *(undefined4 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x74);
                                      uVar14 = NativeHelper_017ef40c
                                                         (*(undefined8 *)(puVar2 + 0x48),&uStack_dc)
                                      ;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar8,uVar14,
                                                 *(undefined8 *)puVar7);
                                      uVar14 = NativeHelper_02c0d29c
                                                         (*(long *)(*(long *)puVar4 + 0xb8) + 0x68,0
                                                         );
                                      puVar3 = PTR_DAT_03869c58;
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)PTR_DAT_03869c58,uVar14,
                                                 *(undefined8 *)puVar5);
                                      uStack_e0 = *(undefined4 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
                                      uVar14 = NativeHelper_017ef40c
                                                         (*(undefined8 *)(puVar2 + 0x48),&uStack_e0)
                                      ;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar3,uVar14,
                                                 *(undefined8 *)puVar7);
                                      uVar14 = NativeHelper_02c0d29c
                                                         (*(long *)(*(long *)puVar4 + 0xb8) + 0x6c,0
                                                         );
                                      puVar3 = PTR_DAT_03869d00;
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)PTR_DAT_03869d00,uVar14,
                                                 *(undefined8 *)puVar5);
                                      uStack_e4 = *(undefined4 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x6c);
                                      uVar14 = NativeHelper_017ef40c
                                                         (*(undefined8 *)(puVar2 + 0x48),&uStack_e4)
                                      ;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar3,uVar14,
                                                 *(undefined8 *)puVar7);
                                      uVar14 = NativeHelper_02c0d29c
                                                         (*(long *)(*(long *)puVar4 + 0xb8) + 0x70,0
                                                         );
                                      puVar3 = PTR_DAT_03869c90;
                                      NativeHelper_02133494
                                                (lVar11,*(undefined8 *)PTR_DAT_03869c90,uVar14,
                                                 *(undefined8 *)puVar5);
                                      uStack_e8 = *(undefined4 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x70);
                                      uVar14 = NativeHelper_017ef40c
                                                         (*(undefined8 *)(puVar2 + 0x48),&uStack_e8)
                                      ;
                                      NativeHelper_02133494
                                                (lVar12,*(undefined8 *)puVar3,uVar14,
                                                 *(undefined8 *)puVar7);
                                      puVar3 = PTR_DAT_0385db10;
                                      pGVar13 = Singleton_get_Instance_27784f4
                                                          (*(void **)PTR_DAT_0385db10);
                                      puVar6 = PTR_DAT_0386ad08;
                                      if (pGVar13 != (Game_UserData *)0x0) {
                                        iStack_7c = 
                                                  Game_UserData_get_CompletedTaskCountInLevel_18d3a6c
                                                            (pGVar13,(void *)0x0);
                                        uVar14 = NativeHelper_02c0d29c(&iStack_7c,0);
                                        NativeHelper_02133494
                                                  (lVar11,*(undefined8 *)puVar6,uVar14,
                                                   *(undefined8 *)puVar5);
                                        pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar3);
                                        if (pGVar13 != (Game_UserData *)0x0) {
                                          iStack_ec = 
                                                  Game_UserData_get_CompletedTaskCountInLevel_18d3a6c
                                                            (pGVar13,(void *)0x0);
                                          uVar14 = NativeHelper_017ef40c
                                                             (*(undefined8 *)(puVar2 + 0x48),
                                                              &iStack_ec);
                                          NativeHelper_02133494
                                                    (lVar12,*(undefined8 *)puVar6,uVar14,
                                                     *(undefined8 *)puVar7);
                                          pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar3)
                                          ;
                                          puVar9 = PTR_DAT_0386ad20;
                                          puVar6 = PTR_DAT_03869e40;
                                          if (pGVar13 != (Game_UserData *)0x0) {
                                            pvVar22 = Game_UserData_GetUsingSkin_18cf374
                                                                (pGVar13,(void *)0x0);
                                            NativeHelper_02133494
                                                      (lVar11,*(undefined8 *)puVar6,pvVar22,
                                                       *(undefined8 *)puVar5);
                                            NativeHelper_02133494
                                                      (lVar12,*(undefined8 *)puVar6,pvVar22,
                                                       *(undefined8 *)puVar7);
                                            iStack_68 = TKCommon_PlayGameView_GetTickets_18f6880
                                                                  (self,runtimeMethod_00);
                                            uVar14 = NativeHelper_02c0d29c(&iStack_68,0);
                                            NativeHelper_02133494
                                                      (lVar11,*(undefined8 *)puVar9,uVar14,
                                                       *(undefined8 *)puVar5);
                                            iStack_f0 = iStack_68;
                                            uVar14 = NativeHelper_017ef40c
                                                               (*(undefined8 *)(puVar2 + 0x48),
                                                                &iStack_f0);
                                            NativeHelper_02133494
                                                      (lVar12,*(undefined8 *)puVar9,uVar14,
                                                       *(undefined8 *)puVar7);
                                            pvVar22 = Singleton_get_Instance_27784f4
                                                                (*(void **)puVar3);
                                            if ((pvVar22 != (void *)0x0) &&
                                               (lVar15 = Game_UserData_GetRoomNames_18cdae0
                                                                   (pvVar22,0),
                                               puVar6 = PTR_DAT_0386ad60, lVar15 != 0)) {
                                              uStack_6c = *(undefined4 *)(lVar15 + 0x18);
                                              uVar14 = NativeHelper_02c0d29c(&uStack_6c,0);
                                              NativeHelper_02133494
                                                        (lVar11,*(undefined8 *)puVar6,uVar14,
                                                         *(undefined8 *)puVar5);
                                              uStack_f4 = uStack_6c;
                                              uVar14 = NativeHelper_017ef40c
                                                                 (*(undefined8 *)(puVar2 + 0x48),
                                                                  &uStack_f4);
                                              NativeHelper_02133494
                                                        (lVar12,*(undefined8 *)puVar6,uVar14,
                                                         *(undefined8 *)puVar7);
                                              pGVar13 = Singleton_get_Instance_27784f4
                                                                  (*(void **)puVar3);
                                              puVar9 = PTR_DAT_0386ad68;
                                              puVar6 = PTR_DAT_03868898;
                                              if (pGVar13 != (Game_UserData *)0x0) {
                                                iStack_70 = Game_UserData_get_LastLeagueRank_18d4150
                                                                      (pGVar13,(void *)0x0);
                                                iStack_70 = iStack_70 + 1;
                                                uVar14 = NativeHelper_02c0d29c(&iStack_70,0);
                                                NativeHelper_02133494
                                                          (lVar11,*(undefined8 *)puVar9,uVar14,
                                                           *(undefined8 *)puVar5);
                                                iStack_f8 = iStack_70;
                                                uVar14 = NativeHelper_017ef40c
                                                                   (*(undefined8 *)(puVar2 + 0x48),
                                                                    &iStack_f8);
                                                NativeHelper_02133494
                                                          (lVar12,*(undefined8 *)puVar9,uVar14,
                                                           *(undefined8 *)puVar7);
                                                uStack_74 = *(undefined4 *)
                                                             (*(long *)(*(long *)puVar4 + 0xb8) +
                                                             0x78);
                                                uVar14 = NativeHelper_02c0d29c(&uStack_74,0);
                                                NativeHelper_02133494
                                                          (lVar11,*(undefined8 *)puVar6,uVar14,
                                                           *(undefined8 *)puVar5);
                                                uStack_fc = uStack_74;
                                                uVar14 = NativeHelper_017ef40c
                                                                   (*(undefined8 *)(puVar2 + 0x48),
                                                                    &uStack_fc);
                                                NativeHelper_02133494
                                                          (lVar12,*(undefined8 *)puVar6,uVar14,
                                                           *(undefined8 *)puVar7);
                                                pvVar22 = Singleton_get_Instance_27784f4
                                                                    (*(void **)puVar3);
                                                if (pvVar22 != (void *)0x0) {
                                                  uVar1 = 0;
                                                  if (*(long *)((long)pvVar22 + 0x30) != 0) {
                                                    pvVar22 = Singleton_get_Instance_27784f4
                                                                        (*(void **)puVar3);
                                                    if ((pvVar22 == (void *)0x0) ||
                                                       (*(long *)((long)pvVar22 + 0x30) == 0))
                                                    goto LAB_019fa86c;
                                                    uVar1 = *(uint *)(*(long *)((long)pvVar22 + 0x30
                                                                               ) + 0x10);
                                                  }
                                                  uStack_78 = uVar1;
                                                  puVar6 = PTR_DAT_03868890;
                                                  puVar4 = PTR_DAT_0385e750;
                                                  uVar14 = NativeHelper_02c0d29c(&uStack_78,0);
                                                  NativeHelper_02133494
                                                            (lVar11,*(undefined8 *)puVar6,uVar14,
                                                             *(undefined8 *)puVar5);
                                                  uStack_80 = uStack_78;
                                                  uVar14 = NativeHelper_017ef40c
                                                                     (*(undefined8 *)(puVar2 + 0x48)
                                                                      ,&uStack_80);
                                                  NativeHelper_02133494
                                                            (lVar12,*(undefined8 *)puVar6,uVar14,
                                                             *(undefined8 *)puVar7);
                                                  pvVar22 = Singleton_get_Instance_27784f4
                                                                      (*(void **)puVar4);
                                                  puVar6 = PTR_DAT_0386ad70;
                                                  if (pvVar22 != (void *)0x0) {
                                                    EventLogger_LogEvent_1888558
                                                              (pvVar22,*(undefined8 *)
                                                                        PTR_DAT_0386ad70,lVar11,0,0)
                                                    ;
                                                    pvVar22 = Singleton_get_Instance_27784f4
                                                                        (*(void **)puVar4);
                                                    if (pvVar22 != (void *)0x0) {
                                                      EventLogger_TkLogEvent_1888ca0
                                                                (pvVar22,*(undefined8 *)puVar6,
                                                                 lVar12,0,0);
                                                      pGVar13 = Singleton_get_Instance_27784f4
                                                                          (*(void **)puVar3);
                                                      if (pGVar13 != (Game_UserData *)0x0) {
                                                        iVar10 = 
                                                  Game_UserData_get_PlayGameCount_18cf288
                                                            (pGVar13,(void *)0x0);
                                                  pGVar13 = Singleton_get_Instance_27784f4
                                                                      (*(void **)puVar3);
                                                  if (pGVar13 != (Game_UserData *)0x0) {
                                                    uVar1 = iVar10 + 1;
                                                    Game_UserData_set_PlayGameCount_18cf234
                                                              (pGVar13,uVar1,(void *)0x0);
                                                    if ((uVar1 < 0x15) &&
                                                       ((uVar1 & 0x80000001) == 1)) {
                                                      pvVar22 = Singleton_get_Instance_27784f4
                                                                          (*(void **)puVar4);
                                                      uStack_80 = uVar1;
                                                      uVar14 = NativeHelper_017ef40c
                                                                         (*(undefined8 *)
                                                                           (puVar2 + 0x48),
                                                                          &uStack_80);
                                                      uVar14 = NativeHelper_02a9d074
                                                                         (*(undefined8 *)
                                                                           PTR_DAT_0386ad48,uVar14,0
                                                                         );
                                                      if (pvVar22 == (void *)0x0) goto LAB_019fa86c;
                                                      EventLogger_FBLogEvent_189c078
                                                                (pvVar22,uVar14,0,0);
                                                    }
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
                                      goto LAB_019fa86c;
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
                    NativeHelper_017ef538();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_019fa86c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

