// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClearFruitsByRevive() { }
// Ghidra address: 01980f8c; ELF VA: 0x1880f8c; file offset: 0x187cf8c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_ClearFruitsByRevive_187cf8c(MergeFruit *self,void *runtimeMethod)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *extraout_x1;
  void *runtimeMethod_00;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *extraout_x1_02;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  long lVar4;
  uint uVar5;
  float fVar6;
  Recovered_Vector3 RVar7;
  Recovered_Vector3 RVar8;
  undefined1 auStack_58 [16];
  float fStack_48;
  
  if ((bRam0000000003ab20d3 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867118);
    bRam0000000003ab20d3 = 1;
    runtimeMethod = extraout_x1;
  }
  MergeFruit_ResetStatus_187d0d8(self,runtimeMethod);
  MergeFruit_StopRedLineAnimation_187aa30(self,runtimeMethod_00);
  if ((self->m_GamePanel != (void *)0x0) &&
     (pvVar2 = UnityEngine_Component_GetComponentsInChildren_1b08d60
                         (self->m_GamePanel,*(void **)PTR_DAT_03867118), pvVar2 != (void *)0x0)) {
    uVar1 = *(uint *)((long)pvVar2 + 0x18);
    pvVar3 = extraout_x1_00;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          NativeHelper_017ef538();
        }
        lVar4 = *(long *)((long)pvVar2 + (long)(int)uVar5 * 8 + 0x20);
        if ((lVar4 == 0) || (pvVar3 = (void *)NativeHelper_0334f400(lVar4,0), pvVar3 == (void *)0x0)
           ) goto LAB_019810d0;
        RVar7 = UnityEngine_Transform_get_position_325a714(pvVar3,(void *)0x0);
        if (*(long *)(lVar4 + 0x38) == 0) goto LAB_019810d0;
        NativeHelper_0332c240
                  (auStack_58,RVar7.component0,RVar7.component1,RVar7.component2,
                   *(long *)(lVar4 + 0x38),0);
        fVar6 = fStack_48;
        if ((self->m_ClearLine == (void *)0x0) ||
           (pvVar3 = (void *)NativeHelper_0334f400(self->m_ClearLine,0), pvVar3 == (void *)0x0))
        goto LAB_019810d0;
        RVar8 = UnityEngine_Transform_get_position_325a714(pvVar3,(void *)0x0);
        fVar6 = RVar7.component1 + fVar6;
        pvVar3 = extraout_x1_01;
        if (RVar8.component1 <= fVar6) {
          pvVar3 = (void *)NativeHelper_0197aac4(fVar6,RVar8.component1,RVar8.component2,lVar4,0);
          UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar3,(void *)0x0);
          pvVar3 = extraout_x1_02;
        }
        uVar1 = *(uint *)((long)pvVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    MergeFruit_DestroyCurrentFruit_187d188(self,pvVar3);
    MergeFruit_CreateRandomFruitItem_187a5cc(self,runtimeMethod_01);
    MergeFruit_SaveFruits_187a718(self,runtimeMethod_02);
    return;
  }
LAB_019810d0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

