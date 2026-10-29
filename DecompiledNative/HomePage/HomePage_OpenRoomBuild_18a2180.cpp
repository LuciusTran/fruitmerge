// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void OpenRoomBuild(bool fromGame = false) { }
// Ghidra address: 019a6180; ELF VA: 0x18a6180; file offset: 0x18a2180
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019db294) */
/* WARNING: Removing unreachable block (ram,0x019db2a4) */
/* WARNING: Removing unreachable block (ram,0x019db2b0) */
/* WARNING: Removing unreachable block (ram,0x019db2c4) */

void HomePage_OpenRoomBuild_18a2180(bool fromGame,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  void *ViewName;
  undefined8 uVar12;
  void *pvVar13;
  void *extraout_x1;
  void *runtimeMethod_00;
  undefined8 *puVar14;
  long lVar15;
  void *pvVar16;
  
  if ((bRam0000000003ab226a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_03867a90);
    bRam0000000003ab226a = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_03867a90;
  if (fromGame) {
    plVar9 = (long *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_0385c420,1);
    lVar10 = NativeHelper_017ef40c
                       (*(undefined8 *)(PTR_DAT_0385c2d8 + 0x28),&stack0xffffffffffffffdc);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    if ((lVar10 != 0) &&
       (lVar11 = NativeHelper_017ef408(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar12 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef3f4(uVar12,0);
    }
    if ((int)plVar9[3] != 0) {
      plVar9[4] = lVar10;
      NativeHelper_017ef228(plVar9 + 4,lVar10);
      Game_Controller_FMViewController_ShowView_18d6f2c(*(void **)puVar3,true,plVar9,(void *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef538();
  }
  lVar11 = *(long *)PTR_DAT_0385c390;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    NativeHelper_01827500(lVar11,runtimeMethod);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = NativeHelper_018274a4();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = NativeHelper_018274a4();
  }
  puVar2 = PTR_DAT_0385c2a0;
  ViewName = *(void **)puVar3;
  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
  pvVar13 = ViewName;
  if ((bRam0000000003ab24dc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a170,0,uVar12,0);
    NativeHelper_017ef284(PTR_DAT_0385c360);
    NativeHelper_017ef284(PTR_DAT_0386a180);
    NativeHelper_017ef284(PTR_DAT_0386a188);
    NativeHelper_017ef284(PTR_DAT_0386a190);
    NativeHelper_017ef284(PTR_DAT_0386a208);
    NativeHelper_017ef284(PTR_DAT_0386a240);
    NativeHelper_017ef284(PTR_DAT_03868698);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386a198);
    NativeHelper_017ef284(PTR_DAT_038678e8);
    NativeHelper_017ef284(PTR_DAT_0386a220);
    pvVar13 = (void *)NativeHelper_017ef284(PTR_DAT_0386a248);
    bRam0000000003ab24dc = 1;
  }
  Game_Controller_FMViewController_Init_18d63c8(pvVar13);
  pvVar13 = Game_Controller_FMViewController_loadRes_18d6898(ViewName,runtimeMethod_00);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar10);
  }
  bVar6 = UnityEngine_object_op_Equality_324f284(pvVar13,(void *)0x0,(void *)0x0);
  puVar5 = PTR_DAT_0386a180;
  puVar4 = PTR_DAT_03868698;
  puVar3 = PTR_DAT_0385c360;
  if (bVar6) {
    pvVar13 = (void *)NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_0386a198,ViewName,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar3);
    }
    UnityEngine_Debug_LogError_321e360(pvVar13,(void *)0x0);
    return;
  }
  pvVar16 = *(void **)(*(long *)(*(long *)PTR_DAT_0386a180 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pvVar13 = UnityEngine_object_Instantiate_1ba983c(pvVar13,pvVar16,*(void **)puVar4);
  if (pvVar13 != (void *)0x0) {
    UnityEngine_object_set_name_3252f54(pvVar13,ViewName,(void *)0x0);
    plVar9 = UnityEngine_GameObject_GetComponent_1b75510(pvVar13,*(void **)PTR_DAT_0386a188);
    puVar3 = PTR_DAT_0386a170;
    if ((plVar9 != (long *)0x0) &&
       (pvVar13 = UnityEngine_Component_GetComponent_1b08498(plVar9,*(void **)PTR_DAT_0386a170),
       pvVar13 != (void *)0x0)) {
      NativeHelper_0364318c(pvVar13,1,0);
      NativeHelper_036444cc(pvVar13,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
      NativeHelper_03643840(0x40a00000,pvVar13,0);
      lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x18) < 1) {
          iVar7 = 0;
        }
        else {
          pvVar16 = (void *)NativeHelper_0256950c
                                      (lVar10,*(int *)(lVar10 + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_0386a240);
          if ((pvVar16 == (void *)0x0) ||
             (pvVar16 = UnityEngine_Component_GetComponent_1b08498(pvVar16,*(void **)puVar3),
             pvVar16 == (void *)0x0)) goto code_r0x019db304;
          iVar7 = NativeHelper_03643b40(pvVar16,0);
          iVar7 = iVar7 + 1;
        }
        uVar8 = NativeHelper_0331acd0(*(undefined8 *)PTR_DAT_0386a248,0);
        NativeHelper_03643e20(pvVar13,uVar8,0);
        NativeHelper_03643bf4(pvVar13,iVar7,0);
        lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)PTR_DAT_0386a190;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              puVar14 = (undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *puVar14 = plVar9;
              NativeHelper_017ef228(puVar14,plVar9);
            }
            else {
              NativeHelper_025697dc
                        (lVar10,plVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = NativeHelper_02aa6b6c
                               (*(undefined8 *)PTR_DAT_0386a220,ViewName,
                                *(undefined8 *)PTR_DAT_038678e8,0);
            plVar9[4] = lVar10;
            NativeHelper_017ef228();
            (**(code **)(*plVar9 + 0x178))(plVar9,uVar12,*(undefined8 *)(*plVar9 + 0x180));
            (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
            return;
          }
        }
      }
    }
  }
code_r0x019db304:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

