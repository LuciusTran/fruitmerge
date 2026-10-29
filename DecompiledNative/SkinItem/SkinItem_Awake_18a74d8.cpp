// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 019ab4d8; ELF VA: 0x18ab4d8; file offset: 0x18a74d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x02134388) */
/* WARNING: Removing unreachable block (ram,0x02134394) */

void SkinItem_Awake_18a74d8(SkinItem *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long *plVar13;
  void *pvVar14;
  TKCommon_NormalClickButton *pTVar15;
  CircleOutline *pCVar16;
  HomeView *pHVar17;
  undefined8 uVar18;
  long *eventType;
  undefined8 *puVar19;
  long lVar20;
  void *runtimeMethod_00;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  void **ppvVar26;
  long lVar27;
  int iVar28;
  long *plVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  int *piVar33;
  
  if ((bRam0000000003ab228f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03868978);
    NativeHelper_017ef284(PTR_DAT_03868608);
    NativeHelper_017ef284(PTR_DAT_03868610);
    NativeHelper_017ef284(PTR_DAT_03868980);
    NativeHelper_017ef284(PTR_DAT_03867ae8);
    NativeHelper_017ef284(PTR_DAT_03868988);
    NativeHelper_017ef284(PTR_DAT_03867068);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03868990);
    NativeHelper_017ef284(PTR_DAT_03868998);
    NativeHelper_017ef284(PTR_DAT_038689a0);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_038689a8);
    NativeHelper_017ef284(PTR_DAT_038689b0);
    NativeHelper_017ef284(PTR_DAT_038689b8);
    NativeHelper_017ef284(PTR_DAT_038689c0);
    NativeHelper_017ef284(PTR_DAT_038689c8);
    NativeHelper_017ef284(PTR_DAT_038689d0);
    NativeHelper_017ef284(PTR_DAT_038689d8);
    NativeHelper_017ef284(PTR_DAT_038689e0);
    NativeHelper_017ef284(PTR_DAT_038689e8);
    NativeHelper_017ef284(PTR_DAT_038689f0);
    NativeHelper_017ef284(PTR_DAT_03868770);
    NativeHelper_017ef284(PTR_DAT_038689f8);
    bRam0000000003ab228f = 1;
  }
  pvVar14 = (void *)NativeHelper_0334f400(self,0);
  ppvVar26 = &self->_trans;
  *ppvVar26 = pvVar14;
  NativeHelper_017ef228(ppvVar26,pvVar14);
  if ((*ppvVar26 == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c(*ppvVar26,*(void **)PTR_DAT_038689f0,(void *)0x0)
     , puVar2 = PTR_DAT_03868608, pvVar14 == (void *)0x0)) {
LAB_019aba6c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar14 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)PTR_DAT_03868608);
  self->_imgSkin = pvVar14;
  NativeHelper_017ef228(&self->_imgSkin,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c
                          (self->_trans,*(void **)PTR_DAT_038689d0,(void *)0x0),
     pvVar14 == (void *)0x0)) goto LAB_019aba6c;
  pvVar14 = (void *)NativeHelper_0334f4c8(pvVar14,0);
  self->_imgLock = pvVar14;
  NativeHelper_017ef228(&self->_imgLock,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c
                          (self->_trans,*(void **)PTR_DAT_038689e8,(void *)0x0),
     pvVar14 == (void *)0x0)) goto LAB_019aba6c;
  pvVar14 = (void *)NativeHelper_0334f4c8(pvVar14,0);
  self->_imgMask = pvVar14;
  NativeHelper_017ef228(&self->_imgMask,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c
                          (self->_trans,*(void **)PTR_DAT_038689a8,(void *)0x0),
     pvVar14 == (void *)0x0)) goto LAB_019aba6c;
  pvVar14 = (void *)NativeHelper_0334f4c8(pvVar14,0);
  self->_txtComingSoon = pvVar14;
  NativeHelper_017ef228(&self->_txtComingSoon,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c
                          (self->_trans,*(void **)PTR_DAT_038689b8,(void *)0x0),
     puVar3 = PTR_DAT_03867ae8, pvVar14 == (void *)0x0)) goto LAB_019aba6c;
  pvVar14 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)PTR_DAT_03867ae8);
  self->_txtUnlock = pvVar14;
  NativeHelper_017ef228(&self->_txtUnlock,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c
                          (self->_trans,*(void **)PTR_DAT_038689e0,(void *)0x0),
     puVar4 = PTR_DAT_038689c0, puVar7 = PTR_DAT_03868610, pvVar14 == (void *)0x0))
  goto LAB_019aba6c;
  pTVar15 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)PTR_DAT_03868610);
  self->_btnSkin = pTVar15;
  NativeHelper_017ef228();
  pvVar14 = UnityEngine_Transform_Find_325c35c(pvVar14,*(void **)puVar4,(void *)0x0);
  if (pvVar14 == (void *)0x0) goto LAB_019aba6c;
  pvVar14 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)puVar3);
  ppvVar26 = &self->_txtUseState;
  *ppvVar26 = pvVar14;
  NativeHelper_017ef228(ppvVar26,pvVar14);
  if (*ppvVar26 == (void *)0x0) goto LAB_019aba6c;
  pCVar16 = UnityEngine_Component_GetComponent_1b08498(*ppvVar26,*(void **)PTR_DAT_03868978);
  self->_txtUseStateOutline = pCVar16;
  NativeHelper_017ef228(&self->_txtUseStateOutline,pCVar16);
  if (self->_txtUseState == (void *)0x0) goto LAB_019aba6c;
  pvVar14 = UnityEngine_Component_GetComponent_1b08498
                      (self->_txtUseState,*(void **)PTR_DAT_03868980);
  self->_txtUseStateShadow = pvVar14;
  NativeHelper_017ef228(&self->_txtUseStateShadow,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     (pvVar14 = UnityEngine_Transform_Find_325c35c
                          (self->_trans,*(void **)PTR_DAT_038689c8,(void *)0x0),
     pvVar14 == (void *)0x0)) goto LAB_019aba6c;
  pvVar14 = (void *)NativeHelper_0334f4c8(pvVar14,0);
  ppvVar26 = &self->_progressRoot;
  *ppvVar26 = pvVar14;
  NativeHelper_017ef228(ppvVar26,pvVar14);
  if ((*ppvVar26 == (void *)0x0) ||
     ((pvVar14 = (void *)NativeHelper_0335213c(*ppvVar26,0), pvVar14 == (void *)0x0 ||
      (pvVar14 = UnityEngine_Transform_Find_325c35c(pvVar14,*(void **)PTR_DAT_038689b0,(void *)0x0),
      pvVar14 == (void *)0x0)))) goto LAB_019aba6c;
  pvVar14 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)puVar2);
  self->_imgProgress = pvVar14;
  NativeHelper_017ef228(&self->_imgProgress,pvVar14);
  if ((self->_progressRoot == (void *)0x0) ||
     ((pvVar14 = (void *)NativeHelper_0335213c(self->_progressRoot,0), pvVar14 == (void *)0x0 ||
      (pvVar14 = UnityEngine_Transform_Find_325c35c(pvVar14,*(void **)PTR_DAT_038689d8,(void *)0x0),
      pvVar14 == (void *)0x0)))) goto LAB_019aba6c;
  pvVar14 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)puVar3);
  self->_txtProgress = pvVar14;
  NativeHelper_017ef228(&self->_txtProgress,pvVar14);
  if ((self->_trans == (void *)0x0) ||
     ((pvVar14 = (void *)NativeHelper_0334f400(self->_trans,0), pvVar14 == (void *)0x0 ||
      (pvVar14 = UnityEngine_Transform_Find_325c35c(pvVar14,*(void **)PTR_DAT_038689a0,(void *)0x0),
      puVar11 = PTR_DAT_03868998, puVar10 = PTR_DAT_03868990, puVar9 = PTR_DAT_03868988,
      puVar8 = PTR_DAT_03868770, puVar6 = PTR_DAT_03867070, puVar5 = PTR_DAT_03867068,
      puVar4 = PTR_DAT_03867040, puVar3 = PTR_DAT_03866c68, puVar2 = PTR_DAT_0385d950,
      pvVar14 == (void *)0x0)))) goto LAB_019aba6c;
  pTVar15 = UnityEngine_Component_GetComponent_1b08498(pvVar14,*(void **)puVar7);
  self->_btnInfo = pTVar15;
  NativeHelper_017ef228();
  pHVar17 = Game_Controller_FMViewController_GetView_1b724a8(*(void **)puVar8,*(void **)puVar9);
  self->_homeView = pHVar17;
  NativeHelper_017ef228();
  uVar18 = NativeHelper_017ef520(*(undefined8 *)puVar4);
  NativeHelper_02015018(uVar18,self,*(undefined8 *)puVar10,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  NativeHelper_01ca5464(*(undefined8 *)puVar6,uVar18,*(undefined8 *)puVar5);
  pvVar14 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
  Callback_Callback_186ef98(pvVar14,self,*(void **)puVar11,(void *)0x0);
  puVar2 = PTR_DAT_0385d950;
  runtimeMethod_00 = (void *)0x0;
  eventType = *(long **)PTR_DAT_038689f8;
  if ((bRam0000000003ab2094 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_03866c88);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    bRam0000000003ab2094 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_OnListenerAdding_1874e0c(eventType,pvVar14,runtimeMethod_00);
  puVar3 = PTR_DAT_03866c68;
  lVar27 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  plVar13 = (long *)NativeHelper_02133414(lVar27,eventType,*(undefined8 *)PTR_DAT_03866c80);
  if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0();
  }
  plVar13 = (long *)NativeHelper_02c55174(plVar13,pvVar14,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef8b0(plVar13);
  }
  lVar21 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_03866c88 + 0x20) + 0xc0) + 0x110);
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
  if (*(long *)(lVar27 + 0x10) == 0) {
    func_0x02133e40(lVar27,0,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x10));
  }
  plVar29 = *(long **)(lVar27 + 0x30);
  lVar31 = *(long *)(lVar27 + 0x18);
  if (plVar29 == (long *)0x0) {
    if (eventType == (long *)0x0) goto code_r0x021343a0;
    uVar12 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
  }
  else {
    lVar20 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = NativeHelper_018274a4(lVar20);
    }
    lVar22 = *plVar29;
    uVar24 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar24 != 0) {
      piVar33 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar33 + -2) == lVar20) {
          puVar19 = (undefined8 *)(lVar22 + (long)(*piVar33 + 1) * 0x10 + 0x138);
          goto code_r0x0213401c;
        }
        uVar24 = uVar24 - 1;
        piVar33 = piVar33 + 4;
      } while (uVar24 != 0);
    }
    puVar19 = (undefined8 *)NativeHelper_018277d8(plVar29,lVar20,1);
