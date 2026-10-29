// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LoadFruits() { }
// Ghidra address: 0197dfc8; ELF VA: 0x187dfc8; file offset: 0x1879fc8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_LoadFruits_1879fc8(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  Game_UserData *pGVar9;
  undefined8 uVar10;
  void *pvVar11;
  EventLogger *pEVar12;
  void *runtimeMethod_00;
  long lVar13;
  ulong uVar14;
  FruitItem *self_00;
  int *piVar15;
  void *runtimeMethod_01;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  int iStack_64;
  
  puVar2 = PTR_DAT_0385db10;
  piVar15 = (int *)&uStack_a0;
  if ((bRam0000000003ab20e4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_03867200);
    NativeHelper_017ef284(PTR_DAT_03867208);
    NativeHelper_017ef284(PTR_DAT_03867210);
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_03867218);
    NativeHelper_017ef284(PTR_DAT_03867220);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867228);
    NativeHelper_017ef284(PTR_DAT_0385e8f8);
    NativeHelper_017ef284(PTR_DAT_03867230);
    NativeHelper_017ef284(PTR_DAT_03867238);
    NativeHelper_017ef284(PTR_DAT_03867240);
    NativeHelper_017ef284(PTR_DAT_03867248);
    NativeHelper_017ef284(PTR_DAT_03867250);
    bRam0000000003ab20e4 = 1;
  }
  iStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  puVar6 = PTR_DAT_03867240;
  puVar4 = PTR_DAT_03867228;
  if (pGVar9 == (Game_UserData *)0x0) goto LAB_0197e508;
  iVar8 = Game_UserData_GetTotalLevels_18c9af8(pGVar9,(void *)0x0);
  puVar1 = PTR_DAT_0385c2d8;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar8 + 1);
  uVar10 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_a0);
  uVar10 = NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar10,0);
  pvVar11 = (void *)NativeHelper_02a9c49c(*(undefined8 *)puVar6,uVar10,0);
  bVar7 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar11,(void *)0x0);
  puVar3 = PTR_DAT_0385e750;
  if (bVar7) {
    pEVar12 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_0197e508;
    iStack_64 = Game_UserData_GetTotalLevels_18c9af8(pGVar9,(void *)0x0);
    iStack_64 = iStack_64 + 1;
    pvVar11 = (void *)NativeHelper_02c0d29c(&iStack_64,0);
    puVar16 = (undefined8 *)PTR_DAT_03867250;
    puVar5 = PTR_DAT_03867248;
    puVar17 = (undefined8 *)PTR_DAT_03867230;
    puVar4 = PTR_DAT_0385e8f8;
    if (pEVar12 == (EventLogger *)0x0) goto LAB_0197e508;
    EventLogger_LogEvent_189bb54
              (pEVar12,*(void **)PTR_DAT_03867250,*(void **)PTR_DAT_0385e8f8,
               *(void **)PTR_DAT_03867248,*(void **)PTR_DAT_03867230,pvVar11,(void *)0x0,(void *)0x0
              );
    pvVar11 = Singleton_get_Instance_27784f4(*(void **)puVar3);
    runtimeMethod_00 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
    NativeHelper_02132ae8(runtimeMethod_00,*(undefined8 *)PTR_DAT_0385ca28);
    puVar18 = (undefined8 *)PTR_DAT_0385ca48;
    if (runtimeMethod_00 == (void *)0x0) goto LAB_0197e508;
    NativeHelper_02133494
              (runtimeMethod_00,*(undefined8 *)puVar4,*(undefined8 *)puVar5,
               *(undefined8 *)PTR_DAT_0385ca48);
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_0197e508;
    iVar8 = Game_UserData_GetTotalLevels_18c9af8(pGVar9,(void *)0x0);
    uVar10 = *(undefined8 *)(puVar1 + 0x48);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar8 + 1);
  }
  else {
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_0197e508;
    iVar8 = Game_UserData_GetTotalLevels_18c9af8(pGVar9,(void *)0x0);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar8 + 1);
    uVar10 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&uStack_a0);
    uVar10 = NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar10,0);
    pvVar11 = (void *)NativeHelper_02a9c49c(*(undefined8 *)puVar6,uVar10,0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar11,1,(void *)0x0);
    NativeHelper_0334aa10(0);
    puVar4 = PTR_DAT_0385e750;
    pEVar12 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_0197e508;
    iStack_64 = Game_UserData_GetTotalLevels_18c9af8(pGVar9,(void *)0x0);
    iStack_64 = iStack_64 + 1;
    pvVar11 = (void *)NativeHelper_02c0d29c(&iStack_64,0);
    puVar16 = (undefined8 *)PTR_DAT_03867250;
    puVar5 = PTR_DAT_03867238;
    puVar17 = (undefined8 *)PTR_DAT_03867230;
    puVar3 = PTR_DAT_0385e8f8;
    if (pEVar12 == (EventLogger *)0x0) goto LAB_0197e508;
    EventLogger_LogEvent_189bb54
              (pEVar12,*(void **)PTR_DAT_03867250,*(void **)PTR_DAT_0385e8f8,
               *(void **)PTR_DAT_03867238,*(void **)PTR_DAT_03867230,pvVar11,(void *)0x0,(void *)0x0
              );
    pvVar11 = Singleton_get_Instance_27784f4(*(void **)puVar4);
    runtimeMethod_00 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
    NativeHelper_02132ae8(runtimeMethod_00,*(undefined8 *)PTR_DAT_0385ca28);
    puVar18 = (undefined8 *)PTR_DAT_0385ca48;
    if (runtimeMethod_00 == (void *)0x0) goto LAB_0197e508;
    NativeHelper_02133494
              (runtimeMethod_00,*(undefined8 *)puVar3,*(undefined8 *)puVar5,
               *(undefined8 *)PTR_DAT_0385ca48);
    pGVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar9 == (Game_UserData *)0x0) goto LAB_0197e508;
    iStack_84 = Game_UserData_GetTotalLevels_18c9af8(pGVar9,(void *)0x0);
    uVar10 = *(undefined8 *)(puVar1 + 0x48);
    iStack_84 = iStack_84 + 1;
    piVar15 = &iStack_84;
  }
  uVar10 = NativeHelper_017ef40c(uVar10,piVar15);
  NativeHelper_02133494(runtimeMethod_00,*puVar17,uVar10,*puVar18);
  if (pvVar11 != (void *)0x0) {
    EventLogger_TkLogEvent_1888ca0(pvVar11,*puVar16,runtimeMethod_00,0,0);
    bVar7 = UnityEngine_PlayerPrefs_HasKey_32466e4(*(void **)puVar6,(void *)0x0);
    if (bVar7) {
      pvVar11 = UnityEngine_PlayerPrefs_GetString_324669c(*(void **)puVar6,(void *)0x0);
      lVar13 = NativeHelper_01c8a118(pvVar11,*(undefined8 *)PTR_DAT_03867218);
      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_0197e508;
      NativeHelper_0256a338(&uStack_a0,*(long *)(lVar13 + 0x10),*(undefined8 *)PTR_DAT_03867220);
      puVar4 = PTR_DAT_03867208;
      puVar2 = PTR_DAT_03867120;
      uStack_78 = puStack_98;
      uStack_80 = uStack_a0;
      lStack_70 = lStack_90;
      uStack_a0 = 0;
      puStack_98 = &uStack_80;
      while (uVar14 = NativeHelper_02240184(&uStack_80,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
        if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        pvVar11 = MergeFruit_CreateFruitItem_1878ab8
                            (self,*(int *)(lStack_70 + 0x1c),
                             *(Recovered_Vector3 *)(lStack_70 + 0x10),runtimeMethod_00);
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        self_00 = UnityEngine_GameObject_GetComponent_1b75510(pvVar11,*(void **)puVar2);
        if (self_00 == (FruitItem *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        FruitItem_ReleaseDown_187657c(self_00,runtimeMethod_01);
        self_00->isPlayTouchSound = true;
      }
      NativeHelper_02240180(&uStack_80,*(undefined8 *)PTR_DAT_03867200);
    }
    return;
  }
LAB_0197e508:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

