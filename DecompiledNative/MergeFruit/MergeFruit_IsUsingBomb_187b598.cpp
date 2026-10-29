// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private bool IsUsingBomb() { }
// Ghidra address: 0197f598; ELF VA: 0x187f598; file offset: 0x187b598
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool MergeFruit_IsUsingBomb_187b598(MergeFruit *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  void *pvVar7;
  undefined8 uVar8;
  Game_UserData *self_00;
  void *extraout_x1;
  void **ppvVar9;
  undefined8 in_d1;
  float in_s2;
  Recovered_Vector3 pos;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  void *pvStack_80;
  void *pvStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  if ((bRam0000000003ab20ef & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c9f8);
    NativeHelper_017ef284(PTR_DAT_03867110);
    NativeHelper_017ef284(PTR_DAT_03867308);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_03867310);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20ef = 1;
    runtimeMethod = extraout_x1;
  }
  uStack_50 = 0;
  pvStack_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (self->_gameState != 3) {
    return false;
  }
  pvVar7 = (void *)NativeHelper_03320a8c(0,runtimeMethod);
  pos.component0 = NativeHelper_033a7874(0);
  if (pvVar7 != (void *)0x0) {
    pos.component1 = (undefined4)in_d1;
    pos.component2 = in_s2;
    UnityEngine_Camera_ScreenPointToRay_321ca58(pvVar7,pos,(void *)0x0);
    uVar5 = uStack_94;
    uVar4 = uStack_98;
    uVar3 = uStack_a0;
    uVar2 = uStack_a4;
    if (*(int *)(*(long *)PTR_DAT_03867310 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    NativeHelper_033add70(&uStack_a4,uVar2,uVar3,_UNK_00a4765c,uVar4,uVar5,0x42c80000,0);
    uStack_68 = CONCAT44(uStack_98,uStack_9c);
    uStack_70 = CONCAT44(uStack_a0,uStack_a4);
    uStack_60 = CONCAT44(uStack_90,uStack_94);
    uStack_58 = uStack_8c;
    uStack_50 = uStack_84;
    pvVar7 = UnityEngine_RaycastHit2D_get_collider_32aacc4(&uStack_70,(void *)0x0);
    if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)PTR_DAT_0385c2a0);
    }
    bVar6 = UnityEngine_object_op_Inequality_324dec8(pvVar7,(void *)0x0,(void *)0x0);
    if (!bVar6) {
      return true;
    }
    pvVar7 = UnityEngine_RaycastHit2D_get_collider_32aacc4(&uStack_70,(void *)0x0);
    puVar1 = PTR_DAT_03867110;
    if (pvVar7 != (void *)0x0) {
      ppvVar9 = &pvStack_78;
      bVar6 = UnityEngine_Component_TryGetComponent_1b091b4
                        (pvVar7,&pvStack_78,*(void **)PTR_DAT_03867110);
      if (!bVar6) {
        pvVar7 = UnityEngine_RaycastHit2D_get_collider_32aacc4(&uStack_70,(void *)0x0);
        if (((pvVar7 == (void *)0x0) ||
            (pvVar7 = (void *)NativeHelper_0334f400(pvVar7,0), pvVar7 == (void *)0x0)) ||
           (pvVar7 = UnityEngine_Transform_get_parent_325a644(pvVar7,(void *)0x0),
           pvVar7 == (void *)0x0)) goto LAB_0197f818;
        ppvVar9 = &pvStack_80;
        bVar6 = UnityEngine_Component_TryGetComponent_1b091b4(pvVar7,&pvStack_80,*(void **)puVar1);
        if (!bVar6) {
          return false;
        }
      }
      pvVar7 = *ppvVar9;
      if ((pvVar7 != (void *)0x0) && (*(void **)((long)pvVar7 + 0x28) != (void *)0x0)) {
        bVar6 = UnityEngine_Rigidbody2D_get_isKinematic_32ab91c
                          (*(void **)((long)pvVar7 + 0x28),(void *)0x0);
        puVar1 = PTR_DAT_0385c9f8;
        if (!bVar6) {
          self->_isBlock = true;
          uVar8 = NativeHelper_017ef520(*(undefined8 *)puVar1);
          NativeHelper_02b8e36c(uVar8,self,*(undefined8 *)PTR_DAT_03867308,0);
          pvVar7 = (void *)NativeHelper_0197aac4(pvVar7,uVar8);
          UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar7,(void *)0x0);
        }
        self_00 = Singleton_get_Instance_27784f4(*(void **)PTR_DAT_0385db10);
        if (self_00 != (Game_UserData *)0x0) {
          Game_UserData_UseBombTool_18cc384(self_00,1,(void *)0x0);
          return true;
        }
      }
    }
  }
LAB_0197f818:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

