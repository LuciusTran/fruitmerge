// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshStartPack() { }
// Ghidra address: 019a5da4; ELF VA: 0x18a5da4; file offset: 0x18a1da4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomePage_RefreshStartPack_18a1da4(HomePage *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  IAPItemManager *self_00;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_0385d920;
  if ((bRam0000000003ab225f & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d920);
    bRam0000000003ab225f = 1;
  }
  self_00 = Singleton_get_Instance_27784f4(*(void **)puVar1);
  if (self_00 != (IAPItemManager *)0x0) {
    bVar2 = IAPItemManager_get_IsStarterBundleActive_18100b4(self_00,(void *)0x0);
    pvVar3 = self->m_StarterPackButton;
    if (bVar2) {
      if ((pvVar3 == (void *)0x0) || (lVar4 = NativeHelper_0334f4c8(pvVar3,0), lVar4 == 0))
      goto LAB_019a5e34;
      uVar5 = 0;
    }
    else {
      if ((pvVar3 == (void *)0x0) || (lVar4 = NativeHelper_0334f4c8(pvVar3,0), lVar4 == 0))
      goto LAB_019a5e34;
      uVar5 = 1;
    }
    if ((bRam0000000003abb79b & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a76a8,uVar5,0);
      bRam0000000003abb79b = 1;
    }
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        if (pcRam0000000003abb800 == (code *)0x0) {
          pcRam0000000003abb800 = (code *)NativeHelper_017ef240(&UNK_00a6d148);
        }
                    /* WARNING: Could not recover jumptable at 0x033523d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003abb800)(lVar4,uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8();
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_019a5e34:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

