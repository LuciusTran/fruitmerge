// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool IsUICover() { }
// Ghidra address: 0197f1bc; ELF VA: 0x187f1bc; file offset: 0x187b1bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool MergeFruit_IsUICover_187b1bc(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  void *extraout_x1;
  undefined1 auStack_b4 [68];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  puVar1 = PTR_DAT_038672c8;
  if ((bRam0000000003ab20cf & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038672c8);
    bRam0000000003ab20cf = 1;
    runtimeMethod = extraout_x1;
  }
  lVar5 = *(long *)puVar1;
  uStack_30 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar5,runtimeMethod);
  }
  lVar5 = NativeHelper_03670970(0);
  if (lVar5 != 0) {
    uVar6 = NativeHelper_03672d08(lVar5,0);
    if ((uVar6 & 1) == 0) {
      iVar3 = NativeHelper_033a7d4c(0);
      if (iVar3 < 1) {
        bVar2 = 0;
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        lVar5 = NativeHelper_03670970(0);
        NativeHelper_033a7558(auStack_b4,0,0);
        NativeHelper_036886b0(&uStack_70,auStack_b4,0x44);
        uVar4 = NativeHelper_033a6a14(&uStack_70,0);
        if (lVar5 == 0) goto LAB_0197f2b8;
        bVar2 = NativeHelper_03672d10(lVar5,uVar4,0);
      }
    }
    else {
      bVar2 = 1;
    }
    return (bool)(bVar2 & 1);
  }
LAB_0197f2b8:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

