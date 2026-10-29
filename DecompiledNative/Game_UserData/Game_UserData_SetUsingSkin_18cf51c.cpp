// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetUsingSkin(string skinName, string where = "Home") { }
// Ghidra address: 019d351c; ELF VA: 0x18d351c; file offset: 0x18cf51c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_SetUsingSkin_18cf51c
               (Game_UserData *self,void *skinName,void *where,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *extraout_x1;
  undefined8 uVar8;
  
  pvVar4 = skinName;
  if ((bRam0000000003ab247b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_03869e38);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_03867070);
    NativeHelper_017ef284(PTR_DAT_03869e40);
    NativeHelper_017ef284(PTR_DAT_03869e48);
    NativeHelper_017ef284(PTR_DAT_03869e28);
    NativeHelper_017ef284(PTR_DAT_0385e920);
    bRam0000000003ab247b = 1;
    pvVar4 = extraout_x1;
  }
  pvVar4 = Game_UserData_GetUsingSkin_18cf374(self,pvVar4);
  uVar5 = NativeHelper_02aa50f0(pvVar4,skinName,0);
  puVar1 = PTR_DAT_0385ca28;
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)PTR_DAT_03869e48;
  lVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
  NativeHelper_02132ae8(lVar6,*(undefined8 *)puVar1);
  puVar3 = PTR_DAT_03869e40;
  puVar1 = PTR_DAT_0385ca48;
  if (lVar6 != 0) {
    NativeHelper_02133494
              (lVar6,*(undefined8 *)PTR_DAT_03869e40,skinName,*(undefined8 *)PTR_DAT_0385ca48);
    puVar2 = PTR_DAT_0385e920;
    NativeHelper_02133494(lVar6,*(undefined8 *)PTR_DAT_0385e920,where,*(undefined8 *)puVar1);
    lVar7 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385cca8);
    NativeHelper_02132ae8(lVar7,*(undefined8 *)PTR_DAT_0385ccb0);
    puVar1 = PTR_DAT_0385ccb8;
    if (lVar7 != 0) {
      NativeHelper_02133494(lVar7,*(undefined8 *)puVar3,skinName,*(undefined8 *)PTR_DAT_0385ccb8);
      NativeHelper_02133494(lVar7,*(undefined8 *)puVar2,where,*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0385e750;
      pvVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
      if (pvVar4 != (void *)0x0) {
        EventLogger_TkLogEvent_1888ca0(pvVar4,uVar8,lVar6,0,0);
        pvVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
        if (pvVar4 != (void *)0x0) {
          EventLogger_OtherLogEvent_189c590(pvVar4,uVar8,lVar7,0,0);
          UnityEngine_PlayerPrefs_SetString_3246394(*(void **)PTR_DAT_03869e28,skinName,(void *)0x0)
          ;
          NativeHelper_0334aa10(0);
          if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          pvVar4 = *(void **)PTR_DAT_03867070;
          lVar6 = *(long *)PTR_DAT_03869e38;
          if (*(long *)(lVar6 + 0x38) == 0) {
            NativeHelper_017ef284(PTR_DAT_03867000);
            NativeHelper_017ef284(PTR_DAT_0385d950);
            if (*(long *)(lVar6 + 0x38) == 0) {
              NativeHelper_01827500(lVar6);
            }
          }
          puVar1 = PTR_DAT_0385d950;
          if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          Messenger_OnBroadcasting_1875378(pvVar4,(void *)0x0);
          lVar7 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
          if (lVar7 != 0) {
            uVar5 = NativeHelper_02134ffc
                              (lVar7,pvVar4,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_03867000
                              );
            if ((uVar5 & 1) != 0) {
              lVar7 = **(long **)(lVar6 + 0x38);
              if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = NativeHelper_018274a4(lVar7);
              }
              lVar7 = NativeHelper_017ef408(0,lVar7);
              if (lVar7 == 0) {
                NativeHelper_017ef298(PTR_DAT_0385d950);
                NativeHelper_0160f45c();
                pvVar4 = Messenger_CreateBroadcastSignatureException_187537c(pvVar4,(void *)0x0);
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef3f4(pvVar4,lVar6);
              }
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),skinName,*(undefined8 *)(lVar7 + 0x28));
            }
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

