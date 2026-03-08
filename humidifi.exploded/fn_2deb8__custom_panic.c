/* Function: fn_2deb8__custom_panic
 * Address:  0x2dfd8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2deb8__custom_panic @ 0x2dfd8 ---- */

void fn_2deb8__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puStack_40 = &uStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  uStack_10 = param_1;
  uStack_8 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_40,param_3);
}
