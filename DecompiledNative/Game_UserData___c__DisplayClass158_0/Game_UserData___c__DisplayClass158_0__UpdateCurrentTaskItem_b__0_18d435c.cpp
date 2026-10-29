// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: internal bool <UpdateCurrentTaskItem>b__0(TaskItemData item) { }
// Ghidra address: 019d835c; ELF VA: 0x18d835c; file offset: 0x18d435c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool Game_UserData___c__DisplayClass158_0__UpdateCurrentTaskItem_b__0_18d435c
               (long param_1,long param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    NativeHelper_017ef530();
  }
  if (*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10)) {
    return false;
  }
  return *(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x14);
}

