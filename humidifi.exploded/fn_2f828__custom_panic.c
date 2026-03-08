/* Function: fn_2f828__custom_panic
 * Address:  0x2f948
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2f828__custom_panic @ 0x2f948 ---- */

void fn_2f828__custom_panic(undefined8 param_1)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puStack_30 = &DAT_ram_00032b78;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,param_1);
}
