// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StopExpCountdown() { }
// Ghidra address: 019826dc; ELF VA: 0x18826dc; file offset: 0x187e6dc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StopExpCountdown_187e6dc(MergeFruit *self,void *runtimeMethod)

{
  if (self->expCountdownCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->expCountdownCoroutine,(void *)0x0);
    self->expCountdownCoroutine = (void *)0x0;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)&self->expCountdownCoroutine >> 0xc & 0x3f),
                      ((ulong)&self->expCountdownCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
  return;
}

