// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GoFinishView() { }
// Ghidra address: 019f6644; ELF VA: 0x18f6644; file offset: 0x18f2644
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_GoFinishView_18f2644(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  Game_UserData *self_00;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  Recovered_Rect RVar9;
  
  if ((bRam0000000003ab25aa & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386ac10);
    NativeHelper_017ef284(PTR_DAT_0386ac18);
    NativeHelper_017ef284(PTR_DAT_0386ac20);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab25aa = 1;
  }
  puVar1 = PTR_DAT_0385db10;
  if (self->mMergeFruit != (MergeFruit *)0x0) {
    MergeFruit_ClearFruitsPrefs_187e47c(self->mMergeFruit,(void *)0x0);
    self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (self_00 != (Game_UserData *)0x0) {
      Game_UserData_SaveCurrentScore_18c9a5c(self_00,0,(void *)0x0);
      if (self->_fruitCamera != (void *)0x0) {
        pvVar4 = UnityEngine_Component_GetComponent_1b08498
                           (self->_fruitCamera,*(void **)PTR_DAT_0386ac18);
        puVar2 = PTR_DAT_0386ac20;
        puVar1 = PTR_DAT_0386ac10;
        if (self->mMergeFruit != (MergeFruit *)0x0) {
          RVar9 = MergeFruit_CaptureRect_187df14(self->mMergeFruit,self->_fruitCamera,(void *)0x0);
          uVar5 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          NativeHelper_01efbaf0(uVar5,self,*(undefined8 *)puVar2,0);
          if (pvVar4 != (void *)0x0) {
            if (*(char *)((long)pvVar4 + 0x38) != '\0') {
              return;
            }
            lVar3 = NativeHelper_01907288
                              (RVar9.component0,RVar9.component1,RVar9.component2,RVar9.component3,
                               pvVar4,uVar5,0);
            if (lVar3 == 0) {
              NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
              uVar7 = NativeHelper_017ef520();
              uVar5 = NativeHelper_017ef298(PTR_DAT_038a78d0);
              NativeHelper_02c12308(uVar7,uVar5,0);
            }
            else {
              uVar6 = NativeHelper_03353b80();
              if ((uVar6 & 1) != 0) {
                if ((bRam0000000003abb84f & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_038a7898);
                  bRam0000000003abb84f = 1;
                }
                if (pvVar4 != (void *)0x0) {
                  lVar8 = *(long *)((long)pvVar4 + 0x10);
                  if (lVar8 != 0) {
                    if (pcRam0000000003abb8c0 == (code *)0x0) {
                      pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
                    }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003abb8c0)(lVar8,lVar3);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  NativeHelper_0334bff8();
                }
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
              NativeHelper_017ef298(PTR_DAT_03865620);
              uVar7 = NativeHelper_017ef520();
              uVar5 = NativeHelper_017ef298(PTR_DAT_038a78b8);
              NativeHelper_02b8eaa8(uVar7,uVar5,0);
            }
            uVar5 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef3f4(uVar7,uVar5);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

