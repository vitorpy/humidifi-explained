/* Function: fn_30340
 * Address:  0x30460
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_30340 @ 0x30460 ---- */

void fn_30340(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     ulonglong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uStack_c8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong auStack_90 [2];
  ulonglong auStack_80 [2];
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong auStack_60 [2];
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  longlong lStack_28;
  ulonglong auStack_20 [2];
  ulonglong auStack_10 [2];
  
  uVar4 = param_5 | param_5 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  if (param_3 == 0) {
    uVar6 = param_2 | param_2 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  else {
    uVar6 = param_3 | param_3 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (param_5 == 0) {
    uVar4 = param_4 | param_4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  if (uVar6 < uVar4) {
    if (uVar6 < 0x40) {
      if (uVar4 < 0x60) {
        if (0x1f < (uVar4 - uVar6 & 0xffffffff)) {
          uVar2 = 0x60 - uVar4;
          fn_302f8(auStack_10,param_4,param_5,(longlong)(int)uVar2);
          uVar7 = 0;
          uVar5 = 0;
          uStack_c8 = param_2;
          do {
            uVar6 = 0x40 - uVar6;
            fn_302f8(auStack_20,uStack_c8,param_3,(longlong)(int)uVar6);
            if ((uVar6 & 0xffffffff) < (uVar2 & 0xffffffff)) {
              uVar4 = param_4;
              fn_302f8(auStack_60,param_4,param_5,(longlong)(int)uVar6);
              if (auStack_60[0] != 0) {
                uVar4 = auStack_20[0] / auStack_60[0];
              }
              fn_30150(&uStack_70);
              bVar1 = uStack_c8 < uStack_70;
              if (param_3 != uStack_68) {
                bVar1 = param_3 < uStack_68;
              }
              if (bVar1) {
                param_4 = uStack_c8 + param_4;
                uVar4 = (uVar4 + uVar7) - 1;
                param_3 = ((param_3 + param_5 + (ulonglong)(param_4 < uStack_c8)) - uStack_68) -
                          (ulonglong)(param_4 < uStack_70);
                param_2 = param_4 - uStack_70;
                uVar5 = uVar5 + (uVar4 < uVar7);
                uVar7 = uVar4;
              }
              else {
                param_3 = (param_3 - uStack_68) - (ulonglong)(uStack_c8 < uStack_70);
                param_2 = uStack_c8 - uStack_70;
                uVar5 = uVar5 + (uVar7 + uVar4 < uVar7);
                uVar7 = uVar7 + uVar4;
              }
              goto LAB_ram_00030bd0;
            }
            uVar3 = auStack_20[0] / ((auStack_10[0] & 0xffffffff) + 1);
            uVar6 = uVar6 - uVar2 & 0x7f;
            fn_30108(&uStack_30,uVar3,0,uVar6);
            fn_30150(&uStack_40,uVar3,0,param_4,param_5);
            fn_30108(&uStack_50,uStack_40,uStack_38,uVar6);
            uVar7 = uStack_30 + uVar7;
            param_3 = (param_3 - lStack_48) - (ulonglong)(uStack_c8 < uStack_50);
            param_2 = uStack_c8 - uStack_50;
            if (param_3 == 0) {
              uVar6 = param_2 | param_2 >> 1;
              uVar6 = uVar6 | uVar6 >> 2;
              uVar6 = uVar6 | uVar6 >> 4;
              uVar6 = uVar6 | uVar6 >> 8;
              uVar6 = uVar6 | uVar6 >> 0x10;
              uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
              uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
              uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
              uVar6 = ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                      0x40;
            }
            else {
              uVar6 = param_3 | param_3 >> 1;
              uVar6 = uVar6 | uVar6 >> 2;
              uVar6 = uVar6 | uVar6 >> 4;
              uVar6 = uVar6 | uVar6 >> 8;
              uVar6 = uVar6 | uVar6 >> 0x10;
              uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
              uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
              uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
              uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            }
            uVar5 = lStack_28 + uVar5 + (ulonglong)(uVar7 < uStack_30);
            if (uVar4 <= uVar6) {
              bVar1 = param_2 < param_4;
              if (param_3 != param_5) {
                bVar1 = param_3 < param_5;
              }
              if (!bVar1) {
                uVar7 = uVar7 + 1;
                param_3 = (param_3 - param_5) - (ulonglong)(param_2 < param_4);
                uVar5 = uVar5 + (uVar7 == 0);
                param_2 = param_2 - param_4;
              }
              goto LAB_ram_00030bd0;
            }
            uStack_c8 = param_2;
          } while (uVar6 < 0x40);
          if (param_4 != 0) {
            uVar6 = param_2 / param_4;
          }
          param_3 = 0;
          param_2 = param_2 % param_4;
          uVar5 = uVar5 + (uVar7 + uVar6 < uVar7);
          uVar7 = uVar7 + uVar6;
          goto LAB_ram_00030bd0;
        }
        lVar8 = (longlong)(0x40 - (int)uVar6);
        fn_302f8(auStack_80,param_4,param_5,lVar8);
        fn_302f8(auStack_90,param_2,param_3,lVar8);
        uVar7 = auStack_90[0] / auStack_80[0];
        fn_30150(&uStack_a0,param_4,0,uVar7,0);
        fn_30150(&lStack_b0,param_5,0,uVar7,0);
        uVar4 = uStack_98 + lStack_b0;
        if (lStack_a8 + (ulonglong)(uVar4 < uStack_98) == 0) {
          bVar1 = param_2 < uStack_a0;
          if (param_3 != uVar4) {
            bVar1 = param_3 < uVar4;
          }
          if (!bVar1) {
            param_3 = (param_3 - uVar4) - (ulonglong)(param_2 < uStack_a0);
            param_2 = param_2 - uStack_a0;
            goto LAB_ram_00030bc8;
          }
        }
        param_2 = param_4 + param_2;
        param_3 = ((param_5 + param_3 + (ulonglong)(param_2 < param_4)) - uVar4) -
                  (ulonglong)(param_2 < uStack_a0);
        param_2 = param_2 - uStack_a0;
        uVar5 = 0;
        uVar7 = uVar7 - 1;
        goto LAB_ram_00030bd0;
      }
      uVar6 = param_4 & 0xffffffff;
      uVar4 = (param_3 - (param_3 / uVar6) * param_4 << 0x20 | param_2 >> 0x20) / uVar6;
      uVar5 = uVar4 >> 0x20 | param_3 / uVar6;
      param_2 = (param_2 >> 0x20) - uVar4 * param_4 << 0x20 | param_2 & 0xffffffff;
      uVar2 = param_2 / uVar6;
      uVar7 = uVar4 << 0x20 | uVar2;
      param_2 = param_2 - uVar2 * uVar6;
    }
    else {
      uVar7 = param_2 / param_4;
      param_2 = param_2 - uVar7 * param_4;
      uVar5 = 0;
    }
    param_3 = 0;
  }
  else {
    uVar7 = 0;
    bVar1 = param_2 < param_4;
    if (param_3 != param_5) {
      bVar1 = param_3 < param_5;
    }
    if (!bVar1) {
      uVar7 = 1;
      param_3 = (param_3 - param_5) - (ulonglong)(param_2 < param_4);
      param_2 = param_2 - param_4;
    }
LAB_ram_00030bc8:
    uVar5 = 0;
  }
LAB_ram_00030bd0:
  param_1[2] = param_2;
  *param_1 = uVar7;
  param_1[3] = param_3;
  param_1[1] = uVar5;
  return;
}
