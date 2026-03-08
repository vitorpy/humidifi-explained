/* Function: fn_2de48__custom_panic
 * Address:  0x2df68
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2de48__custom_panic @ 0x2df68 ---- */

void fn_2de48__custom_panic(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  fn_2de50();
  fn_2de50();
  fn_2de58();
  puVar1 = &DAT_ram_00032340;
  puVar3 = (undefined8 *)0x2b;
  fn_2deb8__custom_panic(&DAT_ram_00032340,0x2b,param_1);
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  ppuVar2 = &puStack_18;
  puStack_18 = puVar1;
  puStack_10 = puVar3;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = ppuVar2;
  puStack_8 = puVar3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_1);
}
