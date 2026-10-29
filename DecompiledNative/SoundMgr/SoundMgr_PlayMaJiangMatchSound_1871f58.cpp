// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void PlayMaJiangMatchSound() { }
// Ghidra address: 01975f58; ELF VA: 0x1875f58; file offset: 0x1871f58
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoundMgr_PlayMaJiangMatchSound_1871f58(SoundMgr *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  void *in_x4;
  SoundMgr *self_00;
  float fVar6;
  
  if ((bRam0000000003ab206f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866e68);
    NativeHelper_017ef284(PTR_DAT_03866e70);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab206f = 1;
  }
  fVar6 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  if (fVar6 - self->lastMatchSoundTime < _UNK_00a47714) {
    return;
  }
  fVar6 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  pvVar4 = self->m_MatchSounds;
  self->lastMatchSoundTime = fVar6;
  if (pvVar4 != (void *)0x0) {
    iVar2 = *(int *)((long)pvVar4 + 0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = self->matchCount / iVar2;
    }
    self_00 = (SoundMgr *)**(undefined8 **)(*(long *)PTR_DAT_0385d490 + 0xb8);
    iVar1 = 0;
    if (iVar2 != 1) {
      iVar1 = self->matchCount - iVar3 * iVar2;
    }
    uVar5 = NativeHelper_02519d28(pvVar4,iVar1,*(undefined8 *)PTR_DAT_03866e70);
    if (self_00 != (SoundMgr *)0x0) {
      SoundMgr_PlaySound_1871d4c(self_00,(void *)(uVar5 & 0xffffffff),false,1.0,false,in_x4);
      self->matchCount = self->matchCount + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

