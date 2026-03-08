/* Function: fn_10320
 * Address:  0x10440
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_10320 @ 0x10440 ---- */

void fn_10320(void)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulonglong *unaff_R6;
  ulonglong uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong unaff_R9;
  ulonglong uVar27;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  char cStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b0;
  longlong lStack_1a0;
  longlong lStack_198;
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
  undefined8 uStack_120;
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
  undefined8 uStack_c8;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_7;
  undefined2 uStack_6;
  
  puVar5 = (ulonglong *)fn_10320();
  if (puVar5 != (ulonglong *)0x0) {
    uVar15 = (longlong)puVar5 << 0x20 | (ulonglong)(puVar5 + -0x20000000) >> 0x20;
    if (uVar15 < 0x1a) {
      puVar5 = (ulonglong *)(ulonglong)*(uint *)(&DAT_ram_00032150 + uVar15 * 4);
      unaff_R9 = uVar15;
    }
    goto LAB_ram_000114c0;
  }
  puVar5 = unaff_R6;
  if (uStack_218 <= uStack_100) goto LAB_ram_000114c0;
  puVar16 = (undefined8 *)(lStack_1a0 + 8);
  lVar6 = fn_12770__sol_sha256(puStack_1e0,puVar16,uStack_218);
  uVar21 = 1;
  if (lVar6 != lStack_198) {
    lVar6 = fn_128c0__sol_sha256(puStack_1e0,puVar16,uStack_218);
    uVar21 = 1;
    if (lVar6 != lStack_198) {
      uVar21 = 0;
    }
  }
  unaff_R9 = 0;
  if (cStack_1d8 == '\0') {
    bVar2 = false;
  }
  else {
    if (cStack_1d8 != '\x01') {
      puVar5 = (ulonglong *)0xbadb100d;
      goto LAB_ram_000114c0;
    }
    bVar2 = true;
  }
  lVar6 = *(longlong *)(lStack_230 + 0x38);
  if ((((*(longlong *)(lVar6 + 8) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(lVar6 + 0x10) != -0x53861431b91e3427)) ||
      (*(longlong *)(lVar6 + 0x18) != -0x6ec8a4a0127a4be4)) ||
     (bVar1 = false, *(longlong *)(lVar6 + 0x20) != -0x56ff00817a0a73c6)) {
    bVar1 = true;
  }
  lVar17 = *(longlong *)(lStack_230 + 0x40);
  if (bVar1) {
    if (((*(longlong *)(lVar6 + 8) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar6 + 0x10) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar6 + 0x18) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(lVar6 + 0x20) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_ram_00010758;
LAB_ram_00010888:
    puVar5 = (ulonglong *)0xbadc0de3;
  }
  else {
LAB_ram_00010758:
    if (((*(longlong *)(lVar17 + 8) != -0x6c5e9a281e0922fa) ||
        (*(longlong *)(lVar17 + 0x10) != -0x53861431b91e3427)) ||
       ((*(longlong *)(lVar17 + 0x18) != -0x6ec8a4a0127a4be4 ||
        (bVar1 = false, *(longlong *)(lVar17 + 0x20) != -0x56ff00817a0a73c6)))) {
      bVar1 = true;
    }
    if (bVar1) {
      if ((((*(longlong *)(lVar17 + 8) != -0x21708a111e0922fa) ||
           (*(longlong *)(lVar17 + 0x10) != -0x2532931b43a2bde8)) ||
          (*(longlong *)(lVar17 + 0x18) != 0x270db9834dfc1ab6)) ||
         (bVar1 = false, *(longlong *)(lVar17 + 0x20) != -0x3745e27d7064202)) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_ram_00010888;
    }
    puVar5 = (ulonglong *)0xb1ade2;
    if ((0x47 < *(ulonglong *)(lStack_220 + 0x50)) && (0x47 < *(ulonglong *)(lStack_228 + 0x50))) {
      uVar22 = *(undefined8 *)(lStack_220 + 0x98);
      uVar19 = *(undefined8 *)(lStack_228 + 0x98);
      uStack_148 = *(undefined8 *)(lStack_1a0 + 0x20);
      uStack_150 = *(undefined8 *)(lStack_1a0 + 0x18);
      uStack_158 = *(undefined8 *)(lStack_1a0 + 0x10);
      puStack_160 = (ulonglong *)*puVar16;
      fn_25ee0(&uStack_100,uStack_200);
      uVar4 = uStack_e8;
      uVar3 = uStack_f0;
      uVar15 = uStack_f8;
      if ((int)uStack_100 == 1) {
        puVar5 = (ulonglong *)(uStack_f8 & 0xffffffff);
        unaff_R9 = uStack_100 >> 0x20;
      }
      else {
        lStack_1f0 = lStack_230 + 0x28;
        if (bVar2) {
          uStack_1e8 = uStack_208;
          lVar6 = lStack_1f0;
          lStack_1f0 = lStack_230 + 0x20;
        }
        else {
          uStack_1e8 = uStack_1c8;
          uStack_1c8 = uStack_208;
          lVar6 = lStack_230 + 0x20;
        }
        if (*(ulonglong *)(lStack_1a0 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lStack_1a0 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lStack_1a0 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lStack_1a0 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lStack_1a0 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lStack_1a0 + 0x270);
          uStack_170 = *(ulonglong *)(lStack_1a0 + 0x268);
          uStack_178 = *(ulonglong *)(lStack_1a0 + 0x260);
          uStack_180 = *(ulonglong *)(lStack_1a0 + 600);
        }
        uStack_148 = *(ulonglong *)(lStack_1a0 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lStack_1a0 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lStack_1a0 + 0x200) ^ 0x4a2178451bac3c7;
        puStack_160 = (ulonglong *)(*(ulonglong *)(lStack_1a0 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lStack_1a0 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_f0 = *(ulonglong *)(lStack_1a0 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_f8 = *(ulonglong *)(lStack_1a0 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_100 = *(ulonglong *)(lStack_1a0 + 0x1d8) ^ 0xfb5ce87aae443c38;
        fn_d740__sol_invoke_signed_c(&uStack_188,uStack_1e8,lStack_1f0,uStack_1b0);
        unaff_R9 = (ulonglong)uStack_188;
        if (unaff_R9 == 0x1a) {
          fn_ccc0__sol_invoke_signed_c(&uStack_190,lVar6,uStack_1c8,lStack_230);
          unaff_R9 = (ulonglong)uStack_190;
          if (unaff_R9 == 0x1a) {
            uStack_1b0 = uStack_c8;
            if (!bVar2) {
              uStack_1b0 = uStack_200;
            }
            if (!bVar2) {
              uStack_200 = uStack_c8;
            }
            uStack_128 = puStack_1e0[3];
            uStack_130 = puStack_1e0[2];
            uStack_138 = puStack_1e0[1];
            uStack_140 = *puStack_1e0;
            uStack_120 = *puVar16;
            uStack_118 = *(undefined8 *)(lStack_1a0 + 0x10);
            uStack_110 = *(undefined8 *)(lStack_1a0 + 0x18);
            uStack_108 = *(undefined8 *)(lStack_1a0 + 0x20);
            uVar23 = *puStack_1e0;
            uVar18 = puStack_1e0[1];
            uVar20 = puStack_1e0[2];
            uVar7 = *(ulonglong *)(lStack_1a0 + 0x1d8);
            uVar8 = *(ulonglong *)(lStack_1a0 + 0x1e0);
            uVar9 = *(ulonglong *)(lStack_1a0 + 0x1e8);
            uVar10 = *(ulonglong *)(lStack_1a0 + 0x1f8);
            uVar11 = *(ulonglong *)(lStack_1a0 + 0x200);
            uVar12 = *(ulonglong *)(lStack_1a0 + 0x208);
            uVar13 = *(ulonglong *)(lStack_1a0 + 0x1f0);
            uVar27 = *(ulonglong *)(lStack_1a0 + 0x210);
            uVar24 = *(ulonglong *)(lStack_1a0 + 0x378);
            uVar26 = *(ulonglong *)(lStack_1a0 + 800);
            uVar14 = *(undefined8 *)(lStack_1a0 + 0x298);
            uVar25 = *(undefined8 *)(lStack_1a0 + 0x2a0);
            *(undefined8 *)(lStack_1a0 + 0x2e0) = puStack_1e0[3];
            *(undefined8 *)(lStack_1a0 + 0x2d8) = uVar20;
            *(undefined8 *)(lStack_1a0 + 0x2d0) = uVar18;
            *(undefined8 *)(lStack_1a0 + 0x2c8) = uVar23;
            *(undefined8 *)(lStack_1a0 + 0x2f0) = uVar25;
            *(undefined8 *)(lStack_1a0 + 0x2e8) = uVar14;
            *(char *)(lStack_1a0 + 0x308) = cStack_1d8;
            *(undefined8 *)(lStack_1a0 + 0x300) = uStack_200;
            *(undefined8 *)(lStack_1a0 + 0x2f8) = uStack_1b0;
            *(undefined8 *)(lStack_1a0 + 0x309) = 0;
            *(undefined8 *)(lStack_1a0 + 0x310) = 0;
            fn_2600(lStack_1a0 + 0x2c8);
            puVar5 = &uStack_100;
            fn_2fe08__sol_memcpy(puVar5,&uStack_140,0x40);
            uStack_18 = uVar26 ^ 0xd3198133b7c1776c;
            uStack_10 = uVar24 ^ 0x504156a22548f8dd;
            uStack_88 = uVar27 ^ 0x4a0178651b8c3c5;
            uStack_a8 = uVar13 ^ 0x4a0178651b8c3c5;
            uStack_48 = uStack_d0;
            uStack_50 = uStack_d8;
            uStack_58 = uStack_e0;
            uStack_60 = uVar4;
            uStack_68 = uVar3;
            uStack_70 = uVar15;
            uStack_28 = uStack_200;
            uStack_30 = uStack_1b0;
            uStack_90 = uVar12 ^ 0x4a1178751b9c3c6;
            uStack_98 = uVar11 ^ 0x4a2178451bac3c7;
            uStack_a0 = uVar10 ^ 0xfb5ce87aae443c38;
            uStack_b0 = uVar9 ^ 0x4a1178751b9c3c6;
            uStack_b8 = uVar8 ^ 0x4a2178451bac3c7;
            uStack_c0 = uVar7 ^ 0xfb5ce87aae443c38;
            uStack_6 = 0;
            uStack_80 = uVar14;
            uStack_78 = uVar25;
            uStack_40 = uVar22;
            uStack_38 = uVar19;
            uStack_20 = uStack_210 ^ 0x6e9de2b30b19f9ea;
            uStack_7 = uVar21;
            fn_1e20(puVar5);
            uStack_158 = 0x100;
            puStack_160 = puVar5;
            fn_2de38(&puStack_160,1);
            unaff_R9 = 0x1a;
          }
          else {
            puVar5 = (ulonglong *)(ulonglong)uStack_18c;
          }
        }
        else {
          puVar5 = (ulonglong *)(ulonglong)uStack_184;
        }
      }
    }
  }
LAB_ram_000114c0:
  puStack_1d0[1] = (int)puVar5;
  *puStack_1d0 = (int)unaff_R9;
  return;
}
