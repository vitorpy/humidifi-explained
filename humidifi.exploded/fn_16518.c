/* Function: fn_16518
 * Address:  0x16638
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_16518 @ 0x16638 ---- */

void fn_16518(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = *param_2;
  if (50000 < uVar1) goto LAB_ram_000166f0;
  uVar2 = param_2[2];
  if (uVar2 != uVar1) {
    if (((50000 < uVar2) || (uVar2 <= uVar1)) || (param_2[3] < param_2[1])) goto LAB_ram_000166f0;
    uVar3 = param_2[4];
    uVar1 = uVar2;
    if (uVar3 != uVar2) {
      if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[5] < param_2[3])) goto LAB_ram_000166f0;
      uVar2 = param_2[6];
      uVar1 = uVar3;
      if (uVar2 != uVar3) {
        if (((50000 < uVar2) || (uVar2 <= uVar3)) || (param_2[7] < param_2[5]))
        goto LAB_ram_000166f0;
        uVar3 = param_2[8];
        uVar1 = uVar2;
        if (uVar3 != uVar2) {
          if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[9] < param_2[7]))
          goto LAB_ram_000166f0;
          uVar2 = param_2[10];
          uVar1 = uVar3;
          if (uVar2 != uVar3) {
            if (((50000 < uVar2) || (uVar2 <= uVar3)) || (param_2[0xb] < param_2[9]))
            goto LAB_ram_000166f0;
            uVar3 = param_2[0xc];
            uVar1 = uVar2;
            if (uVar3 != uVar2) {
              if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[0xd] < param_2[0xb]))
              goto LAB_ram_000166f0;
              uVar2 = param_2[0xe];
              uVar1 = uVar3;
              if (uVar2 != uVar3) {
                if (((50000 < uVar2) || (uVar2 <= uVar3)) || (param_2[0xf] < param_2[0xd]))
                goto LAB_ram_000166f0;
                uVar3 = param_2[0x10];
                uVar1 = uVar2;
                if (uVar3 != uVar2) {
                  if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[0x11] < param_2[0xf]))
                  goto LAB_ram_000166f0;
                  uVar2 = param_2[0x12];
                  uVar1 = uVar3;
                  if (uVar2 != uVar3) {
                    if (((uVar2 < 0xc351) && (uVar3 < uVar2)) && (param_2[0x11] <= param_2[0x13])) {
                      uVar4 = 0x1a;
                    }
                    goto LAB_ram_000166f0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0x1a;
  if (uVar1 != 50000) {
    uVar4 = 0;
  }
LAB_ram_000166f0:
  *param_1 = uVar4;
  param_1[1] = 0xbad3;
  return;
}
