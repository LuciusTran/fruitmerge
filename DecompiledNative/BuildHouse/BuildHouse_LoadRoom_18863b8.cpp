// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LoadRoom(RoomModel roomModel) { }
// Ghidra address: 0198a3b8; ELF VA: 0x188a3b8; file offset: 0x18863b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_LoadRoom_18863b8(BuildHouse *self,RoomModel *roomModel,void *runtimeMethod)

{
  Recovered_Vector3 position;
  Recovered_Quaternion rotation;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  RoomModel **ppRVar11;
  void *pvVar12;
  void **ppvVar13;
  int iVar14;
  
  if ((bRam0000000003ab2153 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678c8);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038678b8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038678d0);
    NativeHelper_017ef284(PTR_DAT_038678d8);
    NativeHelper_017ef284(PTR_DAT_038678e0);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_038678e8);
    NativeHelper_017ef284(PTR_DAT_038678f0);
    bRam0000000003ab2153 = 1;
  }
  ppRVar11 = &self->mRoomModel;
  *ppRVar11 = roomModel;
  self->isShowCompeletView = false;
  NativeHelper_017ef228(ppRVar11,roomModel);
  puVar3 = PTR_DAT_038678c8;
  puVar1 = PTR_DAT_038678b8;
  if (*ppRVar11 != (RoomModel *)0x0) {
    pvVar12 = (*ppRVar11)->RoomName;
    pvVar6 = (void *)NativeHelper_02aa6b6c
                               (*(undefined8 *)PTR_DAT_038678e0,pvVar12,
                                *(undefined8 *)PTR_DAT_038678e8,0);
    pvVar6 = Game_Manager_ResManager_Load_1c3e9e0(pvVar6,(void *)0x0,*(void **)puVar1);
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar10);
      lVar10 = *(long *)puVar3;
    }
    puVar1 = PTR_DAT_0385c2a0;
    position = **(Recovered_Vector3 **)(lVar10 + 0xb8);
    if (cRam0000000003ab212c == '\0') {
      NativeHelper_017ef284(PTR_DAT_038670d8);
      cRam0000000003ab212c = '\x01';
    }
    puVar2 = PTR_DAT_038670d0;
    rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
    pvVar7 = (void *)NativeHelper_0334f400(self,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1);
    }
    pvVar6 = UnityEngine_object_Instantiate_1ba9a74
                       (pvVar6,position,rotation,pvVar7,*(void **)puVar2);
    ppvVar13 = &self->mRoomObj;
    *ppvVar13 = pvVar6;
    NativeHelper_017ef228(ppvVar13,pvVar6);
    if ((*ppvVar13 != (void *)0x0) &&
       (pvVar6 = (void *)NativeHelper_0335213c(*ppvVar13,0), pvVar6 != (void *)0x0)) {
      UnityEngine_Transform_set_localScale_325af4c
                (pvVar6,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),(void *)0x0)
      ;
      self->inBuilding = false;
      if ((self->mRoomObj != (void *)0x0) &&
         (pvVar6 = (void *)NativeHelper_0335213c(self->mRoomObj,0), pvVar6 != (void *)0x0)) {
        pvVar6 = UnityEngine_Transform_Find_325c35c(pvVar6,*(void **)PTR_DAT_038678d8,(void *)0x0);
        bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
        if (bVar4) {
          if (pvVar6 == (void *)0x0) goto LAB_0198a748;
          iVar5 = NativeHelper_0335fe50(pvVar6,0);
          self->mItemTotalCount = iVar5;
          puVar2 = PTR_DAT_038678f0;
          puVar3 = PTR_DAT_038678d0;
          puVar1 = PTR_DAT_0385d098;
          if (0 < iVar5) {
            iVar14 = 0;
            do {
              pvVar7 = (void *)NativeHelper_0336077c(pvVar6,iVar14,0);
              if (pvVar7 == (void *)0x0) goto LAB_0198a748;
              pvVar8 = UnityEngine_object_get_name_3252e0c(pvVar7,(void *)0x0);
              pvVar8 = (void *)NativeHelper_02aa70d0
                                         (*(undefined8 *)puVar2,pvVar12,*(undefined8 *)puVar1,pvVar8
                                          ,0);
              bVar4 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar8,(void *)0x0);
              lVar10 = NativeHelper_0334f4c8(pvVar7,0);
              if (bVar4) {
                if (lVar10 == 0) goto LAB_0198a748;
                NativeHelper_0335236c(lVar10,1,0);
              }
              else {
                if (lVar10 == 0) goto LAB_0198a748;
                NativeHelper_0335236c(lVar10,0,0);
                if (self->mItemList == (void *)0x0) goto LAB_0198a748;
                NativeHelper_02891f14(self->mItemList,pvVar7,*(undefined8 *)puVar3);
              }
              iVar14 = iVar14 + 1;
            } while (iVar5 != iVar14);
          }
        }
        pvVar6 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        puVar1 = PTR_DAT_03869d80;
        if ((roomModel != (RoomModel *)0x0) && (pvVar6 != (void *)0x0)) {
          pvVar6 = roomModel->RoomName;
          if ((bRam0000000003ab2449 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385dc10,pvVar6,0);
            NativeHelper_017ef284(PTR_DAT_03869d80);
            bRam0000000003ab2449 = 1;
          }
          pvVar12 = (void *)NativeHelper_02a9c49c(pvVar6,*(undefined8 *)puVar1,0);
          bVar4 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar12,(void *)0x0);
          if (!bVar4) {
            if (*(int *)(*(long *)PTR_DAT_0385dc10 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            uVar9 = NativeHelper_02bf109c(0);
            NativeHelper_019d8390(uVar9,0);
            pvVar6 = (void *)NativeHelper_02a9c49c(pvVar6,*(undefined8 *)puVar1,0);
            pvVar12 = (void *)NativeHelper_02c0e330(&stack0xffffffffffffffd8,0);
            UnityEngine_PlayerPrefs_SetString_3246394(pvVar6,pvVar12,(void *)0x0);
            NativeHelper_0334aa10(0);
          }
          return;
        }
      }
    }
  }
LAB_0198a748:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

