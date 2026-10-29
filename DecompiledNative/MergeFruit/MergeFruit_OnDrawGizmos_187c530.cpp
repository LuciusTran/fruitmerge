// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: private void OnDrawGizmos() { }
// Ghidra address: 01980530; ELF VA: 0x1880530; file offset: 0x187c530
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MergeFruit_OnDrawGizmos_187c530(MergeFruit *self,void *runtimeMethod)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  Recovered_Color value;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  UnityEngine_Gizmos_set_color_32249e8
            ((Recovered_Color)(ZEXT816(0x3f8000003f800000) << 0x40),(void *)0x0);
  fVar2 = (float)*(undefined8 *)&self->field_0xe4;
  fVar3 = (float)((ulong)*(undefined8 *)&self->field_0xe4 >> 0x20);
  NativeHelper_03328954
            (*(undefined4 *)&self->bounds,*(undefined4 *)((long)&self->bounds + 4),
             *(undefined4 *)&self->field_0xe0,fVar2 + fVar2,fVar3 + fVar3,
             *(float *)&self->field_0xec + *(float *)&self->field_0xec,0);
  value.component2 = 0.0;
  value.component3 = 1.0;
  value.component0 = 1.0;
  value.component1 = 0.0;
  UnityEngine_Gizmos_set_color_32249e8(value,(void *)0x0);
  uVar1 = _UNK_00a4765c;
  uStack_2c = *(undefined4 *)&self->bounds;
  fStack_28 = self->_highestYPosition;
  uStack_24 = 0;
  if (pcRam0000000003abaaf0 == (code *)0x0) {
    pcRam0000000003abaaf0 = (code *)NativeHelper_017ef240(&UNK_00a60e5c);
  }
  (*pcRam0000000003abaaf0)(uVar1,&uStack_2c);
  return;
}

