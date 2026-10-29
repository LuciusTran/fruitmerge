// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool TryGetImgTitleVerticalScreenRange(out float bottomScreenY, out float topScreenY) { }
// Ghidra address: 019f4c10; ELF VA: 0x18f4c10; file offset: 0x18f0c10
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView_TryGetImgTitleVerticalScreenRange_18f0c10
               (TKCommon_PlayGameView *self,float *bottomScreenY,float *topScreenY,
               void *runtimeMethod)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  void *x;
  void *pvVar4;
  void *fourCornersArray;
  float *extraout_x1;
  float *runtimeMethod_00;
  void *runtimeMethod_01;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  
  puVar2 = PTR_DAT_0385c2a0;
  runtimeMethod_00 = bottomScreenY;
  if ((bRam0000000003ab2595 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03865268);
    NativeHelper_017ef284(PTR_DAT_038661f0);
    bRam0000000003ab2595 = 1;
    runtimeMethod_00 = extraout_x1;
  }
  *bottomScreenY = 0.0;
  *topScreenY = 0.0;
  x = TKCommon_PlayGameView_GetImgTitleRectTransform_18f0dc4(self,runtimeMethod_00);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar2);
  }
  bVar3 = UnityEngine_object_op_Equality_324f284(x,(void *)0x0,(void *)0x0);
  if (!bVar3) {
    pvVar4 = TKCommon_PlayGameView_GetUICamera_18f0ef4(self,runtimeMethod_01);
    fourCornersArray = (void *)NativeHelper_017ef374(*(undefined8 *)PTR_DAT_038661f0,4);
    if (x != (void *)0x0) {
      UnityEngine_RectTransform_GetWorldCorners_325a14c(x,fourCornersArray,(void *)0x0);
      *bottomScreenY = 3.4028235e+38;
      *topScreenY = -3.4028235e+38;
      puVar2 = PTR_DAT_03865268;
      if (fourCornersArray != (void *)0x0) {
        if (0 < (int)*(ulong *)((long)fourCornersArray + 0x18)) {
          uVar6 = 0;
          uVar5 = *(ulong *)((long)fourCornersArray + 0x18) & 0xffffffff;
          puVar7 = (undefined4 *)((long)fourCornersArray + 0x28);
          do {
            if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef538();
            }
            uVar9 = puVar7[-2];
            fVar10 = (float)puVar7[-1];
            uVar11 = *puVar7;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            NativeHelper_0364276c(uVar9,fVar10,uVar11,pvVar4,0);
            uVar1 = *(uint *)((long)fourCornersArray + 0x18);
            uVar5 = (ulong)uVar1;
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 3;
            fVar8 = *bottomScreenY;
            if (fVar10 <= *bottomScreenY) {
              fVar8 = fVar10;
            }
            *bottomScreenY = fVar8;
            fVar8 = *topScreenY;
            if (*topScreenY <= fVar10) {
              fVar8 = fVar10;
            }
            *topScreenY = fVar8;
          } while ((long)uVar6 < (long)(int)uVar1);
        }
        goto LAB_019f4d94;
      }
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
LAB_019f4d94:
  return (bool)((bVar3 ^ 0xffU) & 1);
}

