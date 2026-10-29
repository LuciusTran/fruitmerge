// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshExp() { }
// Ghidra address: 019f573c; ELF VA: 0x18f573c; file offset: 0x18f173c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_RefreshExp_18f173c(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  Game_UserData *pGVar6;
  undefined8 uVar7;
  TKLClient_TKLSwitcherConfig *pTVar8;
  void *pvVar9;
  long *plVar10;
  int iStack_24;
  
  puVar3 = PTR_DAT_0385db10;
  if ((bRam0000000003ab259e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_0385de90);
    bRam0000000003ab259e = 1;
  }
  plVar10 = self->m_txt_Level;
  pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar3);
  puVar4 = PTR_DAT_0385de90;
  if (pGVar6 != (Game_UserData *)0x0) {
    iStack_24 = Game_UserData_GetExpLevel_18c70c4(pGVar6,(void *)0x0);
    iStack_24 = iStack_24 + 1;
    uVar7 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_24);
    uVar7 = NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar7,0);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x5f0));
      pGVar6 = Singleton_get_Instance_27784f4(*(void **)puVar3);
      puVar3 = PTR_DAT_0385d918;
      if (pGVar6 != (Game_UserData *)0x0) {
        iVar5 = Game_UserData_GetExp_18ca674(pGVar6,(void *)0x0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar3);
        }
        pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
        if (pTVar8 != (TKLClient_TKLSwitcherConfig *)0x0) {
          iVar1 = pTVar8->FM_ExpPerLevel;
          pvVar9 = self->m_img_ProgressLevel;
          pTVar8 = Global_get_RemoteConfig_18048d8((void *)0x0);
          if ((pTVar8 != (TKLClient_TKLSwitcherConfig *)0x0) && (pvVar9 != (void *)0x0)) {
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar5 / iVar1;
            }
            NativeHelper_0346b188
                      ((float)(iVar5 - iVar2 * iVar1) / (float)pTVar8->FM_ExpPerLevel,pvVar9,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

