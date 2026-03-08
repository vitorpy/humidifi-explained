/* Function: fn_2ea28
 * Address:  0x2eb48
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2ea28 @ 0x2eb48 ---- */

undefined8 fn_2ea28(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_2 & 0xffffffff) != 0x110000) &&
     (lVar1 = func_0x00000000(*(undefined8 *)(param_1 + 0x20),param_2,
                              *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20)), lVar1 != 0)) {
    return 1;
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x00000000(*(undefined8 *)(param_1 + 0x20),param_3,param_4,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  }
  return uVar2;
}
