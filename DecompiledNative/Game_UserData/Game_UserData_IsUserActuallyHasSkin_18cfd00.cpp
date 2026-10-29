// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsUserActuallyHasSkin(string skinName) { }
// Ghidra address: 019d3d00; ELF VA: 0x18d3d00; file offset: 0x18cfd00
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_IsUserActuallyHasSkin_18cfd00
               (Game_UserData *self,void *skinName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_03869e50;
  puVar1 = PTR_DAT_03868a68;
  if ((bRam0000000003ab247e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869e60);
    NativeHelper_017ef284(PTR_DAT_03869e68);
    NativeHelper_017ef284(PTR_DAT_03869e70);
    NativeHelper_017ef284(PTR_DAT_03869e78);
    NativeHelper_017ef284(PTR_DAT_03869e80);
    NativeHelper_017ef284(PTR_DAT_03868a58);
    NativeHelper_017ef284(PTR_DAT_03869e88);
    NativeHelper_017ef284(PTR_DAT_03869e50);
    NativeHelper_017ef284(PTR_DAT_03868a68);
    NativeHelper_017ef284(PTR_DAT_03869e58);
    bRam0000000003ab247e = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar4 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_023cf1d4(lVar4,*(undefined8 *)puVar2);
  pvVar5 = Game_Const_SKIN_get_DEFAULT_18da19c((void *)0x0);
  puVar2 = PTR_DAT_03869e80;
  puVar1 = PTR_DAT_03869e58;
  if (lVar4 != 0) {
    NativeHelper_023d03c8(lVar4,pvVar5,*(undefined8 *)PTR_DAT_03869e80);
    pvVar5 = UnityEngine_PlayerPrefs_GetString_32463ec(*(void **)puVar1,(void *)0x0,(void *)0x0);
    uVar6 = NativeHelper_02aa606c(pvVar5,0);
    if ((uVar6 & 1) != 0) {
LAB_019d3ea0:
      bVar3 = NativeHelper_023cf8d8(lVar4,skinName,*(undefined8 *)PTR_DAT_03868a58);
      return (bool)(bVar3 & 1);
    }
    if (pvVar5 != (void *)0x0) {
      uVar7 = NativeHelper_02aa9268(pvVar5,0x7c,0,0);
      lVar8 = NativeHelper_01c6c4c4(uVar7,*(undefined8 *)PTR_DAT_03869e60);
      if (lVar8 != 0) {
        NativeHelper_023cfd4c(&uStack_48,lVar8,*(undefined8 *)PTR_DAT_03869e88);
        puVar1 = PTR_DAT_03869e70;
        while (uVar6 = NativeHelper_0223fbf0(&uStack_48,*(undefined8 *)puVar1), (uVar6 & 1) != 0) {
          NativeHelper_023d03c8(lVar4,uStack_38,*(undefined8 *)puVar2);
        }
        NativeHelper_0223fbec(&uStack_48,*(undefined8 *)PTR_DAT_03869e68);
        goto LAB_019d3ea0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

