// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GetSpriteRendererS(Transform root, List<GameObject> collectedRenderers) { }
// Ghidra address: 0198bb90; ELF VA: 0x188bb90; file offset: 0x1887b90
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_GetSpriteRendererS_1887b90(undefined8 param_1,void *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  void *x;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined1 auVar15 [12];
  long lStack_58;
  long **pplStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((bRam0000000003ab214f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867058);
    NativeHelper_017ef284(PTR_DAT_0385c3d0);
    NativeHelper_017ef284(PTR_DAT_0385ca50);
    NativeHelper_017ef284(PTR_DAT_03867378);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03866880);
    bRam0000000003ab214f = 1;
  }
  puVar3 = PTR_DAT_0385c2a0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (param_2 != (void *)0x0) {
    x = UnityEngine_Component_GetComponent_1b08498(param_2,*(void **)PTR_DAT_03867058);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar3);
    }
    bVar5 = UnityEngine_object_op_Inequality_324dec8(x,(void *)0x0,(void *)0x0);
    if (!bVar5) {
      plStack_38 = UnityEngine_Transform_GetEnumerator_325c6d4(param_2,(void *)0x0);
      puVar4 = PTR_DAT_03866880;
      puVar3 = PTR_DAT_0385ca50;
      pplStack_50 = &plStack_38;
      lStack_58 = 0;
      plStack_48 = &lStack_40;
      do {
        plVar8 = plStack_38;
        if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        lVar12 = *plStack_38;
        lVar10 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0198bd48;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)NativeHelper_018277d8(plStack_38,lVar10,0);
LAB_0198bd48:
        uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        plVar8 = plStack_38;
        if ((uVar13 & 1) == 0) {
          lVar10 = 0;
          pplVar11 = &plStack_38;
          plVar8 = &lStack_40;
          do {
            puVar3 = PTR_DAT_0385c3d0;
            plVar9 = (long *)NativeHelper_017ef408(*pplVar11,*(undefined8 *)PTR_DAT_0385c3d0);
            *plVar8 = (long)plVar9;
            if (plVar9 != (long *)0x0) {
              lVar12 = *plVar9;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                    puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_0198bea0;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)NativeHelper_018277d8(plVar9,*(long *)puVar3,0);
LAB_0198bea0:
              (*(code *)*puVar7)(plVar9,puVar7[1]);
            }
            if (lVar10 == 0) {
              return;
            }
            auVar15 = NativeHelper_017ef528(lVar10);
            if (auVar15._8_4_ != 1) {
              NativeHelper_0160db2c(&lStack_58);
              NativeHelper_018dcd9c(auVar15._0_8_);
                    /* WARNING: Subroutine does not return */
              NativeHelper_0160d8e0();
            }
            plVar8 = (long *)NativeHelper_03688650(auVar15._0_8_);
            lVar10 = *plVar8;
            lStack_58 = lVar10;
            NativeHelper_03688660();
            pplVar11 = pplStack_50;
            plVar8 = plStack_48;
          } while( true );
        }
        if (plStack_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        lVar12 = *plStack_38;
        lVar10 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar10) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0198bdb0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)NativeHelper_018277d8(plStack_38,lVar10,1);
LAB_0198bdb0:
        plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef8b0(plVar8);
          }
        }
        BuildHouse_GetSpriteRendererS_1887b90(param_1,plVar8,param_3);
      } while( true );
    }
    if ((x != (void *)0x0) && (uVar6 = NativeHelper_0334f4c8(x,0), param_3 != 0)) {
      lVar10 = *(long *)(param_3 + 0x10);
      lVar12 = *(long *)PTR_DAT_03867378;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(param_3 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(param_3 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = uVar6;
        }
        else {
          uVar2 = *(uint *)(param_3 + 0x18);
          func_0x02569dc0(param_3,uVar2 + 1,
                          *(undefined8 *)
                           (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                         + 0x70) + 0x20) + 0xc0) + 0x78));
          lVar10 = *(long *)(param_3 + 0x10);
          *(uint *)(param_3 + 0x18) = uVar2 + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar7 = uVar6;
        }
        if (iRam0000000003cd3780 != 0) {
          func_0x018dcb10(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                          ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

