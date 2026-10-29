// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RecordQuitPlayLevelData(int lastPlayLevel) { }
// Ghidra address: 019cdb9c; ELF VA: 0x18cdb9c; file offset: 0x18c9b9c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_RecordQuitPlayLevelData_18c9b9c
               (Game_UserData *self,int lastPlayLevel,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  int iStack_44;
  int iStack_38;
  int iStack_34;
  
  puVar3 = PTR_DAT_03869b78;
  if ((bRam0000000003ab2417 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869b80);
    NativeHelper_017ef284(PTR_DAT_03869b78);
    bRam0000000003ab2417 = 1;
  }
  puVar1 = PTR_DAT_0385c2d8;
  iStack_34 = lastPlayLevel;
  uVar9 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_34);
  pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar9,0);
  bVar5 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar10,(void *)0x0);
  puVar4 = PTR_DAT_03869b80;
  puVar2 = PTR_DAT_0385dc10;
  if (bVar5) {
    iStack_34 = lastPlayLevel;
    uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_34);
    pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar9,0);
    iVar6 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar10,(void *)0x0);
    iStack_38 = lastPlayLevel;
    uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_38);
    pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar9,0);
    pvVar10 = UnityEngine_PlayerPrefs_GetString_324669c(pvVar10,(void *)0x0);
    iVar7 = NativeHelper_02c0ed04(pvVar10,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    uVar9 = NativeHelper_02bf109c(0);
    iVar8 = NativeHelper_019d8390(uVar9,0);
    iStack_44 = lastPlayLevel;
    uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_44);
    pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar9,0);
    UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar10,iVar6 + (iVar8 - iVar7),(void *)0x0);
    NativeHelper_0334aa10(0);
  }
  return;
}

