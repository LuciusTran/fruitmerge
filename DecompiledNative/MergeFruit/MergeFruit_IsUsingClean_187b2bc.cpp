// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool IsUsingClean() { }
// Ghidra address: 0197f2bc; ELF VA: 0x187f2bc; file offset: 0x187b2bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit_IsUsingClean_187b2bc(MergeFruit *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  Game_UserData *self_00;
  void *extraout_x1;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  
  puVar2 = PTR_DAT_038672d0;
  if ((bRam0000000003ab20ed & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_038672d8);
    NativeHelper_017ef284(PTR_DAT_03867118);
    NativeHelper_017ef284(PTR_DAT_038672e0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_038672e8);
    NativeHelper_017ef284(PTR_DAT_038672d0);
    NativeHelper_017ef284(PTR_DAT_038672f0);
    NativeHelper_017ef284(PTR_DAT_038672f8);
    NativeHelper_017ef284(PTR_DAT_03867300);
    bRam0000000003ab20ed = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = NativeHelper_017ef520(*(undefined8 *)puVar2,runtimeMethod);
  NativeHelper_02c51f64(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = self;
    NativeHelper_017ef228((undefined8 *)(lVar5 + 0x10),self);
    iVar1 = self->_gameState;
    if (iVar1 != 1) {
LAB_0197f570:
      return iVar1 == 1;
    }
    if (self->m_GamePanel != (void *)0x0) {
      pvVar6 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                         (self->m_GamePanel,*(void **)PTR_DAT_03867118);
      plVar10 = (long *)(lVar5 + 0x18);
      *plVar10 = (long)pvVar6;
      NativeHelper_017ef228(plVar10,pvVar6);
      puVar2 = PTR_DAT_03867300;
      lVar11 = *plVar10;
      lVar7 = *(long *)PTR_DAT_03867300;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        NativeHelper_017ef404();
        lVar7 = *(long *)puVar2;
      }
      puVar9 = *(undefined8 **)(lVar7 + 0xb8);
      lVar12 = puVar9[3];
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          NativeHelper_017ef404();
          puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar13 = *puVar9;
        lVar12 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_038672e0);
        NativeHelper_02731c08(lVar12,uVar13,*(undefined8 *)PTR_DAT_038672e8,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        *plVar8 = lVar12;
        NativeHelper_017ef228(plVar8,lVar12);
      }
      lVar7 = NativeHelper_01d82dcc(lVar11,lVar12,*(undefined8 *)PTR_DAT_038672d8);
      *plVar10 = lVar7;
      NativeHelper_017ef228(plVar10,lVar7);
      lVar7 = *plVar10;
      self->_isBlock = true;
      puVar4 = PTR_DAT_038672f8;
      puVar3 = PTR_DAT_038672f0;
      puVar2 = PTR_DAT_0385c9f8;
      if (lVar7 != 0) {
        lVar11 = 0;
        while( true ) {
          uVar14 = (uint)lVar11;
          if (*(int *)(lVar7 + 0x18) <= (int)uVar14) break;
          lVar7 = NativeHelper_017ef520(*(undefined8 *)puVar4);
          NativeHelper_02c51f64(lVar7,0);
          if (lVar7 == 0) goto LAB_0197f54c;
          plVar8 = (long *)(lVar7 + 0x18);
          *plVar8 = lVar5;
          NativeHelper_017ef228(plVar8,lVar5);
          if ((*plVar8 == 0) || (lVar12 = *(long *)(*plVar8 + 0x18), lVar12 == 0))
          goto LAB_0197f54c;
          if (*(uint *)(lVar12 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          uVar13 = *(undefined8 *)puVar2;
          *(uint *)(lVar7 + 0x10) = uVar14;
          lVar12 = *(long *)(lVar12 + lVar11 * 8 + 0x20);
          uVar13 = NativeHelper_017ef520(uVar13);
          NativeHelper_02b8e36c(uVar13,lVar7,*(undefined8 *)puVar3,0);
          if (lVar12 == 0) goto LAB_0197f54c;
          pvVar6 = (void *)NativeHelper_0197aac4(lVar12,uVar13);
          UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar6,(void *)0x0);
          lVar7 = *plVar10;
          lVar11 = lVar11 + 1;
          if (lVar7 == 0) goto LAB_0197f54c;
        }
        self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        if (self_00 != (Game_UserData *)0x0) {
          Game_UserData_UseCleanTool_18cbf58(self_00,1,(void *)0x0);
          goto LAB_0197f570;
        }
      }
    }
  }
LAB_0197f54c:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

