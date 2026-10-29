// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Update() { }
// Ghidra address: 0197f00c; ELF VA: 0x187f00c; file offset: 0x187b00c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_Update_187b00c(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  Game_UserData *pGVar4;
  void *pvVar5;
  undefined8 extraout_x0;
  FruitItem *self_00;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  void *extraout_x1_01;
  void *runtimeMethod_05;
  void *runtimeMethod_06;
  void *runtimeMethod_07;
  void *extraout_x1_02;
  void *runtimeMethod_08;
  void **ppvVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 in_s1;
  undefined4 uVar13;
  undefined8 uVar12;
  float fVar14;
  Recovered_Vector3 RVar15;
  Recovered_Vector3 value;
  Recovered_Vector2 value_00;
  undefined1 auVar16 [16];
  undefined1 auStack_48 [12];
  float fStack_3c;
  
  auVar16._8_8_ = runtimeMethod;
  auVar16._0_8_ = (ulong)self;
  if ((bRam0000000003ab20c7 & 1) == 0) {
    auVar16 = NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20c7 = 1;
  }
  puVar1 = PTR_DAT_0385db10;
  if (self->_isPaused == false) {
    pGVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (pGVar4 == (Game_UserData *)0x0) {
LAB_0197f130:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar4,(void *)0x0);
    auVar16._1_7_ = 0;
    auVar16[0] = bVar3;
    auVar16._8_8_ = extraout_x1;
    if (bVar3) {
      pvVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pvVar5 == (void *)0x0) goto LAB_0197f130;
      fVar14 = *(float *)((long)pvVar5 + 0x20);
      fVar9 = UnityEngine_Time_get_unscaledDeltaTime_3257530((void *)0x0);
      auVar16._8_8_ = extraout_x1_00;
      auVar16._0_8_ = extraout_x0;
      *(float *)((long)pvVar5 + 0x20) = fVar14 + fVar9;
    }
  }
  if (self->_isBlock != false) {
    return;
  }
  bVar3 = MergeFruit_IsTouchDown_187b134(auVar16._0_8_,auVar16._8_8_);
  if (bVar3) {
    bVar3 = MergeFruit_IsUICover_187b1bc((MergeFruit *)(ulong)bVar3,runtimeMethod_00);
    if (bVar3) {
      return;
    }
    bVar3 = MergeFruit_IsUsingClean_187b2bc(self,runtimeMethod_01);
    if (bVar3) {
      return;
    }
    bVar3 = MergeFruit_IsUsingBomb_187b598(self,runtimeMethod_02);
    if (bVar3) {
      return;
    }
    bVar3 = MergeFruit_IsUsingUpgrade_187b81c(self,runtimeMethod_03);
    if (bVar3) {
      return;
    }
    uVar10 = NativeHelper_033a7874(0);
    puVar1 = PTR_DAT_0385c2a0;
    if ((bRam0000000003ab20d1 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_0385c2a0);
      bRam0000000003ab20d1 = 1;
    }
    pvVar5 = self->_currentFruit;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
    if (bVar3) {
      return;
    }
    self->_isDragging = true;
    MergeFruit_ShowCurrentIndicator_187c358(self,runtimeMethod_05);
  }
  else {
    bVar3 = MergeFruit_IsTouchMove_187bb54((MergeFruit *)(ulong)bVar3,runtimeMethod_00);
    if (!bVar3) {
      bVar3 = MergeFruit_IsTouchUp_187bd4c((MergeFruit *)(ulong)bVar3,runtimeMethod_04);
      if (!bVar3) {
        return;
      }
      pvVar5 = extraout_x1_01;
      if ((bRam0000000003ab20e3 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03867320);
        NativeHelper_017ef284(PTR_DAT_0385d918);
        NativeHelper_017ef284(PTR_DAT_0385c2a0);
        NativeHelper_017ef284(PTR_DAT_0385db10);
        bRam0000000003ab20e3 = 1;
        pvVar5 = extraout_x1_02;
      }
      puVar1 = PTR_DAT_0385c2a0;
      if (self->_isDragging == false) {
        return;
      }
      self->_isDragging = false;
      MergeFruit_HideCurrentIndicator_187c304(self,pvVar5);
      ppvVar8 = &self->_currentFruit;
      pvVar5 = *ppvVar8;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
      if (!bVar3) {
LAB_0197ffb8:
        if ((bRam0000000003ab20e1 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_0385c9f8);
          NativeHelper_017ef284(PTR_DAT_03867400);
          bRam0000000003ab20e1 = 1;
        }
        puVar2 = PTR_DAT_03867400;
        puVar1 = PTR_DAT_0385c9f8;
        ppvVar8 = &self->_createCoroutine;
        if (*ppvVar8 != (void *)0x0) {
          UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,*ppvVar8,(void *)0x0);
        }
        uVar12 = NativeHelper_017ef520(*(undefined8 *)puVar1);
        uVar7 = NativeHelper_02b8e36c(uVar12,self,*(undefined8 *)puVar2,0);
        pvVar5 = (void *)NativeHelper_01980eb0(_UNK_00a47720,uVar7,uVar12);
        pvVar5 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar5,(void *)0x0);
        self->_createCoroutine = pvVar5;
        if (iRam0000000003cd3780 != 0) {
          func_0x018dcb10(1L << ((ulong)ppvVar8 >> 0xc & 0x3f),
                          ((ulong)ppvVar8 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
        }
        return;
      }
      if (*ppvVar8 != (void *)0x0) {
        auVar16 = NativeHelper_01c796ec(*ppvVar8,*(undefined8 *)PTR_DAT_03867320);
        self_00 = auVar16._0_8_;
        if (self_00 != (FruitItem *)0x0) {
          FruitItem_ReleaseDown_187657c(self_00,auVar16._8_8_);
          pvVar5 = self_00->_rigidbody2D;
          if (cRam0000000003ab212d == '\0') {
            NativeHelper_017ef284(PTR_DAT_0385d978);
            cRam0000000003ab212d = '\x01';
          }
          if (pvVar5 != (void *)0x0) {
            uVar12 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_0385d978 + 0xb8) + 0x18);
            value_00.component0 = (float)uVar12 * 8.0;
            value_00.component1 = (float)((ulong)uVar12 >> 0x20) * 8.0;
            UnityEngine_Rigidbody2D_set_linearVelocity_32ab2f8(pvVar5,value_00,(void *)0x0);
            *ppvVar8 = (void *)0x0;
            NativeHelper_017ef228(ppvVar8,0);
            puVar1 = PTR_DAT_0385db10;
            pGVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
            if (pGVar4 != (Game_UserData *)0x0) {
              bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar4,(void *)0x0);
              if (bVar3) {
                pvVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
                if (pvVar5 == (void *)0x0) goto LAB_0197ffdc;
                runtimeMethod_08 = *(void **)puVar1;
                *(int *)((long)pvVar5 + 0x24) = *(int *)((long)pvVar5 + 0x24) + 1;
                pGVar4 = Singleton_get_Instance_27784f4(runtimeMethod_08);
                if (pGVar4 == (Game_UserData *)0x0) goto LAB_0197ffdc;
                Game_UserData_TryUpdateCurrentTask_18d34d4
                          (pGVar4,self_00->m_FruitType + 1,self->_gameState == 4,(void *)0x0);
              }
              pvVar5 = *(void **)puVar1;
              self->clearFrictionGravityTime = self->clearFrictionGravityDuration;
              pGVar4 = Singleton_get_Instance_27784f4(pvVar5);
              if (pGVar4 != (Game_UserData *)0x0) {
                Game_UserData_AddLevelClick_18cb5f4(pGVar4,(void *)0x0);
                puVar2 = PTR_DAT_0385d918;
                lVar6 = *(long *)PTR_DAT_0385d918;
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                  lVar6 = *(long *)puVar2;
                }
                pvVar5 = *(void **)puVar1;
                *(int *)(*(long *)(lVar6 + 0xb8) + 0x74) =
                     *(int *)(*(long *)(lVar6 + 0xb8) + 0x74) + 1;
                pGVar4 = Singleton_get_Instance_27784f4(pvVar5);
                if (pGVar4 != (Game_UserData *)0x0) {
                  Game_UserData_RecordOnceGameData_18caf38(pGVar4,(void *)0x0);
                  goto LAB_0197ffb8;
                }
              }
            }
          }
        }
      }
