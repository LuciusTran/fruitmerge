// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void StartGame(PlayGameView gameView) { }
// Ghidra address: 0197ddec; ELF VA: 0x187ddec; file offset: 0x1879dec
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void MergeFruit_StartGame_1879dec
               (MergeFruit *self,TKCommon_PlayGameView *gameView,void *runtimeMethod)

{
  int iVar1;
  void *pvVar2;
  void *runtimeMethod_00;
  void *runtimeMethod_01;
  void *runtimeMethod_02;
  void *runtimeMethod_03;
  void *runtimeMethod_04;
  undefined1 auVar3 [16];
  
  self->_playGameView = gameView;
  auVar3 = NativeHelper_017ef228();
  MergeFruit_StartGameRecord_1879e40(auVar3._0_8_,auVar3._8_8_);
  MergeFruit_InitEdges_1879eb8(self,runtimeMethod_00);
  MergeFruit_LoadFruits_1879fc8(self,runtimeMethod_01);
  MergeFruit_ResetLastFruitPosByLine_187a57c(self,runtimeMethod_02);
  iVar1 = UnityEngine_Random_Range_3246f40(0,5,(void *)0x0);
  self->_nextRandomIndex = iVar1;
  MergeFruit_CreateRandomFruitItem_187a5cc(self,runtimeMethod_03);
  MergeFruit_StopExpCountdown_187e6dc(self,runtimeMethod_04);
  pvVar2 = (void *)NativeHelper_0198270c(self);
  pvVar2 = UnityEngine_MonoBehaviour_StartCoroutine_324fd8c(self,pvVar2,(void *)0x0);
  self->expCountdownCoroutine = pvVar2;
  if (iRam0000000003cd3780 != 0) {
    func_0x018dcb10(1L << ((ulong)&self->expCountdownCoroutine >> 0xc & 0x3f),
                    ((ulong)&self->expCountdownCoroutine >> 0x12 & 0x7fff) * 8 + 0x3b07758);
  }
  return;
}

