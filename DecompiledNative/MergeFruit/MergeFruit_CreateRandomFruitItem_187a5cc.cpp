// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CreateRandomFruitItem() { }
// Ghidra address: 0197e5cc; ELF VA: 0x187e5cc; file offset: 0x187a5cc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_CreateRandomFruitItem_187a5cc(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  undefined8 uVar7;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *in_x2;
  void *pvVar8;
  TKCommon_PlayGameView *self_00;
  long lVar9;
  
  pvVar6 = MergeFruit_CreateFruitItem_1878ab8(self,self->_nextRandomIndex,self->_lastFruitPos,in_x2)
  ;
  self->_currentFruit = pvVar6;
  NativeHelper_017ef228();
  MergeFruit_ChangeCurrentIndicatorColor_187c398(self,runtimeMethod_00);
  MergeFruit_ShowCurrentIndicator_187c358(self,runtimeMethod_01);
  iVar5 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
  self_00 = self->_playGameView;
  self->_nextRandomIndex = iVar5;
  puVar2 = PTR_DAT_0385c2a0;
  if (self_00 == (TKCommon_PlayGameView *)0x0) {
    return;
  }
  if ((bRam0000000003ab25a1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0,iVar5,0);
    NativeHelper_017ef284(PTR_DAT_03867150);
    bRam0000000003ab25a1 = 1;
  }
  pvVar6 = self_00->m_img_NextPreview;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pvVar8 = (void *)0x0;
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar6,(void *)0x0,(void *)0x0);
  if (bVar4) {
    pvVar6 = (void *)NativeHelper_0334f4c8(self_00,0);
    TKCommon_PlayGameView_GetBindComponents_18edc08(self_00,pvVar6,pvVar8);
  }
  if (self_00->m_img_NextPreview != (void *)0x0) {
    uVar7 = NativeHelper_0334f400(self_00->m_img_NextPreview,0);
    NativeHelper_01a630d4(uVar7,0,0);
    pvVar8 = self_00->m_img_NextPreview;
    self_00->_nextItemIndex = iVar5;
    pvVar6 = Game_Const_GetSprite_FruitPreview_18da76c
                       (self_00->_currentUsingSkin,iVar5 + 1,true,(void *)0x0);
    if (pvVar8 != (void *)0x0) {
      NativeHelper_0345dd98(pvVar8,pvVar6,0);
      if (self_00->m_img_NextPreview != (void *)0x0) {
        pvVar6 = (void *)NativeHelper_0334f400(self_00->m_img_NextPreview,0);
        if (cRam0000000003ab204a == '\0') {
          NativeHelper_017ef284(PTR_DAT_038654f0);
          cRam0000000003ab204a = '\x01';
        }
        puVar2 = PTR_DAT_038654f0;
        if (pvVar6 != (void *)0x0) {
          UnityEngine_Transform_set_localScale_325af4c
                    (pvVar6,**(Recovered_Vector3 **)(*(long *)PTR_DAT_038654f0 + 0xb8),(void *)0x0);
          puVar3 = PTR_DAT_03867150;
          if (self_00->m_img_NextPreview != (void *)0x0) {
            uVar7 = NativeHelper_0334f400(self_00->m_img_NextPreview,0);
            if (cRam0000000003ab1f83 == '\0') {
              NativeHelper_017ef284(PTR_DAT_038654f0);
              cRam0000000003ab1f83 = '\x01';
            }
            lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
            lVar9 = NativeHelper_01a5e5fc
                              (*(undefined4 *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 0x10),
                               *(undefined4 *)(lVar9 + 0x14),_UNK_00a47720,uVar7,0);
            if ((bRam0000000003ab3290 & 1) == 0) {
              NativeHelper_017ef284(&DAT_0392d908,1,*(undefined8 *)puVar3);
              NativeHelper_017ef284(&DAT_03933130);
              bRam0000000003ab3290 = 1;
            }
            if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
              if (*(int *)(_DAT_0392d908 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              uVar1 = *(undefined4 *)(*(long *)(_DAT_0392d908 + 0xb8) + 0x3c);
              if (*(int *)(_DAT_03933130 + 0xe4) == 0) {
                NativeHelper_017ef404(_DAT_03933130);
              }
              func_0x01a7b060(lVar9,uVar1,1,0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

