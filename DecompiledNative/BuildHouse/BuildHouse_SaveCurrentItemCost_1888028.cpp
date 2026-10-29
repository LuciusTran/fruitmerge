// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SaveCurrentItemCost(int current) { }
// Ghidra address: 0198c028; ELF VA: 0x188c028; file offset: 0x1888028
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_SaveCurrentItemCost_1888028(BuildHouse *self,int current,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab214c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038679a0);
    NativeHelper_017ef284(PTR_DAT_03867940);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867948);
    NativeHelper_017ef284(PTR_DAT_03867978);
    bRam0000000003ab214c = 1;
  }
  pvVar5 = self->mWaitingBuyItem;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (!bVar2) {
    return;
  }
  if (self->mRoomModel != (RoomModel *)0x0) {
    pvVar5 = self->mRoomModel->ItemList;
    uVar3 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867948);
    NativeHelper_02731c08(uVar3,self,*(undefined8 *)PTR_DAT_038679a0,0);
    if (pvVar5 != (void *)0x0) {
      lVar4 = NativeHelper_02569e14(pvVar5,uVar3,*(undefined8 *)PTR_DAT_03867940);
      if (lVar4 == 0) {
        return;
      }
      if (self->mWaitingBuyItem != (void *)0x0) {
        pvVar5 = UnityEngine_object_get_name_3252e0c(self->mWaitingBuyItem,(void *)0x0);
        pvVar5 = (void *)NativeHelper_02a9c49c(pvVar5,*(undefined8 *)PTR_DAT_03867978,0);
        UnityEngine_PlayerPrefs_SetInt_3245fa8(pvVar5,*(int *)(lVar4 + 0x18) - current,(void *)0x0);
        if (pcRam0000000003abb5f0 == (code *)0x0) {
          pcRam0000000003abb5f0 = (code *)NativeHelper_017ef240(&UNK_00a51eab);
        }
                    /* WARNING: Could not recover jumptable at 0x0334aa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abb5f0)();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

