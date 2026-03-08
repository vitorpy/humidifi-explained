/* Function: fn_167c8__custom_panic
 * Address:  0x168e8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_167c8__custom_panic @ 0x168e8 ---- */

void fn_167c8__custom_panic(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  if (*(ulonglong *)(param_2 + 0x10) != 0 || uVar2 != 0) {
    if (0xffffffffffff < uVar2) goto LAB_ram_00016ab8;
    uVar1 = 0;
    if (*(ulonglong *)(param_2 + 0x30) < (*(ulonglong *)(param_2 + 0x10) >> 0x30 | uVar2 << 0x10))
    goto LAB_ram_00016970;
  }
  uVar1 = 0;
  if (*(ulonglong *)(param_2 + 0x30) <= *(ulonglong *)(param_2 + 0x38)) {
    uVar4 = *(ulonglong *)(param_2 + 0x68);
    uVar3 = *(ulonglong *)(param_2 + 0x80);
    uVar2 = 0;
    if (*(ulonglong *)(param_2 + 0x60) != 0 || uVar4 != 0) {
      if (0xffffffffffff < uVar4) goto LAB_ram_00016ab8;
      uVar2 = *(ulonglong *)(param_2 + 0x60) >> 0x30 | uVar4 << 0x10;
    }
    if (((*(ulonglong *)(param_2 + 0x38) <= uVar3) && (uVar2 <= uVar3)) &&
       (uVar3 <= *(ulonglong *)(param_2 + 0x88))) {
      uVar4 = *(ulonglong *)(param_2 + 0xb8);
      uVar3 = *(ulonglong *)(param_2 + 0xd0);
      uVar2 = 0;
      if (*(ulonglong *)(param_2 + 0xb0) != 0 || uVar4 != 0) {
        if (0xffffffffffff < uVar4) {
LAB_ram_00016ab8:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032998);
        }
        uVar2 = *(ulonglong *)(param_2 + 0xb0) >> 0x30 | uVar4 << 0x10;
      }
      if (((*(ulonglong *)(param_2 + 0x88) <= uVar3) && (uVar2 <= uVar3)) &&
         (uVar3 <= *(ulonglong *)(param_2 + 0xd8))) {
        uVar1 = 0x1a;
      }
    }
  }
LAB_ram_00016970:
  *param_1 = uVar1;
  param_1[1] = 0xbad2;
  return;
}
