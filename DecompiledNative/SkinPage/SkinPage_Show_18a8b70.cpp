// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal virtual void Show() { }
// Ghidra address: 019acb70; ELF VA: 0x18acb70; file offset: 0x18a8b70
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinPage_Show_18a8b70(SkinPage *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  void *original;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  Game_UserData *pGVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  SkinItemData *pSVar17;
  SkinItem *pSVar18;
  ulong uVar19;
  void *extraout_x1;
  undefined8 uVar20;
  void *in_x4;
  undefined8 *puVar21;
  void *parent;
  long lVar22;
  int iVar23;
  long lVar24;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  SkinItemData *pSStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  SkinItemData *pSStack_70;
  void *pvStack_68;
  
  puVar1 = PTR_DAT_03868988;
  puVar2 = PTR_DAT_03868770;
  if ((bRam0000000003ab2297 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03868988);
    NativeHelper_017ef284(PTR_DAT_03868770);
    bRam0000000003ab2297 = 1;
    runtimeMethod = extraout_x1;
  }
  MainBasePage_Show_18a11d0((MainBasePage *)self,runtimeMethod);
  pvVar9 = Game_Controller_FMViewController_GetView_1b724a8(*(void **)puVar2,*(void **)puVar1);
  if (self->_hasCreated == false) {
    self->_hasCreated = true;
    if (pvVar9 != (void *)0x0) {
      uVar20 = *(undefined8 *)((long)pvVar9 + 0x70);
      if ((bRam0000000003ab2298 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385dae0);
        NativeHelper_017ef284(PTR_DAT_0385dae8);
        NativeHelper_017ef284(PTR_DAT_0385daf0);
        NativeHelper_017ef284(PTR_DAT_03868a50);
        NativeHelper_017ef284(PTR_DAT_03868a58);
        NativeHelper_017ef284(PTR_DAT_03868a60);
        NativeHelper_017ef284(PTR_DAT_03868a68);
        NativeHelper_017ef284(PTR_DAT_03868a70);
        NativeHelper_017ef284(PTR_DAT_0385db08);
        NativeHelper_017ef284(PTR_DAT_03868a78);
        NativeHelper_017ef284(PTR_DAT_03868a80);
        NativeHelper_017ef284(PTR_DAT_03868a88);
        NativeHelper_017ef284(PTR_DAT_038674d0);
        NativeHelper_017ef284(PTR_DAT_03868698);
        NativeHelper_017ef284(PTR_DAT_0385c2a0);
        NativeHelper_017ef284(PTR_DAT_03868a90);
        NativeHelper_017ef284(PTR_DAT_038678b8);
        NativeHelper_017ef284(PTR_DAT_0385db10);
        NativeHelper_017ef284(PTR_DAT_03868a98);
        NativeHelper_017ef284(PTR_DAT_03868aa0);
        NativeHelper_017ef284(PTR_DAT_0385f108);
        NativeHelper_017ef284(PTR_DAT_0385db18);
        NativeHelper_017ef284(PTR_DAT_0385db20);
        NativeHelper_017ef284(PTR_DAT_03861a08);
        NativeHelper_017ef284(PTR_DAT_03868aa8);
        NativeHelper_017ef284(PTR_DAT_0385dab8);
        bRam0000000003ab2298 = 1;
      }
      puVar2 = PTR_DAT_0385db10;
      uStack_80 = 0;
      puStack_78 = (undefined8 *)0x0;
      pSStack_70 = (SkinItemData *)0x0;
      if (self->_scrollRect != (void *)0x0) {
        parent = *(void **)((long)self->_scrollRect + 0x20);
        pvVar9 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        puVar3 = PTR_DAT_03868a68;
        puVar1 = PTR_DAT_03868a60;
        if (pvVar9 != (void *)0x0) {
          uVar11 = Game_UserData_GetUserSkins_18cf7ac(pvVar9,0);
          lVar22 = NativeHelper_017ef520(*(undefined8 *)puVar3);
          NativeHelper_023cf2c4(lVar22,uVar11,*(undefined8 *)puVar1);
          pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar2);
          puVar5 = PTR_DAT_03868aa8;
          puVar4 = PTR_DAT_03868aa0;
          puVar3 = PTR_DAT_03868a88;
          puVar1 = PTR_DAT_038678b8;
          puVar2 = PTR_DAT_038674d0;
          if (pGVar13 != (Game_UserData *)0x0) {
            pvVar9 = Game_UserData_GetUsingSkin_18cf374(pGVar13,(void *)0x0);
            original = Game_Manager_ResManager_Load_1c3e9e0
                                 (*(void **)puVar5,(void *)0x0,*(void **)puVar1);
            lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar2);
            NativeHelper_025690b0(lVar12,uVar20,*(undefined8 *)puVar3);
            lVar14 = *(long *)puVar4;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              NativeHelper_017ef404();
              lVar14 = *(long *)puVar4;
            }
            puVar21 = *(undefined8 **)(lVar14 + 0xb8);
            lVar15 = puVar21[1];
            if (lVar15 == 0) {
              if (*(int *)(lVar14 + 0xe4) == 0) {
                NativeHelper_017ef404();
                puVar21 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
              }
              uVar20 = *puVar21;
              lVar15 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868a90);
              NativeHelper_02731c08(lVar15,uVar20,*(undefined8 *)PTR_DAT_03868a98,0);
              plVar16 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
              *plVar16 = lVar15;
              NativeHelper_017ef228(plVar16,lVar15);
            }
            puVar2 = PTR_DAT_0385db08;
            if (lVar12 != 0) {
              lVar14 = NativeHelper_02569e14(lVar12,lVar15,*(undefined8 *)PTR_DAT_03868a70);
              puVar1 = PTR_DAT_03868a78;
              if (lVar14 != 0) {
                NativeHelper_0256ac7c(lVar12,lVar14,*(undefined8 *)PTR_DAT_03868a80);
                NativeHelper_0256a528(lVar12,0,lVar14,*(undefined8 *)puVar1);
              }
              puVar4 = PTR_DAT_03868a58;
              puVar3 = PTR_DAT_0385dae8;
              puVar1 = PTR_DAT_0385c2a0;
              NativeHelper_0256a338(&uStack_98,lVar12,*(undefined8 *)puVar2);
              pSStack_70 = pSStack_88;
              puStack_78 = puStack_90;
              uStack_80 = uStack_98;
              uStack_98 = 0;
              puStack_90 = &uStack_80;
              while (uVar19 = NativeHelper_02240184(&uStack_80,*(undefined8 *)puVar3),
                    pSVar17 = pSStack_70, (uVar19 & 1) != 0) {
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                pvVar10 = UnityEngine_object_Instantiate_1ba983c
                                    (original,parent,*(void **)PTR_DAT_03868698);
                if (pvVar10 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef530();
                }
                pSVar18 = UnityEngine_GameObject_GetComponent_1b75510
                                    (pvVar10,*(void **)PTR_DAT_03868a50);
                if (pSVar17 == (SkinItemData *)0x0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef530();
                }
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef530();
                }
                uVar19 = NativeHelper_023cf8d8(lVar22,pSVar17->Name,*(undefined8 *)puVar4);
                if ((uVar19 & 1) == 0) {
                  pvVar10 = pSVar17->Type;
                  uVar19 = NativeHelper_02aa50f0(pvVar10,*(undefined8 *)PTR_DAT_0385db18,0);
                  if ((uVar19 & 1) == 0) {
                    uVar19 = NativeHelper_02aa50f0(pvVar10,*(undefined8 *)PTR_DAT_0385db20,0);
                    if ((uVar19 & 1) == 0) {
                      uVar19 = NativeHelper_02aa50f0(pvVar10,*(undefined8 *)PTR_DAT_0385f108,0);
                      if ((uVar19 & 1) == 0) {
                        uVar19 = NativeHelper_02aa50f0(pvVar10,*(undefined8 *)PTR_DAT_0385dab8,0);
                        if ((uVar19 & 1) == 0) {
                          uVar19 = NativeHelper_02aa50f0(pvVar10,*(undefined8 *)PTR_DAT_03861a08,0);
                          uVar8 = 7;
                          if ((uVar19 & 1) == 0) {
                            uVar8 = 2;
                          }
                          pvVar10 = (void *)(ulong)uVar8;
                        }
                        else {
                          pvVar10 = (void *)0x6;
                        }
                      }
                      else {
                        pvVar10 = (void *)0x5;
                      }
                    }
                    else {
                      pvVar10 = (void *)0x4;
                    }
                  }
                  else {
                    pvVar10 = (void *)0x3;
                  }
                }
                else {
                  uVar8 = NativeHelper_02aa50f0(pSVar17->Name,pvVar9,0);
                  pvVar10 = (void *)(ulong)((uVar8 ^ 0xffffffff) & 1);
                }
                if (pSVar18 == (SkinItem *)0x0) {
                    /* WARNING: Subroutine does not return */
                  NativeHelper_017ef530();
                }
                SkinItem_SetState_18a7bb8(pSVar18,pvVar10,pSVar17,true,in_x4);
              }
              NativeHelper_02240180(&uStack_80,*(undefined8 *)PTR_DAT_0385dae0);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              pvVar9 = UnityEngine_object_Instantiate_1ba983c
                                 (original,parent,*(void **)PTR_DAT_03868698);
              if ((pvVar9 != (void *)0x0) &&
                 (pSVar18 = UnityEngine_GameObject_GetComponent_1b75510
                                      (pvVar9,*(void **)PTR_DAT_03868a50),
                 pSVar18 != (SkinItem *)0x0)) {
                SkinItem_SetState_18a7bb8(pSVar18,(void *)0x2,(SkinItemData *)0x0,true,in_x4);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  else if (pvVar9 != (void *)0x0) {
    uVar20 = *(undefined8 *)((long)pvVar9 + 0x70);
    if ((bRam0000000003ab2299 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_03868ab0);
      NativeHelper_017ef284(PTR_DAT_03868a58);
      NativeHelper_017ef284(PTR_DAT_03868a60);
      NativeHelper_017ef284(PTR_DAT_03868a68);
      NativeHelper_017ef284(PTR_DAT_03868a70);
      NativeHelper_017ef284(PTR_DAT_03868a78);
      NativeHelper_017ef284(PTR_DAT_03868a80);
      NativeHelper_017ef284(PTR_DAT_03868a88);
      NativeHelper_017ef284(PTR_DAT_03868ab8);
      NativeHelper_017ef284(PTR_DAT_03868ac0);
      NativeHelper_017ef284(PTR_DAT_038674d0);
      NativeHelper_017ef284(PTR_DAT_0385c2a0);
      NativeHelper_017ef284(PTR_DAT_03868a90);
      NativeHelper_017ef284(PTR_DAT_0385db10);
      NativeHelper_017ef284(PTR_DAT_03868ac8);
      NativeHelper_017ef284(PTR_DAT_03868aa0);
      NativeHelper_017ef284(PTR_DAT_0385f108);
      NativeHelper_017ef284(PTR_DAT_0385db18);
      NativeHelper_017ef284(PTR_DAT_0385db20);
      NativeHelper_017ef284(PTR_DAT_03861a08);
      NativeHelper_017ef284(PTR_DAT_0385dab8);
      bRam0000000003ab2299 = 1;
    }
    puVar2 = PTR_DAT_0385db10;
    if (self->_scrollRect != (void *)0x0) {
      lVar22 = *(long *)((long)self->_scrollRect + 0x20);
      pvVar9 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
      puVar3 = PTR_DAT_03868a68;
      puVar1 = PTR_DAT_03868a60;
      if (pvVar9 != (void *)0x0) {
        uVar11 = Game_UserData_GetUserSkins_18cf7ac(pvVar9,0);
        lVar12 = NativeHelper_017ef520(*(undefined8 *)puVar3);
        NativeHelper_023cf2c4(lVar12,uVar11,*(undefined8 *)puVar1);
        pGVar13 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        puVar3 = PTR_DAT_03868aa0;
        puVar1 = PTR_DAT_03868a88;
        puVar2 = PTR_DAT_038674d0;
        if (pGVar13 != (Game_UserData *)0x0) {
          pvStack_68 = Game_UserData_GetUsingSkin_18cf374(pGVar13,(void *)0x0);
          lVar14 = NativeHelper_017ef520(*(undefined8 *)puVar2);
          NativeHelper_025690b0(lVar14,uVar20,*(undefined8 *)puVar1);
          lVar15 = *(long *)puVar3;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar15 = *(long *)puVar3;
          }
          puVar21 = *(undefined8 **)(lVar15 + 0xb8);
          lVar24 = puVar21[2];
          if (lVar24 == 0) {
            if (*(int *)(lVar15 + 0xe4) == 0) {
              NativeHelper_017ef404();
              puVar21 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
            }
            uVar20 = *puVar21;
            lVar24 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868a90);
            NativeHelper_02731c08(lVar24,uVar20,*(undefined8 *)PTR_DAT_03868ac8,0);
            plVar16 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            *plVar16 = lVar24;
            NativeHelper_017ef228(plVar16,lVar24);
          }
          if (lVar14 != 0) {
            lVar15 = NativeHelper_02569e14(lVar14,lVar24,*(undefined8 *)PTR_DAT_03868a70);
            puVar2 = PTR_DAT_03868a78;
            if (lVar15 != 0) {
              NativeHelper_0256ac7c(lVar14,lVar15,*(undefined8 *)PTR_DAT_03868a80);
              NativeHelper_0256a528(lVar14,0,lVar15,*(undefined8 *)puVar2);
            }
            puVar4 = PTR_DAT_03868ac0;
            puVar3 = PTR_DAT_03868ab0;
            puVar1 = PTR_DAT_03868a58;
            puVar2 = PTR_DAT_0385c2a0;
            if (0 < *(int *)(lVar14 + 0x18)) {
              iVar23 = 0;
              do {
                pSVar17 = (SkinItemData *)NativeHelper_0256950c(lVar14,iVar23,*(undefined8 *)puVar4)
                ;
                if (lVar22 == 0) goto LAB_019ad688;
                iVar7 = NativeHelper_0335fe50(lVar22,0);
                if (iVar7 <= iVar23) {
                  return;
                }
                pvVar9 = (void *)NativeHelper_0336077c(lVar22,iVar23,0);
                if (pvVar9 == (void *)0x0) goto LAB_019ad688;
                pSVar18 = UnityEngine_Component_GetComponent_1b08498(pvVar9,*(void **)puVar3);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  NativeHelper_017ef404(*(long *)puVar2);
                }
                bVar6 = UnityEngine_object_op_Equality_324f284(pSVar18,(void *)0x0,(void *)0x0);
                if (!bVar6) {
                  if ((pSVar17 == (SkinItemData *)0x0) || (lVar12 == 0)) goto LAB_019ad688;
                  uVar19 = NativeHelper_023cf8d8(lVar12,pSVar17->Name,*(undefined8 *)puVar1);
                  if ((uVar19 & 1) == 0) {
                    pvVar9 = pSVar17->Type;
                    uVar19 = NativeHelper_02aa50f0(pvVar9,*(undefined8 *)PTR_DAT_0385db18,0);
                    if ((uVar19 & 1) == 0) {
                      uVar19 = NativeHelper_02aa50f0(pvVar9,*(undefined8 *)PTR_DAT_0385db20,0);
                      if ((uVar19 & 1) == 0) {
                        uVar19 = NativeHelper_02aa50f0(pvVar9,*(undefined8 *)PTR_DAT_0385f108,0);
                        if ((uVar19 & 1) == 0) {
                          uVar19 = NativeHelper_02aa50f0(pvVar9,*(undefined8 *)PTR_DAT_0385dab8,0);
                          if ((uVar19 & 1) == 0) {
                            uVar19 = NativeHelper_02aa50f0(pvVar9,*(undefined8 *)PTR_DAT_03861a08,0)
                            ;
                            uVar8 = 7;
                            if ((uVar19 & 1) == 0) {
                              uVar8 = 2;
                            }
                            pvVar9 = (void *)(ulong)uVar8;
                          }
                          else {
                            pvVar9 = (void *)0x6;
                          }
                        }
                        else {
                          pvVar9 = (void *)0x5;
                        }
                      }
                      else {
                        pvVar9 = (void *)0x4;
                      }
                    }
                    else {
                      pvVar9 = (void *)0x3;
                    }
                  }
                  else {
                    uVar8 = NativeHelper_02aa50f0(pSVar17->Name,pvStack_68,0);
                    pvVar9 = (void *)(ulong)((uVar8 ^ 0xffffffff) & 1);
                  }
                  if (pSVar18 == (SkinItem *)0x0) goto LAB_019ad688;
                  SkinItem_SetState_18a7bb8(pSVar18,pvVar9,pSVar17,true,in_x4);
                }
                iVar23 = iVar23 + 1;
              } while (iVar23 < *(int *)(lVar14 + 0x18));
            }
            return;
          }
        }
      }
    }
LAB_019ad688:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

