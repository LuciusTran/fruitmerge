// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void SwitchFinishedStates() { }
// Ghidra address: 0197ac9c; ELF VA: 0x187ac9c; file offset: 0x1876c9c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_SwitchFinishedStates_1876c9c(FruitItem *self,void *runtimeMethod)

{
  FruitItem_StopAllAnimationCoroutines_1876404(self,runtimeMethod);
  if (self->_sprite != (void *)0x0) {
    UnityEngine_SpriteRenderer_set_sprite_321501c(self->_sprite,self->_failedSprite,(void *)0x0);
    *(undefined4 *)&self->field_0x98 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

