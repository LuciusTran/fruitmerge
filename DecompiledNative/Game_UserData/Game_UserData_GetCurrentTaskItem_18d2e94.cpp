// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public TaskItemData GetCurrentTaskItem() { }
// Ghidra address: 019d6e94; ELF VA: 0x18d6e94; file offset: 0x18d2e94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


TaskItemData * Game_UserData_GetCurrentTaskItem_18d2e94(Game_UserData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  LitJson_JsonReader *self_00;
  TaskItemData *pTVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_DAT_03869f30;
  if ((bRam0000000003ab2495 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869f38);
    NativeHelper_017ef284(PTR_DAT_0385db00);
    NativeHelper_017ef284(PTR_DAT_03869f30);
    bRam0000000003ab2495 = 1;
  }
  puVar1 = PTR_DAT_0385db00;
  pvVar3 = UnityEngine_PlayerPrefs_GetString_32463ec(*(void **)puVar2,(void *)0x0,(void *)0x0);
  auVar7 = NativeHelper_02aa606c(pvVar3,0);
  if (((ulong)auVar7._0_8_ & 1) != 0) {
    Game_UserData_UpdateCurrentTaskItem_18d2f48(auVar7._0_8_,auVar7._8_8_);
    pvVar3 = UnityEngine_PlayerPrefs_GetString_32463ec(*(void **)puVar2,(void *)0x0,(void *)0x0);
  }
  puVar2 = PTR_DAT_03869f38;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  lVar5 = *(long *)puVar2;
  if (*(long *)(lVar5 + 0x38) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385db00);
    NativeHelper_017ef284(PTR_DAT_03865a38);
    if (*(long *)(lVar5 + 0x38) == 0) {
      NativeHelper_01827500(lVar5);
    }
  }
  self_00 = (LitJson_JsonReader *)NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03865a38);
  LitJson_JsonReader_JsonReader_1855270(self_00,pvVar3,(void *)0x0);
  uVar6 = **(undefined8 **)(lVar5 + 0x38);
  if (*(int *)(*(long *)(PTR_DAT_0385c2d8 + 0xe0) + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pvVar3 = (void *)NativeHelper_02c1ee48(uVar6,0);
  if (*(int *)(*(long *)PTR_DAT_0385db00 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)PTR_DAT_0385db00);
  }
  pvVar3 = LitJson_JsonMapper_ReadValue_1852160(pvVar3,self_00,(void *)0x0);
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = NativeHelper_018274a4(lVar5);
  }
  if (pvVar3 == (void *)0x0) {
    pTVar4 = (TaskItemData *)0x0;
  }
  else {
    pTVar4 = (TaskItemData *)NativeHelper_017ef408(pvVar3,lVar5);
    if (pTVar4 == (TaskItemData *)0x0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0(pvVar3,lVar5);
    }
  }
  return pTVar4;
}

