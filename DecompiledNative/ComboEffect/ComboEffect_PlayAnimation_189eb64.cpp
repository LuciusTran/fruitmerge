// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayAnimation(int comboCount) { }
// Ghidra address: 019a2b64; ELF VA: 0x18a2b64; file offset: 0x189eb64
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ComboEffect_PlayAnimation_189eb64(ComboEffect *self,int comboCount,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  void *self_00;
  undefined8 uVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Recovered_Vector3 RVar20;
  Recovered_Vector3 value;
  undefined1 auStack_78 [12];
  float fStack_6c;
  float fStack_68;
  
  if ((bRam0000000003ab2240 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_038673c0);
    NativeHelper_017ef284(PTR_DAT_038685e8);
    NativeHelper_017ef284(PTR_DAT_038685f0);
    NativeHelper_017ef284(PTR_DAT_038685f8);
    bRam0000000003ab2240 = 1;
  }
  pvVar10 = self->m_NumberSprites;
  self->mComboCount = comboCount;
  if (pvVar10 != (void *)0x0) {
    uVar1 = *(uint *)((long)pvVar10 + 0x18);
    if ((int)uVar1 <= comboCount) {
      comboCount = uVar1 - 1;
    }
    if (uVar1 <= (uint)comboCount) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    if (self->m_NumberSpriteRenderer != (void *)0x0) {
      UnityEngine_SpriteRenderer_set_sprite_321501c
                (self->m_NumberSpriteRenderer,
                 *(void **)((long)pvVar10 + (long)comboCount * 8 + 0x20),(void *)0x0);
      pvVar10 = self->m_NumberSpriteRenderer;
      if (pvVar10 != (void *)0x0) {
        iVar5 = UnityEngine_Renderer_get_sortingOrder_322984c(pvVar10,(void *)0x0);
        UnityEngine_Renderer_set_sortingOrder_3229900(pvVar10,iVar5 + comboCount,(void *)0x0);
        if (self->m_NumberSpriteRenderer != (void *)0x0) {
          NativeHelper_0332c240(auStack_78,self->m_NumberSpriteRenderer,0);
          pvVar10 = (void *)NativeHelper_03320a8c(0);
          iVar5 = NativeHelper_0332971c(0);
          iVar6 = NativeHelper_03329744(0);
          lVar7 = NativeHelper_03320a8c(0);
          if ((lVar7 != 0) &&
             (self_00 = (void *)NativeHelper_0334f400(lVar7,0), self_00 != (void *)0x0)) {
            RVar20 = UnityEngine_Transform_get_position_325a714(self_00,(void *)0x0);
            if (pvVar10 != (void *)0x0) {
              RVar20.component1 = (float)iVar6;
              RVar20.component0 = (float)iVar5;
              RVar20 = UnityEngine_Camera_ScreenToWorldPoint_321c814(pvVar10,RVar20,(void *)0x0);
              fVar15 = RVar20.component1;
              fVar14 = RVar20.component0;
              pvVar10 = (void *)NativeHelper_0334f400(fVar14,fVar15,RVar20.component2,self,0);
              if (pvVar10 != (void *)0x0) {
                fVar19 = fStack_6c + fStack_6c;
                fVar18 = fStack_68 + fStack_68;
                RVar20 = UnityEngine_Transform_get_position_325a714(pvVar10,(void *)0x0);
                value.component2 = RVar20.component2;
                fVar17 = RVar20.component1;
                fVar16 = RVar20.component0;
                if (fVar19 + fVar16 <= fVar14) {
                  if (fVar16 - fVar19 < -fVar14) {
                    fVar16 = fVar19 - fVar14;
                  }
                }
                else {
                  fVar16 = fVar14 - fVar19;
                }
                if (fVar18 + fVar17 <= fVar15) {
                  if (fVar17 - fVar18 < -fVar15) {
                    fVar17 = fVar18 - fVar15;
                  }
                }
                else {
                  fVar17 = fVar15 - fVar18;
                }
                pvVar10 = (void *)NativeHelper_0334f400(self,0);
                puVar2 = PTR_DAT_0385c2a0;
                if (pvVar10 != (void *)0x0) {
                  value.component1 = fVar17;
                  value.component0 = fVar16;
                  UnityEngine_Transform_set_position_325a7e8(pvVar10,value,(void *)0x0);
                  pvVar10 = self->m_Animator;
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar10,(void *)0x0,(void *)0x0);
                  if (bVar4) {
                    if (self->m_Animator == (void *)0x0) goto LAB_019a2f44;
                    NativeHelper_03311224(self->m_Animator,*(undefined8 *)PTR_DAT_038685f8,0);
                  }
                  lVar7 = NativeHelper_03320a8c(0);
                  if (lVar7 != 0) {
                    uVar8 = NativeHelper_0334f400(lVar7,0);
                    NativeHelper_01a630d4(uVar8,0,0);
                    lVar7 = NativeHelper_03320a8c(0);
                    puVar2 = PTR_DAT_0385d918;
                    if (lVar7 != 0) {
                      pvVar10 = (void *)NativeHelper_0334f400(lVar7,0);
                      lVar7 = *(long *)puVar2;
                      if (*(int *)(lVar7 + 0xe4) == 0) {
                        NativeHelper_017ef404(lVar7);
                      }
                      if (pvVar10 != (void *)0x0) {
                        UnityEngine_Transform_set_position_325a7e8
                                  (pvVar10,*(Recovered_Vector3 *)
                                            (*(long *)(*(long *)puVar2 + 0xb8) + 0xc),(void *)0x0);
                        lVar7 = NativeHelper_03320a8c(0);
                        puVar3 = PTR_DAT_038685f0;
                        puVar2 = PTR_DAT_038673c0;
                        if (lVar7 != 0) {
                          uVar8 = NativeHelper_0334f400(lVar7,0);
                          uVar8 = NativeHelper_01a5f7b8
                                            (0x3f000000,_UNK_00a47714,0x42b40000,uVar8,10,0,1,0);
                          lVar7 = NativeHelper_01d70168(uVar8,1,*(undefined8 *)puVar2);
                          lVar11 = *(long *)puVar3;
                          if (*(int *)(lVar11 + 0xe4) == 0) {
                            NativeHelper_017ef404(lVar11);
                            lVar11 = *(long *)puVar3;
                          }
                          puVar12 = *(undefined8 **)(lVar11 + 0xb8);
                          lVar13 = puVar12[1];
                          if (lVar13 == 0) {
                            if (*(int *)(lVar11 + 0xe4) == 0) {
                              NativeHelper_017ef404(lVar11);
                              puVar12 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                            }
                            uVar8 = *puVar12;
                            lVar13 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866068);
                            NativeHelper_01a4f8cc(lVar13,uVar8,*(undefined8 *)PTR_DAT_038685e8,0);
                            plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                            *plVar9 = lVar13;
                            NativeHelper_017ef228(plVar9,lVar13);
                          }
                          if (lVar7 != 0) {
                            *(long *)(lVar7 + 0x80) = lVar13;
                            NativeHelper_017ef228((long *)(lVar7 + 0x80),lVar13);
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
LAB_019a2f44:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

