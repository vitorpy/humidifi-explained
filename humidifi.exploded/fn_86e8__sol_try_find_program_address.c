/* Function: fn_86e8__sol_try_find_program_address
 * Address:  0x8808
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_86e8__sol_try_find_program_address @ 0x8808 ---- */

void fn_86e8__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_41;
  undefined8 uStack_39;
  undefined8 uStack_31;
  undefined8 uStack_29;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puStack_68 = &DAT_ram_00031a00;
  uStack_50 = 0x20;
  uStack_60 = 0x20;
  uStack_70 = 0x20;
  uStack_8 = 0xd3bb8723dd54a054;
  uStack_10 = 0x6dd2523bce0a93a0;
  uStack_18 = 0x7a819dd33c7070c6;
  uStack_20 = 0xe959f7272b74fd7a;
  uStack_78 = param_2;
  uStack_58 = param_3;
  fn_2dd00__sol_try_find_program_address(&uStack_41,&uStack_78,3,&uStack_20);
  param_1[3] = uStack_29;
  param_1[2] = uStack_31;
  param_1[1] = uStack_39;
  *param_1 = uStack_41;
  *(undefined1 *)(param_1 + 4) = uStack_21;
  return;
}
