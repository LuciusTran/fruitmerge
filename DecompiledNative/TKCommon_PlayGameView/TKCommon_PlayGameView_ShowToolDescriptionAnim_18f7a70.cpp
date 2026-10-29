// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ShowToolDescriptionAnim() { }
// Ghidra address: 019fba70; ELF VA: 0x18fba70; file offset: 0x18f7a70
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_ShowToolDescriptionAnim_18f7a70
               (TKCommon_PlayGameView *self,void *runtimeMethod)

{
  void **ppvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000003ab25db & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865f58);
    NativeHelper_017ef284(PTR_DAT_0386add0);
    NativeHelper_017ef284(PTR_DAT_0386add8);
    NativeHelper_017ef284(PTR_DAT_03867148);
    NativeHelper_017ef284(PTR_DAT_038660a0);
    NativeHelper_017ef284(PTR_DAT_038673f8);
    bRam0000000003ab25db = 1;
  }
  ppvVar1 = &self->mShowToolDescriptionSeq;
  if (self->mShowToolDescriptionSeq != (void *)0x0) {
    NativeHelper_01a55998(self->mShowToolDescriptionSeq,0,0);
    *ppvVar1 = (void *)0x0;
    NativeHelper_017ef228(ppvVar1,0);
  }
  if (self->mCloseToolDescriptionSeq != (void *)0x0) {
    NativeHelper_01a55998(self->mCloseToolDescriptionSeq,0,0);
    self->mCloseToolDescriptionSeq = (void *)0x0;
    NativeHelper_017ef228(&self->mCloseToolDescriptionSeq,0);
  }
  if (self->m_btn_Cancel != (TKCommon_NormalClickButton *)0x0) {
    pvVar6 = (void *)NativeHelper_0334f400(self->m_btn_Cancel,0);
    if (cRam0000000003ab204a == '\0') {
      NativeHelper_017ef284(PTR_DAT_038654f0);
      cRam0000000003ab204a = '\x01';
    }
    puVar2 = PTR_DAT_038654f0;
    if (pvVar6 != (void *)0x0) {
      UnityEngine_Transform_set_localScale_325af4c
                (pvVar6,**(Recovered_Vector3 **)(*(long *)PTR_DAT_038654f0 + 0xb8),(void *)0x0);
      plVar7 = self->m_txt_ToolDescription;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
        plVar7 = self->m_txt_ToolDescription;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
          pvVar6 = self->m_trans_Clean;
          if (cRam0000000003ab1f83 == '\0') {
            NativeHelper_017ef284(PTR_DAT_038654f0);
            cRam0000000003ab1f83 = '\x01';
          }
          if (pvVar6 != (void *)0x0) {
            UnityEngine_Transform_set_localScale_325af4c
                      (pvVar6,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),
                       (void *)0x0);
            pvVar6 = self->m_trans_Bomb;
            if (cRam0000000003ab1f83 == '\0') {
              NativeHelper_017ef284(PTR_DAT_038654f0);
              cRam0000000003ab1f83 = '\x01';
            }
            if (pvVar6 != (void *)0x0) {
              UnityEngine_Transform_set_localScale_325af4c
                        (pvVar6,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),
                         (void *)0x0);
              pvVar6 = self->m_trans_Upgrade;
              if (cRam0000000003ab1f83 == '\0') {
                NativeHelper_017ef284(PTR_DAT_038654f0);
                cRam0000000003ab1f83 = '\x01';
              }
              if (pvVar6 != (void *)0x0) {
                UnityEngine_Transform_set_localScale_325af4c
                          (pvVar6,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),
                           (void *)0x0);
                pvVar6 = self->m_trans_Clean;
                if (cRam0000000003ab1f83 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_038654f0);
                  cRam0000000003ab1f83 = '\x01';
                }
                puVar5 = PTR_DAT_0386add8;
                puVar4 = PTR_DAT_0386add0;
                puVar3 = PTR_DAT_03865f58;
                if (pvVar6 != (void *)0x0) {
                  UnityEngine_Transform_set_localScale_325af4c
                            (pvVar6,*(Recovered_Vector3 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),
                             (void *)0x0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    NativeHelper_017ef404();
                  }
                  pvVar6 = (void *)NativeHelper_01a52aec(0);
                  uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar5);
                  NativeHelper_0295dd9c(uVar8,self,*(undefined8 *)puVar4,0);
                  uVar8 = NativeHelper_01a54418(0x43390000,_UNK_00a475e8,_UNK_00a47720,uVar8,0);
                  NativeHelper_01a60bac(pvVar6,uVar8,0);
                  uVar8 = NativeHelper_01a5e79c(0,0x3e800000,self->m_trans_Clean,0);
                  NativeHelper_01a60bf0(pvVar6,uVar8,0);
                  uVar8 = NativeHelper_01a5e79c(0,0x3e800000,self->m_trans_Bomb,0);
                  NativeHelper_01a60bf0(pvVar6,uVar8,0);
                  uVar8 = NativeHelper_01a5e79c(0,0x3e800000,self->m_trans_Upgrade,0);
                  NativeHelper_01a60bf0(pvVar6,uVar8,0);
                  uVar8 = NativeHelper_01a5e79c(0,0x3e800000,self->m_trans_Shake,0);
                  NativeHelper_01a60bf0(pvVar6,uVar8,0);
                  uVar8 = NativeHelper_019691a8
                                    (0x3f800000,_UNK_00a47714,self->m_txt_ToolDescription,0);
                  NativeHelper_01a65d7c(0x3e800000,pvVar6,uVar8,0);
                  puVar4 = PTR_DAT_038673f8;
                  puVar3 = PTR_DAT_03867148;
                  puVar2 = PTR_DAT_038660a0;
                  if (self->m_btn_Cancel != (TKCommon_NormalClickButton *)0x0) {
                    uVar8 = NativeHelper_0334f400(self->m_btn_Cancel,0);
                    uVar8 = NativeHelper_01a5e79c(_UNK_00a47798,_UNK_00a477dc,uVar8,0);
                    uVar8 = NativeHelper_01d6fa88(uVar8,0x1b,*(undefined8 *)puVar3);
                    NativeHelper_01a65d7c(_UNK_00a47768,pvVar6,uVar8,0);
                    uVar8 = NativeHelper_0334f400(self,0);
                    uVar8 = NativeHelper_01d70028(pvVar6,uVar8,*(undefined8 *)puVar2);
                    NativeHelper_01d70168(uVar8,1,*(undefined8 *)puVar4);
                    self->mShowToolDescriptionSeq = pvVar6;
                    if (iRam0000000003cd3780 != 0) {
                      func_0x018dcb10(1L << ((ulong)ppvVar1 >> 0xc & 0x3f),
                                      ((ulong)ppvVar1 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

