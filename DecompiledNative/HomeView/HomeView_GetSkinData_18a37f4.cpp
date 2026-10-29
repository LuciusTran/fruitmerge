// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GetSkinData() { }
// Ghidra address: 019a77f4; ELF VA: 0x18a77f4; file offset: 0x18a37f4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_GetSkinData_18a37f4(HomeView *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  void **ppvVar3;
  
  puVar1 = PTR_DAT_0385d9c8;
  if ((bRam0000000003ab227a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d9c8);
    bRam0000000003ab227a = 1;
  }
  pvVar2 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = (void *)ConfigManager_GetSkinList_1806518(pvVar2,0);
    ppvVar3 = &self->SkinItemData;
    *ppvVar3 = pvVar2;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppvVar3 >> 0xc & 0x3f),
                      ((ulong)ppvVar3 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

