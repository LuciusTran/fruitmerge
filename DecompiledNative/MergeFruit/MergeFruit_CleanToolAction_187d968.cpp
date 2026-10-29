// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void CleanToolAction() { }
// Ghidra address: 01981968; ELF VA: 0x1881968; file offset: 0x187d968
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_CleanToolAction_187d968(MergeFruit *self,void *runtimeMethod)

{
  self->_cleanAction = (LocalNotification_Action *)0x0;
  NativeHelper_017ef228(&self->_cleanAction,0);
  self->_bombAction = (LocalNotification_Action *)0x0;
  NativeHelper_017ef228(&self->_bombAction,0);
  self->_upgradeAction = (LocalNotification_Action *)0x0;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)&self->_upgradeAction >> 0xc & 0x3f),
                    ((ulong)&self->_upgradeAction >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

