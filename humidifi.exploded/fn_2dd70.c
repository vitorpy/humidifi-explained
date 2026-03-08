/* Function: fn_2dd70
 * Address:  0x2de90
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2dd70 @ 0x2de90 ---- */

void fn_2dd70(void)

{
  longlong lVar1;
  undefined8 *unaff_R6;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_1;
  
  lVar1 = fn_2dd70();
  if (lVar1 == 0) {
    unaff_R6[3] = uStack_20;
    unaff_R6[2] = uStack_28;
    unaff_R6[1] = uStack_30;
    *unaff_R6 = puStack_38;
    *(undefined1 *)(unaff_R6 + 4) = uStack_1;
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
