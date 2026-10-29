// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public List<String> GetRoomNames() { }
// Ghidra address: 019d1ae0; ELF VA: 0x18d1ae0; file offset: 0x18cdae0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


undefined8 Game_UserData_GetRoomNames_18cdae0(void)

{
  undefined *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_03869d88;
  if ((bRam0000000003ab2451 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c308);
    NativeHelper_017ef284(PTR_DAT_0385c818);
    NativeHelper_017ef284(PTR_DAT_0385c810);
    NativeHelper_017ef284(PTR_DAT_03869d88);
    bRam0000000003ab2451 = 1;
  }
  pvVar2 = UnityEngine_PlayerPrefs_GetString_324669c(*(void **)puVar1,(void *)0x0);
  uVar3 = NativeHelper_02aa606c(pvVar2,0);
  puVar1 = PTR_DAT_0385c818;
  if ((uVar3 & 1) != 0) {
    uVar4 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c810);
    NativeHelper_02568f74(uVar4,*(undefined8 *)puVar1);
    return uVar4;
  }
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  lVar5 = NativeHelper_02aa9268(pvVar2,0x2c,0,0);
  lVar6 = *(long *)PTR_DAT_0385c308;
  if (*(long *)(lVar6 + 0x38) == 0) {
    NativeHelper_01827500(lVar6);
  }
  if (lVar5 != 0) {
    if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0x38) + 8) + 0x135) & 1) == 0) {
      NativeHelper_018274a4();
    }
    uVar4 = NativeHelper_017ef520();
    NativeHelper_025690b0(uVar4,lVar5,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x10));
    return uVar4;
  }
  uVar4 = NativeHelper_017ef298(PTR_DAT_0386ff88);
  uVar4 = func_0x02de6a38(uVar4,0);
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef3f4(uVar4,lVar6);
}

