// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdateSkinScoreProgressHeadless(int addedScore) { }
// Ghidra address: 019d3f30; ELF VA: 0x18d3f30; file offset: 0x18cff30
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_UpdateSkinScoreProgressHeadless_18cff30
               (Game_UserData *self,int addedScore,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  Game_UserData *self_00;
  Game_UserData *self_01;
  long lVar6;
  Game_UserData *pGVar7;
  ulong uVar8;
  void *runtimeMethod_00;
  void **ppvVar9;
  int iVar10;
  void *pvVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003ab247f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dae0);
    NativeHelper_017ef284(PTR_DAT_0385dae8);
    NativeHelper_017ef284(PTR_DAT_0385daf0);
    NativeHelper_017ef284(PTR_DAT_0385db08);
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    NativeHelper_017ef284(PTR_DAT_0385db18);
    bRam0000000003ab247f = 1;
  }
  ppvVar9 = &self->_WaitUnlockScoreSkin_k__BackingField;
  pvVar11 = *ppvVar9;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  auVar12 = NativeHelper_02aa606c(pvVar11,0);
  if (((ulong)auVar12._0_8_ & 1) == 0) {
    uVar4 = Game_UserData_GetNextSkinUnlockScore_18d0150(auVar12._0_8_,auVar12._8_8_);
    uVar5 = Game_UserData_GetNextSkinAccumulatedScore_18d0198
                      ((Game_UserData *)(ulong)uVar4,runtimeMethod_00);
    iVar10 = (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) + addedScore;
    Game_UserData_SetNextSkinAccumulatedScore_18d01e0
              ((Game_UserData *)(ulong)uVar5,iVar10,runtimeMethod);
    if ((int)uVar4 <= iVar10) {
      Game_UserData_SetNextSkinAccumulatedScore_18d01e0(self_00,0,runtimeMethod);
      Game_UserData_AddUserSkin_18d022c(self_01,pvVar11,runtimeMethod);
      pvVar11 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d9c8);
      if ((pvVar11 == (void *)0x0) ||
         (lVar6 = ConfigManager_GetSkinList_1806518(pvVar11,0), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      NativeHelper_0256a338(&uStack_48,lVar6,*(undefined8 *)PTR_DAT_0385db08);
      puVar2 = PTR_DAT_0385db18;
      puVar1 = PTR_DAT_0385dae8;
      do {
        do {
          pGVar7 = (Game_UserData *)NativeHelper_02240184(&uStack_48,*(undefined8 *)puVar1);
          lVar6 = lStack_38;
          if (((ulong)pGVar7 & 1) == 0) {
            iVar10 = 0;
            goto LAB_019d4094;
          }
          if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          bVar3 = Game_UserData_IsUserActuallyHasSkin_18cfd00
                            (pGVar7,*(void **)(lStack_38 + 0x10),runtimeMethod);
        } while (bVar3);
        runtimeMethod = (void *)0x0;
        uVar8 = NativeHelper_02aa50f4(*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)puVar2);
      } while ((uVar8 & 1) != 0);
      iVar10 = *(int *)(lVar6 + 0x20);
      *ppvVar9 = *(void **)(lVar6 + 0x10);
      NativeHelper_017ef228(ppvVar9);
LAB_019d4094:
      pGVar7 = (Game_UserData *)NativeHelper_02240180(&uStack_48,*(undefined8 *)PTR_DAT_0385dae0);
      if (iVar10 == 0) {
        *ppvVar9 = (void *)0x0;
        pGVar7 = (Game_UserData *)NativeHelper_017ef228(ppvVar9,0);
      }
      Game_UserData_SetNextSkinUnlockScore_18d054c(pGVar7,iVar10,runtimeMethod);
    }
  }
  return;
}

