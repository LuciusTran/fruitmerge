// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private override bool MoveNext() { }
// Ghidra address: 019fda50; ELF VA: 0x18fda50; file offset: 0x18f9a50
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool TKCommon_PlayGameView__CountdownCoroutine_d__221_MoveNext_18f9a50
               (TKCommon_PlayGameView__CountdownCoroutine_d__221 *self,void *runtimeMethod)

{
  char cVar1;
  undefined8 uVar2;
  void *extraout_x1;
  uint uVar3;
  long *plVar4;
  TKCommon_PlayGameView *pTVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  uint uStack_3c;
  double dStack_38;
  
  uVar2 = 0;
  uStack_3c = 0;
  if (1 < (uint)self->__1__state) goto LAB_019fdbe4;
  pTVar5 = self->__4__this;
  self->__1__state = -1;
  if (pTVar5 == (TKCommon_PlayGameView *)0x0) goto LAB_019fdbf8;
  fVar8 = pTVar5->_countdownTime;
  if (fVar8 <= 0.0) {
    uVar2 = 0;
    goto LAB_019fdbe4;
  }
  fVar6 = UnityEngine_Time_get_deltaTime_32574e0((void *)0x0);
  cVar1 = cRam0000000003ab1e6f;
  fVar8 = fVar8 - fVar6;
  pTVar5->_countdownTime = fVar8;
  if (cVar1 == '\0') {
    NativeHelper_017ef284(PTR_DAT_0385d8b8);
    cRam0000000003ab1e6f = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0385d8b8 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  dVar9 = (double)fVar8;
  dVar7 = (double)NativeHelper_036886a0(dVar9,&dStack_38);
  if (0.0 <= fVar8) {
    if (dVar7 == 0.5) {
      dVar7 = 1.0;
      goto LAB_019fdb28;
    }
    dStack_38 = (double)(long)(dVar9 + 0.5);
  }
  else if (dVar7 == -0.5) {
    dVar7 = -1.0;
LAB_019fdb28:
    if (((long)dStack_38 & 1U) != 0) {
      dStack_38 = dStack_38 + dVar7;
    }
  }
  else {
    dStack_38 = (double)(long)(dVar9 + -0.5);
  }
  uVar3 = (uint)dStack_38;
  plVar4 = pTVar5->m_txt_ShakeCountdown;
  if (2 < (int)uVar3) {
    uVar3 = 3;
  }
  uStack_3c = 0;
  if (dStack_38 != INFINITY) {
    uStack_3c = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  }
  auVar10 = NativeHelper_02c0d29c(&uStack_3c,0);
  runtimeMethod = auVar10._8_8_;
  uVar2 = auVar10._0_8_;
  if (plVar4 == (long *)0x0) goto LAB_019fdbf8;
  (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x5f0));
  if (uStack_3c == 0) {
    uVar2 = 0;
    runtimeMethod = extraout_x1;
    if (pTVar5->m_trans_ShakeCountdown == (void *)0x0) {
LAB_019fdbf8:
                    /* WARNING: Subroutine does not return */
      NativeHelper_017ef530(uVar2,runtimeMethod);
    }
    auVar10 = NativeHelper_0334f4c8(pTVar5->m_trans_ShakeCountdown,0);
    runtimeMethod = auVar10._8_8_;
    uVar2 = 0;
    if (auVar10._0_8_ == 0) goto LAB_019fdbf8;
    NativeHelper_0335236c(auVar10._0_8_,0,0);
  }
  self->__2__current = (void *)0x0;
  NativeHelper_017ef228(&self->__2__current,0);
  uVar2 = 1;
  self->__1__state = 1;
LAB_019fdbe4:
  return SUB81(uVar2,0);
}

