// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StopSoundGradual() { }
// Ghidra address: 01976ad8; ELF VA: 0x1876ad8; file offset: 0x1872ad8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_StopSoundGradual_1872ad8(SoundMgr *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *extraout_x1;
  void **ppvVar5;
  
  puVar2 = PTR_DAT_03866ea8;
  puVar1 = PTR_DAT_0385c9f8;
  if ((bRam0000000003ab207a & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03866ea8);
    bRam0000000003ab207a = 1;
    runtimeMethod = extraout_x1;
  }
  uVar3 = NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_02b8e36c(uVar3,self,*(undefined8 *)puVar2,0);
  pvVar4 = (void *)NativeHelper_01976b78(self,uVar3);
  pvVar4 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar4,(void *)0x0);
  ppvVar5 = &self->stopCoroutine;
  *ppvVar5 = pvVar4;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)ppvVar5 >> 0xc & 0x3f),
                    ((ulong)ppvVar5 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

