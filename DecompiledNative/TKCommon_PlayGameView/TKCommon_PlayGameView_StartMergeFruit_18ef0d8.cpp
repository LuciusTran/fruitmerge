// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void StartMergeFruit() { }
// Ghidra address: 019f30d8; ELF VA: 0x18f30d8; file offset: 0x18ef0d8
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TKCommon_PlayGameView_StartMergeFruit_18ef0d8(TKCommon_PlayGameView *self,void *runtimeMethod)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  TKLClient_TKLSwitcherConfig *pTVar5;
  void *pvVar6;
  MergeFruit *pMVar7;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  undefined1 auVar8 [16];
  
  puVar2 = PTR_DAT_0385d918;
  auVar8._8_8_ = runtimeMethod;
  auVar8._0_8_ = self;
  if ((bRam0000000003ab2591 & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0386ab50);
    NativeHelper_017ef284(PTR_DAT_0385d918);
    NativeHelper_017ef284(PTR_DAT_03866cc8);
    NativeHelper_017ef284(PTR_DAT_0385c2a0);
    NativeHelper_017ef284(PTR_DAT_038678b8);
    NativeHelper_017ef284(PTR_DAT_0386ab58);
    auVar8 = NativeHelper_017ef284(PTR_DAT_0386ab60);
    bRam0000000003ab2591 = 1;
  }
  TKCommon_PlayGameView_ClearAllMergeFruits_18f0604(auVar8._0_8_,auVar8._8_8_);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  pTVar5 = Global_get_RemoteConfig_18048d8((void *)0x0);
  puVar3 = PTR_DAT_03866cc8;
  puVar2 = PTR_DAT_0385c2a0;
  if (pTVar5 != (TKLClient_TKLSwitcherConfig *)0x0) {
    puVar1 = (undefined8 *)PTR_DAT_0386ab58;
    if (pTVar5->UseBox != false) {
      puVar1 = (undefined8 *)PTR_DAT_0386ab60;
    }
    pvVar6 = Game_Manager_ResManager_Load_1c3e9e0
                       ((void *)*puVar1,(void *)0x0,*(void **)PTR_DAT_038678b8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      NativeHelper_017ef404(*(long *)puVar2);
    }
    pvVar6 = UnityEngine_object_Instantiate_1ba970c(pvVar6,*(void **)puVar3);
    if (pvVar6 != (void *)0x0) {
      pMVar7 = UnityEngine_GameObject_GetComponent_1b75510(pvVar6,*(void **)PTR_DAT_0386ab50);
      self->mMergeFruit = pMVar7;
      NativeHelper_017ef228(&self->mMergeFruit,pMVar7);
      pMVar7 = self->mMergeFruit;
      if (pMVar7 != (MergeFruit *)0x0) {
        pMVar7->_playGameView = self;
        auVar8 = NativeHelper_017ef228(&pMVar7->_playGameView,self,0);
        MergeFruit_StartGameRecord_1879e40(auVar8._0_8_,auVar8._8_8_);
        MergeFruit_InitEdges_1879eb8(pMVar7,runtimeMethod_00);
        MergeFruit_LoadFruits_1879fc8(pMVar7,runtimeMethod_01);
        MergeFruit_ResetLastFruitPosByLine_187a57c(pMVar7,runtimeMethod_02);
        iVar4 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
        pMVar7->_nextRandomIndex = iVar4;
        MergeFruit_CreateRandomFruitItem_187a5cc(pMVar7,runtimeMethod_03);
        MergeFruit_StopExpCountdown_187e6dc(pMVar7,runtimeMethod_04);
        pvVar6 = (void *)NativeHelper_0198270c(pMVar7);
        pvVar6 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(pMVar7,pvVar6,(void *)0x0);
        pMVar7->expCountdownCoroutine = pvVar6;
        if (iRam0000000003cd3780 != 0) {
          func_0x018dcb10(1L << ((ulong)&pMVar7->expCountdownCoroutine >> 0xc & 0x3f),
                          ((ulong)&pMVar7->expCountdownCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

