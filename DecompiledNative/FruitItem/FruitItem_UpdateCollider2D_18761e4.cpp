// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateCollider2D() { }
// Ghidra address: 0197a1e4; ELF VA: 0x187a1e4; file offset: 0x18761e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_UpdateCollider2D_18761e4(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  
  if ((bRam0000000003ab20a0 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867078);
    NativeHelper_017ef284(PTR_DAT_03867080);
    bRam0000000003ab20a0 = 1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  if (self->_circleCollider2D != (void *)0x0) {
    UnityEngine_Behaviour_set_enabled_324ac04(self->_circleCollider2D,true,(void *)0x0);
    pvVar5 = self->_BrainrotCollider;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Implicit_3252d84(pvVar5,(void *)0x0);
    if (bVar2) {
      if ((self->_BrainrotCollider == (void *)0x0) ||
         (lVar3 = NativeHelper_0334f4c8(self->_BrainrotCollider,0), lVar3 == 0)) goto LAB_0197a3b8;
      NativeHelper_0335236c(lVar3,0,0);
    }
    pvVar5 = self->_CapybaraCollider;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Implicit_3252d84(pvVar5,(void *)0x0);
    if (bVar2) {
      if ((self->_CapybaraCollider == (void *)0x0) ||
         (lVar3 = NativeHelper_0334f4c8(self->_CapybaraCollider,0), lVar3 == 0)) goto LAB_0197a3b8;
      NativeHelper_0335236c(lVar3,0,0);
    }
    pvVar5 = self->_currentUsingSkin;
    uVar4 = NativeHelper_02aa50f0(pvVar5,*(undefined8 *)PTR_DAT_03867078,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = NativeHelper_02aa50f0(pvVar5,*(undefined8 *)PTR_DAT_03867080,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      pvVar5 = self->_CapybaraCollider;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Implicit_3252d84(pvVar5,(void *)0x0);
      if (!bVar2) {
        return;
      }
      if (self->_circleCollider2D == (void *)0x0) goto LAB_0197a3b8;
      UnityEngine_Behaviour_set_enabled_324ac04(self->_circleCollider2D,false,(void *)0x0);
      pvVar5 = self->_CapybaraCollider;
    }
    else {
      pvVar5 = self->_BrainrotCollider;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar2 = UnityEngine_object_op_Implicit_3252d84(pvVar5,(void *)0x0);
      if (!bVar2) {
        return;
      }
      if (self->_circleCollider2D == (void *)0x0) goto LAB_0197a3b8;
      UnityEngine_Behaviour_set_enabled_324ac04(self->_circleCollider2D,false,(void *)0x0);
      pvVar5 = self->_BrainrotCollider;
    }
    if ((pvVar5 != (void *)0x0) && (lVar3 = NativeHelper_0334f4c8(pvVar5,0), lVar3 != 0)) {
      if ((bRam0000000003abb79b & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a76a8,1,0);
        bRam0000000003abb79b = 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_0334bff8();
      }
      if (pcRam0000000003abb800 == (code *)0x0) {
        pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
      }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb800)(lVar3,1);
      return;
    }
  }
LAB_0197a3b8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

