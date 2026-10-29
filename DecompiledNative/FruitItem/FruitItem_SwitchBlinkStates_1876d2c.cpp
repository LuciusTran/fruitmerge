// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void SwitchBlinkStates() { }
// Ghidra address: 0197ad2c; ELF VA: 0x187ad2c; file offset: 0x1876d2c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void FruitItem_SwitchBlinkStates_1876d2c(FruitItem *self,void *runtimeMethod)

{
  if (self->_sprite != (void *)0x0) {
    UnityEngine_SpriteRenderer_set_sprite_321501c(self->_sprite,self->_blinkSprite,(void *)0x0);
    *(undefined4 *)&self->field_0x98 = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  NativeHelper_017ef530();
}

