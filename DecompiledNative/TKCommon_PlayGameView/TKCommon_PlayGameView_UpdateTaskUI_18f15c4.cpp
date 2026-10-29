// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void UpdateTaskUI() { }
// Ghidra address: 019f55c4; ELF VA: 0x18f55c4; file offset: 0x18f15c4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_UpdateTaskUI_18f15c4(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  Game_UserData *pGVar4;
  TaskItemData *pTVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  long *plVar10;
  int iStack_38;
  int iStack_34;
  
  puVar1 = PTR_DAT_0385db10;
  if ((bRam0000000003ab259f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868670);
    bRam0000000003ab259f = 1;
  }
  pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pGVar4 != (Game_UserData *)0x0) {
    pTVar5 = Game_UserData_GetCurrentTaskItem_18d2e94(pGVar4,(void *)0x0);
    self->_currentTask = pTVar5;
    NativeHelper_017ef228(&self->_currentTask,pTVar5);
    if (self->_currentTask == (TaskItemData *)0x0) {
      return;
    }
    pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar4 != (Game_UserData *)0x0) {
      iVar3 = Game_UserData_get_CurrentTaskCompletedNum_18d3344(pGVar4,(void *)0x0);
      if (self->_currentTask != (TaskItemData *)0x0) {
        pvVar9 = self->m_img_Target;
        pvVar6 = Game_Const_GetSprite_FruitPreview_18da76c
                           (self->_currentUsingSkin,self->_currentTask->TargetGrade,true,(void *)0x0
                           );
        if (pvVar9 != (void *)0x0) {
          NativeHelper_0345dd98(pvVar9,pvVar6,0);
          puVar1 = PTR_DAT_0385c2d8;
          plVar10 = self->m_txt_Progress;
          iStack_34 = iVar3;
          uVar7 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&iStack_34);
          puVar2 = PTR_DAT_03868670;
          if (self->_currentTask != (TaskItemData *)0x0) {
            iStack_38 = self->_currentTask->TargetNum;
            uVar8 = NativeHelper_017ef40c(*(undefined8 *)(puVar1 + 0x48),&iStack_38);
            uVar7 = NativeHelper_02aa74d0(*(undefined8 *)puVar2,uVar7,uVar8,0);
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x5f0));
              if ((self->_currentTask != (TaskItemData *)0x0) &&
                 (self->m_img_Progress != (void *)0x0)) {
                NativeHelper_0346b188
                          ((float)iVar3 / (float)self->_currentTask->TargetNum,self->m_img_Progress,
                           0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

