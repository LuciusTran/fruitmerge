// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CreateSkinItems(List<SkinItemData> skinItems) { }
// Ghidra address: 019f7d00; ELF VA: 0x18f7d00; file offset: 0x18f3d00
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_CreateSkinItems_18f3d00(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  SkinItemData *itemData;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  Game_UserData *self;
  void *original;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  void *pvVar15;
  void *self_00;
  SkinItem *pSVar16;
  undefined8 *puVar17;
  void *pvVar18;
  long lVar19;
  Recovered_Vector3 value;
  Recovered_Vector3 value_00;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  SkinItemData *pSStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  SkinItemData *pSStack_80;
  
  if ((bRam0000000003ab25c3 & 1) == 0) {
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
    NativeHelper_017ef284(PTR_DAT_0386acc8);
    NativeHelper_017ef284(PTR_DAT_0386ab40);
    NativeHelper_017ef284(PTR_DAT_0385f108);
    NativeHelper_017ef284(PTR_DAT_0385db18);
    NativeHelper_017ef284(PTR_DAT_0385db20);
    NativeHelper_017ef284(PTR_DAT_03861a08);
    NativeHelper_017ef284(PTR_DAT_03868aa8);
    NativeHelper_017ef284(PTR_DAT_0385dab8);
    bRam0000000003ab25c3 = 1;
  }
  puVar3 = PTR_DAT_0385db10;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  pSStack_80 = (SkinItemData *)0x0;
  if (*(long *)(param_1 + 0x220) != 0) {
    pvVar18 = *(void **)(*(long *)(param_1 + 0x220) + 0x20);
    pvVar8 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    puVar4 = PTR_DAT_03868a68;
    puVar2 = PTR_DAT_03868a60;
    if (pvVar8 != (void *)0x0) {
      uVar9 = Game_UserData_GetUserSkins_18cf7ac(pvVar8,0);
      lVar10 = NativeHelper_017ef520(*(undefined8 *)puVar4);
      NativeHelper_023cf2c4(lVar10,uVar9,*(undefined8 *)puVar2);
      self = Singleton_get_Instance_27784f4(*(void **)puVar3);
      puVar6 = PTR_DAT_0386ab40;
      puVar5 = PTR_DAT_03868aa8;
      puVar4 = PTR_DAT_03868a88;
      puVar2 = PTR_DAT_038678b8;
      puVar3 = PTR_DAT_038674d0;
      if (self != (Game_UserData *)0x0) {
        pvVar8 = Game_UserData_GetUsingSkin_18cf374(self,(void *)0x0);
        original = Game_Manager_ResManager_Load_1c3e9e0
                             (*(void **)puVar5,(void *)0x0,*(void **)puVar2);
        lVar11 = NativeHelper_017ef520(*(undefined8 *)puVar3);
        NativeHelper_025690b0(lVar11,param_2,*(undefined8 *)puVar4);
        lVar12 = *(long *)puVar6;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar12 = *(long *)puVar6;
        }
        puVar17 = *(undefined8 **)(lVar12 + 0xb8);
        lVar19 = puVar17[3];
        if (lVar19 == 0) {
          if (*(int *)(lVar12 + 0xe4) == 0) {
            NativeHelper_017ef404();
            puVar17 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
          }
          uVar9 = *puVar17;
          lVar19 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868a90);
          NativeHelper_02731c08(lVar19,uVar9,*(undefined8 *)PTR_DAT_0386acc8,0);
          plVar13 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18);
          *plVar13 = lVar19;
          NativeHelper_017ef228(plVar13,lVar19);
        }
        puVar3 = PTR_DAT_0385db08;
        if (lVar11 != 0) {
          lVar12 = NativeHelper_02569e14(lVar11,lVar19,*(undefined8 *)PTR_DAT_03868a70);
          puVar2 = PTR_DAT_03868a78;
          if (lVar12 != 0) {
            NativeHelper_0256ac7c(lVar11,lVar12,*(undefined8 *)PTR_DAT_03868a80);
            NativeHelper_0256a528(lVar11,0,lVar12,*(undefined8 *)puVar2);
          }
          puVar4 = PTR_DAT_03868a58;
          puVar2 = PTR_DAT_0385dae8;
          NativeHelper_0256a338(&uStack_a8,lVar11,*(undefined8 *)puVar3);
          puVar3 = PTR_DAT_038654f0;
          fVar1 = _UNK_00a47668;
          pSStack_80 = pSStack_98;
          puStack_88 = puStack_a0;
          uStack_90 = uStack_a8;
          uStack_a8 = 0;
          puStack_a0 = &uStack_90;
          while (uVar14 = NativeHelper_02240184(&uStack_90,*(undefined8 *)puVar2),
                itemData = pSStack_80, (uVar14 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            pvVar15 = UnityEngine_object_Instantiate_1ba983c
                                (original,pvVar18,*(void **)PTR_DAT_03868698);
            if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            self_00 = (void *)NativeHelper_0335213c(pvVar15,0);
            if (cRam0000000003ab1f83 == '\0') {
              NativeHelper_017ef284(puVar3);
              cRam0000000003ab1f83 = '\x01';
            }
            if (self_00 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
            value.component0 = (float)uVar9 * 0.95;
            value.component2 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) * fVar1;
            value.component1 = (float)((ulong)uVar9 >> 0x20) * 0.95;
            UnityEngine_Transform_set_localScale_325af4c(self_00,value,(void *)0x0);
            pSVar16 = UnityEngine_GameObject_GetComponent_1b75510
                                (pvVar15,*(void **)PTR_DAT_03868a50);
            if (itemData == (SkinItemData *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            uVar14 = NativeHelper_023cf8d8(lVar10,itemData->Name,*(undefined8 *)puVar4);
            if ((uVar14 & 1) == 0) {
              pvVar15 = itemData->Type;
              uVar14 = NativeHelper_02aa50f0(pvVar15,*(undefined8 *)PTR_DAT_0385db18,0);
              if ((uVar14 & 1) == 0) {
                uVar14 = NativeHelper_02aa50f0(pvVar15,*(undefined8 *)PTR_DAT_0385db20,0);
                if ((uVar14 & 1) == 0) {
                  uVar14 = NativeHelper_02aa50f0(pvVar15,*(undefined8 *)PTR_DAT_0385f108,0);
                  if ((uVar14 & 1) == 0) {
                    uVar14 = NativeHelper_02aa50f0(pvVar15,*(undefined8 *)PTR_DAT_0385dab8,0);
                    if ((uVar14 & 1) == 0) {
                      uVar14 = NativeHelper_02aa50f0(pvVar15,*(undefined8 *)PTR_DAT_03861a08,0);
                      uVar7 = 7;
                      if ((uVar14 & 1) == 0) {
                        uVar7 = 2;
                      }
                      pvVar15 = (void *)(ulong)uVar7;
                    }
                    else {
                      pvVar15 = (void *)0x6;
                    }
                  }
                  else {
                    pvVar15 = (void *)0x5;
                  }
                }
                else {
                  pvVar15 = (void *)0x4;
                }
              }
              else {
                pvVar15 = (void *)0x3;
              }
            }
            else {
              uVar7 = NativeHelper_02aa50f0(itemData->Name,pvVar8,0);
              pvVar15 = (void *)(ulong)((uVar7 ^ 0xffffffff) & 1);
            }
            if (pSVar16 == (SkinItem *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            SkinItem_SetState_18a7bb8(pSVar16,pvVar15,itemData,false,(void *)0x0);
          }
          NativeHelper_02240180(&uStack_90,*(undefined8 *)PTR_DAT_0385dae0);
          if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          pvVar8 = UnityEngine_object_Instantiate_1ba983c
                             (original,pvVar18,*(void **)PTR_DAT_03868698);
          if (pvVar8 != (void *)0x0) {
            pvVar18 = (void *)NativeHelper_0335213c(pvVar8,0);
            if (cRam0000000003ab1f83 == '\0') {
              NativeHelper_017ef284(PTR_DAT_038654f0);
              cRam0000000003ab1f83 = '\x01';
            }
            if (pvVar18 != (void *)0x0) {
              uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
              value_00.component0 = (float)uVar9 * 0.95;
              value_00.component2 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) * fVar1;
              value_00.component1 = (float)((ulong)uVar9 >> 0x20) * 0.95;
              UnityEngine_Transform_set_localScale_325af4c(pvVar18,value_00,(void *)0x0);
              pSVar16 = UnityEngine_GameObject_GetComponent_1b75510
                                  (pvVar8,*(void **)PTR_DAT_03868a50);
              if (pSVar16 != (SkinItem *)0x0) {
                SkinItem_SetState_18a7bb8(pSVar16,(void *)0x2,(SkinItemData *)0x0,false,(void *)0x0)
                ;
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

