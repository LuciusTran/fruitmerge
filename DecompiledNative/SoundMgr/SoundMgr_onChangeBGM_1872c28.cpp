// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void onChangeBGM(int id, float volume) { }
// Ghidra address: 01976c28; ELF VA: 0x1876c28; file offset: 0x1872c28
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoundMgr_onChangeBGM_1872c28(SoundMgr *self,int id,float volume,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  void *message;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_03866eb8;
  if ((bRam0000000003ab207c & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c360);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03866ec0);
    NativeHelper_017ef284(PTR_DAT_03866ec8);
    NativeHelper_017ef284(PTR_DAT_03866eb8);
    NativeHelper_017ef284(PTR_DAT_03866ed0);
    bRam0000000003ab207c = 1;
  }
  lVar6 = NativeHelper_017ef520(*(undefined8 *)puVar1);
  NativeHelper_02c51f64(lVar6,0);
  puVar5 = PTR_DAT_03866ed0;
  puVar4 = PTR_DAT_03866ec8;
  puVar3 = PTR_DAT_03866ec0;
  puVar2 = PTR_DAT_03866068;
  puVar1 = PTR_DAT_0385c360;
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = self;
    NativeHelper_017ef228((undefined8 *)(lVar6 + 0x10),self);
    *(int *)(lVar6 + 0x18) = id;
    *(float *)(lVar6 + 0x1c) = volume;
    uVar7 = NativeHelper_02c0d29c((int *)(lVar6 + 0x18),0);
    message = (void *)NativeHelper_02a9c49c(*(undefined8 *)puVar5,uVar7,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1);
    }
    UnityEngine_Debug_Log_321dd14(message,(void *)0x0);
    NativeHelper_01a630d4(self->BGMPlayer,0,0);
    lVar8 = NativeHelper_01960c18(0,_UNK_00a47720,self->BGMPlayer,0);
    uVar7 = NativeHelper_017ef520(*(undefined8 *)puVar2);
    NativeHelper_01a4f8cc(uVar7,lVar6,*(undefined8 *)puVar4,0);
    uVar9 = *(undefined8 *)puVar3;
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
      *(undefined8 *)(lVar8 + 0x80) = uVar7;
      NativeHelper_017ef228((undefined8 *)(lVar8 + 0x80),uVar7,uVar9);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

