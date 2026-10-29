// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Color GetCurrentSkinMergeColor(int grade) { }
// Ghidra address: 019d5b80; ELF VA: 0x18d5b80; file offset: 0x18d1b80
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Color
Game_UserData_GetCurrentSkinMergeColor_18d1b80(Game_UserData *self,int grade,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  void *extraout_x1;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  Recovered_Color RVar11;
  Recovered_Color RVar12;
  Recovered_Color RVar13;
  Recovered_Color RVar14;
  Recovered_Color RVar15;
  Recovered_Color RVar16;
  Recovered_Color RVar17;
  
  pvVar4 = (void *)(ulong)(uint)grade;
  if ((bRam0000000003ab248b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869ec0);
    NativeHelper_017ef284(PTR_DAT_0385dc28);
    NativeHelper_017ef284(PTR_DAT_03867078);
    NativeHelper_017ef284(PTR_DAT_03869ed0);
    NativeHelper_017ef284(PTR_DAT_03867080);
    NativeHelper_017ef284(PTR_DAT_03869ee0);
    NativeHelper_017ef284(PTR_DAT_03869ee8);
    bRam0000000003ab248b = 1;
    pvVar4 = extraout_x1;
  }
  pvVar4 = Game_UserData_GetUsingSkin_18cf374(self,pvVar4);
  uVar3 = _PrivateImplementationDetails__ComputeStringHash_186cf80(pvVar4,(void *)0x0);
  if (uVar3 < 0x9b6bb9e1) {
    if (uVar3 == 0x9b6bb9e0) {
      uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03867078,0);
      puVar2 = PTR_DAT_03869ef8;
      if ((uVar5 & 1) != 0) {
        if ((bRam0000000003ab248d & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_03869ef8);
          bRam0000000003ab248d = 1;
        }
        lVar6 = *(long *)puVar2;
        iVar1 = *(int *)(lVar6 + 0xe4);
        if (grade < 6) {
          if (grade < 3) {
            if ((grade != 1) && (grade == 2)) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xc0);
              puVar8 = (undefined4 *)(lVar6 + 0xc4);
              puVar9 = (undefined4 *)(lVar6 + 200);
              puVar10 = (undefined4 *)(lVar6 + 0xcc);
              goto LAB_019d6248;
            }
          }
          else {
            if (grade == 3) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xd0);
              puVar8 = (undefined4 *)(lVar6 + 0xd4);
              puVar9 = (undefined4 *)(lVar6 + 0xd8);
              puVar10 = (undefined4 *)(lVar6 + 0xdc);
              goto LAB_019d6248;
            }
            if (grade == 4) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xe0);
              puVar8 = (undefined4 *)(lVar6 + 0xe4);
              puVar9 = (undefined4 *)(lVar6 + 0xe8);
              puVar10 = (undefined4 *)(lVar6 + 0xec);
              goto LAB_019d6248;
            }
            if (grade == 5) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xf0);
              puVar8 = (undefined4 *)(lVar6 + 0xf4);
              puVar9 = (undefined4 *)(lVar6 + 0xf8);
              puVar10 = (undefined4 *)(lVar6 + 0xfc);
              goto LAB_019d6248;
            }
          }
        }
        else if (grade < 9) {
          if (grade == 6) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x100);
            puVar8 = (undefined4 *)(lVar6 + 0x104);
            puVar9 = (undefined4 *)(lVar6 + 0x108);
            puVar10 = (undefined4 *)(lVar6 + 0x10c);
            goto LAB_019d6248;
          }
          if (grade == 7) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x110);
            puVar8 = (undefined4 *)(lVar6 + 0x114);
            puVar9 = (undefined4 *)(lVar6 + 0x118);
            puVar10 = (undefined4 *)(lVar6 + 0x11c);
            goto LAB_019d6248;
          }
          if (grade == 8) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x120);
            puVar8 = (undefined4 *)(lVar6 + 0x124);
            puVar9 = (undefined4 *)(lVar6 + 0x128);
            puVar10 = (undefined4 *)(lVar6 + 300);
            goto LAB_019d6248;
          }
        }
        else {
          if (grade == 9) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x130);
            puVar8 = (undefined4 *)(lVar6 + 0x134);
            puVar9 = (undefined4 *)(lVar6 + 0x138);
            puVar10 = (undefined4 *)(lVar6 + 0x13c);
            goto LAB_019d6248;
          }
          if (grade == 10) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x140);
            puVar8 = (undefined4 *)(lVar6 + 0x144);
            puVar9 = (undefined4 *)(lVar6 + 0x148);
            puVar10 = (undefined4 *)(lVar6 + 0x14c);
            goto LAB_019d6248;
          }
          if (grade == 0xb) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x150);
            puVar8 = (undefined4 *)(lVar6 + 0x154);
            puVar9 = (undefined4 *)(lVar6 + 0x158);
            puVar10 = (undefined4 *)(lVar6 + 0x15c);
            goto LAB_019d6248;
          }
        }
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xb0);
        puVar8 = (undefined4 *)(lVar6 + 0xb4);
        puVar9 = (undefined4 *)(lVar6 + 0xb8);
        puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d6248:
        RVar12.component0 = *puVar7;
        RVar12.component1 = *puVar8;
        RVar12.component2 = *puVar9;
        RVar12.component3 = *puVar10;
        return RVar12;
      }
    }
    else if (uVar3 == 0x13d31cb2) {
      uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ee0,0);
      puVar2 = PTR_DAT_03869f08;
      if ((uVar5 & 1) != 0) {
        if ((bRam0000000003ab248f & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_03869f08);
          bRam0000000003ab248f = 1;
        }
        lVar6 = *(long *)puVar2;
        iVar1 = *(int *)(lVar6 + 0xe4);
        if (grade < 6) {
          if (grade < 3) {
            if ((grade != 1) && (grade == 2)) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xc0);
              puVar8 = (undefined4 *)(lVar6 + 0xc4);
              puVar9 = (undefined4 *)(lVar6 + 200);
              puVar10 = (undefined4 *)(lVar6 + 0xcc);
              goto LAB_019d66e8;
            }
          }
          else {
            if (grade == 3) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xd0);
              puVar8 = (undefined4 *)(lVar6 + 0xd4);
              puVar9 = (undefined4 *)(lVar6 + 0xd8);
              puVar10 = (undefined4 *)(lVar6 + 0xdc);
              goto LAB_019d66e8;
            }
            if (grade == 4) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xe0);
              puVar8 = (undefined4 *)(lVar6 + 0xe4);
              puVar9 = (undefined4 *)(lVar6 + 0xe8);
              puVar10 = (undefined4 *)(lVar6 + 0xec);
              goto LAB_019d66e8;
            }
            if (grade == 5) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xf0);
              puVar8 = (undefined4 *)(lVar6 + 0xf4);
              puVar9 = (undefined4 *)(lVar6 + 0xf8);
              puVar10 = (undefined4 *)(lVar6 + 0xfc);
              goto LAB_019d66e8;
            }
          }
        }
        else if (grade < 9) {
          if (grade == 6) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x100);
            puVar8 = (undefined4 *)(lVar6 + 0x104);
            puVar9 = (undefined4 *)(lVar6 + 0x108);
            puVar10 = (undefined4 *)(lVar6 + 0x10c);
            goto LAB_019d66e8;
          }
          if (grade == 7) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x110);
            puVar8 = (undefined4 *)(lVar6 + 0x114);
            puVar9 = (undefined4 *)(lVar6 + 0x118);
            puVar10 = (undefined4 *)(lVar6 + 0x11c);
            goto LAB_019d66e8;
          }
          if (grade == 8) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x120);
            puVar8 = (undefined4 *)(lVar6 + 0x124);
            puVar9 = (undefined4 *)(lVar6 + 0x128);
            puVar10 = (undefined4 *)(lVar6 + 300);
            goto LAB_019d66e8;
          }
        }
        else {
          if (grade == 9) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x130);
            puVar8 = (undefined4 *)(lVar6 + 0x134);
            puVar9 = (undefined4 *)(lVar6 + 0x138);
            puVar10 = (undefined4 *)(lVar6 + 0x13c);
            goto LAB_019d66e8;
          }
          if (grade == 10) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x140);
            puVar8 = (undefined4 *)(lVar6 + 0x144);
            puVar9 = (undefined4 *)(lVar6 + 0x148);
            puVar10 = (undefined4 *)(lVar6 + 0x14c);
            goto LAB_019d66e8;
          }
          if (grade == 0xb) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x150);
            puVar8 = (undefined4 *)(lVar6 + 0x154);
            puVar9 = (undefined4 *)(lVar6 + 0x158);
            puVar10 = (undefined4 *)(lVar6 + 0x15c);
            goto LAB_019d66e8;
          }
        }
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xb0);
        puVar8 = (undefined4 *)(lVar6 + 0xb4);
        puVar9 = (undefined4 *)(lVar6 + 0xb8);
        puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d66e8:
        RVar14.component0 = *puVar7;
        RVar14.component1 = *puVar8;
        RVar14.component2 = *puVar9;
        RVar14.component3 = *puVar10;
        return RVar14;
      }
    }
    else if ((uVar3 == 0x71ec7113) &&
            (uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ee8,0),
            puVar2 = PTR_DAT_03869f10, (uVar5 & 1) != 0)) {
      if ((bRam0000000003ab2490 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03869f10);
        bRam0000000003ab2490 = 1;
      }
      lVar6 = *(long *)puVar2;
      iVar1 = *(int *)(lVar6 + 0xe4);
      if (grade < 6) {
        if (grade < 3) {
          if ((grade != 1) && (grade == 2)) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xc0);
            puVar8 = (undefined4 *)(lVar6 + 0xc4);
            puVar9 = (undefined4 *)(lVar6 + 200);
            puVar10 = (undefined4 *)(lVar6 + 0xcc);
            goto LAB_019d6938;
          }
        }
        else {
          if (grade == 3) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xd0);
            puVar8 = (undefined4 *)(lVar6 + 0xd4);
            puVar9 = (undefined4 *)(lVar6 + 0xd8);
            puVar10 = (undefined4 *)(lVar6 + 0xdc);
            goto LAB_019d6938;
          }
          if (grade == 4) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xe0);
            puVar8 = (undefined4 *)(lVar6 + 0xe4);
            puVar9 = (undefined4 *)(lVar6 + 0xe8);
            puVar10 = (undefined4 *)(lVar6 + 0xec);
            goto LAB_019d6938;
          }
          if (grade == 5) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xf0);
            puVar8 = (undefined4 *)(lVar6 + 0xf4);
            puVar9 = (undefined4 *)(lVar6 + 0xf8);
            puVar10 = (undefined4 *)(lVar6 + 0xfc);
            goto LAB_019d6938;
          }
        }
      }
      else if (grade < 9) {
        if (grade == 6) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x100);
          puVar8 = (undefined4 *)(lVar6 + 0x104);
          puVar9 = (undefined4 *)(lVar6 + 0x108);
          puVar10 = (undefined4 *)(lVar6 + 0x10c);
          goto LAB_019d6938;
        }
        if (grade == 7) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x110);
          puVar8 = (undefined4 *)(lVar6 + 0x114);
          puVar9 = (undefined4 *)(lVar6 + 0x118);
          puVar10 = (undefined4 *)(lVar6 + 0x11c);
          goto LAB_019d6938;
        }
        if (grade == 8) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x120);
          puVar8 = (undefined4 *)(lVar6 + 0x124);
          puVar9 = (undefined4 *)(lVar6 + 0x128);
          puVar10 = (undefined4 *)(lVar6 + 300);
          goto LAB_019d6938;
        }
      }
      else {
        if (grade == 9) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x130);
          puVar8 = (undefined4 *)(lVar6 + 0x134);
          puVar9 = (undefined4 *)(lVar6 + 0x138);
          puVar10 = (undefined4 *)(lVar6 + 0x13c);
          goto LAB_019d6938;
        }
        if (grade == 10) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x140);
          puVar8 = (undefined4 *)(lVar6 + 0x144);
          puVar9 = (undefined4 *)(lVar6 + 0x148);
          puVar10 = (undefined4 *)(lVar6 + 0x14c);
          goto LAB_019d6938;
        }
        if (grade == 0xb) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x150);
          puVar8 = (undefined4 *)(lVar6 + 0x154);
          puVar9 = (undefined4 *)(lVar6 + 0x158);
          puVar10 = (undefined4 *)(lVar6 + 0x15c);
          goto LAB_019d6938;
        }
      }
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0xb0);
      puVar8 = (undefined4 *)(lVar6 + 0xb4);
      puVar9 = (undefined4 *)(lVar6 + 0xb8);
      puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d6938:
      RVar15.component0 = *puVar7;
      RVar15.component1 = *puVar8;
      RVar15.component2 = *puVar9;
      RVar15.component3 = *puVar10;
      return RVar15;
    }
  }
  else if (uVar3 < 0xa9a8f79b) {
    if (uVar3 == 0x9ef42ad4) {
      uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ed0,0);
      puVar2 = PTR_DAT_03869f20;
      if ((uVar5 & 1) != 0) {
        if ((bRam0000000003ab2492 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_03869f20);
          bRam0000000003ab2492 = 1;
        }
        lVar6 = *(long *)puVar2;
        iVar1 = *(int *)(lVar6 + 0xe4);
        if (grade < 6) {
          if (grade < 3) {
            if ((grade != 1) && (grade == 2)) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xc0);
              puVar8 = (undefined4 *)(lVar6 + 0xc4);
              puVar9 = (undefined4 *)(lVar6 + 200);
              puVar10 = (undefined4 *)(lVar6 + 0xcc);
              goto LAB_019d6dd8;
            }
          }
          else {
            if (grade == 3) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xd0);
              puVar8 = (undefined4 *)(lVar6 + 0xd4);
              puVar9 = (undefined4 *)(lVar6 + 0xd8);
              puVar10 = (undefined4 *)(lVar6 + 0xdc);
              goto LAB_019d6dd8;
            }
            if (grade == 4) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xe0);
              puVar8 = (undefined4 *)(lVar6 + 0xe4);
              puVar9 = (undefined4 *)(lVar6 + 0xe8);
              puVar10 = (undefined4 *)(lVar6 + 0xec);
              goto LAB_019d6dd8;
            }
            if (grade == 5) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar7 = (undefined4 *)(lVar6 + 0xf0);
              puVar8 = (undefined4 *)(lVar6 + 0xf4);
              puVar9 = (undefined4 *)(lVar6 + 0xf8);
              puVar10 = (undefined4 *)(lVar6 + 0xfc);
              goto LAB_019d6dd8;
            }
          }
        }
        else if (grade < 9) {
          if (grade == 6) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x100);
            puVar8 = (undefined4 *)(lVar6 + 0x104);
            puVar9 = (undefined4 *)(lVar6 + 0x108);
            puVar10 = (undefined4 *)(lVar6 + 0x10c);
            goto LAB_019d6dd8;
          }
          if (grade == 7) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x110);
            puVar8 = (undefined4 *)(lVar6 + 0x114);
            puVar9 = (undefined4 *)(lVar6 + 0x118);
            puVar10 = (undefined4 *)(lVar6 + 0x11c);
            goto LAB_019d6dd8;
          }
          if (grade == 8) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x120);
            puVar8 = (undefined4 *)(lVar6 + 0x124);
            puVar9 = (undefined4 *)(lVar6 + 0x128);
            puVar10 = (undefined4 *)(lVar6 + 300);
            goto LAB_019d6dd8;
          }
        }
        else {
          if (grade == 9) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x130);
            puVar8 = (undefined4 *)(lVar6 + 0x134);
            puVar9 = (undefined4 *)(lVar6 + 0x138);
            puVar10 = (undefined4 *)(lVar6 + 0x13c);
            goto LAB_019d6dd8;
          }
          if (grade == 10) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x140);
            puVar8 = (undefined4 *)(lVar6 + 0x144);
            puVar9 = (undefined4 *)(lVar6 + 0x148);
            puVar10 = (undefined4 *)(lVar6 + 0x14c);
            goto LAB_019d6dd8;
          }
          if (grade == 0xb) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0x150);
            puVar8 = (undefined4 *)(lVar6 + 0x154);
            puVar9 = (undefined4 *)(lVar6 + 0x158);
            puVar10 = (undefined4 *)(lVar6 + 0x15c);
            goto LAB_019d6dd8;
          }
        }
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xb0);
        puVar8 = (undefined4 *)(lVar6 + 0xb4);
        puVar9 = (undefined4 *)(lVar6 + 0xb8);
        puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d6dd8:
        RVar17.component0 = *puVar7;
        RVar17.component1 = *puVar8;
        RVar17.component2 = *puVar9;
        RVar17.component3 = *puVar10;
        return RVar17;
      }
    }
    else if ((uVar3 == 0xa9a8f79a) &&
            (uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03867080,0),
            puVar2 = PTR_DAT_03869f00, (uVar5 & 1) != 0)) {
      if ((bRam0000000003ab248e & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03869f00);
        bRam0000000003ab248e = 1;
      }
      lVar6 = *(long *)puVar2;
      iVar1 = *(int *)(lVar6 + 0xe4);
      if (grade < 6) {
        if (grade < 3) {
          if ((grade != 1) && (grade == 2)) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xc0);
            puVar8 = (undefined4 *)(lVar6 + 0xc4);
            puVar9 = (undefined4 *)(lVar6 + 200);
            puVar10 = (undefined4 *)(lVar6 + 0xcc);
            goto LAB_019d6498;
          }
        }
        else {
          if (grade == 3) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xd0);
            puVar8 = (undefined4 *)(lVar6 + 0xd4);
            puVar9 = (undefined4 *)(lVar6 + 0xd8);
            puVar10 = (undefined4 *)(lVar6 + 0xdc);
            goto LAB_019d6498;
          }
          if (grade == 4) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xe0);
            puVar8 = (undefined4 *)(lVar6 + 0xe4);
            puVar9 = (undefined4 *)(lVar6 + 0xe8);
            puVar10 = (undefined4 *)(lVar6 + 0xec);
            goto LAB_019d6498;
          }
          if (grade == 5) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xf0);
            puVar8 = (undefined4 *)(lVar6 + 0xf4);
            puVar9 = (undefined4 *)(lVar6 + 0xf8);
            puVar10 = (undefined4 *)(lVar6 + 0xfc);
            goto LAB_019d6498;
          }
        }
      }
      else if (grade < 9) {
        if (grade == 6) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x100);
          puVar8 = (undefined4 *)(lVar6 + 0x104);
          puVar9 = (undefined4 *)(lVar6 + 0x108);
          puVar10 = (undefined4 *)(lVar6 + 0x10c);
          goto LAB_019d6498;
        }
        if (grade == 7) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x110);
          puVar8 = (undefined4 *)(lVar6 + 0x114);
          puVar9 = (undefined4 *)(lVar6 + 0x118);
          puVar10 = (undefined4 *)(lVar6 + 0x11c);
          goto LAB_019d6498;
        }
        if (grade == 8) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x120);
          puVar8 = (undefined4 *)(lVar6 + 0x124);
          puVar9 = (undefined4 *)(lVar6 + 0x128);
          puVar10 = (undefined4 *)(lVar6 + 300);
          goto LAB_019d6498;
        }
      }
      else {
        if (grade == 9) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x130);
          puVar8 = (undefined4 *)(lVar6 + 0x134);
          puVar9 = (undefined4 *)(lVar6 + 0x138);
          puVar10 = (undefined4 *)(lVar6 + 0x13c);
          goto LAB_019d6498;
        }
        if (grade == 10) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x140);
          puVar8 = (undefined4 *)(lVar6 + 0x144);
          puVar9 = (undefined4 *)(lVar6 + 0x148);
          puVar10 = (undefined4 *)(lVar6 + 0x14c);
          goto LAB_019d6498;
        }
        if (grade == 0xb) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x150);
          puVar8 = (undefined4 *)(lVar6 + 0x154);
          puVar9 = (undefined4 *)(lVar6 + 0x158);
          puVar10 = (undefined4 *)(lVar6 + 0x15c);
          goto LAB_019d6498;
        }
      }
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0xb0);
      puVar8 = (undefined4 *)(lVar6 + 0xb4);
      puVar9 = (undefined4 *)(lVar6 + 0xb8);
      puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d6498:
      RVar13.component0 = *puVar7;
      RVar13.component1 = *puVar8;
      RVar13.component2 = *puVar9;
      RVar13.component3 = *puVar10;
      return RVar13;
    }
  }
  else if (uVar3 == 0xf764c6af) {
    uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ec0,0);
    puVar2 = PTR_DAT_03869f18;
    if ((uVar5 & 1) != 0) {
      if ((bRam0000000003ab2491 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03869f18);
        bRam0000000003ab2491 = 1;
      }
      lVar6 = *(long *)puVar2;
      iVar1 = *(int *)(lVar6 + 0xe4);
      if (grade < 6) {
        if (grade < 3) {
          if ((grade != 1) && (grade == 2)) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xc0);
            puVar8 = (undefined4 *)(lVar6 + 0xc4);
            puVar9 = (undefined4 *)(lVar6 + 200);
            puVar10 = (undefined4 *)(lVar6 + 0xcc);
            goto LAB_019d6b88;
          }
        }
        else {
          if (grade == 3) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xd0);
            puVar8 = (undefined4 *)(lVar6 + 0xd4);
            puVar9 = (undefined4 *)(lVar6 + 0xd8);
            puVar10 = (undefined4 *)(lVar6 + 0xdc);
            goto LAB_019d6b88;
          }
          if (grade == 4) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xe0);
            puVar8 = (undefined4 *)(lVar6 + 0xe4);
            puVar9 = (undefined4 *)(lVar6 + 0xe8);
            puVar10 = (undefined4 *)(lVar6 + 0xec);
            goto LAB_019d6b88;
          }
          if (grade == 5) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar7 = (undefined4 *)(lVar6 + 0xf0);
            puVar8 = (undefined4 *)(lVar6 + 0xf4);
            puVar9 = (undefined4 *)(lVar6 + 0xf8);
            puVar10 = (undefined4 *)(lVar6 + 0xfc);
            goto LAB_019d6b88;
          }
        }
      }
      else if (grade < 9) {
        if (grade == 6) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x100);
          puVar8 = (undefined4 *)(lVar6 + 0x104);
          puVar9 = (undefined4 *)(lVar6 + 0x108);
          puVar10 = (undefined4 *)(lVar6 + 0x10c);
          goto LAB_019d6b88;
        }
        if (grade == 7) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x110);
          puVar8 = (undefined4 *)(lVar6 + 0x114);
          puVar9 = (undefined4 *)(lVar6 + 0x118);
          puVar10 = (undefined4 *)(lVar6 + 0x11c);
          goto LAB_019d6b88;
        }
        if (grade == 8) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x120);
          puVar8 = (undefined4 *)(lVar6 + 0x124);
          puVar9 = (undefined4 *)(lVar6 + 0x128);
          puVar10 = (undefined4 *)(lVar6 + 300);
          goto LAB_019d6b88;
        }
      }
      else {
        if (grade == 9) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x130);
          puVar8 = (undefined4 *)(lVar6 + 0x134);
          puVar9 = (undefined4 *)(lVar6 + 0x138);
          puVar10 = (undefined4 *)(lVar6 + 0x13c);
          goto LAB_019d6b88;
        }
        if (grade == 10) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x140);
          puVar8 = (undefined4 *)(lVar6 + 0x144);
          puVar9 = (undefined4 *)(lVar6 + 0x148);
          puVar10 = (undefined4 *)(lVar6 + 0x14c);
          goto LAB_019d6b88;
        }
        if (grade == 0xb) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar7 = (undefined4 *)(lVar6 + 0x150);
          puVar8 = (undefined4 *)(lVar6 + 0x154);
          puVar9 = (undefined4 *)(lVar6 + 0x158);
          puVar10 = (undefined4 *)(lVar6 + 0x15c);
          goto LAB_019d6b88;
        }
      }
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0xb0);
      puVar8 = (undefined4 *)(lVar6 + 0xb4);
      puVar9 = (undefined4 *)(lVar6 + 0xb8);
      puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d6b88:
      RVar16.component0 = *puVar7;
      RVar16.component1 = *puVar8;
      RVar16.component2 = *puVar9;
      RVar16.component3 = *puVar10;
      return RVar16;
    }
  }
  else if (uVar3 == 0xffd188d7) {
    NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_0385dc28,0);
  }
  puVar2 = PTR_DAT_03869ef0;
  if ((bRam0000000003ab248c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869ef0);
    bRam0000000003ab248c = 1;
  }
  lVar6 = *(long *)puVar2;
  iVar1 = *(int *)(lVar6 + 0xe4);
  if (grade < 6) {
    if (grade < 3) {
      if ((grade != 1) && (grade == 2)) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xc0);
        puVar8 = (undefined4 *)(lVar6 + 0xc4);
        puVar9 = (undefined4 *)(lVar6 + 200);
        puVar10 = (undefined4 *)(lVar6 + 0xcc);
        goto LAB_019d5ff8;
      }
    }
    else {
      if (grade == 3) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xd0);
        puVar8 = (undefined4 *)(lVar6 + 0xd4);
        puVar9 = (undefined4 *)(lVar6 + 0xd8);
        puVar10 = (undefined4 *)(lVar6 + 0xdc);
        goto LAB_019d5ff8;
      }
      if (grade == 4) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xe0);
        puVar8 = (undefined4 *)(lVar6 + 0xe4);
        puVar9 = (undefined4 *)(lVar6 + 0xe8);
        puVar10 = (undefined4 *)(lVar6 + 0xec);
        goto LAB_019d5ff8;
      }
      if (grade == 5) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar7 = (undefined4 *)(lVar6 + 0xf0);
        puVar8 = (undefined4 *)(lVar6 + 0xf4);
        puVar9 = (undefined4 *)(lVar6 + 0xf8);
        puVar10 = (undefined4 *)(lVar6 + 0xfc);
        goto LAB_019d5ff8;
      }
    }
  }
  else if (grade < 9) {
    if (grade == 6) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0x100);
      puVar8 = (undefined4 *)(lVar6 + 0x104);
      puVar9 = (undefined4 *)(lVar6 + 0x108);
      puVar10 = (undefined4 *)(lVar6 + 0x10c);
      goto LAB_019d5ff8;
    }
    if (grade == 7) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0x110);
      puVar8 = (undefined4 *)(lVar6 + 0x114);
      puVar9 = (undefined4 *)(lVar6 + 0x118);
      puVar10 = (undefined4 *)(lVar6 + 0x11c);
      goto LAB_019d5ff8;
    }
    if (grade == 8) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0x120);
      puVar8 = (undefined4 *)(lVar6 + 0x124);
      puVar9 = (undefined4 *)(lVar6 + 0x128);
      puVar10 = (undefined4 *)(lVar6 + 300);
      goto LAB_019d5ff8;
    }
  }
  else {
    if (grade == 9) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0x130);
      puVar8 = (undefined4 *)(lVar6 + 0x134);
      puVar9 = (undefined4 *)(lVar6 + 0x138);
      puVar10 = (undefined4 *)(lVar6 + 0x13c);
      goto LAB_019d5ff8;
    }
    if (grade == 10) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0x140);
      puVar8 = (undefined4 *)(lVar6 + 0x144);
      puVar9 = (undefined4 *)(lVar6 + 0x148);
      puVar10 = (undefined4 *)(lVar6 + 0x14c);
      goto LAB_019d5ff8;
    }
    if (grade == 0xb) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar7 = (undefined4 *)(lVar6 + 0x150);
      puVar8 = (undefined4 *)(lVar6 + 0x154);
      puVar9 = (undefined4 *)(lVar6 + 0x158);
      puVar10 = (undefined4 *)(lVar6 + 0x15c);
      goto LAB_019d5ff8;
    }
  }
  if (iVar1 == 0) {
    NativeHelper_017ef404();
    lVar6 = *(long *)puVar2;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  puVar7 = (undefined4 *)(lVar6 + 0xb0);
  puVar8 = (undefined4 *)(lVar6 + 0xb4);
  puVar9 = (undefined4 *)(lVar6 + 0xb8);
  puVar10 = (undefined4 *)(lVar6 + 0xbc);
LAB_019d5ff8:
  RVar11.component0 = *puVar7;
  RVar11.component1 = *puVar8;
  RVar11.component2 = *puVar9;
  RVar11.component3 = *puVar10;
  return RVar11;
}

