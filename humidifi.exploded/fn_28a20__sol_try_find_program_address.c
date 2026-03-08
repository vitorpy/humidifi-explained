/* Function: fn_28a20__sol_try_find_program_address
 * Address:  0x28b40
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_28a20__sol_try_find_program_address @ 0x28b40 ---- */

void fn_28a20__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puStack_58 = &DAT_ram_00031980;
  uStack_40 = 0x20;
  uStack_50 = 0x20;
  uStack_60 = 0x20;
  uStack_31 = 0xff;
  uStack_68 = param_2;
  uStack_48 = param_3;
  lVar1 = fn_28ab8(&uStack_68,3,&DAT_ram_00031940,&puStack_30,&uStack_31);
  if (lVar1 == 0) {
    param_1[3] = uStack_18;
    param_1[2] = uStack_20;
    param_1[1] = uStack_28;
    *param_1 = puStack_30;
    return;
  }
  puStack_30 = &DAT_ram_000325e8;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,&DAT_ram_000325f8);
}
