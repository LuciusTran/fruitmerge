// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Close() { }
// Ghidra address: 019a7c84; ELF VA: 0x18a7c84; file offset: 0x18a3c84
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_Close_18a3c84(HomeView *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  
  puVar5 = PTR_DAT_03868810;
  puVar4 = PTR_DAT_03866c68;
  puVar3 = PTR_DAT_0385d950;
  if ((bRam0000000003ab2275 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_03868818);
    NativeHelper_017ef284(PTR_DAT_03868810);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    NativeHelper_017ef284(PTR_DAT_03868820);
    bRam0000000003ab2275 = 1;
  }
  puVar6 = PTR_DAT_03868820;
  Game_Controller_View_Close_18d5904((Game_Controller_View *)self,(void *)0x0);
  pvVar8 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar4);
  Callback_Callback_186ef98(pvVar8,self,*(void **)puVar5,(void *)0x0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  Messenger_RemoveListener_186f258(*(void **)puVar6,pvVar8,(void *)0x0);
  puVar3 = PTR_DAT_03868818;
  if (self->_btnInfoClose != (void *)0x0) {
    lVar16 = *(long *)((long)self->_btnInfoClose + 0x100);
    pvVar8 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
    UnityEngine_Events_UnityAction_UnityAction_325f530(pvVar8,self,*(void **)puVar3,(void *)0x0);
    if (lVar16 != 0) {
      if (pvVar8 != (void *)0x0) {
        uVar15 = *(undefined8 *)((long)pvVar8 + 0x20);
        uVar13 = NativeHelper_02c58c70(pvVar8,0,0);
        puVar4 = PTR_DAT_038a7c88;
        puVar3 = PTR_DAT_038a7c80;
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 != 0) {
          if ((bRam0000000003abbee6 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_038a7c90);
            NativeHelper_017ef284(PTR_DAT_038a7c78);
            NativeHelper_017ef284(PTR_DAT_038a7c98);
            NativeHelper_017ef284(PTR_DAT_038a7c88);
            NativeHelper_017ef284(PTR_DAT_038a7ca0);
            NativeHelper_017ef284(PTR_DAT_038739f8);
            NativeHelper_017ef284(PTR_DAT_03873a00);
            NativeHelper_017ef284(PTR_DAT_038a7c80);
            NativeHelper_017ef284(PTR_DAT_038a7ca8);
            bRam0000000003abbee6 = 1;
          }
          plVar9 = (long *)NativeHelper_017ef520(*(undefined8 *)puVar3);
          NativeHelper_02568f74(plVar9,*(undefined8 *)puVar4);
          puVar7 = PTR_DAT_038a7ca8;
          puVar6 = PTR_DAT_038a7c98;
          puVar5 = PTR_DAT_038a7c90;
          puVar4 = PTR_DAT_038a7c78;
          puVar3 = PTR_DAT_03873a00;
          lVar18 = *(long *)(lVar16 + 0x18);
          if (lVar18 != 0) {
            iVar17 = 0;
            while (iVar17 < *(int *)(lVar18 + 0x18)) {
              plVar10 = (long *)NativeHelper_0256950c(lVar18,iVar17,*(undefined8 *)puVar3);
              if (plVar10 == (long *)0x0) goto code_r0x03362ae0;
              uVar11 = (**(code **)(*plVar10 + 0x188))
                                 (plVar10,uVar15,uVar13,*(undefined8 *)(*plVar10 + 400));
              if ((uVar11 & 1) != 0) {
                if ((*(long *)(lVar16 + 0x18) == 0) ||
                   (uVar12 = NativeHelper_0256950c
                                       (*(long *)(lVar16 + 0x18),iVar17,*(undefined8 *)puVar3),
                   plVar9 == (long *)0x0)) goto code_r0x03362ae0;
                lVar18 = plVar9[2];
                lVar14 = *(long *)puVar4;
                *(int *)((long)plVar9 + 0x1c) = *(int *)((long)plVar9 + 0x1c) + 1;
                if (lVar18 == 0) goto code_r0x03362ae0;
                uVar2 = *(uint *)(plVar9 + 3);
                if (uVar2 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(plVar9 + 3) = uVar2 + 1;
                  *(undefined8 *)(lVar18 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
                  NativeHelper_017ef228();
                }
                else {
                  NativeHelper_025697dc
                            (plVar9,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar18 = *(long *)(lVar16 + 0x18);
              iVar17 = iVar17 + 1;
              if (lVar18 == 0) goto code_r0x03362ae0;
            }
            uVar13 = NativeHelper_017ef520(*(undefined8 *)puVar7);
            if (plVar9 != (long *)0x0) {
              NativeHelper_02731c08(uVar13,plVar9,*(undefined8 *)(*plVar9 + 0x210),0);
              NativeHelper_0256adb8(lVar18,uVar13,*(undefined8 *)puVar6);
              if ((*(long *)(lVar16 + 0x10) != 0) && (*(long *)(lVar16 + 0x18) != 0)) {
                iVar17 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18);
                iVar1 = *(int *)(*(long *)(lVar16 + 0x18) + 0x18);
                lVar18 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038a7c80);
                NativeHelper_02568fec(lVar18,iVar1 + iVar17,*(undefined8 *)PTR_DAT_038a7ca0);
                if (lVar18 != 0) {
                  NativeHelper_025699ec(lVar18,*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)puVar5)
                  ;
                  NativeHelper_025699ec(lVar18,*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)puVar5)
                  ;
                  *(long *)(lVar16 + 0x20) = lVar18;
                  NativeHelper_017ef228((long *)(lVar16 + 0x20),lVar18);
                  *(undefined1 *)(lVar16 + 0x28) = 0;
                  return;
                }
              }
            }
          }
code_r0x03362ae0:
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

