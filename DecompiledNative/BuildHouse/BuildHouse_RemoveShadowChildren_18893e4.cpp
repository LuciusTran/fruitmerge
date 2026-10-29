// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RemoveShadowChildren(Transform item) { }
// Ghidra address: 0198d3e4; ELF VA: 0x188d3e4; file offset: 0x18893e4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_RemoveShadowChildren_18893e4(BuildHouse *self,void *item,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam0000000003ab2151 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03865f58);
    self = (BuildHouse *)NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2151 = 1;
  }
  if (item != (void *)0x0) {
    iVar3 = NativeHelper_0335fe50(item,0);
    puVar2 = PTR_DAT_03865f58;
    puVar1 = PTR_DAT_0385c2a0;
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        lVar4 = NativeHelper_0336077c(item,iVar6,0);
        self = (BuildHouse *)0x0;
        if (lVar4 == 0) goto LAB_0198d4f8;
        uVar5 = NativeHelper_0334f4c8(lVar4,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar2);
        }
        NativeHelper_01a53364(uVar5,0,0);
        lVar4 = NativeHelper_0336077c(item,iVar6,0);
        self = (BuildHouse *)0x0;
        if (lVar4 == 0) goto LAB_0198d4f8;
        uVar5 = NativeHelper_0334f4c8(lVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404(*(long *)puVar1);
        }
        NativeHelper_03357b5c(uVar5,0);
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
    return;
  }
LAB_0198d4f8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(self);
}

