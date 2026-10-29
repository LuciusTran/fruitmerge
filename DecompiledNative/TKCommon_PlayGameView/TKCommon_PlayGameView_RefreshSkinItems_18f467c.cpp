// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshSkinItems(List<SkinItemData> skinItems) { }
// Ghidra address: 019f867c; ELF VA: 0x18f867c; file offset: 0x18f467c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_RefreshSkinItems_18f467c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  Game_UserData *self;
  long lVar11;
  long lVar12;
  long *plVar13;
  SkinItemData *itemData;
  void *pvVar14;
  SkinItem *self_00;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  
  if ((bRam0000000003ab25c6 & 1) == 0) {
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
    NativeHelper_017ef284(PTR_DAT_0386acd0);
    NativeHelper_017ef284(PTR_DAT_0386ab40);
    NativeHelper_017ef284(PTR_DAT_0385f108);
    NativeHelper_017ef284(PTR_DAT_0385db18);
    NativeHelper_017ef284(PTR_DAT_0385db20);
    NativeHelper_017ef284(PTR_DAT_03861a08);
    NativeHelper_017ef284(PTR_DAT_0385dab8);
    bRam0000000003ab25c6 = 1;
  }
  puVar1 = PTR_DAT_0385db10;
  if (*(long *)(param_1 + 0x220) != 0) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x220) + 0x20);
    pvVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    puVar3 = PTR_DAT_03868a68;
    puVar2 = PTR_DAT_03868a60;
    if (pvVar8 != (void *)0x0) {
      uVar9 = Game_UserData_GetUserSkins_18cf7ac(pvVar8,0);
      lVar10 = NativeHelper_017ef520(*(undefined8 *)puVar3);
      NativeHelper_023cf2c4(lVar10,uVar9,*(undefined8 *)puVar2);
      self = Singleton_get_Instance_27784f4(*(void **)puVar1);
      puVar3 = PTR_DAT_0386ab40;
      puVar2 = PTR_DAT_03868a88;
      puVar1 = PTR_DAT_038674d0;
      if (self != (Game_UserData *)0x0) {
        pvVar8 = Game_UserData_GetUsingSkin_18cf374(self,(void *)0x0);
        lVar11 = NativeHelper_017ef520(*(undefined8 *)puVar1);
        NativeHelper_025690b0(lVar11,param_2,*(undefined8 *)puVar2);
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar12 = *(long *)puVar3;
        }
        puVar16 = *(undefined8 **)(lVar12 + 0xb8);
        lVar19 = puVar16[4];
        if (lVar19 == 0) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            NativeHelper_017ef404();
            puVar16 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar9 = *puVar16;
          lVar19 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868a90);
          NativeHelper_02731c08(lVar19,uVar9,*(undefined8 *)PTR_DAT_0386acd0,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
          *plVar13 = lVar19;
          NativeHelper_017ef228(plVar13,lVar19);
        }
        if (lVar11 != 0) {
          lVar12 = NativeHelper_02569e14(lVar11,lVar19,*(undefined8 *)PTR_DAT_03868a70);
          puVar1 = PTR_DAT_03868a78;
          if (lVar12 != 0) {
            NativeHelper_0256ac7c(lVar11,lVar12,*(undefined8 *)PTR_DAT_03868a80);
            NativeHelper_0256a528(lVar11,0,lVar12,*(undefined8 *)puVar1);
          }
          puVar4 = PTR_DAT_03868ac0;
          puVar3 = PTR_DAT_03868ab0;
          puVar2 = PTR_DAT_03868a58;
          puVar1 = PTR_DAT_0385c2a0;
          if (0 < *(int *)(lVar11 + 0x18)) {
            iVar18 = 0;
            do {
              itemData = (SkinItemData *)NativeHelper_0256950c(lVar11,iVar18,*(undefined8 *)puVar4);
              if (lVar17 == 0) goto LAB_019f8b04;
              iVar6 = NativeHelper_0335fe50(lVar17,0);
              if (iVar6 <= iVar18) {
                return;
              }
              pvVar14 = (void *)NativeHelper_0336077c(lVar17,iVar18,0);
              if (pvVar14 == (void *)0x0) goto LAB_019f8b04;
              self_00 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)puVar3);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                NativeHelper_017ef404(*(long *)puVar1);
              }
              bVar5 = UnityEngine_object_op_Equality_324f284(self_00,(void *)0x0,(void *)0x0);
              if (!bVar5) {
                if ((itemData == (SkinItemData *)0x0) || (lVar10 == 0)) goto LAB_019f8b04;
                uVar15 = NativeHelper_023cf8d8(lVar10,itemData->Name,*(undefined8 *)puVar2);
                if ((uVar15 & 1) == 0) {
                  pvVar14 = itemData->Type;
                  uVar15 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385db18,0);
                  if ((uVar15 & 1) == 0) {
                    uVar15 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385db20,0);
                    if ((uVar15 & 1) == 0) {
                      uVar15 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385f108,0);
                      if ((uVar15 & 1) == 0) {
                        uVar15 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385dab8,0);
                        if ((uVar15 & 1) == 0) {
                          uVar15 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_03861a08,0);
                          uVar7 = 7;
                          if ((uVar15 & 1) == 0) {
                            uVar7 = 2;
                          }
                          pvVar14 = (void *)(ulong)uVar7;
                        }
                        else {
                          pvVar14 = (void *)0x6;
                        }
                      }
                      else {
                        pvVar14 = (void *)0x5;
                      }
                    }
                    else {
                      pvVar14 = (void *)0x4;
                    }
                  }
                  else {
                    pvVar14 = (void *)0x3;
                  }
                }
                else {
                  uVar7 = NativeHelper_02aa50f0(itemData->Name,pvVar8,0);
                  pvVar14 = (void *)(ulong)((uVar7 ^ 0xffffffff) & 1);
                }
                if (self_00 == (SkinItem *)0x0) goto LAB_019f8b04;
                SkinItem_SetState_18a7bb8(self_00,pvVar14,itemData,false,(void *)0x0);
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < *(int *)(lVar11 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_019f8b04:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

