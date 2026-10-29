// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GetBindComponents(GameObject go) { }
// Ghidra address: 01a0bb00; ELF VA: 0x190bb00; file offset: 0x1907b00
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_SettingDialog_GetBindComponents_1907b00
               (TKCommon_SettingDialog *self,void *go,void *runtimeMethod)

{
  undefined *puVar1;
  ComponentAutoBindTool *self_00;
  void *pvVar2;
  void **ppvVar3;
  
  if ((bRam0000000003ab265a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a688);
    NativeHelper_017ef284(PTR_DAT_0386a6a8);
    bRam0000000003ab265a = 1;
  }
  if ((go != (void *)0x0) &&
     (self_00 = UnityEngine_GameObject_GetComponent_1b75510(go,*(void **)PTR_DAT_0386a6a8),
     puVar1 = PTR_DAT_0386a688, self_00 != (ComponentAutoBindTool *)0x0)) {
    pvVar2 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0,*(void **)PTR_DAT_0386a688);
    self->m_img_sound = pvVar2;
    NativeHelper_017ef228();
    pvVar2 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,1,*(void **)puVar1);
    self->m_img_music = pvVar2;
    NativeHelper_017ef228();
    pvVar2 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,2,*(void **)puVar1);
    ppvVar3 = &self->m_img_vibration;
    *ppvVar3 = pvVar2;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppvVar3 >> 0xc & 0x3f),
                      ((ulong)ppvVar3 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

