// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayMergeSound() { }
// Ghidra address: 0197d384; ELF VA: 0x187d384; file offset: 0x1879384
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_PlayMergeSound_1879384(FruitItem *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *extraout_x1;
  void *in_x4;
  SoundMgr *self_00;
  float fVar8;
  
  puVar4 = PTR_DAT_0385d490;
  if ((bRam0000000003ab20bc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab20bc = 1;
    runtimeMethod = extraout_x1;
  }
  lVar7 = **(long **)(*(long *)puVar4 + 0xb8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(0,runtimeMethod);
  }
  if ((bRam0000000003ab206f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866e68);
    NativeHelper_017ef284(PTR_DAT_03866e70);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab206f = 1;
  }
  fVar8 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  if (fVar8 - *(float *)(lVar7 + 0x44) < _UNK_00a47714) {
    return;
  }
  fVar8 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  lVar5 = *(long *)(lVar7 + 0x28);
  *(float *)(lVar7 + 0x44) = fVar8;
  if (lVar5 != 0) {
    iVar2 = *(int *)(lVar5 + 0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(lVar7 + 0x3c) / iVar2;
    }
    self_00 = (SoundMgr *)**(undefined8 **)(*(long *)PTR_DAT_0385d490 + 0xb8);
    iVar1 = 0;
    if (iVar2 != 1) {
      iVar1 = *(int *)(lVar7 + 0x3c) - iVar3 * iVar2;
    }
    uVar6 = NativeHelper_02519d28(lVar5,iVar1,*(undefined8 *)PTR_DAT_03866e70);
    if (self_00 != (SoundMgr *)0x0) {
      SoundMgr_PlaySound_1871d4c(self_00,(void *)(uVar6 & 0xffffffff),false,1.0,false,in_x4);
      *(int *)(lVar7 + 0x3c) = *(int *)(lVar7 + 0x3c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

