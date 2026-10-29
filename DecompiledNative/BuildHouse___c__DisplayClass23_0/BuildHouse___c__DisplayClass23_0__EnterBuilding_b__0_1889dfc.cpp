// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <EnterBuilding>b__0() { }
// Ghidra address: 0198ddfc; ELF VA: 0x188ddfc; file offset: 0x1889dfc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong BuildHouse___c__DisplayClass23_0__EnterBuilding_b__0_1889dfc(long param_1)

{
  Recovered_Vector3 *pRVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  BuildHouse *self;
  undefined8 uVar9;
  Game_UserData *pGVar10;
  ulong uVar11;
  void *runtimeMethod;
  long lVar12;
  void *runtimeMethod_00;
  BuildHouse *self_00;
  void **ppvVar13;
  void *pvVar14;
  void **ppvVar15;
  float fVar16;
  Recovered_Vector3 RVar17;
  
  self_00 = *(BuildHouse **)(param_1 + 0x10);
  if (self_00 == (BuildHouse *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar12 = *(long *)(param_1 + 0x18);
  if ((bRam0000000003ab214a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867928);
    NativeHelper_017ef284(PTR_DAT_03867930);
    NativeHelper_017ef284(PTR_DAT_03867938);
    NativeHelper_017ef284(PTR_DAT_038673b8);
    NativeHelper_017ef284(PTR_DAT_0385c298);
    NativeHelper_017ef284(PTR_DAT_03867940);
    NativeHelper_017ef284(PTR_DAT_03867388);
    NativeHelper_017ef284(PTR_DAT_03867390);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867948);
    NativeHelper_017ef284(PTR_DAT_03867950);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867958);
    NativeHelper_017ef284(PTR_DAT_038678a0);
    NativeHelper_017ef284(PTR_DAT_0385cbf8);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03866918);
    NativeHelper_017ef284(PTR_DAT_03867960);
    NativeHelper_017ef284(PTR_DAT_03867968);
    NativeHelper_017ef284(PTR_DAT_03867970);
    NativeHelper_017ef284(PTR_DAT_0385dab8);
    NativeHelper_017ef284(PTR_DAT_03867978);
    NativeHelper_017ef284(PTR_DAT_03867980);
    NativeHelper_017ef284(PTR_DAT_03867988);
    bRam0000000003ab214a = 1;
  }
  if (cRam0000000003ab204a == '\0') {
    NativeHelper_017ef284(PTR_DAT_038654f0);
    cRam0000000003ab204a = '\x01';
  }
  if (self_00->mItemList == (void *)0x0) goto LAB_0198ba8c;
  if (*(int *)((long)self_00->mItemList + 0x18) < 1) {
    uVar9 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866068);
    NativeHelper_01a4f8cc(uVar9,self_00,*(undefined8 *)PTR_DAT_03867930,0);
    uVar11 = NativeHelper_01a54e80(0x3f000000,uVar9,1,0);
    if ((bRam0000000003ab3290 & 1) == 0) {
      NativeHelper_017ef284(&DAT_0392d908,1,*(undefined8 *)PTR_DAT_03866918);
      NativeHelper_017ef284(&DAT_03933130);
      bRam0000000003ab3290 = 1;
    }
    if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
      if (*(int *)(_DAT_0392d908 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      uVar2 = *(undefined4 *)(*(long *)(_DAT_0392d908 + 0xb8) + 0x3c);
      if (*(int *)(_DAT_03933130 + 0xe4) == 0) {
        NativeHelper_017ef404(_DAT_03933130);
      }
      func_0x01a7b060(uVar11,uVar2,1,0);
    }
    return uVar11;
  }
  ppvVar13 = &self_00->mWaitingBuyItem;
  pvVar14 = *ppvVar13;
  if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar14,(void *)0x0,(void *)0x0);
  if (bVar4) {
    BuildHouse_CleanShadow_1886f8c(self_00,runtimeMethod);
    if (self_00->mItemList == (void *)0x0) goto LAB_0198ba8c;
    pvVar14 = (void *)NativeHelper_02891dd4(self_00->mItemList,*(undefined8 *)PTR_DAT_03867958);
    *ppvVar13 = pvVar14;
    NativeHelper_017ef228(ppvVar13,pvVar14);
    if (*ppvVar13 == (void *)0x0) goto LAB_0198ba8c;
    pvVar14 = UnityEngine_object_get_name_3252e0c(*ppvVar13,(void *)0x0);
    pvVar14 = (void *)NativeHelper_02a9c49c(pvVar14,*(undefined8 *)PTR_DAT_03867970,0);
    pvVar7 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c298);
    UnityEngine_GameObject_GameObject_324e764(pvVar7,pvVar14,(void *)0x0);
    if (pvVar7 == (void *)0x0) goto LAB_0198ba8c;
    pvVar14 = (void *)NativeHelper_0335213c(pvVar7,0);
    ppvVar15 = &self_00->mWaitingBuyItemShadow;
    *ppvVar15 = pvVar14;
    NativeHelper_017ef228(ppvVar15,pvVar14);
    if (*ppvVar15 == (void *)0x0) goto LAB_0198ba8c;
    pvVar14 = (void *)NativeHelper_0334f4c8(*ppvVar15,0);
    iVar5 = NativeHelper_03352cb0(*(undefined8 *)PTR_DAT_0385dab8,0);
    if (pvVar14 == (void *)0x0) goto LAB_0198ba8c;
    UnityEngine_GameObject_set_layer_324e2b0(pvVar14,iVar5,(void *)0x0);
    if (*ppvVar15 == (void *)0x0) goto LAB_0198ba8c;
    pvVar14 = (void *)NativeHelper_0334f400(*ppvVar15,0);
    if ((self_00->mRoomObj == (void *)0x0) ||
       (pvVar7 = (void *)NativeHelper_0335213c(self_00->mRoomObj,0), pvVar14 == (void *)0x0))
    goto LAB_0198ba8c;
    UnityEngine_Transform_SetParent_325b15c(pvVar14,pvVar7,(void *)0x0);
    pvVar14 = (void *)NativeHelper_01c0dcb4(*ppvVar15,*(undefined8 *)PTR_DAT_03867938);
    lVar8 = NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385cbf8,5);
    if (lVar8 == 0) goto LAB_0198ba8c;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0198ba90;
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)PTR_DAT_03867980;
    NativeHelper_017ef228();
    if (self_00->mRoomModel == (RoomModel *)0x0) goto LAB_0198ba8c;
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
LAB_0198ba90:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    *(undefined8 *)(lVar8 + 0x28) = self_00->mRoomModel->RoomName;
    NativeHelper_017ef228((undefined8 *)(lVar8 + 0x28));
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_0198ba90;
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)PTR_DAT_03867968;
    NativeHelper_017ef228();
    if (*ppvVar13 == (void *)0x0) goto LAB_0198ba8c;
    pvVar7 = UnityEngine_object_get_name_3252e0c(*ppvVar13,(void *)0x0);
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_0198ba90;
    *(undefined8 *)(lVar8 + 0x38) = pvVar7;
    NativeHelper_017ef228((undefined8 *)(lVar8 + 0x38),pvVar7);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_0198ba90;
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)PTR_DAT_03867988;
    NativeHelper_017ef228();
    pvVar7 = (void *)NativeHelper_02aa71d8(lVar8,0);
    pvVar7 = Game_Manager_ResManager_Load_1c3e9e0(pvVar7,(void *)0x0,*(void **)PTR_DAT_03867950);
    if (pvVar14 == (void *)0x0) goto LAB_0198ba8c;
    runtimeMethod_00 = (void *)0x0;
    UnityEngine_SpriteRenderer_set_sprite_321501c(pvVar14,pvVar7,(void *)0x0);
    iVar5 = BuildHouse_GetMaxOrder_1887a94(self,self_00->mWaitingBuyItem,runtimeMethod_00);
    UnityEngine_Renderer_set_sortingOrder_3229900(pvVar14,iVar5,(void *)0x0);
    uVar9 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867390);
    NativeHelper_02568f74(uVar9,*(undefined8 *)PTR_DAT_03867388);
    BuildHouse_GetSpriteRendererS_1887b90(self_00,self_00->mWaitingBuyItem,uVar9);
    pvVar14 = self_00->mWaitingBuyItemShadow;
    if (cRam0000000003ab1f83 == '\0') {
      NativeHelper_017ef284(PTR_DAT_038654f0);
      cRam0000000003ab1f83 = '\x01';
    }
    if (pvVar14 == (void *)0x0) goto LAB_0198ba8c;
    fVar16 = *(float *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0x14);
    pRVar1 = (Recovered_Vector3 *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0xc);
    uVar2 = pRVar1->component1;
    UnityEngine_Transform_set_localScale_325af4c(pvVar14,*pRVar1,(void *)0x0);
    pvVar14 = *ppvVar15;
    RVar17.component0 = ShadowSpriteGenerator_CalculateBoundsCenter_18a722c(uVar9,0);
    if (pvVar14 == (void *)0x0) goto LAB_0198ba8c;
    RVar17.component1 = (float)uVar2;
    RVar17.component2 = fVar16;
    UnityEngine_Transform_set_position_325a7e8(pvVar14,RVar17,(void *)0x0);
    puVar3 = PTR_DAT_0385db10;
    pGVar10 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if ((self_00->mRoomModel == (RoomModel *)0x0) || (*ppvVar13 == (void *)0x0)) goto LAB_0198ba8c;
    pvVar7 = self_00->mRoomModel->RoomName;
    pvVar14 = UnityEngine_object_get_name_3252e0c(*ppvVar13,(void *)0x0);
    if (pGVar10 == (Game_UserData *)0x0) goto LAB_0198ba8c;
    bVar4 = Game_UserData_HasRoomTaskStarted_18cd838(pGVar10,pvVar7,pvVar14,(void *)0x0);
    if (!bVar4) {
      pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
      if ((self_00->mRoomModel == (RoomModel *)0x0) || (*ppvVar13 == (void *)0x0))
      goto LAB_0198ba8c;
      pvVar7 = self_00->mRoomModel->RoomName;
      pvVar14 = UnityEngine_object_get_name_3252e0c(*ppvVar13,(void *)0x0);
      if (pGVar10 == (Game_UserData *)0x0) goto LAB_0198ba8c;
      Game_UserData_SaveRoomTaskStartTime_18cd8b4(pGVar10,pvVar7,pvVar14,(void *)0x0);
    }
  }
  pvVar14 = (void *)NativeHelper_03352a84(*(undefined8 *)PTR_DAT_03867960,0);
  if (pvVar14 != (void *)0x0) {
    pvVar14 = UnityEngine_GameObject_GetComponent_1b75510(pvVar14,*(void **)PTR_DAT_038673b8);
    if ((*ppvVar13 != (void *)0x0) &&
       (RVar17 = UnityEngine_Transform_get_position_325a714(*ppvVar13,(void *)0x0),
       pvVar14 != (void *)0x0)) {
      RVar17 = UnityEngine_Camera_WorldToScreenPoint_321c80c(pvVar14,RVar17,(void *)0x0);
      puVar3 = PTR_DAT_03867928;
      if (self_00->mRoomModel != (RoomModel *)0x0) {
        pvVar14 = self_00->mRoomModel->ItemList;
        uVar9 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867948);
        NativeHelper_02731c08(uVar9,self_00,*(undefined8 *)puVar3,0);
        if (pvVar14 != (void *)0x0) {
          lVar8 = NativeHelper_02569e14(pvVar14,uVar9,*(undefined8 *)PTR_DAT_03867940);
          puVar3 = PTR_DAT_03867978;
          if (lVar8 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = *(int *)(lVar8 + 0x18);
          }
          if (*ppvVar13 != (void *)0x0) {
            pvVar14 = UnityEngine_object_get_name_3252e0c(*ppvVar13,(void *)0x0);
            pvVar14 = (void *)NativeHelper_02a9c49c(pvVar14,*(undefined8 *)puVar3,0);
            uVar6 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar14,(void *)0x0);
            if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0198ba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(lVar12 + 0x18))
                                 (RVar17.component0,RVar17.component1,RVar17.component2,
                                  *(undefined8 *)(lVar12 + 0x40),iVar5 - uVar6,iVar5,
                                  *(undefined8 *)(lVar12 + 0x28));
              return uVar11;
            }
            return (ulong)uVar6;
          }
        }
      }
    }
  }
LAB_0198ba8c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

