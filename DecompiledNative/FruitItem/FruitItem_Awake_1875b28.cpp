// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 01979b28; ELF VA: 0x1879b28; file offset: 0x1875b28
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x02134388) */
/* WARNING: Removing unreachable block (ram,0x02134394) */

void FruitItem_Awake_1875b28(FruitItem *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  Game_UserData *self_00;
  void *usingSkinName;
  long *eventType;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  void **ppvVar18;
  void **ppvVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  undefined8 uVar24;
  uint uVar25;
  int *piVar26;
  
  if ((bRam0000000003ab209e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03867048);
    NativeHelper_017ef284(PTR_DAT_03867050);
    NativeHelper_017ef284(PTR_DAT_03866818);
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_03867060);
    NativeHelper_017ef284(PTR_DAT_03867068);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_03867078);
    NativeHelper_017ef284(PTR_DAT_03867080);
    NativeHelper_017ef284(PTR_DAT_03867088);
    bRam0000000003ab209e = 1;
  }
  pvVar9 = (void *)NativeHelper_0334f400(self,0);
  if (pvVar9 == (void *)0x0) {
LAB_01979e30:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  pvVar9 = UnityEngine_Transform_Find_325c35c(pvVar9,*(void **)PTR_DAT_03867078,(void *)0x0);
  self->_BrainrotCollider = pvVar9;
  NativeHelper_017ef228();
  pvVar9 = (void *)NativeHelper_0334f400(self,0);
  puVar2 = PTR_DAT_03866818;
  if (pvVar9 == (void *)0x0) goto LAB_01979e30;
  pvVar9 = UnityEngine_Transform_Find_325c35c(pvVar9,*(void **)PTR_DAT_03867080,(void *)0x0);
  self->_CapybaraCollider = pvVar9;
  NativeHelper_017ef228();
  pvVar9 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)puVar2);
  ppvVar18 = &self->_rigidbody2D;
  *ppvVar18 = pvVar9;
  NativeHelper_017ef228(ppvVar18,pvVar9);
  puVar4 = PTR_DAT_03867058;
  puVar3 = PTR_DAT_03867050;
  puVar2 = PTR_DAT_03867048;
  if (*ppvVar18 == (void *)0x0) goto LAB_01979e30;
  NativeHelper_033af858(*ppvVar18,0,0);
  pvVar9 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)puVar3);
  self->_circleCollider2D = pvVar9;
  NativeHelper_017ef228();
  pvVar9 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)puVar4);
  ppvVar18 = &self->_sprite;
  *ppvVar18 = pvVar9;
  NativeHelper_017ef228(ppvVar18,pvVar9);
  pvVar9 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)puVar2);
  ppvVar19 = &self->_finishAnimator;
  *ppvVar19 = pvVar9;
  NativeHelper_017ef228(ppvVar19,pvVar9);
  if (*ppvVar19 == (void *)0x0) goto LAB_01979e30;
  UnityEngine_Behaviour_set_enabled_324ac04(*ppvVar19,false,(void *)0x0);
  if (*ppvVar18 == (void *)0x0) goto LAB_01979e30;
  iVar7 = UnityEngine_Renderer_get_sortingOrder_322984c(*ppvVar18,(void *)0x0);
  self->_baseOrder = iVar7;
  puVar2 = PTR_DAT_0385db10;
  if (self->_sprite == (void *)0x0) goto LAB_01979e30;
  pvVar9 = (void *)0x0;
  UnityEngine_Renderer_set_sortingOrder_3229900(self->_sprite,0x14,(void *)0x0);
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if (self_00 == (Game_UserData *)0x0) goto LAB_01979e30;
  usingSkinName = Game_UserData_GetUsingSkin_18cf374(self_00,(void *)0x0);
  FruitItem_UpdateSkin_1875e34(self,usingSkinName,pvVar9);
  FruitItem_SwitchNormalStates_1875f40(self,runtimeMethod_00);
  pvVar9 = (void *)NativeHelper_0334f400(self,0);
  if ((pvVar9 == (void *)0x0) ||
     (pvVar9 = UnityEngine_Transform_Find_325c35c(pvVar9,*(void **)PTR_DAT_03867088,(void *)0x0),
     puVar6 = PTR_DAT_03867070, puVar5 = PTR_DAT_03867068, puVar4 = PTR_DAT_03867060,
     puVar3 = PTR_DAT_03867040, puVar2 = PTR_DAT_0385d950, pvVar9 == (void *)0x0))
  goto LAB_01979e30;
  pvVar9 = (void *)NativeHelper_0334f4c8(pvVar9,0);
  self->_toolEffect = pvVar9;
  NativeHelper_017ef228();
  FruitItem_ResetMaterialFactor_1875f70(self,runtimeMethod_01);
  pvVar9 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
  NativeHelper_02015018(pvVar9,self,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  eventType = *(long **)puVar6;
  lVar13 = *(long *)puVar5;
  if (*(long *)(lVar13 + 0x38) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c80);
    NativeHelper_017ef284(PTR_DAT_03866c88);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    if (*(long *)(lVar13 + 0x38) == 0) {
      NativeHelper_01827500(lVar13);
    }
  }
  puVar2 = PTR_DAT_0385d950;
  if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_OnListenerAdding_1874e0c(eventType,pvVar9,(void *)0x0);
  lVar20 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar10 = NativeHelper_02133414(lVar20,eventType,*(undefined8 *)PTR_DAT_03866c80);
  lVar21 = **(long **)(lVar13 + 0x38);
  if ((*(ushort *)(lVar21 + 0x135) & 1) == 0) {
    lVar21 = NativeHelper_018274a4(lVar21);
  }
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = NativeHelper_017ef408(lVar10,lVar21);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(lVar10,lVar21);
    }
  }
  lVar10 = NativeHelper_02c55174(lVar11,pvVar9,0);
  lVar13 = **(long **)(lVar13 + 0x38);
  if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = NativeHelper_018274a4(lVar13);
  }
  if (lVar10 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = NativeHelper_017ef408(lVar10,lVar13);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(lVar10,lVar13);
    }
  }
  lVar13 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_03866c88 + 0x20) + 0xc0) + 0x110);
  if (eventType == (long *)0x0) {
    func_0x02c21b48(5);
  }
  *(int *)(lVar20 + 0x2c) = *(int *)(lVar20 + 0x2c) + 1;
  if (*(long *)(lVar20 + 0x10) == 0) {
    func_0x02133e40(lVar20,0,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x10));
  }
  plVar22 = *(long **)(lVar20 + 0x30);
  lVar10 = *(long *)(lVar20 + 0x18);
  if (plVar22 == (long *)0x0) {
    if (eventType == (long *)0x0) goto code_r0x021343a0;
    uVar8 = (**(code **)(*eventType + 0x158))(eventType,*(undefined8 *)(*eventType + 0x160));
  }
  else {
    lVar11 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = NativeHelper_018274a4(lVar11);
    }
    lVar14 = *plVar22;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar26 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar14 + (long)(*piVar26 + 1) * 0x10 + 0x138);
          goto code_r0x0213401c;
        }
        uVar16 = uVar16 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)NativeHelper_018277d8(plVar22,lVar11,1);
