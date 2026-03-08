/* Function: fn_30198
 * Address:  0x302b8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_30198 @ 0x302b8 ---- */

void fn_30198(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (param_4 & 0xffffffff) * (param_2 & 0xffffffff);
  uVar4 = (param_4 >> 0x20) * (param_2 & 0xffffffff);
  uVar1 = uVar4 + (param_4 & 0xffffffff) * (param_2 >> 0x20);
  uVar3 = uVar2 + (uVar1 << 0x20);
  *param_1 = uVar3;
  param_1[1] = (param_4 >> 0x20) * (param_2 >> 0x20) +
               ((ulonglong)(uVar1 < uVar4) << 0x20 | uVar1 >> 0x20) + (ulonglong)(uVar3 < uVar2) +
               param_5 * param_2 + param_4 * param_3;
  return;
}
