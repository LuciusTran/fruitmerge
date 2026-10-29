// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnGUI() { }
// Ghidra address: 0197eb94; ELF VA: 0x187eb94; file offset: 0x187ab94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_OnGUI_187ab94(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  Game_UserData *pGVar5;
  undefined8 uVar6;
  void *extraout_x1;
  long lVar7;
  void *pvVar8;
  long lVar9;
  int iStack_44;
  
  puVar1 = PTR_DAT_0385d910;
  if ((bRam0000000003ab20c6 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867290);
    NativeHelper_017ef284(PTR_DAT_038671a8);
    NativeHelper_017ef284(PTR_DAT_0385d910);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867298);
    NativeHelper_017ef284(PTR_DAT_038672a0);
    NativeHelper_017ef284(PTR_DAT_038672a8);
    NativeHelper_017ef284(PTR_DAT_038672b0);
    NativeHelper_017ef284(PTR_DAT_038672b8);
    NativeHelper_017ef284(PTR_DAT_038672c0);
    bRam0000000003ab20c6 = 1;
    runtimeMethod = extraout_x1;
  }
  iStack_44 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  bVar4 = GameSetup_get_InDebugMode_18981a8((void *)0x0);
  puVar1 = PTR_DAT_0385db10;
  if (!bVar4) {
    return;
  }
  pGVar5 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
  if (pGVar5 != (Game_UserData *)0x0) {
    bVar4 = Game_UserData_get_EnableTask_18cab28(pGVar5,(void *)0x0);
    if (!bVar4) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_038671a8 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    uVar6 = NativeHelper_0338ee0c(*(undefined8 *)PTR_DAT_038672a8,0);
    puVar2 = PTR_DAT_03867290;
    lVar9 = *(long *)PTR_DAT_03867290;
    lVar7 = *(long *)(lVar9 + 0x38);
    if (lVar7 == 0) {
      NativeHelper_01827500(lVar9);
      lVar7 = *(long *)(lVar9 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = NativeHelper_018274a4();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = NativeHelper_018274a4();
    }
    NativeHelper_0338843c(uVar6,**(undefined8 **)(lVar7 + 0xb8),0);
    pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
    if (pGVar5 != (Game_UserData *)0x0) {
      iStack_44 = Game_UserData_get_CurrentTaskDuration_18d39b4(pGVar5,(void *)0x0);
      puVar3 = PTR_DAT_038672a0;
      uVar6 = NativeHelper_02c0d330(&iStack_44,*(undefined8 *)PTR_DAT_038672a0,0);
      uVar6 = NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_038672c0,uVar6,0);
      lVar9 = *(long *)puVar2;
      pvVar8 = self->labelStyle;
      lVar7 = *(long *)(lVar9 + 0x38);
      if (lVar7 == 0) {
        NativeHelper_01827500(lVar9);
        lVar7 = *(long *)(lVar9 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = NativeHelper_018274a4();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = NativeHelper_018274a4();
      }
      NativeHelper_03386dd0(uVar6,pvVar8,**(undefined8 **)(lVar7 + 0xb8),0);
      pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pvVar8 != (void *)0x0) {
        uVar6 = NativeHelper_02c22840((long)pvVar8 + 0x20,*(undefined8 *)puVar3,0);
        uVar6 = NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_038672b8,uVar6,0);
        lVar9 = *(long *)puVar2;
        pvVar8 = self->labelStyle;
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar7 == 0) {
          NativeHelper_01827500(lVar9);
          lVar7 = *(long *)(lVar9 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = NativeHelper_018274a4();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = NativeHelper_018274a4();
        }
        NativeHelper_03386dd0(uVar6,pvVar8,**(undefined8 **)(lVar7 + 0xb8),0);
        NativeHelper_0338729c(0x41200000,0);
        pGVar5 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pGVar5 != (Game_UserData *)0x0) {
          iStack_44 = Game_UserData_get_CurrentTaskClickNumber_18d39fc(pGVar5,(void *)0x0);
          uVar6 = NativeHelper_02c0d330(&iStack_44,*(undefined8 *)puVar3,0);
          uVar6 = NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_03867298,uVar6,0);
          lVar9 = *(long *)puVar2;
          pvVar8 = self->labelStyle;
          lVar7 = *(long *)(lVar9 + 0x38);
          if (lVar7 == 0) {
            NativeHelper_01827500(lVar9);
            lVar7 = *(long *)(lVar9 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = NativeHelper_018274a4();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = NativeHelper_018274a4();
          }
          NativeHelper_03386dd0(uVar6,pvVar8,**(undefined8 **)(lVar7 + 0xb8),0);
          pvVar8 = Singleton_get_Instance_27784f4(*(void **)puVar1);
          if (pvVar8 != (void *)0x0) {
            uVar6 = NativeHelper_02c0d330((long)pvVar8 + 0x24,*(undefined8 *)puVar3,0);
            uVar6 = NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_038672b0,uVar6,0);
            lVar9 = *(long *)puVar2;
            pvVar8 = self->labelStyle;
            lVar7 = *(long *)(lVar9 + 0x38);
            if (lVar7 == 0) {
              NativeHelper_01827500(lVar9);
              lVar7 = *(long *)(lVar9 + 0x38);
            }
            lVar7 = *(long *)(lVar7 + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = NativeHelper_018274a4();
            }
            if (*(int *)(lVar7 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = NativeHelper_018274a4();
            }
            NativeHelper_03386dd0(uVar6,pvVar8,**(undefined8 **)(lVar7 + 0xb8),0);
            NativeHelper_033884ac(0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

