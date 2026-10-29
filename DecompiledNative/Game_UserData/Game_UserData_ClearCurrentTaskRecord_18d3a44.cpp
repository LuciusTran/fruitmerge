// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public void ClearCurrentTaskRecord() { }
// Ghidra address: 019d7a44; ELF VA: 0x18d7a44; file offset: 0x18d3a44
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


void Game_UserData_ClearCurrentTaskRecord_18d3a44(Game_UserData *self,void *runtimeMethod)

{
  Game_UserData *self_00;
  void *in_x2;
  
  Game_UserData_set_CurrentTaskDuration_18d3b08(self,0,in_x2);
  self->CurrentTaskPlayTime = 0.0;
  Game_UserData_set_CurrentTaskClickNumber_18d3b5c(self_00,0,in_x2);
  self->CurrentTaskPlayClickNumber = 0;
  return;
}

