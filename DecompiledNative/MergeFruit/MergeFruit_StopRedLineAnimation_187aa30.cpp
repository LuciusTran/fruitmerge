// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopRedLineAnimation() { }
// Ghidra address: 0197ea30; ELF VA: 0x187ea30; file offset: 0x187aa30
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StopRedLineAnimation_187aa30(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  void *extraout_x1;
  void *pvVar6;
  Recovered_Color RVar7;
  Recovered_Color value;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20df & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20df = 1;
    runtimeMethod = extraout_x1;
  }
  lVar4 = *(long *)puVar1;
  pvVar6 = self->m_RedLine;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar4,runtimeMethod);
  }
  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
  puVar2 = PTR_DAT_03867058;
  if (!bVar3) {
    return;
  }
  if (self->m_RedLine != (void *)0x0) {
    pvVar6 = UnityEngine_Component_GetComponent_1b08498(self->m_RedLine,*(void **)PTR_DAT_03867058);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar4);
    }
    bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar6,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      return;
    }
    if (self->m_RedLine != (void *)0x0) {
      uVar5 = NativeHelper_0334f400(self->m_RedLine,0);
      NativeHelper_01a630d4(uVar5,0,0);
      if (self->fadeSequence != (void *)0x0) {
        NativeHelper_01a55998(self->fadeSequence,0,0);
      }
      if ((self->m_RedLine != (void *)0x0) &&
         (pvVar6 = UnityEngine_Component_GetComponent_1b08498(self->m_RedLine,*(void **)puVar2),
         pvVar6 != (void *)0x0)) {
        RVar7 = UnityEngine_SpriteRenderer_get_color_32152a8(pvVar6,(void *)0x0);
        value.component2 = RVar7.component2;
        value.component3 = 1.0;
        value.component0 = (float)(int)RVar7._0_8_;
        value.component1 = (float)(int)((ulong)RVar7._0_8_ >> 0x20);
        UnityEngine_SpriteRenderer_set_color_3215380(pvVar6,value,(void *)0x0);
        if ((self->m_RedLine != (void *)0x0) &&
           (lVar4 = NativeHelper_0334f4c8(self->m_RedLine,0), lVar4 != 0)) {
          if ((bRam0000000003abb79b & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_038a76a8,0,0);
            bRam0000000003abb79b = 1;
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_0334bff8();
          }
          if (pcRam0000000003abb800 == (code *)0x0) {
            pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
          }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003abb800)(lVar4,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

