// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateCurrentIndicatorPosition() { }
// Ghidra address: 019805b0; ELF VA: 0x18805b0; file offset: 0x187c5b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_UpdateCurrentIndicatorPosition_187c5b0(MergeFruit *self,void *runtimeMethod)

{
  void *pvVar1;
  long lVar2;
  Recovered_Vector3 RVar3;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if (self->_currentIndicator != (void *)0x0) {
    RVar3 = UnityEngine_Transform_get_position_325a714(self->_currentIndicator,(void *)0x0);
    fStack_24 = RVar3.component2;
    fStack_28 = RVar3.component1;
    pvVar1 = self->_currentIndicator;
    if (pvVar1 != (void *)0x0) {
      fStack_2c = (self->_lastFruitPos).component0;
      if ((bRam0000000003abbd29 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a79f0,0);
        bRam0000000003abbd29 = 1;
      }
      if (pvVar1 != (void *)0x0) {
        lVar2 = *(long *)((long)pvVar1 + 0x10);
        if (lVar2 != 0) {
          if (pcRam0000000003abbd58 == (code *)0x0) {
            pcRam0000000003abbd58 = (code *)NativeHelper_017ef240(&UNK_00a72571);
          }
          (*pcRam0000000003abbd58)(lVar2,&fStack_2c);
          return;
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8();
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

