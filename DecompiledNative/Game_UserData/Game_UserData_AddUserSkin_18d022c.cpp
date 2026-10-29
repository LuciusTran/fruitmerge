// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void AddUserSkin(string skinName) { }
// Ghidra address: 019d422c; ELF VA: 0x18d422c; file offset: 0x18d022c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Removing unreachable block (ram,0x01979508) */
/* WARNING: Removing unreachable block (ram,0x01979520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Game_UserData_AddUserSkin_18d022c(Game_UserData *self,void *skinName,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  void *runtimeMethod_00;
  
  if ((bRam0000000003ab2480 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385ca48);
    NativeHelper_017ef284(PTR_DAT_0385ccb8);
    NativeHelper_017ef284(PTR_DAT_0385ccb0);
    NativeHelper_017ef284(PTR_DAT_0385ca28);
    NativeHelper_017ef284(PTR_DAT_0385cca8);
    NativeHelper_017ef284(PTR_DAT_0385ca30);
    NativeHelper_017ef284(PTR_DAT_03869e60);
    NativeHelper_017ef284(PTR_DAT_03869e80);
    NativeHelper_017ef284(PTR_DAT_0385d950);
    NativeHelper_017ef284(PTR_DAT_0385e750);
    NativeHelper_017ef284(PTR_DAT_03869e40);
    NativeHelper_017ef284(PTR_DAT_03869e58);
    NativeHelper_017ef284(PTR_DAT_03869ea0);
    NativeHelper_017ef284(PTR_DAT_03869ea8);
    NativeHelper_017ef284(PTR_DAT_03869eb0);
    NativeHelper_017ef284(PTR_DAT_03869eb8);
    NativeHelper_017ef284(PTR_DAT_038689f8);
    bRam0000000003ab2480 = 1;
  }
  uVar3 = NativeHelper_02aa606c(skinName,0);
  puVar1 = PTR_DAT_03869e58;
  if ((uVar3 & 1) != 0) {
    return;
  }
  pvVar4 = UnityEngine_PlayerPrefs_GetString_32463ec
                     (*(void **)PTR_DAT_03869e58,(void *)0x0,(void *)0x0);
  uVar3 = NativeHelper_02aa606c(pvVar4,0);
  pvVar7 = skinName;
  if ((uVar3 & 1) == 0) {
    if (pvVar4 == (void *)0x0) goto LAB_019d4548;
    uVar5 = NativeHelper_02aa9268(pvVar4,0x7c,0,0);
    lVar6 = NativeHelper_01c6c4c4(uVar5,*(undefined8 *)PTR_DAT_03869e60);
    if (lVar6 == 0) goto LAB_019d4548;
    NativeHelper_023d03c8(lVar6,skinName,*(undefined8 *)PTR_DAT_03869e80);
    pvVar7 = (void *)NativeHelper_02aa7b4c(*(undefined8 *)PTR_DAT_03869ea8,lVar6,0);
  }
  uVar5 = NativeHelper_02aa70d0
                    (*(undefined8 *)PTR_DAT_03869eb8,skinName,*(undefined8 *)PTR_DAT_03869ea0,pvVar7
                     ,0);
  NativeHelper_01919320(0x3f800000,_UNK_00a47658,_UNK_00a47754,0x3f800000,uVar5,0);
  uVar5 = *(undefined8 *)PTR_DAT_03869eb0;
  lVar6 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385ca30);
  NativeHelper_02132ae8(lVar6,*(undefined8 *)PTR_DAT_0385ca28);
  puVar2 = PTR_DAT_03869e40;
  if (lVar6 != 0) {
    NativeHelper_02133494
              (lVar6,*(undefined8 *)PTR_DAT_03869e40,skinName,*(undefined8 *)PTR_DAT_0385ca48);
    lVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385cca8);
    NativeHelper_02132ae8(lVar8,*(undefined8 *)PTR_DAT_0385ccb0);
    if (lVar8 != 0) {
      NativeHelper_02133494(lVar8,*(undefined8 *)puVar2,skinName,*(undefined8 *)PTR_DAT_0385ccb8);
      puVar2 = PTR_DAT_0385e750;
      pvVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385e750);
      if (pvVar4 != (void *)0x0) {
        EventLogger_TkLogEvent_1888ca0(pvVar4,uVar5,lVar6,0,0);
        pvVar4 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pvVar4 != (void *)0x0) {
          EventLogger_OtherLogEvent_189c590(pvVar4,uVar5,lVar8,0,0);
          UnityEngine_PlayerPrefs_SetString_3246394(*(void **)puVar1,pvVar7,(void *)0x0);
          if (*(int *)(*(long *)PTR_DAT_0385d950 + 0xe4) == 0) {
            NativeHelper_017ef404();
          }
          puVar1 = PTR_DAT_0385d950;
          pvVar7 = *(void **)PTR_DAT_038689f8;
          if ((bRam0000000003ab2096 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_03866c68,0);
            NativeHelper_017ef284(PTR_DAT_03867000);
            NativeHelper_017ef284(PTR_DAT_0385d950);
            bRam0000000003ab2096 = 1;
          }
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            NativeHelper_017ef404();
            lVar6 = *(long *)puVar1;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          uVar3 = NativeHelper_02134ffc
                            (lVar6,pvVar7,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_03867000);
          if ((uVar3 & 1) == 0) {
            return;
          }
          NativeHelper_017ef298(PTR_DAT_0385d950);
          NativeHelper_0160f45c();
          pvVar7 = Messenger_CreateBroadcastSignatureException_187537c(pvVar7,runtimeMethod_00);
          uVar5 = NativeHelper_017ef298(PTR_DAT_03867008);
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef3f4(pvVar7,uVar5);
        }
      }
    }
  }
LAB_019d4548:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

