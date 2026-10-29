// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private int GetMaxOrder(Transform root) { }
// Ghidra address: 0198ba94; ELF VA: 0x188ba94; file offset: 0x1887a94
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


int BuildHouse_GetMaxOrder_1887a94(BuildHouse *self,void *root,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *self_00;
  uint uVar6;
  
  if ((bRam0000000003ab214e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867990);
    self = (BuildHouse *)NativeHelper_017ef284(PTR_DAT_0385d8b8);
    bRam0000000003ab214e = 1;
  }
  if (root != (void *)0x0) {
    pvVar5 = UnityEngine_Component_GetComponentsInChildren_1b08d60(root,*(void **)PTR_DAT_03867990);
    puVar2 = PTR_DAT_0385d8b8;
    self = (BuildHouse *)0x0;
    if (pvVar5 != (void *)0x0) {
      uVar1 = *(uint *)((long)pvVar5 + 0x18);
      if ((int)uVar1 < 1) {
        iVar4 = -1;
      }
      else {
        uVar6 = 0;
        iVar4 = -1;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef538();
          }
          self_00 = *(void **)((long)pvVar5 + (long)(int)uVar6 * 8 + 0x20);
          self = (BuildHouse *)0x0;
          if (self_00 == (void *)0x0) goto LAB_0198bb88;
          iVar3 = UnityEngine_Renderer_get_sortingOrder_322984c(self_00,(void *)0x0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            NativeHelper_017ef404(*(long *)puVar2);
          }
          iVar4 = NativeHelper_02c10be4(iVar4,iVar3,0);
          uVar1 = *(uint *)((long)pvVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
      if (iVar4 < 0) {
        iVar4 = 0x32;
      }
      return iVar4;
    }
  }
LAB_0198bb88:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(self);
}

