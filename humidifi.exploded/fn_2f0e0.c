/* Function: fn_2f0e0
 * Address:  0x2f200
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2f0e0 @ 0x2f200 ---- */

void fn_2f0e0(undefined8 *param_1,byte param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar1 = param_3 + 7 & 0xfffffffffffffff8;
  uVar4 = uVar3;
  if (uVar1 != param_3) {
    uVar1 = uVar1 - param_3;
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    if (uVar1 != 0) {
      do {
        if (*(byte *)(param_3 + uVar3) == param_2) goto LAB_ram_0002f418;
        uVar3 = uVar3 + 1;
        uVar4 = uVar1;
      } while (uVar3 < uVar1);
    }
  }
  if (uVar4 <= param_4 - 0x10) {
    do {
      uVar3 = ((ulonglong *)(param_3 + uVar4))[1] ^ (ulonglong)param_2 * 0x101010101010101;
      uVar1 = *(ulonglong *)(param_3 + uVar4) ^ (ulonglong)param_2 * 0x101010101010101;
      if (((0x101010101010100 - uVar1 | uVar1) & (0x101010101010100 - uVar3 | uVar3) &
          0x8080808080808080) != 0x8080808080808080) break;
      uVar4 = uVar4 + 0x10;
    } while (uVar4 <= param_4 - 0x10);
  }
  uVar3 = uVar4;
  if (param_4 == uVar4) {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if (*(byte *)(param_3 + uVar4 + uVar1) == param_2) {
        uVar3 = uVar4 + uVar1;
LAB_ram_0002f418:
        uVar2 = 1;
        goto LAB_ram_0002f420;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4 - uVar4);
    uVar2 = 0;
  }
LAB_ram_0002f420:
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return;
}
