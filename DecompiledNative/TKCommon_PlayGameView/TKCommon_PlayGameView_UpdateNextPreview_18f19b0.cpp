// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void UpdateNextPreview(int index) { }
// Ghidra address: 019f59b0; ELF VA: 0x18f59b0; file offset: 0x18f19b0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TKCommon_PlayGameView_UpdateNextPreview_18f19b0
               (TKCommon_PlayGameView *self,int index,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  
  puVar2 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab25a1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867150);
    bRam0000000003ab25a1 = 1;
  }
  pvVar8 = self->m_img_NextPreview;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pvVar6 = (void *)0x0;
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar8,(void *)0x0,(void *)0x0);
  if (bVar4) {
    pvVar8 = (void *)NativeHelper_0334f4c8(self,0);
    TKCommon_PlayGameView_GetBindComponents_18edc08(self,pvVar8,pvVar6);
  }
  if (self->m_img_NextPreview != (void *)0x0) {
    uVar5 = NativeHelper_0334f400(self->m_img_NextPreview,0);
    NativeHelper_01a630d4(uVar5,0,0);
    pvVar6 = self->m_img_NextPreview;
    self->_nextItemIndex = index;
    pvVar8 = Game_Const_GetSprite_FruitPreview_18da76c
                       (self->_currentUsingSkin,index + 1,true,(void *)0x0);
    if (pvVar6 != (void *)0x0) {
      NativeHelper_0345dd98(pvVar6,pvVar8,0);
      if (self->m_img_NextPreview != (void *)0x0) {
        pvVar8 = (void *)NativeHelper_0334f400(self->m_img_NextPreview,0);
        if (cRam0000000003ab204a == '\0') {
          NativeHelper_017ef284(PTR_DAT_038654f0);
          cRam0000000003ab204a = '\x01';
        }
        puVar2 = PTR_DAT_038654f0;
        if (pvVar8 != (void *)0x0) {
          UnityEngine_Transform_set_localScale_325af4c
                    (pvVar8,**(Recovered_Vector3 **)(*(long *)PTR_DAT_038654f0 + 0xb8),(void *)0x0);
          puVar3 = PTR_DAT_03867150;
          if (self->m_img_NextPreview != (void *)0x0) {
            uVar5 = NativeHelper_0334f400(self->m_img_NextPreview,0);
            if (cRam0000000003ab1f83 == '\0') {
              NativeHelper_017ef284(PTR_DAT_038654f0);
              cRam0000000003ab1f83 = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
            lVar7 = NativeHelper_01a5e5fc
                              (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                               *(undefined4 *)(lVar7 + 0x14),_UNK_00a47720,uVar5,0);
            if ((bRam0000000003ab3290 & 1) == 0) {
              NativeHelper_017ef284(&DAT_0392d908,1,*(undefined8 *)puVar3);
              NativeHelper_017ef284(&DAT_03933130);
              bRam0000000003ab3290 = 1;
            }
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
              if (*(int *)(_DAT_0392d908 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              uVar1 = *(undefined4 *)(*(long *)(_DAT_0392d908 + 0xb8) + 0x3c);
              if (*(int *)(_DAT_03933130 + 0xe4) == 0) {
                NativeHelper_017ef404(_DAT_03933130);
              }
              func_0x01a7b060(lVar7,uVar1,1,0);
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

