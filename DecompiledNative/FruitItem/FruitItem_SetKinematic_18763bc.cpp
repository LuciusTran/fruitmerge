// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SetKinematic(bool isKinematic) { }
// Ghidra address: 0197a3bc; ELF VA: 0x187a3bc; file offset: 0x18763bc
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_SetKinematic_18763bc(FruitItem *self,bool isKinematic,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int maxExclusive;
  Game_UserData *pGVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  void **ppvVar9;
  undefined8 uVar10;
  
  if (self->_rigidbody2D == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  UnityEngine_Rigidbody2D_set_isKinematic_32ab934(self->_rigidbody2D,isKinematic,(void *)0x0);
  if (isKinematic) {
    if (self->_waitingBlinkCoroutine != (void *)0x0) {
      UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,self->_waitingBlinkCoroutine,(void *)0x0)
      ;
    }
    pvVar7 = self->_blinkCoroutine;
    if (pvVar7 == (void *)0x0) {
      return;
    }
    if (pvVar7 == (void *)0x0) {
      NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
      uVar6 = NativeHelper_017ef520();
      uVar10 = NativeHelper_017ef298(PTR_DAT_038a78d0);
      NativeHelper_02c12308(uVar6,uVar10,0);
    }
    else {
      uVar5 = NativeHelper_03353b80();
      if ((uVar5 & 1) != 0) {
        if ((bRam0000000003abb850 & 1) == 0) {
          NativeHelper_017ef284(PTR_DAT_038a7898);
          bRam0000000003abb850 = 1;
        }
        if (self != (FruitItem *)0x0) {
          lVar8 = *(long *)&self->field_0x10;
          if (lVar8 != 0) {
            uVar10 = 0;
            if (pvVar7 != (void *)0x0) {
              uVar10 = *(undefined8 *)((long)pvVar7 + 0x10);
            }
            if (pcRam0000000003abb8c8 == (code *)0x0) {
              pcRam0000000003abb8c8 = (code *)NativeHelper_017ef240(&UNK_00a5f9fc);
            }
                    /* WARNING: Could not recover jumptable at 0x033540f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abb8c8)(lVar8,uVar10);
            return;
          }
                    /* WARNING: Subroutine does not return */
          NativeHelper_0334bff8();
        }
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef530();
      }
      NativeHelper_017ef298(PTR_DAT_03865620);
      uVar6 = NativeHelper_017ef520();
      uVar10 = NativeHelper_017ef298(PTR_DAT_038a78b8);
      NativeHelper_02b8eaa8(uVar6,uVar10,0);
    }
    uVar10 = NativeHelper_017ef298(PTR_DAT_038a78e8);
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef3f4(uVar6,uVar10);
  }
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
    ppvVar9 = &self->_waitingBlinkCoroutine;
    if (*ppvVar9 != (void *)0x0) {
      UnityEngine_MonoBehaviour_StopCoroutine_324ffd8(self,*ppvVar9,(void *)0x0);
    }
    puVar1 = PTR_DAT_0385db10;
    pGVar4 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
    if (pGVar4 != (Game_UserData *)0x0) {
      iVar3 = Game_UserData_get_BlinkMin_18c96b8(pGVar4,(void *)0x0);
      pGVar4 = Singleton_get_Instance_27784f4(*(void **)puVar1);
      if (pGVar4 != (Game_UserData *)0x0) {
        maxExclusive = Game_UserData_get_BlinkMax_18c9798(pGVar4,(void *)0x0);
        iVar3 = UnityEngine_Random_Range_3246f40(iVar3,maxExclusive,(void *)0x0);
        uVar10 = NativeHelper_017ef520(*(undefined8 *)PTR_DAT_0385c9f8);
        uVar6 = NativeHelper_02b8e36c(uVar10,self,*(undefined8 *)PTR_DAT_038670a0,0);
        pvVar7 = (void *)NativeHelper_0197abf8((float)iVar3,uVar6,uVar10);
        pvVar7 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar7,(void *)0x0);
        self->_waitingBlinkCoroutine = pvVar7;
        if (iRam0000000003cd3780 != 0) {
          func_0x018dcb10(1L << ((ulong)ppvVar9 >> 0xc & 0x3f),
                          ((ulong)ppvVar9 >> 0x12 & 0x7fff) * 8 + 0x3b07758);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

