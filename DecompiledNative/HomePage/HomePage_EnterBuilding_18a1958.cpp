// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void EnterBuilding() { }
// Ghidra address: 019a5958; ELF VA: 0x18a5958; file offset: 0x18a1958
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x0198ba34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomePage_EnterBuilding_18a1958(HomePage *self,void *runtimeMethod)

{
  Recovered_Vector3 *pRVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  BuildHouse *self_00;
  undefined8 uVar8;
  Game_UserData *pGVar9;
  RoomModel *pRVar10;
  BuildHouse *self_01;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void **ppvVar11;
  void *pvVar12;
  void **ppvVar13;
  float fVar14;
  Recovered_Vector3 RVar15;
  
  puVar3 = PTR_DAT_0385db10;
  if ((bRam0000000003ab225a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab225a = 1;
  }
  pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar3);
  if (pGVar9 == (Game_UserData *)0x0) {
LAB_019a59cc:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pRVar10 = Game_UserData_GetCurrentRoomModel_18ca1c8(pGVar9,(void *)0x0);
  if (pRVar10 == (RoomModel *)0x0) {
    return;
  }
  self_01 = self->mBuildHouse;
  if (self_01 == (BuildHouse *)0x0) goto LAB_019a59cc;
  if ((bRam0000000003ab214a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867928,0,0);
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
  if (self_01->mItemList == (void *)0x0) goto LAB_0198ba8c;
  if (*(int *)((long)self_01->mItemList + 0x18) < 1) {
    uVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866068);
    NativeHelper_01a4f8cc(uVar8,self_01,*(undefined8 *)PTR_DAT_03867930,0);
    lVar7 = NativeHelper_01a54e80(0x3f000000,uVar8,1,0);
    if ((bRam0000000003ab3290 & 1) == 0) {
      NativeHelper_017ef284(&DAT_0392d908,1,*(undefined8 *)PTR_DAT_03866918);
      NativeHelper_017ef284(&DAT_03933130);
      bRam0000000003ab3290 = 1;
    }
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
      if (*(int *)(_DAT_0392d908 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      uVar2 = *(undefined4 *)(*(long *)(_DAT_0392d908 + 0xb8) + 0x3c);
      if (*(int *)(_DAT_03933130 + 0xe4) == 0) {
        NativeHelper_017ef404(_DAT_03933130);
      }
      func_0x01a7b060(lVar7,uVar2,1,0);
    }
    return;
  }
  ppvVar11 = &self_01->mWaitingBuyItem;
  pvVar12 = *ppvVar11;
  if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar12,(void *)0x0,(void *)0x0);
  if (bVar4) {
    BuildHouse_CleanShadow_1886f8c(self_01,runtimeMethod_00);
    if (self_01->mItemList == (void *)0x0) goto LAB_0198ba8c;
    pvVar12 = (void *)NativeHelper_02891dd4(self_01->mItemList,*(undefined8 *)PTR_DAT_03867958);
    *ppvVar11 = pvVar12;
    NativeHelper_017ef228(ppvVar11,pvVar12);
    if (*ppvVar11 == (void *)0x0) goto LAB_0198ba8c;
    pvVar12 = UnityEngine_object_get_name_3252e0c(*ppvVar11,(void *)0x0);
    pvVar12 = (void *)NativeHelper_02a9c49c(pvVar12,*(undefined8 *)PTR_DAT_03867970,0);
    pvVar6 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c298);
    UnityEngine_GameObject_GameObject_324e764(pvVar6,pvVar12,(void *)0x0);
    if (pvVar6 == (void *)0x0) goto LAB_0198ba8c;
    pvVar12 = (void *)NativeHelper_0335213c(pvVar6,0);
    ppvVar13 = &self_01->mWaitingBuyItemShadow;
    *ppvVar13 = pvVar12;
    NativeHelper_017ef228(ppvVar13,pvVar12);
    if (*ppvVar13 == (void *)0x0) goto LAB_0198ba8c;
    pvVar12 = (void *)NativeHelper_0334f4c8(*ppvVar13,0);
    iVar5 = NativeHelper_03352cb0(*(undefined8 *)PTR_DAT_0385dab8,0);
    if (pvVar12 == (void *)0x0) goto LAB_0198ba8c;
    UnityEngine_GameObject_set_layer_324e2b0(pvVar12,iVar5,(void *)0x0);
    if (*ppvVar13 == (void *)0x0) goto LAB_0198ba8c;
    pvVar12 = (void *)NativeHelper_0334f400(*ppvVar13,0);
    if ((self_01->mRoomObj == (void *)0x0) ||
       (pvVar6 = (void *)NativeHelper_0335213c(self_01->mRoomObj,0), pvVar12 == (void *)0x0))
    goto LAB_0198ba8c;
    UnityEngine_Transform_SetParent_325b15c(pvVar12,pvVar6,(void *)0x0);
    pvVar12 = (void *)NativeHelper_01c0dcb4(*ppvVar13,*(undefined8 *)PTR_DAT_03867938);
    lVar7 = NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385cbf8,5);
    if (lVar7 == 0) goto LAB_0198ba8c;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0198ba90;
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_03867980;
    NativeHelper_017ef228();
    if (self_01->mRoomModel == (RoomModel *)0x0) goto LAB_0198ba8c;
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) {
LAB_0198ba90:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    *(undefined8 *)(lVar7 + 0x28) = self_01->mRoomModel->RoomName;
    NativeHelper_017ef228((undefined8 *)(lVar7 + 0x28));
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0198ba90;
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)PTR_DAT_03867968;
    NativeHelper_017ef228();
    if (*ppvVar11 == (void *)0x0) goto LAB_0198ba8c;
    pvVar6 = UnityEngine_object_get_name_3252e0c(*ppvVar11,(void *)0x0);
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_0198ba90;
    *(undefined8 *)(lVar7 + 0x38) = pvVar6;
    NativeHelper_017ef228((undefined8 *)(lVar7 + 0x38),pvVar6);
    if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_0198ba90;
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_03867988;
    NativeHelper_017ef228();
    pvVar6 = (void *)NativeHelper_02aa71d8(lVar7,0);
    pvVar6 = Game_Manager_ResManager_Load_1c3e9e0(pvVar6,(void *)0x0,*(void **)PTR_DAT_03867950);
    if (pvVar12 == (void *)0x0) goto LAB_0198ba8c;
    runtimeMethod_01 = (void *)0x0;
    UnityEngine_SpriteRenderer_set_sprite_321501c(pvVar12,pvVar6,(void *)0x0);
    iVar5 = BuildHouse_GetMaxOrder_1887a94(self_00,self_01->mWaitingBuyItem,runtimeMethod_01);
    UnityEngine_Renderer_set_sortingOrder_3229900(pvVar12,iVar5,(void *)0x0);
    uVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867390);
    NativeHelper_02568f74(uVar8,*(undefined8 *)PTR_DAT_03867388);
    BuildHouse_GetSpriteRendererS_1887b90(self_01,self_01->mWaitingBuyItem,uVar8);
    pvVar12 = self_01->mWaitingBuyItemShadow;
    if (cRam0000000003ab1f83 == '\0') {
      NativeHelper_017ef284(PTR_DAT_038654f0);
      cRam0000000003ab1f83 = '\x01';
    }
    if (pvVar12 == (void *)0x0) goto LAB_0198ba8c;
    fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0x14);
    pRVar1 = (Recovered_Vector3 *)(*(long *)(*(long *)PTR_DAT_038654f0 + 0xb8) + 0xc);
    uVar2 = pRVar1->component1;
    UnityEngine_Transform_set_localScale_325af4c(pvVar12,*pRVar1,(void *)0x0);
    pvVar12 = *ppvVar13;
    RVar15.component0 = ShadowSpriteGenerator_CalculateBoundsCenter_18a722c(uVar8,0);
    if (pvVar12 == (void *)0x0) goto LAB_0198ba8c;
    RVar15.component1 = (float)uVar2;
    RVar15.component2 = fVar14;
    UnityEngine_Transform_set_position_325a7e8(pvVar12,RVar15,(void *)0x0);
    puVar3 = PTR_DAT_0385db10;
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if ((self_01->mRoomModel == (RoomModel *)0x0) || (*ppvVar11 == (void *)0x0)) goto LAB_0198ba8c;
    pvVar6 = self_01->mRoomModel->RoomName;
    pvVar12 = UnityEngine_object_get_name_3252e0c(*ppvVar11,(void *)0x0);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_0198ba8c;
    bVar4 = Game_UserData_HasRoomTaskStarted_18cd838(pGVar9,pvVar6,pvVar12,(void *)0x0);
    if (!bVar4) {
      pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar3);
      if ((self_01->mRoomModel == (RoomModel *)0x0) || (*ppvVar11 == (void *)0x0))
      goto LAB_0198ba8c;
      pvVar6 = self_01->mRoomModel->RoomName;
      pvVar12 = UnityEngine_object_get_name_3252e0c(*ppvVar11,(void *)0x0);
      if (pGVar9 == (Game_UserData *)0x0) goto LAB_0198ba8c;
      Game_UserData_SaveRoomTaskStartTime_18cd8b4(pGVar9,pvVar6,pvVar12,(void *)0x0);
    }
  }
  pvVar12 = (void *)NativeHelper_03352a84(*(undefined8 *)PTR_DAT_03867960,0);
  if (pvVar12 != (void *)0x0) {
    pvVar12 = UnityEngine_GameObject_GetComponent_1b75510(pvVar12,*(void **)PTR_DAT_038673b8);
    if ((*ppvVar11 != (void *)0x0) &&
       (RVar15 = UnityEngine_Transform_get_position_325a714(*ppvVar11,(void *)0x0),
       pvVar12 != (void *)0x0)) {
      UnityEngine_Camera_WorldToScreenPoint_321c80c(pvVar12,RVar15,(void *)0x0);
      puVar3 = PTR_DAT_03867928;
      if (self_01->mRoomModel != (RoomModel *)0x0) {
        pvVar12 = self_01->mRoomModel->ItemList;
        uVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867948);
        NativeHelper_02731c08(uVar8,self_01,*(undefined8 *)puVar3,0);
        if (pvVar12 != (void *)0x0) {
          NativeHelper_02569e14(pvVar12,uVar8,*(undefined8 *)PTR_DAT_03867940);
          puVar3 = PTR_DAT_03867978;
          if (*ppvVar11 != (void *)0x0) {
            pvVar12 = UnityEngine_object_get_name_3252e0c(*ppvVar11,(void *)0x0);
            pvVar12 = (void *)NativeHelper_02a9c49c(pvVar12,*(undefined8 *)puVar3,0);
            UnityEngine_PlayerPrefs_GetInt_3246194(pvVar12,(void *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0198ba8c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

