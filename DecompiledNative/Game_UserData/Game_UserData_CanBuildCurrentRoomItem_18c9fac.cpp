// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool CanBuildCurrentRoomItem(int pendingTickets = 0) { }
// Ghidra address: 019cdfac; ELF VA: 0x18cdfac; file offset: 0x18c9fac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData_CanBuildCurrentRoomItem_18c9fac
               (Game_UserData *self,int pendingTickets,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  Game_UserData *self_00;
  void *pvVar10;
  void *extraout_x1;
  void *runtimeMethod_00;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  pvVar10 = (void *)(ulong)(uint)pendingTickets;
  if ((bRam0000000003ab241a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03869b90);
    NativeHelper_017ef284(PTR_DAT_03869b98);
    NativeHelper_017ef284(PTR_DAT_03869ba0);
    NativeHelper_017ef284(PTR_DAT_03869ba8);
    NativeHelper_017ef284(PTR_DAT_03869bb0);
    NativeHelper_017ef284(PTR_DAT_0385d098);
    NativeHelper_017ef284(PTR_DAT_03867978);
    NativeHelper_017ef284(PTR_DAT_038678f0);
    bRam0000000003ab241a = 1;
    pvVar10 = extraout_x1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  self_00 = (Game_UserData *)Game_UserData_GetCurrentRoomModel_18ca1c8(self,pvVar10);
  if (((self_00 == (Game_UserData *)0x0) ||
      (lVar12 = *(long *)&self_00->CurrentTaskPlayTime, lVar12 == 0)) ||
     (*(int *)(lVar12 + 0x18) == 0)) {
    bVar6 = 0;
  }
  else {
    uVar11 = *(undefined8 *)&self_00->field_0x10;
    iVar8 = Game_UserData_GetTickets_18ca33c(self_00,runtimeMethod_00);
    NativeHelper_0256a338(&uStack_68,lVar12,*(undefined8 *)PTR_DAT_03869ba8);
    puVar5 = PTR_DAT_03869b98;
    puVar4 = PTR_DAT_03867978;
    puVar3 = PTR_DAT_038678f0;
    puVar2 = PTR_DAT_0385d098;
    do {
      do {
        bVar6 = NativeHelper_02240184(&uStack_68,*(undefined8 *)puVar5);
        lVar12 = lStack_58;
        if ((bVar6 & 1) == 0) goto LAB_019ce11c;
        if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
        pvVar10 = (void *)NativeHelper_02aa70d0
                                    (*(undefined8 *)puVar3,uVar11,*(undefined8 *)puVar2,
                                     *(undefined8 *)(lStack_58 + 0x10),0);
        bVar7 = UnityEngine_PlayerPrefs_HasKey_32466e4(pvVar10,(void *)0x0);
      } while (bVar7);
      iVar1 = *(int *)(lVar12 + 0x18);
      pvVar10 = (void *)NativeHelper_02a9c49c
                                  (*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)puVar4,0);
      iVar9 = UnityEngine_PlayerPrefs_GetInt_3246000(pvVar10,0,(void *)0x0);
    } while (iVar8 + pendingTickets < iVar1 - iVar9);
LAB_019ce11c:
    NativeHelper_02240180(&uStack_68,*(undefined8 *)PTR_DAT_03869b90);
  }
  return (bool)(bVar6 & 1);
}

