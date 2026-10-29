// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public Color GetCurrentSkinLineColor(int grade) { }
// Ghidra address: 019d48c0; ELF VA: 0x18d48c0; file offset: 0x18d08c0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Color
Game_UserData_GetCurrentSkinLineColor_18d08c0(Game_UserData *self,int grade,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  void *extraout_x1;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  Recovered_Color RVar12;
  Recovered_Color RVar13;
  Recovered_Color RVar14;
  Recovered_Color RVar15;
  Recovered_Color RVar16;
  Recovered_Color RVar17;
  Recovered_Color RVar18;
  
  pvVar4 = (void *)(ulong)(uint)grade;
  if ((bRam0000000003ab2483 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869ec0);
    NativeHelper_017ef284(PTR_DAT_03869ec8);
    NativeHelper_017ef284(PTR_DAT_0385dc28);
    NativeHelper_017ef284(PTR_DAT_03867078);
    NativeHelper_017ef284(PTR_DAT_03869ed0);
    NativeHelper_017ef284(PTR_DAT_03869ed8);
    NativeHelper_017ef284(PTR_DAT_03867080);
    NativeHelper_017ef284(PTR_DAT_03869ee0);
    NativeHelper_017ef284(PTR_DAT_03869ee8);
    bRam0000000003ab2483 = 1;
    pvVar4 = extraout_x1;
  }
  pvVar4 = Game_UserData_GetUsingSkin_18cf374(self,pvVar4);
  uVar3 = _PrivateImplementationDetails__ComputeStringHash_186cf80(pvVar4,(void *)0x0);
  if (uVar3 < 0x71ec7114) {
    if (uVar3 < 0x15d69c02) {
      if (uVar3 == 0x13d31cb2) {
        uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ee0,0);
        puVar2 = PTR_DAT_03869f08;
        if ((uVar5 & 1) != 0) {
          if ((bRam0000000003ab2487 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_03869f08);
            bRam0000000003ab2487 = 1;
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
                puVar8 = (undefined4 *)(lVar6 + 0x10);
                puVar9 = (undefined4 *)(lVar6 + 0x14);
                puVar10 = (undefined4 *)(lVar6 + 0x18);
                puVar11 = (undefined4 *)(lVar6 + 0x1c);
                goto LAB_019d5480;
              }
            }
            else {
              if (grade == 3) {
                if (iVar1 == 0) {
                  NativeHelper_017ef404();
                  lVar6 = *(long *)puVar2;
                }
                lVar6 = *(long *)(lVar6 + 0xb8);
                puVar8 = (undefined4 *)(lVar6 + 0x20);
                puVar9 = (undefined4 *)(lVar6 + 0x24);
                puVar10 = (undefined4 *)(lVar6 + 0x28);
                puVar11 = (undefined4 *)(lVar6 + 0x2c);
                goto LAB_019d5480;
              }
              if (grade == 4) {
                if (iVar1 == 0) {
                  NativeHelper_017ef404();
                  lVar6 = *(long *)puVar2;
                }
                lVar6 = *(long *)(lVar6 + 0xb8);
                puVar8 = (undefined4 *)(lVar6 + 0x30);
                puVar9 = (undefined4 *)(lVar6 + 0x34);
                puVar10 = (undefined4 *)(lVar6 + 0x38);
                puVar11 = (undefined4 *)(lVar6 + 0x3c);
                goto LAB_019d5480;
              }
              if (grade == 5) {
                if (iVar1 == 0) {
                  NativeHelper_017ef404();
                  lVar6 = *(long *)puVar2;
                }
                lVar6 = *(long *)(lVar6 + 0xb8);
                puVar8 = (undefined4 *)(lVar6 + 0x40);
                puVar9 = (undefined4 *)(lVar6 + 0x44);
                puVar10 = (undefined4 *)(lVar6 + 0x48);
                puVar11 = (undefined4 *)(lVar6 + 0x4c);
                goto LAB_019d5480;
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
              puVar8 = (undefined4 *)(lVar6 + 0x50);
              puVar9 = (undefined4 *)(lVar6 + 0x54);
              puVar10 = (undefined4 *)(lVar6 + 0x58);
              puVar11 = (undefined4 *)(lVar6 + 0x5c);
              goto LAB_019d5480;
            }
            if (grade == 7) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x60);
              puVar9 = (undefined4 *)(lVar6 + 100);
              puVar10 = (undefined4 *)(lVar6 + 0x68);
              puVar11 = (undefined4 *)(lVar6 + 0x6c);
              goto LAB_019d5480;
            }
            if (grade == 8) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x70);
              puVar9 = (undefined4 *)(lVar6 + 0x74);
              puVar10 = (undefined4 *)(lVar6 + 0x78);
              puVar11 = (undefined4 *)(lVar6 + 0x7c);
              goto LAB_019d5480;
            }
          }
          else {
            if (grade == 9) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x80);
              puVar9 = (undefined4 *)(lVar6 + 0x84);
              puVar10 = (undefined4 *)(lVar6 + 0x88);
              puVar11 = (undefined4 *)(lVar6 + 0x8c);
              goto LAB_019d5480;
            }
            if (grade == 10) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x90);
              puVar9 = (undefined4 *)(lVar6 + 0x94);
              puVar10 = (undefined4 *)(lVar6 + 0x98);
              puVar11 = (undefined4 *)(lVar6 + 0x9c);
              goto LAB_019d5480;
            }
            if (grade == 0xb) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0xa0);
              puVar9 = (undefined4 *)(lVar6 + 0xa4);
              puVar10 = (undefined4 *)(lVar6 + 0xa8);
              puVar11 = (undefined4 *)(lVar6 + 0xac);
              goto LAB_019d5480;
            }
          }
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          puVar8 = *(undefined4 **)(lVar6 + 0xb8);
          puVar9 = puVar8 + 1;
          puVar10 = puVar8 + 2;
          puVar11 = puVar8 + 3;
