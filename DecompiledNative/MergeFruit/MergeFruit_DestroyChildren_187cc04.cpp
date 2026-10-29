// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void DestroyChildren(Transform root) { }
// Ghidra address: 01980c04; ELF VA: 0x1880c04; file offset: 0x187cc04
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_DestroyChildren_187cc04(MergeFruit *self,void *root,void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003ab20cd & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867358);
    NativeHelper_017ef284(PTR_DAT_03867360);
    NativeHelper_017ef284(PTR_DAT_03867368);
    NativeHelper_017ef284(PTR_DAT_03867370);
    NativeHelper_017ef284(PTR_DAT_03867378);
    NativeHelper_017ef284(PTR_DAT_03867380);
    NativeHelper_017ef284(PTR_DAT_03867388);
    NativeHelper_017ef284(PTR_DAT_03867390);
    self = (MergeFruit *)NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20cd = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (root == (void *)0x0) {
LAB_01980e58:
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530(self);
  }
  iVar6 = NativeHelper_0335fe50(root,0);
  puVar2 = PTR_DAT_03867358;
  if (0 < iVar6) {
    iVar12 = 0;
    do {
      pvVar7 = (void *)NativeHelper_0336077c(root,iVar12,0);
      self = (MergeFruit *)0x0;
      if (pvVar7 == (void *)0x0) goto LAB_01980e58;
      pvVar7 = UnityEngine_Component_GetComponent_1b08498(pvVar7,*(void **)puVar2);
      self = (MergeFruit *)0x0;
      if (pvVar7 == (void *)0x0) goto LAB_01980e58;
      self = (MergeFruit *)0x0;
      if (*(void **)((long)pvVar7 + 0x28) == (void *)0x0) goto LAB_01980e58;
      UnityEngine_Rigidbody2D_set_isKinematic_32ab934
                (*(void **)((long)pvVar7 + 0x28),true,(void *)0x0);
      iVar12 = iVar12 + 1;
    } while (iVar6 != iVar12);
  }
  puVar2 = PTR_DAT_03867388;
  lVar8 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03867390);
  self = (MergeFruit *)NativeHelper_02568f74(lVar8,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_03867378;
  if (iVar6 < 1) {
    if (lVar8 == 0) goto LAB_01980e58;
  }
  else {
    iVar12 = 0;
    do {
      lVar9 = NativeHelper_0336077c(root,iVar12,0);
      self = (MergeFruit *)0x0;
      if ((lVar9 == 0) || (self = (MergeFruit *)NativeHelper_0334f4c8(lVar9,0), lVar8 == 0))
      goto LAB_01980e58;
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_01980e58;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(MergeFruit **)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = self;
        NativeHelper_017ef228();
      }
      else {
        NativeHelper_025697dc
                  (lVar8,self,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      iVar12 = iVar12 + 1;
    } while (iVar6 != iVar12);
  }
  puVar4 = PTR_DAT_03867368;
  puVar3 = PTR_DAT_03867360;
  puVar2 = PTR_DAT_0385c2a0;
  NativeHelper_0256a338(&uStack_48,lVar8,*(undefined8 *)PTR_DAT_03867380);
  while (uVar10 = NativeHelper_02240184(&uStack_48,*(undefined8 *)puVar4), uVar5 = uStack_38,
        (uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    NativeHelper_03357ca8(uVar5,0);
  }
  NativeHelper_02240180(&uStack_48,*(undefined8 *)puVar3);
  return;
}

