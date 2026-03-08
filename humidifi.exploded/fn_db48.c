/* Function: fn_db48
 * Address:  0xdc68
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_db48 @ 0xdc68 ---- */

/* WARNING: Removing unreachable block (ram,0x0000e460) */

void fn_db48(undefined4 *param_1,longlong *param_2,ulonglong param_3,longlong param_4,
                     longlong param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  longlong lVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  longlong lVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong lVar46;
  undefined8 uVar47;
  longlong ***ppplVar48;
  undefined8 uVar49;
  longlong *plStack_250;
  longlong *plStack_238;
  longlong *plStack_230;
  ulonglong uStack_210;
  longlong *plStack_208;
  longlong lStack_1d8;
  undefined1 uStack_1b8;
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
  longlong **pplStack_160;
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
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
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
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  uVar32 = 0;
  uVar39 = 0xbadc0de;
  uVar35 = *(ulonglong *)(param_5 + -0xfe0);
  lVar36 = *(longlong *)(param_5 + -0xfe8);
  lVar43 = *(longlong *)(param_5 + -0xff0);
  lVar44 = *(longlong *)(param_5 + -0x1000);
  plVar45 = *(longlong **)(param_5 + -0xfd8);
  lVar46 = *plVar45;
  plVar24 = *(longlong **)(param_5 + -0xff8);
  if ((plVar24 == (longlong *)0x0) && (lVar46 != 0)) goto LAB_ram_0000e970;
  if ((*(longlong *)(param_4 + 8) != -0x368b38e7e82a58fa) ||
     (((*(longlong *)(param_4 + 0x10) != -0x49a1e296679ca9d8 ||
       (*(longlong *)(param_4 + 0x18) != 0x5c6d4b9ba3b85e8b)) ||
      (bVar1 = false, *(longlong *)(param_4 + 0x20) != 0x215b5573)))) {
    bVar1 = true;
  }
  uVar39 = 0xabad1dea;
  if (bVar1) goto LAB_ram_0000e970;
  plVar25 = param_2 + 1;
  lVar26 = *plVar25;
  if (((*(longlong *)(lVar26 + 0x28) != -0x16a608d8d48b0286) ||
      (*(longlong *)(lVar26 + 0x30) != 0x7a819dd33c7070c6)) ||
     ((*(longlong *)(lVar26 + 0x38) != 0x6dd2523bce0a93a0 ||
      (bVar1 = false, *(longlong *)(lVar26 + 0x40) != -0x2c4478dc22ab5fac)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_0000e970;
  if (((*(longlong *)(lVar44 + 8) != 0x66d17b1817d5a706) ||
      (*(longlong *)(lVar44 + 0x10) != -0x3f3d02aafb2b25cb)) ||
     ((*(longlong *)(lVar44 + 0x18) != -0x5a8aa9de7039db3f ||
      (bVar1 = false, *(longlong *)(lVar44 + 0x20) != 0x85fcbbadb)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_0000e970;
  if (*(longlong *)(lVar26 + 0x50) != 0x6c0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,2);
  }
  uVar27 = lVar26 + 0x58;
  if ((uVar27 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,0);
  }
  uVar39 = 0xbadc0de2;
  uVar28 = *(ulonglong *)(lVar26 + 0x288) ^ 0xffffffffffffffa1;
  if (2 < (uVar28 & 0xff)) goto LAB_ram_0000e970;
  if (*(ulonglong *)(param_5 + -0xfd0) < param_3) {
    plVar11 = param_2 + *(ulonglong *)(param_5 + -0xfd0);
  }
  else {
    plVar11 = (longlong *)0x0;
  }
  uVar37 = *(ulonglong *)(param_4 + 0x58);
  uVar33 = *(ulonglong *)(lVar26 + 0x2b0);
  lVar40 = *param_2;
  puVar41 = (undefined8 *)(lVar40 + 8);
  fn_7858(&plStack_100,uVar28,plVar11,uVar27,puVar41);
  plVar11 = plStack_f8;
  if ((int)plStack_100 == 0) {
    plStack_208 = param_2 + 3;
    plVar29 = param_2 + 2;
    uVar32 = *(ulonglong *)(lVar26 + 0x248) ^ 0x4a1178751b9c3c6;
    uVar28 = *(ulonglong *)(lVar26 + 0x250) ^ 0x4a0178651b8c3c5;
    uVar18 = *(ulonglong *)(lVar26 + 0x240) ^ 0x4a2178451bac3c7;
    uVar12 = *(ulonglong *)(lVar26 + 0x238) ^ 0xfb5ce87aae443c38;
    uVar12 = uVar12 << 0x38 | (uVar12 & 0xff00) << 0x28 | (uVar12 & 0xff0000) << 0x18 |
             (uVar12 & 0xff000000) << 8 | uVar12 >> 8 & 0xff000000 | uVar12 >> 0x18 & 0xff0000 |
             uVar12 >> 0x28 & 0xff00 | uVar12 >> 0x38;
    lVar30 = *plVar29;
    uVar19 = *(ulonglong *)(lVar30 + 8);
    uVar19 = uVar19 << 0x38 | (uVar19 & 0xff00) << 0x28 | (uVar19 & 0xff0000) << 0x18 |
             (uVar19 & 0xff000000) << 8 | uVar19 >> 8 & 0xff000000 | uVar19 >> 0x18 & 0xff0000 |
             uVar19 >> 0x28 & 0xff00 | uVar19 >> 0x38;
    if (uVar12 == uVar19) {
      uVar12 = uVar18 << 0x38 | (uVar18 & 0xff00) << 0x28 | (uVar18 & 0xff0000) << 0x18 |
               (uVar18 & 0xff000000) << 8 | uVar18 >> 8 & 0xff000000 | uVar18 >> 0x18 & 0xff0000 |
               uVar18 >> 0x28 & 0xff00 | uVar18 >> 0x38;
      uVar18 = *(ulonglong *)(lVar30 + 0x10);
      uVar19 = uVar18 << 0x38 | (uVar18 & 0xff00) << 0x28 | (uVar18 & 0xff0000) << 0x18 |
               (uVar18 & 0xff000000) << 8 | uVar18 >> 8 & 0xff000000 | uVar18 >> 0x18 & 0xff0000 |
               uVar18 >> 0x28 & 0xff00 | uVar18 >> 0x38;
      if (uVar12 != uVar19) goto LAB_ram_0000e208;
      uVar12 = uVar32 << 0x38 | (uVar32 & 0xff00) << 0x28 | (uVar32 & 0xff0000) << 0x18 |
               (uVar32 & 0xff000000) << 8 | uVar32 >> 8 & 0xff000000 | uVar32 >> 0x18 & 0xff0000 |
               uVar32 >> 0x28 & 0xff00 | uVar32 >> 0x38;
      uVar32 = *(ulonglong *)(lVar30 + 0x18);
      uVar19 = uVar32 << 0x38 | (uVar32 & 0xff00) << 0x28 | (uVar32 & 0xff0000) << 0x18 |
               (uVar32 & 0xff000000) << 8 | uVar32 >> 8 & 0xff000000 | uVar32 >> 0x18 & 0xff0000 |
               uVar32 >> 0x28 & 0xff00 | uVar32 >> 0x38;
      if (uVar12 != uVar19) goto LAB_ram_0000e208;
      iVar10 = 0;
      uVar12 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      uVar32 = *(ulonglong *)(lVar30 + 0x20);
      uVar19 = uVar32 << 0x38 | (uVar32 & 0xff00) << 0x28 | (uVar32 & 0xff0000) << 0x18 |
               (uVar32 & 0xff000000) << 8 | uVar32 >> 8 & 0xff000000 | uVar32 >> 0x18 & 0xff0000 |
               uVar32 >> 0x28 & 0xff00 | uVar32 >> 0x38;
      if (uVar12 != uVar19) goto LAB_ram_0000e208;
    }
    else {
LAB_ram_0000e208:
      iVar10 = -1;
      if (uVar19 <= uVar12) {
        iVar10 = 1;
      }
    }
    plStack_f0 = (longlong *)(*(ulonglong *)(lVar26 + 0x228) ^ 0x4a1178751b9c3c6);
    uStack_e8 = *(ulonglong *)(lVar26 + 0x230) ^ 0x4a0178651b8c3c5;
    plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x220) ^ 0x4a2178451bac3c7);
    plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 0x218) ^ 0xfb5ce87aae443c38);
    uVar32 = (longlong)plStack_100 << 0x38 | ((ulonglong)plStack_100 & 0xff00) << 0x28 |
             ((ulonglong)plStack_100 & 0xff0000) << 0x18 |
             ((ulonglong)plStack_100 & 0xff000000) << 8 | (ulonglong)plStack_100 >> 8 & 0xff000000 |
             (ulonglong)plStack_100 >> 0x18 & 0xff0000 | (ulonglong)plStack_100 >> 0x28 & 0xff00 |
             (ulonglong)plStack_100 >> 0x38;
    lVar3 = *plStack_208;
    uVar28 = *(ulonglong *)(lVar3 + 8);
    uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
             (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
             uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
    if (uVar32 == uVar28) {
      uVar32 = (longlong)plStack_f8 << 0x38 | ((ulonglong)plStack_f8 & 0xff00) << 0x28 |
               ((ulonglong)plStack_f8 & 0xff0000) << 0x18 |
               ((ulonglong)plStack_f8 & 0xff000000) << 8 | (ulonglong)plStack_f8 >> 8 & 0xff000000 |
               (ulonglong)plStack_f8 >> 0x18 & 0xff0000 | (ulonglong)plStack_f8 >> 0x28 & 0xff00 |
               (ulonglong)plStack_f8 >> 0x38;
      uVar28 = *(ulonglong *)(lVar3 + 0x10);
      uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      if (uVar32 != uVar28) goto LAB_ram_0000e370;
      uVar32 = (longlong)plStack_f0 << 0x38 | ((ulonglong)plStack_f0 & 0xff00) << 0x28 |
               ((ulonglong)plStack_f0 & 0xff0000) << 0x18 |
               ((ulonglong)plStack_f0 & 0xff000000) << 8 | (ulonglong)plStack_f0 >> 8 & 0xff000000 |
               (ulonglong)plStack_f0 >> 0x18 & 0xff0000 | (ulonglong)plStack_f0 >> 0x28 & 0xff00 |
               (ulonglong)plStack_f0 >> 0x38;
      uVar28 = *(ulonglong *)(lVar3 + 0x18);
      uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      if (uVar32 != uVar28) goto LAB_ram_0000e370;
      iVar23 = 0;
      uVar32 = uStack_e8 << 0x38 | (uStack_e8 & 0xff00) << 0x28 | (uStack_e8 & 0xff0000) << 0x18 |
               (uStack_e8 & 0xff000000) << 8 | uStack_e8 >> 8 & 0xff000000 |
               uStack_e8 >> 0x18 & 0xff0000 | uStack_e8 >> 0x28 & 0xff00 | uStack_e8 >> 0x38;
      uVar28 = *(ulonglong *)(lVar3 + 0x20);
      uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      if (uVar32 != uVar28) goto LAB_ram_0000e370;
    }
    else {
LAB_ram_0000e370:
      iVar23 = -1;
      if (uVar28 <= uVar32) {
        iVar23 = 1;
      }
    }
    if (iVar23 != 0 || iVar10 != 0) {
      uVar39 = 0xbadface3;
      uVar32 = 0;
      goto LAB_ram_0000e970;
    }
    plVar20 = (longlong *)(*(ulonglong *)(lVar26 + 0x2c0) ^ 0x6e9de2b30b19f1ea);
    uVar28 = uVar37 - (longlong)plVar20;
    uVar32 = 0;
    if (uVar37 < uVar28) {
      uVar28 = 0;
    }
    else {
      uVar39 = 0xfaded;
      if ((*(ulonglong *)(lVar26 + 0x2b8) ^ 0x6e9de2b30b19f1ea) < uVar28) goto LAB_ram_0000e970;
    }
    uVar39 = 0xfaded;
    lVar4 = fn_e3b0(&plStack_100);
    if (lVar4 != 0) {
      uVar35 = lVar4 << 0x20 | lVar4 - 0x100000000U >> 0x20;
      if (uVar35 < 0x1a) {
        uVar39 = *(undefined4 *)(&DAT_ram_00032150 + uVar35 * 4);
        uVar32 = uVar35;
      }
      else {
        uVar39 = (undefined4)lVar4;
      }
      goto LAB_ram_0000e970;
    }
    if (plVar20 <= plStack_100) goto LAB_ram_0000e970;
    plVar42 = (longlong *)(lVar26 + 8);
    lVar4 = fn_12770__sol_sha256(puVar41,plVar42,plVar20);
    uVar13 = 1;
    if (lVar4 != lVar43) {
      lVar4 = fn_128c0__sol_sha256(puVar41,plVar42,plVar20);
      uVar13 = 1;
      if (lVar4 != lVar43) {
        uVar13 = 0;
      }
    }
    uVar32 = 0;
    uVar37 = uVar35 & 0xff;
    lVar43 = 0;
    if (uVar37 != 0) {
      if (uVar37 != 1) {
        uVar39 = 0xbadb100d;
        goto LAB_ram_0000e970;
      }
      lVar43 = 1;
    }
    uVar39 = 0xb1ade2;
    if ((*(ulonglong *)(lVar30 + 0x50) < 0x48) || (*(ulonglong *)(lVar3 + 0x50) < 0x48))
    goto LAB_ram_0000e970;
    lVar4 = plVar45[2] << 0x30;
    if (lVar46 == 0) {
      lVar4 = 0;
    }
    uVar14 = *(undefined8 *)(lVar30 + 0x98);
    uVar32 = (ulonglong)plVar45[2] >> 0x10;
    if (lVar46 == 0) {
      uVar32 = 0;
    }
    uVar15 = *(undefined8 *)(lVar3 + 0x98);
    uStack_148 = *(longlong *)(lVar26 + 0x20);
    uStack_150 = *(longlong *)(lVar26 + 0x18);
    uStack_158 = *(longlong *)(lVar26 + 0x10);
    pplStack_160 = (longlong **)*plVar42;
    uVar21 = *(undefined8 *)(lVar44 + 0x50);
    lVar44 = lVar44 + 0x58;
    ppplVar48 = &pplStack_160;
    uVar49 = 0;
    lVar30 = lVar43;
    uVar5 = uVar13;
    fn_25ee0(&plStack_100,lVar36,uVar15,uVar14);
    uVar37 = uStack_e8;
    plVar2 = plStack_f0;
    plVar20 = plStack_f8;
    if ((int)plStack_100 == 1) goto LAB_ram_0000e050;
    plStack_230 = param_2 + 5;
    plVar16 = param_2 + 4;
    if (lVar43 == 0) {
      plStack_250 = plVar29;
      plStack_238 = plVar16;
      if (plVar24 != (longlong *)0x0) {
        lVar31 = 0x1f0;
        lVar3 = 0x1e8;
        lVar7 = 0x1e0;
        lVar22 = 0x1d8;
        goto LAB_ram_0000ea48;
      }
    }
    else {
      plStack_250 = plStack_208;
      plStack_238 = plStack_230;
      plStack_230 = plVar16;
      plStack_208 = plVar29;
      if (plVar24 != (longlong *)0x0) {
        lVar31 = 0x210;
        lVar3 = 0x208;
        lVar7 = 0x200;
        lVar22 = 0x1f8;
LAB_ram_0000ea48:
        uStack_170 = *(ulonglong *)(lVar26 + lVar3) ^ 0x4a1178751b9c3c6;
        uStack_168 = *(ulonglong *)(lVar26 + lVar31) ^ 0x4a0178651b8c3c5;
        uStack_178 = *(ulonglong *)(lVar26 + lVar7) ^ 0x4a2178451bac3c7;
        uStack_180 = *(ulonglong *)(lVar26 + lVar22) ^ 0xfb5ce87aae443c38;
        uVar12 = *(ulonglong *)(lVar26 + 0x710);
        if (uVar12 < 5) {
          uVar12 = *(ulonglong *)(lVar26 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_e8 = *(ulonglong *)(lVar26 + 0x270) ^ 0x4a0178651b8c3c5;
          plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x260) ^ 0x4a2178451bac3c7);
          plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 600) ^ 0xfb5ce87aae443c38);
          plStack_f0 = (longlong *)uVar12;
        }
        else {
          uStack_e8 = *(ulonglong *)(lVar26 + 0x270);
          plStack_f0 = *(longlong **)(lVar26 + 0x268);
          plStack_f8 = *(longlong **)(lVar26 + 0x260);
          plStack_100 = *(longlong **)(lVar26 + 600);
        }
        fn_28a20__sol_try_find_program_address(&pplStack_160,&plStack_100,&uStack_180,0xfb5ce87aae443c38,uVar12,lVar30,
                         uVar27,uVar5,ppplVar48,lVar44,uVar21,uVar28,uVar49,lVar4,uVar32,plVar11);
        lVar44 = *plVar24;
        if ((((*(longlong ***)(lVar44 + 8) != pplStack_160) ||
             (*(longlong *)(lVar44 + 0x10) != uStack_158)) ||
            (*(longlong *)(lVar44 + 0x18) != uStack_150)) ||
           (bVar1 = false, *(longlong *)(lVar44 + 0x20) != uStack_148)) {
          bVar1 = true;
        }
        if (bVar1) {
          uVar32 = 0;
          uVar27 = 0xbadc0de8;
          goto LAB_ram_0000e060;
        }
      }
    }
    uStack_210 = 0;
    if (lVar46 != 0) {
      uStack_210 = (ulonglong)(plVar45[1] * lStack_c8) / 10000;
    }
    if (*(ulonglong *)(lVar26 + 0x710) < 5) {
      uStack_170 = *(ulonglong *)(lVar26 + 0x268) ^ 0x4a1178751b9c3c6;
      uStack_168 = *(ulonglong *)(lVar26 + 0x270) ^ 0x4a0178651b8c3c5;
      uStack_178 = *(ulonglong *)(lVar26 + 0x260) ^ 0x4a2178451bac3c7;
      uStack_180 = *(ulonglong *)(lVar26 + 600) ^ 0xfb5ce87aae443c38;
    }
    else {
      uStack_168 = *(ulonglong *)(lVar26 + 0x270);
      uStack_170 = *(ulonglong *)(lVar26 + 0x268);
      uStack_178 = *(ulonglong *)(lVar26 + 0x260);
      uStack_180 = *(ulonglong *)(lVar26 + 600);
    }
    uStack_148 = *(ulonglong *)(lVar26 + 0x210) ^ 0x4a0178651b8c3c5;
    uStack_150 = *(ulonglong *)(lVar26 + 0x208) ^ 0x4a1178751b9c3c6;
    uStack_158 = *(ulonglong *)(lVar26 + 0x200) ^ 0x4a2178451bac3c7;
    pplStack_160 = (longlong **)(*(ulonglong *)(lVar26 + 0x1f8) ^ 0xfb5ce87aae443c38);
    uStack_e8 = *(ulonglong *)(lVar26 + 0x1f0) ^ 0x4a0178651b8c3c5;
    plStack_f0 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e8) ^ 0x4a1178751b9c3c6);
    plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e0) ^ 0x4a2178451bac3c7);
    plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 0x1d8) ^ 0xfb5ce87aae443c38);
    fn_cf18__sol_invoke_signed_c(&uStack_188,plStack_208,plStack_230,plVar25);
    uVar32 = (ulonglong)uStack_188;
    if (uVar32 == 0x1a) {
      if (uStack_210 == 0) {
LAB_ram_0000f388:
        plStack_f8 = plStack_250;
        plStack_100 = plStack_238;
        plStack_f0 = param_2;
        uStack_e8 = lVar36;
        fn_2bcf8__sol_invoke_signed_c(&uStack_198,&plStack_100,8,0);
        uVar32 = (ulonglong)uStack_198;
        if (uVar32 == 0x1a) {
          lStack_1d8 = lVar36;
          lVar44 = lStack_c8;
          if (lVar43 == 0) {
            lStack_1d8 = lStack_c8;
            lVar44 = lVar36;
          }
          uStack_128 = *(undefined8 *)(lVar40 + 0x20);
          uStack_130 = *(undefined8 *)(lVar40 + 0x18);
          uStack_138 = *(undefined8 *)(lVar40 + 0x10);
          uStack_140 = *puVar41;
          lStack_120 = *plVar42;
          uStack_118 = *(undefined8 *)(lVar26 + 0x10);
          uStack_110 = *(undefined8 *)(lVar26 + 0x18);
          uStack_108 = *(undefined8 *)(lVar26 + 0x20);
          lVar36 = plVar45[3];
          uStack_1b8 = (undefined1)plVar45[1];
          uVar32 = *(ulonglong *)(lVar26 + 0x210);
          uVar28 = *(ulonglong *)(lVar26 + 0x1f0);
          uVar12 = *(ulonglong *)(lVar26 + 0x208);
          uVar18 = *(ulonglong *)(lVar26 + 0x1e8);
          uVar19 = *(ulonglong *)(lVar26 + 0x200);
          uVar8 = *(ulonglong *)(lVar26 + 0x1e0);
          uVar34 = *(ulonglong *)(lVar26 + 0x1f8);
          uVar9 = *(ulonglong *)(lVar26 + 0x1d8);
          uVar27 = *(ulonglong *)(lVar26 + 0x378);
          uVar38 = *(ulonglong *)(lVar26 + 800);
          uVar5 = *(undefined8 *)(lVar26 + 0x298);
          uVar47 = *(undefined8 *)(lVar26 + 0x2a0);
          uVar21 = *puVar41;
          uVar49 = *(undefined8 *)(lVar40 + 0x10);
          uVar17 = *(undefined8 *)(lVar40 + 0x18);
          *(undefined8 *)(lVar26 + 0x2e0) = *(undefined8 *)(lVar40 + 0x20);
          *(undefined8 *)(lVar26 + 0x2d8) = uVar17;
          *(undefined8 *)(lVar26 + 0x2d0) = uVar49;
          *(undefined8 *)(lVar26 + 0x2c8) = uVar21;
          *(undefined8 *)(lVar26 + 0x2f0) = uVar47;
          *(undefined8 *)(lVar26 + 0x2e8) = uVar5;
          uVar6 = (undefined1)uVar35;
          *(undefined1 *)(lVar26 + 0x308) = uVar6;
          *(longlong *)(lVar26 + 0x300) = lStack_1d8;
          *(longlong *)(lVar26 + 0x2f8) = lVar44;
          *(undefined8 *)(lVar26 + 0x309) = 0;
          *(undefined8 *)(lVar26 + 0x310) = 0;
          fn_2600(lVar26 + 0x2c8);
          fn_2fe08__sol_memcpy(&plStack_100,&uStack_140,0x40);
          if (lVar46 == 0) {
            uStack_1b8 = 0;
          }
          uStack_20 = uVar33 ^ 0x6e9de2b30b19f9ea;
          uStack_5 = (char)lVar36;
          if (lVar46 == 0) {
            uStack_5 = 0;
          }
          uStack_18 = uVar38 ^ 0xd3198133b7c1776c;
          uVar27 = uVar27 ^ 0x504156a22548f8dd;
          uStack_c0 = uVar9 ^ 0xfb5ce87aae443c38;
          uStack_a0 = uVar34 ^ 0xfb5ce87aae443c38;
          uStack_b8 = uVar8 ^ 0x4a2178451bac3c7;
          uStack_98 = uVar19 ^ 0x4a2178451bac3c7;
          uStack_b0 = uVar18 ^ 0x4a1178751b9c3c6;
          uStack_90 = uVar12 ^ 0x4a1178751b9c3c6;
          uStack_a8 = uVar28 ^ 0x4a0178651b8c3c5;
          uStack_88 = uVar32 ^ 0x4a0178651b8c3c5;
          uStack_48 = uStack_d0;
          uStack_50 = uStack_d8;
          uStack_58 = uStack_e0;
          uStack_60 = uVar37;
          uStack_68 = (ulonglong)plVar2;
          uStack_70 = (ulonglong)plVar20;
          uStack_6 = uStack_1b8;
          uStack_7 = (undefined1)uVar13;
          lStack_28 = lStack_1d8;
          uStack_80 = uVar5;
          uStack_78 = uVar47;
          uStack_40 = uVar14;
          uStack_38 = uVar15;
          lStack_30 = lVar44;
          uStack_10 = uVar27;
          uStack_8 = uVar6;
          fn_1e20(&plStack_100);
          uStack_158 = 0x100;
          pplStack_160 = &plStack_100;
          fn_2de38(&pplStack_160,1);
          uVar32 = 0x1a;
        }
        else {
          uVar27 = (ulonglong)uStack_194;
        }
      }
      else if (plVar24 == (longlong *)0x0) {
        uVar32 = 0;
        uVar27 = 0xbadc0de;
      }
      else {
        if (*(ulonglong *)(lVar26 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lVar26 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lVar26 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lVar26 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lVar26 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lVar26 + 0x270);
          uStack_170 = *(ulonglong *)(lVar26 + 0x268);
          uStack_178 = *(ulonglong *)(lVar26 + 0x260);
          uStack_180 = *(ulonglong *)(lVar26 + 600);
        }
        uStack_148 = *(ulonglong *)(lVar26 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lVar26 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lVar26 + 0x200) ^ 0x4a2178451bac3c7;
        pplStack_160 = (longlong **)(*(ulonglong *)(lVar26 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lVar26 + 0x1f0) ^ 0x4a0178651b8c3c5;
        plStack_f0 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e8) ^ 0x4a1178751b9c3c6);
        plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e0) ^ 0x4a2178451bac3c7);
        plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 0x1d8) ^ 0xfb5ce87aae443c38);
        fn_cf18__sol_invoke_signed_c(&uStack_190,plStack_208,plVar24,plVar25);
        uVar32 = (ulonglong)uStack_190;
        if (uVar32 == 0x1a) goto LAB_ram_0000f388;
        uVar27 = (ulonglong)uStack_18c;
      }
    }
    else {
      uVar27 = (ulonglong)uStack_184;
    }
  }
  else {
LAB_ram_0000e050:
    uVar27 = (ulonglong)plStack_f8 & 0xffffffff;
    uVar32 = (ulonglong)plStack_100 >> 0x20;
  }
LAB_ram_0000e060:
  uVar39 = (undefined4)uVar27;
LAB_ram_0000e970:
  param_1[1] = uVar39;
  *param_1 = (int)uVar32;
  return;
}
