// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ChangeRoom(RoomModel roomModel) { }
// Ghidra address: 0198a998; ELF VA: 0x188a998; file offset: 0x1886998
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_ChangeRoom_1886998(BuildHouse *self,RoomModel *roomModel,void *runtimeMethod)

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
  long lVar8;
  void *pvVar9;
  void **ppvVar10;
  void *pvVar11;
  RoomModel **ppRVar12;
  int iVar13;
  
  puVar2 = PTR_DAT_03865f58;
  if ((bRam0000000003ab2143 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678c8);
    NativeHelper_017ef284(PTR_DAT_03865f58);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038678b8);
    NativeHelper_017ef284(PTR_DAT_03867900);
    NativeHelper_017ef284(PTR_DAT_038678d0);
    NativeHelper_017ef284(PTR_DAT_038678d8);
    NativeHelper_017ef284(PTR_DAT_038678e0);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_038678e8);
    NativeHelper_017ef284(PTR_DAT_038678f0);
    bRam0000000003ab2143 = 1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  ppvVar10 = &self->mRoomObj;
  pvVar11 = *ppvVar10;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  NativeHelper_01a53364(pvVar11,0,0);
  pvVar11 = *ppvVar10;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  NativeHelper_03357b5c(pvVar11,0);
  if (self->mItemList != (void *)0x0) {
    NativeHelper_02891a24(self->mItemList,*(undefined8 *)PTR_DAT_03867900);
    ppRVar12 = &self->mRoomModel;
    *ppRVar12 = roomModel;
    NativeHelper_017ef228(ppRVar12,roomModel);
    puVar1 = PTR_DAT_038678c8;
    puVar2 = PTR_DAT_038678b8;
    if (*ppRVar12 != (RoomModel *)0x0) {
      pvVar9 = (*ppRVar12)->RoomName;
      pvVar11 = (void *)NativeHelper_02aa6b6c
                                  (*(undefined8 *)PTR_DAT_038678e0,pvVar9,
                                   *(undefined8 *)PTR_DAT_038678e8,0);
      pvVar11 = Game_Manager_ResManager_Load_1c3e9e0(pvVar11,(void *)0x0,*(void **)puVar2);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        NativeHelper_017ef404(lVar8);
        lVar8 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_038670d0;
      position = **(Recovered_Vector3 **)(lVar8 + 0xb8);
      if (cRam0000000003ab212c == '\0') {
        NativeHelper_017ef284(PTR_DAT_038670d8);
        cRam0000000003ab212c = '\x01';
      }
      rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
      pvVar6 = (void *)NativeHelper_0334f400(self,0);
      pvVar11 = UnityEngine_object_Instantiate_1ba9a74
                          (pvVar11,position,rotation,pvVar6,*(void **)puVar2);
      self->mRoomObj = pvVar11;
      NativeHelper_017ef228(ppvVar10,pvVar11);
      if ((self->mRoomObj != (void *)0x0) &&
         (pvVar11 = (void *)NativeHelper_0335213c(self->mRoomObj,0), pvVar11 != (void *)0x0)) {
        UnityEngine_Transform_set_localScale_325af4c
                  (pvVar11,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                   (void *)0x0);
        if ((*ppvVar10 != (void *)0x0) &&
           (pvVar11 = (void *)NativeHelper_0335213c(*ppvVar10,0), pvVar11 != (void *)0x0)) {
          pvVar11 = UnityEngine_Transform_Find_325c35c
                              (pvVar11,*(void **)PTR_DAT_038678d8,(void *)0x0);
          bVar4 = UnityEngine_object_op_Inequality_324dec8(pvVar11,(void *)0x0,(void *)0x0);
          if (bVar4) {
            if (pvVar11 == (void *)0x0) goto LAB_0198ad3c;
            iVar5 = NativeHelper_0335fe50(pvVar11,0);
            self->mItemTotalCount = iVar5;
            puVar3 = PTR_DAT_038678f0;
            puVar1 = PTR_DAT_038678d0;
            puVar2 = PTR_DAT_0385d098;
            if (0 < iVar5) {
              iVar13 = 0;
              do {
                pvVar6 = (void *)NativeHelper_0336077c(pvVar11,iVar13,0);
                if (pvVar6 == (void *)0x0) goto LAB_0198ad3c;
                pvVar7 = UnityEngine_object_get_name_3252e0c(pvVar6,(void *)0x0);
                pvVar7 = (void *)NativeHelper_02aa70d0
                                           (*(undefined8 *)puVar3,pvVar9,*(undefined8 *)puVar2,
                                            pvVar7,0);
                UnityEngine_PlayerPrefs_DeleteKey_324686c(pvVar7,(void *)0x0);
                NativeHelper_0334aa10(0);
                lVar8 = NativeHelper_0334f4c8(pvVar6,0);
                if (lVar8 == 0) goto LAB_0198ad3c;
                NativeHelper_0335236c(lVar8,0,0);
                if (self->mItemList == (void *)0x0) goto LAB_0198ad3c;
                NativeHelper_02891f14(self->mItemList,pvVar6,*(undefined8 *)puVar1);
                iVar13 = iVar13 + 1;
              } while (iVar5 != iVar13);
            }
          }
          return;
        }
      }
    }
  }
LAB_0198ad3c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

