/* Function: fn_16a50
 * Address:  0x16b70
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_16a50 @ 0x16b70 ---- */

longlong fn_16a50(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_1 < *(ulonglong *)(param_2 + 0x30)) ||
       (lVar1 = param_2, *(ulonglong *)(param_2 + 0x38) < param_1)) &&
      ((param_1 < *(ulonglong *)(param_2 + 0x80) ||
       (lVar1 = param_2 + 0x50, *(ulonglong *)(param_2 + 0x88) < param_1)))) &&
     ((param_1 < *(ulonglong *)(param_2 + 0xd0) ||
      (lVar1 = param_2 + 0xa0, *(ulonglong *)(param_2 + 0xd8) < param_1)))) {
    lVar1 = 0;
  }
  return lVar1;
}
