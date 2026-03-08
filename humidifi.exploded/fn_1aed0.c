/* Function: fn_1aed0
 * Address:  0x1aff0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1aed0 @ 0x1aff0 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_1aed0(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lStack_180;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  undefined *puStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lStack_40 = param_2 << 0x30;
  uStack_38 = ((longlong)param_2 >> 0x3f) << 0x30 | param_2 >> 0x10;
  fn_15e8__sol_log(&puStack_30,&lStack_40);
  if (puStack_30 == (undefined *)0x0) {
    uVar8 = 0x8800000000;
  }
  else {
    uStack_170 = (uStack_20 - param_5[3]) - (ulonglong)(uStack_28 < (ulonglong)param_5[2]);
    if ((longlong)((uStack_20 ^ param_5[3]) & (uStack_20 ^ uStack_170)) < 0) {
      uVar8 = 0x10800000000;
    }
    else if ((longlong)uStack_170 < 0) {
      uVar8 = 0x10c00000000;
    }
    else {
      bVar1 = *(byte *)(param_5 + 8);
      if (3 < bVar1) {
        puStack_30 = &DAT_ram_00032658;
        uStack_10 = 0;
        uStack_28 = 1;
        uStack_18 = 0;
        uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_30,&DAT_ram_00032668);
      }
      uStack_168 = uStack_28 - param_5[2];
      uVar9 = param_5[1];
      lVar15 = *param_5;
      uVar14 = lVar15 >> 0x3f;
      uVar12 = (longlong)uStack_168 >> 0x3f;
      lVar10 = (longlong)uVar9 >> 0x3f;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (uStack_168 == 0 && uStack_170 == 0) {
            lVar16 = 0;
            uVar12 = 0;
          }
          else {
            if (uStack_170 == 0) {
              uVar12 = uStack_168 | uStack_168 >> 1;
              uVar12 = uVar12 | uVar12 >> 2;
              uVar12 = uVar12 | uVar12 >> 4;
              uVar12 = uVar12 | uVar12 >> 8;
              uVar12 = uVar12 | uVar12 >> 0x10;
              uVar12 = (uVar12 | uVar12 >> 0x20) ^ 0xffffffffffffffff;
              uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
              uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
              uVar12 = ((uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                       0x40;
            }
            else {
              uVar12 = uStack_170 | uStack_170 >> 1;
              uVar12 = uVar12 | uVar12 >> 2;
              uVar12 = uVar12 | uVar12 >> 4;
              uVar12 = uVar12 | uVar12 >> 8;
              uVar12 = uVar12 | uVar12 >> 0x10;
              uVar12 = (uVar12 | uVar12 >> 0x20) ^ 0xffffffffffffffff;
              uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
              uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
              uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            }
            uVar13 = 0;
            fn_30108(&uStack_120,1,0,(uVar12 ^ 0xffffffffffffffff) & 0x7e);
            uVar12 = 0;
            do {
              uVar5 = uStack_120 + uVar13;
              uVar11 = uStack_118 + uVar12 + (ulonglong)(uVar5 < uStack_120);
              bVar4 = true;
              if (uStack_170 < uVar11) {
                if (uStack_168 < uVar5) goto LAB_ram_0001c0c0;
LAB_ram_0001c208:
                bVar2 = false;
                if (uStack_170 != uVar11) goto LAB_ram_0001c218;
LAB_ram_0001c0c8:
                if (bVar2) goto LAB_ram_0001c0f8;
LAB_ram_0001c260:
                bVar4 = false;
                uVar3 = uStack_118;
              }
              else {
                bVar4 = false;
                if (uVar5 <= uStack_168) goto LAB_ram_0001c208;
LAB_ram_0001c0c0:
                bVar2 = true;
                if (uStack_170 == uVar11) goto LAB_ram_0001c0c8;
LAB_ram_0001c218:
                if (!bVar4) goto LAB_ram_0001c260;
LAB_ram_0001c0f8:
                bVar4 = true;
                uVar11 = 0;
                uVar5 = 0;
                uVar3 = 0;
              }
              uVar6 = 0;
              if (!bVar4) {
                uVar6 = uStack_120;
              }
              uVar13 = uVar6 + (uVar13 >> 1 | uVar12 << 0x3f);
              if (uVar13 < uVar6) {
                lStack_180 = 1;
                if (uStack_168 < uVar5) goto LAB_ram_0001c178;
LAB_ram_0001c2b0:
                lVar16 = 0;
                if (uStack_120 < 4) goto LAB_ram_0001c2c8;
LAB_ram_0001c188:
                bVar4 = true;
              }
              else {
                lStack_180 = 0;
                if (uVar5 <= uStack_168) goto LAB_ram_0001c2b0;
LAB_ram_0001c178:
                lVar16 = 1;
                if (3 < uStack_120) goto LAB_ram_0001c188;
LAB_ram_0001c2c8:
                bVar4 = false;
              }
              if (uStack_118 != 0) {
                bVar4 = uStack_118 != 0;
              }
              uStack_170 = (uStack_170 - uVar11) - lVar16;
              uVar12 = uVar3 + (uVar12 >> 1) + lStack_180;
              uStack_168 = uStack_168 - uVar5;
              uStack_120 = uStack_120 >> 2 | uStack_118 << 0x3e;
              uStack_118 = uStack_118 >> 2;
            } while (bVar4);
            uVar12 = uVar12 * 0x1000000 | uVar13 >> 0x28;
            lVar16 = uVar13 * 0x1000000;
          }
          fn_30150(&uStack_160,uVar9,lVar10,lVar16);
          fn_30150(&uStack_150,lVar16,0,lVar15,0);
          fn_30150(&uStack_130,uVar12,(longlong)uVar12 >> 0x3f,lVar15,uVar14);
          fn_30150(&lStack_140,uVar12,(longlong)uVar12 >> 0x3f,uVar9,lVar10);
          uVar13 = uStack_130 + uStack_160 + lStack_148;
          lVar10 = lStack_128 + (uVar14 & uVar12) + (ulonglong)(uVar13 < uStack_130);
          uVar12 = lStack_158 + (lVar16 >> 0x3f & uVar9) +
                   (ulonglong)(uStack_160 + lStack_148 < uStack_160);
          uVar14 = uVar12 + lStack_140;
          uVar9 = uVar14 + lVar10;
          lVar10 = ((longlong)uVar12 >> 0x3f) + lStack_138 + (ulonglong)(uVar14 < uVar12) +
                   (lVar10 >> 0x3f) + (ulonglong)(uVar9 < uVar14);
          uVar12 = (longlong)(uVar9 * 0x10000) >> 0x3f;
          if ((uVar9 >> 0x30 | lVar10 * 0x10000) == uVar12 && lVar10 >> 0x30 == uVar12) {
            uStack_20 = uVar9 * 0x10000 | uVar13 >> 0x30;
LAB_ram_0001c628:
            uStack_28 = param_5[4] + (uVar13 * 0x10000 | uStack_150 >> 0x30);
            bVar4 = uStack_28 < (ulonglong)param_5[4];
            lVar10 = param_5[5];
LAB_ram_0001c678:
            uVar7 = 0;
            *(ulonglong *)(param_1 + 2) = uStack_28;
            *(ulonglong *)(param_1 + 4) = lVar10 + uStack_20 + (ulonglong)bVar4;
            goto LAB_ram_0001b138;
          }
          uVar8 = 0x11300000000;
        }
        else {
          fn_30150(&uStack_110,uVar9,lVar10,uStack_168);
          fn_30150(&uStack_100,lVar15,0,uStack_168,0);
          fn_30150(&uStack_e0,uStack_170,0,lVar15,uVar14);
          fn_30150(&lStack_f0,uVar9,lVar10,uStack_170,0);
          uVar13 = uStack_e0 + uStack_110 + lStack_f8;
          lVar10 = lStack_d8 + (uStack_170 & uVar14 & 0x7fffffffffffffff) +
                   (ulonglong)(uVar13 < uStack_e0);
          uVar12 = lStack_108 + (uVar12 & uVar9) + (ulonglong)(uStack_110 + lStack_f8 < uStack_110);
          uVar14 = uVar12 + lStack_f0;
          uVar9 = uVar14 + lVar10;
          lVar10 = ((longlong)uVar12 >> 0x3f) + lStack_e8 + (ulonglong)(uVar14 < uVar12) +
                   (lVar10 >> 0x3f) + (ulonglong)(uVar9 < uVar14);
          uVar12 = (longlong)(uVar9 * 0x10000) >> 0x3f;
          if ((uVar9 >> 0x30 | lVar10 * 0x10000) == uVar12 && lVar10 >> 0x30 == uVar12) {
            uStack_20 = uVar9 * 0x10000 | uVar13 >> 0x30;
            uStack_150 = uStack_100;
            goto LAB_ram_0001c628;
          }
          uVar8 = 0x11800000000;
        }
      }
      else if (bVar1 == 2) {
        fn_30150(&uStack_c0,uVar9,lVar10,uStack_168);
        fn_30150(&uStack_b0,lVar15,0,uStack_168,0);
        fn_30150(&uStack_90,uStack_170,0,lVar15,uVar14);
        fn_30150(&lStack_a0,uVar9,lVar10,uStack_170,0);
        uVar13 = uStack_90 + uStack_c0 + lStack_a8;
        lVar10 = lStack_88 + (uStack_170 & uVar14 & 0x7fffffffffffffff) +
                 (ulonglong)(uVar13 < uStack_90);
        uVar9 = lStack_b8 + (uVar12 & uVar9) + (ulonglong)(uStack_c0 + lStack_a8 < uStack_c0);
        uVar12 = uVar9 + lStack_a0;
        uVar14 = uVar12 + lVar10;
        lVar10 = ((longlong)uVar9 >> 0x3f) + lStack_98 + (ulonglong)(uVar12 < uVar9) +
                 (lVar10 >> 0x3f) + (ulonglong)(uVar14 < uVar12);
        uVar9 = (longlong)(uVar14 * 0x10000) >> 0x3f;
        if ((uVar14 >> 0x30 | lVar10 * 0x10000) == uVar9 && lVar10 >> 0x30 == uVar9) {
          fn_0888__custom_panic(&uStack_d0,uStack_168,uStack_170);
          fn_0488(&puStack_30,uVar13 * 0x10000 | uStack_b0 >> 0x30,
                           uVar14 * 0x10000 | uVar13 >> 0x30,uStack_d0,uStack_c8);
          if (puStack_30 != (undefined *)0x0) {
LAB_ram_0001bda0:
            uStack_28 = param_5[4] + uStack_28;
            bVar4 = uStack_28 < (ulonglong)param_5[4];
            lVar10 = param_5[5];
            goto LAB_ram_0001c678;
          }
          uVar8 = 0x12200000000;
        }
        else {
          uVar8 = 0x11e00000000;
        }
      }
      else {
        fn_30150(&uStack_80,uVar9,lVar10,uStack_168);
        fn_30150(&uStack_70,lVar15,0,uStack_168,0);
        fn_30150(&uStack_50,uStack_170,0,lVar15,uVar14);
        fn_30150(&lStack_60,uVar9,lVar10,uStack_170,0);
        uVar13 = uStack_50 + uStack_80 + lStack_68;
        lVar10 = lStack_48 + (uStack_170 & uVar14 & 0x7fffffffffffffff) +
                 (ulonglong)(uVar13 < uStack_50);
        uVar9 = lStack_78 + (uVar12 & uVar9) + (ulonglong)(uStack_80 + lStack_68 < uStack_80);
        uVar14 = uVar9 + lStack_60;
        uVar12 = uVar14 + lVar10;
        lVar10 = ((longlong)uVar9 >> 0x3f) + lStack_58 + (ulonglong)(uVar14 < uVar9) +
                 (lVar10 >> 0x3f) + (ulonglong)(uVar12 < uVar14);
        uVar9 = (longlong)(uVar12 * 0x10000) >> 0x3f;
        if ((uVar12 >> 0x30 | lVar10 * 0x10000) == uVar9 && lVar10 >> 0x30 == uVar9) {
          fn_0488(&puStack_30,uVar13 * 0x10000 | uStack_70 >> 0x30,
                           uVar12 * 0x10000 | uVar13 >> 0x30,uStack_168,uStack_170);
          if (puStack_30 != (undefined *)0x0) goto LAB_ram_0001bda0;
          uVar8 = 0x12c00000000;
        }
        else {
          uVar8 = 0x12900000000;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 1) = uVar8;
  uVar7 = 1;
LAB_ram_0001b138:
  *param_1 = uVar7;
  return;
}
