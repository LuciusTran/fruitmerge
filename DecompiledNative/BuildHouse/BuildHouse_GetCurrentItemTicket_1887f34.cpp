// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public int GetCurrentItemTicket() { }
// Ghidra address: 0198bf34; ELF VA: 0x188bf34; file offset: 0x1887f34
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int BuildHouse_GetCurrentItemTicket_1887f34(BuildHouse *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  void *extraout_x1;
  void *pvVar5;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab214b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867998);
    NativeHelper_017ef284(PTR_DAT_03867940);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867948);
    bRam0000000003ab214b = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar5 = self->mWaitingBuyItem;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,runtimeMethod);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    return 0;
  }
  if (self->mRoomModel != (RoomModel *)0x0) {
    pvVar5 = self->mRoomModel->ItemList;
    uVar3 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867948);
    NativeHelper_02731c08(uVar3,self,*(undefined8 *)PTR_DAT_03867998,0);
    if (pvVar5 != (void *)0x0) {
      lVar4 = NativeHelper_02569e14(pvVar5,uVar3,*(undefined8 *)PTR_DAT_03867940);
      if (lVar4 == 0) {
        return 0;
      }
      return *(int *)(lVar4 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

