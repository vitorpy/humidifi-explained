/* Function: fn_2c770
 * Address:  0x2c890
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2c770 @ 0x2c890 ---- */

void fn_2c770(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lStack_178;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  longlong alStack_100 [2];
  ulonglong uStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  longlong alStack_d0 [2];
  longlong lStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  longlong alStack_a0 [2];
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  longlong alStack_70 [2];
  longlong lStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  longlong lStack_10;
  undefined8 uStack_8;
  
  uStack_128 = *(ulonglong *)(param_5 + -0xff8);
  uVar9 = *(ulonglong *)(param_5 + -0xff0);
  if (uVar9 == 0) {
    uVar1 = uStack_128 | uStack_128 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = (uVar1 | uVar1 >> 0x20) ^ 0xffffffffffffffff;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
    uVar1 = ((uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  else {
    uVar1 = uVar9 | uVar9 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = (uVar1 | uVar1 >> 0x20) ^ 0xffffffffffffffff;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  uVar10 = *(ulonglong *)(param_5 + -0x1000);
  uVar12 = (undefined4)uVar1;
  if (uVar1 == 0) {
    lStack_10 = 0;
    uStack_8 = 0;
    uStack_148 = param_4;
    uStack_140 = param_3;
    uStack_138 = param_2;
  }
  else {
    fn_302f8(&lStack_10,param_4,uVar10,-uVar1 & 0x7f);
    fn_30108(&uStack_20,param_4,uVar10,uVar12);
    fn_302f8(&uStack_30,param_2,param_3,-uVar1 & 0x7f);
    fn_30108(&uStack_40,param_2,param_3,uVar12);
    fn_30108(&uStack_50,uStack_128,uVar9,uVar12);
    uVar10 = uStack_28 | uStack_18;
    uStack_148 = uStack_30 | uStack_20;
    uStack_128 = uStack_50;
    uStack_140 = uStack_38;
    uStack_138 = uStack_40;
    uVar9 = uStack_48;
  }
  fn_31788(&lStack_60,lStack_10,uStack_8,uVar9,0);
  fn_30150(alStack_70,lStack_60,uStack_58,uVar9,0);
  fn_30150(&uStack_80,lStack_60,uStack_58,uStack_128,0);
  uVar1 = lStack_10 - alStack_70[0];
  bVar5 = true;
  bVar3 = true;
  if (uVar10 < uStack_80) {
    bVar3 = false;
    if (uVar1 < uStack_78) goto LAB_ram_0002cfb8;
LAB_ram_0002ce38:
    if (uVar1 == uStack_78) goto LAB_ram_0002ce40;
LAB_ram_0002cfc8:
    if (bVar5) goto LAB_ram_0002cfe0;
LAB_ram_0002ce50:
    uVar8 = uVar10 + uStack_128;
    uVar7 = uVar1 + uVar9 + (ulonglong)(uVar8 < uVar10);
    uVar6 = 1;
    if (uVar8 < uStack_80) {
      uVar6 = 0;
      if (uVar7 < uStack_78) goto LAB_ram_0002da68;
LAB_ram_0002cec8:
      uVar14 = 1;
      if (uVar7 == uStack_78) goto LAB_ram_0002ced0;
LAB_ram_0002da78:
      uVar6 = uVar14;
      if (uVar1 <= uVar7) goto LAB_ram_0002da90;
LAB_ram_0002cee0:
      uVar14 = 1;
      if (uVar7 == uVar1) goto LAB_ram_0002cee8;
LAB_ram_0002daa0:
      uVar6 = uVar14 | uVar6;
    }
    else {
      if (uStack_78 <= uVar7) goto LAB_ram_0002cec8;
LAB_ram_0002da68:
      uVar14 = 0;
      if (uVar7 != uStack_78) goto LAB_ram_0002da78;
LAB_ram_0002ced0:
      if (uVar7 < uVar1) goto LAB_ram_0002cee0;
LAB_ram_0002da90:
      uVar14 = 0;
      if (uVar7 != uVar1) goto LAB_ram_0002daa0;
LAB_ram_0002cee8:
      uVar6 = uVar8 < uVar10 | uVar6;
    }
    lVar11 = -1;
    if (uVar6 == 0) {
      lVar11 = -2;
    }
    uVar1 = uVar9;
    if ((uVar6 == 0) && (uVar8 = uStack_128 + uVar8, uVar8 < uStack_128)) {
      lVar4 = 1;
    }
    else {
      lVar4 = 0;
      if (uVar6 != 0) {
        uVar1 = 0;
      }
    }
    lVar4 = (uVar1 + uVar7 + lVar4) - uStack_78;
    lVar11 = lVar11 + lStack_60;
    uVar10 = uVar8;
  }
  else {
    if (uStack_78 <= uVar1) goto LAB_ram_0002ce38;
LAB_ram_0002cfb8:
    bVar5 = false;
    if (uVar1 != uStack_78) goto LAB_ram_0002cfc8;
LAB_ram_0002ce40:
    if (!bVar3) goto LAB_ram_0002ce50;
LAB_ram_0002cfe0:
    lVar4 = uVar1 - uStack_78;
    lVar11 = lStack_60;
  }
  bVar3 = true;
  fn_31788(&uStack_90,uVar10 - uStack_80,lVar4 - (ulonglong)(uVar10 < uStack_80),uVar9,0);
  fn_30150(alStack_a0,uStack_90,lStack_88,uVar9,0);
  fn_30150(&uStack_b0,uStack_90,lStack_88,uStack_128,0);
  uVar1 = (uVar10 - uStack_80) - alStack_a0[0];
  bVar5 = true;
  if (uStack_148 < uStack_b0) {
    bVar5 = false;
    if (uVar1 < uStack_a8) goto LAB_ram_0002d310;
LAB_ram_0002d128:
    if (uVar1 == uStack_a8) goto LAB_ram_0002d130;
LAB_ram_0002d328:
    if (bVar3) goto LAB_ram_0002d340;
LAB_ram_0002d140:
    uVar7 = uStack_148 + uStack_128;
    uVar6 = uVar1 + uVar9 + (ulonglong)(uVar7 < uStack_148);
    uVar10 = 1;
    if (uVar7 < uStack_b0) {
      uVar10 = 0;
      if (uVar6 < uStack_a8) goto LAB_ram_0002db20;
LAB_ram_0002d1c0:
      uVar8 = 1;
      if (uVar6 == uStack_a8) goto LAB_ram_0002d1c8;
LAB_ram_0002db30:
      uVar10 = uVar8;
      if (uVar1 <= uVar6) goto LAB_ram_0002db48;
LAB_ram_0002d1d8:
      uVar8 = 1;
      if (uVar6 == uVar1) goto LAB_ram_0002d1e0;
LAB_ram_0002db58:
      uVar10 = uVar8 | uVar10;
    }
    else {
      if (uStack_a8 <= uVar6) goto LAB_ram_0002d1c0;
LAB_ram_0002db20:
      uVar8 = 0;
      if (uVar6 != uStack_a8) goto LAB_ram_0002db30;
LAB_ram_0002d1c8:
      if (uVar6 < uVar1) goto LAB_ram_0002d1d8;
LAB_ram_0002db48:
      uVar8 = 0;
      if (uVar6 != uVar1) goto LAB_ram_0002db58;
LAB_ram_0002d1e0:
      uVar10 = uVar7 < uStack_148 | uVar10;
    }
    uVar8 = 0xffffffffffffffff;
    if (uVar10 == 0) {
      uVar8 = 0xfffffffffffffffe;
    }
    uVar1 = uVar8 + uStack_90;
    uVar14 = 0;
    if (uVar10 == 0) {
      uVar14 = uStack_128;
    }
    uStack_148 = uVar14 + uVar7;
    uVar7 = 0;
    if (uVar10 == 0) {
      uVar7 = uVar9;
    }
    lVar2 = lStack_88 + (ulonglong)(uVar1 < uVar8) + -1;
    lVar4 = (uVar7 + uVar6 + (ulonglong)(uStack_148 < uVar14)) - uStack_a8;
  }
  else {
    if (uStack_a8 <= uVar1) goto LAB_ram_0002d128;
LAB_ram_0002d310:
    bVar3 = false;
    if (uVar1 != uStack_a8) goto LAB_ram_0002d328;
LAB_ram_0002d130:
    if (!bVar5) goto LAB_ram_0002d140;
LAB_ram_0002d340:
    lVar4 = uVar1 - uStack_a8;
    lVar2 = lStack_88;
    uVar1 = uStack_90;
  }
  bVar3 = true;
  fn_31788(&lStack_c0,uStack_148 - uStack_b0,lVar4 - (ulonglong)(uStack_148 < uStack_b0),
                   uVar9,0);
  fn_30150(alStack_d0,lStack_c0,uStack_b8,uVar9,0);
  fn_30150(&uStack_e0,lStack_c0,uStack_b8,uStack_128,0);
  uVar10 = (uStack_148 - uStack_b0) - alStack_d0[0];
  bVar5 = true;
  if (uStack_140 < uStack_e0) {
    bVar5 = false;
    if (uVar10 < uStack_d8) goto LAB_ram_0002d618;
LAB_ram_0002d478:
    if (uVar10 == uStack_d8) goto LAB_ram_0002d480;
LAB_ram_0002d630:
    if (bVar3) goto LAB_ram_0002d648;
LAB_ram_0002d490:
    uVar8 = uStack_140 + uStack_128;
    uVar7 = uVar10 + uVar9 + (ulonglong)(uVar8 < uStack_140);
    uVar6 = 1;
    if (uVar8 < uStack_e0) {
      uVar6 = 0;
      if (uVar7 < uStack_d8) goto LAB_ram_0002db98;
LAB_ram_0002d508:
      uVar14 = 1;
      if (uVar7 == uStack_d8) goto LAB_ram_0002d510;
LAB_ram_0002dba8:
      uVar6 = uVar14;
      if (uVar10 <= uVar7) goto LAB_ram_0002dbc0;
LAB_ram_0002d520:
      uVar14 = 1;
      if (uVar7 == uVar10) goto LAB_ram_0002d528;
LAB_ram_0002dbd0:
      uVar6 = uVar14 | uVar6;
    }
    else {
      if (uStack_d8 <= uVar7) goto LAB_ram_0002d508;
LAB_ram_0002db98:
      uVar14 = 0;
      if (uVar7 != uStack_d8) goto LAB_ram_0002dba8;
LAB_ram_0002d510:
      if (uVar7 < uVar10) goto LAB_ram_0002d520;
LAB_ram_0002dbc0:
      uVar14 = 0;
      if (uVar7 != uVar10) goto LAB_ram_0002dbd0;
LAB_ram_0002d528:
      uVar6 = uVar8 < uStack_140 | uVar6;
    }
    lVar13 = -1;
    if (uVar6 == 0) {
      lVar13 = -2;
    }
    lVar13 = lVar13 + lStack_c0;
    uVar10 = 0;
    if (uVar6 == 0) {
      uVar10 = uStack_128;
    }
    uStack_140 = uVar10 + uVar8;
    uVar8 = 0;
    if (uVar6 == 0) {
      uVar8 = uVar9;
    }
    lVar4 = (uVar8 + uVar7 + (ulonglong)(uStack_140 < uVar10)) - uStack_d8;
  }
  else {
    if (uStack_d8 <= uVar10) goto LAB_ram_0002d478;
LAB_ram_0002d618:
    bVar3 = false;
    if (uVar10 != uStack_d8) goto LAB_ram_0002d630;
LAB_ram_0002d480:
    if (!bVar5) goto LAB_ram_0002d490;
LAB_ram_0002d648:
    lVar4 = uVar10 - uStack_d8;
    lVar13 = lStack_c0;
  }
  bVar3 = true;
  fn_31788(&uStack_f0,uStack_140 - uStack_e0,lVar4 - (ulonglong)(uStack_140 < uStack_e0),
                   uVar9,0);
  fn_30150(alStack_100,uStack_f0,lStack_e8,uVar9,0);
  fn_30150(&uStack_110,uStack_f0,lStack_e8,uStack_128,0);
  uVar10 = (uStack_140 - uStack_e0) - alStack_100[0];
  bVar5 = true;
  if (uStack_138 < uStack_110) {
    bVar5 = false;
    if (uVar10 < uStack_108) goto LAB_ram_0002d930;
LAB_ram_0002d780:
    if (uVar10 == uStack_108) goto LAB_ram_0002d788;
LAB_ram_0002d948:
    if (bVar3) goto code_r0x0002d980;
  }
  else {
    if (uStack_108 <= uVar10) goto LAB_ram_0002d780;
LAB_ram_0002d930:
    bVar3 = false;
    if (uVar10 != uStack_108) goto LAB_ram_0002d948;
LAB_ram_0002d788:
    if (bVar5) goto code_r0x0002d980;
  }
  uVar7 = uStack_138 + uStack_128;
  lStack_178 = 1;
  uVar8 = uVar10 + uVar9 + (ulonglong)(uVar7 < uStack_138);
  uVar6 = 1;
  if (uVar7 < uStack_110) {
    uVar6 = 0;
    if (uVar8 < uStack_108) goto LAB_ram_0002dc10;
LAB_ram_0002d828:
    uVar14 = 1;
    if (uVar8 == uStack_108) goto LAB_ram_0002d830;
LAB_ram_0002dc20:
    uVar6 = uVar14;
    if (uVar10 <= uVar8) goto LAB_ram_0002dc38;
LAB_ram_0002d840:
    uVar14 = 1;
    if (uVar8 == uVar10) goto LAB_ram_0002d848;
LAB_ram_0002dc48:
    uVar6 = uVar14 | uVar6;
    if (uVar6 == 0) goto LAB_ram_0002dc68;
LAB_ram_0002d860:
    uStack_f0 = uStack_f0 - 1;
    if (uStack_f0 != 0xffffffffffffffff) goto LAB_ram_0002d880;
LAB_ram_0002dc90:
    lVar4 = 0;
    if (uVar6 == 0) goto LAB_ram_0002dca8;
LAB_ram_0002dcd0:
    lStack_178 = 0;
    uStack_138 = uVar7;
  }
  else {
    if (uStack_108 <= uVar8) goto LAB_ram_0002d828;
LAB_ram_0002dc10:
    uVar14 = 0;
    if (uVar8 != uStack_108) goto LAB_ram_0002dc20;
LAB_ram_0002d830:
    if (uVar8 < uVar10) goto LAB_ram_0002d840;
LAB_ram_0002dc38:
    uVar14 = 0;
    if (uVar8 != uVar10) goto LAB_ram_0002dc48;
LAB_ram_0002d848:
    uVar6 = uVar7 < uStack_138 | uVar6;
    if (uVar6 != 0) goto LAB_ram_0002d860;
LAB_ram_0002dc68:
    uStack_f0 = uStack_f0 - 2;
    if (0xfffffffffffffffd < uStack_f0) goto LAB_ram_0002dc90;
LAB_ram_0002d880:
    lVar4 = 1;
    if (uVar6 != 0) goto LAB_ram_0002dcd0;
LAB_ram_0002dca8:
    uVar7 = uStack_128 + uVar7;
    uStack_138 = uVar7;
    if (uStack_128 <= uVar7) goto LAB_ram_0002dcd0;
  }
  uVar10 = 0;
  if (uVar6 == 0) {
    uVar10 = uVar9;
  }
  uVar10 = uVar10 + uVar8 + lStack_178;
  lStack_e8 = lStack_e8 + lVar4 + -1;
code_r0x0002d980:
  fn_302f8(&uStack_120,uStack_138 - uStack_110,
                   (uVar10 - uStack_108) - (ulonglong)(uStack_138 < uStack_110),uVar12);
  param_1[2] = uVar1;
  *param_1 = uStack_f0;
  param_1[3] = lVar2 + lVar11;
  param_1[1] = lStack_e8 + lVar13;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  return;
}
