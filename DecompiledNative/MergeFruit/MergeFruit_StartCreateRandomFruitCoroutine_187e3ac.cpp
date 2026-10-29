// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartCreateRandomFruitCoroutine() { }
// Ghidra address: 019823ac; ELF VA: 0x18823ac; file offset: 0x187e3ac
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_StartCreateRandomFruitCoroutine_187e3ac(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  void **ppvVar6;
  
  if ((bRam0000000003ab20e1 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03867400);
    bRam0000000003ab20e1 = 1;
  }
  puVar2 = PTR_DAT_03867400;
  puVar1 = PTR_DAT_0385c9f8;
  ppvVar6 = &self->_createCoroutine;
  if (*ppvVar6 != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,*ppvVar6,(void *)0x0);
  }
  uVar3 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  uVar4 = NativeHelper_02b8e36c(uVar3,self,*(undefined8 *)puVar2,0);
  pvVar5 = (void *)NativeHelper_01980eb0(_UNK_00a47720,uVar4,uVar3);
  pvVar5 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar5,(void *)0x0);
  self->_createCoroutine = pvVar5;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)ppvVar6 >> 0xc & 0x3f),
                    ((ulong)ppvVar6 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

