/* Function: fn_2fbb0__custom_panic
 * Address:  0x2fcd0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2fbb0__custom_panic @ 0x2fcd0 ---- */

void fn_2fbb0__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  undefined8 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_00032b88;
  ppuStack_40 = &puStack_20;
  puStack_10 = &uStack_58;
  puStack_8 = &LAB_ram_0002f9a0;
  puStack_18 = &LAB_ram_0002f9a0;
  puStack_20 = &uStack_60;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_60 = param_1;
  uStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_3);
}
