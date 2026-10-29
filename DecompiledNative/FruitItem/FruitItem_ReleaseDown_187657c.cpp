// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ReleaseDown() { }
// Ghidra address: 0197a57c; ELF VA: 0x187a57c; file offset: 0x187657c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_ReleaseDown_187657c(FruitItem *self,void *runtimeMethod)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  if (self->_rigidbody2D != (void *)0x0) {
    pvVar2 = (void *)0x0;
    NativeHelper_033af858(self->_rigidbody2D,1);
    FruitItem_SetKinematic_18763bc(self,false,pvVar2);
    pvVar2 = self->_sprite;
    if (pvVar2 != (void *)0x0) {
      iVar1 = self->_baseOrder;
      if ((bRam0000000003abad2c & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a6ea0,iVar1,0);
        bRam0000000003abad2c = 1;
      }
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(long *)((long)pvVar2 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_0334bff8(pvVar2,0);
        }
        if (pcRam0000000003abae18 == (code *)0x0) {
          pcRam0000000003abae18 = (code *)NativeHelper_017ef240(&UNK_00a62406);
        }
                    /* WARNING: Could not recover jumptable at 0x0332d978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abae18)(lVar3,iVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

