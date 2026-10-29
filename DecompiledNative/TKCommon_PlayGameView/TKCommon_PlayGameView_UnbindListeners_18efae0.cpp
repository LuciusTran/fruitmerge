// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UnbindListeners() { }
// Ghidra address: 019f3ae0; ELF VA: 0x18f3ae0; file offset: 0x18efae0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_UnbindListeners_18efae0(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *pvVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  void *extraout_x1;
  long lVar19;
  undefined8 uVar20;
  void *pvVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  
  puVar4 = PTR_DAT_0385da10;
  if ((bRam0000000003ab258f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386aac8);
    NativeHelper_017ef284(PTR_DAT_0385da10);
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_0385da30);
    NativeHelper_017ef284(PTR_DAT_0386aba8);
    NativeHelper_017ef284(PTR_DAT_03867098);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0386aad8);
    NativeHelper_017ef284(PTR_DAT_0386aae0);
    NativeHelper_017ef284(PTR_DAT_0386aae8);
    NativeHelper_017ef284(PTR_DAT_0386aaf0);
    NativeHelper_017ef284(PTR_DAT_0386aaf8);
    NativeHelper_017ef284(PTR_DAT_0386ab00);
    NativeHelper_017ef284(PTR_DAT_0386ab08);
    NativeHelper_017ef284(PTR_DAT_0386ab10);
    NativeHelper_017ef284(PTR_DAT_0386ab18);
    NativeHelper_017ef284(PTR_DAT_0386ab20);
    NativeHelper_017ef284(PTR_DAT_0386ab28);
    NativeHelper_017ef284(PTR_DAT_0386ab30);
    NativeHelper_017ef284(PTR_DAT_0386ab38);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    NativeHelper_017ef284(PTR_DAT_0385e758);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_03869c08);
    NativeHelper_017ef284(PTR_DAT_03868b10);
    NativeHelper_017ef284(PTR_DAT_03867130);
    NativeHelper_017ef284(PTR_DAT_03869c10);
    NativeHelper_017ef284(PTR_DAT_0385d958);
    NativeHelper_017ef284(PTR_DAT_03869fb8);
    bRam0000000003ab258f = 1;
    runtimeMethod = extraout_x1;
  }
  puVar12 = PTR_DAT_0386ab30;
  puVar11 = PTR_DAT_0386ab28;
  puVar10 = PTR_DAT_0386aae8;
  puVar9 = PTR_DAT_03869c10;
  puVar8 = PTR_DAT_03869c08;
  puVar7 = PTR_DAT_03866c68;
  puVar6 = PTR_DAT_0385e758;
  puVar5 = PTR_DAT_0385da30;
  puVar3 = PTR_DAT_0385d958;
  pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4,runtimeMethod);
  Callback_Callback_1_1f10de0(pvVar13,self,*(void **)PTR_DAT_0386aad8,(void *)0x0);
  if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_RemoveListener_1ba27e0(*(undefined8 *)puVar3,pvVar13,*(undefined8 *)puVar5);
  pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar7);
  Callback_Callback_186ef98(pvVar13,self,*(void **)puVar10,(void *)0x0);
  Messenger_RemoveListener_186f258(*(void **)puVar9,pvVar13,(void *)0x0);
  pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar7);
  Callback_Callback_186ef98(pvVar13,self,*(void **)puVar11,(void *)0x0);
  Messenger_RemoveListener_186f258(*(void **)puVar8,pvVar13,(void *)0x0);
  pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar7);
  Callback_Callback_186ef98(pvVar13,self,*(void **)puVar12,(void *)0x0);
  Messenger_RemoveListener_186f258(*(void **)puVar6,pvVar13,(void *)0x0);
  uVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867040);
  NativeHelper_02015018(uVar14,self,*(undefined8 *)PTR_DAT_0386ab10,0);
  NativeHelper_01ca6ae0(*(undefined8 *)PTR_DAT_03867070,uVar14,*(undefined8 *)PTR_DAT_03867098);
  pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar7);
  Callback_Callback_186ef98(pvVar13,self,*(void **)PTR_DAT_0386ab38,(void *)0x0);
  Messenger_RemoveListener_186f258(*(void **)PTR_DAT_03869fb8,pvVar13,(void *)0x0);
  pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar7);
  Callback_Callback_186ef98(pvVar13,self,*(void **)PTR_DAT_0386ab20,(void *)0x0);
  Messenger_RemoveListener_186f258(*(void **)PTR_DAT_03868b10,pvVar13,(void *)0x0);
  uVar14 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0386aac8);
  NativeHelper_02014efc(uVar14,self,*(undefined8 *)PTR_DAT_0386aaf0,0);
  NativeHelper_01ca6960(*(undefined8 *)PTR_DAT_03867130,uVar14,*(undefined8 *)PTR_DAT_0386aba8);
  puVar3 = PTR_DAT_0386aae0;
  puVar4 = PTR_DAT_038652e0;
  if (self->m_btn_Close != (TKCommon_NormalClickButton *)0x0) {
    pvVar21 = *(void **)&self->m_btn_Close->field_0x100;
    pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
    UnityEngine_Events_UnityAction_UnityAction_325f530(pvVar13,self,*(void **)puVar3,(void *)0x0);
    if (pvVar21 != (void *)0x0) {
      UnityEngine_Events_UnityEvent_RemoveListener_325f690(pvVar21,pvVar13,(void *)0x0);
      puVar3 = PTR_DAT_0386aaf8;
      if (self->m_btn_Cancel != (TKCommon_NormalClickButton *)0x0) {
        pvVar21 = *(void **)&self->m_btn_Cancel->field_0x100;
        pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
        UnityEngine_Events_UnityAction_UnityAction_325f530
                  (pvVar13,self,*(void **)puVar3,(void *)0x0);
        if (pvVar21 != (void *)0x0) {
          UnityEngine_Events_UnityEvent_RemoveListener_325f690(pvVar21,pvVar13,(void *)0x0);
          puVar3 = PTR_DAT_0386ab00;
          if (self->m_btn_League != (TKCommon_NormalClickButton *)0x0) {
            pvVar21 = *(void **)&self->m_btn_League->field_0x100;
            pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
            UnityEngine_Events_UnityAction_UnityAction_325f530
                      (pvVar13,self,*(void **)puVar3,(void *)0x0);
            if (pvVar21 != (void *)0x0) {
              UnityEngine_Events_UnityEvent_RemoveListener_325f690(pvVar21,pvVar13,(void *)0x0);
              puVar3 = PTR_DAT_0386ab18;
              if (self->m_btn_Task != (TKCommon_NormalClickButton *)0x0) {
                pvVar21 = *(void **)&self->m_btn_Task->field_0x100;
                pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
                UnityEngine_Events_UnityAction_UnityAction_325f530
                          (pvVar13,self,*(void **)puVar3,(void *)0x0);
                if (pvVar21 != (void *)0x0) {
                  UnityEngine_Events_UnityEvent_RemoveListener_325f690(pvVar21,pvVar13,(void *)0x0);
                  puVar3 = PTR_DAT_0386ab08;
                  if (self->m_btn_Room != (TKCommon_NormalClickButton *)0x0) {
                    lVar22 = *(long *)&self->m_btn_Room->field_0x100;
                    pvVar13 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
                    UnityEngine_Events_UnityAction_UnityAction_325f530
                              (pvVar13,self,*(void **)puVar3,(void *)0x0);
                    if (lVar22 != 0) {
                      if (pvVar13 != (void *)0x0) {
                        uVar20 = *(undefined8 *)((long)pvVar13 + 0x20);
                        uVar14 = NativeHelper_02c58c70(pvVar13,0,0);
                        puVar3 = PTR_DAT_038a7c88;
                        puVar4 = PTR_DAT_038a7c80;
                        lVar22 = *(long *)(lVar22 + 0x10);
                        if (lVar22 != 0) {
                          if ((bRam0000000003abbee6 & 1) == 0) {
                            NativeHelper_017ef284(PTR_DAT_038a7c90);
                            NativeHelper_017ef284(PTR_DAT_038a7c78);
                            NativeHelper_017ef284(PTR_DAT_038a7c98);
                            NativeHelper_017ef284(PTR_DAT_038a7c88);
                            NativeHelper_017ef284(PTR_DAT_038a7ca0);
                            NativeHelper_017ef284(PTR_DAT_038739f8);
                            NativeHelper_017ef284(PTR_DAT_03873a00);
                            NativeHelper_017ef284(PTR_DAT_038a7c80);
                            NativeHelper_017ef284(PTR_DAT_038a7ca8);
                            bRam0000000003abbee6 = 1;
                          }
                          plVar15 = (long *)NativeHelper_017ef520(*(undefined8 *)puVar4);
                          NativeHelper_02568f74(plVar15,*(undefined8 *)puVar3);
                          puVar7 = PTR_DAT_038a7ca8;
                          puVar6 = PTR_DAT_038a7c98;
                          puVar5 = PTR_DAT_038a7c90;
                          puVar3 = PTR_DAT_038a7c78;
                          puVar4 = PTR_DAT_03873a00;
                          lVar24 = *(long *)(lVar22 + 0x18);
                          if (lVar24 != 0) {
                            iVar23 = 0;
                            while (iVar23 < *(int *)(lVar24 + 0x18)) {
                              plVar16 = (long *)NativeHelper_0256950c
                                                          (lVar24,iVar23,*(undefined8 *)puVar4);
                              if (plVar16 == (long *)0x0) goto code_r0x03362ae0;
                              uVar17 = (**(code **)(*plVar16 + 0x188))
                                                 (plVar16,uVar20,uVar14,
                                                  *(undefined8 *)(*plVar16 + 400));
                              if ((uVar17 & 1) != 0) {
                                if ((*(long *)(lVar22 + 0x18) == 0) ||
                                   (uVar18 = NativeHelper_0256950c
                                                       (*(long *)(lVar22 + 0x18),iVar23,
                                                        *(undefined8 *)puVar4),
                                   plVar15 == (long *)0x0)) goto code_r0x03362ae0;
                                lVar24 = plVar15[2];
                                lVar19 = *(long *)puVar3;
                                *(int *)((long)plVar15 + 0x1c) = *(int *)((long)plVar15 + 0x1c) + 1;
                                if (lVar24 == 0) goto code_r0x03362ae0;
                                uVar2 = *(uint *)(plVar15 + 3);
                                if (uVar2 < *(uint *)(lVar24 + 0x18)) {
                                  *(uint *)(plVar15 + 3) = uVar2 + 1;
                                  *(undefined8 *)(lVar24 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
                                  NativeHelper_017ef228();
                                }
                                else {
                                  NativeHelper_025697dc
                                            (plVar15,uVar18,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                                }
                              }
                              lVar24 = *(long *)(lVar22 + 0x18);
                              iVar23 = iVar23 + 1;
                              if (lVar24 == 0) goto code_r0x03362ae0;
                            }
                            uVar14 = NativeHelper_017ef520(*(undefined8 *)puVar7);
                            if (plVar15 != (long *)0x0) {
                              NativeHelper_02731c08
                                        (uVar14,plVar15,*(undefined8 *)(*plVar15 + 0x210),0);
                              NativeHelper_0256adb8(lVar24,uVar14,*(undefined8 *)puVar6);
                              if ((*(long *)(lVar22 + 0x10) != 0) && (*(long *)(lVar22 + 0x18) != 0)
                                 ) {
                                iVar23 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18);
                                iVar1 = *(int *)(*(long *)(lVar22 + 0x18) + 0x18);
                                lVar24 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038a7c80);
                                NativeHelper_02568fec
                                          (lVar24,iVar1 + iVar23,*(undefined8 *)PTR_DAT_038a7ca0);
                                if (lVar24 != 0) {
                                  NativeHelper_025699ec
                                            (lVar24,*(undefined8 *)(lVar22 + 0x10),
                                             *(undefined8 *)puVar5);
                                  NativeHelper_025699ec
                                            (lVar24,*(undefined8 *)(lVar22 + 0x18),
                                             *(undefined8 *)puVar5);
                                  *(long *)(lVar22 + 0x20) = lVar24;
                                  NativeHelper_017ef228((long *)(lVar22 + 0x20),lVar24);
                                  *(undefined1 *)(lVar22 + 0x28) = 0;
                                  return;
                                }
                              }
                            }
                          }
code_r0x03362ae0:
                    /* WARNING: Subroutine does not return */
                          NativeHelper_017ef530();
                        }
                      }
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

