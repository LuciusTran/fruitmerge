// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void GetBindComponents(GameObject go) { }
// Ghidra address: 01a0c234; ELF VA: 0x190c234; file offset: 0x1908234
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_SettingDialogForHome_GetBindComponents_1908234
               (TKCommon_SettingDialogForHome *self,void *go,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  ComponentAutoBindTool *self_00;
  void *pvVar3;
  void **ppvVar4;
  
  if ((bRam0000000003ab2660 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386a688);
    NativeHelper_017ef284(PTR_DAT_0386b250);
    NativeHelper_017ef284(PTR_DAT_0386a6a8);
    bRam0000000003ab2660 = 1;
  }
  if ((go != (void *)0x0) &&
     (self_00 = UnityEngine_GameObject_GetComponent_1b75510(go,*(void **)PTR_DAT_0386a6a8),
     puVar2 = PTR_DAT_0386b250, puVar1 = PTR_DAT_0386a688, self_00 != (ComponentAutoBindTool *)0x0))
  {
    pvVar3 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,0,*(void **)PTR_DAT_0386a688);
    self->m_img_sound = pvVar3;
    NativeHelper_017ef228();
    pvVar3 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,1,*(void **)puVar1);
    self->m_img_music = pvVar3;
    NativeHelper_017ef228();
    pvVar3 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,2,*(void **)puVar1);
    self->m_img_vibration = pvVar3;
    NativeHelper_017ef228();
    pvVar3 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,3,*(void **)puVar1);
    self->m_img_avatar = pvVar3;
    NativeHelper_017ef228();
    pvVar3 = ComponentAutoBindTool_GetBindComponent_1b09258(self_00,4,*(void **)puVar2);
    ppvVar4 = &self->m_input_username;
    *ppvVar4 = pvVar3;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppvVar4 >> 0xc & 0x3f),
                      ((ulong)ppvVar4 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

