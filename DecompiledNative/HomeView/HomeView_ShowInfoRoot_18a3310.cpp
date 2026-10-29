// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ShowInfoRoot(RectTransform btnInfoTrans, string skinName) { }
// Ghidra address: 019a7310; ELF VA: 0x18a7310; file offset: 0x18a3310
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HomeView_ShowInfoRoot_18a3310
               (HomeView *self,void *btnInfoTrans,void *skinName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  Game_UserData *self_00;
  DataManager *self_01;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  Recovered_Vector3 RVar17;
  Recovered_Vector2 RStack_78;
  
  if ((bRam0000000003ab2271 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03868608);
    NativeHelper_017ef284(PTR_DAT_03865268);
    NativeHelper_017ef284(PTR_DAT_038654f8);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03868800);
    NativeHelper_017ef284(PTR_DAT_03868808);
    bRam0000000003ab2271 = 1;
  }
  puVar1 = PTR_DAT_03865268;
  RStack_78.component0 = 0.0;
  RStack_78.component1 = 0.0;
  if (btnInfoTrans != (void *)0x0) {
    RVar17 = UnityEngine_Transform_TransformPoint_325bba0
                       (btnInfoTrans,(Recovered_Vector3)ZEXT812(0xc282000000000000),(void *)0x0);
    fVar16 = RVar17.component1;
    pvVar13 = self->_uICamera;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar15 = NativeHelper_0364276c(RVar17.component0,fVar16,RVar17.component2,pvVar13,0);
    if (self->_infoRoot != (void *)0x0) {
      plVar8 = UnityEngine_Transform_get_parent_325a644(self->_infoRoot,(void *)0x0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != *(long *)PTR_DAT_038654f8)) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef8b0(plVar8,*(long *)PTR_DAT_038654f8);
      }
      NativeHelper_03642670(uVar15,fVar16,plVar8,self->_uICamera,&RStack_78,0);
      if (self->_infoRoot != (void *)0x0) {
        UnityEngine_RectTransform_set_anchoredPosition_3259788
                  (self->_infoRoot,RStack_78,(void *)0x0);
        if ((self->_btnInfoClose != (void *)0x0) &&
           (lVar9 = NativeHelper_0334f4c8(self->_btnInfoClose,0), puVar1 = PTR_DAT_0385db10,
           lVar9 != 0)) {
          NativeHelper_0335236c(lVar9,1,0);
          self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if (self_00 != (Game_UserData *)0x0) {
            iVar6 = Game_UserData_GetHistoryUnlockGrade_18c9878(self_00,(void *)0x0);
            puVar4 = PTR_DAT_03868808;
            puVar3 = PTR_DAT_03868800;
            puVar2 = PTR_DAT_03868608;
            puVar1 = PTR_DAT_0385d9d8;
            pvVar13 = self->_infoRoot;
            if (pvVar13 != (void *)0x0) {
              iVar14 = 0;
              while (iVar7 = NativeHelper_0335fe50(pvVar13,0), iVar14 < iVar7) {
                self_01 = Singleton_get_Instance_27784f4(*(void **)puVar1);
                if (self_01 == (DataManager *)0x0) goto LAB_019a757c;
                bVar5 = DataManager_IsOldPlayerWithFullSkinUnlock_18075fc(self_01,(void *)0x0);
                if (((self->_infoRoot == (void *)0x0) ||
                    (pvVar13 = (void *)NativeHelper_0336077c(self->_infoRoot,iVar14,0),
                    pvVar13 == (void *)0x0)) ||
                   (pvVar13 = UnityEngine_Transform_Find_325c35c
                                        (pvVar13,*(void **)puVar4,(void *)0x0),
                   pvVar13 == (void *)0x0)) goto LAB_019a757c;
                pvVar13 = UnityEngine_Component_GetComponent_1b08498(pvVar13,*(void **)puVar2);
                pvVar10 = Game_Const_GetSprite_FruitPreview_18da76c
                                    (skinName,iVar14 + 1,bVar5 || iVar14 < iVar6,(void *)0x0);
                if (pvVar13 == (void *)0x0) goto LAB_019a757c;
                NativeHelper_0345dd98(pvVar13,pvVar10,0);
                pvVar13 = self->_infoRoot;
                iVar14 = iVar14 + 1;
                if (pvVar13 == (void *)0x0) goto LAB_019a757c;
              }
              if ((self->_infoRoot != (void *)0x0) &&
                 (lVar9 = NativeHelper_0334f4c8(self->_infoRoot,0), lVar9 != 0)) {
                NativeHelper_0335236c(lVar9,1,0);
                pvVar13 = self->_infoRoot;
                if (cRam0000000003ab204a == '\0') {
                  NativeHelper_017ef284(PTR_DAT_038654f0);
                  cRam0000000003ab204a = '\x01';
                }
                puVar1 = PTR_DAT_038654f0;
                if (pvVar13 != (void *)0x0) {
                  UnityEngine_Transform_set_localScale_325af4c
                            (pvVar13,**(Recovered_Vector3 **)(*(long *)PTR_DAT_038654f0 + 0xb8),
                             (void *)0x0);
                  pvVar13 = self->_infoRoot;
                  if (cRam0000000003ab1f83 == '\0') {
                    NativeHelper_017ef284(PTR_DAT_038654f0);
                    cRam0000000003ab1f83 = '\x01';
                  }
                  lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
                  uVar11 = NativeHelper_01a5e5fc
                                     (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                                      *(undefined4 *)(lVar9 + 0x14),_UNK_00a4765c,pvVar13,0);
                  uVar12 = NativeHelper_0334f400(self,0);
                  NativeHelper_01d70028(uVar11,uVar12,*(undefined8 *)puVar3);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_019a757c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

