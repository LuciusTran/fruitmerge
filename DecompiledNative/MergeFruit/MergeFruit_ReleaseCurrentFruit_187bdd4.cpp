// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ReleaseCurrentFruit() { }
// Ghidra address: 0197fdd4; ELF VA: 0x187fdd4; file offset: 0x187bdd4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_ReleaseCurrentFruit_187bdd4(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  FruitItem *self_00;
  Game_UserData *pGVar4;
  long lVar5;
  undefined8 uVar6;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *pvVar7;
  void **ppvVar8;
  undefined8 uVar9;
  Recovered_Vector2 value;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003ab20e3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867320);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20e3 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  if (self->_isDragging == false) {
    return;
  }
  self->_isDragging = false;
  MergeFruit_HideCurrentIndicator_187c304(self,runtimeMethod);
  ppvVar8 = &self->_currentFruit;
  pvVar7 = *ppvVar8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
  if (bVar3) {
    if ((*ppvVar8 != (void *)0x0) &&
       (auVar10 = NativeHelper_01c796ec(*ppvVar8,*(undefined8 *)PTR_DAT_03867320),
       self_00 = auVar10._0_8_, self_00 != (FruitItem *)0x0)) {
      FruitItem_ReleaseDown_187657c(self_00,auVar10._8_8_);
      pvVar7 = self_00->_rigidbody2D;
      if (cRam0000000003ab212d == '\0') {
        NativeHelper_017ef284(PTR_DAT_0385d978);
        cRam0000000003ab212d = '\x01';
      }
      if (pvVar7 != (void *)0x0) {
        uVar9 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_0385d978 + 0xb8) + 0x18);
        value.component0 = (float)uVar9 * 8.0;
        value.component1 = (float)((ulong)uVar9 >> 0x20) * 8.0;
        UnityEngine_Rigidbody2D_set_linearVelocity_32ab2f8(pvVar7,value,(void *)0x0);
        *ppvVar8 = (void *)0x0;
        NativeHelper_017ef228(ppvVar8,0);
        puVar1 = PTR_DAT_0385db10;
        pGVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        if (pGVar4 != (Game_UserData *)0x0) {
          bVar3 = Game_UserData_get_EnableTask_18cab28(pGVar4,(void *)0x0);
          if (bVar3) {
            pvVar7 = Singleton_get_Instance_27784f4(*(void **)puVar1);
            if (pvVar7 == (void *)0x0) goto LAB_0197ffdc;
            runtimeMethod_00 = *(void **)puVar1;
            *(int *)((long)pvVar7 + 0x24) = *(int *)((long)pvVar7 + 0x24) + 1;
            pGVar4 = Singleton_get_Instance_27784f4(runtimeMethod_00);
            if (pGVar4 == (Game_UserData *)0x0) goto LAB_0197ffdc;
            Game_UserData_TryUpdateCurrentTask_18d34d4
                      (pGVar4,self_00->m_FruitType + 1,self->_gameState == 4,(void *)0x0);
          }
          pvVar7 = *(void **)puVar1;
          self->clearFrictionGravityTime = self->clearFrictionGravityDuration;
          pGVar4 = Singleton_get_Instance_27784f4(pvVar7);
          if (pGVar4 != (Game_UserData *)0x0) {
            Game_UserData_AddLevelClick_18cb5f4(pGVar4,(void *)0x0);
            puVar2 = PTR_DAT_0385d918;
            lVar5 = *(long *)PTR_DAT_0385d918;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              NativeHelper_017ef404();
              lVar5 = *(long *)puVar2;
            }
            pvVar7 = *(void **)puVar1;
            *(int *)(*(long *)(lVar5 + 0xb8) + 0x74) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x74) + 1;
            pGVar4 = Singleton_get_Instance_27784f4(pvVar7);
            if (pGVar4 != (Game_UserData *)0x0) {
              Game_UserData_RecordOnceGameData_18caf38(pGVar4,(void *)0x0);
              goto LAB_0197ffb8;
            }
          }
        }
      }
    }
LAB_0197ffdc:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
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
  uVar9 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  uVar6 = NativeHelper_02b8e36c(uVar9,self,*(undefined8 *)puVar2,0);
  pvVar7 = (void *)NativeHelper_01980eb0(_UNK_00a47720,uVar6,uVar9);
  pvVar7 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar7,(void *)0x0);
  self->_createCoroutine = pvVar7;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)ppvVar8 >> 0xc & 0x3f),
                    ((ulong)ppvVar8 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

