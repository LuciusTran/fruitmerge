// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019a8eb8; ELF VA: 0x18a8eb8; file offset: 0x18a4eb8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool HomeView__CollectTicket_d__10_MoveNext_18a4eb8
               (HomeView__CollectTicket_d__10 *self,void *runtimeMethod)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  TKLClient_TKLSwitcherConfig *pTVar5;
  void *pvVar6;
  LocalNotification_Action *pLVar7;
  void *extraout_x1;
  void *in_x5;
  HomeView *pHVar8;
  DiamondView *self_00;
  TicketView *self_01;
  Recovered_Vector3 RVar9;
  
  if ((bRam0000000003ab2283 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_038688d8);
    NativeHelper_017ef284(PTR_DAT_038688e0);
    NativeHelper_017ef284(PTR_DAT_0385d8b0);
    bRam0000000003ab2283 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar4 = PTR_DAT_0385d918;
  puVar3 = PTR_DAT_0385d8b0;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    pvVar6 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3,runtimeMethod);
    UnityEngine_WaitForEndOfFrame_WaitForEndOfFrame_32555d8(pvVar6,(void *)0x0);
    self->__2__current = pvVar6;
    NativeHelper_017ef228(&self->__2__current,pvVar6);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    pHVar8 = self->__4__this;
    self->__1__state = -1;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    pTVar5 = Global_get_RemoteConfig_18048d8((void *)0x0);
    if (pTVar5 != (TKLClient_TKLSwitcherConfig *)0x0) {
      if (pTVar5->SwitchCoinsAndTickets == false) {
        if (pHVar8 != (HomeView *)0x0) {
          self_01 = pHVar8->m_TicketView;
          pvVar6 = (void *)NativeHelper_0334f400(pHVar8,0);
          if (pvVar6 != (void *)0x0) {
            RVar9 = UnityEngine_Transform_get_position_325a714(pvVar6,(void *)0x0);
            iVar2 = self->ticket;
            pLVar7 = (LocalNotification_Action *)
                     NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
            NativeHelper_02b8e36c(pLVar7,pHVar8,*(undefined8 *)PTR_DAT_038688e0,0);
            if (self_01 != (TicketView *)0x0) {
              TicketView_PlayTicketAnimation_18a50d8
                        (self_01,RVar9,iVar2,pLVar7,10,(LocalNotification_Action *)0x0,in_x5);
              goto LAB_019a90b4;
            }
          }
        }
      }
      else if (pHVar8 != (HomeView *)0x0) {
        self_00 = pHVar8->m_DiamondView;
        pvVar6 = (void *)NativeHelper_0334f400(pHVar8,0);
        if (pvVar6 != (void *)0x0) {
          RVar9 = UnityEngine_Transform_get_position_325a714(pvVar6,(void *)0x0);
          iVar2 = self->ticket;
          pLVar7 = (LocalNotification_Action *)
                   NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
          NativeHelper_02b8e36c(pLVar7,pHVar8,*(undefined8 *)PTR_DAT_038688d8,0);
          if (self_00 != (DiamondView *)0x0) {
            DiamondView_PlayDiamondAnimation_18a0124
                      (self_00,RVar9,iVar2,pLVar7,10,(LocalNotification_Action *)0x0,in_x5);
            goto LAB_019a90b4;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_019a90b4:
  return iVar1 == 0;
}

