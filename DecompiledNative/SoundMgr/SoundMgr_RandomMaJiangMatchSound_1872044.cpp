// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void RandomMaJiangMatchSound() { }
// Ghidra address: 01976044; ELF VA: 0x1876044; file offset: 0x1872044
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoundMgr_RandomMaJiangMatchSound_1872044(SoundMgr *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  void *in_x4;
  void *pvVar15;
  SoundMgr *self_00;
  float fVar16;
  undefined4 uStack_24;
  
  if ((bRam0000000003ab2070 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03866e68);
    NativeHelper_017ef284(PTR_DAT_03866e70);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    NativeHelper_017ef284(PTR_DAT_03866e78);
    bRam0000000003ab2070 = 1;
  }
  fVar16 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  if (fVar16 - self->lastMatchSoundTime < _UNK_00a47714) {
    return;
  }
  fVar16 = UnityEngine_Time_get_unscaledTime_3257508((void *)0x0);
  self->lastMatchSoundTime = fVar16;
  iVar8 = UnityEngine_Random_Range_3246f40(0,10,(void *)0x0);
  pvVar15 = self->m_MatchSounds;
  if (pvVar15 != (void *)0x0) {
    iVar2 = *(int *)((long)pvVar15 + 0x18);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar8 / iVar2;
    }
    self_00 = (SoundMgr *)**(undefined8 **)(*(long *)PTR_DAT_0385d490 + 0xb8);
    iVar1 = 0;
    if (iVar2 != 1) {
      iVar1 = iVar8 - iVar3 * iVar2;
    }
    uVar9 = NativeHelper_02519d28(pvVar15,iVar1,*(undefined8 *)PTR_DAT_03866e70);
    if (self_00 != (SoundMgr *)0x0) {
      SoundMgr_PlaySound_1871d4c(self_00,(void *)(uVar9 & 0xffffffff),false,1.0,false,in_x4);
      if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar7 = Global_get_IsActiveVibrate_1803fcc((void *)0x0);
      if (!bVar7) {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_03866e78 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      puVar6 = PTR_DAT_038681a8;
      puVar4 = PTR_DAT_03868198;
      puVar5 = PTR_DAT_03866e78;
      if ((bRam0000000003ab21e6 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03868198);
        NativeHelper_017ef284(PTR_DAT_038681a8);
        NativeHelper_017ef284(PTR_DAT_03866e78);
        bRam0000000003ab21e6 = 1;
      }
      lVar14 = NativeHelper_017ef374(*(undefined8 *)puVar4,4);
      NativeHelper_02b455b8(lVar14,*(undefined8 *)puVar6,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      puVar5 = PTR_DAT_03866e78;
      if ((bRam0000000003ab21e8 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c420);
        NativeHelper_017ef284(PTR_DAT_03866e78);
        NativeHelper_017ef284(PTR_DAT_0385d400);
        bRam0000000003ab21e8 = 1;
      }
      puVar4 = PTR_DAT_0385c420;
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        NativeHelper_017ef404();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
      plVar11 = (long *)NativeHelper_017ef374(*(undefined8 *)puVar4,2);
      if (plVar11 == (long *)0x0) {
code_r0x0199afe4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      if ((lVar14 != 0) &&
         (lVar12 = NativeHelper_017ef408(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
code_r0x0199afec:
        uVar13 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef3f4(uVar13,0);
      }
      if ((int)plVar11[3] != 0) {
        plVar11[4] = lVar14;
        NativeHelper_017ef228(plVar11 + 4,lVar14);
        uStack_24 = 0xffffffff;
        lVar14 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_24);
        if ((lVar14 != 0) &&
           (lVar12 = NativeHelper_017ef408(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto code_r0x0199afec;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
          plVar11[5] = lVar14;
          NativeHelper_017ef228(plVar11 + 5,lVar14);
          if (lVar10 != 0) {
            NativeHelper_0330b418(lVar10,*(undefined8 *)PTR_DAT_0385d400,plVar11,0);
            return;
          }
          goto code_r0x0199afe4;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