LAB_0197ffdc:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar10 = NativeHelper_033a7874(0);
  }
  if ((bRam0000000003ab20d2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20d2 = 1;
  }
  if (self->_isDragging != false) {
    pvVar5 = self->_currentFruit;
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar3 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
    if (!bVar3) {
      pvVar5 = (void *)NativeHelper_03320a8c(0);
      if (pvVar5 != (void *)0x0) {
        RVar15.component1 = (float)in_s1;
        RVar15.component0 = (float)uVar10;
        RVar15.component2 = 0.0;
        RVar15 = UnityEngine_Camera_ScreenToWorldPoint_321c814(pvVar5,RVar15,(void *)0x0);
        fVar9 = RVar15.component0;
        if (((self->_currentFruit != (void *)0x0) &&
            (pvVar5 = UnityEngine_GameObject_GetComponent_1b75510
                                (self->_currentFruit,*(void **)PTR_DAT_03867120),
            pvVar5 != (void *)0x0)) && (*(long *)((long)pvVar5 + 0x38) != 0)) {
          NativeHelper_0332c240(auStack_48,*(long *)((long)pvVar5 + 0x38),0);
          fVar11 = (fStack_3c + fStack_3c) * 0.5;
          uVar10 = 0;
          fVar14 = self->rightEdgeX - fVar11;
          fVar11 = self->leftEdgeX + fVar11;
          if (fVar9 <= fVar14) {
            fVar14 = fVar9;
          }
          uVar13 = 0;
          if (fVar11 <= fVar9) {
            fVar11 = fVar14;
          }
          if ((self->_currentFruit != (void *)0x0) &&
             (pvVar5 = (void *)NativeHelper_0335213c(self->_currentFruit,0), pvVar5 != (void *)0x0))
          {
            RVar15 = UnityEngine_Transform_get_position_325a714(pvVar5,(void *)0x0);
            value.component1 = RVar15.component1;
            if ((self->_currentFruit != (void *)0x0) &&
               (pvVar5 = (void *)NativeHelper_0335213c
                                           (RVar15.component0,CONCAT44(uVar13,value.component1),
                                            CONCAT44(uVar10,RVar15.component2),self->_currentFruit,0
                                           ), pvVar5 != (void *)0x0)) {
              value.component0 = fVar11;
              value.component2 = 0.0;
              UnityEngine_Transform_set_position_325a7e8(pvVar5,value,(void *)0x0);
              MergeFruit_ResetLastFruitPosByCurrent_187cf54(self,runtimeMethod_06);
              MergeFruit_UpdateCurrentIndicatorPosition_187c5b0(self,runtimeMethod_07);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
  return;
}