LAB_019d5480:
          RVar15.component0 = *puVar8;
          RVar15.component1 = *puVar9;
          RVar15.component2 = *puVar10;
          RVar15.component3 = *puVar11;
          return RVar15;
        }
      }
      else {
        puVar7 = (undefined8 *)PTR_DAT_03869ec8;
        if (uVar3 == 0x15d69c01) goto LAB_019d4af4;
      }
    }
    else {
      puVar7 = (undefined8 *)PTR_DAT_03869ed8;
      if (uVar3 == 0x45362b1c) {
LAB_019d4af4:
        NativeHelper_02aa50f0(pvVar4,*puVar7,0);
      }
      else if ((uVar3 == 0x71ec7113) &&
              (uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ee8,0),
              puVar2 = PTR_DAT_03869f10, (uVar5 & 1) != 0)) {
        if ((bRam0000000003ab2488 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_03869f10);
          bRam0000000003ab2488 = 1;
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
              puVar8 = (undefined4 *)(lVar6 + 0x10);
              puVar9 = (undefined4 *)(lVar6 + 0x14);
              puVar10 = (undefined4 *)(lVar6 + 0x18);
              puVar11 = (undefined4 *)(lVar6 + 0x1c);
              goto LAB_019d56cc;
            }
          }
          else {
            if (grade == 3) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x20);
              puVar9 = (undefined4 *)(lVar6 + 0x24);
              puVar10 = (undefined4 *)(lVar6 + 0x28);
              puVar11 = (undefined4 *)(lVar6 + 0x2c);
              goto LAB_019d56cc;
            }
            if (grade == 4) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x30);
              puVar9 = (undefined4 *)(lVar6 + 0x34);
              puVar10 = (undefined4 *)(lVar6 + 0x38);
              puVar11 = (undefined4 *)(lVar6 + 0x3c);
              goto LAB_019d56cc;
            }
            if (grade == 5) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x40);
              puVar9 = (undefined4 *)(lVar6 + 0x44);
              puVar10 = (undefined4 *)(lVar6 + 0x48);
              puVar11 = (undefined4 *)(lVar6 + 0x4c);
              goto LAB_019d56cc;
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
            puVar8 = (undefined4 *)(lVar6 + 0x50);
            puVar9 = (undefined4 *)(lVar6 + 0x54);
            puVar10 = (undefined4 *)(lVar6 + 0x58);
            puVar11 = (undefined4 *)(lVar6 + 0x5c);
            goto LAB_019d56cc;
          }
          if (grade == 7) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x60);
            puVar9 = (undefined4 *)(lVar6 + 100);
            puVar10 = (undefined4 *)(lVar6 + 0x68);
            puVar11 = (undefined4 *)(lVar6 + 0x6c);
            goto LAB_019d56cc;
          }
          if (grade == 8) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x70);
            puVar9 = (undefined4 *)(lVar6 + 0x74);
            puVar10 = (undefined4 *)(lVar6 + 0x78);
            puVar11 = (undefined4 *)(lVar6 + 0x7c);
            goto LAB_019d56cc;
          }
        }
        else {
          if (grade == 9) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x80);
            puVar9 = (undefined4 *)(lVar6 + 0x84);
            puVar10 = (undefined4 *)(lVar6 + 0x88);
            puVar11 = (undefined4 *)(lVar6 + 0x8c);
            goto LAB_019d56cc;
          }
          if (grade == 10) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x90);
            puVar9 = (undefined4 *)(lVar6 + 0x94);
            puVar10 = (undefined4 *)(lVar6 + 0x98);
            puVar11 = (undefined4 *)(lVar6 + 0x9c);
            goto LAB_019d56cc;
          }
          if (grade == 0xb) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0xa0);
            puVar9 = (undefined4 *)(lVar6 + 0xa4);
            puVar10 = (undefined4 *)(lVar6 + 0xa8);
            puVar11 = (undefined4 *)(lVar6 + 0xac);
            goto LAB_019d56cc;
          }
        }
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        puVar8 = *(undefined4 **)(lVar6 + 0xb8);
        puVar9 = puVar8 + 1;
        puVar10 = puVar8 + 2;
        puVar11 = puVar8 + 3;
