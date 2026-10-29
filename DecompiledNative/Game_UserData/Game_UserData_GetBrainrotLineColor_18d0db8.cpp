// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private Color GetBrainrotLineColor(int grade) { }
// Ghidra address: 019d4db8; ELF VA: 0x18d4db8; file offset: 0x18d0db8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Color
Game_UserData_GetBrainrotLineColor_18d0db8(Game_UserData *self,int grade,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  Recovered_Color RVar8;
  
  puVar2 = PTR_DAT_03869ef8;
  if ((bRam0000000003ab2485 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869ef8);
    bRam0000000003ab2485 = 1;
  }
  lVar3 = *(long *)puVar2;
  iVar1 = *(int *)(lVar3 + 0xe4);
  if (grade < 6) {
    if (grade < 3) {
      if ((grade != 1) && (grade == 2)) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0x10);
        puVar5 = (undefined4 *)(lVar3 + 0x14);
        puVar6 = (undefined4 *)(lVar3 + 0x18);
        puVar7 = (undefined4 *)(lVar3 + 0x1c);
        goto LAB_019d4fe8;
      }
    }
    else {
      if (grade == 3) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0x20);
        puVar5 = (undefined4 *)(lVar3 + 0x24);
        puVar6 = (undefined4 *)(lVar3 + 0x28);
        puVar7 = (undefined4 *)(lVar3 + 0x2c);
        goto LAB_019d4fe8;
      }
      if (grade == 4) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0x30);
        puVar5 = (undefined4 *)(lVar3 + 0x34);
        puVar6 = (undefined4 *)(lVar3 + 0x38);
        puVar7 = (undefined4 *)(lVar3 + 0x3c);
        goto LAB_019d4fe8;
      }
      if (grade == 5) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0x40);
        puVar5 = (undefined4 *)(lVar3 + 0x44);
        puVar6 = (undefined4 *)(lVar3 + 0x48);
        puVar7 = (undefined4 *)(lVar3 + 0x4c);
        goto LAB_019d4fe8;
      }
    }
  }
  else if (grade < 9) {
    if (grade == 6) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x50);
      puVar5 = (undefined4 *)(lVar3 + 0x54);
      puVar6 = (undefined4 *)(lVar3 + 0x58);
      puVar7 = (undefined4 *)(lVar3 + 0x5c);
      goto LAB_019d4fe8;
    }
    if (grade == 7) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x60);
      puVar5 = (undefined4 *)(lVar3 + 100);
      puVar6 = (undefined4 *)(lVar3 + 0x68);
      puVar7 = (undefined4 *)(lVar3 + 0x6c);
      goto LAB_019d4fe8;
    }
    if (grade == 8) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x70);
      puVar5 = (undefined4 *)(lVar3 + 0x74);
      puVar6 = (undefined4 *)(lVar3 + 0x78);
      puVar7 = (undefined4 *)(lVar3 + 0x7c);
      goto LAB_019d4fe8;
    }
  }
  else {
    if (grade == 9) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x80);
      puVar5 = (undefined4 *)(lVar3 + 0x84);
      puVar6 = (undefined4 *)(lVar3 + 0x88);
      puVar7 = (undefined4 *)(lVar3 + 0x8c);
      goto LAB_019d4fe8;
    }
    if (grade == 10) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x90);
      puVar5 = (undefined4 *)(lVar3 + 0x94);
      puVar6 = (undefined4 *)(lVar3 + 0x98);
      puVar7 = (undefined4 *)(lVar3 + 0x9c);
      goto LAB_019d4fe8;
    }
    if (grade == 0xb) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0xa0);
      puVar5 = (undefined4 *)(lVar3 + 0xa4);
      puVar6 = (undefined4 *)(lVar3 + 0xa8);
      puVar7 = (undefined4 *)(lVar3 + 0xac);
      goto LAB_019d4fe8;
    }
  }
  if (iVar1 == 0) {
    NativeHelper_017ef404();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined4 **)(lVar3 + 0xb8);
  puVar5 = puVar4 + 1;
  puVar6 = puVar4 + 2;
  puVar7 = puVar4 + 3;
LAB_019d4fe8:
  RVar8.component0 = *puVar4;
  RVar8.component1 = *puVar5;
  RVar8.component2 = *puVar6;
  RVar8.component3 = *puVar7;
  return RVar8;
}

