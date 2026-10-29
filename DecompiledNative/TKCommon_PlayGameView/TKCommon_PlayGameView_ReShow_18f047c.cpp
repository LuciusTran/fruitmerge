// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void ReShow(string lastViewName) { }
// Ghidra address: 019f447c; ELF VA: 0x18f447c; file offset: 0x18f047c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_ReShow_18f047c
               (TKCommon_PlayGameView *self,void *lastViewName,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  DataManager *self_00;
  Game_UserData *self_01;
  long lVar4;
  void *pvVar5;
  TKCommon_NormalClickButton *pTVar6;
  
  pvVar5 = (void *)0x0;
  Game_Controller_View_ReShow_18d58f4((Game_Controller_View *)self,lastViewName,(void *)0x0);
  puVar1 = PTR_DAT_0385d9d8;
  if ((bRam0000000003ab25b5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25b5 = 1;
  }
  pTVar6 = self->m_btn_Task;
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  puVar1 = PTR_DAT_0385db10;
  if (self_00 != (DataManager *)0x0) {
    bVar2 = DataManager_HasAnyDailyQuestRewardToClaim_1809fa0(self_00,(void *)0x0);
    TKCommon_PlayGameView_SetButtonRedPoint_18f33c4(pTVar6,bVar2,pvVar5);
    pTVar6 = self->m_btn_Room;
    self_01 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (self_01 != (Game_UserData *)0x0) {
      bVar2 = Game_UserData_CanBuildCurrentRoomItem_18c9fac(self_01,0,(void *)0x0);
      puVar1 = PTR_DAT_0385c2a0;
      if ((bRam0000000003ab25b6 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_0385c2a0);
        NativeHelper_017ef284(PTR_DAT_0386ac70);
        NativeHelper_017ef284(PTR_DAT_0386ac78);
        bRam0000000003ab25b6 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      bVar3 = UnityEngine_object_op_Equality_324f284(pTVar6,(void *)0x0,(void *)0x0);
      if (bVar3) {
        return;
      }
      if ((pTVar6 != (TKCommon_NormalClickButton *)0x0) &&
         (pvVar5 = (void *)NativeHelper_0334f400(pTVar6,0), pvVar5 != (void *)0x0)) {
        pvVar5 = UnityEngine_Transform_Find_325c35c(pvVar5,*(void **)PTR_DAT_0386ac70,(void *)0x0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar1);
        }
        bVar3 = UnityEngine_object_op_Equality_324f284(pvVar5,(void *)0x0,(void *)0x0);
        if (bVar3) {
          pvVar5 = (void *)NativeHelper_0334f400(pTVar6,0);
          if (pvVar5 == (void *)0x0) goto LAB_019f7518;
          pvVar5 = UnityEngine_Transform_Find_325c35c(pvVar5,*(void **)PTR_DAT_0386ac78,(void *)0x0)
          ;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        bVar3 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
        if (!bVar3) {
          return;
        }
        if ((pvVar5 != (void *)0x0) && (lVar4 = NativeHelper_0334f4c8(pvVar5,0), lVar4 != 0)) {
          if ((bRam0000000003abb79b & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_038a76a8,bVar2,0);
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
          (*pcRam0000000003abb800)(lVar4,bVar2);
          return;
        }
      }
LAB_019f7518:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