LAB_019d56cc:
        RVar16.component0 = *puVar8;
        RVar16.component1 = *puVar9;
        RVar16.component2 = *puVar10;
        RVar16.component3 = *puVar11;
        return RVar16;
      }
    }
  }
  else if (uVar3 < 0x9ef42ad5) {
    if (uVar3 == 0x9b6bb9e0) {
      uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03867078,0);
      puVar2 = PTR_DAT_03869ef8;
      if ((uVar5 & 1) != 0) {
        if ((bRam0000000003ab2485 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_03869ef8);
          bRam0000000003ab2485 = 1;
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
              puVar8 = (undefined4 *)(lVar6 + 0x10);
              puVar9 = (undefined4 *)(lVar6 + 0x14);
              puVar10 = (undefined4 *)(lVar6 + 0x18);
              puVar11 = (undefined4 *)(lVar6 + 0x1c);
              goto LAB_019d4fe8;
            }
          }
          else {
            if (grade == 3) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x20);
              puVar9 = (undefined4 *)(lVar6 + 0x24);
              puVar10 = (undefined4 *)(lVar6 + 0x28);
              puVar11 = (undefined4 *)(lVar6 + 0x2c);
              goto LAB_019d4fe8;
            }
            if (grade == 4) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x30);
              puVar9 = (undefined4 *)(lVar6 + 0x34);
              puVar10 = (undefined4 *)(lVar6 + 0x38);
              puVar11 = (undefined4 *)(lVar6 + 0x3c);
              goto LAB_019d4fe8;
            }
            if (grade == 5) {
              if (iVar1 == 0) {
                NativeHelper_017ef404();
                lVar6 = *(long *)puVar2;
              }
              lVar6 = *(long *)(lVar6 + 0xb8);
              puVar8 = (undefined4 *)(lVar6 + 0x40);
              puVar9 = (undefined4 *)(lVar6 + 0x44);
              puVar10 = (undefined4 *)(lVar6 + 0x48);
              puVar11 = (undefined4 *)(lVar6 + 0x4c);
              goto LAB_019d4fe8;
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
            puVar8 = (undefined4 *)(lVar6 + 0x50);
            puVar9 = (undefined4 *)(lVar6 + 0x54);
            puVar10 = (undefined4 *)(lVar6 + 0x58);
            puVar11 = (undefined4 *)(lVar6 + 0x5c);
            goto LAB_019d4fe8;
          }
          if (grade == 7) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x60);
            puVar9 = (undefined4 *)(lVar6 + 100);
            puVar10 = (undefined4 *)(lVar6 + 0x68);
            puVar11 = (undefined4 *)(lVar6 + 0x6c);
            goto LAB_019d4fe8;
          }
          if (grade == 8) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x70);
            puVar9 = (undefined4 *)(lVar6 + 0x74);
            puVar10 = (undefined4 *)(lVar6 + 0x78);
            puVar11 = (undefined4 *)(lVar6 + 0x7c);
            goto LAB_019d4fe8;
          }
        }
        else {
          if (grade == 9) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x80);
            puVar9 = (undefined4 *)(lVar6 + 0x84);
            puVar10 = (undefined4 *)(lVar6 + 0x88);
            puVar11 = (undefined4 *)(lVar6 + 0x8c);
            goto LAB_019d4fe8;
          }
          if (grade == 10) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x90);
            puVar9 = (undefined4 *)(lVar6 + 0x94);
            puVar10 = (undefined4 *)(lVar6 + 0x98);
            puVar11 = (undefined4 *)(lVar6 + 0x9c);
            goto LAB_019d4fe8;
          }
          if (grade == 0xb) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0xa0);
            puVar9 = (undefined4 *)(lVar6 + 0xa4);
            puVar10 = (undefined4 *)(lVar6 + 0xa8);
            puVar11 = (undefined4 *)(lVar6 + 0xac);
            goto LAB_019d4fe8;
          }
        }
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        puVar8 = *(undefined4 **)(lVar6 + 0xb8);
        puVar9 = puVar8 + 1;
        puVar10 = puVar8 + 2;
        puVar11 = puVar8 + 3;
