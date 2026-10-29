// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Show() { }
// Ghidra address: 019a76ac; ELF VA: 0x18a76ac; file offset: 0x18a36ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_Show_18a36ac(HomeView *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_03868810;
  puVar3 = PTR_DAT_03866c68;
  puVar2 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2273 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03868818);
    NativeHelper_017ef284(PTR_DAT_03868810);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    NativeHelper_017ef284(PTR_DAT_03868820);
    bRam0000000003ab2273 = 1;
  }
  puVar5 = PTR_DAT_03868820;
  Game_Controller_View_Show_18d58e4((Game_Controller_View *)self,(void *)0x0);
  HomeView_GetSkinData_18a37f4(self,runtimeMethod_00);
  HomeView_CheckAndShowDialogs_18a3858(self,runtimeMethod_01);
  HomeView_InitTest_18a3a5c(self,runtimeMethod_02);
  pvVar6 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3);
  Callback_Callback_186ef98(pvVar6,self,*(void **)puVar4,(void *)0x0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_AddListener_186f034(*(void **)puVar5,pvVar6,(void *)0x0);
  puVar2 = PTR_DAT_03868818;
  if (self->_btnInfoClose != (void *)0x0) {
    lVar11 = *(long *)((long)self->_btnInfoClose + 0x100);
    pvVar6 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
    UnityEngine_Events_UnityAction_UnityAction_325f530(pvVar6,self,*(void **)puVar2,(void *)0x0);
    if (lVar11 != 0) {
      pvVar6 = UnityEngine_Events_UnityEvent_GetDelegate_325f62c(pvVar6,pvVar6);
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      if ((bRam0000000003abbee5 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_038a7c78);
        bRam0000000003abbee5 = 1;
      }
      lVar7 = *(long *)(lVar11 + 0x18);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)PTR_DAT_038a7c78;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            puVar9 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar9 = pvVar6;
            NativeHelper_017ef228(puVar9,pvVar6);
          }
          else {
            NativeHelper_025697dc
                      (lVar7,pvVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          *(undefined1 *)(lVar11 + 0x28) = 1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

