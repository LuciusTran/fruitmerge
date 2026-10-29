// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public static void OpenDailyQuest() { }
// Ghidra address: 019a6b64; ELF VA: 0x18a6b64; file offset: 0x18a2b64
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x019db294) */
/* WARNING: Removing unreachable block (ram,0x019db2a4) */
/* WARNING: Removing unreachable block (ram,0x019db2b0) */
/* WARNING: Removing unreachable block (ram,0x019db2c4) */

void HomePage_OpenDailyQuest_18a2b64(void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  void *ViewName;
  void *pvVar9;
  long *self;
  void *runtimeMethod_00;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  
  puVar3 = PTR_DAT_0385c390;
  if ((bRam0000000003ab2269 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_038687b8);
    bRam0000000003ab2269 = 1;
  }
  lVar14 = *(long *)puVar3;
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    NativeHelper_01827500(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = NativeHelper_018274a4();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar3 = PTR_DAT_038687b8;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = NativeHelper_018274a4();
  }
  puVar2 = PTR_DAT_0385c2a0;
  ViewName = *(void **)puVar3;
  uVar10 = **(undefined8 **)(lVar11 + 0xb8);
  pvVar9 = ViewName;
  if ((bRam0000000003ab24dc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a170,0,uVar10,0);
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
    pvVar9 = (void *)NativeHelper_017ef284(PTR_DAT_0386a248);
    bRam0000000003ab24dc = 1;
  }
  Game_Controller_FMViewController_Init_18d63c8(pvVar9);
  pvVar9 = Game_Controller_FMViewController_loadRes_18d6898(ViewName,runtimeMethod_00);
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar11);
  }
  bVar6 = UnityEngine_object_op_Equality_324f284(pvVar9,(void *)0x0,(void *)0x0);
  puVar5 = PTR_DAT_0386a180;
  puVar4 = PTR_DAT_03868698;
  puVar3 = PTR_DAT_0385c360;
  if (bVar6) {
    pvVar9 = (void *)NativeHelper_02a9c49c(*(undefined8 *)PTR_DAT_0386a198,ViewName,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar3);
    }
    UnityEngine_Debug_LogError_321e360(pvVar9,(void *)0x0);
    return;
  }
  pvVar15 = *(void **)(*(long *)(*(long *)PTR_DAT_0386a180 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pvVar9 = UnityEngine_object_Instantiate_1ba983c(pvVar9,pvVar15,*(void **)puVar4);
  if (pvVar9 != (void *)0x0) {
    UnityEngine_object_set_name_3252f54(pvVar9,ViewName,(void *)0x0);
    self = UnityEngine_GameObject_GetComponent_1b75510(pvVar9,*(void **)PTR_DAT_0386a188);
    puVar3 = PTR_DAT_0386a170;
    if ((self != (long *)0x0) &&
       (pvVar9 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)PTR_DAT_0386a170),
       pvVar9 != (void *)0x0)) {
      NativeHelper_0364318c(pvVar9,1,0);
      NativeHelper_036444cc(pvVar9,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
      NativeHelper_03643840(0x40a00000,pvVar9,0);
      lVar11 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) < 1) {
          iVar7 = 0;
        }
        else {
          pvVar15 = (void *)NativeHelper_0256950c
                                      (lVar11,*(int *)(lVar11 + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_0386a240);
          if ((pvVar15 == (void *)0x0) ||
             (pvVar15 = UnityEngine_Component_GetComponent_1b08498(pvVar15,*(void **)puVar3),
             pvVar15 == (void *)0x0)) goto code_r0x019db304;
          iVar7 = NativeHelper_03643b40(pvVar15,0);
          iVar7 = iVar7 + 1;
        }
        uVar8 = NativeHelper_0331acd0(*(undefined8 *)PTR_DAT_0386a248,0);
        NativeHelper_03643e20(pvVar9,uVar8,0);
        NativeHelper_03643bf4(pvVar9,iVar7,0);
        lVar11 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
        if (lVar11 != 0) {
          lVar14 = *(long *)(lVar11 + 0x10);
          lVar13 = *(long *)PTR_DAT_0386a190;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              *puVar12 = self;
              NativeHelper_017ef228(puVar12,self);
            }
            else {
              NativeHelper_025697dc
                        (lVar11,self,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = NativeHelper_02aa6b6c
                               (*(undefined8 *)PTR_DAT_0386a220,ViewName,
                                *(undefined8 *)PTR_DAT_038678e8,0);
            self[4] = lVar11;
            NativeHelper_017ef228();
            (**(code **)(*self + 0x178))(self,uVar10,*(undefined8 *)(*self + 0x180));
            (**(code **)(*self + 0x188))(self,*(undefined8 *)(*self + 400));
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

