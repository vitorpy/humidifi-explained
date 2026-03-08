/* Function: fn_e3b0
 * Address:  0xe4d0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_e3b0 @ 0xe4d0 ---- */

void fn_e3b0(void)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_R6;
  ulonglong uVar28;
  ulonglong unaff_R7;
  ulonglong uVar29;
  undefined4 unaff_R8W;
  longlong *plVar30;
  longlong unaff_R9;
  undefined8 uVar31;
  longlong lVar32;
  ulonglong **ppuVar33;
  undefined8 uVar34;
  undefined8 uStack_250;
  ulonglong uStack_238;
  ulonglong uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong *plStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  char cStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong *puStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  lVar3 = lStack_1d8;
  lVar7 = fn_e3b0();
  if (lVar7 != 0) {
    uVar19 = lVar7 << 0x20 | lVar7 - 0x100000000U >> 0x20;
    if (uVar19 < 0x1a) {
      unaff_R8W = *(undefined4 *)(&DAT_ram_00032150 + uVar19 * 4);
      unaff_R6 = uVar19;
    }
    else {
      unaff_R8W = (undefined4)lVar7;
    }
    goto LAB_ram_0000e970;
  }
  if (unaff_R7 <= uStack_100) goto LAB_ram_0000e970;
  plVar30 = (longlong *)(unaff_R9 + 8);
  lVar7 = fn_12770__sol_sha256(puStack_220,plVar30);
  uVar20 = 1;
  if (lVar7 != lStack_1a8) {
    lVar7 = fn_128c0__sol_sha256(puStack_220,plVar30);
    uVar20 = 1;
    if (lVar7 != lStack_1a8) {
      uVar20 = 0;
    }
  }
  unaff_R6 = 0;
  lVar7 = 0;
  if (cStack_1b0 != '\0') {
    if (cStack_1b0 != '\x01') {
      unaff_R8W = 0xbadb100d;
      goto LAB_ram_0000e970;
    }
    lVar7 = 1;
  }
  unaff_R8W = 0xb1ade2;
  if ((*(ulonglong *)(lStack_200 + 0x50) < 0x48) || (*(ulonglong *)(uStack_230 + 0x50) < 0x48))
  goto LAB_ram_0000e970;
  lVar10 = *(ulonglong *)(lStack_1b8 + 0x10) << 0x30;
  if (lStack_1c0 == 0) {
    lVar10 = 0;
  }
  uVar21 = *(undefined8 *)(lStack_200 + 0x98);
  uVar19 = *(ulonglong *)(lStack_1b8 + 0x10) >> 0x10;
  if (lStack_1c0 == 0) {
    uVar19 = 0;
  }
  uVar22 = *(undefined8 *)(uStack_230 + 0x98);
  uStack_148 = *(longlong *)(unaff_R9 + 0x20);
  uStack_150 = *(longlong *)(unaff_R9 + 0x18);
  uStack_158 = *(longlong *)(unaff_R9 + 0x10);
  puStack_160 = (ulonglong *)*plVar30;
  uVar24 = *(undefined8 *)(lStack_1a0 + 0x50);
  lVar26 = lStack_1a0 + 0x58;
  ppuVar33 = &puStack_160;
  uVar34 = 0;
  lVar32 = lVar7;
  uVar9 = uVar20;
  uVar12 = uStack_238;
  uVar18 = uStack_208;
  fn_25ee0(&uStack_100,lStack_1d8,uVar22,uVar21);
  uVar6 = uStack_e8;
  uVar5 = uStack_f0;
  uVar4 = uStack_f8;
  if ((int)uStack_100 == 1) {
    uVar19 = uStack_f8 & 0xffffffff;
    unaff_R6 = uStack_100 >> 0x20;
  }
  else {
    uStack_230 = lStack_1f8 + 0x28;
    uVar23 = lStack_1f8 + 0x20;
    if (lVar7 == 0) {
      uStack_238 = uVar23;
      if (plStack_1c8 != (longlong *)0x0) {
        lVar27 = 0x1f0;
        lVar8 = 0x1e8;
        lVar11 = 0x1e0;
        lVar25 = 0x1d8;
        uStack_208 = uStack_228;
        uStack_228 = uStack_210;
        goto LAB_ram_0000ea48;
      }
      uStack_250 = uStack_210;
      uStack_208 = uStack_228;
    }
    else {
      uStack_238 = uStack_230;
      uStack_230 = uVar23;
      if (plStack_1c8 == (longlong *)0x0) {
        uStack_250 = uStack_228;
        uStack_208 = uStack_210;
      }
      else {
        lVar27 = 0x210;
        lVar8 = 0x208;
        lVar11 = 0x200;
        lVar25 = 0x1f8;
        uStack_208 = uStack_210;
LAB_ram_0000ea48:
        uStack_170 = *(ulonglong *)(lStack_1d0 + lVar8) ^ 0x4a1178751b9c3c6;
        uStack_168 = *(ulonglong *)(lStack_1d0 + lVar27) ^ 0x4a0178651b8c3c5;
        uStack_178 = *(ulonglong *)(lStack_1d0 + lVar11) ^ 0x4a2178451bac3c7;
        uStack_180 = *(ulonglong *)(lStack_1d0 + lVar25) ^ 0xfb5ce87aae443c38;
        uVar23 = *(ulonglong *)(lStack_1d0 + 0x710);
        if (uVar23 < 5) {
          uVar23 = *(ulonglong *)(lStack_1d0 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_100 = *(ulonglong *)(lStack_1d0 + 600) ^ 0xfb5ce87aae443c38;
          uStack_f0 = uVar23;
        }
        else {
          uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x270);
          uStack_f0 = *(ulonglong *)(lStack_1d0 + 0x268);
          uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x260);
          uStack_100 = *(ulonglong *)(lStack_1d0 + 600);
        }
        fn_28a20__sol_try_find_program_address(&puStack_160,&uStack_100,&uStack_180,0xfb5ce87aae443c38,uVar23,lVar32,
                         uStack_1e8,uVar9,ppuVar33,lVar26,uVar24,uVar12,uVar34,lVar10,uVar19,uVar18)
        ;
        lVar10 = *plStack_1c8;
        if ((((*(ulonglong **)(lVar10 + 8) != puStack_160) ||
             (*(longlong *)(lVar10 + 0x10) != uStack_158)) ||
            (*(longlong *)(lVar10 + 0x18) != uStack_150)) ||
           (bVar2 = false, *(longlong *)(lVar10 + 0x20) != uStack_148)) {
          bVar2 = true;
        }
        uStack_250 = uStack_228;
        if (bVar2) {
          unaff_R6 = 0;
          uVar19 = 0xbadc0de8;
          goto LAB_ram_0000e060;
        }
      }
    }
    uStack_210 = 0;
    if (lStack_1c0 != 0) {
      uStack_210 = (ulonglong)(*(longlong *)(lStack_1b8 + 8) * lStack_c8) / 10000;
    }
    if (*(ulonglong *)(lStack_1d0 + 0x710) < 5) {
      uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268) ^ 0x4a1178751b9c3c6;
      uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270) ^ 0x4a0178651b8c3c5;
      uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260) ^ 0x4a2178451bac3c7;
      uStack_180 = *(ulonglong *)(lStack_1d0 + 600) ^ 0xfb5ce87aae443c38;
    }
    else {
      uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270);
      uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268);
      uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260);
      uStack_180 = *(ulonglong *)(lStack_1d0 + 600);
    }
    uStack_148 = *(ulonglong *)(lStack_1d0 + 0x210) ^ 0x4a0178651b8c3c5;
    uStack_150 = *(ulonglong *)(lStack_1d0 + 0x208) ^ 0x4a1178751b9c3c6;
    uStack_158 = *(ulonglong *)(lStack_1d0 + 0x200) ^ 0x4a2178451bac3c7;
    puStack_160 = (ulonglong *)(*(ulonglong *)(lStack_1d0 + 0x1f8) ^ 0xfb5ce87aae443c38);
    uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x1f0) ^ 0x4a0178651b8c3c5;
    uStack_f0 = *(ulonglong *)(lStack_1d0 + 0x1e8) ^ 0x4a1178751b9c3c6;
    uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x1e0) ^ 0x4a2178451bac3c7;
    uStack_100 = *(ulonglong *)(lStack_1d0 + 0x1d8) ^ 0xfb5ce87aae443c38;
    fn_cf18__sol_invoke_signed_c(&uStack_188,uStack_208,uStack_230,uStack_1e0);
    unaff_R6 = (ulonglong)uStack_188;
    if (unaff_R6 == 0x1a) {
      if (uStack_210 == 0) {
LAB_ram_0000f388:
        uStack_f8 = uStack_250;
        uStack_100 = uStack_238;
        fn_2bcf8__sol_invoke_signed_c(&uStack_198,&uStack_100,8,0);
        unaff_R6 = (ulonglong)uStack_198;
        if (unaff_R6 == 0x1a) {
          if (lVar7 == 0) {
            lStack_1d8 = lStack_c8;
            lStack_c8 = lVar3;
          }
          uStack_128 = puStack_220[3];
          uStack_130 = puStack_220[2];
          uStack_138 = puStack_220[1];
          uStack_140 = *puStack_220;
          lStack_120 = *plVar30;
          uStack_118 = *(undefined8 *)(unaff_R9 + 0x10);
          uStack_110 = *(undefined8 *)(unaff_R9 + 0x18);
          uStack_108 = *(undefined8 *)(unaff_R9 + 0x20);
          uVar1 = *(undefined1 *)(lStack_1b8 + 0x18);
          lStack_1b8._0_1_ = (undefined1)*(undefined8 *)(lStack_1b8 + 8);
          uVar12 = *(ulonglong *)(lStack_1d0 + 0x210);
          uVar23 = *(ulonglong *)(lStack_1d0 + 0x1f0);
          uVar13 = *(ulonglong *)(lStack_1d0 + 0x208);
          uVar14 = *(ulonglong *)(lStack_1d0 + 0x1e8);
          uVar15 = *(ulonglong *)(lStack_1d0 + 0x200);
          uVar16 = *(ulonglong *)(lStack_1d0 + 0x1e0);
          uVar28 = *(ulonglong *)(lStack_1d0 + 0x1f8);
          uVar17 = *(ulonglong *)(lStack_1d0 + 0x1d8);
          uVar19 = *(ulonglong *)(lStack_1d0 + 0x378);
          uVar29 = *(ulonglong *)(lStack_1d0 + 800);
          uVar9 = *(undefined8 *)(lStack_1d0 + 0x298);
          uVar31 = *(undefined8 *)(lStack_1d0 + 0x2a0);
          uVar18 = *puStack_220;
          uVar24 = puStack_220[1];
          uVar34 = puStack_220[2];
          *(undefined8 *)(lStack_1d0 + 0x2e0) = puStack_220[3];
          *(undefined8 *)(lStack_1d0 + 0x2d8) = uVar34;
          *(undefined8 *)(lStack_1d0 + 0x2d0) = uVar24;
          *(undefined8 *)(lStack_1d0 + 0x2c8) = uVar18;
          *(undefined8 *)(lStack_1d0 + 0x2f0) = uVar31;
          *(undefined8 *)(lStack_1d0 + 0x2e8) = uVar9;
          *(char *)(lStack_1d0 + 0x308) = cStack_1b0;
          *(longlong *)(lStack_1d0 + 0x300) = lStack_1d8;
          *(longlong *)(lStack_1d0 + 0x2f8) = lStack_c8;
          *(undefined8 *)(lStack_1d0 + 0x309) = 0;
          *(undefined8 *)(lStack_1d0 + 0x310) = 0;
          fn_2600(lStack_1d0 + 0x2c8);
          fn_2fe08__sol_memcpy(&uStack_100,&uStack_140,0x40);
          if (lStack_1c0 == 0) {
            lStack_1b8._0_1_ = 0;
          }
          uStack_20 = uStack_218 ^ 0x6e9de2b30b19f9ea;
          uStack_5 = uVar1;
          if (lStack_1c0 == 0) {
            uStack_5 = 0;
          }
          uStack_18 = uVar29 ^ 0xd3198133b7c1776c;
          uVar19 = uVar19 ^ 0x504156a22548f8dd;
          uStack_c0 = uVar17 ^ 0xfb5ce87aae443c38;
          uStack_a0 = uVar28 ^ 0xfb5ce87aae443c38;
          uStack_b8 = uVar16 ^ 0x4a2178451bac3c7;
          uStack_98 = uVar15 ^ 0x4a2178451bac3c7;
          uStack_b0 = uVar14 ^ 0x4a1178751b9c3c6;
          uStack_90 = uVar13 ^ 0x4a1178751b9c3c6;
          uStack_a8 = uVar23 ^ 0x4a0178651b8c3c5;
          uStack_88 = uVar12 ^ 0x4a0178651b8c3c5;
          uStack_48 = uStack_d0;
          uStack_50 = uStack_d8;
          uStack_58 = uStack_e0;
          uStack_60 = uVar6;
          uStack_68 = uVar5;
          uStack_70 = uVar4;
          uStack_6 = (undefined1)lStack_1b8;
          uStack_7 = (undefined1)uVar20;
          lStack_28 = lStack_1d8;
          uStack_80 = uVar9;
          uStack_78 = uVar31;
          uStack_40 = uVar21;
          uStack_38 = uVar22;
          uStack_10 = uVar19;
          fn_1e20(&uStack_100);
          uStack_158 = 0x100;
          puStack_160 = &uStack_100;
          fn_2de38(&puStack_160,1);
          unaff_R6 = 0x1a;
        }
        else {
          uVar19 = (ulonglong)uStack_194;
        }
      }
      else if (plStack_1c8 == (longlong *)0x0) {
        unaff_R6 = 0;
        uVar19 = 0xbadc0de;
      }
      else {
        if (*(ulonglong *)(lStack_1d0 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lStack_1d0 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270);
          uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268);
          uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260);
          uStack_180 = *(ulonglong *)(lStack_1d0 + 600);
        }
        uStack_148 = *(ulonglong *)(lStack_1d0 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lStack_1d0 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lStack_1d0 + 0x200) ^ 0x4a2178451bac3c7;
        puStack_160 = (ulonglong *)(*(ulonglong *)(lStack_1d0 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_f0 = *(ulonglong *)(lStack_1d0 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_100 = *(ulonglong *)(lStack_1d0 + 0x1d8) ^ 0xfb5ce87aae443c38;
        fn_cf18__sol_invoke_signed_c(&uStack_190,uStack_208,plStack_1c8,uStack_1e0);
        unaff_R6 = (ulonglong)uStack_190;
        if (unaff_R6 == 0x1a) goto LAB_ram_0000f388;
        uVar19 = (ulonglong)uStack_18c;
      }
    }
    else {
      uVar19 = (ulonglong)uStack_184;
    }
  }
LAB_ram_0000e060:
  unaff_R8W = (undefined4)uVar19;
LAB_ram_0000e970:
  puStack_1f0[1] = unaff_R8W;
  *puStack_1f0 = (int)unaff_R6;
  return;
}
