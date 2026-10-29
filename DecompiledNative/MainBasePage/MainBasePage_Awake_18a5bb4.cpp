// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void Awake() { }
// Ghidra address: 019a9bb4; ELF VA: 0x18a9bb4; file offset: 0x18a5bb4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MainBasePage_Awake_18a5bb4(MainBasePage *self,void *runtimeMethod)

{
  undefined *puVar1;
  void *pvVar2;
  
  puVar1 = PTR_DAT_03867ae0;
  if ((bRam0000000003ab2285 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867ae0);
    bRam0000000003ab2285 = 1;
  }
  pvVar2 = UnityEngine_Component_GetComponent_1b08498(self,*(void **)puVar1);
  self->Group = pvVar2;
  NativeHelper_017ef228();
                    /* WARNING: Could not recover jumptable at 0x019a9c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)self + 0x178))(self,*(undefined8 *)(*(long *)self + 0x180));
  return;
}

