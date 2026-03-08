/* Function: fn_84c0__sol_try_find_program_address
 * Address:  0x85e0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_84c0__sol_try_find_program_address @ 0x85e0 ---- */

void fn_84c0__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_21;
  undefined8 uStack_19;
  undefined8 uStack_11;
  undefined8 uStack_9;
  undefined1 uStack_1;
  
  puStack_68 = &DAT_ram_00031fb2;
  uStack_30 = 0x20;
  uStack_40 = 0x20;
  uStack_50 = 0x20;
  uStack_60 = 6;
  uStack_58 = param_2;
  uStack_48 = param_3;
  uStack_38 = param_4;
  fn_2dd00__sol_try_find_program_address(&uStack_21,&puStack_68,4,param_5);
  param_1[3] = uStack_9;
  param_1[2] = uStack_11;
  param_1[1] = uStack_19;
  *param_1 = uStack_21;
  *(undefined1 *)(param_1 + 4) = uStack_1;
  return;
}
