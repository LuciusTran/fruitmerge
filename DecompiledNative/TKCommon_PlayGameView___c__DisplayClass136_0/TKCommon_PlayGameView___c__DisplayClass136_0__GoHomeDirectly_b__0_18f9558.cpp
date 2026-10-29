// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <GoHomeDirectly>b__0() { }
// Ghidra address: 019fd558; ELF VA: 0x18fd558; file offset: 0x18f9558
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView___c__DisplayClass136_0__GoHomeDirectly_b__0_18f9558(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  Game_UserData *pGVar4;
  MergeFruit *self;
  void *pvVar5;
  TKCommon_PlayGameView *self_00;
  long *data;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  void *runtimeMethod;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_0385db10;
  if ((bRam0000000003ab25ed & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c420);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    NativeHelper_017ef284(PTR_DAT_03867a90);
    NativeHelper_017ef284(PTR_DAT_03868770);
    bRam0000000003ab25ed = 1;
  }
  pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  if (pGVar4 != (Game_UserData *)0x0) {
    Game_UserData_SaveCurrentScore_18c9a5c(pGVar4,0,(void *)0x0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (self = *(MergeFruit **)(*(long *)(param_1 + 0x10) + 0x228), self == (MergeFruit *)0x0))
    goto LAB_019fd748;
    MergeFruit_QuitGame_187a674(self,(void *)0x0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_019fd748;
    pvVar5 = (void *)NativeHelper_0334f4c8(*(long *)(param_1 + 0x10),0);
    Game_Controller_FMViewController_CloseView_18d77ac(pvVar5,0.0,(void *)0x0);
    UnityEngine_Time_set_timeScale_32575d0(1.0,(void *)0x0);
    puVar1 = PTR_DAT_0385c420;
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_019fd748;
    TKCommon_PlayGameView_CheckDialogClose_18f2e1c(self_00,runtimeMethod);
    if (*(char *)(param_1 + 0x18) != '\0') {
      pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (pGVar4 == (Game_UserData *)0x0) goto LAB_019fd748;
      bVar3 = Game_UserData_ShouldSmartJumpToRoom_18ca380
                        (pGVar4,*(int *)(param_1 + 0x1c),(void *)0x0);
      if (bVar3) {
        data = (long *)NativeHelper_017ef374(*(undefined8 *)puVar1,1);
        uStack_24 = *(undefined4 *)(param_1 + 0x1c);
        lVar6 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_24);
        if (data == (long *)0x0) goto LAB_019fd748;
        if ((lVar6 != 0) &&
           (lVar7 = NativeHelper_017ef408(lVar6,*(undefined8 *)(*data + 0x40)), lVar7 == 0))
        goto LAB_019fd750;
        if ((int)data[3] == 0) goto LAB_019fd74c;
        data[4] = lVar6;
        NativeHelper_017ef228(data + 4,lVar6);
        pvVar5 = *(void **)PTR_DAT_03867a90;
        goto LAB_019fd728;
      }
    }
    data = (long *)NativeHelper_017ef374(*(undefined8 *)puVar1,1);
    uStack_28 = *(undefined4 *)(param_1 + 0x1c);
    lVar6 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x48),&uStack_28);
    if (data != (long *)0x0) {
      if ((lVar6 != 0) &&
         (lVar7 = NativeHelper_017ef408(lVar6,*(undefined8 *)(*data + 0x40)), lVar7 == 0)) {
LAB_019fd750:
        uVar8 = NativeHelper_017ef554();
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef3f4(uVar8,0);
      }
      puVar2 = PTR_DAT_03868770;
      if ((int)data[3] == 0) {
LAB_019fd74c:
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
      data[4] = lVar6;
      NativeHelper_017ef228(data + 4,lVar6);
      pvVar5 = *(void **)puVar2;
LAB_019fd728:
      Game_Controller_FMViewController_ShowView_18d6f2c(pvVar5,false,data,(void *)0x0);
      return;
    }
  }
LAB_019fd748:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

