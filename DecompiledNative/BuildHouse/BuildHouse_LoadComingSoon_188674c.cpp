// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void LoadComingSoon() { }
// Ghidra address: 0198a74c; ELF VA: 0x188a74c; file offset: 0x188674c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void BuildHouse_LoadComingSoon_188674c(BuildHouse *self,void *runtimeMethod)

{
  Recovered_Vector3 position;
  Recovered_Quaternion rotation;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  void **ppvVar7;
  
  puVar3 = PTR_DAT_038678f8;
  puVar2 = PTR_DAT_038678c8;
  puVar1 = PTR_DAT_038678b8;
  if ((bRam0000000003ab2152 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038678c8);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038678b8);
    NativeHelper_017ef284(PTR_DAT_038678f8);
    bRam0000000003ab2152 = 1;
  }
  pvVar4 = *(void **)puVar3;
  pvVar5 = *(void **)puVar1;
  self->isShowCompeletView = false;
  pvVar4 = Game_Manager_ResManager_Load_1c3e9e0(pvVar4,(void *)0x0,pvVar5);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    NativeHelper_017ef404(lVar6);
    lVar6 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_0385c2a0;
  position = **(Recovered_Vector3 **)(lVar6 + 0xb8);
  if (cRam0000000003ab212c == '\0') {
    NativeHelper_017ef284(PTR_DAT_038670d8);
    cRam0000000003ab212c = '\x01';
  }
  puVar2 = PTR_DAT_038670d0;
  rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
  pvVar5 = (void *)NativeHelper_0334f400(self,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404(*(long *)puVar1);
  }
  pvVar4 = UnityEngine_object_Instantiate_1ba9a74(pvVar4,position,rotation,pvVar5,*(void **)puVar2);
  ppvVar7 = &self->mRoomObj;
  *ppvVar7 = pvVar4;
  NativeHelper_017ef228(ppvVar7,pvVar4);
  if ((*ppvVar7 != (void *)0x0) && (lVar6 = NativeHelper_0335213c(*ppvVar7,0), lVar6 != 0)) {
    if ((bRam0000000003abbd31 & 1) == 0) {
      NativeHelper_017ef284(PTR_DAT_038a79f0,0);
      bRam0000000003abbd31 = 1;
    }
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 != 0) {
        if (pcRam0000000003abbd98 == (code *)0x0) {
          pcRam0000000003abbd98 = (code *)NativeHelper_017ef240(&UNK_00a72618);
        }
        (*pcRam0000000003abbd98)(lVar6,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      NativeHelper_0334bff8();
    }
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

