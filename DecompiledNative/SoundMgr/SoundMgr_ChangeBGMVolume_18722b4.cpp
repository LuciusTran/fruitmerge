// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ChangeBGMVolume(float v) { }
// Ghidra address: 019762b4; ELF VA: 0x18762b4; file offset: 0x18722b4
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SoundMgr_ChangeBGMVolume_18722b4(SoundMgr *self,float v,void *runtimeMethod)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  float fVar14;
  
  if ((bRam0000000003ab2073 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab2073 = 1;
  }
  puVar2 = PTR_DAT_0385c2a0;
  if (self->BGMPlayer != (void *)0x0) {
    pvVar12 = UnityEngine_AudioSource_get_clip_3211190(self->BGMPlayer,(void *)0x0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    bVar8 = UnityEngine_object_op_Equality_324f284(pvVar12,(void *)0x0,(void *)0x0);
    if (!bVar8) {
NativeHelper_01960c18:
      puVar2 = PTR_DAT_03865f40;
      uVar1 = _UNK_00a47720;
      pvVar12 = self->BGMPlayer;
      if ((bRam0000000003ab1fab & 1) == 0) {
        NativeHelper_017ef284(PTR_DAT_03865f48,0);
        NativeHelper_017ef284(PTR_DAT_03865f50);
        NativeHelper_017ef284(PTR_DAT_03865f58);
        NativeHelper_017ef284(PTR_DAT_03865f60);
        NativeHelper_017ef284(PTR_DAT_03865f68);
        NativeHelper_017ef284(PTR_DAT_03865f70);
        NativeHelper_017ef284(PTR_DAT_03865f40);
        bRam0000000003ab1fab = 1;
      }
      lVar9 = NativeHelper_017ef520(*(undefined8 *)puVar2);
      NativeHelper_02c51f64(lVar9,0);
      puVar7 = PTR_DAT_03865f70;
      puVar6 = PTR_DAT_03865f68;
      puVar4 = PTR_DAT_03865f58;
      puVar3 = PTR_DAT_03865f50;
      puVar2 = PTR_DAT_03865f48;
      if (lVar9 != 0) {
        puVar13 = (undefined8 *)(lVar9 + 0x10);
        *puVar13 = pvVar12;
        NativeHelper_017ef228(puVar13,pvVar12);
        puVar5 = PTR_DAT_03865f60;
        fVar14 = 0.0;
        if ((0.0 <= v) && (fVar14 = v, 1.0 < v)) {
          fVar14 = 1.0;
        }
        uVar10 = NativeHelper_017ef520(*(undefined8 *)puVar2);
        NativeHelper_0209abd0(uVar10,lVar9,*(undefined8 *)puVar6,0);
        uVar11 = NativeHelper_017ef520(*(undefined8 *)puVar3);
        NativeHelper_0209bcfc(uVar11,lVar9,*(undefined8 *)puVar7,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        uVar10 = NativeHelper_01a50ebc(fVar14,uVar1,uVar10,uVar11,0);
        NativeHelper_01d70028(uVar10,*puVar13,*(undefined8 *)puVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530();
    }
    pvVar12 = self->BGMs;
    if (pvVar12 != (void *)0x0) {
      if (*(int *)((long)pvVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
      if (self->BGMPlayer != (void *)0x0) {
        UnityEngine_AudioSource_set_clip_3211280
                  (self->BGMPlayer,*(void **)((long)pvVar12 + 0x20),(void *)0x0);
        if (self->BGMPlayer != (void *)0x0) {
          NativeHelper_033153b8(self->BGMPlayer,0);
          goto NativeHelper_01960c18;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

