/* Function: fn_28ab8
 * Address:  0x28bd8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_28ab8 @ 0x28bd8 ---- */

void fn_28ab8(void)

{
  longlong lVar1;
  undefined8 *unaff_R6;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar1 = fn_28ab8();
  if (lVar1 == 0) {
    unaff_R6[3] = uStack_18;
    unaff_R6[2] = uStack_20;
    unaff_R6[1] = uStack_28;
    *unaff_R6 = puStack_30;
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