LAB_019d4fe8:
        RVar13.component0 = *puVar8;
        RVar13.component1 = *puVar9;
        RVar13.component2 = *puVar10;
        RVar13.component3 = *puVar11;
        return RVar13;
      }
    }
    else if ((uVar3 == 0x9ef42ad4) &&
            (uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ed0,0),
            puVar2 = PTR_DAT_03869f20, (uVar5 & 1) != 0)) {
      if ((bRam0000000003ab248a & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03869f20);
        bRam0000000003ab248a = 1;
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
            puVar8 = (undefined4 *)(lVar6 + 0x10);
            puVar9 = (undefined4 *)(lVar6 + 0x14);
            puVar10 = (undefined4 *)(lVar6 + 0x18);
            puVar11 = (undefined4 *)(lVar6 + 0x1c);
            goto LAB_019d5b64;
          }
        }
        else {
          if (grade == 3) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x20);
            puVar9 = (undefined4 *)(lVar6 + 0x24);
            puVar10 = (undefined4 *)(lVar6 + 0x28);
            puVar11 = (undefined4 *)(lVar6 + 0x2c);
            goto LAB_019d5b64;
          }
          if (grade == 4) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x30);
            puVar9 = (undefined4 *)(lVar6 + 0x34);
            puVar10 = (undefined4 *)(lVar6 + 0x38);
            puVar11 = (undefined4 *)(lVar6 + 0x3c);
            goto LAB_019d5b64;
          }
          if (grade == 5) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x40);
            puVar9 = (undefined4 *)(lVar6 + 0x44);
            puVar10 = (undefined4 *)(lVar6 + 0x48);
            puVar11 = (undefined4 *)(lVar6 + 0x4c);
            goto LAB_019d5b64;
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
          puVar8 = (undefined4 *)(lVar6 + 0x50);
          puVar9 = (undefined4 *)(lVar6 + 0x54);
          puVar10 = (undefined4 *)(lVar6 + 0x58);
          puVar11 = (undefined4 *)(lVar6 + 0x5c);
          goto LAB_019d5b64;
        }
        if (grade == 7) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x60);
          puVar9 = (undefined4 *)(lVar6 + 100);
          puVar10 = (undefined4 *)(lVar6 + 0x68);
          puVar11 = (undefined4 *)(lVar6 + 0x6c);
          goto LAB_019d5b64;
        }
        if (grade == 8) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x70);
          puVar9 = (undefined4 *)(lVar6 + 0x74);
          puVar10 = (undefined4 *)(lVar6 + 0x78);
          puVar11 = (undefined4 *)(lVar6 + 0x7c);
          goto LAB_019d5b64;
        }
      }
      else {
        if (grade == 9) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x80);
          puVar9 = (undefined4 *)(lVar6 + 0x84);
          puVar10 = (undefined4 *)(lVar6 + 0x88);
          puVar11 = (undefined4 *)(lVar6 + 0x8c);
          goto LAB_019d5b64;
        }
        if (grade == 10) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x90);
          puVar9 = (undefined4 *)(lVar6 + 0x94);
          puVar10 = (undefined4 *)(lVar6 + 0x98);
          puVar11 = (undefined4 *)(lVar6 + 0x9c);
          goto LAB_019d5b64;
        }
        if (grade == 0xb) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0xa0);
          puVar9 = (undefined4 *)(lVar6 + 0xa4);
          puVar10 = (undefined4 *)(lVar6 + 0xa8);
          puVar11 = (undefined4 *)(lVar6 + 0xac);
          goto LAB_019d5b64;
        }
      }
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      puVar8 = *(undefined4 **)(lVar6 + 0xb8);
      puVar9 = puVar8 + 1;
      puVar10 = puVar8 + 2;
      puVar11 = puVar8 + 3;
