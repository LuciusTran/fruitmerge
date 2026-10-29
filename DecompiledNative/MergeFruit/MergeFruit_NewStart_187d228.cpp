// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void NewStart() { }
// Ghidra address: 01981228; ELF VA: 0x1881228; file offset: 0x187d228
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_NewStart_187d228(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  MergeFruit *self_00;
  Game_UserData *pGVar8;
  undefined8 uVar9;
  void *pvVar10;
  EventLogger *pEVar11;
  long lVar12;
  void *runtimeMethod_00;
  int *piVar13;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *in_x2;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iStack_64;
  int iStack_58;
  int iStack_54;
  
  puVar2 = PTR_DAT_0385db10;
  self_00 = self;
  if ((bRam0000000003ab20d4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867228);
    NativeHelper_017ef284(PTR_DAT_0385e8f8);
    NativeHelper_017ef284(PTR_DAT_03867230);
    NativeHelper_017ef284(PTR_DAT_03867238);
    NativeHelper_017ef284(PTR_DAT_03867240);
    NativeHelper_017ef284(PTR_DAT_03867248);
    self_00 = (MergeFruit *)NativeHelper_017ef284(PTR_DAT_03867250);
    bRam0000000003ab20d4 = 1;
  }
  iStack_54 = 0;
  MergeFruit_DestroyChildren_187cc04(self_00,self->m_GamePanel,in_x2);
  MergeFruit_StopRedLineAnimation_187aa30(self,runtimeMethod_00);
  pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  puVar5 = PTR_DAT_03867240;
  puVar4 = PTR_DAT_03867228;
  if (pGVar8 == (Game_UserData *)0x0) goto LAB_0198166c;
  iStack_58 = Game_UserData_GetTotalLevels_18c9af8(pGVar8,(void *)0x0);
  puVar1 = PTR_DAT_0385c2d8;
  iStack_58 = iStack_58 + 1;
  uVar9 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_58);
  uVar9 = NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar9,0);
  pvVar10 = (void *)NativeHelper_02a9c49c(*(undefined8 *)puVar5,uVar9,0);
  bVar6 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar10,(void *)0x0);
  puVar3 = PTR_DAT_0385e750;
  if (bVar6) {
    pEVar11 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
    pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar8 == (Game_UserData *)0x0) goto LAB_0198166c;
    iStack_54 = Game_UserData_GetTotalLevels_18c9af8(pGVar8,(void *)0x0);
    iStack_54 = iStack_54 + 1;
    pvVar10 = (void *)NativeHelper_02c0d29c(&iStack_54,0);
    puVar14 = (undefined8 *)PTR_DAT_03867250;
    puVar5 = PTR_DAT_03867248;
    puVar15 = (undefined8 *)PTR_DAT_03867230;
    puVar4 = PTR_DAT_0385e8f8;
    if (pEVar11 == (EventLogger *)0x0) goto LAB_0198166c;
    EventLogger_LogEvent_189bb54
              (pEVar11,*(void **)PTR_DAT_03867250,*(void **)PTR_DAT_0385e8f8,
               *(void **)PTR_DAT_03867248,*(void **)PTR_DAT_03867230,pvVar10,(void *)0x0,(void *)0x0
              );
    pvVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
    lVar12 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
    NativeHelper_02132ae8(lVar12,*(undefined8 *)PTR_DAT_0385ca28);
    puVar16 = (undefined8 *)PTR_DAT_0385ca48;
    if (lVar12 == 0) goto LAB_0198166c;
    NativeHelper_02133494
              (lVar12,*(undefined8 *)puVar4,*(undefined8 *)puVar5,*(undefined8 *)PTR_DAT_0385ca48);
    pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar8 == (Game_UserData *)0x0) goto LAB_0198166c;
    iStack_58 = Game_UserData_GetTotalLevels_18c9af8(pGVar8,(void *)0x0);
    uVar9 = *(undefined8 *)(puVar1 + 0x48);
    iStack_58 = iStack_58 + 1;
    piVar13 = &iStack_58;
  }
  else {
    pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar8 == (Game_UserData *)0x0) goto LAB_0198166c;
    iStack_58 = Game_UserData_GetTotalLevels_18c9af8(pGVar8,(void *)0x0);
    iStack_58 = iStack_58 + 1;
    uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_58);
    uVar9 = NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar9,0);
    pvVar10 = (void *)NativeHelper_02a9c49c(*(undefined8 *)puVar5,uVar9,0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar10,1,(void *)0x0);
    NativeHelper_0334aa10(0);
    puVar4 = PTR_DAT_0385e750;
    pEVar11 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
    pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar8 == (Game_UserData *)0x0) goto LAB_0198166c;
    iStack_54 = Game_UserData_GetTotalLevels_18c9af8(pGVar8,(void *)0x0);
    iStack_54 = iStack_54 + 1;
    pvVar10 = (void *)NativeHelper_02c0d29c(&iStack_54,0);
    puVar14 = (undefined8 *)PTR_DAT_03867250;
    puVar3 = PTR_DAT_03867238;
    puVar15 = (undefined8 *)PTR_DAT_03867230;
    puVar5 = PTR_DAT_0385e8f8;
    if (pEVar11 == (EventLogger *)0x0) goto LAB_0198166c;
    EventLogger_LogEvent_189bb54
              (pEVar11,*(void **)PTR_DAT_03867250,*(void **)PTR_DAT_0385e8f8,
               *(void **)PTR_DAT_03867238,*(void **)PTR_DAT_03867230,pvVar10,(void *)0x0,(void *)0x0
              );
    pvVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
    lVar12 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
    NativeHelper_02132ae8(lVar12,*(undefined8 *)PTR_DAT_0385ca28);
    puVar16 = (undefined8 *)PTR_DAT_0385ca48;
    if (lVar12 == 0) goto LAB_0198166c;
    NativeHelper_02133494
              (lVar12,*(undefined8 *)puVar5,*(undefined8 *)puVar3,*(undefined8 *)PTR_DAT_0385ca48);
    pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pGVar8 == (Game_UserData *)0x0) goto LAB_0198166c;
    iStack_64 = Game_UserData_GetTotalLevels_18c9af8(pGVar8,(void *)0x0);
    uVar9 = *(undefined8 *)(puVar1 + 0x48);
    iStack_64 = iStack_64 + 1;
    piVar13 = &iStack_64;
  }
  uVar9 = NativeHelper_017ef40c(uVar9,piVar13);
  NativeHelper_02133494(lVar12,*puVar15,uVar9,*puVar16);
  if (pvVar10 != (void *)0x0) {
    EventLogger_TkLogEvent_1888ca0(pvVar10,*puVar14,lVar12,0,0);
    MergeFruit_ResetStatus_187d0d8(self,runtimeMethod_01);
    iVar7 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
    self->_nextRandomIndex = iVar7;
    MergeFruit_CreateRandomFruitItem_187a5cc(self,runtimeMethod_02);
    MergeFruit_SaveFruits_187a718(self,runtimeMethod_03);
    return;
  }
LAB_0198166c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