code_r0x0213401c:
    uVar12 = (*(code *)*puVar19)(plVar29,eventType,puVar19[1]);
  }
  lVar20 = *(long *)(lVar27 + 0x10);
  if (lVar20 == 0) goto code_r0x021343a0;
  uVar32 = *(uint *)(lVar20 + 0x18);
  uVar12 = uVar12 & 0x7fffffff;
  iVar28 = 0;
  if (uVar32 != 0) {
    iVar28 = (int)uVar12 / (int)uVar32;
  }
  uVar30 = uVar12 - iVar28 * uVar32;
  if (uVar32 <= uVar30) {
code_r0x0213439c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef538();
  }
  piVar33 = (int *)(lVar20 + (ulong)uVar30 * 4 + 0x20);
  uVar32 = *piVar33 - 1;
  if (plVar29 == (long *)0x0) {
    plVar29 = (long *)func_0x01b96270(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x18));
    if (lVar31 == 0) goto code_r0x021343a0;
    uVar18 = *(undefined8 *)(lVar31 + 0x18);
    uVar30 = (uint)uVar18;
    if (uVar32 < uVar30) {
      iVar28 = 0;
      lVar20 = lVar31 + 0x20;
      do {
        uVar30 = (uint)uVar18;
        if (*(uint *)(lVar20 + (long)(int)uVar32 * 0x18) == uVar12) {
          if (plVar29 == (long *)0x0) goto code_r0x021343a0;
          uVar24 = (**(code **)(*plVar29 + 0x1b8))
                             (plVar29,*(undefined8 *)(lVar20 + (long)(int)uVar32 * 0x18 + 8),
                              eventType,*(undefined8 *)(*plVar29 + 0x1c0));
          if ((uVar24 & 1) != 0) {
            if (*(uint *)(lVar31 + 0x18) <= uVar32) goto code_r0x0213439c;
            lVar20 = lVar20 + (long)(int)uVar32 * 0x18;
            goto code_r0x02134378;
          }
          uVar30 = *(uint *)(lVar31 + 0x18);
        }
        if (uVar30 <= uVar32) goto code_r0x0213439c;
        uVar32 = *(uint *)(lVar20 + (long)(int)uVar32 * 0x18 + 4);
        if ((int)uVar30 <= iVar28) {
          func_0x02c311b8(0);
        }
        uVar18 = *(undefined8 *)(lVar31 + 0x18);
        iVar28 = iVar28 + 1;
        uVar30 = (uint)uVar18;
      } while (uVar32 < uVar30);
    }
  }
  else {
    if (lVar31 == 0) goto code_r0x021343a0;
    uVar18 = *(undefined8 *)(lVar31 + 0x18);
    uVar30 = (uint)uVar18;
    if (uVar32 < uVar30) {
      iVar28 = 0;
      lVar20 = lVar31 + 0x20;
      do {
        uVar30 = (uint)uVar18;
        if (*(uint *)(lVar20 + (long)(int)uVar32 * 0x18) == uVar12) {
          lVar22 = *(long *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 8);
          uVar18 = *(undefined8 *)(lVar20 + (long)(int)uVar32 * 0x18 + 8);
          if ((*(ushort *)(lVar22 + 0x135) & 1) == 0) {
            lVar22 = NativeHelper_018274a4(lVar22);
          }
          lVar23 = *plVar29;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == lVar22) {
                puVar19 = (undefined8 *)(lVar23 + (long)*piVar25 * 0x10 + 0x138);
                goto code_r0x0213410c;
              }
              uVar24 = uVar24 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar24 != 0);
          }
          puVar19 = (undefined8 *)NativeHelper_018277d8(plVar29,lVar22,0);
code_r0x0213410c:
          uVar24 = (*(code *)*puVar19)(plVar29,uVar18,eventType,puVar19[1]);
          if ((uVar24 & 1) != 0) {
            if (uVar32 < *(uint *)(lVar31 + 0x18)) {
              lVar20 = lVar20 + (long)(int)uVar32 * 0x18;
code_r0x02134378:
              *(long **)(lVar20 + 0x10) = plVar13;
              NativeHelper_017ef228();
              return;
            }
            goto code_r0x0213439c;
          }
          uVar30 = *(uint *)(lVar31 + 0x18);
        }
        if (uVar30 <= uVar32) goto code_r0x0213439c;
        uVar32 = *(uint *)(lVar20 + (long)(int)uVar32 * 0x18 + 4);
        if ((int)uVar30 <= iVar28) {
          func_0x02c311b8(0);
        }
        uVar18 = *(undefined8 *)(lVar31 + 0x18);
        iVar28 = iVar28 + 1;
        uVar30 = (uint)uVar18;
      } while (uVar32 < uVar30);
    }
  }
  if (*(int *)(lVar27 + 0x28) < 1) {
    uVar32 = *(uint *)(lVar27 + 0x20);
    if (uVar32 == uVar30) {
      func_0x02134760(lVar27,*(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x1b0));
      lVar21 = *(long *)(lVar27 + 0x10);
      *(uint *)(lVar27 + 0x20) = uVar30 + 1;
      if (lVar21 == 0) goto code_r0x021343a0;
      uVar30 = *(uint *)(lVar21 + 0x18);
      iVar28 = 0;
      if (uVar30 != 0) {
        iVar28 = (int)uVar12 / (int)uVar30;
      }
      uVar1 = uVar12 - iVar28 * uVar30;
      if (uVar30 <= uVar1) goto code_r0x0213439c;
      lVar31 = *(long *)(lVar27 + 0x18);
      piVar33 = (int *)(lVar21 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar31 = *(long *)(lVar27 + 0x18);
      *(uint *)(lVar27 + 0x20) = uVar32 + 1;
    }
    if (lVar31 == 0) {
code_r0x021343a0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (*(uint *)(lVar31 + 0x18) <= uVar32) goto code_r0x0213439c;
    lVar31 = lVar31 + (long)(int)uVar32 * 0x18;
  }
  else {
    uVar32 = *(uint *)(lVar27 + 0x24);
    *(int *)(lVar27 + 0x28) = *(int *)(lVar27 + 0x28) + -1;
    if (uVar30 <= uVar32) goto code_r0x0213439c;
    lVar31 = lVar31 + (long)(int)uVar32 * 0x18;
    *(undefined4 *)(lVar27 + 0x24) = *(undefined4 *)(lVar31 + 0x24);
  }
  *(uint *)(lVar31 + 0x20) = uVar12;
  iVar28 = *piVar33;
  *(undefined8 *)(lVar31 + 0x28) = eventType;
  *(int *)(lVar31 + 0x24) = iVar28 + -1;
  NativeHelper_017ef228((undefined8 *)(lVar31 + 0x28),eventType);
  *(long *)(lVar31 + 0x30) = (long)plVar13;
  NativeHelper_017ef228((long *)(lVar31 + 0x30),plVar13);
  *piVar33 = uVar32 + 1;
  return;
}

