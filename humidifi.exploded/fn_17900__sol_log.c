/* Function: fn_17900__sol_log
 * Address:  0x17a20
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_17900__sol_log @ 0x17a20 ---- */

void fn_17900__sol_log(undefined4 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = fn_16af0__sol_log(param_2 << 0x30,((longlong)param_2 >> 0x3f) << 0x30 | param_2 >> 0x10,
                           param_3 << 0x30,((longlong)param_3 >> 0x3f) << 0x30 | param_3 >> 0x10);
  if ((uVar1 & 0xffffffff) == 0x1a) {
    fn_17488__sol_log(param_1,uVar1 >> 0x20,*(undefined8 *)(param_5 + -0xff8));
  }
  else {
    param_1[2] = (int)(uVar1 >> 0x20);
    param_1[1] = (int)uVar1;
    *param_1 = 1;
  }
  return;
}
