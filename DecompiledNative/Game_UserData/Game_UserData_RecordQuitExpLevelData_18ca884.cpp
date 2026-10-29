// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RecordQuitExpLevelData(int lastExpLevel) { }
// Ghidra address: 019ce884; ELF VA: 0x18ce884; file offset: 0x18ca884
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_RecordQuitExpLevelData_18ca884
               (Game_UserData *self,int lastExpLevel,void *runtimeMethod)

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
  long lVar11;
  int iStack_48;
  int iStack_44;
  
  puVar3 = PTR_DAT_03869c18;
  puVar2 = PTR_DAT_0385dc10;
  if ((bRam0000000003ab2429 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385dc10);
    NativeHelper_017ef284(PTR_DAT_03869c20);
    NativeHelper_017ef284(PTR_DAT_03869c18);
    bRam0000000003ab2429 = 1;
  }
  puVar4 = PTR_DAT_03869c20;
  puVar1 = PTR_DAT_0385c2d8;
  iStack_44 = lastExpLevel;
  uVar9 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_44);
  pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar9,0);
  iVar6 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar10,(void *)0x0);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar11);
  }
  uVar9 = NativeHelper_02bf109c(0);
  iVar7 = NativeHelper_019d8390(uVar9,0);
  iStack_48 = lastExpLevel;
  uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_48);
  pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar9,0);
  bVar5 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar10,(void *)0x0);
  if (bVar5) {
    iStack_44 = lastExpLevel;
    uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_44);
    pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar4,uVar9,0);
    pvVar10 = UnityEngine_PlayerPrefs_GetString_324669c(pvVar10,(void *)0x0);
    iVar7 = NativeHelper_02c0ed04(pvVar10,0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  uVar9 = NativeHelper_02bf109c(0);
  iVar8 = NativeHelper_019d8390(uVar9,0);
  iStack_44 = lastExpLevel;
  uVar9 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_44);
  pvVar10 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar9,0);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar10,iVar6 + (iVar8 - iVar7),(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

