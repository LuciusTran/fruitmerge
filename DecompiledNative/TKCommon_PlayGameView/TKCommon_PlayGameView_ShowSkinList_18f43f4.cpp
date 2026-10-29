// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ShowSkinList() { }
// Ghidra address: 019f83f4; ELF VA: 0x18f83f4; file offset: 0x18f43f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_ShowSkinList_18f43f4(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  
  if ((bRam0000000003ab25c4 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_038654f8);
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    NativeHelper_017ef284(PTR_DAT_0386a890);
    bRam0000000003ab25c4 = 1;
  }
  UnityEngine_Time_set_timeScale_32575d0(0.0,(void *)0x0);
  if (self->m_trans_Panel != (void *)0x0) {
    plVar6 = (long *)NativeHelper_0334f400(self->m_trans_Panel,0);
    iVar5 = NativeHelper_03329744(0);
    puVar3 = PTR_DAT_038654f8;
    if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)PTR_DAT_038654f8)) {
      UnityEngine_RectTransform_set_anchoredPosition_3259788
                (plVar6,(Recovered_Vector2)((ulong)(uint)(float)-iVar5 << 0x20),(void *)0x0);
      if ((self->m_trans_Skin != (void *)0x0) &&
         (lVar7 = NativeHelper_0334f4c8(self->m_trans_Skin,0), lVar7 != 0)) {
        NativeHelper_0335236c(lVar7,1,0);
        if (self->_hasCreated == false) {
          pvVar9 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385d9c8);
          if (pvVar9 == (void *)0x0) goto LAB_019f8678;
          pvVar9 = (void *)ConfigManager_GetSkinList_1806518(pvVar9,0);
          self->_skinItemData = pvVar9;
          NativeHelper_017ef228(&self->_skinItemData,pvVar9);
          self->_hasCreated = true;
          TKCommon_PlayGameView_CreateSkinItems_18f3d00(self,self->_skinItemData);
        }
        else {
          TKCommon_PlayGameView_RefreshSkinItems_18f467c(self,self->_skinItemData);
        }
        puVar2 = PTR_DAT_0385d918;
        pvVar9 = self->m_trans_Panel;
        if (*(int *)(*(long *)PTR_DAT_0385d918 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        if (cRam0000000003ab223e == '\0') {
          NativeHelper_017ef284(PTR_DAT_0385d918);
          cRam0000000003ab223e = '\x01';
        }
        puVar4 = PTR_DAT_0386a890;
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          NativeHelper_017ef404();
          lVar7 = *(long *)puVar2;
        }
        uVar1 = 0;
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x7e) != '\0') {
          uVar1 = 0x430e0000;
        }
        uVar8 = NativeHelper_01966b7c(uVar1,_UNK_00a47720,pvVar9,0,0);
        NativeHelper_01d70168(uVar8,1,*(undefined8 *)puVar4);
        if (self->m_scrollrect_Skin != (void *)0x0) {
          plVar6 = (long *)NativeHelper_0334f400(self->m_scrollrect_Skin,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar2);
          }
          if (cRam0000000003ab223e == '\0') {
            NativeHelper_017ef284(PTR_DAT_0385d918);
            cRam0000000003ab223e = '\x01';
          }
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar7 = *(long *)puVar2;
          }
          if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x7e) == '\0') {
            if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)puVar3)) goto code_r0x0335d788;
          }
          else if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)puVar3)) {
code_r0x0335d788:
            if ((bRam0000000003abbcb8 & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_038a7b60,0);
              bRam0000000003abbcb8 = 1;
            }
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            lVar7 = plVar6[2];
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_0334bff8();
            }
            if (pcRam0000000003abbcf8 == (code *)0x0) {
              pcRam0000000003abbcf8 = (code *)NativeHelper_017ef240(&UNK_00a5e384);
            }
            (*pcRam0000000003abbcf8)(lVar7,&stack0xffffffffffffffe8);
            return;
          }
        }
      }
    }
  }
LAB_019f8678:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

