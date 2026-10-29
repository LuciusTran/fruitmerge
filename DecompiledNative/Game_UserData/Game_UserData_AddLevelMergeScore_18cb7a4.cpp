// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddLevelMergeScore(int score) { }
// Ghidra address: 019cf7a4; ELF VA: 0x18cf7a4; file offset: 0x18cb7a4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_AddLevelMergeScore_18cb7a4(Game_UserData *self,int score,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iStack_38;
  int iStack_34;
  
  puVar2 = PTR_DAT_03869d18;
  puVar1 = PTR_DAT_03869c00;
  if ((bRam0000000003ab2426 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869c00);
    NativeHelper_017ef284(PTR_DAT_03869d18);
    bRam0000000003ab2426 = 1;
  }
  iVar3 = UnityEngine_PlayerPrefs_GetInt_3246194(*(void **)puVar1,(void *)0x0);
  puVar1 = PTR_DAT_0385c2d8;
  iStack_34 = iVar3;
  uVar5 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_34);
  pvVar6 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar2,uVar5,0);
  iVar4 = UnityEngine_PlayerPrefs_GetInt_3246194(pvVar6,(void *)0x0);
  iStack_38 = iVar3;
  uVar5 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_38);
  pvVar6 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar2,uVar5,0);
  UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar6,iVar4 + score,(void *)0x0);
  NativeHelper_0334aa10(0);
  return;
}

