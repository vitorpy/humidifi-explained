/* Function: fn_17a30
 * Address:  0x17b50
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_17a30 @ 0x17b50 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_17a30(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulonglong uVar19;
  undefined *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uStack_200;
  longlong lStack_1f8;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  ulonglong uStack_1b0;
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  undefined *puStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  undefined *puStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined *puStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  undefined *puStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  undefined *puStack_8;
  
  puStack_10 = (undefined *)(param_2 << 0x30);
  puStack_8 = (undefined *)(((longlong)param_2 >> 0x3f) << 0x30 | param_2 >> 0x10);
  puVar20 = *(undefined **)(param_5 + -0x1000);
  uVar15 = *(ulonglong *)(param_5 + -0xff8);
  fn_15e8__sol_log(&puStack_50,&puStack_10,puVar20,uVar15);
  uVar19 = uStack_40;
  puVar17 = puStack_48;
  if (puStack_50 == (undefined *)0x1) {
    if (puVar20 == (undefined *)0x0 && uVar15 == 0) {
LAB_ram_00018070:
      uVar7 = 0x9200000000;
      goto LAB_ram_00018088;
    }
    uVar16 = ((longlong)param_3 >> 0x3f) << 0x30 | param_3 >> 0x10;
    lStack_20 = param_3 << 0x30;
    lVar9 = -lStack_20;
    if ((longlong)uVar16 < 0) {
      bVar5 = lStack_20 != 0;
      lStack_20 = lVar9;
      if (bVar5) goto LAB_ram_00017ca0;
LAB_ram_00017e18:
      lVar9 = 0;
    }
    else {
      if (lStack_20 == 0) goto LAB_ram_00017e18;
LAB_ram_00017ca0:
      lVar9 = 1;
    }
    puStack_18 = (undefined *)uVar16;
    if ((longlong)uVar16 < 0) {
      puStack_18 = (undefined *)-(uVar16 + lVar9);
    }
    plVar11 = *(longlong **)(param_5 + -0xff0);
    bVar5 = puVar20 != (undefined *)0x0;
    uVar21 = uVar15;
    if ((longlong)uVar15 < 0) {
      puVar20 = (undefined *)-(longlong)puVar20;
      uVar21 = -(uVar15 + bVar5);
    }
    puStack_10 = puVar20;
    puStack_8 = (undefined *)uVar21;
    fn_1178(&puStack_50,&lStack_20,&puStack_10,0x30);
    if ((char)uStack_40 != '\0') goto LAB_ram_00018070;
    if ((longlong)(uVar16 ^ uVar15) < 0) {
      bVar8 = true;
      bVar5 = true;
      if (puStack_50 == (undefined *)0x0) {
        bVar5 = false;
        if (puStack_48 < (undefined *)0x8000000000000001) goto LAB_ram_00017ef0;
LAB_ram_00017eb0:
        if (puStack_48 == (undefined *)0x8000000000000000) goto LAB_ram_00017eb8;
LAB_ram_00017f00:
        if (bVar8) goto LAB_ram_00018070;
      }
      else {
        if ((undefined *)0x8000000000000000 < puStack_48) goto LAB_ram_00017eb0;
LAB_ram_00017ef0:
        bVar8 = false;
        if (puStack_48 != (undefined *)0x8000000000000000) goto LAB_ram_00017f00;
LAB_ram_00017eb8:
        if (bVar5) goto LAB_ram_00018070;
      }
      puStack_1c0 = (undefined *)-(longlong)puStack_50;
      puStack_1d0 = (undefined *)((ulonglong)puStack_48 ^ 0xffffffffffffffff);
      if (puStack_1c0 == (undefined *)0x0) {
        puStack_1d0 = (undefined *)-(longlong)puStack_48;
      }
    }
    else {
      puStack_1d0 = puStack_48;
      puStack_1c0 = puStack_50;
      if ((longlong)puStack_48 < 0) goto LAB_ram_00018070;
    }
    uVar16 = ((longlong)param_4 >> 0x3f) << 0x30 | param_4 >> 0x10;
    lStack_20 = param_4 << 0x30;
    lVar9 = -lStack_20;
    if ((longlong)uVar16 < 0) {
      bVar5 = lStack_20 != 0;
      lStack_20 = lVar9;
      if (bVar5) goto LAB_ram_00017fd8;
LAB_ram_000180c8:
      lVar9 = 0;
    }
    else {
      if (lStack_20 == 0) goto LAB_ram_000180c8;
LAB_ram_00017fd8:
      lVar9 = 1;
    }
    puStack_18 = (undefined *)uVar16;
    if ((longlong)uVar16 < 0) {
      puStack_18 = (undefined *)-(uVar16 + lVar9);
    }
    puStack_10 = puVar20;
    puStack_8 = (undefined *)uVar21;
    fn_1178(&puStack_50,&lStack_20,&puStack_10,0x30);
    if ((char)uStack_40 != '\0') goto LAB_ram_00018070;
    if ((longlong)(uVar16 ^ uVar15) < 0) {
      bVar8 = true;
      bVar5 = true;
      if (puStack_50 == (undefined *)0x0) {
        bVar5 = false;
        if (puStack_48 < (undefined *)0x8000000000000001) goto LAB_ram_00018198;
LAB_ram_00018158:
        if (puStack_48 == (undefined *)0x8000000000000000) goto LAB_ram_00018160;
LAB_ram_000181a8:
        if (bVar8) goto LAB_ram_00018070;
      }
      else {
        if ((undefined *)0x8000000000000000 < puStack_48) goto LAB_ram_00018158;
LAB_ram_00018198:
        bVar8 = false;
        if (puStack_48 != (undefined *)0x8000000000000000) goto LAB_ram_000181a8;
LAB_ram_00018160:
        if (bVar5) goto LAB_ram_00018070;
      }
      puVar20 = (undefined *)-(longlong)puStack_50;
      puVar10 = (undefined *)((ulonglong)puStack_48 ^ 0xffffffffffffffff);
      if (puVar20 == (undefined *)0x0) {
        puVar10 = (undefined *)-(longlong)puStack_48;
      }
    }
    else {
      puVar20 = puStack_50;
      puVar10 = puStack_48;
      if ((longlong)puStack_48 < 0) goto LAB_ram_00018070;
    }
    bVar1 = *(byte *)(plVar11 + 4);
    if (3 < bVar1) goto LAB_ram_0001af60;
    uVar15 = (longlong)puStack_1c0 >> 0x3f;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (-1 < (longlong)uVar19) {
          if (puVar17 != (undefined *)0x0 || uVar19 != 0) {
            if (uVar19 == 0) {
              uVar16 = (ulonglong)puVar17 | (ulonglong)puVar17 >> 1;
              uVar16 = uVar16 | uVar16 >> 2;
              uVar16 = uVar16 | uVar16 >> 4;
              uVar16 = uVar16 | uVar16 >> 8;
              uVar16 = uVar16 | uVar16 >> 0x10;
              uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
              uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
              uVar16 = ((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                       0x40;
            }
            else {
              uVar16 = uVar19 | uVar19 >> 1;
              uVar16 = uVar16 | uVar16 >> 2;
              uVar16 = uVar16 | uVar16 >> 4;
              uVar16 = uVar16 | uVar16 >> 8;
              uVar16 = uVar16 | uVar16 >> 0x10;
              uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
              uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
              uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            }
            puVar13 = (undefined *)0x0;
            fn_30108(&puStack_e0,1,0,(uVar16 ^ 0xffffffffffffffff) & 0x7e);
            uVar16 = 0;
            do {
              puVar2 = puStack_e0 + (longlong)puVar13;
              uVar21 = uStack_d8 + uVar16 + (ulonglong)(puVar2 < puStack_e0);
              bVar5 = true;
              if (uVar19 < uVar21) {
                if (puVar17 < puVar2) goto LAB_ram_00018b08;
LAB_ram_00018c40:
                bVar8 = false;
                if (uVar19 != uVar21) goto LAB_ram_00018c50;
LAB_ram_00018b10:
                if (bVar8) goto LAB_ram_00018b40;
LAB_ram_00018c98:
                bVar5 = false;
                uVar12 = uStack_d8;
              }
              else {
                bVar5 = false;
                if (puVar2 <= puVar17) goto LAB_ram_00018c40;
LAB_ram_00018b08:
                bVar8 = true;
                if (uVar19 == uVar21) goto LAB_ram_00018b10;
LAB_ram_00018c50:
                if (!bVar5) goto LAB_ram_00018c98;
LAB_ram_00018b40:
                uVar12 = 0;
                bVar5 = true;
                uVar21 = 0;
                puVar2 = (undefined *)0x0;
              }
              puVar4 = (undefined *)0x0;
              if (!bVar5) {
                puVar4 = puStack_e0;
              }
              puVar13 = puVar4 + ((ulonglong)puVar13 >> 1 | uVar16 << 0x3f);
              lVar9 = 1;
              if (puVar13 < puVar4) {
                if (puVar17 < puVar2) goto LAB_ram_00018bc0;
LAB_ram_00018cd8:
                lVar22 = 0;
                if (puStack_e0 < (undefined *)0x4) goto LAB_ram_00018cf0;
LAB_ram_00018bd0:
                bVar5 = true;
              }
              else {
                lVar9 = 0;
                if (puVar2 <= puVar17) goto LAB_ram_00018cd8;
LAB_ram_00018bc0:
                lVar22 = 1;
                if ((undefined *)0x3 < puStack_e0) goto LAB_ram_00018bd0;
LAB_ram_00018cf0:
                bVar5 = false;
              }
              if (uStack_d8 != 0) {
                bVar5 = uStack_d8 != 0;
              }
              uVar19 = (uVar19 - uVar21) - lVar22;
              uVar16 = uVar12 + (uVar16 >> 1) + lVar9;
              puVar17 = puVar17 + -(longlong)puVar2;
              puStack_e0 = (undefined *)((ulonglong)puStack_e0 >> 2 | uStack_d8 << 0x3e);
              uStack_d8 = uStack_d8 >> 2;
            } while (bVar5);
            uStack_200 = uVar16 * 0x1000000 | (ulonglong)puVar13 >> 0x28;
            puVar17 = (undefined *)((longlong)puVar13 * 0x1000000);
            goto LAB_ram_00019588;
          }
          puVar17 = (undefined *)0x0;
          uStack_200 = 0;
LAB_ram_000195a0:
          if (-1 < (longlong)puStack_1d0) {
            if (puStack_1c0 == (undefined *)0x0 && puStack_1d0 == (undefined *)0x0) {
              puStack_1c0 = (undefined *)0x0;
              puStack_1d0 = (undefined *)0x0;
            }
            else {
              if (puStack_1d0 == (undefined *)0x0) {
                uVar19 = (ulonglong)puStack_1c0 | (ulonglong)puStack_1c0 >> 1;
                uVar19 = uVar19 | uVar19 >> 2;
                uVar19 = uVar19 | uVar19 >> 4;
                uVar19 = uVar19 | uVar19 >> 8;
                uVar19 = uVar19 | uVar19 >> 0x10;
                uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
                uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar19 = ((uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                         + 0x40;
              }
              else {
                uVar19 = (ulonglong)puStack_1d0 | (ulonglong)puStack_1d0 >> 1;
                uVar19 = uVar19 | uVar19 >> 2;
                uVar19 = uVar19 | uVar19 >> 4;
                uVar19 = uVar19 | uVar19 >> 8;
                uVar19 = uVar19 | uVar19 >> 0x10;
                uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
                uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              }
              puVar13 = (undefined *)0x0;
              fn_30108(&puStack_170,1,0,(uVar19 ^ 0xffffffffffffffff) & 0x7e);
              uVar19 = 0;
              do {
                puVar2 = puStack_170 + (longlong)puVar13;
                puVar4 = (undefined *)(uStack_168 + uVar19 + (ulonglong)(puVar2 < puStack_170));
                bVar5 = true;
                if (puStack_1d0 < puVar4) {
                  if (puStack_1c0 < puVar2) goto LAB_ram_00019e20;
LAB_ram_00019f58:
                  bVar8 = false;
                  if (puStack_1d0 != puVar4) goto LAB_ram_00019f70;
LAB_ram_00019e30:
                  if (bVar8) goto LAB_ram_00019e60;
LAB_ram_00019fb8:
                  bVar5 = false;
                  uVar15 = uStack_168;
                }
                else {
                  bVar5 = false;
                  if (puVar2 <= puStack_1c0) goto LAB_ram_00019f58;
LAB_ram_00019e20:
                  bVar8 = true;
                  if (puStack_1d0 == puVar4) goto LAB_ram_00019e30;
LAB_ram_00019f70:
                  if (!bVar5) goto LAB_ram_00019fb8;
LAB_ram_00019e60:
                  bVar5 = true;
                  puVar4 = (undefined *)0x0;
                  uVar15 = 0;
                  puVar2 = (undefined *)0x0;
                }
                puVar18 = (undefined *)0x0;
                if (!bVar5) {
                  puVar18 = puStack_170;
                }
                puVar13 = puVar18 + ((ulonglong)puVar13 >> 1 | uVar19 << 0x3f);
                lVar9 = 1;
                if (puVar13 < puVar18) {
                  if (puStack_1c0 < puVar2) goto LAB_ram_00019ed8;
LAB_ram_00019ff8:
                  lVar22 = 0;
                  if (puStack_170 < (undefined *)0x4) goto LAB_ram_0001a010;
LAB_ram_00019ee8:
                  bVar5 = true;
                }
                else {
                  lVar9 = 0;
                  if (puVar2 <= puStack_1c0) goto LAB_ram_00019ff8;
LAB_ram_00019ed8:
                  lVar22 = 1;
                  if ((undefined *)0x3 < puStack_170) goto LAB_ram_00019ee8;
LAB_ram_0001a010:
                  bVar5 = false;
                }
                if (uStack_168 != 0) {
                  bVar5 = uStack_168 != 0;
                }
                puStack_1d0 = puStack_1d0 + (-(longlong)puVar4 - lVar22);
                uVar19 = uVar15 + (uVar19 >> 1) + lVar9;
                puStack_1c0 = puStack_1c0 + -(longlong)puVar2;
                puStack_170 = (undefined *)((ulonglong)puStack_170 >> 2 | uStack_168 << 0x3e);
                uStack_168 = uStack_168 >> 2;
              } while (bVar5);
              puStack_1d0 = (undefined *)(uVar19 * 0x1000000 | (ulonglong)puVar13 >> 0x28);
              puStack_1c0 = (undefined *)((longlong)puVar13 * 0x1000000);
            }
            goto LAB_ram_0001a860;
          }
        }
LAB_ram_0001af30:
        fn_2deb8__custom_panic(&DAT_ram_00031b8f,0x2c,&DAT_ram_000324f8);
LAB_ram_0001af60:
        puStack_50 = &DAT_ram_00032658;
        uStack_30 = 0;
        puStack_48 = (undefined *)0x1;
        uStack_38 = 0;
        uStack_40 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_50,&DAT_ram_00032668);
      }
      uStack_200 = uVar19;
    }
    else {
      uVar16 = (longlong)puVar17 >> 0x3f;
      if (bVar1 == 2) {
        if ((longlong)uVar19 < 0) goto LAB_ram_0001af30;
        if (puVar17 == (undefined *)0x0 && uVar19 == 0) {
          lVar9 = 0;
          uVar21 = 0;
        }
        else {
          if (uVar19 == 0) {
            uVar21 = (ulonglong)puVar17 | (ulonglong)puVar17 >> 1;
            uVar21 = uVar21 | uVar21 >> 2;
            uVar21 = uVar21 | uVar21 >> 4;
            uVar21 = uVar21 | uVar21 >> 8;
            uVar21 = uVar21 | uVar21 >> 0x10;
            uVar21 = (uVar21 | uVar21 >> 0x20) ^ 0xffffffffffffffff;
            uVar21 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = ((uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                     0x40;
          }
          else {
            uVar21 = uVar19 | uVar19 >> 1;
            uVar21 = uVar21 | uVar21 >> 2;
            uVar21 = uVar21 | uVar21 >> 4;
            uVar21 = uVar21 | uVar21 >> 8;
            uVar21 = uVar21 | uVar21 >> 0x10;
            uVar21 = (uVar21 | uVar21 >> 0x20) ^ 0xffffffffffffffff;
            uVar21 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          }
          puVar13 = (undefined *)0x0;
          fn_30108(&puStack_90,1,0,(uVar21 ^ 0xffffffffffffffff) & 0x7e);
          uVar12 = 0;
          puStack_1d8 = puVar17;
          uVar21 = uVar19;
          do {
            puVar2 = puStack_90 + (longlong)puVar13;
            uVar3 = uStack_88 + uVar12 + (ulonglong)(puVar2 < puStack_90);
            bVar5 = true;
            if (uVar21 < uVar3) {
              if (puStack_1d8 < puVar2) goto LAB_ram_00018fc8;
LAB_ram_000190f8:
              bVar8 = false;
              if (uVar21 != uVar3) goto LAB_ram_00019108;
LAB_ram_00018fd0:
              if (bVar8) goto LAB_ram_00019000;
LAB_ram_00019150:
              bVar5 = false;
              uVar14 = uStack_88;
            }
            else {
              bVar5 = false;
              if (puVar2 <= puStack_1d8) goto LAB_ram_000190f8;
LAB_ram_00018fc8:
              bVar8 = true;
              if (uVar21 == uVar3) goto LAB_ram_00018fd0;
LAB_ram_00019108:
              if (!bVar5) goto LAB_ram_00019150;
LAB_ram_00019000:
              bVar5 = true;
              uVar14 = 0;
              uVar3 = 0;
              puVar2 = (undefined *)0x0;
            }
            puVar4 = (undefined *)0x0;
            if (!bVar5) {
              puVar4 = puStack_90;
            }
            puVar13 = puVar4 + ((ulonglong)puVar13 >> 1 | uVar12 << 0x3f);
            if (puVar13 < puVar4) {
              uStack_200 = 1;
              if (puStack_1d8 < puVar2) goto LAB_ram_00019088;
LAB_ram_000191a0:
              lVar9 = 0;
              if (puStack_90 < (undefined *)0x4) goto LAB_ram_000191b8;
LAB_ram_00019098:
              bVar5 = true;
              if (uStack_88 != 0) goto LAB_ram_000190b0;
LAB_ram_000191d8:
              bVar8 = false;
            }
            else {
              uStack_200 = 0;
              if (puVar2 <= puStack_1d8) goto LAB_ram_000191a0;
LAB_ram_00019088:
              lVar9 = 1;
              if ((undefined *)0x3 < puStack_90) goto LAB_ram_00019098;
LAB_ram_000191b8:
              bVar5 = false;
              if (uStack_88 == 0) goto LAB_ram_000191d8;
LAB_ram_000190b0:
              bVar8 = true;
            }
            if (uStack_88 != 0) {
              bVar5 = bVar8;
            }
            uVar21 = (uVar21 - uVar3) - lVar9;
            uVar12 = uVar14 + (uVar12 >> 1) + uStack_200;
            puStack_1d8 = puStack_1d8 + -(longlong)puVar2;
            puStack_90 = (undefined *)((ulonglong)puStack_90 >> 2 | uStack_88 << 0x3e);
            uStack_88 = uStack_88 >> 2;
          } while (bVar5);
          uVar21 = uVar12 * 0x1000000 | (ulonglong)puVar13 >> 0x28;
          lVar9 = (longlong)puVar13 * 0x1000000;
        }
        fn_30150(&uStack_d0,uVar19,0);
        fn_30150(&uStack_c0,lVar9,0,puVar17,0);
        fn_30150(&uStack_a0,uVar21,(longlong)uVar21 >> 0x3f,puVar17,uVar16);
        fn_30150(&lStack_b0,uVar21,(longlong)uVar21 >> 0x3f,uVar19,0);
        uVar12 = uStack_a0 + uStack_d0 + lStack_b8;
        lVar22 = lStack_98 + (uVar16 & uVar21) + (ulonglong)(uVar12 < uStack_a0);
        uVar19 = lStack_c8 + (uVar19 & lVar9 >> 0x3f & 0x7fffffffffffffff) +
                 (ulonglong)(uStack_d0 + lStack_b8 < uStack_d0);
        uVar16 = uVar19 + lStack_b0;
        uVar21 = uVar16 + lVar22;
        lVar9 = ((longlong)uVar19 >> 0x3f) + lStack_a8 + (ulonglong)(uVar16 < uVar19) +
                (lVar22 >> 0x3f) + (ulonglong)(uVar21 < uVar16);
        uVar19 = (longlong)(uVar21 * 0x10000) >> 0x3f;
        if ((uVar21 >> 0x30 | lVar9 * 0x10000) != uVar19 || lVar9 >> 0x30 != uVar19)
        goto LAB_ram_0001afd8;
        uStack_200 = uVar21 * 0x10000 | uVar12 >> 0x30;
        puVar17 = (undefined *)(uVar12 * 0x10000 | uStack_c0 >> 0x30);
LAB_ram_00019588:
        if (bVar1 < 2) {
          if (bVar1 == 0) goto LAB_ram_000195a0;
          goto LAB_ram_0001a860;
        }
        puStack_1d8 = puVar17;
        if (bVar1 != 2) goto LAB_ram_00019910;
        if ((longlong)puStack_1d0 < 0) goto LAB_ram_0001af30;
        if (puStack_1c0 == (undefined *)0x0 && puStack_1d0 == (undefined *)0x0) {
          lVar9 = 0;
          uVar19 = 0;
        }
        else {
          if (puStack_1d0 == (undefined *)0x0) {
            uVar19 = (ulonglong)puStack_1c0 | (ulonglong)puStack_1c0 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
            uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
            uVar19 = ((uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                     0x40;
          }
          else {
            uVar19 = (ulonglong)puStack_1d0 | (ulonglong)puStack_1d0 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
            uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
            uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          }
          puVar2 = (undefined *)0x0;
          fn_30108(&puStack_120,1,0,(uVar19 ^ 0xffffffffffffffff) & 0x7e);
          uVar19 = 0;
          puVar17 = puStack_1c0;
          puVar13 = puStack_1d0;
          do {
            puVar4 = puStack_120 + (longlong)puVar2;
            puStack_1b8 = (undefined *)(uStack_118 + uVar19 + (ulonglong)(puVar4 < puStack_120));
            bVar5 = true;
            if (puVar13 < puStack_1b8) {
              if (puVar17 < puVar4) goto LAB_ram_0001a2d8;
LAB_ram_0001a418:
              bVar8 = false;
              if (puVar13 != puStack_1b8) goto LAB_ram_0001a428;
LAB_ram_0001a2e0:
              if (bVar8) goto LAB_ram_0001a328;
LAB_ram_0001a488:
              bVar5 = false;
              uVar16 = uStack_118;
            }
            else {
              bVar5 = false;
              if (puVar4 <= puVar17) goto LAB_ram_0001a418;
LAB_ram_0001a2d8:
              bVar8 = true;
              if (puVar13 == puStack_1b8) goto LAB_ram_0001a2e0;
LAB_ram_0001a428:
              if (!bVar5) goto LAB_ram_0001a488;
LAB_ram_0001a328:
              puStack_1b8 = (undefined *)0x0;
              bVar5 = true;
              uVar16 = 0;
              puVar4 = (undefined *)0x0;
            }
            puVar18 = (undefined *)0x0;
            if (!bVar5) {
              puVar18 = puStack_120;
            }
            puVar2 = puVar18 + ((ulonglong)puVar2 >> 1 | uVar19 << 0x3f);
            if (puVar2 < puVar18) {
              lStack_1f8 = 1;
              if (puVar17 < puVar4) goto LAB_ram_0001a3a0;
LAB_ram_0001a4c8:
              lVar9 = 0;
              if (puStack_120 < (undefined *)0x4) goto LAB_ram_0001a4e0;
LAB_ram_0001a3b0:
              bVar5 = true;
            }
            else {
              lStack_1f8 = 0;
              if (puVar4 <= puVar17) goto LAB_ram_0001a4c8;
LAB_ram_0001a3a0:
              lVar9 = 1;
              if ((undefined *)0x3 < puStack_120) goto LAB_ram_0001a3b0;
LAB_ram_0001a4e0:
              bVar5 = false;
            }
            if (uStack_118 != 0) {
              bVar5 = uStack_118 != 0;
            }
            puVar13 = puVar13 + (-(longlong)puStack_1b8 - lVar9);
            uVar19 = uVar16 + (uVar19 >> 1) + lStack_1f8;
            puVar17 = puVar17 + -(longlong)puVar4;
            puStack_120 = (undefined *)((ulonglong)puStack_120 >> 2 | uStack_118 << 0x3e);
            uStack_118 = uStack_118 >> 2;
          } while (bVar5);
          uVar19 = uVar19 * 0x1000000 | (ulonglong)puVar2 >> 0x28;
          lVar9 = (longlong)puVar2 * 0x1000000;
        }
        fn_30150(&uStack_160,puStack_1d0,0,lVar9);
        fn_30150(&uStack_150,lVar9,0,puStack_1c0,0);
        fn_30150(&uStack_130,uVar19,(longlong)uVar19 >> 0x3f,puStack_1c0,uVar15);
        fn_30150(&lStack_140,uVar19,(longlong)uVar19 >> 0x3f,puStack_1d0,0);
        uVar21 = uStack_130 + uStack_160 + lStack_148;
        lVar22 = lStack_128 + (uVar15 & uVar19) + (ulonglong)(uVar21 < uStack_130);
        uVar16 = lStack_158 + ((ulonglong)puStack_1d0 & lVar9 >> 0x3f & 0x7fffffffffffffff) +
                 (ulonglong)(uStack_160 + lStack_148 < uStack_160);
        uVar19 = uVar16 + lStack_140;
        uVar15 = uVar19 + lVar22;
        lVar9 = ((longlong)uVar16 >> 0x3f) + lStack_138 + (ulonglong)(uVar19 < uVar16) +
                (lVar22 >> 0x3f) + (ulonglong)(uVar15 < uVar19);
        uVar19 = (longlong)(uVar15 * 0x10000) >> 0x3f;
        if ((uVar15 >> 0x30 | lVar9 * 0x10000) != uVar19 || lVar9 >> 0x30 != uVar19) {
LAB_ram_0001afd8:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032680);
        }
        puStack_1d0 = (undefined *)(uVar15 * 0x10000 | uVar21 >> 0x30);
      }
      else {
        lVar9 = (longlong)uVar19 >> 0x3f;
        fn_30150(&uStack_80,uVar19,lVar9,puVar17,uVar16);
        fn_30150(&uStack_70,puVar17,0,puVar17,0);
        fn_30150(&lStack_60,uVar19,lVar9,uVar19,lVar9);
        uVar21 = uStack_80 + lStack_68;
        lStack_78 = lStack_78 + (uVar16 & uVar19);
        uVar19 = uVar21 + uStack_80;
        lVar9 = lStack_78 + (ulonglong)(uVar19 < uVar21);
        uVar21 = lStack_78 + (ulonglong)(uVar21 < uStack_80);
        uVar12 = uVar21 + lStack_60;
        uVar16 = uVar12 + lVar9;
        lVar9 = ((longlong)uVar21 >> 0x3f) + lStack_58 + (ulonglong)(uVar12 < uVar21) +
                (lVar9 >> 0x3f) + (ulonglong)(uVar16 < uVar12);
        uVar21 = (longlong)(uVar16 * 0x10000) >> 0x3f;
        if ((uVar16 >> 0x30 | lVar9 * 0x10000) != uVar21 || lVar9 >> 0x30 != uVar21)
        goto LAB_ram_0001afc0;
        uStack_200 = uVar16 * 0x10000 | uVar19 >> 0x30;
        puStack_1d8 = (undefined *)(uVar19 * 0x10000 | uStack_70 >> 0x30);
LAB_ram_00019910:
        lVar9 = (longlong)puStack_1d0 >> 0x3f;
        fn_30150(&uStack_110,puStack_1d0,lVar9,puStack_1c0,uVar15);
        fn_30150(&uStack_100,puStack_1c0,0,puStack_1c0,0);
        fn_30150(&lStack_f0,puStack_1d0,lVar9,puStack_1d0,lVar9);
        uVar19 = uStack_110 + lStack_f8;
        lStack_108 = lStack_108 + (uVar15 & (ulonglong)puStack_1d0);
        uVar21 = uVar19 + uStack_110;
        lVar9 = lStack_108 + (ulonglong)(uVar21 < uVar19);
        uVar16 = lStack_108 + (ulonglong)(uVar19 < uStack_110);
        uVar19 = uVar16 + lStack_f0;
        uVar15 = uVar19 + lVar9;
        lVar9 = ((longlong)uVar16 >> 0x3f) + lStack_e8 + (ulonglong)(uVar19 < uVar16) +
                (lVar9 >> 0x3f) + (ulonglong)(uVar15 < uVar19);
        uVar19 = (longlong)(uVar15 * 0x10000) >> 0x3f;
        if ((uVar15 >> 0x30 | lVar9 * 0x10000) != uVar19 || lVar9 >> 0x30 != uVar19) {
LAB_ram_0001afc0:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032698);
        }
        puStack_1d0 = (undefined *)(uVar15 * 0x10000 | uVar21 >> 0x30);
        uStack_150 = uStack_100;
      }
      puStack_1c0 = (undefined *)(uVar21 * 0x10000 | uStack_150 >> 0x30);
      puVar17 = puStack_1d8;
    }
LAB_ram_0001a860:
    puVar13 = puStack_1d0 + (-(ulonglong)(puStack_1c0 < puVar17) - uStack_200);
    uVar6 = 0xf1;
    if ((-1 < (longlong)
              (((ulonglong)puStack_1d0 ^ uStack_200) & ((ulonglong)puStack_1d0 ^ (ulonglong)puVar13)
              )) && (uVar6 = 0xf4, puVar20 != (undefined *)0x0 || puVar10 != (undefined *)0x0)) {
      lStack_20 = (longlong)puStack_1c0 - (longlong)puVar17;
      lVar9 = -lStack_20;
      if ((longlong)puVar13 < 0) {
        bVar5 = lStack_20 != 0;
        lStack_20 = lVar9;
        if (bVar5) goto LAB_ram_0001a920;
LAB_ram_0001aa20:
        lVar9 = 0;
        if ((longlong)puVar13 < 0) goto LAB_ram_0001aa38;
LAB_ram_0001a930:
        puStack_18 = puVar13;
        if (puVar20 != (undefined *)0x0) goto LAB_ram_0001a948;
LAB_ram_0001aa60:
        lVar9 = 0;
      }
      else {
        if (lStack_20 == 0) goto LAB_ram_0001aa20;
LAB_ram_0001a920:
        lVar9 = 1;
        if (-1 < (longlong)puVar13) goto LAB_ram_0001a930;
LAB_ram_0001aa38:
        puStack_18 = (undefined *)-(longlong)(puVar13 + lVar9);
        if (puVar20 == (undefined *)0x0) goto LAB_ram_0001aa60;
LAB_ram_0001a948:
        lVar9 = 1;
      }
      puStack_8 = puVar10;
      puStack_10 = puVar20;
      if ((longlong)puVar10 < 0) {
        puStack_10 = (undefined *)-(longlong)puVar20;
        puStack_8 = (undefined *)-(longlong)(puVar10 + lVar9);
      }
      fn_1178(&puStack_50,&lStack_20,&puStack_10,0x30);
      if ((char)uStack_40 == '\0') {
        if ((longlong)((ulonglong)puVar13 ^ (ulonglong)puVar10) < 0) {
          bVar8 = true;
          bVar5 = true;
          if (puStack_50 == (undefined *)0x0) {
            bVar5 = false;
            if (puStack_48 < (undefined *)0x8000000000000001) goto LAB_ram_0001ab48;
LAB_ram_0001ab08:
            if (puStack_48 == (undefined *)0x8000000000000000) goto LAB_ram_0001ab10;
LAB_ram_0001ab58:
            if (bVar8) goto LAB_ram_0001a9e0;
          }
          else {
            if ((undefined *)0x8000000000000000 < puStack_48) goto LAB_ram_0001ab08;
LAB_ram_0001ab48:
            bVar8 = false;
            if (puStack_48 != (undefined *)0x8000000000000000) goto LAB_ram_0001ab58;
LAB_ram_0001ab10:
            if (bVar5) goto LAB_ram_0001a9e0;
          }
          puVar17 = (undefined *)-(longlong)puStack_50;
          puVar20 = (undefined *)((ulonglong)puStack_48 ^ 0xffffffffffffffff);
          if (puVar17 == (undefined *)0x0) {
            puVar20 = (undefined *)-(longlong)puStack_48;
          }
        }
        else {
          puVar20 = puStack_48;
          puVar17 = puStack_50;
          if ((longlong)puStack_48 < 0) goto LAB_ram_0001a9e0;
        }
        uVar15 = plVar11[1];
        fn_30150(&uStack_1b0,uVar15,(longlong)uVar15 >> 0x3f,puVar17);
        lVar9 = *plVar11;
        fn_30150(&uStack_1a0,lVar9,0,puVar17,0);
        fn_30150(&uStack_180,puVar20,(longlong)puVar20 >> 0x3f,lVar9,lVar9 >> 0x3f);
        fn_30150(&lStack_190,uVar15,(longlong)uVar15 >> 0x3f,puVar20,
                         (longlong)puVar20 >> 0x3f);
        uVar19 = uStack_180 + uStack_1b0 + lStack_198;
        lVar9 = lStack_178 + (lVar9 >> 0x3f & (ulonglong)puVar20) + (ulonglong)(uVar19 < uStack_180)
        ;
        uVar16 = lStack_1a8 + ((longlong)puVar17 >> 0x3f & uVar15) +
                 (ulonglong)(uStack_1b0 + lStack_198 < uStack_1b0);
        uVar21 = uVar16 + lStack_190;
        uVar15 = uVar21 + lVar9;
        lVar9 = ((longlong)uVar16 >> 0x3f) + lStack_188 + (ulonglong)(uVar21 < uVar16) +
                (lVar9 >> 0x3f) + (ulonglong)(uVar15 < uVar21);
        uVar16 = (longlong)(uVar15 * 0x10000) >> 0x3f;
        if ((uVar15 >> 0x30 | lVar9 * 0x10000) == uVar16 && lVar9 >> 0x30 == uVar16) {
          *(ulonglong *)(param_1 + 2) = uVar19 * 0x10000 | uStack_1a0 >> 0x30;
          *(ulonglong *)(param_1 + 4) = uVar15 * 0x10000 | uVar19 >> 0x30;
          uVar6 = 0;
          goto LAB_ram_00018098;
        }
        uVar7 = 0xf800000000;
        goto LAB_ram_00018088;
      }
    }
LAB_ram_0001a9e0:
    param_1[2] = uVar6;
    param_1[1] = 0;
  }
  else {
    uVar7 = 0x8800000000;
LAB_ram_00018088:
    *(undefined8 *)(param_1 + 1) = uVar7;
  }
  uVar6 = 1;
LAB_ram_00018098:
  *param_1 = uVar6;
  return;
}
