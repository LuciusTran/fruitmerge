// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddExp(int num) { }
// Ghidra address: 019ce6b8; ELF VA: 0x18ce6b8; file offset: 0x18ca6b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_AddExp_18ca6b8(Game_UserData *self,int num,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  int lastExpLevel;
  uint value;
  Game_UserData *self_00;
  Game_UserData *self_01;
  long lVar14;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar15;
  undefined1 auVar16 [16];
  
  puVar2 = PTR_DAT_03869bf8;
  puVar1 = PTR_DAT_0385d950;
  pvVar15 = (void *)(ulong)(uint)num;
  self_00 = self;
  if ((bRam0000000003ab241f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03869c00);
    NativeHelper_017ef284(PTR_DAT_03869c08);
    NativeHelper_017ef284(PTR_DAT_03869bf8);
    NativeHelper_017ef284(PTR_DAT_03868b40);
    auVar16 = NativeHelper_017ef284(PTR_DAT_03869c10);
    pvVar15 = auVar16._8_8_;
    self_00 = auVar16._0_8_;
    bRam0000000003ab241f = 1;
  }
  puVar4 = PTR_DAT_03869c08;
  puVar3 = PTR_DAT_03869c00;
  iVar13 = Game_UserData_GetExp_18ca674(self_00,pvVar15);
  pvVar15 = (void *)0x0;
  UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar2,iVar13 + num,(void *)0x0);
  NativeHelper_0334aa10(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_Broadcast_1875470(*(void **)puVar4,(void *)0x0);
  lastExpLevel = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar3,(void *)0x0);
  value = Game_UserData_GetExpLevel_18c70c4(self,runtimeMethod_00);
  if ((0 < iVar13 + num) && (lastExpLevel < (int)value)) {
    Game_UserData_RecordQuitExpLevelData_18ca884((Game_UserData *)(ulong)value,lastExpLevel,pvVar15)
    ;
    UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)puVar3,value,(void *)0x0);
    auVar16 = NativeHelper_0334aa10(0);
    Game_UserData_RecordStartExpLevelData_18caa2c(auVar16._0_8_,auVar16._8_8_);
    bVar12 = Game_UserData_get_EnableTask_18cab28(self_01,runtimeMethod_01);
    pvVar15 = extraout_x1;
    if (!bVar12) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      Messenger_Broadcast_1875470(*(void **)PTR_DAT_03869c10,(void *)0x0);
      Messenger_Broadcast_1875470(*(void **)PTR_DAT_03868b40,(void *)0x0);
      pvVar15 = extraout_x1_00;
    }
    puVar1 = PTR_DAT_0385d918;
    lVar14 = *(long *)PTR_DAT_0385d918;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar1;
      pvVar15 = extraout_x1_01;
    }
    *(int *)(*(long *)(lVar14 + 0xb8) + 100) = *(int *)(*(long *)(lVar14 + 0xb8) + 100) + 1;
    Game_UserData_LogLevelUp_18cab7c(self,pvVar15);
    puVar1 = PTR_DAT_0385d918;
    if ((bRam0000000003ab2441 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385d918);
      NativeHelper_017ef284(PTR_DAT_03869c58);
      NativeHelper_017ef284(PTR_DAT_03869c60);
      NativeHelper_017ef284(PTR_DAT_03869c68);
      NativeHelper_017ef284(PTR_DAT_03869c70);
      NativeHelper_017ef284(PTR_DAT_03869c78);
      NativeHelper_017ef284(PTR_DAT_03869c80);
      NativeHelper_017ef284(PTR_DAT_03869c88);
      NativeHelper_017ef284(PTR_DAT_03869c90);
      NativeHelper_017ef284(PTR_DAT_03869c98);
      NativeHelper_017ef284(PTR_DAT_03868898);
      NativeHelper_017ef284(PTR_DAT_03869ca0);
      NativeHelper_017ef284(PTR_DAT_038670f8);
      NativeHelper_017ef284(PTR_DAT_03867100);
      NativeHelper_017ef284(PTR_DAT_03869ca8);
      NativeHelper_017ef284(PTR_DAT_03869cb0);
      NativeHelper_017ef284(PTR_DAT_03869cb8);
      NativeHelper_017ef284(PTR_DAT_03869cc0);
      NativeHelper_017ef284(PTR_DAT_03869cc8);
      NativeHelper_017ef284(PTR_DAT_03869cd0);
      NativeHelper_017ef284(PTR_DAT_03869cd8);
      NativeHelper_017ef284(PTR_DAT_03869ce0);
      NativeHelper_017ef284(PTR_DAT_03869ce8);
      NativeHelper_017ef284(PTR_DAT_03869cf0);
      NativeHelper_017ef284(PTR_DAT_03869cf8);
      NativeHelper_017ef284(PTR_DAT_03869d00);
      bRam0000000003ab2441 = 1;
    }
    puVar2 = PTR_DAT_03869ca0;
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar1;
    }
    puVar11 = PTR_DAT_03869cf0;
    puVar10 = PTR_DAT_03869ce8;
    puVar9 = PTR_DAT_03869cd0;
    puVar8 = PTR_DAT_03869cb8;
    puVar7 = PTR_DAT_03869ca8;
    puVar6 = PTR_DAT_03869c98;
    puVar5 = PTR_DAT_03869c80;
    puVar4 = PTR_DAT_03869c78;
    puVar3 = PTR_DAT_03869c68;
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar2,(uint)*(byte *)(*(long *)(lVar14 + 0xb8) + 0x19),(void *)0x0);
    lVar14 = *(long *)puVar1;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar14 = *(long *)puVar1;
    }
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar7,*(int *)(*(long *)(lVar14 + 0xb8) + 0x1c),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar11,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar4,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar8,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar5,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar9,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar3,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar6,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)puVar10,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x3c),(void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cb0,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cc8,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x44),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_038670f8,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cd8,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x4c),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869ce0,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cf8,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c70,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869cc0,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x5c),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03867100,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x74),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c60,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c88,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 100),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c58,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869d00,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03869c90,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70),
               (void *)0x0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8
              (*(void **)PTR_DAT_03868898,*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78),
               (void *)0x0);
    if (pcRam0000000003abb5f0 == (code *)0x0) {
      pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
    }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abb5f0)();
    return;
  }
  return;
}

