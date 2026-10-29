// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void BindListeners() { }
// Ghidra address: 019f2654; ELF VA: 0x18f2654; file offset: 0x18ee654
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_BindListeners_18ee654(TKCommon_PlayGameView *self,void *runtimeMethod)

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
  undefined *puVar10;
  undefined *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  long lVar14;
  void *extraout_x1;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  void *pvVar18;
  long lVar19;
  
  puVar3 = PTR_DAT_0385da10;
  if ((bRam0000000003ab258e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386aac8);
    NativeHelper_017ef284(PTR_DAT_0385da10);
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_0385da20);
    NativeHelper_017ef284(PTR_DAT_0386aad0);
    NativeHelper_017ef284(PTR_DAT_03867068);
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
    bRam0000000003ab258e = 1;
    runtimeMethod = extraout_x1;
  }
  puVar11 = PTR_DAT_0386ab30;
  puVar10 = PTR_DAT_0386ab28;
  puVar9 = PTR_DAT_0386aae8;
  puVar8 = PTR_DAT_03869c10;
  puVar7 = PTR_DAT_03869c08;
  puVar6 = PTR_DAT_03866c68;
  puVar5 = PTR_DAT_0385e758;
  puVar4 = PTR_DAT_0385da20;
  puVar2 = PTR_DAT_0385d958;
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3,runtimeMethod);
  Callback_Callback_1_1f10de0(pvVar12,self,*(void **)PTR_DAT_0386aad8,(void *)0x0);
  if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_AddListener_1ba117c(*(undefined8 *)puVar2,pvVar12,*(undefined8 *)puVar4);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(pvVar12,self,*(void **)puVar9,(void *)0x0);
  Messenger_AddListener_186f034(*(void **)puVar8,pvVar12,(void *)0x0);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(pvVar12,self,*(void **)puVar10,(void *)0x0);
  Messenger_AddListener_186f034(*(void **)puVar7,pvVar12,(void *)0x0);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(pvVar12,self,*(void **)puVar11,(void *)0x0);
  Messenger_AddListener_186f034(*(void **)puVar5,pvVar12,(void *)0x0);
  uVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867040);
  NativeHelper_02015018(uVar13,self,*(undefined8 *)PTR_DAT_0386ab10,0);
  NativeHelper_01ca5464(*(undefined8 *)PTR_DAT_03867070,uVar13,*(undefined8 *)PTR_DAT_03867068);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(pvVar12,self,*(void **)PTR_DAT_0386ab38,(void *)0x0);
  Messenger_AddListener_186f034(*(void **)PTR_DAT_03869fb8,pvVar12,(void *)0x0);
  pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar6);
  Callback_Callback_186ef98(pvVar12,self,*(void **)PTR_DAT_0386ab20,(void *)0x0);
  Messenger_AddListener_186f034(*(void **)PTR_DAT_03868b10,pvVar12,(void *)0x0);
  uVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0386aac8);
  NativeHelper_02014efc(uVar13,self,*(undefined8 *)PTR_DAT_0386aaf0,0);
  NativeHelper_01ca52f0(*(undefined8 *)PTR_DAT_03867130,uVar13,*(undefined8 *)PTR_DAT_0386aad0);
  puVar2 = PTR_DAT_0386aae0;
  puVar3 = PTR_DAT_038652e0;
  if (self->m_btn_Close != (TKCommon_NormalClickButton *)0x0) {
    pvVar18 = *(void **)&self->m_btn_Close->field_0x100;
    pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
    UnityEngine_Events_UnityAction_UnityAction_325f530(pvVar12,self,*(void **)puVar2,(void *)0x0);
    if (pvVar18 != (void *)0x0) {
      UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar18,pvVar12,(void *)0x0);
      puVar2 = PTR_DAT_0386aaf8;
      if (self->m_btn_Cancel != (TKCommon_NormalClickButton *)0x0) {
        pvVar18 = *(void **)&self->m_btn_Cancel->field_0x100;
        pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
        UnityEngine_Events_UnityAction_UnityAction_325f530
                  (pvVar12,self,*(void **)puVar2,(void *)0x0);
        if (pvVar18 != (void *)0x0) {
          UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar18,pvVar12,(void *)0x0);
          puVar2 = PTR_DAT_0386ab00;
          if (self->m_btn_League != (TKCommon_NormalClickButton *)0x0) {
            pvVar18 = *(void **)&self->m_btn_League->field_0x100;
            pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
            UnityEngine_Events_UnityAction_UnityAction_325f530
                      (pvVar12,self,*(void **)puVar2,(void *)0x0);
            if (pvVar18 != (void *)0x0) {
              UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar18,pvVar12,(void *)0x0);
              puVar2 = PTR_DAT_0386ab18;
              if (self->m_btn_Task != (TKCommon_NormalClickButton *)0x0) {
                pvVar18 = *(void **)&self->m_btn_Task->field_0x100;
                pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
                UnityEngine_Events_UnityAction_UnityAction_325f530
                          (pvVar12,self,*(void **)puVar2,(void *)0x0);
                if (pvVar18 != (void *)0x0) {
                  UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar18,pvVar12,(void *)0x0);
                  puVar2 = PTR_DAT_0386ab08;
                  if (self->m_btn_Room != (TKCommon_NormalClickButton *)0x0) {
                    lVar19 = *(long *)&self->m_btn_Room->field_0x100;
                    pvVar12 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
                    UnityEngine_Events_UnityAction_UnityAction_325f530
                              (pvVar12,self,*(void **)puVar2,(void *)0x0);
                    if (lVar19 != 0) {
                      pvVar12 = UnityEngine_Events_UnityEvent_GetDelegate_325f62c(pvVar12,pvVar12);
                      lVar19 = *(long *)(lVar19 + 0x10);
                      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_017ef530();
                      }
                      if ((bRam0000000003abbee5 & 1) == 0) {
                        NativeHelper_017ef284(PTR_DAT_038a7c78);
                        bRam0000000003abbee5 = 1;
                      }
                      lVar14 = *(long *)(lVar19 + 0x18);
                      if (lVar14 != 0) {
                        lVar15 = *(long *)(lVar14 + 0x10);
                        lVar17 = *(long *)PTR_DAT_038a7c78;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar15 != 0) {
                          uVar1 = *(uint *)(lVar14 + 0x18);
                          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                            puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar16 = pvVar12;
                            NativeHelper_017ef228(puVar16,pvVar12);
                          }
                          else {
                            NativeHelper_025697dc
                                      (lVar14,pvVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          *(undefined1 *)(lVar19 + 0x28) = 1;
                          return;
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

