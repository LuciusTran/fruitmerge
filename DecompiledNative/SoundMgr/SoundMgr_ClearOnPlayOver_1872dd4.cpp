// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClearOnPlayOver() { }
// Ghidra address: 01976dd4; ELF VA: 0x1876dd4; file offset: 0x1872dd4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_ClearOnPlayOver_1872dd4(SoundMgr *self,void *runtimeMethod)

{
  LocalNotification_Action **ppLVar1;
  
  ppLVar1 = &self->_onPlayOver;
  *ppLVar1 = (LocalNotification_Action *)0x0;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)ppLVar1 >> 0xc & 0x3f),
                    ((ulong)ppLVar1 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

