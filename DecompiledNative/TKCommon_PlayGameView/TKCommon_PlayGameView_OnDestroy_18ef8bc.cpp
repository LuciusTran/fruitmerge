// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDestroy() { }
// Ghidra address: 019f38bc; ELF VA: 0x18f38bc; file offset: 0x18ef8bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_OnDestroy_18ef8bc(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  long lVar15;
  undefined8 uVar16;
  void *pvVar17;
  int iVar18;
  long lVar19;
  
  if ((bRam0000000003ab258a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0386ab68);
    NativeHelper_017ef284(PTR_DAT_038652e0);
    bRam0000000003ab258a = 1;
  }
  if (self->_adjustGameTopCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->_adjustGameTopCoroutine,(void *)0x0);
    self->_adjustGameTopCoroutine = (void *)0x0;
    NativeHelper_017ef228(&self->_adjustGameTopCoroutine,0);
  }
  if (self->mShowToolDescriptionSeq != (void *)0x0) {
    NativeHelper_01a55998(self->mShowToolDescriptionSeq,0,0);
    self->mShowToolDescriptionSeq = (void *)0x0;
    NativeHelper_017ef228(&self->mShowToolDescriptionSeq,0);
  }
  puVar3 = PTR_DAT_0385c2a0;
  if (self->mCloseToolDescriptionSeq != (void *)0x0) {
    NativeHelper_01a55998(self->mCloseToolDescriptionSeq,0,0);
    self->mCloseToolDescriptionSeq = (void *)0x0;
    NativeHelper_017ef228(&self->mCloseToolDescriptionSeq,0);
  }
  pvVar17 = self->m_img_NextPreview;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar8 = UnityEngine_object_op_Inequality_324dec8(pvVar17,(void *)0x0,(void *)0x0);
  if (bVar8) {
    NativeHelper_01a630d4(self->m_img_NextPreview,0,0);
  }
  pvVar17 = self->m_trans_Panel;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  puVar4 = PTR_DAT_0385d918;
  bVar8 = UnityEngine_object_op_Inequality_324dec8(pvVar17,(void *)0x0,(void *)0x0);
  if (bVar8) {
    NativeHelper_01a630d4(self->m_trans_Panel,0,0);
  }
  uVar9 = NativeHelper_0334f400(self,0);
  NativeHelper_01a630d4(uVar9,0,0);
  TKCommon_PlayGameView_UnbindListeners_18efae0(self,runtimeMethod_00);
  TKCommon_PlayGameView_ResetCameraPositionOnDestroy_18f0020(self,runtimeMethod_01);
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    NativeHelper_017ef404();
    lVar10 = *(long *)puVar4;
  }
  if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x7f) != '\0') {
    pvVar17 = self->m_btn_AddScore;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    bVar8 = UnityEngine_object_op_Inequality_324dec8(pvVar17,(void *)0x0,(void *)0x0);
    if (bVar8) {
      if (self->m_btn_AddScore != (void *)0x0) {
        lVar10 = *(long *)((long)self->m_btn_AddScore + 0x100);
        pvVar17 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038652e0);
        UnityEngine_Events_UnityAction_UnityAction_325f530
                  (pvVar17,self,*(void **)PTR_DAT_0386ab68,(void *)0x0);
        if (lVar10 != 0) {
          if (pvVar17 != (void *)0x0) {
            uVar16 = *(undefined8 *)((long)pvVar17 + 0x20);
            uVar9 = NativeHelper_02c58c70(pvVar17,0,0);
            puVar4 = PTR_DAT_038a7c88;
            puVar3 = PTR_DAT_038a7c80;
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 != 0) {
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
              plVar11 = (long *)NativeHelper_017ef520(*(undefined8 *)puVar3);
              NativeHelper_02568f74(plVar11,*(undefined8 *)puVar4);
              puVar7 = PTR_DAT_038a7ca8;
              puVar6 = PTR_DAT_038a7c98;
              puVar5 = PTR_DAT_038a7c90;
              puVar4 = PTR_DAT_038a7c78;
              puVar3 = PTR_DAT_03873a00;
              lVar19 = *(long *)(lVar10 + 0x18);
              if (lVar19 != 0) {
                iVar18 = 0;
                while (iVar18 < *(int *)(lVar19 + 0x18)) {
                  plVar12 = (long *)NativeHelper_0256950c(lVar19,iVar18,*(undefined8 *)puVar3);
                  if (plVar12 == (long *)0x0) goto code_r0x03362ae0;
                  uVar13 = (**(code **)(*plVar12 + 0x188))
                                     (plVar12,uVar16,uVar9,*(undefined8 *)(*plVar12 + 400));
                  if ((uVar13 & 1) != 0) {
                    if ((*(long *)(lVar10 + 0x18) == 0) ||
                       (uVar14 = NativeHelper_0256950c
                                           (*(long *)(lVar10 + 0x18),iVar18,*(undefined8 *)puVar3),
                       plVar11 == (long *)0x0)) goto code_r0x03362ae0;
                    lVar19 = plVar11[2];
                    lVar15 = *(long *)puVar4;
                    *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
                    if (lVar19 == 0) goto code_r0x03362ae0;
                    uVar2 = *(uint *)(plVar11 + 3);
                    if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                      *(uint *)(plVar11 + 3) = uVar2 + 1;
                      *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
                      NativeHelper_017ef228();
                    }
                    else {
                      NativeHelper_025697dc
                                (plVar11,uVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                      ;
                    }
                  }
                  lVar19 = *(long *)(lVar10 + 0x18);
                  iVar18 = iVar18 + 1;
                  if (lVar19 == 0) goto code_r0x03362ae0;
                }
                uVar9 = NativeHelper_017ef520(*(undefined8 *)puVar7);
                if (plVar11 != (long *)0x0) {
                  NativeHelper_02731c08(uVar9,plVar11,*(undefined8 *)(*plVar11 + 0x210),0);
                  NativeHelper_0256adb8(lVar19,uVar9,*(undefined8 *)puVar6);
                  if ((*(long *)(lVar10 + 0x10) != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
                    iVar18 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18);
                    iVar1 = *(int *)(*(long *)(lVar10 + 0x18) + 0x18);
                    lVar19 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038a7c80);
                    NativeHelper_02568fec(lVar19,iVar1 + iVar18,*(undefined8 *)PTR_DAT_038a7ca0);
                    if (lVar19 != 0) {
                      NativeHelper_025699ec
                                (lVar19,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)puVar5);
                      NativeHelper_025699ec
                                (lVar19,*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)puVar5);
                      *(long *)(lVar10 + 0x20) = lVar19;
                      NativeHelper_017ef228((long *)(lVar10 + 0x20),lVar19);
                      *(undefined1 *)(lVar10 + 0x28) = 0;
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
  }
  return;
}

