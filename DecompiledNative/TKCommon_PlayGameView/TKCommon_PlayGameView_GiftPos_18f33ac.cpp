// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Vector3 GiftPos() { }
// Ghidra address: 019f73ac; ELF VA: 0x18f73ac; file offset: 0x18f33ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Vector3
TKCommon_PlayGameView_GiftPos_18f33ac(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  Recovered_Vector3 RVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uStack_30;
  float fStack_28;
  
  pvVar2 = self->m_trans_ImgGift;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if ((bRam0000000003abbd28 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a79f0,0);
    bRam0000000003abbd28 = 1;
  }
  fStack_28 = 0.0;
  uStack_30 = 0;
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)((long)pvVar2 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000003abbd50 == (code *)0x0) {
        pcRam0000000003abbd50 = (code *)NativeHelper_017ef240(&UNK_00a62800);
      }
      (*pcRam0000000003abbd50)(lVar3,&uStack_30);
      RVar1.component2 = fStack_28;
      RVar1.component0 = (float)(undefined4)uStack_30;
      RVar1.component1 = (float)uStack_30._4_4_;
      return RVar1;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_0334bff8();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

