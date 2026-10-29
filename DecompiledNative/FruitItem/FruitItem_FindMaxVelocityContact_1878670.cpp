// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private ContactPoint2D FindMaxVelocityContact(Collision2D collision) { }
// Ghidra address: 0197c670; ELF VA: 0x187c670; file offset: 0x1878670
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * FruitItem_FindMaxVelocityContact_1878670(FruitItem *self,void *collision,void *runtimeMethod)

{
  undefined *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *in_x8;
  int index;
  float fVar4;
  float fVar5;
  Recovered_Vector2 RVar6;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (collision != (void *)0x0) {
    pvVar3 = UnityEngine_Collision2D_get_contacts_32aab08(collision,(void *)0x0);
    self = (FruitItem *)0x0;
    if (pvVar3 != (void *)0x0) {
      if (*(int *)((long)pvVar3 + 0x18) != 0) {
        uStack_98 = *(undefined8 *)((long)pvVar3 + 0x28);
        uStack_a0 = *(undefined8 *)((long)pvVar3 + 0x20);
        uStack_88 = *(undefined8 *)((long)pvVar3 + 0x38);
        uStack_90 = *(undefined8 *)((long)pvVar3 + 0x30);
        uStack_78 = *(undefined8 *)((long)pvVar3 + 0x48);
        uStack_80 = *(undefined8 *)((long)pvVar3 + 0x40);
        uStack_68 = *(undefined8 *)((long)pvVar3 + 0x58);
        uStack_70 = *(undefined8 *)((long)pvVar3 + 0x50);
        UnityEngine_Collision2D_GetContact_32aab8c(collision,0,(void *)0x0);
        RVar6 = UnityEngine_ContactPoint2D_get_relativeVelocity_32aac94(&uStack_e0,(void *)0x0);
        if (cRam0000000003ab1f82 == '\0') {
          NativeHelper_017ef284(PTR_DAT_0385d8b8);
          cRam0000000003ab1f82 = '\x01';
        }
        puVar1 = PTR_DAT_0385d8b8;
        if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
          NativeHelper_017ef404();
        }
        uVar2 = UnityEngine_Collision2D_get_contactCount_32aab84(collision,(void *)0x0);
        if (1 < (int)uVar2) {
          index = 1;
          fVar5 = SQRT(RVar6.component0 * RVar6.component0 + RVar6.component1 * RVar6.component1);
          do {
            UnityEngine_Collision2D_GetContact_32aab8c(collision,index,(void *)0x0);
            uStack_118 = uStack_158;
            uStack_120 = uStack_160;
            uStack_108 = uStack_148;
            uStack_110 = uStack_150;
            uStack_f8 = uStack_138;
            uStack_100 = uStack_140;
            uStack_e8 = uStack_128;
            uStack_f0 = uStack_130;
            RVar6 = UnityEngine_ContactPoint2D_get_relativeVelocity_32aac94(&uStack_120,(void *)0x0)
            ;
            if (cRam0000000003ab1f82 == '\0') {
              NativeHelper_017ef284(puVar1);
              cRam0000000003ab1f82 = '\x01';
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              NativeHelper_017ef404();
            }
            fVar4 = SQRT(RVar6.component0 * RVar6.component0 + RVar6.component1 * RVar6.component1);
            if (fVar5 < fVar4) {
              uStack_98 = uStack_118;
              uStack_a0 = uStack_120;
              uStack_88 = uStack_108;
              uStack_90 = uStack_110;
              uStack_78 = uStack_f8;
              uStack_80 = uStack_100;
              uStack_68 = uStack_e8;
              uStack_70 = uStack_f0;
              fVar5 = fVar4;
            }
            index = index + 1;
            uVar2 = UnityEngine_Collision2D_get_contactCount_32aab84(collision,(void *)0x0);
          } while (index < (int)uVar2);
        }
        in_x8[1] = uStack_98;
        *in_x8 = uStack_a0;
        in_x8[3] = uStack_88;
        in_x8[2] = uStack_90;
        in_x8[5] = uStack_78;
        in_x8[4] = uStack_80;
        in_x8[7] = uStack_68;
        in_x8[6] = uStack_70;
        return (void *)(ulong)uVar2;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530(self);
}

