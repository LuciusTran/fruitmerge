// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private Color GetCapybaraMergeColor(int grade) { }
// Ghidra address: 019d6264; ELF VA: 0x18d6264; file offset: 0x18d2264
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


Recovered_Color
Game_UserData_GetCapybaraMergeColor_18d2264(Game_UserData *self,int grade,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  Recovered_Color RVar8;
  
  puVar2 = PTR_DAT_03869f00;
  if ((bRam0000000003ab248e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869f00);
    bRam0000000003ab248e = 1;
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
        puVar4 = (undefined4 *)(lVar3 + 0xc0);
        puVar5 = (undefined4 *)(lVar3 + 0xc4);
        puVar6 = (undefined4 *)(lVar3 + 200);
        puVar7 = (undefined4 *)(lVar3 + 0xcc);
        goto LAB_019d6498;
      }
    }
    else {
      if (grade == 3) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0xd0);
        puVar5 = (undefined4 *)(lVar3 + 0xd4);
        puVar6 = (undefined4 *)(lVar3 + 0xd8);
        puVar7 = (undefined4 *)(lVar3 + 0xdc);
        goto LAB_019d6498;
      }
      if (grade == 4) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0xe0);
        puVar5 = (undefined4 *)(lVar3 + 0xe4);
        puVar6 = (undefined4 *)(lVar3 + 0xe8);
        puVar7 = (undefined4 *)(lVar3 + 0xec);
        goto LAB_019d6498;
      }
      if (grade == 5) {
        if (iVar1 == 0) {
          NativeHelper_017ef404();
          lVar3 = *(long *)puVar2;
        }
        lVar3 = *(long *)(lVar3 + 0xb8);
        puVar4 = (undefined4 *)(lVar3 + 0xf0);
        puVar5 = (undefined4 *)(lVar3 + 0xf4);
        puVar6 = (undefined4 *)(lVar3 + 0xf8);
        puVar7 = (undefined4 *)(lVar3 + 0xfc);
        goto LAB_019d6498;
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
      puVar4 = (undefined4 *)(lVar3 + 0x100);
      puVar5 = (undefined4 *)(lVar3 + 0x104);
      puVar6 = (undefined4 *)(lVar3 + 0x108);
      puVar7 = (undefined4 *)(lVar3 + 0x10c);
      goto LAB_019d6498;
    }
    if (grade == 7) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x110);
      puVar5 = (undefined4 *)(lVar3 + 0x114);
      puVar6 = (undefined4 *)(lVar3 + 0x118);
      puVar7 = (undefined4 *)(lVar3 + 0x11c);
      goto LAB_019d6498;
    }
    if (grade == 8) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x120);
      puVar5 = (undefined4 *)(lVar3 + 0x124);
      puVar6 = (undefined4 *)(lVar3 + 0x128);
      puVar7 = (undefined4 *)(lVar3 + 300);
      goto LAB_019d6498;
    }
  }
  else {
    if (grade == 9) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x130);
      puVar5 = (undefined4 *)(lVar3 + 0x134);
      puVar6 = (undefined4 *)(lVar3 + 0x138);
      puVar7 = (undefined4 *)(lVar3 + 0x13c);
      goto LAB_019d6498;
    }
    if (grade == 10) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x140);
      puVar5 = (undefined4 *)(lVar3 + 0x144);
      puVar6 = (undefined4 *)(lVar3 + 0x148);
      puVar7 = (undefined4 *)(lVar3 + 0x14c);
      goto LAB_019d6498;
    }
    if (grade == 0xb) {
      if (iVar1 == 0) {
        NativeHelper_017ef404();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = *(long *)(lVar3 + 0xb8);
      puVar4 = (undefined4 *)(lVar3 + 0x150);
      puVar5 = (undefined4 *)(lVar3 + 0x154);
      puVar6 = (undefined4 *)(lVar3 + 0x158);
      puVar7 = (undefined4 *)(lVar3 + 0x15c);
      goto LAB_019d6498;
    }
  }
  if (iVar1 == 0) {
    NativeHelper_017ef404();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  puVar4 = (undefined4 *)(lVar3 + 0xb0);
  puVar5 = (undefined4 *)(lVar3 + 0xb4);
  puVar6 = (undefined4 *)(lVar3 + 0xb8);
  puVar7 = (undefined4 *)(lVar3 + 0xbc);
LAB_019d6498:
  RVar8.component0 = *puVar4;
  RVar8.component1 = *puVar5;
  RVar8.component2 = *puVar6;
  RVar8.component3 = *puVar7;
  return RVar8;
}

