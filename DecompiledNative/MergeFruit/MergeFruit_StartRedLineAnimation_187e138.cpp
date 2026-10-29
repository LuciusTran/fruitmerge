// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartRedLineAnimation() { }
// Ghidra address: 01982138; ELF VA: 0x1882138; file offset: 0x187e138
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_StartRedLineAnimation_187e138(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *extraout_x1;
  undefined8 extraout_x1_00;
  void *pvVar9;
  void **ppvVar10;
  
  puVar2 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20de & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_03865f58);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038673e8);
    NativeHelper_017ef284(PTR_DAT_038673f0);
    NativeHelper_017ef284(PTR_DAT_038673f8);
    bRam0000000003ab20de = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar2;
  pvVar9 = self->m_RedLine;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar5,runtimeMethod);
  }
  bVar4 = UnityEngine_object_op_Equality_324f284(pvVar9,(void *)0x0,(void *)0x0);
  puVar3 = PTR_DAT_03867058;
  if (!bVar4) {
    if (self->m_RedLine == (void *)0x0) {
LAB_019823a8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    pvVar9 = UnityEngine_Component_GetComponent_1b08498(self->m_RedLine,*(void **)PTR_DAT_03867058);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      NativeHelper_017ef404(lVar5);
    }
    bVar4 = UnityEngine_object_op_Equality_324f284(pvVar9,(void *)0x0,(void *)0x0);
    if (!bVar4) {
      ppvVar10 = &self->fadeSequence;
      if (((*ppvVar10 == (void *)0x0) ||
          (uVar6 = NativeHelper_01a57520(*ppvVar10,0), (uVar6 & 1) == 0)) ||
         (uVar6 = NativeHelper_01a57380(*ppvVar10,0), (uVar6 & 1) == 0)) {
        if ((self->m_RedLine != (void *)0x0) &&
           (lVar5 = NativeHelper_0334f4c8(self->m_RedLine,0), lVar5 != 0)) {
          NativeHelper_0335236c(lVar5,1,0);
          if (*ppvVar10 != (void *)0x0) {
            NativeHelper_01a55998(*ppvVar10,0,0);
          }
          if (self->m_RedLine != (void *)0x0) {
            pvVar9 = UnityEngine_Component_GetComponent_1b08498(self->m_RedLine,*(void **)puVar3);
            if (self->m_RedLine != (void *)0x0) {
              uVar7 = NativeHelper_0334f400(self->m_RedLine,0);
              NativeHelper_01a630d4(uVar7,0,0);
              if (*(int *)(*(long *)PTR_DAT_03865f58 + 0xe4) == 0) {
                NativeHelper_017ef404();
              }
              pvVar8 = (void *)NativeHelper_01a52aec(0);
              *ppvVar10 = pvVar8;
              NativeHelper_017ef228(ppvVar10,pvVar8);
              NativeHelper_01d70168(*ppvVar10,1,*(undefined8 *)PTR_DAT_038673f8);
              uVar1 = _UNK_00a47798;
              pvVar8 = *ppvVar10;
              uVar7 = NativeHelper_01964c6c(_UNK_00a47720,_UNK_00a47798,pvVar9,0);
              NativeHelper_01a60bac(pvVar8,uVar7,0);
              pvVar8 = *ppvVar10;
              uVar7 = NativeHelper_01964c6c(_UNK_00a4754c,uVar1,pvVar9,0);
              NativeHelper_01a60bac(pvVar8,uVar7,0);
              NativeHelper_01d6fef0(*ppvVar10,0xffffffff,0,*(undefined8 *)PTR_DAT_038673f0);
              pvVar9 = *ppvVar10;
              uVar7 = *(undefined8 *)PTR_DAT_038673e8;
              if ((bRam0000000003ab3284 & 1) == 0) {
                NativeHelper_017ef284(PTR_DAT_0386d0f0,uVar7);
                bRam0000000003ab3284 = 1;
                uVar7 = extraout_x1_00;
              }
              if (pvVar9 == (void *)0x0) {
                if (cRam0000000003ab2049 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_03866698,uVar7);
                  cRam0000000003ab2049 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_03866698 + 0xb8)) {
                  NativeHelper_01a77fb4(0,0);
                }
              }
              else if (*(char *)((long)pvVar9 + 0xe8) == '\0') {
                if (cRam0000000003ab2049 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_03866698,uVar7);
                  cRam0000000003ab2049 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_03866698 + 0xb8)) {
                  NativeHelper_01a77f28(pvVar9,0);
                }
              }
              else if (*(char *)((long)pvVar9 + 0xe9) == '\0') {
                if (*(int *)(*(long *)PTR_DAT_0386d0f0 + 0xe4) == 0) {
                  NativeHelper_017ef404();
                }
                func_0x01a7c1cc(pvVar9,0);
              }
              else {
                if (cRam0000000003ab2049 == '\0') {
                  NativeHelper_017ef284(PTR_DAT_03866698,uVar7);
                  cRam0000000003ab2049 = '\x01';
                }
                if (1 < **(int **)(*(long *)PTR_DAT_03866698 + 0xb8)) {
                  func_0x01a77f6c(pvVar9,0);
                }
              }
              return;
            }
          }
        }
        goto LAB_019823a8;
      }
    }
  }
  return;
}

