// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public GameObject CreateFruitItem(int index, Vector3 pos) { }
// Ghidra address: 0197cab8; ELF VA: 0x187cab8; file offset: 0x1878ab8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void * MergeFruit_CreateFruitItem_1878ab8
                 (MergeFruit *self,int index,Recovered_Vector3 pos,void *runtimeMethod)

{
  Recovered_Quaternion rotation;
  undefined *puVar1;
  undefined *puVar2;
  FruitItem *self_00;
  void *runtimeMethod_00;
  void *pvVar3;
  void *parent;
  
  if ((bRam0000000003ab20e2 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    bRam0000000003ab20e2 = 1;
  }
  puVar1 = PTR_DAT_0385c2a0;
  pvVar3 = self->m_FruitItemPrefabs;
  if (pvVar3 != (void *)0x0) {
    if (*(uint *)((long)pvVar3 + 0x18) <= (uint)index) {
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef538();
    }
    pvVar3 = *(void **)((long)pvVar3 + (long)index * 8 + 0x20);
    if (cRam0000000003ab212c == '\0') {
      NativeHelper_017ef284(PTR_DAT_038670d8);
      cRam0000000003ab212c = '\x01';
    }
    puVar2 = PTR_DAT_038670d0;
    parent = self->m_GamePanel;
    rotation = **(Recovered_Quaternion **)(*(long *)PTR_DAT_038670d8 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404();
    }
    runtimeMethod_00 = *(void **)puVar2;
    pvVar3 = UnityEngine_object_Instantiate_1ba9a74(pvVar3,pos,rotation,parent,runtimeMethod_00);
    if ((pvVar3 != (void *)0x0) &&
       (self_00 = UnityEngine_GameObject_GetComponent_1b75510(pvVar3,*(void **)PTR_DAT_03867120),
       self_00 != (FruitItem *)0x0)) {
      FruitItem_SetKinematic_18763bc(self_00,true,runtimeMethod_00);
      return pvVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

