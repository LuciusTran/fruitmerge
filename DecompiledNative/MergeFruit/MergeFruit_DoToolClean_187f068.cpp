// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void DoToolClean() { }
// Ghidra address: 01983068; ELF VA: 0x1883068; file offset: 0x187f068
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_DoToolClean_187f068(MergeFruit *self,void *runtimeMethod)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  void *routine;
  long lVar4;
  uint uVar5;
  
  if ((bRam0000000003ab20f6 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    bRam0000000003ab20f6 = 1;
  }
  if (self->_gameState == 0) {
    if ((self->m_GamePanel == (void *)0x0) ||
       (pvVar3 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                           (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar3 == (void *)0x0)) {
LAB_01983140:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    uVar1 = *(uint *)((long)pvVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        lVar4 = *(long *)((long)pvVar3 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_01983140;
        if (*(uint *)(lVar4 + 0x20) < 2) {
          if (*(void **)(lVar4 + 0x28) == (void *)0x0) goto LAB_01983140;
          bVar2 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c
                            (*(void **)(lVar4 + 0x28),(void *)0x0);
          if (!bVar2) {
            routine = (void *)NativeHelper_0197aac4(lVar4,0);
            UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,routine,(void *)0x0);
          }
        }
        uVar1 = *(uint *)((long)pvVar3 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return;
}

