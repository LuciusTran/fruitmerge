// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ShowComboAnimation(int comboCount) { }
// Ghidra address: 019f969c; ELF VA: 0x18f969c; file offset: 0x18f569c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ShowComboAnimation_18f569c
               (TKCommon_PlayGameView *self,int comboCount,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  
  if ((bRam0000000003ab25d2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867048);
    NativeHelper_017ef284(PTR_DAT_0386ad00);
    bRam0000000003ab25d2 = 1;
  }
  if (self->IsFinishing == false) {
    iVar1 = comboCount;
    if (5 < comboCount) {
      iVar1 = 6;
    }
    if (iVar1 < 4) {
      iVar1 = 3;
    }
    if ((0 < self->lastComboCount) && (comboCount <= self->lastComboCount)) {
      return;
    }
    if ((self->m_img_Combo != (void *)0x0) &&
       (lVar5 = NativeHelper_0334f4c8(self->m_img_Combo,0), lVar5 != 0)) {
      NativeHelper_0335236c(lVar5,1,0);
      pvVar6 = self->m_ComboSprites;
      if (pvVar6 != (void *)0x0) {
        uVar3 = comboCount - 3;
        uVar4 = *(uint *)((long)pvVar6 + 0x18) - 1;
        uVar2 = uVar3;
        if ((int)uVar4 <= (int)uVar3) {
          uVar2 = uVar4;
        }
        uVar4 = 0;
        if (-1 < (int)uVar3) {
          uVar4 = uVar2;
        }
        if (*(uint *)((long)pvVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        if (self->m_img_Combo != (void *)0x0) {
          NativeHelper_0345dd98
                    (self->m_img_Combo,*(undefined8 *)((long)pvVar6 + (long)(int)uVar4 * 8 + 0x20),0
                    );
          if ((self->m_img_Combo != (void *)0x0) &&
             (pvVar6 = UnityEngine_Component_GetComponent_1b08498
                                 (self->m_img_Combo,*(void **)PTR_DAT_03867048),
             pvVar6 != (void *)0x0)) {
            NativeHelper_03311250(0,pvVar6,*(undefined8 *)PTR_DAT_0386ad00,0,0);
            self->lastComboCount = iVar1;
            return;
          }
        }
      }
    }
  }
  else if ((self->m_img_Combo != (void *)0x0) &&
          (lVar5 = NativeHelper_0334f4c8(self->m_img_Combo,0), lVar5 != 0)) {
    if ((bRam0000000003abb79b & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a76a8,0,0);
      bRam0000000003abb79b = 1;
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8();
    }
    if (pcRam0000000003abb800 == (code *)0x0) {
      pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
    }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003abb800)(lVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