LAB_019d5b64:
      RVar18.component0 = *puVar8;
      RVar18.component1 = *puVar9;
      RVar18.component2 = *puVar10;
      RVar18.component3 = *puVar11;
      return RVar18;
    }
  }
  else if (uVar3 == 0xa9a8f79a) {
    uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03867080,0);
    puVar2 = PTR_DAT_03869f00;
    if ((uVar5 & 1) != 0) {
      if ((bRam0000000003ab2486 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03869f00);
        bRam0000000003ab2486 = 1;
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
            puVar8 = (undefined4 *)(lVar6 + 0x10);
            puVar9 = (undefined4 *)(lVar6 + 0x14);
            puVar10 = (undefined4 *)(lVar6 + 0x18);
            puVar11 = (undefined4 *)(lVar6 + 0x1c);
            goto LAB_019d5234;
          }
        }
        else {
          if (grade == 3) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x20);
            puVar9 = (undefined4 *)(lVar6 + 0x24);
            puVar10 = (undefined4 *)(lVar6 + 0x28);
            puVar11 = (undefined4 *)(lVar6 + 0x2c);
            goto LAB_019d5234;
          }
          if (grade == 4) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x30);
            puVar9 = (undefined4 *)(lVar6 + 0x34);
            puVar10 = (undefined4 *)(lVar6 + 0x38);
            puVar11 = (undefined4 *)(lVar6 + 0x3c);
            goto LAB_019d5234;
          }
          if (grade == 5) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x40);
            puVar9 = (undefined4 *)(lVar6 + 0x44);
            puVar10 = (undefined4 *)(lVar6 + 0x48);
            puVar11 = (undefined4 *)(lVar6 + 0x4c);
            goto LAB_019d5234;
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
          puVar8 = (undefined4 *)(lVar6 + 0x50);
          puVar9 = (undefined4 *)(lVar6 + 0x54);
          puVar10 = (undefined4 *)(lVar6 + 0x58);
          puVar11 = (undefined4 *)(lVar6 + 0x5c);
          goto LAB_019d5234;
        }
        if (grade == 7) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x60);
          puVar9 = (undefined4 *)(lVar6 + 100);
          puVar10 = (undefined4 *)(lVar6 + 0x68);
          puVar11 = (undefined4 *)(lVar6 + 0x6c);
          goto LAB_019d5234;
        }
        if (grade == 8) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x70);
          puVar9 = (undefined4 *)(lVar6 + 0x74);
          puVar10 = (undefined4 *)(lVar6 + 0x78);
          puVar11 = (undefined4 *)(lVar6 + 0x7c);
          goto LAB_019d5234;
        }
      }
      else {
        if (grade == 9) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x80);
          puVar9 = (undefined4 *)(lVar6 + 0x84);
          puVar10 = (undefined4 *)(lVar6 + 0x88);
          puVar11 = (undefined4 *)(lVar6 + 0x8c);
          goto LAB_019d5234;
        }
        if (grade == 10) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x90);
          puVar9 = (undefined4 *)(lVar6 + 0x94);
          puVar10 = (undefined4 *)(lVar6 + 0x98);
          puVar11 = (undefined4 *)(lVar6 + 0x9c);
          goto LAB_019d5234;
        }
        if (grade == 0xb) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0xa0);
          puVar9 = (undefined4 *)(lVar6 + 0xa4);
          puVar10 = (undefined4 *)(lVar6 + 0xa8);
          puVar11 = (undefined4 *)(lVar6 + 0xac);
          goto LAB_019d5234;
        }
      }
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      puVar8 = *(undefined4 **)(lVar6 + 0xb8);
      puVar9 = puVar8 + 1;
      puVar10 = puVar8 + 2;
      puVar11 = puVar8 + 3;
