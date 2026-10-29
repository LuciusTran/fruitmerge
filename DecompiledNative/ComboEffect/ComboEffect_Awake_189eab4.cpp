// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 019a2ab4; ELF VA: 0x18a2ab4; file offset: 0x189eab4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void ComboEffect_Awake_189eab4(ComboEffect *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *extraout_x1;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003ab223f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_038685d8);
    NativeHelper_017ef284(PTR_DAT_038685e0);
    bRam0000000003ab223f = 1;
    runtimeMethod = extraout_x1;
  }
  puVar2 = PTR_DAT_038685d8;
  puVar1 = PTR_DAT_0385c9f8;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = runtimeMethod;
  auVar6 = auVar6 << 0x40;
  if (self->m_Animator != (void *)0x0) {
    pvVar3 = UnityEngine_Component_GetComponent_1b08498(self->m_Animator,*(void **)PTR_DAT_038685e0)
    ;
    uVar4 = NativeHelper_017ef520(*(undefined8 *)puVar1);
    auVar6 = NativeHelper_02b8e36c(uVar4,self,*(undefined8 *)puVar2,0);
    if (pvVar3 != (void *)0x0) {
      puVar5 = (undefined8 *)((long)pvVar3 + 0x20);
      *puVar5 = uVar4;
      if (iRam0000000003cd3780 != 0) {
        func_0x018dcb10(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                        ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(auVar6._0_8_,auVar6._8_8_);
}

