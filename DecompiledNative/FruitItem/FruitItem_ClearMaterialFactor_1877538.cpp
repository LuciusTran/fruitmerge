// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClearMaterialFactor(float time, float duration) { }
// Ghidra address: 0197b538; ELF VA: 0x187b538; file offset: 0x1877538
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_ClearMaterialFactor_1877538
               (FruitItem *self,float time,float duration,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  void *x;
  TKLClient_TKLSwitcherConfig *pTVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000003ab20ac & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867090);
    bRam0000000003ab20ac = 1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  if (self->_circleCollider2D != (void *)0x0) {
    x = (void *)NativeHelper_033afbc4(self->_circleCollider2D,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1);
    }
    bVar2 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
    if (bVar2) {
      x = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867090);
      UnityEngine_PhysicsMaterial2D_PhysicsMaterial2D_32ae258(x,(void *)0x0);
      if (self->_circleCollider2D == (void *)0x0) goto LAB_0197b694;
      NativeHelper_033afc94(self->_circleCollider2D,x,0);
    }
    if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar3 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if ((pTVar3 != (TKLClient_TKLSwitcherConfig *)0x0) && (x != (void *)0x0)) {
      UnityEngine_PhysicsMaterial2D_set_friction_32ae778
                (x,(time / duration) * (pTVar3->FM_Friction + _UNK_00a47588) + _UNK_00a47680,
                 (void *)0x0);
      pTVar3 = Global_get_RemoteConfig_18048d8((void *)0x0);
      if (pTVar3 != (TKLClient_TKLSwitcherConfig *)0x0) {
        UnityEngine_PhysicsMaterial2D_set_bounciness_32ae5f0
                  (x,(time / duration) * pTVar3->FM_Bounce,(void *)0x0);
        pvVar4 = self->_circleCollider2D;
        if (pvVar4 != (void *)0x0) {
          if ((bRam0000000003abcebc & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_038a93a0,x,0);
            NativeHelper_017ef284(PTR_DAT_038a9420);
            bRam0000000003abcebc = 1;
          }
          if (pvVar4 != (void *)0x0) {
            lVar5 = *(long *)((long)pvVar4 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_0334bff8(pvVar4,0);
            }
            if (*(long *)(*(long *)PTR_DAT_038a9420 + 0x38) == 0) {
              NativeHelper_01827500();
            }
            uVar6 = 0;
            if (x != (void *)0x0) {
              uVar6 = *(undefined8 *)((long)x + 0x10);
            }
            if (pcRam0000000003abcee0 == (code *)0x0) {
              pcRam0000000003abcee0 = (code *)NativeHelper_017ef240(&UNK_00a49aa3);
            }
                    /* WARNING: Could not recover jumptable at 0x033afd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abcee0)(lVar5,uVar6);
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
      }
    }
  }
LAB_0197b694:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