LAB_019d5234:
      RVar14.component0 = *puVar8;
      RVar14.component1 = *puVar9;
      RVar14.component2 = *puVar10;
      RVar14.component3 = *puVar11;
      return RVar14;
    }
  }
  else if (uVar3 == 0xf764c6af) {
    uVar5 = NativeHelper_02aa50f0(pvVar4,*(undefined8 *)PTR_DAT_03869ec0,0);
    puVar2 = PTR_DAT_03869f18;
    if ((uVar5 & 1) != 0) {
      if ((bRam0000000003ab2489 & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03869f18);
        bRam0000000003ab2489 = 1;
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
            puVar8 = (undefined4 *)(lVar6 + 0x10);
            puVar9 = (undefined4 *)(lVar6 + 0x14);
            puVar10 = (undefined4 *)(lVar6 + 0x18);
            puVar11 = (undefined4 *)(lVar6 + 0x1c);
            goto LAB_019d5918;
          }
        }
        else {
          if (grade == 3) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x20);
            puVar9 = (undefined4 *)(lVar6 + 0x24);
            puVar10 = (undefined4 *)(lVar6 + 0x28);
            puVar11 = (undefined4 *)(lVar6 + 0x2c);
            goto LAB_019d5918;
          }
          if (grade == 4) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x30);
            puVar9 = (undefined4 *)(lVar6 + 0x34);
            puVar10 = (undefined4 *)(lVar6 + 0x38);
            puVar11 = (undefined4 *)(lVar6 + 0x3c);
            goto LAB_019d5918;
          }
          if (grade == 5) {
            if (iVar1 == 0) {
              NativeHelper_017ef404();
              lVar6 = *(long *)puVar2;
            }
            lVar6 = *(long *)(lVar6 + 0xb8);
            puVar8 = (undefined4 *)(lVar6 + 0x40);
            puVar9 = (undefined4 *)(lVar6 + 0x44);
            puVar10 = (undefined4 *)(lVar6 + 0x48);
            puVar11 = (undefined4 *)(lVar6 + 0x4c);
            goto LAB_019d5918;
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
          puVar8 = (undefined4 *)(lVar6 + 0x50);
          puVar9 = (undefined4 *)(lVar6 + 0x54);
          puVar10 = (undefined4 *)(lVar6 + 0x58);
          puVar11 = (undefined4 *)(lVar6 + 0x5c);
          goto LAB_019d5918;
        }
        if (grade == 7) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x60);
          puVar9 = (undefined4 *)(lVar6 + 100);
          puVar10 = (undefined4 *)(lVar6 + 0x68);
          puVar11 = (undefined4 *)(lVar6 + 0x6c);
          goto LAB_019d5918;
        }
        if (grade == 8) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x70);
          puVar9 = (undefined4 *)(lVar6 + 0x74);
          puVar10 = (undefined4 *)(lVar6 + 0x78);
          puVar11 = (undefined4 *)(lVar6 + 0x7c);
          goto LAB_019d5918;
        }
      }
      else {
        if (grade == 9) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x80);
          puVar9 = (undefined4 *)(lVar6 + 0x84);
          puVar10 = (undefined4 *)(lVar6 + 0x88);
          puVar11 = (undefined4 *)(lVar6 + 0x8c);
          goto LAB_019d5918;
        }
        if (grade == 10) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0x90);
          puVar9 = (undefined4 *)(lVar6 + 0x94);
          puVar10 = (undefined4 *)(lVar6 + 0x98);
          puVar11 = (undefined4 *)(lVar6 + 0x9c);
          goto LAB_019d5918;
        }
        if (grade == 0xb) {
          if (iVar1 == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar2;
          }
          lVar6 = *(long *)(lVar6 + 0xb8);
          puVar8 = (undefined4 *)(lVar6 + 0xa0);
          puVar9 = (undefined4 *)(lVar6 + 0xa4);
          puVar10 = (undefined4 *)(lVar6 + 0xa8);
          puVar11 = (undefined4 *)(lVar6 + 0xac);
          goto LAB_019d5918;
        }
      }
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      puVar8 = *(undefined4 **)(lVar6 + 0xb8);
      puVar9 = puVar8 + 1;
      puVar10 = puVar8 + 2;
      puVar11 = puVar8 + 3;
