// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateUserSkin() { }
// Ghidra address: 019ac704; ELF VA: 0x18ac704; file offset: 0x18a8704
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinItem_UpdateUserSkin_18a8704(SkinItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Game_UserData *self_00;
  void *pvVar5;
  long lVar6;
  TKCommon_NormalClickButton *pTVar7;
  void *pvVar8;
  long *plVar9;
  Recovered_Color RVar10;
  
  if ((bRam0000000003ab2293 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab2293 = 1;
  }
  if ((*(uint *)&self->_currentState | 2) != 2) {
    self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (self_00 == (Game_UserData *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    bVar4 = Game_UserData_IsUserHasSkin_18cf48c(self_00,self->_skinName,(void *)0x0);
    if (bVar4) {
      if ((bRam0000000003ab2294 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385db48);
        NativeHelper_017ef284(PTR_DAT_0385e8e0);
        NativeHelper_017ef284(PTR_DAT_03868a00);
        NativeHelper_017ef284(PTR_DAT_038652e0);
        NativeHelper_017ef284(PTR_DAT_03868a28);
        bRam0000000003ab2294 = 1;
      }
      if ((self->_btnSkin != (TKCommon_NormalClickButton *)0x0) &&
         (pvVar5 = *(void **)&self->_btnSkin->field_0x100, pvVar5 != (void *)0x0)) {
        UnityEngine_Events_UnityEventBase_RemoveAllListeners_325f478(pvVar5,(void *)0x0);
        puVar1 = PTR_DAT_03868a00;
        if (self->_btnSkin != (TKCommon_NormalClickButton *)0x0) {
          pvVar8 = *(void **)&self->_btnSkin->field_0x100;
          pvVar5 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
          UnityEngine_Events_UnityAction_UnityAction_325f530
                    (pvVar5,self,*(void **)puVar1,(void *)0x0);
          if (pvVar8 != (void *)0x0) {
            UnityEngine_Events_UnityEvent_AddListener_325f600(pvVar8,pvVar5,(void *)0x0);
            if ((self->_btnSkin != (TKCommon_NormalClickButton *)0x0) &&
               (lVar6 = NativeHelper_0334f4c8(self->_btnSkin,0), lVar6 != 0)) {
              NativeHelper_0335236c(lVar6,1,0);
              *(undefined4 *)&self->_currentState = 1;
              if (self->_imgLock != (void *)0x0) {
                NativeHelper_0335236c(self->_imgLock,0,0);
                if (self->_imgMask != (void *)0x0) {
                  NativeHelper_0335236c(self->_imgMask,0,0);
                  if ((self->_txtUseState != (void *)0x0) &&
                     (lVar6 = NativeHelper_0334f4c8(self->_txtUseState,0), lVar6 != 0)) {
                    NativeHelper_0335236c(lVar6,1,0);
                    pTVar7 = self->_btnSkin;
                    if (pTVar7 != (TKCommon_NormalClickButton *)0x0) {
                      pTVar7->field_0x117 = 1;
                      lVar6 = NativeHelper_03660b60(pTVar7,0);
                      puVar1 = PTR_DAT_0385e8e0;
                      pvVar5 = self->_btnSprites;
                      if (pvVar5 != (void *)0x0) {
                        if ((*(uint *)((long)pvVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                          NativeHelper_017ef538();
                        }
                        if (lVar6 != 0) {
                          NativeHelper_0345dd98(lVar6,*(undefined8 *)((long)pvVar5 + 0x28),0);
                          plVar9 = self->_txtUseState;
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            NativeHelper_017ef404();
                          }
                          puVar3 = PTR_DAT_03868a28;
                          puVar2 = PTR_DAT_0385db48;
                          if (plVar9 != (long *)0x0) {
                            (**(code **)(*plVar9 + 0x5e8))
                                      (plVar9,*(undefined8 *)
                                               (*(long *)(*(long *)puVar1 + 0xb8) + 0x50),
                                       *(undefined8 *)(*plVar9 + 0x5f0));
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              NativeHelper_017ef404();
                            }
                            RVar10 = ColorUtil_HexToColor_1873c78(*(void **)puVar3,(void *)0x0);
                            if (self->_txtUseStateOutline != (CircleOutline *)0x0) {
                              NativeHelper_0366a8f8(self->_txtUseStateOutline,0);
                              puVar1 = PTR_DAT_0385c2a0;
                              pvVar5 = self->_txtUseStateShadow;
                              if (pvVar5 != (void *)0x0) {
                                if ((bRam0000000003abf58a & 1) == 0) {
                                  NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
                                  bRam0000000003abf58a = 1;
                                }
                                *(float *)((long)pvVar5 + 0x28) = RVar10.component0;
                                *(float *)((long)pvVar5 + 0x2c) = RVar10.component1;
                                *(float *)((long)pvVar5 + 0x30) = RVar10.component2;
                                *(float *)((long)pvVar5 + 0x34) = RVar10.component3;
                                pvVar8 = (void *)NativeHelper_0366a1ac(pvVar5,0);
                                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                                  NativeHelper_017ef404(*(long *)puVar1);
                                }
                                bVar4 = UnityEngine_object_op_Inequality_324dec8
                                                  (pvVar8,(void *)0x0,(void *)0x0);
                                if (bVar4) {
                                  plVar9 = (long *)NativeHelper_0366a1ac(pvVar5,0);
                                  if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0366a9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (**(code **)(*plVar9 + 0x2f8))
                                              (plVar9,*(undefined8 *)(*plVar9 + 0x300));
                                    return;
                                  }
                    /* WARNING: Subroutine does not return */
                                  NativeHelper_017ef530();
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
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return;
}

