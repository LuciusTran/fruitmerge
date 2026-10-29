// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Init(Object[] data) { }
// Ghidra address: 01a0c35c; ELF VA: 0x190c35c; file offset: 0x190835c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_SettingDialogForHome_Init_190835c
               (TKCommon_SettingDialogForHome *self,void *data,void *runtimeMethod)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  Game_UserData *pGVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  void *pvVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  ushort auStack_54 [6];
  
  puVar3 = PTR_DAT_0385d918;
  if ((bRam0000000003ab2661 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab2661 = 1;
  }
  pvVar13 = (void *)0x0;
  Game_Controller_View_Init_18d579c((Game_Controller_View *)self,data,(void *)0x0);
  pvVar8 = (void *)NativeHelper_0334f4c8(self,0);
  TKCommon_SettingDialogForHome_GetBindComponents_1908234(self,pvVar8,pvVar13);
  pvVar8 = self->m_img_music;
  pvVar13 = self->m_Music_Sprites;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar5 = Global_get_IsActiveBgm_1803e7c((void *)0x0);
  if (pvVar13 != (void *)0x0) {
    if (*(uint *)((long)pvVar13 + 0x18) <= (uint)((ulong)~(uint)bVar5 & 1)) {
LAB_01a0c548:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    if (pvVar8 != (void *)0x0) {
      NativeHelper_0345dd98
                (pvVar8,*(undefined8 *)((long)pvVar13 + ((ulong)~(uint)bVar5 & 1) * 8 + 0x20),0);
      pvVar8 = self->m_img_sound;
      pvVar13 = self->m_Sound_Sprites;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar5 = Global_get_IsActiveSound_1803f24((void *)0x0);
      if (pvVar13 != (void *)0x0) {
        if (*(uint *)((long)pvVar13 + 0x18) <= (uint)((ulong)~(uint)bVar5 & 1)) goto LAB_01a0c548;
        if (pvVar8 != (void *)0x0) {
          NativeHelper_0345dd98
                    (pvVar8,*(undefined8 *)((long)pvVar13 + ((ulong)~(uint)bVar5 & 1) * 8 + 0x20),0)
          ;
          pvVar8 = self->m_img_vibration;
          pvVar13 = self->m_Vibration_Sprites;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar5 = Global_get_IsActiveVibrate_1803fcc((void *)0x0);
          if (pvVar13 != (void *)0x0) {
            if (*(uint *)((long)pvVar13 + 0x18) <= (uint)((ulong)~(uint)bVar5 & 1))
            goto LAB_01a0c548;
            if (pvVar8 != (void *)0x0) {
              NativeHelper_0345dd98
                        (pvVar8,*(undefined8 *)
                                 ((long)pvVar13 + ((ulong)~(uint)bVar5 & 1) * 8 + 0x20),0);
              puVar3 = PTR_DAT_0385db10;
              if (self->m_input_username != (void *)0x0) {
                NativeHelper_036462e8(self->m_input_username,0xc,0);
                pvVar8 = self->m_img_avatar;
                pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar3);
                if (pGVar9 != (Game_UserData *)0x0) {
                  pvVar13 = Game_UserData_UserAvatar_18cd46c(pGVar9,(void *)0x0);
                  pvVar13 = Game_Const_GetSprite_UserIcon_18da87c(pvVar13,(void *)0x0);
                  if (pvVar8 != (void *)0x0) {
                    NativeHelper_0345dd98(pvVar8,pvVar13,0);
                    pvVar8 = self->m_input_username;
                    pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar3);
                    if ((pGVar9 != (Game_UserData *)0x0) &&
                       (pvVar13 = Game_UserData_UserName_18cd530(pGVar9,(void *)0x0),
                       pvVar8 != (void *)0x0)) {
                      if ((bRam0000000003abf41b & 1) == 0) {
                        NativeHelper_017ef284(PTR_DAT_038bc208);
                        NativeHelper_017ef284(PTR_DAT_0385d8b8);
                        NativeHelper_017ef284(PTR_DAT_038bc210);
                        NativeHelper_017ef284(PTR_DAT_0385ce38);
                        NativeHelper_017ef284(PTR_DAT_0389bb08);
                        NativeHelper_017ef284(PTR_DAT_0385ce48);
                        NativeHelper_017ef284(PTR_DAT_0385cbb8);
                        bRam0000000003abf41b = 1;
                      }
                      auStack_54[0] = 0;
                      uVar10 = NativeHelper_02aa50f0
                                         (*(undefined8 *)((long)pvVar8 + 0x180),pvVar13,0);
                      puVar4 = PTR_DAT_0385cbb8;
                      puVar3 = PTR_DAT_0385c2d8;
                      if ((uVar10 & 1) != 0) {
                        return;
                      }
                      pvVar1 = *(void **)PTR_DAT_0385cbb8;
                      if (pvVar13 != (void *)0x0) {
                        pvVar1 = pvVar13;
                      }
                      if (pvVar1 != (void *)0x0) {
                        lVar11 = NativeHelper_02aa8c18
                                           (pvVar1,*(undefined8 *)PTR_DAT_0389bb08,
                                            **(undefined8 **)
                                              (*(long *)(PTR_DAT_0385c2d8 + 0x90) + 0xb8),0);
                        if (*(int *)((long)pvVar8 + 0x128) == 0) {
                          if ((lVar11 == 0) ||
                             (lVar11 = NativeHelper_02aa8c18
                                                 (lVar11,*(undefined8 *)PTR_DAT_0385ce38,
                                                  *(undefined8 *)puVar4,0), lVar11 == 0))
                          goto code_r0x03645694;
                          lVar11 = NativeHelper_02aa8c18
                                             (lVar11,*(undefined8 *)PTR_DAT_0385ce48,
                                              *(undefined8 *)puVar4,0);
                        }
                        if ((*(long *)((long)pvVar8 + 0x150) == 0) &&
                           (*(int *)((long)pvVar8 + 0x130) == 0)) {
                          iVar15 = *(int *)((long)pvVar8 + 0x134);
                          if (0 < iVar15) {
                            if (lVar11 == 0) goto code_r0x03645694;
                            if (iVar15 < *(int *)(lVar11 + 0x10)) {
                              lVar11 = NativeHelper_02aa89f0(lVar11,0,iVar15,0);
                            }
                          }
                          *(long *)((long)pvVar8 + 0x180) = lVar11;
                          NativeHelper_017ef228((long)pvVar8 + 0x180,lVar11);
                        }
                        else {
                          *(undefined8 *)((long)pvVar8 + 0x180) = *(undefined8 *)puVar4;
                          NativeHelper_017ef228((long)pvVar8 + 0x180);
                          lVar14 = *(long *)((long)pvVar8 + 0x150);
                          if (lVar14 == 0) {
                            lVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038bc210);
                            func_0x036456a0(lVar14,pvVar8,*(undefined8 *)PTR_DAT_038bc208);
                          }
                          if (lVar11 == 0) goto code_r0x03645694;
                          iVar15 = *(int *)((long)pvVar8 + 0x134);
                          iVar6 = *(int *)(lVar11 + 0x10);
                          *(int *)((long)pvVar8 + 0x198) = iVar6;
                          *(int *)((long)pvVar8 + 0x194) = iVar6;
                          if (0 < iVar15) {
                            if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
                              NativeHelper_017ef404();
                            }
                            iVar6 = NativeHelper_02c10d34(iVar15,iVar6,0);
                          }
                          if (0 < iVar6) {
                            iVar15 = 0;
                            do {
                              lVar16 = *(long *)((long)pvVar8 + 0x180);
                              if (lVar16 == 0) goto code_r0x03645694;
                              uVar2 = *(undefined4 *)(lVar16 + 0x10);
                              uVar7 = NativeHelper_02aa0ce0(lVar11,iVar15,0);
                              if (lVar14 == 0) goto code_r0x03645694;
                              auStack_54[0] =
                                   (**(code **)(lVar14 + 0x18))
                                             (*(undefined8 *)(lVar14 + 0x40),lVar16,uVar2,uVar7,
                                              *(undefined8 *)(lVar14 + 0x28));
                              if (auStack_54[0] != 0) {
                                uVar17 = *(undefined8 *)((long)pvVar8 + 0x180);
                                if (*(int *)(*(long *)(puVar3 + 0x88) + 0xe4) == 0) {
                                  NativeHelper_017ef404();
                                }
                                uVar12 = NativeHelper_02b84464(auStack_54,0);
                                uVar17 = NativeHelper_02a9c49c(uVar17,uVar12,0);
                                *(undefined8 *)((long)pvVar8 + 0x180) = uVar17;
                                NativeHelper_017ef228((long)pvVar8 + 0x180,uVar17);
                              }
                              iVar15 = iVar15 + 1;
                            } while (iVar6 != iVar15);
                          }
                        }
                        if (*(long *)((long)pvVar8 + 0x100) != 0) {
                          func_0x0335bf30(*(long *)((long)pvVar8 + 0x100),
                                          *(undefined8 *)((long)pvVar8 + 0x180),0);
                        }
                        if (*(long *)((long)pvVar8 + 0x180) != 0) {
                          iVar15 = *(int *)(*(long *)((long)pvVar8 + 0x180) + 0x10);
                          if (iVar15 < *(int *)((long)pvVar8 + 0x194)) {
                            *(int *)((long)pvVar8 + 0x198) = iVar15;
                            *(int *)((long)pvVar8 + 0x194) = iVar15;
                          }
                          else if (iVar15 < *(int *)((long)pvVar8 + 0x198)) {
                            *(int *)((long)pvVar8 + 0x198) = iVar15;
                          }
                          func_0x03645754(pvVar8);
                          func_0x036457d4(pvVar8);
                          return;
                        }
                      }
code_r0x03645694:
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef530();
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

