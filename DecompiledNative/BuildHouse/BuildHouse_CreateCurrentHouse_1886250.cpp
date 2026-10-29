// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static BuildHouse CreateCurrentHouse() { }
// Ghidra address: 0198a250; ELF VA: 0x188a250; file offset: 0x1886250
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


BuildHouse * BuildHouse_CreateCurrentHouse_1886250(void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  BuildHouse *pBVar4;
  void *pvVar5;
  Game_UserData *self;
  RoomModel *roomModel;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  long lVar6;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab2141 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678a8);
    NativeHelper_017ef284(PTR_DAT_038678b0);
    NativeHelper_017ef284(PTR_DAT_03866cc8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038678b8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038678c0);
    bRam0000000003ab2141 = 1;
  }
  puVar2 = PTR_DAT_038678b0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pBVar4 = (BuildHouse *)NativeHelper_01cad430(*(undefined8 *)puVar2);
  bVar3 = UnityEngine_object_op_Equality_324f284(pBVar4,(void *)0x0,(void *)0x0);
  puVar2 = PTR_DAT_03866cc8;
  if (bVar3) {
    runtimeMethod_01 = *(void **)PTR_DAT_038678b8;
    pvVar5 = Game_Manager_ResManager_Load_1c3e9e0
                       (*(void **)PTR_DAT_038678c0,(void *)0x0,runtimeMethod_01);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar6);
    }
    pvVar5 = UnityEngine_object_Instantiate_1ba970c(pvVar5,*(void **)puVar2);
    if (pvVar5 != (void *)0x0) {
      pBVar4 = UnityEngine_GameObject_GetComponent_1b75510(pvVar5,*(void **)PTR_DAT_038678a8);
      self = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
      if (self != (Game_UserData *)0x0) {
        roomModel = Game_UserData_GetCurrentRoomModel_18ca1c8(self,(void *)0x0);
        if (roomModel == (RoomModel *)0x0) {
          if (pBVar4 != (BuildHouse *)0x0) {
            BuildHouse_LoadComingSoon_188674c(pBVar4,runtimeMethod_00);
            return pBVar4;
          }
        }
        else if (pBVar4 != (BuildHouse *)0x0) {
          BuildHouse_LoadRoom_18863b8(pBVar4,roomModel,runtimeMethod_01);
          return pBVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return pBVar4;
}

