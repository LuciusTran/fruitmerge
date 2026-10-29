// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GetBindComponents(GameObject go) { }
// Ghidra address: 019f1c08; ELF VA: 0x18f1c08; file offset: 0x18edc08
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_GetBindComponents_18edc08
               (TKCommon_PlayGameView *self,void *go,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ComponentAutoBindTool *self_00;
  void *pvVar8;
  TKCommon_NormalClickButton *pTVar9;
  
  if ((bRam0000000003ab2586 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a918);
    NativeHelper_017ef284(PTR_DAT_0386a688);
    NativeHelper_017ef284(PTR_DAT_0386a690);
    NativeHelper_017ef284(PTR_DAT_0386a698);
    NativeHelper_017ef284(PTR_DAT_0386a768);
    NativeHelper_017ef284(PTR_DAT_0386aab8);
    NativeHelper_017ef284(PTR_DAT_0386a6a0);
    NativeHelper_017ef284(PTR_DAT_0386a6a8);
    bRam0000000003ab2586 = 1;
  }
  if ((go != (void *)0x0) &&
     (self_00 = UnityEngine_GameObject_GetComponent_1b75510(go,*(void **)PTR_DAT_0386a6a8),
     puVar7 = PTR_DAT_0386aab8, puVar6 = PTR_DAT_0386a918, puVar5 = PTR_DAT_0386a768,
     puVar4 = PTR_DAT_0386a6a0, puVar3 = PTR_DAT_0386a698, puVar2 = PTR_DAT_0386a690,
     puVar1 = PTR_DAT_0386a688, self_00 != (ComponentAutoBindTool *)0x0)) {
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0,*(void **)PTR_DAT_0386a698);
    self->m_trans_Test = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,1,*(void **)puVar7);
    self->m_slider_blinkMin = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,2,*(void **)puVar4);
    self->m_txt_blinkMin = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,3,*(void **)puVar7);
    self->m_slider_blinkMax = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,4,*(void **)puVar4);
    self->m_txt_blinkMax = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,5,*(void **)puVar6);
    self->m_btn_DropLine = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,6,*(void **)puVar6);
    self->m_btn_AddScore = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,7,*(void **)puVar3);
    self->m_trans_Root = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,8,*(void **)puVar3);
    self->m_trans_PlayGame = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,9,*(void **)puVar3);
    self->m_trans_GameTop = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,10,*(void **)puVar4);
    self->m_txt_Score = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0xb,*(void **)puVar4);
    self->m_txt_HistoryScore = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0xc,*(void **)puVar3);
    self->m_trans_Task = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0xd,*(void **)puVar1);
    self->m_img_Progress = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0xe,*(void **)puVar1);
    self->m_img_Target = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0xf,*(void **)puVar3);
    self->m_trans_ImgGift = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x10,*(void **)puVar4);
    self->m_txt_Progress = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x11,*(void **)puVar3);
    self->m_trans_Level = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x12,*(void **)puVar1);
    self->m_img_ProgressLevel = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x13,*(void **)puVar4);
    self->m_txt_Level = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x14,*(void **)puVar1);
    self->m_img_NextPreview = pvVar8;
    NativeHelper_017ef228();
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x15,*(void **)puVar3);
    self->m_trans_RemoveAd = pvVar8;
    NativeHelper_017ef228();
    pTVar9 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x16,*(void **)puVar2);
    self->m_btn_League = pTVar9;
    NativeHelper_017ef228();
    pTVar9 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x17,*(void **)puVar2);
    self->m_btn_Task = pTVar9;
    NativeHelper_017ef228(&self->m_btn_Task,pTVar9);
    pTVar9 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x18,*(void **)puVar2);
    self->m_btn_Room = pTVar9;
    NativeHelper_017ef228(&self->m_btn_Room,pTVar9);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x19,*(void **)puVar3);
    self->m_trans_GameBottom = pvVar8;
    NativeHelper_017ef228(&self->m_trans_GameBottom,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x1a,*(void **)puVar3);
    self->m_trans_bannerBottom = pvVar8;
    NativeHelper_017ef228(&self->m_trans_bannerBottom,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x1b,*(void **)puVar3);
    self->m_trans_ToolPanel = pvVar8;
    NativeHelper_017ef228(&self->m_trans_ToolPanel,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x1c,*(void **)puVar3);
    self->m_trans_Clean = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Clean,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x1d,*(void **)puVar3);
    self->m_trans_Bomb = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Bomb,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x1e,*(void **)puVar3);
    self->m_trans_Upgrade = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Upgrade,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x1f,*(void **)puVar3);
    self->m_trans_Shake = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Shake,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x20,*(void **)puVar3);
    self->m_trans_Settings = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Settings,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x21,*(void **)puVar3);
    self->m_trans_LevelPreviews = pvVar8;
    NativeHelper_017ef228(&self->m_trans_LevelPreviews,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x22,*(void **)puVar1);
    self->m_img_1_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_1_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x23,*(void **)puVar1);
    self->m_img_2_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_2_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x24,*(void **)puVar1);
    self->m_img_3_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_3_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x25,*(void **)puVar1);
    self->m_img_4_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_4_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x26,*(void **)puVar1);
    self->m_img_5_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_5_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x27,*(void **)puVar1);
    self->m_img_6_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_6_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x28,*(void **)puVar1);
    self->m_img_7_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_7_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x29,*(void **)puVar1);
    self->m_img_8_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_8_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x2a,*(void **)puVar1);
    self->m_img_9_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_9_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x2b,*(void **)puVar1);
    self->m_img_10_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_10_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x2c,*(void **)puVar1);
    self->m_img_11_Preview = pvVar8;
    NativeHelper_017ef228(&self->m_img_11_Preview,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x2d,*(void **)puVar1);
    self->m_img_Combo = pvVar8;
    NativeHelper_017ef228(&self->m_img_Combo,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x2e,*(void **)puVar3);
    self->m_trans_Tip = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Tip,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x2f,*(void **)puVar1);
    self->m_img_TargetFruit = pvVar8;
    NativeHelper_017ef228(&self->m_img_TargetFruit,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x30,*(void **)puVar4);
    self->m_txt_TargetNum = pvVar8;
    NativeHelper_017ef228(&self->m_txt_TargetNum,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x31,*(void **)puVar3);
    self->m_trans_ToolDesc = pvVar8;
    NativeHelper_017ef228(&self->m_trans_ToolDesc,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x32,*(void **)puVar3);
    self->m_trans_DescBg = pvVar8;
    NativeHelper_017ef228(&self->m_trans_DescBg,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x33,*(void **)puVar1);
    self->m_img_Tool = pvVar8;
    NativeHelper_017ef228(&self->m_img_Tool,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x34,*(void **)puVar4);
    self->m_txt_ToolDescription = pvVar8;
    NativeHelper_017ef228(&self->m_txt_ToolDescription,pvVar8);
    pTVar9 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x35,*(void **)puVar2);
    self->m_btn_Cancel = pTVar9;
    NativeHelper_017ef228(&self->m_btn_Cancel,pTVar9);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x36,*(void **)puVar3);
    self->m_trans_shakeGuide = pvVar8;
    NativeHelper_017ef228(&self->m_trans_shakeGuide,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x37,*(void **)puVar3);
    self->m_trans_ShakeCountdown = pvVar8;
    NativeHelper_017ef228(&self->m_trans_ShakeCountdown,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x38,*(void **)puVar4);
    self->m_txt_ShakeCountdown = pvVar8;
    NativeHelper_017ef228(&self->m_txt_ShakeCountdown,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x39,*(void **)puVar3);
    self->m_trans_Skin = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Skin,pvVar8);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x3a,*(void **)puVar3);
    self->m_trans_Panel = pvVar8;
    NativeHelper_017ef228(&self->m_trans_Panel,pvVar8);
    pTVar9 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x3b,*(void **)puVar2);
    self->m_btn_Close = pTVar9;
    NativeHelper_017ef228(&self->m_btn_Close,pTVar9);
    pvVar8 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0x3c,*(void **)puVar5);
    self->m_scrollrect_Skin = pvVar8;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)&self->m_scrollrect_Skin >> 0xc & 0x3f),
                      ((ulong)&self->m_scrollrect_Skin >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

