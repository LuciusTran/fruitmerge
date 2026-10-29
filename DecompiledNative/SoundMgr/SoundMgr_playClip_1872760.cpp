// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void playClip(AudioClip clip, float playSpeed = 1) { }
// Ghidra address: 01976760; ELF VA: 0x1876760; file offset: 0x1872760
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void SoundMgr_playClip_1872760(SoundMgr *self,void *clip,float playSpeed,void *runtimeMethod)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_0385d918;
  if ((bRam0000000003ab207d & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_0385d918);
    bRam0000000003ab207d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    NativeHelper_017ef404();
  }
  bVar2 = Global_get_IsActiveSound_1803f24((void *)0x0);
  if (!bVar2) {
    return;
  }
  if (self->SoundPlayer != (void *)0x0) {
    UnityEngine_AudioSource_set_pitch_32110b8(self->SoundPlayer,playSpeed,(void *)0x0);
    if (self->SoundPlayer != (void *)0x0) {
      NativeHelper_033153c0(self->SoundPlayer,clip,0);
      if (self->_onPlayOver == (LocalNotification_Action *)0x0) {
        return;
      }
      if (clip != (void *)0x0) {
        UnityEngine_AudioClip_get_length_32107a0(clip,(void *)0x0);
        lVar3 = NativeHelper_01976de0(self);
        if (lVar3 == 0) {
          NativeHelper_017ef298(PTR_DAT_0386e4d8,0,0);
          uVar5 = NativeHelper_017ef520();
          uVar6 = NativeHelper_017ef298(PTR_DAT_038a78d0);
          NativeHelper_02c12308(uVar5,uVar6,0);
        }
        else {
          uVar4 = NativeHelper_03353b80();
          if ((uVar4 & 1) != 0) {
            if ((bRam0000000003abb84f & 1) == 0) {
              NativeHelper_017ef284(PTR_DAT_038a7898);
              bRam0000000003abb84f = 1;
            }
            if (self == (SoundMgr *)0x0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_017ef530();
            }
            lVar7 = *(long *)&self->field_0x10;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              NativeHelper_0334bff8();
            }
            if (pcRam0000000003abb8c0 == (code *)0x0) {
              pcRam0000000003abb8c0 = (code *)NativeHelper_017ef240(&UNK_00a51f51);
            }
                    /* WARNING: Could not recover jumptable at 0x03353ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003abb8c0)(lVar7,lVar3);
            return;
          }
          NativeHelper_017ef298(PTR_DAT_03865620);
          uVar5 = NativeHelper_017ef520();
          uVar6 = NativeHelper_017ef298(PTR_DAT_038a78b8);
          NativeHelper_02b8eaa8(uVar5,uVar6,0);
        }
        uVar6 = NativeHelper_017ef298(PTR_DAT_038a78d8);
                    /* WARNING: Subroutine does not return */
        NativeHelper_017ef3f4(uVar5,uVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

