// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void QuitGame() { }
// Ghidra address: 0197e674; ELF VA: 0x187e674; file offset: 0x187a674
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_QuitGame_187a674(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  long lVar2;
  void *extraout_x1;
  void *runtimeMethod_00;
  undefined8 uVar3;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  if ((bRam0000000003ab20c5 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20c5 = 1;
    runtimeMethod = extraout_x1;
  }
  MergeFruit_SaveFruits_187a718(self,runtimeMethod);
  MergeFruit_StopRedLineAnimation_187aa30(self,runtimeMethod_00);
  if (self->_createCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->_createCoroutine,(void *)0x0);
  }
  puVar1 = PTR_DAT_0385c2a0;
  if (self->_waitingFinishGameCoroutine != (void *)0x0) {
    UnityEngine_MonoBehaviour_StopCoroutine_324ffd8
              (self,self->_waitingFinishGameCoroutine,(void *)0x0);
  }
  lVar2 = NativeHelper_0334f4c8(self,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  puVar1 = PTR_DAT_0385c2a0;
  uVar3 = 0;
  if ((bRam0000000003abb946 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0,0);
    bRam0000000003abb946 = 1;
    uVar3 = extraout_x1_00;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
    uVar3 = extraout_x1_01;
  }
  puVar1 = PTR_DAT_038a6cb0;
  if ((bRam0000000003abb945 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038a6cb0,uVar3);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003abb945 = 1;
  }
  if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
    NativeHelper_01827500();
  }
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
  }
  if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  if (pcRam0000000003abb988 == (code *)0x0) {
    pcRam0000000003abb988 = (code *)NativeHelper_017ef240(&UNK_00a562d4);
  }
                    /* WARNING: Could not recover jumptable at 0x03357b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003abb988)(0,uVar3);
  return;
}

