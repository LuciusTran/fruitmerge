// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void TestDropLine() { }
// Ghidra address: 0198375c; ELF VA: 0x188375c; file offset: 0x187f75c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_TestDropLine_187f75c(MergeFruit *self,void *runtimeMethod)

{
  Recovered_Quaternion rotation;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  FruitItem *self_00;
  Game_UserData *pGVar8;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *pvVar9;
  void *pvVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  Recovered_Vector3 RVar16;
  Recovered_Vector3 position;
  Recovered_Vector2 value;
  
  if ((bRam0000000003ab20fc & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_03867120);
    NativeHelper_017ef284(PTR_DAT_038670d0);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_0385db10);
    bRam0000000003ab20fc = 1;
  }
  puVar5 = PTR_DAT_03867120;
  puVar3 = PTR_DAT_038670d0;
  puVar2 = PTR_DAT_0385db10;
  if (self->m_LineTrans != (void *)0x0) {
    RVar16 = UnityEngine_Transform_get_position_325a714(self->m_LineTrans,(void *)0x0);
    puVar4 = PTR_DAT_038670d8;
    puVar1 = PTR_DAT_0385d978;
    fVar15 = self->leftEdgeX;
    fVar12 = self->rightEdgeX;
    iVar11 = 1;
    while( true ) {
      uVar7 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
      pvVar9 = self->m_FruitItemPrefabs;
      if (pvVar9 == (void *)0x0) break;
      if (*(uint *)((long)pvVar9 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef538();
      }
      pvVar9 = *(void **)((long)pvVar9 + (long)(int)uVar7 * 8 + 0x20);
      if (cRam0000000003ab212c == '\0') {
        NativeHelper_017ef284(puVar4);
        cRam0000000003ab212c = '\x01';
      }
      pvVar10 = self->m_GamePanel;
      rotation = **(Recovered_Quaternion **)(*(long *)puVar4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_0385c2a0 + 0xe4) == 0) {
        NativeHelper_017ef404();
      }
      runtimeMethod_01 = *(void **)puVar3;
      fVar14 = (float)iVar11 * 0.0;
      position.component0 = fVar15 + ((fVar12 - fVar15) / 7.0) * (float)iVar11;
      position.component1 = RVar16.component1 + fVar14;
      position.component2 = RVar16.component2 + fVar14;
      pvVar9 = UnityEngine_object_Instantiate_1ba9a74
                         (pvVar9,position,rotation,pvVar10,runtimeMethod_01);
      if ((pvVar9 == (void *)0x0) ||
         (self_00 = UnityEngine_GameObject_GetComponent_1b75510(pvVar9,*(void **)puVar5),
         self_00 == (FruitItem *)0x0)) break;
      FruitItem_SetKinematic_18763bc(self_00,true,runtimeMethod_01);
      FruitItem_ReleaseDown_187657c(self_00,runtimeMethod_00);
      pvVar9 = self_00->_rigidbody2D;
      if (cRam0000000003ab212d == '\0') {
        NativeHelper_017ef284(puVar1);
        cRam0000000003ab212d = '\x01';
      }
      if (pvVar9 == (void *)0x0) break;
      uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      value.component0 = (float)uVar13 * 8.0;
      value.component1 = (float)((ulong)uVar13 >> 0x20) * 8.0;
      UnityEngine_Rigidbody2D_set_linearVelocity_32ab2f8(pvVar9,value,(void *)0x0);
      pGVar8 = Singleton_get_Instance_27784f4(*(void **)puVar2);
      if (pGVar8 == (Game_UserData *)0x0) break;
      bVar6 = Game_UserData_get_EnableTask_18cab28(pGVar8,(void *)0x0);
      if (bVar6) {
        pvVar9 = Singleton_get_Instance_27784f4(*(void **)puVar2);
        if (pvVar9 == (void *)0x0) break;
        pvVar10 = *(void **)puVar2;
        *(int *)((long)pvVar9 + 0x24) = *(int *)((long)pvVar9 + 0x24) + 1;
        pGVar8 = Singleton_get_Instance_27784f4(pvVar10);
        if (pGVar8 == (Game_UserData *)0x0) break;
        Game_UserData_TryUpdateCurrentTask_18d34d4
                  (pGVar8,self_00->m_FruitType + 1,self->_gameState == 4,(void *)0x0);
      }
      iVar11 = iVar11 + 1;
      if (iVar11 == 7) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

