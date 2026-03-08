/* Function: custom_panic
 * Address:  0x2a780
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- custom_panic @ 0x2a780 ---- */

void custom_panic(longlong param_1)

{
  fn_2a678(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[1]);
  fn_2a698("** PANICKED **",0xe);
  return;
}
