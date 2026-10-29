// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnSwitchSkin(string skinName) { }
// Ghidra address: 019805ac; ELF VA: 0x18805ac; file offset: 0x187c5ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_OnSwitchSkin_187c5ac(MergeFruit *self,void *skinName,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  Game_UserData *self_00;
  void *extraout_x1;
  void *pvVar5;
  Recovered_Color value;
  
  puVar1 = PTR_DAT_0385c2a0;
  if ((bRam0000000003ab20c8 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867340);
    NativeHelper_017ef284(PTR_DAT_03867320);
    NativeHelper_017ef284(PTR_DAT_03867348);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20c8 = 1;
    skinName = extraout_x1;
  }
  pvVar5 = self->_currentFruit;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1,skinName);
  }
  bVar2 = UnityEngine_object_op_Inequality_324dec8(pvVar5,(void *)0x0,(void *)0x0);
  if (bVar2) {
    if (self->_currentIndicator != (void *)0x0) {
      lVar3 = NativeHelper_01c0c674(self->_currentIndicator,*(undefined8 *)PTR_DAT_03867340);
      if (self->_currentFruit != (void *)0x0) {
        lVar4 = NativeHelper_01c796ec(self->_currentFruit,*(undefined8 *)PTR_DAT_03867320);
        self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        if ((lVar4 != 0) && (self_00 != (Game_UserData *)0x0)) {
          value = Game_UserData_GetCurrentSkinLineColor_18d08c0
                            (self_00,*(int *)(lVar4 + 0x20) + 1,(void *)0x0);
          puVar1 = PTR_DAT_03867348;
          if ((lVar3 != 0) && (*(void **)(lVar3 + 0x28) != (void *)0x0)) {
            pvVar5 = UnityEngine_GameObject_GetComponent_1b75510
                               (*(void **)(lVar3 + 0x28),*(void **)PTR_DAT_03867348);
            if (pvVar5 != (void *)0x0) {
              UnityEngine_SpriteRenderer_set_color_3215380(pvVar5,value,(void *)0x0);
              if ((*(void **)(lVar3 + 0x30) != (void *)0x0) &&
                 (pvVar5 = UnityEngine_GameObject_GetComponent_1b75510
                                     (*(void **)(lVar3 + 0x30),*(void **)puVar1),
                 pvVar5 != (void *)0x0)) {
                if ((bRam0000000003aba5e1 & 1) == 0) {
                  NativeHelper_017ef284(PTR_DAT_038a6b00,0);
                  bRam0000000003aba5e1 = 1;
                }
                if (pvVar5 != (void *)0x0) {
                  lVar3 = *(long *)((long)pvVar5 + 0x10);
                  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                    NativeHelper_0334bff8(pvVar5,0);
                  }
                  if (pcRam0000000003aba618 == (code *)0x0) {
                    pcRam0000000003aba618 = (code *)NativeHelper_017ef240(&UNK_00a68da8);
                  }
                  (*pcRam0000000003aba618)(lVar3,&stack0xffffffffffffffd0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                NativeHelper_017ef530();
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  return;
}

