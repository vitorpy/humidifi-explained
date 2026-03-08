/* Function: fn_28b70__sol_log
 * Address:  0x28c90
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_28b70__sol_log @ 0x28c90 ---- */

/* WARNING: Removing unreachable block (ram,0x000297e0) */
/* WARNING: Type propagation algorithm not settling */

void fn_28b70__sol_log(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  bool bVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined *puVar27;
  undefined **ppuStack_190;
  longlong alStack_188 [2];
  ulonglong uStack_178;
  undefined8 uStack_170;
  longlong alStack_168 [2];
  ulonglong uStack_158;
  undefined8 uStack_150;
  longlong alStack_148 [2];
  ulonglong uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  longlong alStack_d8 [2];
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined *apuStack_b8 [2];
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined *apuStack_88 [2];
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined *apuStack_68 [2];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong auStack_40 [8];
  
  lVar22 = -0x40;
  uVar19 = param_2[3];
  uVar15 = uVar19;
  if (uVar19 == 0) {
    lVar22 = -0x80;
    uVar15 = param_2[2];
    if (uVar15 != 0) goto LAB_ram_00028ce8;
    lVar22 = -0xc0;
    uVar15 = param_2[1];
    if (uVar15 != 0) goto LAB_ram_00028ce8;
    uVar16 = *param_2;
    uVar15 = 0x40;
    if (uVar16 != 0) {
      uVar16 = uVar16 | uVar16 >> 1;
      uVar16 = uVar16 | uVar16 >> 2;
      uVar16 = uVar16 | uVar16 >> 4;
      uVar16 = uVar16 | uVar16 >> 8;
      uVar16 = uVar16 | uVar16 >> 0x10;
      uVar15 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
      uVar15 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    }
    uVar15 = 0x40 - uVar15;
    uVar16 = param_3[3];
  }
  else {
LAB_ram_00028ce8:
    uVar15 = uVar15 | uVar15 >> 1;
    uVar15 = uVar15 | uVar15 >> 2;
    uVar15 = uVar15 | uVar15 >> 4;
    uVar15 = uVar15 | uVar15 >> 8;
    uVar15 = uVar15 | uVar15 >> 0x10;
    uVar15 = (uVar15 | uVar15 >> 0x20) ^ 0xffffffffffffffff;
    uVar15 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (lVar22 - ((uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) +
             0x140;
    uVar16 = param_3[3];
  }
  lVar22 = -0x40;
  if (uVar16 == 0) {
    lVar22 = -0x80;
    uVar16 = param_3[2];
    if (uVar16 == 0) {
      lVar22 = -0xc0;
      uVar16 = param_3[1];
      if (uVar16 == 0) {
        uVar16 = *param_3;
        if (uVar16 == 0) {
LAB_ram_0002a690:
          apuStack_b8[0] = &DAT_ram_000324d0;
          uStack_98 = 0;
          apuStack_b8[1] = (undefined *)0x1;
          uStack_a0 = 0;
          uStack_a8 = 8;
                    /* WARNING: Subroutine does not return */
          fn_2de88__custom_panic(apuStack_b8,&DAT_ram_00032610);
        }
        uVar16 = uVar16 | uVar16 >> 1;
        uVar16 = uVar16 | uVar16 >> 2;
        uVar16 = uVar16 | uVar16 >> 4;
        uVar16 = uVar16 | uVar16 >> 8;
        uVar16 = uVar16 | uVar16 >> 0x10;
        uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
        uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = 0x40 - ((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
        goto joined_r0x00029028;
      }
    }
  }
  uVar16 = uVar16 | uVar16 >> 1;
  uVar16 = uVar16 | uVar16 >> 2;
  uVar16 = uVar16 | uVar16 >> 4;
  uVar16 = uVar16 | uVar16 >> 8;
  uVar16 = uVar16 | uVar16 >> 0x10;
  uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
  uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (lVar22 - ((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) +
           0x140;
joined_r0x00029028:
  if (uVar15 < uVar16) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_2[3];
    return;
  }
  if (uVar16 < 0x41) {
    uVar15 = *param_3;
    if (uVar15 == 0) {
      puVar9 = &DAT_ram_00032610;
      fn_2f828__custom_panic();
      fn_2a678(**(undefined8 **)(puVar9 + 8),(*(undefined8 **)(puVar9 + 8))[1]);
      fn_2a698("** PANICKED **",0xe);
      return;
    }
    uVar26 = param_2[2];
    uVar23 = param_2[1];
    uVar16 = *param_2;
    fn_31788(&uStack_138,uVar26,uVar19 - (uVar19 / uVar15) * uVar15,uVar15,0);
    fn_30150(alStack_148,uStack_138,uStack_130,uVar15,0);
    fn_31788(&uStack_158,uVar23,uVar26 - alStack_148[0],uVar15,0);
    fn_30150(alStack_168,uStack_158,uStack_150,uVar15,0);
    fn_31788(&uStack_178,uVar16,uVar23 - alStack_168[0],uVar15,0);
    fn_30150(alStack_188,uStack_178,uStack_170,uVar15,0);
    param_1[3] = uVar19 / uVar15;
    param_1[2] = uStack_138;
    param_1[1] = uStack_158;
    *param_1 = uStack_178;
    param_1[4] = uVar16 - alStack_188[0];
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    uStack_70 = param_3[3];
    uStack_78 = param_3[2];
    apuStack_88[1] = (undefined *)param_3[1];
    apuStack_88[0] = (undefined *)*param_3;
    uVar23 = uVar16 - 1 >> 6;
    uVar16 = (ulonglong)apuStack_b8[uVar23 + 6];
    if (uVar16 == 0) {
      uVar26 = 0x40;
    }
    else {
      uVar26 = uVar16 | uVar16 >> 1;
      uVar26 = uVar26 | uVar26 >> 2;
      uVar26 = uVar26 | uVar26 >> 4;
      uVar26 = uVar26 | uVar26 >> 8;
      uVar26 = uVar26 | uVar26 >> 0x10;
      uVar26 = (uVar26 | uVar26 >> 0x20) ^ 0xffffffffffffffff;
      uVar26 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    }
    uVar12 = (ulonglong)(uVar16 == 0);
    uStack_a0 = 0;
    uStack_a8 = 0;
    apuStack_b8[1] = (undefined *)0x0;
    apuStack_b8[0] = (undefined *)0x0;
    uVar4 = uVar26 & 0x3f;
    apuStack_b8[uVar12] = (undefined *)((longlong)apuStack_88[0] << uVar4);
    puVar9 = apuStack_b8[0];
    lVar22 = 0x10;
    if (uVar16 != 0) {
      lVar22 = 8;
    }
    plVar24 = (longlong *)((longlong)apuStack_b8 + lVar22);
    *plVar24 = (longlong)apuStack_88[1] << uVar4;
    apuStack_b8[uVar12 + 2] = (undefined *)(uStack_78 << uVar4);
    if (uVar16 != 0) {
      uStack_a0 = uStack_70 << uVar4;
    }
    if (uVar4 != 0) {
      uVar13 = -uVar26 & 0x3f;
      *plVar24 = *plVar24 + ((ulonglong)apuStack_88[0] >> uVar13);
      apuStack_b8[uVar12 + 2] =
           (undefined *)((longlong)apuStack_b8[uVar12 + 2] + ((ulonglong)apuStack_88[1] >> uVar13));
      if (uVar16 != 0) {
        uStack_a0 = uStack_a0 + (uStack_78 >> uVar13);
      }
    }
    uVar12 = uStack_a0;
    uVar16 = uStack_a8;
    puVar1 = apuStack_b8[1];
    uVar15 = uVar15 - 1 >> 6;
    uStack_70 = uStack_a0;
    uStack_78 = uStack_a8;
    apuStack_88[1] = apuStack_b8[1];
    apuStack_88[0] = apuStack_b8[0];
    uVar17 = 0x40 - uVar26 >> 6;
    puVar20 = param_2 + uVar17;
    uVar13 = 0x40 - uVar26 & 0x3f;
    uStack_50 = puVar20[2] >> uVar13;
    apuStack_68[1] = (undefined *)(*puVar20 >> uVar13);
    uStack_58 = puVar20[1] >> uVar13;
    if (uVar26 == 0) {
      uStack_48 = 0;
    }
    else {
      uStack_48 = param_2[uVar17 + 3] >> uVar13;
      if (uVar13 != 0) {
        uStack_50 = (uVar19 << uVar4) + uStack_50;
        uStack_58 = (puVar20[2] << uVar4) + uStack_58;
        apuStack_68[1] = apuStack_68[1] + (puVar20[1] << uVar4);
      }
    }
    uVar19 = uVar15 - uVar23;
    uVar13 = uVar23 + 1;
    apuStack_68[0] = (undefined *)(*param_2 << uVar4);
    ppuStack_190 = apuStack_68 + (uVar15 - uVar23);
    uVar5 = apuStack_b8[uVar23 + 5];
    auStack_40[3] = 0;
    auStack_40[2] = 0;
    auStack_40[1] = 0;
    auStack_40[0] = 0;
    puVar6 = apuStack_b8[uVar23 + 6];
    uVar15 = uVar19;
    do {
      uVar17 = uVar15 + uVar13;
      if (4 < uVar17) {
LAB_ram_0002a6f0:
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar17,5,&DAT_ram_00032610);
      }
      ppuVar11 = apuStack_68 + uVar17;
      uVar25 = 0xffffffffffffffff;
      if (*ppuVar11 < puVar6) {
        if (4 < uVar15 + uVar23) {
                    /* WARNING: Subroutine does not return */
          fn_2df20__custom_panic(0xffffffffffffffff,5,&DAT_ram_00032610);
        }
        uVar17 = uVar17 - 2;
        if (4 < uVar17) goto LAB_ram_0002a6f0;
        puVar21 = apuStack_68[uVar15 + uVar23];
        fn_31788(&uStack_c8,puVar21,*ppuVar11,puVar6,0);
        uVar14 = uStack_c8;
        fn_30150(alStack_d8,uStack_c8,uStack_c0,puVar6,0);
        puVar27 = apuStack_68[uVar17];
        puVar21 = puVar21 + -alStack_d8[0];
        do {
          uVar25 = uVar14;
          fn_30150(&puStack_e8,uVar25,0,uVar5,0);
          bVar10 = true;
          bVar3 = true;
          if (puVar27 < puStack_e8) {
            bVar3 = false;
            if (puVar21 <= puStack_e0) goto LAB_ram_00029bd8;
LAB_ram_00029ba0:
            if (puVar21 == puStack_e0) goto LAB_ram_00029be8;
LAB_ram_00029ba8:
            if (bVar10) break;
          }
          else {
            if (puStack_e0 < puVar21) goto LAB_ram_00029ba0;
LAB_ram_00029bd8:
            bVar10 = false;
            if (puVar21 != puStack_e0) goto LAB_ram_00029ba8;
LAB_ram_00029be8:
            if (bVar3) break;
          }
          bVar3 = puVar21 <= puVar21 + (longlong)puVar6;
          uVar14 = uVar25 - 1;
          uVar25 = uVar25 - 1;
          puVar21 = puVar21 + (longlong)puVar6;
        } while (bVar3);
      }
      fn_30150(&puStack_f8,uVar25,0,puVar9,0);
      fn_30150(&lStack_108,uVar25,0,puVar1,0);
      fn_30150(&lStack_118,uVar25,0,uVar16,0);
      fn_30150(&lStack_128,uVar25,0,uVar12,0);
      uVar17 = lStack_100 + (ulonglong)(puStack_f0 + lStack_108 < puStack_f0);
      uStack_a8 = uVar17 + lStack_118;
      uVar17 = lStack_110 + (ulonglong)(uStack_a8 < uVar17);
      uStack_a0 = uVar17 + lStack_128;
      apuStack_b8[0] = puStack_f8;
      apuStack_b8[1] = puStack_f0 + lStack_108;
      uStack_98 = lStack_120 + (ulonglong)(uStack_a0 < uVar17);
      if (5 < uVar19) {
        fn_2f318__custom_panic(uVar19,5,&DAT_ram_00032610);
        goto LAB_ram_0002a690;
      }
      uVar17 = 5 - uVar15;
      uVar14 = uVar17;
      if (uVar23 + 2 <= uVar17) {
        uVar14 = uVar23 + 2;
      }
      uVar2 = 5;
      if (uVar15 == 5) {
LAB_ram_0002a720:
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar2,4,&DAT_ram_00032610);
      }
      lVar22 = 0;
      uVar18 = 0;
      uVar2 = 0;
      do {
        uVar7 = *(ulonglong *)((longlong)apuStack_b8 + lVar22);
        uVar2 = uVar7 + uVar2;
        uVar8 = *(ulonglong *)((longlong)ppuStack_190 + lVar22);
        *(ulonglong *)((longlong)ppuStack_190 + lVar22) = uVar8 - uVar2;
        uVar2 = (ulonglong)(uVar2 < uVar7 || uVar8 < uVar2);
        lVar22 = lVar22 + 8;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar14);
      if (uVar2 != 0) {
        if (uVar13 <= uVar17) {
          uVar17 = uVar13;
        }
        lVar22 = 0;
        uVar14 = 0;
        uVar2 = 0;
        do {
          uVar18 = *(ulonglong *)((longlong)apuStack_88 + lVar22);
          uVar2 = uVar18 + uVar2;
          uVar8 = *(ulonglong *)((longlong)ppuStack_190 + lVar22);
          uVar7 = uVar8 + uVar2;
          *(ulonglong *)((longlong)ppuStack_190 + lVar22) = uVar7;
          uVar2 = (ulonglong)(uVar2 < uVar18 || uVar7 < uVar8);
          lVar22 = lVar22 + 8;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
        *ppuVar11 = *ppuVar11 + uVar2;
        uVar25 = uVar25 - 1;
      }
      uVar2 = uVar19;
      if (3 < uVar19) goto LAB_ram_0002a720;
      auStack_40[uVar15] = uVar25;
      ppuStack_190 = ppuStack_190 + -1;
      bVar3 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar3);
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_a8 = uStack_58;
    apuStack_b8[1] = apuStack_68[1];
    apuStack_b8[0] = apuStack_68[0];
    auStack_40[4] = (ulonglong)apuStack_68[0] >> uVar4;
    auStack_40[5] = (ulonglong)apuStack_68[1] >> uVar4;
    auStack_40[6] = uStack_58 >> uVar4;
    auStack_40[7] = uStack_50 >> uVar4;
    if (uVar26 != 0) {
      uVar15 = 1;
      do {
        if (uVar15 < 4) {
          uVar19 = uVar15 + 1;
          uVar16 = uVar15 - 1;
          if (3 < uVar16) {
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(0xffffffffffffffff,4,&DAT_ram_00032610);
          }
        }
        else {
          uVar19 = 4;
          uVar16 = 3;
        }
        auStack_40[uVar16 + 4] =
             auStack_40[uVar16 + 4] | (longlong)apuStack_b8[uVar15] << (-uVar26 & 0x3f);
        bVar3 = uVar15 < 4;
        uVar15 = uVar19;
      } while (bVar3);
    }
    param_1[7] = auStack_40[7];
    param_1[6] = auStack_40[6];
    param_1[5] = auStack_40[5];
    param_1[4] = auStack_40[4];
    param_1[3] = auStack_40[3];
    param_1[2] = auStack_40[2];
    param_1[1] = auStack_40[1];
    *param_1 = auStack_40[0];
  }
  return;
}
