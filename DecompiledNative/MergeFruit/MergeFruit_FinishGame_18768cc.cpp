// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void FinishGame() { }
// Ghidra address: 0197a8cc; ELF VA: 0x187a8cc; file offset: 0x18768cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_FinishGame_18768cc(MergeFruit *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *extraout_x1;
  void *extraout_x1_00;
  void *runtimeMethod_00;
  void *extraout_x1_01;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *extraout_x1_02;
  long lVar10;
  long lVar11;
  long *plVar12;
  void **ppvVar13;
  FruitItem *self_00;
  
  if ((bRam0000000003ab20d9 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_038670b0);
    bRam0000000003ab20d9 = 1;
    runtimeMethod = extraout_x1;
  }
  if (self->_startedFinishGame != false) {
    return;
  }
  self->_startedFinishGame = true;
  MergeFruit_StopRedLineAnimation_187aa30(self,runtimeMethod);
  pvVar8 = (void *)0x0;
  if (self->_createCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->_createCoroutine,(void *)0x0);
    pvVar8 = extraout_x1_00;
  }
  self->clearFrictionGravityTime = self->clearFrictionGravityDuration;
  MergeFruit_DestroyCurrentFruit_187d188(self,pvVar8);
  MergeFruit_HideCurrentIndicator_187c304(self,runtimeMethod_00);
  uVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
  NativeHelper_02b8e36c(uVar6,self,*(undefined8 *)PTR_DAT_038670b0,0);
  puVar2 = PTR_DAT_038673a8;
  if ((bRam0000000003ab20da & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_038673b0);
    NativeHelper_017ef284(PTR_DAT_038673b8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_038673c0);
    NativeHelper_017ef284(PTR_DAT_038673c8);
    NativeHelper_017ef284(PTR_DAT_038673d0);
    NativeHelper_017ef284(PTR_DAT_038673a8);
    NativeHelper_017ef284(PTR_DAT_038673d8);
    NativeHelper_017ef284(PTR_DAT_0385e858);
    bRam0000000003ab20da = 1;
  }
  lVar7 = NativeHelper_017ef520(*(undefined8 *)puVar2);
  NativeHelper_02c51f64(lVar7,0);
  puVar4 = PTR_DAT_038673b0;
  puVar3 = PTR_DAT_0385e858;
  puVar2 = PTR_DAT_0385c2a0;
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x18) = uVar6;
    NativeHelper_017ef228((undefined8 *)(lVar7 + 0x18),uVar6);
    pvVar8 = Game_Controller_FMViewController_GetTopView_1b722c4(*(void **)puVar3,*(void **)puVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    bVar5 = UnityEngine_object_op_Equality_324f284(pvVar8,(void *)0x0,(void *)0x0);
    if (bVar5) {
      lVar11 = *(long *)PTR_DAT_0385c390;
      lVar10 = *(long *)(lVar11 + 0x38);
      if (lVar10 == 0) {
        NativeHelper_01827500(lVar11);
        lVar10 = *(long *)(lVar11 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = NativeHelper_018274a4();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = NativeHelper_018274a4();
      }
      Game_Controller_FMViewController_ShowTopView_18d5bb0
                (*(void **)puVar3,1000,false,(void *)**(undefined8 **)(lVar10 + 0xb8),(void *)0x0);
    }
    UnityEngine_Time_set_timeScale_32575d0(0.0,(void *)0x0);
    if ((self->m_GamePanel != (void *)0x0) &&
       (pvVar8 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                           (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar8 != (void *)0x0)) {
      uVar1 = *(uint *)((long)pvVar8 + 0x18);
      if (0 < (int)uVar1) {
        lVar10 = 0;
        runtimeMethod_01 = extraout_x1_01;
        do {
          if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          self_00 = *(FruitItem **)((long)pvVar8 + lVar10 * 8 + 0x20);
          if (self_00 == (FruitItem *)0x0) goto LAB_01981e64;
          FruitItem_ClearForFinish_1876b74(self_00,runtimeMethod_01);
          FruitItem_SwitchFinishedStates_1876c9c(self_00,runtimeMethod_02);
          uVar1 = *(uint *)((long)pvVar8 + 0x18);
          lVar10 = lVar10 + 1;
          runtimeMethod_01 = extraout_x1_02;
        } while ((int)lVar10 < (int)uVar1);
      }
      pvVar8 = (void *)NativeHelper_03352a84(*(undefined8 *)PTR_DAT_038673d8,0);
      if (pvVar8 != (void *)0x0) {
        pvVar8 = UnityEngine_GameObject_GetComponent_1b75510(pvVar8,*(void **)PTR_DAT_038673b8);
        plVar12 = (long *)(lVar7 + 0x10);
        *plVar12 = (long)pvVar8;
        NativeHelper_017ef228(plVar12,pvVar8);
        puVar4 = PTR_DAT_038673c8;
        puVar3 = PTR_DAT_038673c0;
        puVar2 = PTR_DAT_03866068;
        if (*plVar12 != 0) {
          uVar6 = NativeHelper_0334f400(*plVar12,0);
          uVar6 = NativeHelper_01a5f7b8(0x3f800000,_UNK_00a47714,0x42b40000,uVar6,6,0,1,0);
          lVar10 = NativeHelper_01d70168(uVar6,1,*(undefined8 *)puVar3);
          uVar6 = NativeHelper_017ef520(*(undefined8 *)puVar2);
          NativeHelper_01a4f8cc(uVar6,lVar7,*(undefined8 *)puVar4,0);
          puVar3 = PTR_DAT_038673d0;
          puVar2 = PTR_DAT_0385c9f8;
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 0x80) = uVar6;
            NativeHelper_017ef228((undefined8 *)(lVar10 + 0x80),uVar6);
            ppvVar13 = &self->_waitingFinishGameCoroutine;
            if (*ppvVar13 != (void *)0x0) {
              UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,*ppvVar13,(void *)0x0);
            }
            uVar6 = NativeHelper_017ef520(*(undefined8 *)puVar2);
            uVar9 = NativeHelper_02b8e36c(uVar6,lVar7,*(undefined8 *)puVar3,0);
            pvVar8 = (void *)NativeHelper_01980eb0(_UNK_00a477e4,uVar9,uVar6);
            pvVar8 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar8,(void *)0x0);
            self->_waitingFinishGameCoroutine = pvVar8;
            if (iRam0000000003cd3780 != 0) {
              func_0x018dcb10(1L << ((ulong)ppvVar13 >> 0xc & 0x3f),
                              ((ulong)ppvVar13 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
            }
            return;
          }
        }
      }
    }
  }
LAB_01981e64:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

