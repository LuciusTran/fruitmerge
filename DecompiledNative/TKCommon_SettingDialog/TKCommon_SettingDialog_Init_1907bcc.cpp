// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Init(Object[] data) { }
// Ghidra address: 01a0bbcc; ELF VA: 0x190bbcc; file offset: 0x1907bcc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_SettingDialog_Init_1907bcc
               (TKCommon_SettingDialog *self,void *data,void *runtimeMethod)

{
  LocalNotification_Action *pLVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  LocalNotification_Action *pLVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  void *y;
  float fVar12;
  float fVar13;
  Recovered_Rect RVar14;
  Recovered_Rect RVar15;
  
  if ((bRam0000000003ab265b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab265b = 1;
  }
  pvVar7 = (void *)0x0;
  Game_Controller_View_Init_18d579c((Game_Controller_View *)self,data,(void *)0x0);
  pvVar6 = (void *)NativeHelper_0334f4c8(self,0);
  TKCommon_SettingDialog_GetBindComponents_1907b00(self,pvVar6,pvVar7);
  if (data != (void *)0x0) {
    if (*(long *)((long)data + 0x18) != 0) {
      if ((int)*(long *)((long)data + 0x18) == 0) goto LAB_01a0bdec;
      pLVar8 = *(LocalNotification_Action **)((long)data + 0x20);
      if (pLVar8 == (LocalNotification_Action *)0x0) {
        pLVar8 = (LocalNotification_Action *)0x0;
        self->_homeAction = (LocalNotification_Action *)0x0;
      }
      else {
        lVar9 = *(long *)PTR_DAT_0385c9f8;
        pLVar1 = pLVar8;
        if (*(long *)pLVar8 != lVar9) {
          pLVar1 = (LocalNotification_Action *)0x0;
        }
        self->_homeAction = pLVar1;
        if (*(long *)pLVar8 != lVar9) {
          pLVar8 = (LocalNotification_Action *)0x0;
        }
      }
      NativeHelper_017ef228(&self->_homeAction,pLVar8);
      if ((*(uint *)((long)data + 0x18) & 0xfffffffe) == 0) goto LAB_01a0bdec;
      pLVar8 = *(LocalNotification_Action **)((long)data + 0x28);
      if (pLVar8 == (LocalNotification_Action *)0x0) {
        pLVar8 = (LocalNotification_Action *)0x0;
        self->_restartAction = (LocalNotification_Action *)0x0;
      }
      else {
        lVar9 = *(long *)PTR_DAT_0385c9f8;
        pLVar1 = pLVar8;
        if (*(long *)pLVar8 != lVar9) {
          pLVar1 = (LocalNotification_Action *)0x0;
        }
        self->_restartAction = pLVar1;
        if (*(long *)pLVar8 != lVar9) {
          pLVar8 = (LocalNotification_Action *)0x0;
        }
      }
      NativeHelper_017ef228(&self->_restartAction,pLVar8);
    }
    puVar2 = PTR_DAT_0385d918;
    pvVar6 = self->m_img_music;
    pvVar7 = self->m_Music_Sprites;
    if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = Global_get_IsActiveBgm_1803e7c((void *)0x0);
    if (pvVar7 != (void *)0x0) {
      if (*(uint *)((long)pvVar7 + 0x18) <= (uint)((ulong)~(uint)bVar3 & 1)) {
LAB_01a0bdec:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
      if (pvVar6 != (void *)0x0) {
        NativeHelper_0345dd98
                  (pvVar6,*(undefined8 *)((long)pvVar7 + ((ulong)~(uint)bVar3 & 1) * 8 + 0x20),0);
        pvVar6 = self->m_img_sound;
        pvVar7 = self->m_Sound_Sprites;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        bVar3 = Global_get_IsActiveSound_1803f24((void *)0x0);
        if (pvVar7 != (void *)0x0) {
          if (*(uint *)((long)pvVar7 + 0x18) <= (uint)((ulong)~(uint)bVar3 & 1)) goto LAB_01a0bdec;
          if (pvVar6 != (void *)0x0) {
            NativeHelper_0345dd98
                      (pvVar6,*(undefined8 *)((long)pvVar7 + ((ulong)~(uint)bVar3 & 1) * 8 + 0x20),0
                      );
            plVar10 = self->m_img_vibration;
            pvVar6 = self->m_Vibration_Sprites;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            bVar3 = Global_get_IsActiveVibrate_1803fcc((void *)0x0);
            puVar2 = PTR_DAT_0385c2a0;
            if (pvVar6 != (void *)0x0) {
              if (*(uint *)((long)pvVar6 + 0x18) <= (bVar3 ^ 1)) goto LAB_01a0bdec;
              if (plVar10 != (long *)0x0) {
                pvVar6 = *(void **)((long)pvVar6 + (ulong)(bVar3 ^ 1) * 8 + 0x20);
                if ((bRam0000000003abdbf8 & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_0385c2a0,pvVar6,0);
                  bRam0000000003abdbf8 = 1;
                }
                plVar11 = plVar10 + 0x1b;
                pvVar7 = (void *)*plVar11;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
                if (bVar3) {
                  pvVar7 = (void *)*plVar11;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar7,pvVar6,(void *)0x0);
                  if (bVar3) {
                    if ((void *)*plVar11 != (void *)0x0) {
                      RVar14 = UnityEngine_Sprite_get_rect_3215e54((void *)*plVar11,(void *)0x0);
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        NativeHelper_017ef404(RVar14.component0,RVar14.component1);
                      }
                      bVar3 = UnityEngine_object_op_Implicit_3252d84(pvVar6,(void *)0x0);
                      if (bVar3) {
                        if (pvVar6 == (void *)0x0) goto code_r0x0345e0a4;
                        RVar15 = UnityEngine_Sprite_get_rect_3215e54(pvVar6,(void *)0x0);
                        fVar13 = RVar15.component3;
                        fVar12 = RVar15.component2;
                      }
                      else {
                        if (cRam0000000003ab1e71 == '\0') {
                          NativeHelper_017ef284(PTR_DAT_0385d978);
                          cRam0000000003ab1e71 = '\x01';
                        }
                        fVar12 = **(float **)(*(long *)PTR_DAT_0385d978 + 0xb8);
                        fVar13 = (*(float **)(*(long *)PTR_DAT_0385d978 + 0xb8))[1];
                      }
                      bVar3 = false;
                      if ((RVar14.component3 == fVar13) &&
                         (bVar3 = false, !NAN(RVar14.component2) && !NAN(fVar12))) {
                        bVar3 = RVar14.component2 == fVar12;
                      }
                      *(bool *)(plVar10 + 7) = bVar3;
                      if ((void *)plVar10[0x1b] != (void *)0x0) {
                        pvVar7 = UnityEngine_Sprite_get_texture_3216004
                                           ((void *)plVar10[0x1b],(void *)0x0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          NativeHelper_017ef404(*(long *)puVar2);
                        }
                        bVar3 = UnityEngine_object_op_Implicit_3252d84(pvVar6,(void *)0x0);
                        y = (void *)0x0;
                        if (bVar3) {
                          if (pvVar6 == (void *)0x0) goto code_r0x0345e0a4;
                          y = UnityEngine_Sprite_get_texture_3216004(pvVar6,(void *)0x0);
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          NativeHelper_017ef404();
                        }
                        bVar3 = UnityEngine_object_op_Equality_324f284(pvVar7,y,(void *)0x0);
                        if (bVar3) {
                          bVar4 = func_0x0346acd4(plVar10,pvVar6);
                          bVar4 = bVar4 ^ 1;
                        }
                        else {
                          bVar4 = 0;
                        }
                        bVar3 = (bool)(bVar4 & 1);
                        goto code_r0x0345e058;
                      }
                    }
code_r0x0345e0a4:
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef530();
                  }
                }
                else {
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
                  if (bVar3) {
                    if (pvVar6 == (void *)0x0) goto code_r0x0345e0a4;
                    RVar14 = UnityEngine_Sprite_get_rect_3215e54(pvVar6,(void *)0x0);
                    if (cRam0000000003ab1e71 == '\0') {
                      NativeHelper_017ef284(RVar14.component0,RVar14.component1,PTR_DAT_0385d978);
                      cRam0000000003ab1e71 = '\x01';
                    }
                    fVar12 = RVar14.component2 - **(float **)(*(long *)PTR_DAT_0385d978 + 0xb8);
                    fVar13 = RVar14.component3 - (*(float **)(*(long *)PTR_DAT_0385d978 + 0xb8))[1];
                    *(bool *)(plVar10 + 7) = fVar12 * fVar12 + fVar13 * fVar13 < _UNK_00a47548;
                    pvVar7 = UnityEngine_Sprite_get_texture_3216004(pvVar6,(void *)0x0);
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      NativeHelper_017ef404(*(long *)puVar2);
                    }
                    bVar3 = UnityEngine_object_op_Equality_324f284(pvVar7,(void *)0x0,(void *)0x0);
                    if (bVar3) {
                      iVar5 = UnityEngine_Sprite_GetSecondaryTextureCount_32160d4
                                        (pvVar6,(void *)0x0);
                      bVar3 = iVar5 == 0;
                    }
                    else {
                      bVar3 = false;
                    }
code_r0x0345e058:
                    *(bool *)((long)plVar10 + 0x39) = bVar3;
                    plVar10[0x1b] = (long)pvVar6;
                    NativeHelper_017ef228(plVar11,pvVar6);
                    func_0x0346ad60(plVar10);
                    (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
                    puVar2 = PTR_DAT_0385c2a0;
                    if ((bRam0000000003abdc0c & 1) == 0) {
                      NativeHelper_017ef284(PTR_DAT_03865030);
                      NativeHelper_017ef284(PTR_DAT_0385c2a0);
                      bRam0000000003abdc0c = 1;
                    }
                    pvVar6 = (void *)func_0x0346aee8(plVar10);
                    lVar9 = *(long *)puVar2;
                    if (*(int *)(lVar9 + 0xe4) == 0) {
                      NativeHelper_017ef404(lVar9);
                    }
                    bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0)
                    ;
                    if (bVar3) {
                      pvVar6 = (void *)func_0x0346aee8(plVar10);
                      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                        NativeHelper_017ef530();
                      }
                      pvVar6 = UnityEngine_Sprite_get_texture_3216004(pvVar6,(void *)0x0);
                      lVar9 = *(long *)puVar2;
                      if (*(int *)(lVar9 + 0xe4) == 0) {
                        NativeHelper_017ef404(lVar9);
                      }
                      bVar3 = UnityEngine_object_op_Equality_324f284(pvVar6,(void *)0x0,(void *)0x0)
                      ;
                      if (bVar3) {
                        if (*(int *)(*(long *)PTR_DAT_03865030 + 0xe4) == 0) {
                          NativeHelper_017ef404();
                        }
                        func_0x0346e398(plVar10);
                        *(undefined1 *)((long)plVar10 + 0x104) = 1;
                      }
                    }
                    return;
                  }
                }
                return;
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

