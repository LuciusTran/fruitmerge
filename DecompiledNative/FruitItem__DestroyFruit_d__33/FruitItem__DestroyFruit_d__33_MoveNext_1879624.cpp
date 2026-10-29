// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 0197d624; ELF VA: 0x187d624; file offset: 0x1879624
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FruitItem__DestroyFruit_d__33_MoveNext_1879624
               (FruitItem__DestroyFruit_d__33 *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *extraout_x1;
  void *runtimeMethod_00;
  LocalNotification_Action *pLVar5;
  FruitItem *self_00;
  Recovered_Vector3 pos;
  
  if ((bRam0000000003ab20c1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866ef0);
    bRam0000000003ab20c1 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  self_00 = self->__4__this;
  if (self->__1__state == 1) {
    self->__1__state = -1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
    }
    bVar2 = UnityEngine_object_op_Equality_324f284(self_00,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      if (self_00 == (FruitItem *)0x0) {
LAB_0197d7d4:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      pvVar4 = (void *)NativeHelper_0334f4c8(self_00,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404(*(long *)puVar1);
      }
      bVar2 = UnityEngine_object_op_Equality_324f284(pvVar4,(void *)0x0,(void *)0x0);
      if (!bVar2) {
        pvVar4 = (void *)NativeHelper_0334f400(self_00,0);
        if (pvVar4 == (void *)0x0) goto LAB_0197d7d4;
        pos = UnityEngine_Transform_get_position_325a714(pvVar4,(void *)0x0);
        FruitItem_PlayDestroyParticle_1879178(self_00,pos,runtimeMethod_00);
        uVar3 = NativeHelper_0334f4c8(self_00,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar1);
        }
        NativeHelper_03357b5c(uVar3,0);
        pLVar5 = self->action;
        if (pLVar5 != (LocalNotification_Action *)0x0) {
          (*pLVar5->Title)(*(undefined8 *)(pLVar5 + 1),*(undefined8 *)&pLVar5->Foreground);
        }
      }
    }
  }
  else if (self->__1__state == 0) {
    self->__1__state = -1;
    if (self_00 == (FruitItem *)0x0) goto LAB_0197d7d4;
    if (self_00->isDestroying == false) {
      self_00->isDestroying = true;
      uVar3 = NativeHelper_0334f400(self_00,0);
      NativeHelper_01a630d4(uVar3,0,0);
      pvVar4 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866ef0);
      UnityEngine_WaitForSecondsRealtime_WaitForSecondsRealtime_32556e4
                (pvVar4,_UNK_00a47734,(void *)0x0);
      self->__2__current = pvVar4;
      NativeHelper_017ef228(&self->__2__current,pvVar4);
      self->__1__state = 1;
      return true;
    }
  }
  return false;
}

