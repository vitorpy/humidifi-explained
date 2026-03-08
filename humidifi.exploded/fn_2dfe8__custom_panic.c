/* Function: fn_2dfe8__custom_panic
 * Address:  0x2e108
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2dfe8__custom_panic @ 0x2e108 ---- */

void fn_2dfe8__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
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
  
  puStack_50 = &DAT_ram_00032b58;
  ppuStack_40 = &puStack_20;
  puStack_8 = &LAB_ram_0002fc70;
  puStack_10 = &uStack_60;
  puStack_18 = &LAB_ram_0002fca0;
  puStack_20 = &uStack_70;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_5);
}
