// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public virtual void Init(Object[] data) { }
// Ghidra address: 019a6fc8; ELF VA: 0x18a6fc8; file offset: 0x18a2fc8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomeView_Init_18a2fc8(HomeView *self,void *data,void *runtimeMethod)

{
  HomeView *self_00;
  void *pvVar1;
  void **ppvVar2;
  
  if ((bRam0000000003ab2270 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038673b8);
    NativeHelper_017ef284(PTR_DAT_038687e8);
    bRam0000000003ab2270 = 1;
  }
  Game_Controller_View_Init_18d579c((Game_Controller_View *)self,data,(void *)0x0);
  if ((data != (void *)0x0) && (*(long *)((long)data + 0x18) != 0)) {
    if ((int)*(long *)((long)data + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    if (*(long **)((long)data + 0x20) == (long *)0x0) goto LAB_019a70bc;
    if (*(long *)(**(long **)((long)data + 0x20) + 0x40) !=
        *(long *)(*(long *)(PTR_DAT_0385c2d8 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef8b0();
    }
    self_00 = (HomeView *)NativeHelper_017ef410();
    if ((int)*(uint *)self_00 < 1) {
      HomeView_ShowRemoveAdDialog_18a3144(self_00,(void *)(ulong)*(uint *)self_00);
    }
    else {
      pvVar1 = (void *)NativeHelper_019a70c8(self);
      UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar1,(void *)0x0);
    }
  }
  pvVar1 = (void *)NativeHelper_03352a84(*(undefined8 *)PTR_DAT_038687e8,0);
  if (pvVar1 != (void *)0x0) {
    pvVar1 = UnityEngine_GameObject_GetComponent_1b75510(pvVar1,*(void **)PTR_DAT_038673b8);
    ppvVar2 = &self->_uICamera;
    *ppvVar2 = pvVar1;
    if (iRam0000000003cd3780 != 0) {
      func_0x018dcb10(1L << ((ulong)ppvVar2 >> 0xc & 0x3f),
                      ((ulong)ppvVar2 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
    }
    return;
  }
LAB_019a70bc:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

