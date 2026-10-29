// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SaveFruits() { }
// Ghidra address: 0197e718; ELF VA: 0x187e718; file offset: 0x187a718
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void MergeFruit_SaveFruits_187a718(MergeFruit *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  uint uVar20;
  Recovered_Vector3 RVar21;
  undefined1 auVar22 [12];
  
  if ((bRam0000000003ab20e5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_03867258);
    NativeHelper_017ef284(PTR_DAT_03867260);
    NativeHelper_017ef284(PTR_DAT_03867268);
    NativeHelper_017ef284(PTR_DAT_03867270);
    NativeHelper_017ef284(PTR_DAT_03867278);
    NativeHelper_017ef284(PTR_DAT_03867280);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385d9d8);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867240);
    NativeHelper_017ef284(PTR_DAT_03867288);
    bRam0000000003ab20e5 = 1;
  }
  puVar2 = PTR_DAT_0385c2a0;
  if (self->_startedFinishGame != false) {
    pvVar7 = Game_Controller_FMViewController_GetView_1b724a8
                       (*(void **)PTR_DAT_03867288,*(void **)PTR_DAT_03867258);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    bVar5 = UnityEngine_object_op_Implicit_3252d84(pvVar7,(void *)0x0);
    puVar2 = PTR_DAT_03867240;
    if (!bVar5) {
      if ((bRam0000000003ab20e6 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03867240);
        bRam0000000003ab20e6 = 1;
      }
      UnityEngine_PlayerPrefs_DeleteKey_324686c(*(void **)puVar2,(void *)0x0);
      if (pcRam0000000003abb5f0 == (code *)0x0) {
        pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
      }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003abb5f0)();
      return;
    }
  }
  puVar3 = PTR_DAT_03867280;
  puVar2 = PTR_DAT_03867278;
  if (self->m_GamePanel != (void *)0x0) {
    pvVar7 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                       (self->m_GamePanel,*(void **)PTR_DAT_03867118);
    lVar8 = NativeHelper_017ef520(*(undefined8 *)puVar3);
    NativeHelper_02568f74(lVar8,*(undefined8 *)puVar2);
    puVar3 = PTR_DAT_03867270;
    puVar2 = PTR_DAT_03867268;
    if (pvVar7 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar20 = 0;
        do {
          if (uVar1 <= uVar20) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          lVar19 = *(long *)((long)pvVar7 + (long)(int)uVar20 * 8 + 0x20);
          if ((lVar19 == 0) || (*(void **)(lVar19 + 0x28) == (void *)0x0)) goto LAB_0197ea28;
          bVar5 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c
                            (*(void **)(lVar19 + 0x28),(void *)0x0);
          if (!bVar5) {
            lVar9 = NativeHelper_017ef520(*(undefined8 *)puVar2);
            NativeHelper_02c51f64(lVar9,0);
            pvVar10 = (void *)NativeHelper_0334f400(lVar19,0);
            if (pvVar10 == (void *)0x0) goto LAB_0197ea28;
            RVar21 = UnityEngine_Transform_get_position_325a714(pvVar10,(void *)0x0);
            if (lVar9 == 0) goto LAB_0197ea28;
            *(float *)(lVar9 + 0x10) = RVar21.component0;
            *(float *)(lVar9 + 0x14) = RVar21.component1;
            *(float *)(lVar9 + 0x18) = RVar21.component2;
            *(undefined4 *)(lVar9 + 0x1c) = *(undefined4 *)(lVar19 + 0x20);
            if (lVar8 == 0) goto LAB_0197ea28;
            lVar19 = *(long *)(lVar8 + 0x10);
            lVar16 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_0197ea28;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar19 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = lVar9;
              NativeHelper_017ef228(plVar11,lVar9);
            }
            else {
              NativeHelper_025697dc
                        (lVar8,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar1 = *(uint *)((long)pvVar7 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar1);
      }
      lVar19 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867260);
      NativeHelper_02c51f64(lVar19,0);
      puVar4 = PTR_DAT_03867240;
      puVar3 = PTR_DAT_0385db10;
      puVar2 = PTR_DAT_0385d9d8;
      if (lVar19 != 0) {
        *(long *)(lVar19 + 0x10) = lVar8;
        NativeHelper_017ef228((long *)(lVar19 + 0x10),lVar8);
        pvVar7 = (void *)NativeHelper_033a96ec(lVar19,0);
        UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar4,pvVar7,(void *)0x0);
        NativeHelper_0334aa10(0);
        pvVar7 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        pvVar10 = Singleton_get_Instance_27784f4(*(void **)puVar3);
        puVar2 = PTR_DAT_0385c300;
        if ((pvVar10 != (void *)0x0) && (pvVar7 != (void *)0x0)) {
          pvVar7 = *(void **)((long)pvVar10 + 0x38);
          if ((bRam0000000003ab1e2e & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385c300,pvVar7,0);
            NativeHelper_017ef284(PTR_DAT_0385db00);
            NativeHelper_017ef284(PTR_DAT_0385db28);
            NativeHelper_017ef284(PTR_DAT_0385de10);
            bRam0000000003ab1e2e = 1;
          }
          puVar3 = PTR_DAT_0385db28;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          puVar4 = PTR_DAT_0385de10;
          puVar2 = PTR_DAT_0385db00;
          uVar6 = NativeHelper_0331bc64(0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar3);
          }
          lVar8 = NativeHelper_02be62a8(uVar6,*(undefined8 *)puVar4,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar2);
          }
          pvVar7 = LitJson_JsonMapper_ToJson_1854b54(pvVar7,(void *)0x0);
          if ((bRam0000000003ab60a8 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385c3d0,pvVar7,0);
            NativeHelper_017ef284(PTR_DAT_0386bfe8);
            bRam0000000003ab60a8 = 1;
          }
          if (lVar8 == 0) {
            NativeHelper_017ef298(PTR_DAT_03865b70);
            uVar13 = NativeHelper_017ef520();
            uVar6 = NativeHelper_017ef298(PTR_DAT_03868c58);
            NativeHelper_02b87c78(uVar13,uVar6,0);
          }
          else {
            if (*(int *)(lVar8 + 0x10) != 0) {
              plVar11 = (long *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0386bfe8);
              func_0x02bd1884(plVar11,lVar8);
              lVar8 = 0;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
              (**(code **)(*plVar11 + 0x248))(plVar11,pvVar7,*(undefined8 *)(*plVar11 + 0x250));
              do {
                if (plVar11 != (long *)0x0) {
                  lVar19 = *plVar11;
                  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0385c3d0) {
                        puVar12 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
                        goto code_r0x02bd7784;
                      }
                      uVar17 = uVar17 - 1;
                      piVar18 = piVar18 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar12 = (undefined8 *)NativeHelper_018277d8(plVar11,*(long *)PTR_DAT_0385c3d0,0)
                  ;
code_r0x02bd7784:
                  (*(code *)*puVar12)(plVar11,puVar12[1]);
                }
                if (lVar8 == 0) {
                  return;
                }
                auVar22 = NativeHelper_017ef528(lVar8);
                if (auVar22._8_4_ != 1) {
                  NativeHelper_0160da3c(&stack0xffffffffffffffc8);
                  NativeHelper_018dcd9c(auVar22._0_8_);
                    /* WARNING: Subroutine does not return */
                  NativeHelper_0160d8e0();
                }
                plVar15 = (long *)NativeHelper_03688650(auVar22._0_8_);
                lVar8 = *plVar15;
                NativeHelper_03688660();
              } while( true );
            }
            NativeHelper_017ef298(PTR_DAT_03865620);
            uVar13 = NativeHelper_017ef520();
            uVar6 = NativeHelper_017ef298(PTR_DAT_0387ef40);
            uVar14 = NativeHelper_017ef298(PTR_DAT_03868c58);
            NativeHelper_02b88158(uVar13,uVar6,uVar14,0);
          }
          uVar6 = NativeHelper_017ef298(PTR_DAT_0387f2f0);
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef3f4(uVar13,uVar6);
        }
      }
    }
  }
LAB_0197ea28:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

