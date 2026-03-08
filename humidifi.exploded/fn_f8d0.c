/* Function: fn_f8d0
 * Address:  0xf9f0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_f8d0 @ 0xf9f0 ---- */

/* WARNING: Removing unreachable block (ram,0x000103d0) */

void fn_f8d0(undefined4 *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                     longlong param_5)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  int iVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 uVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 uStack_200;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong *plStack_1c8;
  undefined8 uStack_1b0;
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
  ulonglong uStack_68;
  ulonglong uStack_60;
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
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined2 uStack_6;
  
  lVar32 = param_2[9];
  if ((((*(longlong *)(lVar32 + 8) != 0x66d17b1817d5a706) ||
       (*(longlong *)(lVar32 + 0x10) != -0x3f3d02aafb2b25cb)) ||
      (*(longlong *)(lVar32 + 0x18) != -0x5a8aa9de7039db3f)) ||
     (bVar1 = false, *(longlong *)(lVar32 + 0x20) != 0x85fcbbadb)) {
    bVar1 = true;
  }
  uVar35 = 0;
  puVar26 = (ulonglong *)0xabad1dea;
  if (bVar1) goto LAB_ram_000114c0;
  lVar32 = param_2[6];
  if (((*(longlong *)(lVar32 + 8) != -0x368b38e7e82a58fa) ||
      (*(longlong *)(lVar32 + 0x10) != -0x49a1e296679ca9d8)) ||
     ((*(longlong *)(lVar32 + 0x18) != 0x5c6d4b9ba3b85e8b ||
      (bVar1 = false, *(longlong *)(lVar32 + 0x20) != 0x215b5573)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_000114c0;
  lVar3 = param_2[1];
  if (((*(longlong *)(lVar3 + 0x28) != -0x16a608d8d48b0286) ||
      (*(longlong *)(lVar3 + 0x30) != 0x7a819dd33c7070c6)) ||
     ((*(longlong *)(lVar3 + 0x38) != 0x6dd2523bce0a93a0 ||
      (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x2c4478dc22ab5fac)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_000114c0;
  if (*(longlong *)(lVar3 + 0x50) != 0x6c0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,2);
  }
  if ((lVar3 + 0x58U & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,0);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x288) ^ 0xffffffffffffffa1;
  puVar26 = (ulonglong *)0xbadc0de2;
  if (2 < (uVar4 & 0xff)) goto LAB_ram_000114c0;
  lVar36 = *param_2;
  puVar37 = (undefined8 *)(lVar36 + 8);
  if ((((*(longlong *)(lVar36 + 8) != 0x77c2575f37eddd1b) ||
       (*(longlong *)(lVar36 + 0x10) != 0x2d6e7a2be59cf048)) ||
      (*(longlong *)(lVar36 + 0x18) != 0x7ea41dd6046c6fc4)) ||
     (bVar1 = false, *(longlong *)(lVar36 + 0x20) != 0x31797eed4f7e7455)) {
    bVar1 = true;
  }
  uVar38 = *(ulonglong *)(lVar3 + 0x2b0);
  uVar27 = *(ulonglong *)(param_5 + -0xff8);
  uStack_200 = *(undefined8 *)(param_5 + -0x1000);
  if (((bVar1) && (uVar4 = uVar4 & 0xff, uVar4 != 0)) && (uVar4 == 1)) {
    puVar26 = (ulonglong *)0x1ced;
    uVar35 = 0;
    goto LAB_ram_000114c0;
  }
  plVar16 = param_2 + 3;
  plStack_1c8 = param_2 + 2;
  uVar17 = *(ulonglong *)(lVar3 + 0x248) ^ 0x4a1178751b9c3c6;
  uVar35 = *(ulonglong *)(lVar3 + 0x250) ^ 0x4a0178651b8c3c5;
  uVar28 = *(ulonglong *)(lVar3 + 0x240) ^ 0x4a2178451bac3c7;
  uVar4 = *(ulonglong *)(lVar3 + 0x238) ^ 0xfb5ce87aae443c38;
  uVar23 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
           uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
  lVar21 = *plStack_1c8;
  uVar4 = *(ulonglong *)(lVar21 + 8);
  uVar4 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
          uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
  if (uVar23 == uVar4) {
    uVar23 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
             (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
             uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
    uVar4 = *(ulonglong *)(lVar21 + 0x10);
    uVar4 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
            uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
    if (uVar23 != uVar4) goto LAB_ram_00010160;
    uVar23 = uVar17 << 0x38 | (uVar17 & 0xff00) << 0x28 | (uVar17 & 0xff0000) << 0x18 |
             (uVar17 & 0xff000000) << 8 | uVar17 >> 8 & 0xff000000 | uVar17 >> 0x18 & 0xff0000 |
             uVar17 >> 0x28 & 0xff00 | uVar17 >> 0x38;
    uVar4 = *(ulonglong *)(lVar21 + 0x18);
    uVar4 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
            uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
    if (uVar23 != uVar4) goto LAB_ram_00010160;
    iVar15 = 0;
    uVar23 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    uVar35 = *(ulonglong *)(lVar21 + 0x20);
    uVar4 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
            (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
            uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar23 != uVar4) goto LAB_ram_00010160;
  }
  else {
LAB_ram_00010160:
    iVar15 = -1;
    if (uVar4 <= uVar23) {
      iVar15 = 1;
    }
  }
  uStack_f0 = *(ulonglong *)(lVar3 + 0x228) ^ 0x4a1178751b9c3c6;
  uStack_e8 = *(ulonglong *)(lVar3 + 0x230) ^ 0x4a0178651b8c3c5;
  uStack_f8 = *(ulonglong *)(lVar3 + 0x220) ^ 0x4a2178451bac3c7;
  uStack_100 = *(ulonglong *)(lVar3 + 0x218) ^ 0xfb5ce87aae443c38;
  uVar4 = uStack_100 << 0x38 | (uStack_100 & 0xff00) << 0x28 | (uStack_100 & 0xff0000) << 0x18 |
          (uStack_100 & 0xff000000) << 8 | uStack_100 >> 8 & 0xff000000 |
          uStack_100 >> 0x18 & 0xff0000 | uStack_100 >> 0x28 & 0xff00 | uStack_100 >> 0x38;
  lVar30 = *plVar16;
  uVar35 = *(ulonglong *)(lVar30 + 8);
  uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
           (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
           uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
  if (uVar4 == uVar35) {
    uVar4 = uStack_f8 << 0x38 | (uStack_f8 & 0xff00) << 0x28 | (uStack_f8 & 0xff0000) << 0x18 |
            (uStack_f8 & 0xff000000) << 8 | uStack_f8 >> 8 & 0xff000000 |
            uStack_f8 >> 0x18 & 0xff0000 | uStack_f8 >> 0x28 & 0xff00 | uStack_f8 >> 0x38;
    uVar35 = *(ulonglong *)(lVar30 + 0x10);
    uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar4 != uVar35) goto LAB_ram_000102c8;
    uVar4 = uStack_f0 << 0x38 | (uStack_f0 & 0xff00) << 0x28 | (uStack_f0 & 0xff0000) << 0x18 |
            (uStack_f0 & 0xff000000) << 8 | uStack_f0 >> 8 & 0xff000000 |
            uStack_f0 >> 0x18 & 0xff0000 | uStack_f0 >> 0x28 & 0xff00 | uStack_f0 >> 0x38;
    uVar35 = *(ulonglong *)(lVar30 + 0x18);
    uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar4 != uVar35) goto LAB_ram_000102c8;
    iVar25 = 0;
    uVar4 = uStack_e8 << 0x38 | (uStack_e8 & 0xff00) << 0x28 | (uStack_e8 & 0xff0000) << 0x18 |
            (uStack_e8 & 0xff000000) << 8 | uStack_e8 >> 8 & 0xff000000 |
            uStack_e8 >> 0x18 & 0xff0000 | uStack_e8 >> 0x28 & 0xff00 | uStack_e8 >> 0x38;
    uVar35 = *(ulonglong *)(lVar30 + 0x20);
    uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar4 != uVar35) goto LAB_ram_000102c8;
  }
  else {
LAB_ram_000102c8:
    iVar25 = -1;
    if (uVar35 <= uVar4) {
      iVar25 = 1;
    }
  }
  if (iVar25 != 0 || iVar15 != 0) {
    puVar26 = (ulonglong *)0xbadface3;
    uVar35 = 0;
    goto LAB_ram_000114c0;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x2c0) ^ 0x6e9de2b30b19f1ea;
  uVar17 = *(ulonglong *)(lVar32 + 0x58) - uVar4;
  uVar35 = 0;
  if ((uVar17 <= *(ulonglong *)(lVar32 + 0x58)) &&
     (puVar26 = (ulonglong *)0xfaded, (*(ulonglong *)(lVar3 + 0x2b8) ^ 0x6e9de2b30b19f1ea) < uVar17)
     ) goto LAB_ram_000114c0;
  puVar26 = (ulonglong *)fn_10320(&uStack_100);
  if (puVar26 != (ulonglong *)0x0) {
    uVar4 = (longlong)puVar26 << 0x20 | (ulonglong)(puVar26 + -0x20000000) >> 0x20;
    if (uVar4 < 0x1a) {
      puVar26 = (ulonglong *)(ulonglong)*(uint *)(&DAT_ram_00032150 + uVar4 * 4);
      uVar35 = uVar4;
    }
    goto LAB_ram_000114c0;
  }
  puVar26 = (ulonglong *)0xfaded;
  if (uVar4 <= uStack_100) goto LAB_ram_000114c0;
  puVar12 = (undefined8 *)(lVar3 + 8);
  lVar32 = fn_12770__sol_sha256(puVar37,puVar12,uVar4);
  uVar20 = 1;
  if (lVar32 != param_4) {
    lVar32 = fn_128c0__sol_sha256(puVar37,puVar12,uVar4);
    uVar20 = 1;
    if (lVar32 != param_4) {
      uVar20 = 0;
    }
  }
  uVar35 = 0;
  uVar4 = uVar27 & 0xff;
  if (uVar4 == 0) {
    bVar1 = false;
  }
  else {
    if (uVar4 != 1) {
      puVar26 = (ulonglong *)0xbadb100d;
      goto LAB_ram_000114c0;
    }
    bVar1 = true;
  }
  lVar32 = param_2[7];
  if ((((*(longlong *)(lVar32 + 8) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(lVar32 + 0x10) != -0x53861431b91e3427)) ||
      (*(longlong *)(lVar32 + 0x18) != -0x6ec8a4a0127a4be4)) ||
     (bVar2 = false, *(longlong *)(lVar32 + 0x20) != -0x56ff00817a0a73c6)) {
    bVar2 = true;
  }
  lVar13 = param_2[8];
  if (bVar2) {
    if (((*(longlong *)(lVar32 + 8) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar32 + 0x10) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar32 + 0x18) != 0x270db9834dfc1ab6 ||
        (bVar2 = false, *(longlong *)(lVar32 + 0x20) != -0x3745e27d7064202)))) {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_ram_00010758;
LAB_ram_00010888:
    puVar26 = (ulonglong *)0xbadc0de3;
  }
  else {
LAB_ram_00010758:
    if (((*(longlong *)(lVar13 + 8) != -0x6c5e9a281e0922fa) ||
        (*(longlong *)(lVar13 + 0x10) != -0x53861431b91e3427)) ||
       ((*(longlong *)(lVar13 + 0x18) != -0x6ec8a4a0127a4be4 ||
        (bVar2 = false, *(longlong *)(lVar13 + 0x20) != -0x56ff00817a0a73c6)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if ((((*(longlong *)(lVar13 + 8) != -0x21708a111e0922fa) ||
           (*(longlong *)(lVar13 + 0x10) != -0x2532931b43a2bde8)) ||
          (*(longlong *)(lVar13 + 0x18) != 0x270db9834dfc1ab6)) ||
         (bVar2 = false, *(longlong *)(lVar13 + 0x20) != -0x3745e27d7064202)) {
        bVar2 = true;
      }
      if (bVar2) goto LAB_ram_00010888;
    }
    puVar26 = (ulonglong *)0xb1ade2;
    if ((0x47 < *(ulonglong *)(lVar21 + 0x50)) && (0x47 < *(ulonglong *)(lVar30 + 0x50))) {
      uVar22 = *(undefined8 *)(lVar21 + 0x98);
      uVar18 = *(undefined8 *)(lVar30 + 0x98);
      uStack_148 = *(undefined8 *)(lVar3 + 0x20);
      uStack_150 = *(undefined8 *)(lVar3 + 0x18);
      uStack_158 = *(undefined8 *)(lVar3 + 0x10);
      puStack_160 = (ulonglong *)*puVar12;
      fn_25ee0(&uStack_100,uStack_200);
      uVar23 = uStack_e8;
      uVar17 = uStack_f0;
      uVar4 = uStack_f8;
      if ((int)uStack_100 == 1) {
        puVar26 = (ulonglong *)(uStack_f8 & 0xffffffff);
        uVar35 = uStack_100 >> 0x20;
      }
      else {
        plStack_1f0 = param_2 + 5;
        plVar33 = param_2 + 4;
        plStack_1e8 = plVar16;
        if (bVar1) {
          plVar33 = plStack_1f0;
          plStack_1f0 = param_2 + 4;
          plStack_1e8 = plStack_1c8;
          plStack_1c8 = plVar16;
        }
        if (*(ulonglong *)(lVar3 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lVar3 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lVar3 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lVar3 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lVar3 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lVar3 + 0x270);
          uStack_170 = *(ulonglong *)(lVar3 + 0x268);
          uStack_178 = *(ulonglong *)(lVar3 + 0x260);
          uStack_180 = *(ulonglong *)(lVar3 + 600);
        }
        uStack_148 = *(ulonglong *)(lVar3 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lVar3 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lVar3 + 0x200) ^ 0x4a2178451bac3c7;
        puStack_160 = (ulonglong *)(*(ulonglong *)(lVar3 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lVar3 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_f0 = *(ulonglong *)(lVar3 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_f8 = *(ulonglong *)(lVar3 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_100 = *(ulonglong *)(lVar3 + 0x1d8) ^ 0xfb5ce87aae443c38;
        fn_d740__sol_invoke_signed_c(&uStack_188,plStack_1e8,plStack_1f0,param_2 + 1);
        uVar35 = (ulonglong)uStack_188;
        if (uVar35 == 0x1a) {
          fn_ccc0__sol_invoke_signed_c(&uStack_190,plVar33,plStack_1c8,param_2);
          uVar35 = (ulonglong)uStack_190;
          if (uVar35 == 0x1a) {
            uStack_1b0 = uStack_c8;
            if (!bVar1) {
              uStack_1b0 = uStack_200;
            }
            if (!bVar1) {
              uStack_200 = uStack_c8;
            }
            uStack_128 = *(undefined8 *)(lVar36 + 0x20);
            uStack_130 = *(undefined8 *)(lVar36 + 0x18);
            uStack_138 = *(undefined8 *)(lVar36 + 0x10);
            uStack_140 = *puVar37;
            uStack_120 = *puVar12;
            uStack_118 = *(undefined8 *)(lVar3 + 0x10);
            uStack_110 = *(undefined8 *)(lVar3 + 0x18);
            uStack_108 = *(undefined8 *)(lVar3 + 0x20);
            uVar24 = *puVar37;
            uVar14 = *(undefined8 *)(lVar36 + 0x10);
            uVar19 = *(undefined8 *)(lVar36 + 0x18);
            uVar35 = *(ulonglong *)(lVar3 + 0x1d8);
            uVar28 = *(ulonglong *)(lVar3 + 0x1e0);
            uVar5 = *(ulonglong *)(lVar3 + 0x1e8);
            uVar6 = *(ulonglong *)(lVar3 + 0x1f8);
            uVar7 = *(ulonglong *)(lVar3 + 0x200);
            uVar8 = *(ulonglong *)(lVar3 + 0x208);
            uVar9 = *(ulonglong *)(lVar3 + 0x1f0);
            uVar39 = *(ulonglong *)(lVar3 + 0x210);
            uVar29 = *(ulonglong *)(lVar3 + 0x378);
            uVar34 = *(ulonglong *)(lVar3 + 800);
            uVar10 = *(undefined8 *)(lVar3 + 0x298);
            uVar31 = *(undefined8 *)(lVar3 + 0x2a0);
            *(undefined8 *)(lVar3 + 0x2e0) = *(undefined8 *)(lVar36 + 0x20);
            *(undefined8 *)(lVar3 + 0x2d8) = uVar19;
            *(undefined8 *)(lVar3 + 0x2d0) = uVar14;
            *(undefined8 *)(lVar3 + 0x2c8) = uVar24;
            *(undefined8 *)(lVar3 + 0x2f0) = uVar31;
            *(undefined8 *)(lVar3 + 0x2e8) = uVar10;
            uVar11 = (undefined1)uVar27;
            *(undefined1 *)(lVar3 + 0x308) = uVar11;
            *(undefined8 *)(lVar3 + 0x300) = uStack_200;
            *(undefined8 *)(lVar3 + 0x2f8) = uStack_1b0;
            *(undefined8 *)(lVar3 + 0x309) = 0;
            *(undefined8 *)(lVar3 + 0x310) = 0;
            fn_2600(lVar3 + 0x2c8);
            puVar26 = &uStack_100;
            fn_2fe08__sol_memcpy(puVar26,&uStack_140,0x40);
            uStack_18 = uVar34 ^ 0xd3198133b7c1776c;
            uStack_10 = uVar29 ^ 0x504156a22548f8dd;
            uStack_88 = uVar39 ^ 0x4a0178651b8c3c5;
            uStack_a8 = uVar9 ^ 0x4a0178651b8c3c5;
            uStack_48 = uStack_d0;
            uStack_50 = uStack_d8;
            uStack_58 = uStack_e0;
            uStack_60 = uVar23;
            uStack_68 = uVar17;
            uStack_70 = uVar4;
            uStack_28 = uStack_200;
            uStack_30 = uStack_1b0;
            uStack_90 = uVar8 ^ 0x4a1178751b9c3c6;
            uStack_98 = uVar7 ^ 0x4a2178451bac3c7;
            uStack_a0 = uVar6 ^ 0xfb5ce87aae443c38;
            uStack_b0 = uVar5 ^ 0x4a1178751b9c3c6;
            uStack_b8 = uVar28 ^ 0x4a2178451bac3c7;
            uStack_c0 = uVar35 ^ 0xfb5ce87aae443c38;
            uStack_6 = 0;
            uStack_80 = uVar10;
            uStack_78 = uVar31;
            uStack_40 = uVar22;
            uStack_38 = uVar18;
            uStack_20 = uVar38 ^ 0x6e9de2b30b19f9ea;
            uStack_8 = uVar11;
            uStack_7 = uVar20;
            fn_1e20(puVar26);
            uStack_158 = 0x100;
            puStack_160 = puVar26;
            fn_2de38(&puStack_160,1);
            uVar35 = 0x1a;
          }
          else {
            puVar26 = (ulonglong *)(ulonglong)uStack_18c;
          }
        }
        else {
          puVar26 = (ulonglong *)(ulonglong)uStack_184;
        }
      }
    }
  }
LAB_ram_000114c0:
  param_1[1] = (int)puVar26;
  *param_1 = (int)uVar35;
  return;
}
