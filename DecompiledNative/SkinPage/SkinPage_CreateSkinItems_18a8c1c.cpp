// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CreateSkinItems(List<SkinItemData> skinItems) { }
// Ghidra address: 019acc1c; ELF VA: 0x18acc1c; file offset: 0x18a8c1c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SkinPage_CreateSkinItems_18a8c1c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  SkinItemData *itemData;
  uint uVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  Game_UserData *self;
  void *original;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  SkinItem *pSVar15;
  undefined8 *puVar16;
  void *parent;
  long lVar17;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  SkinItemData *pSStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  SkinItemData *pSStack_70;
  
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
  puVar3 = PTR_DAT_0385db10;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  pSStack_70 = (SkinItemData *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    parent = *(void **)(*(long *)(param_1 + 0x28) + 0x20);
    pvVar7 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    puVar2 = PTR_DAT_03868a68;
    puVar1 = PTR_DAT_03868a60;
    if (pvVar7 != (void *)0x0) {
      uVar8 = Game_UserData_GetUserSkins_18cf7ac(pvVar7,0);
      lVar9 = NativeHelper_017ef520(*(undefined8 *)puVar2);
      NativeHelper_023cf2c4(lVar9,uVar8,*(undefined8 *)puVar1);
      self = Singleton_get_Instance_27784f4(*(void **)puVar3);
      puVar5 = PTR_DAT_03868aa8;
      puVar4 = PTR_DAT_03868aa0;
      puVar2 = PTR_DAT_03868a88;
      puVar1 = PTR_DAT_038678b8;
      puVar3 = PTR_DAT_038674d0;
      if (self != (Game_UserData *)0x0) {
        pvVar7 = Game_UserData_GetUsingSkin_18cf374(self,(void *)0x0);
        original = Game_Manager_ResManager_Load_1c3e9e0
                             (*(void **)puVar5,(void *)0x0,*(void **)puVar1);
        lVar10 = NativeHelper_017ef520(*(undefined8 *)puVar3);
        NativeHelper_025690b0(lVar10,param_2,*(undefined8 *)puVar2);
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar11 = *(long *)puVar4;
        }
        puVar16 = *(undefined8 **)(lVar11 + 0xb8);
        lVar17 = puVar16[1];
        if (lVar17 == 0) {
          if (*(int *)(lVar11 + 0xe4) == 0) {
            NativeHelper_017ef404();
            puVar16 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
          }
          uVar8 = *puVar16;
          lVar17 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03868a90);
          NativeHelper_02731c08(lVar17,uVar8,*(undefined8 *)PTR_DAT_03868a98,0);
          plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          *plVar12 = lVar17;
          NativeHelper_017ef228(plVar12,lVar17);
        }
        puVar3 = PTR_DAT_0385db08;
        if (lVar10 != 0) {
          lVar11 = NativeHelper_02569e14(lVar10,lVar17,*(undefined8 *)PTR_DAT_03868a70);
          puVar1 = PTR_DAT_03868a78;
          if (lVar11 != 0) {
            NativeHelper_0256ac7c(lVar10,lVar11,*(undefined8 *)PTR_DAT_03868a80);
            NativeHelper_0256a528(lVar10,0,lVar11,*(undefined8 *)puVar1);
          }
          puVar4 = PTR_DAT_03868a58;
          puVar2 = PTR_DAT_0385dae8;
          puVar1 = PTR_DAT_0385c2a0;
          NativeHelper_0256a338(&uStack_98,lVar10,*(undefined8 *)puVar3);
          pSStack_70 = pSStack_88;
          puStack_78 = puStack_90;
          uStack_80 = uStack_98;
          uStack_98 = 0;
          puStack_90 = &uStack_80;
          while (uVar13 = NativeHelper_02240184(&uStack_80,*(undefined8 *)puVar2),
                itemData = pSStack_70, (uVar13 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            pvVar14 = UnityEngine_object_Instantiate_1ba983c
                                (original,parent,*(void **)PTR_DAT_03868698);
            if (pvVar14 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            pSVar15 = UnityEngine_GameObject_GetComponent_1b75510
                                (pvVar14,*(void **)PTR_DAT_03868a50);
            if (itemData == (SkinItemData *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            uVar13 = NativeHelper_023cf8d8(lVar9,itemData->Name,*(undefined8 *)puVar4);
            if ((uVar13 & 1) == 0) {
              pvVar14 = itemData->Type;
              uVar13 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385db18,0);
              if ((uVar13 & 1) == 0) {
                uVar13 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385db20,0);
                if ((uVar13 & 1) == 0) {
                  uVar13 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385f108,0);
                  if ((uVar13 & 1) == 0) {
                    uVar13 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_0385dab8,0);
                    if ((uVar13 & 1) == 0) {
                      uVar13 = NativeHelper_02aa50f0(pvVar14,*(undefined8 *)PTR_DAT_03861a08,0);
                      uVar6 = 7;
                      if ((uVar13 & 1) == 0) {
                        uVar6 = 2;
                      }
                      pvVar14 = (void *)(ulong)uVar6;
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
              uVar6 = NativeHelper_02aa50f0(itemData->Name,pvVar7,0);
              pvVar14 = (void *)(ulong)((uVar6 ^ 0xffffffff) & 1);
            }
            if (pSVar15 == (SkinItem *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            SkinItem_SetState_18a7bb8(pSVar15,pvVar14,itemData,true,param_5);
          }
          NativeHelper_02240180(&uStack_80,*(undefined8 *)PTR_DAT_0385dae0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          pvVar7 = UnityEngine_object_Instantiate_1ba983c
                             (original,parent,*(void **)PTR_DAT_03868698);
          if ((pvVar7 != (void *)0x0) &&
             (pSVar15 = UnityEngine_GameObject_GetComponent_1b75510
                                  (pvVar7,*(void **)PTR_DAT_03868a50), pSVar15 != (SkinItem *)0x0))
          {
            SkinItem_SetState_18a7bb8(pSVar15,(void *)0x2,(SkinItemData *)0x0,true,param_5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

