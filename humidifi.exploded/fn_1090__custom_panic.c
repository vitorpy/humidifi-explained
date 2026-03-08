/* Function: fn_1090__custom_panic
 * Address:  0x11b0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1090__custom_panic @ 0x11b0 ---- */

void fn_1090__custom_panic(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_000325b0;
  ppuStack_40 = &puStack_20;
  puStack_8 = &LAB_ram_0002dd68;
  puStack_10 = &uStack_51;
  uStack_18 = 0x120;
  puStack_20 = &uStack_68;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_51 = param_3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,&DAT_ram_000325d0);
}
