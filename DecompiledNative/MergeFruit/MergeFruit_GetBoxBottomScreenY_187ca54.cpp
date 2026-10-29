// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Vector2 GetBoxBottomScreenY() { }
// Ghidra address: 01980a54; ELF VA: 0x1880a54; file offset: 0x187ca54
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Recovered_Vector2 MergeFruit_GetBoxBottomScreenY_187ca54(MergeFruit *self,void *runtimeMethod)

{
  long lVar1;
  long lVar2;
  float fVar3;
  Recovered_Vector2 RStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  fVar3 = self->bottomEdgeY;
  lVar1 = NativeHelper_03320a8c(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  fStack_28 = fVar3 + _UNK_00a476a8;
  uStack_2c = 0;
  uStack_24 = 0;
  if ((bRam0000000003aba87d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a6c20,2);
    bRam0000000003aba87d = 1;
  }
  uStack_30 = 0;
  RStack_38.component0 = 0.0;
  RStack_38.component1 = 0.0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8(lVar1,0);
    }
    if (pcRam0000000003aba9a8 == (code *)0x0) {
      pcRam0000000003aba9a8 = (code *)NativeHelper_017ef240(&UNK_00a5c5b1);
    }
    (*pcRam0000000003aba9a8)(lVar2,&uStack_2c,2,&RStack_38);
    return RStack_38;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

