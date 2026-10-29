// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019a9a3c; ELF VA: 0x18a9a3c; file offset: 0x18a5a3c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool HomeView__WaitAndShowDailyQuest_d__25_MoveNext_18a5a3c
               (HomeView__WaitAndShowDailyQuest_d__25 *self,void *runtimeMethod)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *self_00;
  void *extraout_x1;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003ab2284 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c390);
    NativeHelper_017ef284(PTR_DAT_0385d380);
    NativeHelper_017ef284(PTR_DAT_038687b8);
    bRam0000000003ab2284 = 1;
    runtimeMethod = extraout_x1;
  }
  puVar3 = PTR_DAT_0385d380;
  puVar2 = PTR_DAT_0385c390;
  iVar1 = self->__1__state;
  if (iVar1 == 0) {
    self->__1__state = -1;
    self_00 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar3,runtimeMethod);
    UnityEngine_WaitForSeconds_WaitForSeconds_32555e8(self_00,_UNK_00a47714,(void *)0x0);
    self->__2__current = self_00;
    NativeHelper_017ef228(&self->__2__current,self_00);
    self->__1__state = 1;
  }
  else if (iVar1 == 1) {
    self->__1__state = -1;
    lVar5 = *(long *)puVar2;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      NativeHelper_01827500(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = NativeHelper_018274a4();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = NativeHelper_018274a4();
    }
    Game_Controller_FMViewController_ShowView_18d6f2c
              (*(void **)PTR_DAT_038687b8,false,(void *)**(undefined8 **)(lVar4 + 0xb8),(void *)0x0)
    ;
  }
  return iVar1 == 0;
}