LAB_019d5918:
      RVar17.component0 = *puVar8;
      RVar17.component1 = *puVar9;
      RVar17.component2 = *puVar10;
      RVar17.component3 = *puVar11;
      return RVar17;
    }
  }
  else {
    puVar7 = (undefined8 *)PTR_DAT_0385dc28;
    if (uVar3 == 0xffd188d7) goto LAB_019d4af4;
  }
  puVar2 = PTR_DAT_03869ef0;
  if ((bRam0000000003ab2484 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869ef0);
    bRam0000000003ab2484 = 1;
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
        puVar8 = (undefined4 *)(lVar6 + 0x10);
        puVar9 = (undefined4 *)(lVar6 + 0x14);
        puVar10 = (undefined4 *)(lVar6 + 0x18);
        puVar11 = (undefined4 *)(lVar6 + 0x1c);
        goto LAB_019d4d9c;
      }
    }
    else {
      if (grade == 3) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar8 = (undefined4 *)(lVar6 + 0x20);
        puVar9 = (undefined4 *)(lVar6 + 0x24);
        puVar10 = (undefined4 *)(lVar6 + 0x28);
        puVar11 = (undefined4 *)(lVar6 + 0x2c);
        goto LAB_019d4d9c;
      }
      if (grade == 4) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar8 = (undefined4 *)(lVar6 + 0x30);
        puVar9 = (undefined4 *)(lVar6 + 0x34);
        puVar10 = (undefined4 *)(lVar6 + 0x38);
        puVar11 = (undefined4 *)(lVar6 + 0x3c);
        goto LAB_019d4d9c;
      }
      if (grade == 5) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar6 = *(long *)puVar2;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        puVar8 = (undefined4 *)(lVar6 + 0x40);
        puVar9 = (undefined4 *)(lVar6 + 0x44);
        puVar10 = (undefined4 *)(lVar6 + 0x48);
        puVar11 = (undefined4 *)(lVar6 + 0x4c);
        goto LAB_019d4d9c;
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
      puVar8 = (undefined4 *)(lVar6 + 0x50);
      puVar9 = (undefined4 *)(lVar6 + 0x54);
      puVar10 = (undefined4 *)(lVar6 + 0x58);
      puVar11 = (undefined4 *)(lVar6 + 0x5c);
      goto LAB_019d4d9c;
    }
    if (grade == 7) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar8 = (undefined4 *)(lVar6 + 0x60);
      puVar9 = (undefined4 *)(lVar6 + 100);
      puVar10 = (undefined4 *)(lVar6 + 0x68);
      puVar11 = (undefined4 *)(lVar6 + 0x6c);
      goto LAB_019d4d9c;
    }
    if (grade == 8) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar8 = (undefined4 *)(lVar6 + 0x70);
      puVar9 = (undefined4 *)(lVar6 + 0x74);
      puVar10 = (undefined4 *)(lVar6 + 0x78);
      puVar11 = (undefined4 *)(lVar6 + 0x7c);
      goto LAB_019d4d9c;
    }
  }
  else {
    if (grade == 9) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar8 = (undefined4 *)(lVar6 + 0x80);
      puVar9 = (undefined4 *)(lVar6 + 0x84);
      puVar10 = (undefined4 *)(lVar6 + 0x88);
      puVar11 = (undefined4 *)(lVar6 + 0x8c);
      goto LAB_019d4d9c;
    }
    if (grade == 10) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar8 = (undefined4 *)(lVar6 + 0x90);
      puVar9 = (undefined4 *)(lVar6 + 0x94);
      puVar10 = (undefined4 *)(lVar6 + 0x98);
      puVar11 = (undefined4 *)(lVar6 + 0x9c);
      goto LAB_019d4d9c;
    }
    if (grade == 0xb) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar6 = *(long *)puVar2;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      puVar8 = (undefined4 *)(lVar6 + 0xa0);
      puVar9 = (undefined4 *)(lVar6 + 0xa4);
      puVar10 = (undefined4 *)(lVar6 + 0xa8);
      puVar11 = (undefined4 *)(lVar6 + 0xac);
      goto LAB_019d4d9c;
    }
  }
  if (iVar1 == 0) {
    NativeHelper_017ef404();
    lVar6 = *(long *)puVar2;
  }
  puVar8 = *(undefined4 **)(lVar6 + 0xb8);
  puVar9 = puVar8 + 1;
  puVar10 = puVar8 + 2;
  puVar11 = puVar8 + 3;
LAB_019d4d9c:
  RVar12.component0 = *puVar8;
  RVar12.component1 = *puVar9;
  RVar12.component2 = *puVar10;
  RVar12.component3 = *puVar11;
  return RVar12;
}

