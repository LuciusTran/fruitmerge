// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartExpCountdown() { }
// Ghidra address: 0197e63c; ELF VA: 0x187e63c; file offset: 0x187a63c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StartExpCountdown_187a63c(MergeFruit *self,void *runtimeMethod)

{
  void *pvVar1;
  
  MergeFruit_StopExpCountdown_187e6dc(self,runtimeMethod);
  pvVar1 = (void *)NativeHelper_0198270c(self);
  pvVar1 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar1,(void *)0x0);
  self->expCountdownCoroutine = pvVar1;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)&self->expCountdownCoroutine >> 0xc & 0x3f),
                    ((ulong)&self->expCountdownCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

