// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 0197d9b8; ELF VA: 0x187d9b8; file offset: 0x18799b8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_Awake_18799b8(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  void *pvVar11;
  WorldMaskController *pWVar12;
  undefined8 uVar13;
  long lVar14;
  void *pvVar15;
  void *in_x3;
  void **ppvVar16;
  
  if ((bRam0000000003ab20c3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867040);
    NativeHelper_017ef284(PTR_DAT_03866c68);
    NativeHelper_017ef284(PTR_DAT_038671a0);
    NativeHelper_017ef284(PTR_DAT_038671a8);
    NativeHelper_017ef284(PTR_DAT_038671b0);
    NativeHelper_017ef284(PTR_DAT_038671b8);
    NativeHelper_017ef284(PTR_DAT_038671c0);
    NativeHelper_017ef284(PTR_DAT_03867068);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_038671c8);
    NativeHelper_017ef284(PTR_DAT_038671d0);
    NativeHelper_017ef284(PTR_DAT_038671d8);
    NativeHelper_017ef284(PTR_DAT_038671e0);
    bRam0000000003ab20c3 = 1;
  }
  if (self->m_LineTrans != (void *)0x0) {
    pvVar11 = UnityEngine_Transform_Find_325c35c
                        (self->m_LineTrans,*(void **)PTR_DAT_038671d8,(void *)0x0);
    ppvVar16 = &self->_currentIndicator;
    *ppvVar16 = pvVar11;
    NativeHelper_017ef228(ppvVar16,pvVar11);
    if ((*ppvVar16 != (void *)0x0) &&
       (pvVar11 = UnityEngine_Transform_Find_325c35c
                            (*ppvVar16,*(void **)PTR_DAT_038671e0,(void *)0x0),
       puVar10 = PTR_DAT_038671d0, puVar9 = PTR_DAT_038671c8, puVar8 = PTR_DAT_038671c0,
       puVar7 = PTR_DAT_038671b8, puVar6 = PTR_DAT_038671b0, puVar5 = PTR_DAT_03867070,
       puVar4 = PTR_DAT_03867068, puVar3 = PTR_DAT_03867040, puVar2 = PTR_DAT_03866c68,
       puVar1 = PTR_DAT_0385d950, pvVar11 != (void *)0x0)) {
      pWVar12 = UnityEngine_Component_GetComponent_1b08498(pvVar11,*(void **)PTR_DAT_038671a0);
      self->_currentWordMaskController = pWVar12;
      NativeHelper_017ef228();
      pvVar11 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2);
      pvVar15 = *(void **)puVar8;
      Callback_Callback_186ef98(pvVar11,self,pvVar15,in_x3);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      Messenger_AddListener_186f034(*(void **)puVar9,pvVar11,pvVar15);
      pvVar11 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar2);
      pvVar15 = *(void **)puVar6;
      Callback_Callback_186ef98(pvVar11,self,pvVar15,in_x3);
      Messenger_AddListener_186f034(*(void **)puVar10,pvVar11,pvVar15);
      uVar13 = NativeHelper_017ef520(*(undefined8 *)puVar3);
      NativeHelper_02015018(uVar13,self,*(undefined8 *)puVar7,0);
      NativeHelper_01ca5464(*(undefined8 *)puVar5,uVar13,*(undefined8 *)puVar4);
      pvVar11 = (void *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038671a8);
      NativeHelper_03389f38(pvVar11,0);
      if ((pvVar11 != (void *)0x0) && (lVar14 = NativeHelper_0338bbb4(pvVar11,0), lVar14 != 0)) {
        NativeHelper_0338bc04(0,0x3f800000,0x3f800000,0x3f800000,lVar14,0);
        NativeHelper_0338cfdc(pvVar11,0x1e,0);
        ppvVar16 = &self->labelStyle;
        *ppvVar16 = pvVar11;
        if (iRam0000000003cd3780 != 0) {
          func_0x018dcb10(1L << ((ulong)ppvVar16 >> 0xc & 0x3f),
                          ((ulong)ppvVar16 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

