// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Init(Object[] data) { }
// Ghidra address: 019f24bc; ELF VA: 0x18f24bc; file offset: 0x18ee4bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_Init_18ee4bc(TKCommon_PlayGameView *self,void *data,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  void *pvVar6;
  Game_UserData *pGVar7;
  WebHelper *self_00;
  TKCommon_PlayGameView *self_01;
  long lVar8;
  TKLClient_TKLSwitcherConfig *pTVar9;
  undefined8 uVar10;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  void *pvVar11;
  long *plVar12;
  int iStack_48;
  int aiStack_44 [3];
  
  puVar2 = PTR_DAT_0385db10;
  if ((bRam0000000003ab2587 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038673b8);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385de08);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0386aac0);
    bRam0000000003ab2587 = 1;
  }
  pvVar11 = (void *)0x0;
  Game_Controller_View_Init_18d579c((Game_Controller_View *)self,data,(void *)0x0);
  pvVar6 = (void *)NativeHelper_0334f4c8(self,0);
  TKCommon_PlayGameView_GetBindComponents_18edc08(self,pvVar6,pvVar11);
  pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  puVar2 = PTR_DAT_0385de08;
  if (pGVar7 != (Game_UserData *)0x0) {
    pvVar6 = Game_UserData_GetUsingSkin_18cf374(pGVar7,(void *)0x0);
    self->_currentUsingSkin = pvVar6;
    NativeHelper_017ef228(&self->_currentUsingSkin,pvVar6);
    self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    puVar2 = PTR_DAT_0386aac0;
    if (self_00 != (WebHelper *)0x0) {
      WebHelper_update_user_id_1881eb8(self_00,(void *)0x0);
      TKCommon_PlayGameView_BindListeners_18ee654(self,runtimeMethod_00);
      pvVar6 = (void *)NativeHelper_03352a84(*(undefined8 *)puVar2,0);
      if (pvVar6 != (void *)0x0) {
        pvVar6 = UnityEngine_GameObject_GetComponent_1b75510(pvVar6,*(void **)PTR_DAT_038673b8);
        self->_fruitCamera = pvVar6;
        NativeHelper_017ef228(&self->_fruitCamera,pvVar6);
        TKCommon_PlayGameView_InitForUI_18eeb94(self,runtimeMethod_01);
        TKCommon_PlayGameView_DefaultInGame_18eede0(self,runtimeMethod_02);
        TKCommon_PlayGameView_ShowStarterPackDialog_18eeed0(self_01,runtimeMethod_03);
        TKCommon_PlayGameView_StartMergeFruit_18ef0d8(self,runtimeMethod_04);
        puVar2 = PTR_DAT_0385d918;
        if (self->m_trans_LevelPreviews != (void *)0x0) {
          lVar8 = NativeHelper_0334f4c8(self->m_trans_LevelPreviews,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar2);
          }
          pTVar9 = Global_get_RemoteConfig_18048d8((void *)0x0);
          if ((pTVar9 != (TKLClient_TKLSwitcherConfig *)0x0) && (lVar8 != 0)) {
            NativeHelper_0335236c(lVar8,pTVar9->ShowFruitPreviews,0);
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
               (lVar8 = NativeHelper_0334f4c8(self->m_trans_Test,0), puVar2 = PTR_DAT_0385d918,
               lVar8 != 0)) {
              NativeHelper_0335236c(lVar8,0,0);
              lVar8 = *(long *)puVar2;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                NativeHelper_017ef404();
                lVar8 = *(long *)puVar2;
              }
              if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x7f) == '\0') {
                return;
              }
              if ((self->m_trans_Test != (void *)0x0) &&
                 (lVar8 = NativeHelper_0334f4c8(self->m_trans_Test,0), lVar8 != 0)) {
                NativeHelper_0335236c(lVar8,1,0);
                if (self->m_slider_blinkMin != (void *)0x0) {
                  NativeHelper_0366271c(0,self->m_slider_blinkMin,0);
                  if (self->m_slider_blinkMin != (void *)0x0) {
                    NativeHelper_036627b4(0x41f00000,self->m_slider_blinkMin,0);
                    puVar2 = PTR_DAT_0385db10;
                    if (self->m_slider_blinkMin != (void *)0x0) {
                      NativeHelper_0366284c(self->m_slider_blinkMin,1,0);
                      plVar12 = self->m_slider_blinkMin;
                      pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                      if ((pGVar7 != (Game_UserData *)0x0) &&
                         (iVar5 = Game_UserData_get_BlinkMin_18c96b8(pGVar7,(void *)0x0),
                         plVar12 != (long *)0x0)) {
                        (**(code **)(*plVar12 + 0x428))
                                  ((float)iVar5,plVar12,*(undefined8 *)(*plVar12 + 0x430));
                        plVar12 = self->m_txt_blinkMin;
                        pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                        puVar3 = PTR_DAT_0386ab90;
                        if (pGVar7 != (Game_UserData *)0x0) {
                          aiStack_44[0] = Game_UserData_get_BlinkMin_18c96b8(pGVar7,(void *)0x0);
                          puVar1 = PTR_DAT_0385c2d8;
                          uVar10 = NativeHelper_017ef40c
                                             (*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),aiStack_44);
                          uVar10 = NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar10,0);
                          if (plVar12 != (long *)0x0) {
                            (**(code **)(*plVar12 + 0x5e8))
                                      (plVar12,uVar10,*(undefined8 *)(*plVar12 + 0x5f0));
                            puVar4 = PTR_DAT_0386ab80;
                            puVar3 = PTR_DAT_0386ab70;
                            if (self->m_slider_blinkMin != (void *)0x0) {
                              lVar8 = *(long *)((long)self->m_slider_blinkMin + 0x128);
                              uVar10 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0386ab80);
                              NativeHelper_029ecb2c(uVar10,self,*(undefined8 *)puVar3,0);
                              puVar3 = PTR_DAT_0386ab88;
                              if (lVar8 != 0) {
                                NativeHelper_029eec38(lVar8,uVar10,*(undefined8 *)PTR_DAT_0386ab88);
                                if (self->m_slider_blinkMax != (void *)0x0) {
                                  NativeHelper_0366271c(0,self->m_slider_blinkMax,0);
                                  if (self->m_slider_blinkMax != (void *)0x0) {
                                    NativeHelper_036627b4(0x41f00000,self->m_slider_blinkMax,0);
                                    if (self->m_slider_blinkMax != (void *)0x0) {
                                      NativeHelper_0366284c(self->m_slider_blinkMax,1,0);
                                      plVar12 = self->m_slider_blinkMax;
                                      pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                                      if ((pGVar7 != (Game_UserData *)0x0) &&
                                         (iVar5 = Game_UserData_get_BlinkMax_18c9798
                                                            (pGVar7,(void *)0x0),
                                         plVar12 != (long *)0x0)) {
                                        (**(code **)(*plVar12 + 0x428))
                                                  ((float)iVar5,plVar12,
                                                   *(undefined8 *)(*plVar12 + 0x430));
                                        plVar12 = self->m_txt_blinkMax;
                                        pGVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
                                        puVar2 = PTR_DAT_0386ab98;
                                        if (pGVar7 != (Game_UserData *)0x0) {
                                          iStack_48 = Game_UserData_get_BlinkMax_18c9798
                                                                (pGVar7,(void *)0x0);
                                          uVar10 = NativeHelper_017ef40c
                                                             (*(undefined8 *)(puVar1 + 0x48),
                                                              &iStack_48);
                                          uVar10 = NativeHelper_02a9d074
                                                             (*(undefined8 *)puVar2,uVar10,0);
                                          if (plVar12 != (long *)0x0) {
                                            (**(code **)(*plVar12 + 0x5e8))
                                                      (plVar12,uVar10,
                                                       *(undefined8 *)(*plVar12 + 0x5f0));
                                            puVar2 = PTR_DAT_0386ab78;
                                            if (self->m_slider_blinkMax != (void *)0x0) {
                                              lVar8 = *(long *)((long)self->m_slider_blinkMax +
                                                               0x128);
                                              uVar10 = NativeHelper_017ef520(*(undefined8 *)puVar4);
                                              NativeHelper_029ecb2c
                                                        (uVar10,self,*(undefined8 *)puVar2,0);
                                              if (lVar8 != 0) {
                                                NativeHelper_029eec38
                                                          (lVar8,uVar10,*(undefined8 *)puVar3);
                                                puVar2 = PTR_DAT_0386ab68;
                                                if (self->m_btn_AddScore != (void *)0x0) {
                                                  pvVar11 = *(void **)((long)self->m_btn_AddScore +
                                                                      0x100);
                                                  pvVar6 = (void *)NativeHelper_017ef520
                                                                             (*(undefined8 *)
                                                                               PTR_DAT_038652e0);
                                                  UnityEngine_Events_UnityAction_UnityAction_325f530
                                                            (pvVar6,self,*(void **)puVar2,
                                                             (void *)0x0);
                                                  if (pvVar11 != (void *)0x0) {
                                                                                                        
                                                  UnityEngine_Events_UnityEvent_AddListener_325f600
                                                            (pvVar11,pvVar6,(void *)0x0);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

