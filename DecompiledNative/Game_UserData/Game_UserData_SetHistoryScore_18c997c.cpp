// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetHistoryScore(int score) { }
// Ghidra address: 019cd97c; ELF VA: 0x18cd97c; file offset: 0x18c997c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SetHistoryScore_18c997c(Game_UserData *self,int score,void *runtimeMethod)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  void *runtimeMethod_00;
  undefined1 auVar4 [16];
  
  runtimeMethod_00 = (void *)(ulong)(uint)score;
  if ((bRam0000000003ab240e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    auVar4 = NativeHelper_017ef284(PTR_DAT_0385db18);
    runtimeMethod_00 = auVar4._8_8_;
    self = auVar4._0_8_;
    bRam0000000003ab240e = 1;
  }
  iVar2 = Game_UserData_GetHistoryScore_18c9a14(self,runtimeMethod_00);
  puVar1 = PTR_DAT_0385d918;
  if (iVar2 < score) {
    UnityEngine_PlayerPrefs_SetInt_3245fa8(*(void **)PTR_DAT_0385db18,score,(void *)0x0);
    NativeHelper_0334aa10(0);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      NativeHelper_017ef404();
      lVar3 = *(long *)puVar1;
    }
    *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x19) = 1;
  }
  return;
}

