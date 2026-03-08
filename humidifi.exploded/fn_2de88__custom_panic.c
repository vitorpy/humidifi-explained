/* Function: fn_2de88__custom_panic
 * Address:  0x2dfa8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2de88__custom_panic @ 0x2dfa8 ---- */

void fn_2de88__custom_panic(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  puVar1 = &uStack_18;
  uStack_18 = param_1;
  puStack_10 = param_2;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = puVar1;
  puStack_8 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_3);
}
