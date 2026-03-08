/* Function: fn_16748__custom_panic
 * Address:  0x16868
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_16748__custom_panic @ 0x16868 ---- */

ulonglong fn_16748__custom_panic(ulonglong param_1,longlong param_2)

{
  if (param_2 != 0x6c0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,2);
  }
  if ((param_1 & 7) == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_1090__custom_panic(&DAT_ram_00031be9,0xe,0);
}
