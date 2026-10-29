// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshSubscriptionIcon() { }
// Ghidra address: 019f5e74; ELF VA: 0x18f5e74; file offset: 0x18f1e74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_RefreshSubscriptionIcon_18f1e74
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long *x;
  TKLClient_TKLSwitcherConfig *pTVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  void *x_00;
  long *plVar9;
  float fVar10;
  float fVar11;
  Recovered_Rect RVar12;
  Recovered_Rect RVar13;
  
  TKCommon_PlayGameView_CacheSubscriptionIcon_18f20f4(self,runtimeMethod);
  puVar1 = PTR_DAT_0385c2a0;
  x = self->_removeAdIconImage;
  pvVar6 = self->_subscriptionIconSprite;
  pvVar7 = self->m_RemoveAdsIconSprite;
  if ((bRam0000000003ab2727 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918,pvVar6,pvVar7,0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2727 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar5 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar5 == (TKLClient_TKLSwitcherConfig *)0x0) {
code_r0x01a24254:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    x_00 = pvVar6;
    if (pTVar5->ShowRemoveAdIconForSubscription != false) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
      x_00 = pvVar7;
      if (!bVar2) {
        x_00 = pvVar6;
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Inequality_324dec8(x_00,(void *)0x0,(void *)0x0);
    if (bVar2) {
      if (x == (long *)0x0) goto code_r0x01a24254;
      pvVar6 = (void *)x[0x1b];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar6,x_00,(void *)0x0);
      puVar1 = PTR_DAT_0385c2a0;
      if (bVar2) {
        if ((bRam0000000003abdbf8 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385c2a0,x_00,0);
          bRam0000000003abdbf8 = 1;
        }
        plVar9 = x + 0x1b;
        pvVar6 = (void *)*plVar9;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
        if (bVar2) {
          pvVar6 = (void *)*plVar9;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar6,x_00,(void *)0x0);
          if (bVar2) {
            if ((void *)*plVar9 != (void *)0x0) {
              RVar12 = UnityEngine_Sprite_get_rect_3215e54((void *)*plVar9,(void *)0x0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                NativeHelper_017ef404(RVar12.component0,RVar12.component1);
              }
              bVar2 = UnityEngine_object_op_Implicit_3252d84(x_00,(void *)0x0);
              if (bVar2) {
                if (x_00 == (void *)0x0) goto code_r0x0345e0a4;
                RVar13 = UnityEngine_Sprite_get_rect_3215e54(x_00,(void *)0x0);
                fVar11 = RVar13.component3;
                fVar10 = RVar13.component2;
              }
              else {
                if (cRam0000000003ab1e71 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_0385d978);
                  cRam0000000003ab1e71 = '\x01';
                }
                fVar10 = **(float **)(*(long *)PTR_DAT_0385d978 + 0xb8);
                fVar11 = (*(float **)(*(long *)PTR_DAT_0385d978 + 0xb8))[1];
              }
              bVar2 = false;
              if ((RVar12.component3 == fVar11) &&
                 (bVar2 = false, !NAN(RVar12.component2) && !NAN(fVar10))) {
                bVar2 = RVar12.component2 == fVar10;
              }
              *(bool *)(x + 7) = bVar2;
              if ((void *)x[0x1b] != (void *)0x0) {
                pvVar6 = UnityEngine_Sprite_get_texture_3216004((void *)x[0x1b],(void *)0x0);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  NativeHelper_017ef404(*(long *)puVar1);
                }
                bVar2 = UnityEngine_object_op_Implicit_3252d84(x_00,(void *)0x0);
                pvVar7 = (void *)0x0;
                if (bVar2) {
                  if (x_00 == (void *)0x0) goto code_r0x0345e0a4;
                  pvVar7 = UnityEngine_Sprite_get_texture_3216004(x_00,(void *)0x0);
                }
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                bVar2 = UnityEngine_object_op_Equality_324f284(pvVar6,pvVar7,(void *)0x0);
                if (bVar2) {
                  bVar3 = func_0x0346acd4(x,x_00);
                  bVar3 = bVar3 ^ 1;
                }
                else {
                  bVar3 = 0;
                }
                bVar2 = (bool)(bVar3 & 1);
                goto code_r0x0345e058;
              }
            }
code_r0x0345e0a4:
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          bVar2 = UnityEngine_object_op_Inequality_324dec8(x_00,(void *)0x0,(void *)0x0);
          if (bVar2) {
            if (x_00 == (void *)0x0) goto code_r0x0345e0a4;
            RVar12 = UnityEngine_Sprite_get_rect_3215e54(x_00,(void *)0x0);
            if (cRam0000000003ab1e71 == '\0') {
              NativeHelper_017ef284(RVar12.component0,RVar12.component1,PTR_DAT_0385d978);
              cRam0000000003ab1e71 = '\x01';
            }
            fVar10 = RVar12.component2 - **(float **)(*(long *)PTR_DAT_0385d978 + 0xb8);
            fVar11 = RVar12.component3 - (*(float **)(*(long *)PTR_DAT_0385d978 + 0xb8))[1];
            *(bool *)(x + 7) = fVar10 * fVar10 + fVar11 * fVar11 < _UNK_00a47548;
            pvVar6 = UnityEngine_Sprite_get_texture_3216004(x_00,(void *)0x0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              NativeHelper_017ef404(*(long *)puVar1);
            }
            bVar2 = UnityEngine_object_op_Equality_324f284(pvVar6,(void *)0x0,(void *)0x0);
            if (bVar2) {
              iVar4 = UnityEngine_Sprite_GetSecondaryTextureCount_32160d4(x_00,(void *)0x0);
              bVar2 = iVar4 == 0;
            }
            else {
              bVar2 = false;
            }
code_r0x0345e058:
            *(bool *)((long)x + 0x39) = bVar2;
            x[0x1b] = (long)x_00;
            NativeHelper_017ef228(plVar9,x_00);
            func_0x0346ad60(x);
            (**(code **)(*x + 0x2d8))(x,*(undefined8 *)(*x + 0x2e0));
            puVar1 = PTR_DAT_0385c2a0;
            if ((bRam0000000003abdc0c & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_03865030);
              NativeHelper_017ef284(PTR_DAT_0385c2a0);
              bRam0000000003abdc0c = 1;
            }
            pvVar6 = (void *)func_0x0346aee8(x);
            lVar8 = *(long *)puVar1;
            if (*(int *)(lVar8 + 0xe4) == 0) {
              NativeHelper_017ef404(lVar8);
            }
            bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
            if (bVar2) {
              pvVar6 = (void *)func_0x0346aee8(x);
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
              pvVar6 = UnityEngine_Sprite_get_texture_3216004(pvVar6,(void *)0x0);
              lVar8 = *(long *)puVar1;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                NativeHelper_017ef404(lVar8);
              }
              bVar2 = UnityEngine_object_op_Equality_324f284(pvVar6,(void *)0x0,(void *)0x0);
              if (bVar2) {
                if (*(int *)(*(long *)PTR_DAT_03865030 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                func_0x0346e398(x);
                *(undefined1 *)((long)x + 0x104) = 1;
              }
            }
            return;
          }
        }
        return;
      }
    }
  }
  return;
}

