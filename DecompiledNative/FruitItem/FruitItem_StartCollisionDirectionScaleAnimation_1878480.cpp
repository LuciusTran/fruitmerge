// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartCollisionDirectionScaleAnimation(Vector3 collisionNormal) { }
// Ghidra address: 0197c480; ELF VA: 0x187c480; file offset: 0x1878480
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_StartCollisionDirectionScaleAnimation_1878480
               (FruitItem *self,Recovered_Vector3 collisionNormal,void *runtimeMethod)

{
  void *self_00;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Recovered_Vector3 RVar8;
  
  if ((bRam0000000003ab20b3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867138);
    NativeHelper_017ef284(PTR_DAT_03866068);
    NativeHelper_017ef284(PTR_DAT_03867140);
    NativeHelper_017ef284(PTR_DAT_03867148);
    NativeHelper_017ef284(PTR_DAT_03867150);
    bRam0000000003ab20b3 = 1;
  }
  if (self->isScaleAnimationPlaying != false) {
    return;
  }
  self->isScaleAnimationPlaying = true;
  self_00 = (void *)NativeHelper_0334f400(self,0);
  if (self_00 != (void *)0x0) {
    RVar8 = UnityEngine_Transform_get_localScale_325ae78(self_00,(void *)0x0);
    fVar7 = RVar8.component2;
    fVar6 = RVar8.component1;
    fVar4 = RVar8.component0;
    if (cRam0000000003ab212b == '\0') {
      NativeHelper_017ef284(PTR_DAT_0385d8b8);
      cRam0000000003ab212b = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    fVar5 = SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6) * (1.0 - self->minScaleFactor);
    uVar1 = NativeHelper_0334f400(self,0);
    uVar1 = NativeHelper_01a5e5fc
                      (fVar4 - collisionNormal.component0 * fVar5,
                       fVar6 - collisionNormal.component1 * fVar5,
                       fVar7 - collisionNormal.component2 * fVar5,self->scaleAnimationDuration * 0.5
                       ,uVar1,0);
    uVar1 = NativeHelper_01d6fa88(uVar1,5,*(undefined8 *)PTR_DAT_03867148);
    lVar2 = NativeHelper_01d70168(uVar1,1,*(undefined8 *)PTR_DAT_03867150);
    uVar1 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_03866068);
    NativeHelper_01a4f8cc(uVar1,self,*(undefined8 *)PTR_DAT_03867138,0);
    uVar3 = *(undefined8 *)PTR_DAT_03867140;
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
      *(undefined8 *)(lVar2 + 0x80) = uVar1;
      NativeHelper_017ef228((undefined8 *)(lVar2 + 0x80),uVar1,uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

