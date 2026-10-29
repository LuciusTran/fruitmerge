// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void Retry() { }
// Ghidra address: 01981670; ELF VA: 0x1881670; file offset: 0x187d670
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_Retry_187d670(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  Game_UserData *pGVar10;
  Game_UserData *self_00;
  MergeFruit *self_01;
  EventLogger *self_02;
  long lVar11;
  undefined8 uVar12;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *pvVar13;
  int iStack_58;
  int iStack_54;
  
  puVar4 = PTR_DAT_0385db10;
  if ((bRam0000000003ab20d5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    NativeHelper_017ef284(PTR_DAT_0385e8f8);
    NativeHelper_017ef284(PTR_DAT_03867230);
    NativeHelper_017ef284(PTR_DAT_038673a0);
    NativeHelper_017ef284(PTR_DAT_03867250);
    bRam0000000003ab20d5 = 1;
  }
  iStack_54 = 0;
  pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar4);
  if (self_00 != (Game_UserData *)0x0) {
    iVar9 = Game_UserData_GetTotalLevels_18c9af8(self_00,(void *)0x0);
    if (pGVar10 != (Game_UserData *)0x0) {
      pvVar13 = (void *)0x0;
      Game_UserData_ResetCurrentPlayLevelData_18c9d9c(pGVar10,iVar9,(void *)0x0);
      pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
      puVar3 = PTR_DAT_0385e750;
      if (pGVar10 != (Game_UserData *)0x0) {
        Game_UserData_RecordStartPlayLevelData_18c9e18(pGVar10,(void *)0x0);
        MergeFruit_DestroyChildren_187cc04(self_01,self->m_GamePanel,pvVar13);
        MergeFruit_StopRedLineAnimation_187aa30(self,runtimeMethod_00);
        self_02 = Singleton_get_Instance_27784f4(*(void **)puVar3);
        pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
        if (pGVar10 != (Game_UserData *)0x0) {
          iStack_54 = Game_UserData_GetTotalLevels_18c9af8(pGVar10,(void *)0x0);
          iStack_54 = iStack_54 + 1;
          pvVar13 = (void *)NativeHelper_02c0d29c(&iStack_54,0);
          puVar8 = PTR_DAT_038673a0;
          puVar7 = PTR_DAT_03867250;
          puVar6 = PTR_DAT_03867230;
          puVar5 = PTR_DAT_0385e8f8;
          puVar2 = PTR_DAT_0385ca30;
          puVar1 = PTR_DAT_0385ca28;
          if (self_02 != (EventLogger *)0x0) {
            EventLogger_LogEvent_189bb54
                      (self_02,*(void **)PTR_DAT_03867250,*(void **)PTR_DAT_0385e8f8,
                       *(void **)PTR_DAT_038673a0,*(void **)PTR_DAT_03867230,pvVar13,(void *)0x0,
                       (void *)0x0);
            pvVar13 = Singleton_get_Instance_27784f4(*(void **)puVar3);
            lVar11 = NativeHelper_017ef520(*(undefined8 *)puVar2);
            NativeHelper_02132ae8(lVar11,*(undefined8 *)puVar1);
            puVar3 = PTR_DAT_0385ca48;
            if (lVar11 != 0) {
              NativeHelper_02133494
                        (lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar8,
                         *(undefined8 *)PTR_DAT_0385ca48);
              pGVar10 = Singleton_get_Instance_27784f4(*(void **)puVar4);
              if (pGVar10 != (Game_UserData *)0x0) {
                iStack_58 = Game_UserData_GetTotalLevels_18c9af8(pGVar10,(void *)0x0);
                iStack_58 = iStack_58 + 1;
                uVar12 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_58);
                NativeHelper_02133494(lVar11,*(undefined8 *)puVar6,uVar12,*(undefined8 *)puVar3);
                puVar3 = PTR_DAT_0385d490;
                if (pvVar13 != (void *)0x0) {
                  EventLogger_TkLogEvent_1888ca0(pvVar13,*(undefined8 *)puVar7,lVar11,0,0);
                  puVar1 = PTR_DAT_0385d918;
                  lVar11 = **(long **)(*(long *)puVar3 + 0xb8);
                  if (lVar11 != 0) {
                    *(undefined8 *)(lVar11 + 0x38) = 0;
                    *(undefined8 *)(lVar11 + 0x40) = 0;
                    lVar11 = *(long *)puVar1;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      NativeHelper_017ef404();
                      lVar11 = *(long *)puVar1;
                    }
                    pvVar13 = *(void **)puVar4;
                    *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x74) = 0;
                    pGVar10 = Singleton_get_Instance_27784f4(pvVar13);
                    if (pGVar10 != (Game_UserData *)0x0) {
                      Game_UserData_RecordOnceGameData_18caf38(pGVar10,(void *)0x0);
                      MergeFruit_ResetStatus_187d0d8(self,runtimeMethod_01);
                      iVar9 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
                      self->_nextRandomIndex = iVar9;
                      MergeFruit_CreateRandomFruitItem_187a5cc(self,runtimeMethod_02);
                      MergeFruit_SaveFruits_187a718(self,runtimeMethod_03);
                      return;
                    }
                  }
                }
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

