// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Init() { }
// Ghidra address: 0197598c; ELF VA: 0x187598c; file offset: 0x187198c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_Init_187198c(SoundMgr *self,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *extraout_x1_03;
  void *extraout_x1_04;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003ab206d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03866e60);
    bRam0000000003ab206d = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_03866e60;
  pvVar3 = self->m_TouchSounds;
  if (pvVar3 != (void *)0x0) {
    lVar4 = *(long *)((long)pvVar3 + 0x10);
    lVar5 = *(long *)PTR_DAT_03866e60;
    *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)((long)pvVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
      }
      else {
        NativeHelper_0251a020
                  (pvVar3,3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        pvVar3 = self->m_TouchSounds;
        runtimeMethod = extraout_x1_00;
        if (pvVar3 == (void *)0x0) goto LAB_01975bf8;
      }
      lVar4 = *(long *)((long)pvVar3 + 0x10);
      lVar5 = *(long *)puVar2;
      *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 4;
        }
        else {
          NativeHelper_0251a020
                    (pvVar3,4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          pvVar3 = self->m_TouchSounds;
          runtimeMethod = extraout_x1_01;
          if (pvVar3 == (void *)0x0) goto LAB_01975bf8;
        }
        lVar4 = *(long *)((long)pvVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)((long)pvVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 5;
          }
          else {
            NativeHelper_0251a020
                      (pvVar3,5,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            pvVar3 = self->m_TouchSounds;
            runtimeMethod = extraout_x1_02;
            if (pvVar3 == (void *)0x0) goto LAB_01975bf8;
          }
          lVar4 = *(long *)((long)pvVar3 + 0x10);
          lVar5 = *(long *)puVar2;
          *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)((long)pvVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 6;
            }
            else {
              NativeHelper_0251a020
                        (pvVar3,6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
              runtimeMethod = extraout_x1_03;
            }
            pvVar3 = self->m_MatchSounds;
            if (pvVar3 != (void *)0x0) {
              lVar4 = *(long *)((long)pvVar3 + 0x10);
              lVar5 = *(long *)puVar2;
              *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)((long)pvVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
                  *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 7;
                }
                else {
                  NativeHelper_0251a020
                            (pvVar3,7,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  runtimeMethod = extraout_x1_04;
                }
                pvVar3 = self->m_ComboSounds;
                if (pvVar3 != (void *)0x0) {
                  lVar4 = *(long *)((long)pvVar3 + 0x10);
                  lVar5 = *(long *)puVar2;
                  *(int *)((long)pvVar3 + 0x1c) = *(int *)((long)pvVar3 + 0x1c) + 1;
                  if (lVar4 != 0) {
                    uVar1 = *(uint *)((long)pvVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                      *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
                      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 7;
                      return;
                    }
                    uVar1 = *(uint *)((long)pvVar3 + 0x18);
                    func_0x0251a5e0(pvVar3,uVar1 + 1,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20
                                                                                       ) + 0xc0) +
                                                                   0x70) + 0x20) + 0xc0) + 0x78));
                    lVar4 = *(long *)((long)pvVar3 + 0x10);
                    *(uint *)((long)pvVar3 + 0x18) = uVar1 + 1;
                    if (lVar4 != 0) {
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 7;
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
  NativeHelper_017ef530(pvVar3,runtimeMethod);
}

