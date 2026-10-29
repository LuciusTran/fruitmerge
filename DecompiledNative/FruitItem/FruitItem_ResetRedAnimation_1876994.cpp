// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void ResetRedAnimation() { }
// Ghidra address: 0197a994; ELF VA: 0x187a994; file offset: 0x1876994
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_ResetRedAnimation_1876994(FruitItem *self,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int maxExclusive;
  Game_UserData *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  void **ppvVar8;
  Recovered_Vector3 value;
  Recovered_Color value_00;
  
  if (self->_finishAnimator != (void *)0x0) {
    bVar2 = UnityEngine_Behaviour_get_enabled_324ab58(self->_finishAnimator,(void *)0x0);
    if (!bVar2) {
      return;
    }
    if (self->_finishAnimator != (void *)0x0) {
      UnityEngine_Behaviour_set_enabled_324ac04(self->_finishAnimator,false,(void *)0x0);
      if (self->_sprite != (void *)0x0) {
        value_00.component2 = 1.0;
        value_00.component3 = 1.0;
        value_00.component0 = 1.0;
        value_00.component1 = 1.0;
        UnityEngine_SpriteRenderer_set_color_3215380(self->_sprite,value_00,(void *)0x0);
        pvVar7 = (void *)NativeHelper_0334f400(self,0);
        if (pvVar7 != (void *)0x0) {
          value.component2 = 1.0;
          value.component0 = 1.0;
          value.component1 = 1.0;
          UnityEngine_Transform_set_localScale_325af4c(pvVar7,value,(void *)0x0);
          if (self->_sprite == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            NativeHelper_017ef530();
          }
          UnityEngine_SpriteRenderer_set_sprite_321501c
                    (self->_sprite,self->_normalSprite,(void *)0x0);
          *(undefined4 *)&self->field_0x98 = 0;
          if ((bRam0000000003ab20a6 & 1) == 0) {
            NativeHelper_017ef284(PTR_DAT_0385c9f8);
            NativeHelper_017ef284(PTR_DAT_038670a0);
            NativeHelper_017ef284(PTR_DAT_0385db10);
            bRam0000000003ab20a6 = 1;
          }
          if (self->_rigidbody2D != (void *)0x0) {
            bVar2 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c(self->_rigidbody2D,(void *)0x0);
            if (bVar2) {
              return;
            }
            ppvVar8 = &self->_waitingBlinkCoroutine;
            if (*ppvVar8 != (void *)0x0) {
              UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,*ppvVar8,(void *)0x0);
            }
            puVar1 = PTR_DAT_0385db10;
            pGVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
            if (pGVar4 != (Game_UserData *)0x0) {
              iVar3 = Game_UserData_get_BlinkMin_18c96b8(pGVar4,(void *)0x0);
              pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
              if (pGVar4 != (Game_UserData *)0x0) {
                maxExclusive = Game_UserData_get_BlinkMax_18c9798(pGVar4,(void *)0x0);
                iVar3 = UnityEngine_Random_Range_3246f40(iVar3,maxExclusive,(void *)0x0);
                uVar5 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
                uVar6 = NativeHelper_02b8e36c(uVar5,self,*(undefined8 *)PTR_DAT_038670a0,0);
                pvVar7 = (void *)NativeHelper_0197abf8((float)iVar3,uVar6,uVar5);
                pvVar7 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar7,(void *)0x0);
                self->_waitingBlinkCoroutine = pvVar7;
                if (iRam0000000003cd3780 != 0) {
                  func_0x018dcb10(1L << ((ulong)ppvVar8 >> 0xc & 0x3f),
                                  ((ulong)ppvVar8 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
                }
                return;
              }
            }
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