code_r0x0213401c:
    uVar8 = (*(code *)*puVar12)(plVar22,eventType,puVar12[1]);
  }
  lVar11 = *(long *)(lVar20 + 0x10);
  if (lVar11 == 0) goto code_r0x021343a0;
  uVar25 = *(uint *)(lVar11 + 0x18);
  uVar8 = uVar8 & 0x7fffffff;
  iVar7 = 0;
  if (uVar25 != 0) {
    iVar7 = (int)uVar8 / (int)uVar25;
  }
  uVar23 = uVar8 - iVar7 * uVar25;
  if (uVar25 <= uVar23) {
code_r0x0213439c:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef538();
  }
  piVar26 = (int *)(lVar11 + (ulong)uVar23 * 4 + 0x20);
  uVar25 = *piVar26 - 1;
  if (plVar22 == (long *)0x0) {
    plVar22 = (long *)func_0x01b96270(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x18));
    if (lVar10 == 0) goto code_r0x021343a0;
    uVar24 = *(undefined8 *)(lVar10 + 0x18);
    uVar23 = (uint)uVar24;
    if (uVar25 < uVar23) {
      iVar7 = 0;
      lVar11 = lVar10 + 0x20;
      do {
        uVar23 = (uint)uVar24;
        if (*(uint *)(lVar11 + (long)(int)uVar25 * 0x18) == uVar8) {
          if (plVar22 == (long *)0x0) goto code_r0x021343a0;
          uVar16 = (**(code **)(*plVar22 + 0x1b8))
                             (plVar22,*(undefined8 *)(lVar11 + (long)(int)uVar25 * 0x18 + 8),
                              eventType,*(undefined8 *)(*plVar22 + 0x1c0));
          if ((uVar16 & 1) != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar25) goto code_r0x0213439c;
            lVar11 = lVar11 + (long)(int)uVar25 * 0x18;
            goto code_r0x02134378;
          }
          uVar23 = *(uint *)(lVar10 + 0x18);
        }
        if (uVar23 <= uVar25) goto code_r0x0213439c;
        uVar25 = *(uint *)(lVar11 + (long)(int)uVar25 * 0x18 + 4);
        if ((int)uVar23 <= iVar7) {
          func_0x02c311b8(0);
        }
        uVar24 = *(undefined8 *)(lVar10 + 0x18);
        iVar7 = iVar7 + 1;
        uVar23 = (uint)uVar24;
      } while (uVar25 < uVar23);
    }
  }
  else {
    if (lVar10 == 0) goto code_r0x021343a0;
    uVar24 = *(undefined8 *)(lVar10 + 0x18);
    uVar23 = (uint)uVar24;
    if (uVar25 < uVar23) {
      iVar7 = 0;
      lVar11 = lVar10 + 0x20;
      do {
        uVar23 = (uint)uVar24;
        if (*(uint *)(lVar11 + (long)(int)uVar25 * 0x18) == uVar8) {
          lVar14 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 8);
          uVar24 = *(undefined8 *)(lVar11 + (long)(int)uVar25 * 0x18 + 8);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = NativeHelper_018274a4(lVar14);
          }
          lVar15 = *plVar22;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto code_r0x0213410c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar12 = (undefined8 *)NativeHelper_018277d8(plVar22,lVar14,0);
code_r0x0213410c:
          uVar16 = (*(code *)*puVar12)(plVar22,uVar24,eventType,puVar12[1]);
          if ((uVar16 & 1) != 0) {
            if (uVar25 < *(uint *)(lVar10 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar25 * 0x18;
code_r0x02134378:
              *(long *)(lVar11 + 0x10) = lVar21;
              NativeHelper_017ef228();
              return;
            }
            goto code_r0x0213439c;
          }
          uVar23 = *(uint *)(lVar10 + 0x18);
        }
        if (uVar23 <= uVar25) goto code_r0x0213439c;
        uVar25 = *(uint *)(lVar11 + (long)(int)uVar25 * 0x18 + 4);
        if ((int)uVar23 <= iVar7) {
          func_0x02c311b8(0);
        }
        uVar24 = *(undefined8 *)(lVar10 + 0x18);
        iVar7 = iVar7 + 1;
        uVar23 = (uint)uVar24;
      } while (uVar25 < uVar23);
    }
  }
  if (*(int *)(lVar20 + 0x28) < 1) {
    uVar25 = *(uint *)(lVar20 + 0x20);
    if (uVar25 == uVar23) {
      func_0x02134760(lVar20,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x1b0));
      lVar13 = *(long *)(lVar20 + 0x10);
      *(uint *)(lVar20 + 0x20) = uVar23 + 1;
      if (lVar13 == 0) goto code_r0x021343a0;
      uVar23 = *(uint *)(lVar13 + 0x18);
      iVar7 = 0;
      if (uVar23 != 0) {
        iVar7 = (int)uVar8 / (int)uVar23;
      }
      uVar1 = uVar8 - iVar7 * uVar23;
      if (uVar23 <= uVar1) goto code_r0x0213439c;
      lVar10 = *(long *)(lVar20 + 0x18);
      piVar26 = (int *)(lVar13 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar10 = *(long *)(lVar20 + 0x18);
      *(uint *)(lVar20 + 0x20) = uVar25 + 1;
    }
    if (lVar10 == 0) {
code_r0x021343a0:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar25) goto code_r0x0213439c;
    lVar10 = lVar10 + (long)(int)uVar25 * 0x18;
  }
  else {
    uVar25 = *(uint *)(lVar20 + 0x24);
    *(int *)(lVar20 + 0x28) = *(int *)(lVar20 + 0x28) + -1;
    if (uVar23 <= uVar25) goto code_r0x0213439c;
    lVar10 = lVar10 + (long)(int)uVar25 * 0x18;
    *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)(lVar10 + 0x24);
  }
  *(uint *)(lVar10 + 0x20) = uVar8;
  iVar7 = *piVar26;
  *(undefined8 *)(lVar10 + 0x28) = eventType;
  *(int *)(lVar10 + 0x24) = iVar7 + -1;
  NativeHelper_017ef228((undefined8 *)(lVar10 + 0x28),eventType);
  *(long *)(lVar10 + 0x30) = lVar21;
  NativeHelper_017ef228((long *)(lVar10 + 0x30),lVar21);
  *piVar26 = uVar25 + 1;
  return;
}

