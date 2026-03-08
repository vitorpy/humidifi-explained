/* Function: fn_2ff78
 * Address:  0x30098
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2ff78 @ 0x30098 ---- */

void fn_2ff78(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0xffffffff) != 0) {
      param_2 = param_3 << (-param_4 & 0x3f) | param_2 >> (param_4 & 0x3f);
      param_3 = (longlong)param_3 >> (param_4 & 0x3f);
    }
  }
  else {
    param_2 = (longlong)param_3 >> (param_4 & 0x3f);
    param_3 = (longlong)param_3 >> 0x3f;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}
