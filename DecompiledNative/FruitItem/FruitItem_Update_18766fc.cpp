// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 0197a6fc; ELF VA: 0x187a6fc; file offset: 0x18766fc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_Update_18766fc(FruitItem *self,void *runtimeMethod)

{
  bool bVar1;
  void *pvVar2;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *extraout_x1;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  MergeFruit *pMVar3;
  float fVar4;
  float fVar5;
  Recovered_Vector3 RVar6;
  undefined1 auStack_38 [4];
  float fStack_34;
  float fStack_28;
  
  if (self->_rigidbody2D != (void *)0x0) {
    bVar1 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(self->_rigidbody2D,(void *)0x0);
    pvVar2 = runtimeMethod_00;
    if (bVar1) {
LAB_0197a760:
      FruitItem_DropOutDestroy_1876a20(self,pvVar2);
      return;
    }
    FruitItem_CheckMergeFruit_18765c0(self,runtimeMethod_00);
    pMVar3 = self->_mergeFruit;
    if (pMVar3 != (MergeFruit *)0x0) {
      if (((pMVar3->_startedFinishGame != false) || (pMVar3->_gameState != 0)) ||
         (pMVar3->ShowTaskReward != false)) {
        pvVar2 = runtimeMethod_01;
        if (self->_isRedAnimationStarted != false) {
          self->_isRedAnimationStarted = false;
          FruitItem_ResetRedAnimation_1876994(self,runtimeMethod_01);
          pvVar2 = extraout_x1;
        }
        self->_startWaitingFinishTime = 0.0;
        goto LAB_0197a760;
      }
      if (self->_sprite != (void *)0x0) {
        NativeHelper_0332c240(auStack_38,self->_sprite,0);
        if ((self->_mergeFruit != (MergeFruit *)0x0) &&
           (pvVar2 = self->_mergeFruit->m_DeadLine, pvVar2 != (void *)0x0)) {
          RVar6 = UnityEngine_Transform_get_position_325a714(pvVar2,(void *)0x0);
          if ((fStack_34 + fStack_28) - RVar6.component1 <= (fStack_28 + fStack_28) * 3.0 * 0.25) {
            pvVar2 = runtimeMethod_02;
            if (self->_isRedAnimationStarted != false) {
              self->_isRedAnimationStarted = false;
              FruitItem_ResetRedAnimation_1876994(self,runtimeMethod_02);
              pvVar2 = extraout_x1_03;
            }
            self->_startWaitingFinishTime = 0.0;
            FruitItem_ResetRedAnimation_1876994(self,pvVar2);
            pvVar2 = extraout_x1_04;
          }
          else {
            fVar5 = self->_startWaitingFinishTime;
            fVar4 = UnityEngine_Time_get_deltaTime_32574e0((void *)0x0);
            fVar5 = fVar5 + fVar4;
            self->_startWaitingFinishTime = fVar5;
            pvVar2 = runtimeMethod_03;
            if (0.5 < fVar5) {
              FruitItem_StartRedAnimation_1876878(self,runtimeMethod_03);
              fVar5 = self->_startWaitingFinishTime;
              pvVar2 = extraout_x1_00;
            }
            if (3.5 < fVar5) {
              if (self->_isRedAnimationStarted != false) {
                self->_isRedAnimationStarted = false;
                FruitItem_ResetRedAnimation_1876994(self,pvVar2);
                pvVar2 = extraout_x1_01;
              }
              if (self->_mergeFruit == (MergeFruit *)0x0) goto LAB_0197a850;
              MergeFruit_FinishGame_18768cc(self->_mergeFruit,pvVar2);
              pvVar2 = extraout_x1_02;
            }
          }
          goto LAB_0197a760;
        }
      }
    }
  }
LAB_0197a850:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

