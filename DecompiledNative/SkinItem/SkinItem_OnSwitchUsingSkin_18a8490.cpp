// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnSwitchUsingSkin(string currentUsingSkin) { }
// Ghidra address: 019ac490; ELF VA: 0x18ac490; file offset: 0x18a8490
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinItem_OnSwitchUsingSkin_18a8490(SkinItem *self,void *currentUsingSkin,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  TKCommon_NormalClickButton *pTVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  Recovered_Color RVar12;
  
  if ((bRam0000000003ab2292 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db48);
    NativeHelper_017ef284(PTR_DAT_0385e8e0);
    NativeHelper_017ef284(PTR_DAT_03868a00);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    NativeHelper_017ef284(PTR_DAT_03868a10);
    NativeHelper_017ef284(PTR_DAT_03868a28);
    bRam0000000003ab2292 = 1;
  }
  if (*(int *)&self->_currentState != 2) {
    uVar3 = NativeHelper_02aa50f0(currentUsingSkin,self->_skinName,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)&self->_currentState == 1) {
        return;
      }
    }
    else if (*(int *)&self->_currentState == 0) {
      return;
    }
    if ((self->_btnSkin != (TKCommon_NormalClickButton *)0x0) &&
       (pvVar4 = *(void **)&self->_btnSkin->field_0x100, pvVar4 != (void *)0x0)) {
      UnityEngine_Events_UnityEventBase_RemoveAllListeners_325f478(pvVar4,(void *)0x0);
      pTVar5 = self->_btnSkin;
      uVar1 = (uVar3 ^ 0xffffffff) & 1;
      *(uint *)&self->_currentState = uVar1;
      if (pTVar5 != (TKCommon_NormalClickButton *)0x0) {
        pTVar5->field_0x117 = (char)uVar1;
        lVar6 = NativeHelper_03660b60(pTVar5,0);
        pvVar4 = self->_btnSprites;
        if (pvVar4 != (void *)0x0) {
          if (*(uint *)((long)pvVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          if (lVar6 != 0) {
            NativeHelper_0345dd98(lVar6,*(undefined8 *)((long)pvVar4 + (ulong)uVar1 * 8 + 0x20),0);
            puVar2 = PTR_DAT_0385e8e0;
            plVar11 = self->_txtUseState;
            lVar6 = *(long *)PTR_DAT_0385e8e0;
            if ((uVar3 & 1) == 0) {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              puVar9 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50);
            }
            else {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              puVar9 = (undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x58);
            }
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x5e8))(plVar11,*puVar9,*(undefined8 *)(*plVar11 + 0x5f0));
              puVar9 = (undefined8 *)PTR_DAT_03868a10;
              if ((uVar3 & 1) == 0) {
                puVar9 = (undefined8 *)PTR_DAT_03868a28;
              }
              pvVar4 = (void *)*puVar9;
              if (*(int *)(*(long *)PTR_DAT_0385db48 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              RVar12 = ColorUtil_HexToColor_1873c78(pvVar4,(void *)0x0);
              if (self->_txtUseStateOutline != (CircleOutline *)0x0) {
                NativeHelper_0366a8f8
                          (RVar12.component0,RVar12.component1,RVar12.component2,RVar12.component3,
                           self->_txtUseStateOutline,0);
                if (self->_txtUseStateShadow != (void *)0x0) {
                  NativeHelper_0366a8f8
                            (RVar12.component0,RVar12.component1,RVar12.component2,RVar12.component3
                             ,self->_txtUseStateShadow,0);
                  if ((uVar3 & 1) != 0) {
                    return;
                  }
                  if (self->_btnSkin != (TKCommon_NormalClickButton *)0x0) {
                    lVar6 = *(long *)&self->_btnSkin->field_0x100;
                    pvVar4 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
                    UnityEngine_Events_UnityAction_UnityAction_325f530
                              (pvVar4,self,*(void **)PTR_DAT_03868a00,(void *)0x0);
                    if (lVar6 != 0) {
                      pvVar4 = UnityEngine_Events_UnityEvent_GetDelegate_325f62c(pvVar4,pvVar4);
                      lVar6 = *(long *)(lVar6 + 0x10);
                      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_017ef530();
                      }
                      if ((bRam0000000003abbee5 & 1) == 0) {
                        NativeHelper_017ef284(PTR_DAT_038a7c78);
                        bRam0000000003abbee5 = 1;
                      }
                      lVar7 = *(long *)(lVar6 + 0x18);
                      if (lVar7 != 0) {
                        lVar8 = *(long *)(lVar7 + 0x10);
                        lVar10 = *(long *)PTR_DAT_038a7c78;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar3 = *(uint *)(lVar7 + 0x18);
                          if (uVar3 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar3 + 1;
                            puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
                            *puVar9 = pvVar4;
                            NativeHelper_017ef228(puVar9,pvVar4);
                          }
                          else {
                            NativeHelper_025697dc
                                      (lVar7,pvVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                          *(undefined1 *)(lVar6 + 0x28) = 1;
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
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return;
}

