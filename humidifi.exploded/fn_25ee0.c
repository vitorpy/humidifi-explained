/* Function: fn_25ee0
 * Address:  0x26000
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_25ee0 @ 0x26000 ---- */

void fn_25ee0(undefined8 *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                     longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  longlong lVar21;
  undefined4 uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  longlong lStack_190;
  ulonglong uStack_178;
  ulonglong uStack_150;
  longlong lStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  puVar28 = *(ulonglong **)(param_5 + -0xff8);
  uVar5 = 0x6e9de2b30b19f9ea;
  if (puVar28[0xd7] < 4) {
    uVar5 = 0x6e9de2b30b19f1ea;
  }
  puVar28[0x48] = puVar28[0x48] ^ 0xb957ed15dc877426;
  puVar28[0x49] = puVar28[0x49] ^ 0x46a912eb23798bd9;
  puVar28[0x44] = puVar28[0x44] ^ 0xb957ed15dc877c26;
  puVar28[0x45] = puVar28[0x45] ^ 0x46a912eb237873d9;
  *puVar28 = *puVar28 ^ 0x69d190c683eda5d3;
  puVar28[1] = puVar28[1] ^ 0x962f6f387c135a2c;
  puVar28[2] = puVar28[2] ^ 0x962c6f3b7c105a2d;
  puVar28[3] = puVar28[3] ^ 0x962d6f3a7c115a2e;
  puVar28[0x4a] = puVar28[0x4a] ^ uVar5;
  puVar28[4] = puVar28[4] ^ 0x962a6f3d7c165a2f;
  puVar28[5] = puVar28[5] ^ 0x962b6f3c7c175a28;
  puVar28[6] = puVar28[6] ^ 0x96286f3f7c145a29;
  puVar28[7] = puVar28[7] ^ 0x96296f3e7c155a2a;
  puVar28[8] = puVar28[8] ^ 0x96266f317c1a5a2b;
  puVar28[9] = puVar28[9] ^ 0x96276f307c1b5a24;
  puVar28[10] = puVar28[10] ^ 0x96246f337c185a25;
  puVar28[0xb] = puVar28[0xb] ^ 0x96256f327c195a26;
  puVar28[0xc] = puVar28[0xc] ^ 0x96226f357c1e5a27;
  puVar28[0xd] = puVar28[0xd] ^ 0x96236f347c1f5a20;
  puVar28[0xe] = puVar28[0xe] ^ 0x96206f377c1c5a21;
  puVar28[0xf] = puVar28[0xf] ^ 0x96216f367c1d5a22;
  puVar28[0x10] = puVar28[0x10] ^ 0x963e6f297c025a23;
  puVar28[0x11] = puVar28[0x11] ^ 0x963f6f287c035a3c;
  fn_2930__sol_memcmp();
  puVar28[0x5a] = puVar28[0x5a] ^ 0xb82c93d08854ebff;
  puVar28[0x5b] = puVar28[0x5b] ^ 0x47d26c2e77aa1400;
  puVar28[0x5c] = puVar28[0x5c] ^ 0x47d16c2d77a91401;
  puVar28[0x5d] = puVar28[0x5d] ^ 0x47d06c2c77a81402;
  puVar28[0x5e] = puVar28[0x5e] ^ 0x47d76c2b77af1403;
  puVar28[0x5f] = puVar28[0x5f] ^ 0x47d66c2a77ae1404;
  puVar28[0x60] = puVar28[0x60] ^ 0x47d56c2977ad1405;
  puVar28[0x61] = puVar28[0x61] ^ 0x47d46c2877ac1406;
  puVar28[0x62] = puVar28[0x62] ^ 0x47db6c2777a31407;
  puVar28[99] = puVar28[99] ^ 0x47da6c2677a21408;
  puVar28[0x34] = puVar28[0x34] ^ 0xfb5ce87aae443c38;
  puVar28[0x35] = puVar28[0x35] ^ 0x4a2178451bac3c7;
  puVar28[0x36] = puVar28[0x36] ^ 0x4a1178751b9c3c6;
  puVar28[0x37] = puVar28[0x37] ^ 0x4a0178651b8c3c5;
  puVar28[0x30] = puVar28[0x30] ^ 0xfb5ce87aae443c38;
  puVar28[0x31] = puVar28[0x31] ^ 0x4a2178451bac3c7;
  puVar28[0x32] = puVar28[0x32] ^ 0x4a1178751b9c3c6;
  puVar28[0x33] = puVar28[0x33] ^ 0x4a0178651b8c3c5;
  uVar6 = *(ulonglong *)(param_5 + -0xfb8);
  uVar7 = *(ulonglong *)(param_5 + -0xfc0);
  uVar5 = *(ulonglong *)(param_5 + -0xfb0);
  uVar8 = *(ulonglong *)(param_5 + -0xfc8);
  uVar9 = *(ulonglong *)(param_5 + -0xfd0);
  uVar10 = *(undefined8 *)(param_5 + -0xfd8);
  uVar11 = *(undefined8 *)(param_5 + -0xfe0);
  uVar12 = *(undefined8 *)(param_5 + -0xfe8);
  lVar13 = *(longlong *)(param_5 + -0xff0);
  lVar26 = *(longlong *)(param_5 + -0x1000);
  if (puVar28[0xd7] < 6) {
    uStack_178 = 0;
    uStack_150 = 0;
  }
  else {
    uStack_150 = puVar28[0x66] ^ 0x9578e14d1d0d9c4e;
    uStack_178 = puVar28[0x65] ^ 0x35f72d643d3464eb;
    puVar28[0x65] = uStack_178;
    puVar28[0x66] = uStack_150;
  }
  puVar14 = puVar28 + 0x34;
  puVar34 = puVar28 + 0x30;
  if (lVar26 == 0) {
    puVar14 = puVar28 + 0x30;
    puVar34 = puVar28 + 0x34;
  }
  uStack_a0 = *puVar34;
  uStack_98 = puVar34[1];
  uStack_90 = puVar34[2];
  uStack_88 = puVar34[3];
  uStack_80 = *puVar14;
  iStack_20 = (int)uStack_80;
  uStack_1c = (undefined4)(uStack_80 >> 0x20);
  uStack_78 = puVar14[1];
  uStack_18 = (undefined4)uStack_78;
  uStack_14 = (uint)(uStack_78 >> 0x20);
  uStack_70 = puVar14[2];
  uStack_68 = puVar14[3];
  uVar29 = param_2 >> 0x10;
  lVar31 = param_2 << 0x30;
  lStack_60 = lVar31;
  uStack_58 = uVar29;
  uStack_40 = uStack_a0;
  uStack_38 = uStack_98;
  uStack_30 = uStack_90;
  uStack_28 = uStack_88;
  uStack_10 = uStack_70;
  uStack_8 = uStack_68;
  if (lVar26 != 0) {
    fn_15e8__sol_log(&iStack_20,&lStack_60,puVar28[0x48],puVar28[0x49]);
    if (CONCAT44(uStack_1c,iStack_20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0x40e;
      goto LAB_ram_00027718;
    }
    if ((longlong)param_2 < 0) {
      uVar22 = 0x412;
      goto LAB_ram_00026e48;
    }
    lStack_190 = -1;
    uVar27 = param_2;
    if (CONCAT44(uStack_14,uStack_18) == 0 && uStack_10 == 0) {
      param_2 = 0;
      goto LAB_ram_00026f50;
    }
    uVar22 = 0x415;
    if ((longlong)uStack_10 < 0) {
      if (0xffff7fffffffffff < uStack_10) {
        param_2 = (ulonglong)(uStack_14 >> 0x10) | uStack_10 << 0x10;
        goto LAB_ram_00026f50;
      }
    }
    else if ((uStack_10 < 0x1000000000000) &&
            (param_2 = (ulonglong)(uStack_14 >> 0x10) | uStack_10 << 0x10, -1 < (longlong)param_2))
    goto LAB_ram_00026f50;
    goto LAB_ram_00026e48;
  }
  uVar27 = puVar28[0x48];
  fn_30150(&uStack_c0,uVar29,0,uVar27);
  fn_30150(&uStack_d0,uVar27,0,lVar31,0);
  uVar32 = puVar28[0x49];
  fn_30150(&uStack_e0,uVar32,(longlong)uVar32 >> 0x3f,lVar31,lVar31 >> 0x3f);
  fn_30150(&lStack_b0,uVar32,(longlong)uVar32 >> 0x3f,uVar29,0);
  uVar25 = uStack_e0 + uStack_c0 + lStack_c8;
  lVar23 = lStack_d8 + (lVar31 >> 0x3f & uVar32) + (ulonglong)(uVar25 < uStack_e0);
  uVar33 = lStack_b8 + ((longlong)uVar27 >> 0x3f & uVar29) +
           (ulonglong)(uStack_c0 + lStack_c8 < uStack_c0);
  uVar27 = uVar33 + lStack_b0;
  uVar32 = uVar27 + lVar23;
  lVar23 = ((longlong)uVar33 >> 0x3f) + lStack_a8 + (ulonglong)(uVar27 < uVar33) + (lVar23 >> 0x3f)
           + (ulonglong)(uVar32 < uVar27);
  uVar27 = (longlong)(uVar32 * 0x10000) >> 0x3f;
  if ((uVar32 >> 0x30 | lVar23 * 0x10000) != uVar27 || lVar23 >> 0x30 != uVar27) {
    *(undefined4 *)(param_1 + 1) = 0x41a;
    goto LAB_ram_00027718;
  }
  uVar27 = uVar32 * 0x10000 | uVar25 >> 0x30;
  uVar25 = uVar25 * 0x10000;
  if ((uVar25 == 0 && uStack_d0 >> 0x30 == 0) && uVar27 == 0) {
    uVar27 = 0;
joined_r0x00026e80:
    lStack_190 = 1;
    if (-1 < (longlong)param_2) {
LAB_ram_00026f50:
      uVar32 = param_4 - puVar28[0x4a];
      if (0 < (longlong)puVar28[0x4a] != (longlong)uVar32 < param_4) {
        *(undefined4 *)(param_1 + 1) = 0x427;
        goto LAB_ram_00027718;
      }
      lVar23 = param_2 * lStack_190;
      uVar33 = uVar32 + lVar23;
      bVar19 = (longlong)uVar33 < (longlong)uVar32;
      if (lVar23 < 0) {
        bVar19 = !bVar19;
      }
      if (bVar19) {
        *(undefined4 *)(param_1 + 1) = 0x42a;
        goto LAB_ram_00027718;
      }
      lVar21 = param_3 - uVar27 * lStack_190;
      bVar19 = lVar21 < param_3;
      if (0 < (longlong)(uVar27 * lStack_190)) {
        bVar19 = !bVar19;
      }
      if (bVar19) {
        *(undefined4 *)(param_1 + 1) = 0x42e;
        goto LAB_ram_00027718;
      }
      bVar19 = lVar23 < 0;
      if (param_4 + lVar23 < param_4) {
        bVar19 = !bVar19;
      }
      if (bVar19) {
        *(undefined4 *)(param_1 + 1) = 0x431;
        goto LAB_ram_00027718;
      }
      uVar25 = 0;
      uVar30 = 0;
      if (1 < puVar28[0xd7]) {
        fn_17900__sol_log(&iStack_20,param_4 + lVar23,lVar21,puVar28[0x48]);
        if (iStack_20 != 0) goto LAB_ram_000272a8;
        uVar25 = CONCAT44(uStack_14,uStack_18);
        uVar30 = uStack_10;
      }
      lVar23 = (uVar32 ^ (longlong)uVar32 >> 0x3f) - ((longlong)uVar32 >> 0x3f);
      lVar21 = (uVar33 ^ (longlong)uVar33 >> 0x3f) - ((longlong)uVar33 >> 0x3f);
      bVar19 = true;
      if (lVar21 - lVar23 < lVar21) {
        if (0 < lVar23) goto LAB_ram_00027390;
LAB_ram_000273c8:
        if (!bVar19) {
LAB_ram_000273e8:
          lVar1 = fn_169b0(lVar21 - lVar23,puVar28);
          if (lVar1 == 0) {
            *(undefined4 *)(param_1 + 1) = 0xbeef1;
            goto LAB_ram_00027718;
          }
          if ((longlong)uVar27 < 0) {
            uVar22 = 0x447;
            goto LAB_ram_00027740;
          }
          lVar2 = fn_16a50(uVar27,puVar28 + 0x12);
          if (lVar2 == 0) {
            uVar22 = 0xbeef2;
            goto LAB_ram_00027740;
          }
          uVar33 = puVar28[0x44];
          uVar17 = puVar28[0x45];
          fn_17a30(&iStack_20,lVar23,lVar21,param_2);
          uVar32 = uStack_10;
          if (iStack_20 != 0) {
LAB_ram_000272a8:
            *(ulonglong *)((longlong)param_1 + 4) = CONCAT44(uStack_18,uStack_1c);
            *(undefined4 *)param_1 = 1;
            return;
          }
          lVar23 = CONCAT44(uStack_14,uStack_18);
          fn_1aed0(&iStack_20,param_2,puVar28[0x44],puVar28[0x45],lVar2,uVar33,uVar17,lVar1)
          ;
          uVar33 = uStack_10;
          if (iStack_20 != 0) goto LAB_ram_000272a8;
          lVar21 = CONCAT44(uStack_14,uStack_18);
          puVar34 = &uStack_80;
          puVar14 = &uStack_a0;
          fn_1c610__sol_log(&iStack_20,uVar11,uVar10,uVar12);
          uVar17 = uStack_10;
          if (iStack_20 != 0) goto LAB_ram_000272a8;
          uVar15 = uVar25 + lVar23;
          uVar18 = uVar30 + uVar32 + (ulonglong)(uVar15 < uVar25);
          uVar22 = 0x461;
          if (-1 < (longlong)((uVar30 ^ uVar32 ^ 0xffffffffffffffff) & (uVar30 ^ uVar18))) {
            uVar24 = uVar15 + lVar21;
            uVar15 = uVar18 + uVar33 + (ulonglong)(uVar24 < uVar15);
            uVar22 = 0x463;
            if (-1 < (longlong)((uVar18 ^ uVar33 ^ 0xffffffffffffffff) & (uVar18 ^ uVar15))) {
              uVar18 = puVar28[0xd7];
              lVar1 = 1;
              if (uVar18 != 1) {
                lVar1 = 2;
              }
              lVar2 = 0;
              if (uVar18 != 0) {
                lVar2 = lVar1;
              }
              lVar1 = CONCAT44(uStack_14,uStack_18);
              uVar4 = uVar15;
              uVar3 = uVar24;
              if ((1UL >> lVar2 == 0) && (lVar13 == 0)) {
                uVar3 = uVar24 + ((puVar28[0x58] ^ 0xe80b) << 0x30);
                uVar4 = uVar15 + (uVar3 < uVar24);
                uStack_50 = uVar3;
                uStack_48 = uVar4;
                if ((longlong)((uVar15 ^ 0xffffffffffffffff) & (uVar15 ^ uVar4)) < 0) {
                  *(undefined4 *)(param_1 + 1) = 0x46e;
                  goto LAB_ram_00027718;
                }
              }
              if (uVar18 < 3) {
                uVar18 = uStack_150;
                if ((6UL >> lVar2 & 1) != 0) {
                  fn_0488(&iStack_20,(puVar28[0x59] ^ 0xd3198133b7c1776c) << 0x30,
                                   (puVar28[0x59] ^ 0xd3198133b7c1776c) >> 0x10,0x4189374bc7,0,
                                   puVar14,puVar34,uStack_150);
                  if (CONCAT44(uStack_1c,iStack_20) != 1) {
                    *(undefined4 *)(param_1 + 1) = 0x496;
                    goto LAB_ram_00027718;
                  }
                  fn_0488(&uStack_40,uVar3,uVar4,CONCAT44(uStack_14,uStack_18),uStack_10,
                                   puVar14,puVar34,uStack_150);
                  uVar4 = uStack_30;
                  uVar3 = uStack_38;
                  uVar18 = uStack_150;
                  if (uStack_40 == 0) {
                    *(undefined4 *)(param_1 + 1) = 0x498;
                    goto LAB_ram_00027718;
                  }
                }
              }
              else {
                uVar18 = puVar28[0x59];
                fn_0488(&iStack_20,(puVar28[100] ^ 0x504156a22548f8dd) << 0x30,
                                 (puVar28[100] ^ 0x504156a22548f8dd) >> 0x10,0x4189374bc7,0,puVar14,
                                 puVar34,uStack_150);
                uVar15 = uStack_10;
                if (CONCAT44(uStack_1c,iStack_20) == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x481;
                  goto LAB_ram_00027718;
                }
                lVar13 = CONCAT44(uStack_14,uStack_18);
                fn_0488(&iStack_20,uVar3,uVar4,(uVar18 ^ 0xd3198133b7c1776c) << 0x30,
                                 (uVar18 ^ 0xd3198133b7c1776c) >> 0x10,puVar14,puVar34,uStack_150);
                if (CONCAT44(uStack_1c,iStack_20) == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x484;
                  goto LAB_ram_00027718;
                }
                fn_0488(&uStack_40,CONCAT44(uStack_14,uStack_18),uStack_10,0x4189374bc7,0,
                                 puVar14,puVar34,uStack_150);
                if (uStack_40 == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x486;
                  goto LAB_ram_00027718;
                }
                bVar19 = true;
                if (uVar3 < uStack_38) {
                  if ((longlong)uVar4 < (longlong)uStack_30) goto LAB_ram_00027a58;
LAB_ram_00027be8:
                  bVar20 = false;
                }
                else {
                  bVar19 = false;
                  if ((longlong)uStack_30 <= (longlong)uVar4) goto LAB_ram_00027be8;
LAB_ram_00027a58:
                  bVar20 = true;
                }
                if (uStack_30 != uVar4) {
                  bVar19 = bVar20;
                }
                uVar18 = uStack_38;
                if (!bVar19) {
                  uVar18 = uVar3;
                }
                uVar3 = uVar18 + lVar13;
                uVar24 = uStack_30;
                if (!bVar19) {
                  uVar24 = uVar4;
                }
                uVar4 = uVar24 + uVar15 + (ulonglong)(uVar3 < uVar18);
                uVar18 = uStack_150;
                if ((longlong)((uVar24 ^ uVar15 ^ 0xffffffffffffffff) & (uVar24 ^ uVar4)) < 0) {
                  *(undefined4 *)(param_1 + 1) = 0x48e;
                  goto LAB_ram_00027718;
                }
              }
              if ((uVar8 & 1) == 0) {
                if ((longlong)uVar6 < 0) {
                  uVar22 = 0x4a0;
LAB_ram_00027740:
                  *(undefined4 *)(param_1 + 1) = uVar22;
                  *param_1 = 1;
                  return;
                }
                uStack_150 = uVar3 + uVar7;
                uVar7 = uVar4 + uVar6 + (ulonglong)(uStack_150 < uVar3);
                uVar22 = 0x4a4;
                if ((longlong)((uVar4 ^ uVar6 ^ 0xffffffffffffffff) & (uVar4 ^ uVar7)) < 0)
                goto LAB_ram_00027740;
              }
              else {
                uVar22 = 0x4ac;
                uVar8 = -(uVar6 + (0x1000000000000 < uVar7));
                if ((longlong)(uVar6 & uVar8) < 0) goto LAB_ram_00027740;
                if ((longlong)uVar8 < 0) {
                  uVar22 = 0x4ae;
                  goto LAB_ram_00027740;
                }
                fn_0488(&iStack_20,uVar3,uVar4,0x1000000000000 - uVar7,uVar8,puVar14,
                                 puVar34,uVar18);
                if (CONCAT44(uStack_1c,iStack_20) == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x4b2;
                  goto LAB_ram_00027718;
                }
                uStack_150 = CONCAT44(uStack_14,uStack_18);
                uVar7 = uStack_10;
              }
              fn_07e8__custom_panic(&iStack_20,uStack_178 << 0x30,uStack_178 >> 0x10,0x3e8000000000000,0)
              ;
              if ((char)uStack_10 != '\0') {
                *(undefined4 *)(param_1 + 1) = 0x4b8;
                goto LAB_ram_00027718;
              }
              fn_0488(&iStack_20,CONCAT44(uStack_1c,iStack_20),
                               CONCAT44(uStack_14,uStack_18),uVar9 << 0x30,uVar9 >> 0x10,puVar14,
                               puVar34,uVar18);
              if (CONCAT44(uStack_1c,iStack_20) == 0) {
                *(undefined4 *)(param_1 + 1) = 0x4bb;
                goto LAB_ram_00027718;
              }
              fn_0028__custom_panic(&lStack_f0,CONCAT44(uStack_14,uStack_18),uStack_10,0x3e8000000000000,
                               0);
              uVar6 = uStack_150 + lVar1;
              uVar8 = uVar7 + uVar17 + (ulonglong)(uVar6 < uStack_150);
              uVar22 = 0x4c1;
              if (-1 < (longlong)((uVar7 ^ uVar17 ^ 0xffffffffffffffff) & (uVar7 ^ uVar8))) {
                uVar7 = uVar6 + lStack_f0;
                uVar6 = uVar8 + uStack_e8 + (ulonglong)(uVar7 < uVar6);
                uVar22 = 0x4c3;
                if (-1 < (longlong)((uVar8 ^ uStack_e8 ^ 0xffffffffffffffff) & (uVar8 ^ uVar6))) {
                  uStack_50 = uVar7 + (uVar5 << 0x30);
                  uVar5 = uVar5 >> 0x10;
                  uStack_48 = uVar6 + uVar5 + (ulonglong)(uStack_50 < uVar7);
                  uVar22 = 0x4c5;
                  if (-1 < (longlong)((uVar6 ^ uVar5 ^ 0xffffffffffffffff) & (uVar6 ^ uStack_48))) {
                    fn_19d8(&iStack_20,&uStack_50,0x2710000000000000,0);
                    uVar5 = uStack_10;
                    if (CONCAT44(uStack_1c,iStack_20) != 1) {
                      *(undefined4 *)(param_1 + 1) = 0x4c9;
                      goto LAB_ram_00027718;
                    }
                    bVar19 = true;
                    bVar20 = true;
                    if (lVar1 == 0) {
                      bVar20 = false;
                      if ((longlong)uVar17 < 1) goto LAB_ram_00028278;
LAB_ram_000281c8:
                      if (uVar17 == 0) goto LAB_ram_00028290;
LAB_ram_000281d8:
                      puVar16 = &DAT_ram_00031c5e;
                      lVar13 = 4;
                      if (!bVar19) {
                        fn_285a8();
                        return;
                      }
                    }
                    else {
                      if (0 < (longlong)uVar17) goto LAB_ram_000281c8;
LAB_ram_00028278:
                      bVar19 = false;
                      if (uVar17 != 0) goto LAB_ram_000281d8;
LAB_ram_00028290:
                      puVar16 = &DAT_ram_00031c5e;
                      lVar13 = 4;
                      if (!bVar20) {
                        if (uVar27 < 1000000000000) {
                          puVar16 = &DAT_ram_00031c6e;
                          if (((((uVar27 < 500000000000) &&
                                (puVar16 = &DAT_ram_00031c62, uVar27 < 250000000000)) &&
                               (puVar16 = &DAT_ram_00031c6a, uVar27 < 100000000000)) &&
                              ((puVar16 = &DAT_ram_00031c7a, uVar27 < 25000000000 &&
                               (puVar16 = &DAT_ram_00031c72, uVar27 < 10000000000)))) &&
                             ((puVar16 = &DAT_ram_00031c7e, uVar27 < 1000000000 &&
                              ((puVar16 = &DAT_ram_00031c76, uVar27 < 100000000 &&
                               (puVar16 = &DAT_ram_00031c66, uVar27 < 25000000)))))) {
                            puVar16 = &DAT_ram_00031c5e;
                          }
                        }
                        else {
                          uVar6 = uVar27 / 1000000000000 - 1;
                          if (uVar6 < 0x13) {
                            lVar13 = uVar6 * 4 + 4;
                            puVar16 = *(undefined1 **)(&DAT_ram_00032a58 + uVar6 * 8);
                          }
                          else {
                            puVar16 = &DAT_ram_00031f46;
                            lVar13 = 0x50;
                          }
                        }
                      }
                    }
                    uVar6 = CONCAT44(uStack_14,uStack_18);
                    fn_281a8(puVar16,lVar13);
                    uVar7 = 0x6e9de2b30b19f1ea;
                    if (3 < puVar28[0xd7]) {
                      uVar7 = 0x6e9de2b30b19f9ea;
                    }
                    puVar28[0x44] = puVar28[0x44] ^ 0xb957ed15dc877c26;
                    puVar28[0x45] = puVar28[0x45] ^ 0x46a912eb237873d9;
                    puVar28[0x4a] = puVar28[0x4a] ^ uVar7;
                    fn_2328(puVar28);
                    fn_2930__sol_memcmp(puVar28 + 0x12);
                    fn_2798(puVar28 + 0x5a);
                    puVar28[0x34] = puVar28[0x34] ^ 0xfb5ce87aae443c38;
                    puVar28[0x35] = puVar28[0x35] ^ 0x4a2178451bac3c7;
                    puVar28[0x36] = puVar28[0x36] ^ 0x4a1178751b9c3c6;
                    puVar28[0x37] = puVar28[0x37] ^ 0x4a0178651b8c3c5;
                    puVar28[0x30] = puVar28[0x30] ^ 0xfb5ce87aae443c38;
                    puVar28[0x31] = puVar28[0x31] ^ 0x4a2178451bac3c7;
                    puVar28[0x32] = puVar28[0x32] ^ 0x4a1178751b9c3c6;
                    puVar28[0x33] = puVar28[0x33] ^ 0x4a0178651b8c3c5;
                    if (5 < puVar28[0xd7]) {
                      puVar28[0x65] = puVar28[0x65] ^ 0x35f72d643d3464eb;
                      puVar28[0x66] = puVar28[0x66] ^ 0x9578e14d1d0d9c4e;
                    }
                    uVar7 = uVar6 + 0x1000000000000;
                    uVar6 = uVar5 + (uVar7 < uVar6);
                    if ((longlong)((uVar5 ^ 0xffffffffffffffff) & (uVar5 ^ uVar6)) < 0) {
                      *(undefined4 *)(param_1 + 1) = 0x4fb;
                      goto LAB_ram_00027718;
                    }
                    if (lVar26 != 0) {
                      fn_0488(&iStack_20,puVar28[0x48],puVar28[0x49],uVar7,uVar6);
                      if (CONCAT44(uStack_1c,iStack_20) == 0) {
                        *(undefined4 *)(param_1 + 1) = 0x522;
                        goto LAB_ram_00027718;
                      }
                      fn_15e8__sol_log(&iStack_20,&lStack_60,CONCAT44(uStack_14,uStack_18),uStack_10
                                      );
                      if (CONCAT44(uStack_1c,iStack_20) == 0) {
                        *(undefined4 *)(param_1 + 1) = 0x527;
                        goto LAB_ram_00027718;
                      }
                      uVar5 = CONCAT44(uStack_14,uStack_18);
                      puVar28[0x48] = puVar28[0x48] ^ 0xb957ed15dc877426;
                      puVar28[0x49] = puVar28[0x49] ^ 0x46a912eb23798bd9;
                      if (uVar5 != 0 || uStack_10 != 0) {
                        if (0xffffffffffff < uStack_10) {
                          *(undefined4 *)(param_1 + 1) = 0x531;
                          goto LAB_ram_00027718;
                        }
LAB_ram_00028aa8:
                        uVar5 = uVar5 >> 0x30 | uStack_10 << 0x10;
                        goto LAB_ram_00028ac0;
                      }
LAB_ram_00028a98:
                      uVar5 = 0;
LAB_ram_00028ac0:
                      param_1[5] = uVar25;
                      param_1[3] = lVar23;
                      param_1[1] = lVar21;
                      param_1[7] = uVar5;
                      param_1[6] = uVar30;
                      param_1[4] = uVar32;
                      param_1[2] = uVar33;
                      *(undefined4 *)param_1 = 0;
                      return;
                    }
                    fn_0488(&iStack_20,lVar31,uVar29,puVar28[0x48],puVar28[0x49]);
                    uVar22 = 0x504;
                    if (CONCAT44(uStack_1c,iStack_20) != 0) {
                      uStack_40 = CONCAT44(uStack_14,uStack_18);
                      uStack_38 = uStack_10;
                      fn_15e8__sol_log(&iStack_20,&uStack_40,uVar7,uVar6);
                      uVar22 = 0x509;
                      if (CONCAT44(uStack_1c,iStack_20) == 1) {
                        uVar5 = CONCAT44(uStack_14,uStack_18);
                        puVar28[0x48] = puVar28[0x48] ^ 0xb957ed15dc877426;
                        puVar28[0x49] = puVar28[0x49] ^ 0x46a912eb23798bd9;
                        if (uVar5 == 0 && uStack_10 == 0) goto LAB_ram_00028a98;
                        uVar22 = 0x513;
                        if (uStack_10 < 0x1000000000000) goto LAB_ram_00028aa8;
                      }
                    }
                    *(undefined4 *)(param_1 + 1) = uVar22;
                    goto LAB_ram_00027718;
                  }
                }
              }
LAB_ram_00026e48:
              *(undefined4 *)(param_1 + 1) = uVar22;
              goto LAB_ram_00027718;
            }
          }
          *(undefined4 *)(param_1 + 1) = uVar22;
          goto LAB_ram_00027718;
        }
      }
      else {
        bVar19 = false;
        if (lVar23 < 1) goto LAB_ram_000273c8;
LAB_ram_00027390:
        if (bVar19) goto LAB_ram_000273e8;
      }
      *(undefined4 *)(param_1 + 1) = 0x443;
      goto LAB_ram_00027718;
    }
    uVar22 = 0x421;
  }
  else {
    uVar22 = 0x420;
    if ((longlong)uVar27 < 0) {
      if (0xffff7fffffffffff < uVar27) {
        uVar27 = uVar25 >> 0x30 | uVar27 << 0x10;
        goto joined_r0x00026e80;
      }
    }
    else if ((uVar27 < 0x1000000000000) &&
            (uVar27 = uVar25 >> 0x30 | uVar27 << 0x10, -1 < (longlong)uVar27))
    goto joined_r0x00026e80;
  }
  *(undefined4 *)(param_1 + 1) = uVar22;
LAB_ram_00027718:
  *param_1 = 1;
  return;
}
