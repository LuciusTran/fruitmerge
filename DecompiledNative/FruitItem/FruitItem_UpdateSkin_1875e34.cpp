// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateSkin(string usingSkinName) { }
// Ghidra address: 01979e34; ELF VA: 0x1879e34; file offset: 0x1875e34
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_UpdateSkin_1875e34(FruitItem *self,void *usingSkinName,void *runtimeMethod)

{
  int iVar1;
  void *pvVar2;
  void *runtimeMethod_00;
  void *pvVar3;
  long lVar4;
  void **ppvVar5;
  undefined8 uVar6;
  void **ppvVar7;
  void **ppvVar8;
  
  ppvVar8 = &self->_currentUsingSkin;
  *ppvVar8 = usingSkinName;
  NativeHelper_017ef228(ppvVar8);
  pvVar2 = Game_Const_GetSprite_NormalFruit_18da3e0(*ppvVar8,self->m_FruitType + 1,(void *)0x0);
  ppvVar5 = &self->_normalSprite;
  *ppvVar5 = pvVar2;
  NativeHelper_017ef228(ppvVar5,pvVar2);
  pvVar2 = Game_Const_GetSprite_FailedFruit_18da48c(*ppvVar8,self->m_FruitType + 1,(void *)0x0);
  ppvVar7 = &self->_failedSprite;
  *ppvVar7 = pvVar2;
  NativeHelper_017ef228(ppvVar7,pvVar2);
  pvVar2 = Game_Const_GetSprite_BlinkFruit_18da5fc(*ppvVar8,self->m_FruitType + 1,(void *)0x0);
  ppvVar8 = &self->_blinkSprite;
  *ppvVar8 = pvVar2;
  NativeHelper_017ef228(ppvVar8,pvVar2);
  FruitItem_UpdateCollider2D_18761e4(self,runtimeMethod_00);
  iVar1 = *(int *)&self->field_0x98;
  if (iVar1 == 2) {
    pvVar2 = self->_sprite;
    ppvVar5 = ppvVar8;
  }
  else if (iVar1 == 1) {
    pvVar2 = self->_sprite;
    ppvVar5 = ppvVar7;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    pvVar2 = self->_sprite;
  }
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *ppvVar5;
    if ((bRam0000000003aba5dd & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a6b00,pvVar3,0);
      NativeHelper_017ef284(PTR_DAT_038a6b28);
      bRam0000000003aba5dd = 1;
    }
    if (pvVar2 != (void *)0x0) {
      lVar4 = *(long *)((long)pvVar2 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8(pvVar2,0);
      }
      if (*(long *)(*(long *)PTR_DAT_038a6b28 + 0x38) == 0) {
        NativeHelper_01827500();
      }
      uVar6 = 0;
      if (pvVar3 != (void *)0x0) {
        uVar6 = *(undefined8 *)((long)pvVar3 + 0x10);
      }
      if (pcRam0000000003aba5f8 == (code *)0x0) {
        pcRam0000000003aba5f8 = (code *)NativeHelper_017ef240(&UNK_00a6cd40);
      }
                    /* WARNING: Could not recover jumptable at 0x033190c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003aba5f8)(lVar4,uVar6);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

