// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool IsUserHasSkin(string skinName) { }
// Ghidra address: 019d348c; ELF VA: 0x18d348c; file offset: 0x18cf48c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_IsUserHasSkin_18cf48c(Game_UserData *self,void *skinName,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  IAPItemManager *self_00;
  long lVar4;
  
  puVar1 = PTR_DAT_0385d920;
  if ((bRam0000000003ab247d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385de50);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    bRam0000000003ab247d = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (self_00 != (IAPItemManager *)0x0) {
    bVar2 = IAPItemManager_get_IsSubscriptionActive_1804360(self_00,(void *)0x0);
    if (bVar2) {
      return true;
    }
    lVar4 = Game_UserData_GetUserSkins_18cf7ac();
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        iVar3 = func_0x01d88804(*(undefined8 *)(lVar4 + 0x10),skinName,0,*(int *)(lVar4 + 0x18),
                                *(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_0385de50 + 0x20) + 0xc0) + 0xd0) + 0x20) +
                                           0xc0) + 0x148));
        return iVar3 != -1;
      }
      return false;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

