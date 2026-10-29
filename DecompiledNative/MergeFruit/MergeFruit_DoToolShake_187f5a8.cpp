// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DoToolShake(Action shakeStartAction, Action finishAction) { }
// Ghidra address: 019835a8; ELF VA: 0x18835a8; file offset: 0x187f5a8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_DoToolShake_187f5a8
               (MergeFruit *self,LocalNotification_Action *shakeStartAction,
               LocalNotification_Action *finishAction,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *runtimeMethod_00;
  undefined8 *puVar5;
  float fVar6;
  Recovered_Vector2 RVar7;
  
  puVar1 = PTR_DAT_03867468;
  if ((bRam0000000003ab20fa & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03867470);
    NativeHelper_017ef284(PTR_DAT_03867478);
    NativeHelper_017ef284(PTR_DAT_03867468);
    bRam0000000003ab20fa = 1;
  }
  lVar2 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = self;
    NativeHelper_017ef228((undefined8 *)(lVar2 + 0x10),self);
    *(undefined8 *)(lVar2 + 0x18) = finishAction;
    NativeHelper_017ef228((undefined8 *)(lVar2 + 0x18),finishAction);
    if (self->_gameState != 0) {
      return;
    }
    self->_gameState = 4;
    self->_isBlock = true;
    MergeFruit_HideCurrentFruit_187c2dc(self,runtimeMethod_00);
    self->clearFrictionGravityTime = self->clearFrictionGravityDuration;
    if (self->m_Box != (void *)0x0) {
      pvVar3 = UnityEngine_Component_GetComponent_1b08498(self->m_Box,*(void **)PTR_DAT_03867470);
      uVar4 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
      NativeHelper_02b8e36c(uVar4,lVar2,*(undefined8 *)PTR_DAT_03867478,0);
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((long)pvVar3 + 0x38) != (void *)0x0) {
          fVar6 = UnityEngine_Rigidbody2D_get_rotation_32aaf04
                            (*(void **)((long)pvVar3 + 0x38),(void *)0x0);
          *(float *)((long)pvVar3 + 0x44) = fVar6;
          if (*(void **)((long)pvVar3 + 0x38) != (void *)0x0) {
            RVar7 = UnityEngine_Rigidbody2D_get_position_32aad70
                              (*(void **)((long)pvVar3 + 0x38),(void *)0x0);
            *(Recovered_Vector2 *)((long)pvVar3 + 0x48) = RVar7;
            *(undefined1 *)((long)pvVar3 + 0x50) = 1;
            *(undefined8 *)((long)pvVar3 + 0x58) = shakeStartAction;
            NativeHelper_017ef228((undefined8 *)((long)pvVar3 + 0x58),shakeStartAction);
            puVar5 = (undefined8 *)((long)pvVar3 + 0x60);
            *puVar5 = uVar4;
            if (iRam0000000003cd3780 != 0) {
              func_0x018dcb10(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                              ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

