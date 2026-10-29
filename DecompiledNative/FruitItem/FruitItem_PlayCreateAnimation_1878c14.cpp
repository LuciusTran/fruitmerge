// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void PlayCreateAnimation() { }
// Ghidra address: 0197cc14; ELF VA: 0x187cc14; file offset: 0x1878c14
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FruitItem_PlayCreateAnimation_1878c14(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *pvVar6;
  TKLClient_TKLSwitcherConfig *pTVar7;
  undefined8 uVar8;
  long lVar9;
  void *runtimeMethod_00;
  MergeFruit *pMVar10;
  float fVar11;
  Recovered_Vector3 RVar12;
  Recovered_Vector3 value;
  
  if ((bRam0000000003ab20ba & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867148);
    NativeHelper_017ef284(PTR_DAT_03867150);
    bRam0000000003ab20ba = 1;
  }
  pvVar6 = (void *)NativeHelper_0334f400(self,0);
  puVar2 = PTR_DAT_0385d918;
  if (pvVar6 != (void *)0x0) {
    RVar12 = UnityEngine_Transform_get_localScale_325ae78(pvVar6,(void *)0x0);
    pvVar6 = (void *)NativeHelper_0334f400(self,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    pTVar7 = Global_get_RemoteConfig_18048d8((void *)0x0);
    puVar4 = PTR_DAT_03867150;
    puVar3 = PTR_DAT_03867148;
    puVar1 = PTR_DAT_0385c2a0;
    if ((pTVar7 != (TKLClient_TKLSwitcherConfig *)0x0) && (pvVar6 != (void *)0x0)) {
      fVar11 = pTVar7->FM_MergeOriginScale;
      value.component2 = RVar12.component2 * fVar11;
      value.component1 = RVar12.component1 * fVar11;
      value.component0 = RVar12.component0 * fVar11;
      UnityEngine_Transform_set_localScale_325af4c(pvVar6,value,(void *)0x0);
      uVar8 = NativeHelper_0334f400(self,0);
      uVar8 = NativeHelper_01a5e5fc
                        (RVar12.component0,RVar12.component1,RVar12.component2,_UNK_00a47624,uVar8,0
                        );
      uVar8 = NativeHelper_01d6fa88(uVar8,0x1b,*(undefined8 *)puVar3);
      NativeHelper_01d70168(uVar8,1,*(undefined8 *)puVar4);
      FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod_00);
      pMVar10 = self->_mergeFruit;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar5 = UnityEngine_object_op_Implicit_3252d84(pMVar10,(void *)0x0);
      if (bVar5) {
        pMVar10 = self->_mergeFruit;
        if (pMVar10 == (MergeFruit *)0x0) goto LAB_0197cdc0;
        pMVar10->clearFrictionGravityTime = pMVar10->clearFrictionGravityDuration;
      }
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        NativeHelper_017ef404();
        lVar9 = *(long *)puVar2;
      }
      *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 2) = 1;
      return;
    }
  }
LAB_0197cdc0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

