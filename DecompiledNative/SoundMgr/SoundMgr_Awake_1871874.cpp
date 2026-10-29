// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 01975874; ELF VA: 0x1875874; file offset: 0x1871874
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_Awake_1871874(SoundMgr *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_0385d918;
  puVar2 = PTR_DAT_0385d490;
  if ((bRam0000000003ab206c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_0385d490);
    bRam0000000003ab206c = 1;
  }
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = self;
  NativeHelper_017ef228(*(undefined8 *)(*(long *)puVar2 + 0xb8),self);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar4 = Global_get_IsActiveBgm_1803e7c((void *)0x0);
  if (!bVar4) {
    SoundMgr_CloseBgm_1871938(self,runtimeMethod_00);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar4 = Global_get_IsActiveSound_1803f24((void *)0x0);
  if (!bVar4) {
    SoundMgr_CloseSound_1871954(self,runtimeMethod_01);
  }
  if ((bRam0000000003ab206d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866e60);
    bRam0000000003ab206d = 1;
  }
  puVar2 = PTR_DAT_03866e60;
  pvVar5 = self->m_TouchSounds;
  if (pvVar5 != (void *)0x0) {
    lVar6 = *(long *)((long)pvVar5 + 0x10);
    lVar7 = *(long *)PTR_DAT_03866e60;
    *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 3;
      }
      else {
        NativeHelper_0251a020
                  (pvVar5,3,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        pvVar5 = self->m_TouchSounds;
        if (pvVar5 == (void *)0x0) goto LAB_01975bf8;
      }
      lVar6 = *(long *)((long)pvVar5 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)((long)pvVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 4;
        }
        else {
          NativeHelper_0251a020
                    (pvVar5,4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          pvVar5 = self->m_TouchSounds;
          if (pvVar5 == (void *)0x0) goto LAB_01975bf8;
        }
        lVar6 = *(long *)((long)pvVar5 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 5;
          }
          else {
            NativeHelper_0251a020
                      (pvVar5,5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            pvVar5 = self->m_TouchSounds;
            if (pvVar5 == (void *)0x0) goto LAB_01975bf8;
          }
          lVar6 = *(long *)((long)pvVar5 + 0x10);
          lVar7 = *(long *)puVar2;
          *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)((long)pvVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 6;
            }
            else {
              NativeHelper_0251a020
                        (pvVar5,6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pvVar5 = self->m_MatchSounds;
            if (pvVar5 != (void *)0x0) {
              lVar6 = *(long *)((long)pvVar5 + 0x10);
              lVar7 = *(long *)puVar2;
              *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar1 = *(uint *)((long)pvVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 7;
                }
                else {
                  NativeHelper_0251a020
                            (pvVar5,7,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                pvVar5 = self->m_ComboSounds;
                if (pvVar5 != (void *)0x0) {
                  lVar6 = *(long *)((long)pvVar5 + 0x10);
                  lVar7 = *(long *)puVar2;
                  *(int *)((long)pvVar5 + 0x1c) = *(int *)((long)pvVar5 + 0x1c) + 1;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)((long)pvVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
                      *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 7;
                      return;
                    }
                    uVar1 = *(uint *)((long)pvVar5 + 0x18);
                    func_0x0251a5e0(pvVar5,uVar1 + 1,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20
                                                                                       ) + 0xc0) +
                                                                   0x70) + 0x20) + 0xc0) + 0x78));
                    lVar6 = *(long *)((long)pvVar5 + 0x10);
                    *(uint *)((long)pvVar5 + 0x18) = uVar1 + 1;
                    if (lVar6 != 0) {
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 7;
                        return;
                      }
                    /* WARNING: Subroutine does not return */
                      NativeHelper_017ef538();
                    }
                    /* WARNING: Subroutine does not return */
                    NativeHelper_017ef530();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01975bf8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

