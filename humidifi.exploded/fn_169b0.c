/* Function: fn_169b0
 * Address:  0x16ad0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_169b0 @ 0x16ad0 ---- */

longlong fn_169b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_1 < *(longlong *)(param_2 + 0x10)) ||
       (lVar1 = param_2, *(longlong *)(param_2 + 0x18) < param_1)) &&
      ((param_1 < *(longlong *)(param_2 + 0x40) ||
       (lVar1 = param_2 + 0x30, *(longlong *)(param_2 + 0x48) < param_1)))) &&
     ((param_1 < *(longlong *)(param_2 + 0x70) ||
      (lVar1 = param_2 + 0x60, *(longlong *)(param_2 + 0x78) < param_1)))) {
    lVar1 = 0;
  }
  return lVar1;
}
