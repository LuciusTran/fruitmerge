// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public TaskData() { }
// Ghidra address: 01984dd0; ELF VA: 0x1884dd0; file offset: 0x1880dd0
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void TaskData_TaskData_1880dd0(TaskData *self,void *runtimeMethod)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *extraout_x1;
  
  puVar2 = PTR_DAT_038674e8;
  puVar1 = PTR_DAT_038674e0;
  if ((bRam0000000003ab210b & 1) == 0) {
    NativeHelper_017ef284(PTR_DAT_038674e8);
    NativeHelper_017ef284(PTR_DAT_038674e0);
    bRam0000000003ab210b = 1;
    runtimeMethod = extraout_x1;
  }
  pvVar3 = (void *)NativeHelper_017ef520(*(undefined8 *)puVar1,runtimeMethod);
  NativeHelper_02568f74(pvVar3,*(undefined8 *)puVar2);
  self->TaskItems = pvVar3;
  NativeHelper_017ef228(&self->TaskItems,pvVar3);
  return;
}

