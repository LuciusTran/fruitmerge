// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void InitForTest() { }
// Ghidra address: 019f3220; ELF VA: 0x18f3220; file offset: 0x18ef220
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_InitForTest_18ef220(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  Game_UserData *pGVar7;
  undefined8 uVar8;
  void *self_00;
  long *plVar9;
  void *self_01;
  int iStack_48;
  int iStack_44;
  
  if ((bRam0000000003ab2588 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0386ab68);
    NativeHelper_017ef284(PTR_DAT_0386ab70);
    NativeHelper_017ef284(PTR_DAT_0386ab78);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386ab80);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    NativeHelper_017ef284(PTR_DAT_0386ab88);
    NativeHelper_017ef284(PTR_DAT_0386ab90);
    NativeHelper_017ef284(PTR_DAT_0386ab98);
    bRam0000000003ab2588 = 1;
  }
  if ((self->m_trans_Test != (void *)0x0) &&
     (lVar6 = NativeHelper_0334f4c8(self->m_trans_Test,0), puVar2 = PTR_DAT_0385d918, lVar6 != 0)) {
    NativeHelper_0335236c(lVar6,0,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar6 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x7f) == '\0') {
      return;
    }
    if ((self->m_trans_Test != (void *)0x0) &&
       (lVar6 = NativeHelper_0334f4c8(self->m_trans_Test,0), lVar6 != 0)) {
      NativeHelper_0335236c(lVar6,1,0);
      if (self->m_slider_blinkMin != (void *)0x0) {
        NativeHelper_0366271c(0,self->m_slider_blinkMin,0);
        if (self->m_slider_blinkMin != (void *)0x0) {
          NativeHelper_036627b4(0x41f00000,self->m_slider_blinkMin,0);
          puVar2 = PTR_DAT_0385db10;
          if (self->m_slider_blinkMin != (void *)0x0) {
            NativeHelper_0366284c(self->m_slider_blinkMin,1,0);
            plVar9 = self->m_slider_blinkMin;
            pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
            if ((pGVar7 != (Game_UserData *)0x0) &&
               (iVar5 = Game_UserData_get_BlinkMin_18c96b8(pGVar7,(void *)0x0),
               plVar9 != (long *)0x0)) {
              (**(code **)(*plVar9 + 0x428))((float)iVar5,plVar9,*(undefined8 *)(*plVar9 + 0x430));
              plVar9 = self->m_txt_blinkMin;
              pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
              puVar3 = PTR_DAT_0386ab90;
              if (pGVar7 != (Game_UserData *)0x0) {
                iStack_44 = Game_UserData_get_BlinkMin_18c96b8(pGVar7,(void *)0x0);
                puVar1 = PTR_DAT_0385c2d8;
                uVar8 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_44);
                uVar8 = NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar8,0);
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x5e8))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x5f0));
                  puVar4 = PTR_DAT_0386ab80;
                  puVar3 = PTR_DAT_0386ab70;
                  if (self->m_slider_blinkMin != (void *)0x0) {
                    lVar6 = *(long *)((long)self->m_slider_blinkMin + 0x128);
                    uVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0386ab80);
                    NativeHelper_029ecb2c(uVar8,self,*(undefined8 *)puVar3,0);
                    puVar3 = PTR_DAT_0386ab88;
                    if (lVar6 != 0) {
                      NativeHelper_029eec38(lVar6,uVar8,*(undefined8 *)PTR_DAT_0386ab88);
                      if (self->m_slider_blinkMax != (void *)0x0) {
                        NativeHelper_0366271c(0,self->m_slider_blinkMax,0);
                        if (self->m_slider_blinkMax != (void *)0x0) {
                          NativeHelper_036627b4(0x41f00000,self->m_slider_blinkMax,0);
                          if (self->m_slider_blinkMax != (void *)0x0) {
                            NativeHelper_0366284c(self->m_slider_blinkMax,1,0);
                            plVar9 = self->m_slider_blinkMax;
                            pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                            if ((pGVar7 != (Game_UserData *)0x0) &&
                               (iVar5 = Game_UserData_get_BlinkMax_18c9798(pGVar7,(void *)0x0),
                               plVar9 != (long *)0x0)) {
                              (**(code **)(*plVar9 + 0x428))
                                        ((float)iVar5,plVar9,*(undefined8 *)(*plVar9 + 0x430));
                              plVar9 = self->m_txt_blinkMax;
                              pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                              puVar2 = PTR_DAT_0386ab98;
                              if (pGVar7 != (Game_UserData *)0x0) {
                                iStack_48 = Game_UserData_get_BlinkMax_18c9798(pGVar7,(void *)0x0);
                                uVar8 = NativeHelper_017ef40c
                                                  (*(undefined8 *)(puVar1 + 0x48),&iStack_48);
                                uVar8 = NativeHelper_02a9d074(*(undefined8 *)puVar2,uVar8,0);
                                if (plVar9 != (long *)0x0) {
                                  (**(code **)(*plVar9 + 0x5e8))
                                            (plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x5f0));
                                  puVar2 = PTR_DAT_0386ab78;
                                  if (self->m_slider_blinkMax != (void *)0x0) {
                                    lVar6 = *(long *)((long)self->m_slider_blinkMax + 0x128);
                                    uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar4);
                                    NativeHelper_029ecb2c(uVar8,self,*(undefined8 *)puVar2,0);
                                    if (lVar6 != 0) {
                                      NativeHelper_029eec38(lVar6,uVar8,*(undefined8 *)puVar3);
                                      puVar2 = PTR_DAT_0386ab68;
                                      if (self->m_btn_AddScore != (void *)0x0) {
                                        self_01 = *(void **)((long)self->m_btn_AddScore + 0x100);
                                        self_00 = (void *)NativeHelper_017ef520
                                                                    (*(undefined8 *)PTR_DAT_038652e0
                                                                    );
                                        UnityEngine_Events_UnityAction_UnityAction_325f530
                                                  (self_00,self,*(void **)puVar2,(void *)0x0);
                                        if (self_01 != (void *)0x0) {
                                          UnityEngine_Events_UnityEvent_AddListener_325f600
                                                    (self_01,self_00,(void *)0x0);
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

