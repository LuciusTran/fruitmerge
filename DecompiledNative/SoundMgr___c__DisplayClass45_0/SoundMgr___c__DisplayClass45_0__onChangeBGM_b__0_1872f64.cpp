// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal void <onChangeBGM>b__0() { }
// Ghidra address: 01976f64; ELF VA: 0x1876f64; file offset: 0x1872f64
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 SoundMgr___c__DisplayClass45_0__onChangeBGM_b__0_1872f64(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if ((lVar10 != 0) && (lVar11 = *(long *)(lVar10 + 0x58), lVar11 != 0)) {
    if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    if (*(void **)(lVar10 + 0x50) != (void *)0x0) {
      UnityEngine_AudioSource_set_clip_3211280
                (*(void **)(lVar10 + 0x50),
                 *(void **)(lVar11 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20),(void *)0x0);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x50), lVar10 != 0)) {
        NativeHelper_033153b8(lVar10,0);
        puVar2 = PTR_DAT_03865f40;
        uVar1 = _UNK_00a47720;
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x50);
          fVar13 = *(float *)(param_1 + 0x1c);
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
          lVar10 = NativeHelper_017ef520(*(undefined8 *)puVar2);
          NativeHelper_02c51f64(lVar10,0);
          puVar7 = PTR_DAT_03865f70;
          puVar6 = PTR_DAT_03865f68;
          puVar4 = PTR_DAT_03865f58;
          puVar3 = PTR_DAT_03865f50;
          puVar2 = PTR_DAT_03865f48;
          if (lVar10 != 0) {
            puVar12 = (undefined8 *)(lVar10 + 0x10);
            *puVar12 = uVar9;
            NativeHelper_017ef228(puVar12,uVar9);
            puVar5 = PTR_DAT_03865f60;
            fVar14 = 0.0;
            if ((0.0 <= fVar13) && (fVar14 = fVar13, 1.0 < fVar13)) {
              fVar14 = 1.0;
            }
            uVar9 = NativeHelper_017ef520(*(undefined8 *)puVar2);
            NativeHelper_0209abd0(uVar9,lVar10,*(undefined8 *)puVar6,0);
            uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar3);
            NativeHelper_0209bcfc(uVar8,lVar10,*(undefined8 *)puVar7,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            uVar9 = NativeHelper_01a50ebc(fVar14,uVar1,uVar9,uVar8,0);
            NativeHelper_01d70028(uVar9,*puVar12,*(undefined8 *)puVar5);
            return uVar9;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef530();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

