/* Function: fn_07e8__custom_panic
 * Address:  0x908
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_07e8__custom_panic @ 0x908 ---- */

void fn_07e8__custom_panic(void)

{
  longlong in_R4;
  longlong in_R5;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (in_R4 != 0 || in_R5 != 0) {
    fn_2c1e8();
    return;
  }
  puStack_30 = &DAT_ram_000324d0;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,&DAT_ram_000324e0);
}
