// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 01984504; ELF VA: 0x1884504; file offset: 0x1880504
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit__UpdateExpCountdown_d__105_MoveNext_1880504
               (MergeFruit__UpdateExpCountdown_d__105 *self,void *runtimeMethod)

{
  undefined8 uVar1;
  void *self_00;
  void *extraout_x1;
  MergeFruit *self_01;
  float fVar2;
  float fVar3;
  
  if ((bRam0000000003ab2105 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867498);
    bRam0000000003ab2105 = 1;
    runtimeMethod = extraout_x1;
  }
  self_01 = self->__4__this;
  if (self->__1__state == 1) {
    self->__1__state = -1;
    if (self_01 != (MergeFruit *)0x0) {
      fVar3 = self_01->expCountdown;
      if (10.0 <= fVar3) {
        MergeFruit_StartExpCountdown_187a63c(self_01,runtimeMethod);
        return false;
      }
      goto LAB_01984580;
    }
  }
  else {
    if (self->__1__state != 0) {
      return false;
    }
    self->__1__state = -1;
    if (self_01 != (MergeFruit *)0x0) {
      fVar3 = 0.0;
      self_01->expMergeCount = 0;
      self_01->expCountdown = 0.0;
LAB_01984580:
      fVar2 = UnityEngine_Time_get_fixedDeltaTime_3257558((void *)0x0);
      uVar1 = *(undefined8 *)PTR_DAT_03867498;
      self_01->expCountdown = fVar3 + fVar2;
      self_00 = (void *)NativeHelper_017ef520(uVar1);
      UnityEngine_WaitForFixedUpdate_WaitForFixedUpdate_32555e0(self_00,(void *)0x0);
      self->__2__current = self_00;
      NativeHelper_017ef228(&self->__2__current,self_00);
      self->__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

