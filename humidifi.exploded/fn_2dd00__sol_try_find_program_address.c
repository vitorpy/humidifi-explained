/* Function: fn_2dd00__sol_try_find_program_address
 * Address:  0x2de20
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2dd00__sol_try_find_program_address @ 0x2de20 ---- */

void fn_2dd00__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_1;
  
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  puStack_38 = (undefined *)0x0;
  uStack_1 = 0xff;
  lVar1 = fn_2dd70(param_2,param_3,param_4,&puStack_38,&uStack_1);
  if (lVar1 == 0) {
    param_1[3] = uStack_20;
    param_1[2] = uStack_28;
    param_1[1] = uStack_30;
    *param_1 = puStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_1;
    return;
  }
  puStack_38 = &DAT_ram_00032b10;
  uStack_18 = 0;
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_38,&DAT_ram_00032b20);
}
