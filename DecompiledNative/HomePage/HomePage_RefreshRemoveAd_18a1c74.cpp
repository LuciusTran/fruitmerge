// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void RefreshRemoveAd() { }
// Ghidra address: 019a5c74; ELF VA: 0x18a5c74; file offset: 0x18a1c74
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void HomePage_RefreshRemoveAd_18a1c74(HomePage *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  IAPItemManager *pIVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  undefined1 auStack_24 [4];
  
  puVar2 = PTR_DAT_0385d920;
  if ((bRam0000000003ab225e & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385c360);
    NativeHelper_017ef284(PTR_DAT_0385d920);
    NativeHelper_017ef284(PTR_DAT_03868750);
    bRam0000000003ab225e = 1;
  }
  pIVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
  puVar3 = PTR_DAT_03868750;
  puVar1 = PTR_DAT_0385c360;
  if (pIVar5 != (IAPItemManager *)0x0) {
    auStack_24[0] = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar5,(void *)0x0);
    uVar6 = NativeHelper_017ef40c(*(undefined8 *)(PTR_DAT_0385c2d8 + 0x28),auStack_24);
    pvVar7 = (void *)NativeHelper_02a9d074(*(undefined8 *)puVar3,uVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar1);
    }
    UnityEngine_Debug_Log_321dd14(pvVar7,(void *)0x0);
    pIVar5 = Singleton_get_Instance_27784f4(*(void **)puVar2);
    if (pIVar5 != (IAPItemManager *)0x0) {
      bVar4 = IAPItemManager_get_IsSubscriptionActive_1804360(pIVar5,(void *)0x0);
      pvVar7 = self->m_RemoveButton;
      if (bVar4) {
        if ((pvVar7 == (void *)0x0) || (lVar8 = NativeHelper_0334f4c8(pvVar7,0), lVar8 == 0))
        goto LAB_019a5da0;
        uVar6 = 0;
      }
      else {
        if ((pvVar7 == (void *)0x0) || (lVar8 = NativeHelper_0334f4c8(pvVar7,0), lVar8 == 0))
        goto LAB_019a5da0;
        uVar6 = 1;
      }
      NativeHelper_0335236c(lVar8,uVar6,0);
      return;
    }
  }
LAB_019a5da0:
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

