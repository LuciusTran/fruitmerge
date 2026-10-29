// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool TryGetBoxSpriteTopScreenY(out float screenY) { }
// Ghidra address: 01980a94; ELF VA: 0x1880a94; file offset: 0x187ca94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit_TryGetBoxSpriteTopScreenY_187ca94
               (MergeFruit *self,float *screenY,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *x;
  void *pvVar3;
  Recovered_Vector3 RVar4;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20cc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20cc = 1;
  }
  *screenY = 0.0;
  x = (void *)NativeHelper_03320a8c(0);
  pvVar3 = self->m_BoxSpriteRenderer;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar3,(void *)0x0,(void *)0x0);
  pvVar3 = (void *)0x0;
  if (bVar2) {
    if (self->m_BoxSpriteRenderer == (void *)0x0) goto LAB_01980c00;
    pvVar3 = UnityEngine_Component_GetComponent_1b08498
                       (self->m_BoxSpriteRenderer,*(void **)PTR_DAT_03867058);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar2 = UnityEngine_object_op_Equality_324f284(pvVar3,(void *)0x0,(void *)0x0);
    if (!bVar2) {
      if (pvVar3 != (void *)0x0) {
        NativeHelper_0332c240(&uStack_58,pvVar3,0);
        NativeHelper_0332c240(&uStack_58,pvVar3,0);
        if (x != (void *)0x0) {
          RVar4.component1 = fStack_54 + fStack_48;
          RVar4.component0 = (float)uStack_58;
          RVar4.component2 = fStack_50;
          RVar4 = UnityEngine_Camera_WorldToScreenPoint_321c80c(x,RVar4,(void *)0x0);
          *screenY = RVar4.component1;
          return true;
        }
      }
LAB_01980c00:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return false;
}

