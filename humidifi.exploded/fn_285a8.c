/* Function: fn_285a8
 * Address:  0x286c8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_285a8 @ 0x286c8 ---- */

void fn_285a8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong unaff_R7;
  ulonglong uVar5;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_148;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_60 [32];
  ulonglong uStack_40;
  ulonglong uStack_38;
  longlong lStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uVar1 = uStack_10;
  uVar5 = uStack_18;
  if (uStack_198 < 1000000000000) {
    puVar2 = &DAT_ram_00031c6e;
    if (((((uStack_198 < 500000000000) && (puVar2 = &DAT_ram_00031c62, uStack_198 < 250000000000))
         && (puVar2 = &DAT_ram_00031c6a, uStack_198 < 100000000000)) &&
        ((puVar2 = &DAT_ram_00031c7a, uStack_198 < 25000000000 &&
         (puVar2 = &DAT_ram_00031c72, uStack_198 < 10000000000)))) &&
       ((puVar2 = &DAT_ram_00031c7e, uStack_198 < 1000000000 &&
        ((puVar2 = &DAT_ram_00031c76, uStack_198 < 100000000 &&
         (puVar2 = &DAT_ram_00031c66, uStack_198 < 25000000)))))) {
      puVar2 = &DAT_ram_00031c5e;
    }
  }
  else {
    uVar3 = uStack_198 / 1000000000000 - 1;
    if (uVar3 < 0x13) {
      param_2 = uVar3 * 4 + 4;
      puVar2 = *(undefined1 **)(&DAT_ram_00032a58 + uVar3 * 8);
    }
    else {
      puVar2 = &DAT_ram_00031f46;
      param_2 = 0x50;
    }
  }
  fn_281a8(puVar2,param_2);
  uVar3 = 0x6e9de2b30b19f1ea;
  if (3 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    uVar3 = 0x6e9de2b30b19f9ea;
  }
  *(ulonglong *)(unaff_R7 + 0x220) = *(ulonglong *)(unaff_R7 + 0x220) ^ 0xb957ed15dc877c26;
  *(ulonglong *)(unaff_R7 + 0x228) = *(ulonglong *)(unaff_R7 + 0x228) ^ 0x46a912eb237873d9;
  *(ulonglong *)(unaff_R7 + 0x250) = *(ulonglong *)(unaff_R7 + 0x250) ^ uVar3;
  fn_2328();
  fn_2930__sol_memcmp(uStack_128);
  fn_2798(uStack_190);
  *(ulonglong *)(unaff_R7 + 0x1a0) = *(ulonglong *)(unaff_R7 + 0x1a0) ^ 0xfb5ce87aae443c38;
  *(ulonglong *)(unaff_R7 + 0x1a8) = *(ulonglong *)(unaff_R7 + 0x1a8) ^ 0x4a2178451bac3c7;
  *(ulonglong *)(unaff_R7 + 0x1b0) = *(ulonglong *)(unaff_R7 + 0x1b0) ^ 0x4a1178751b9c3c6;
  *(ulonglong *)(unaff_R7 + 0x1b8) = *(ulonglong *)(unaff_R7 + 0x1b8) ^ 0x4a0178651b8c3c5;
  *(ulonglong *)(unaff_R7 + 0x180) = *(ulonglong *)(unaff_R7 + 0x180) ^ 0xfb5ce87aae443c38;
  *(ulonglong *)(unaff_R7 + 0x188) = *(ulonglong *)(unaff_R7 + 0x188) ^ 0x4a2178451bac3c7;
  *(ulonglong *)(unaff_R7 + 400) = *(ulonglong *)(unaff_R7 + 400) ^ 0x4a1178751b9c3c6;
  *(ulonglong *)(unaff_R7 + 0x198) = *(ulonglong *)(unaff_R7 + 0x198) ^ 0x4a0178651b8c3c5;
  if (5 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    *(ulonglong *)(unaff_R7 + 0x328) = *(ulonglong *)(unaff_R7 + 0x328) ^ 0x35f72d643d3464eb;
    *(ulonglong *)(unaff_R7 + 0x330) = *(ulonglong *)(unaff_R7 + 0x330) ^ 0x9578e14d1d0d9c4e;
  }
  uVar3 = uVar5 + 0x1000000000000;
  uVar5 = uVar1 + (uVar3 < uVar5);
  if ((longlong)((uVar1 ^ 0xffffffffffffffff) & (uVar1 ^ uVar5)) < 0) {
    *(undefined4 *)(puStack_100 + 1) = 0x4fb;
    goto LAB_ram_00027718;
  }
  if (lStack_130 != 0) {
    fn_0488(&lStack_20,*(undefined8 *)(unaff_R7 + 0x240),*(undefined8 *)(unaff_R7 + 0x248),
                     uVar3,uVar5);
    if (lStack_20 == 0) {
      *(undefined4 *)(puStack_100 + 1) = 0x522;
      goto LAB_ram_00027718;
    }
    fn_15e8__sol_log(&lStack_20,auStack_60,uStack_18,uStack_10);
    if (lStack_20 == 0) {
      *(undefined4 *)(puStack_100 + 1) = 0x527;
      goto LAB_ram_00027718;
    }
    *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
    *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
    if (uStack_18 != 0 || uStack_10 != 0) {
      if (0xffffffffffff < uStack_10) {
        *(undefined4 *)(puStack_100 + 1) = 0x531;
        goto LAB_ram_00027718;
      }
LAB_ram_00028aa8:
      uVar5 = uStack_18 >> 0x30 | uStack_10 << 0x10;
      goto LAB_ram_00028ac0;
    }
LAB_ram_00028a98:
    uVar5 = 0;
LAB_ram_00028ac0:
    puStack_100[5] = uStack_120;
    puStack_100[3] = uStack_148;
    puStack_100[1] = uStack_1a0;
    puStack_100[7] = uVar5;
    puStack_100[6] = uStack_118;
    puStack_100[4] = uStack_1a8;
    puStack_100[2] = uStack_f8;
    *(undefined4 *)puStack_100 = 0;
    return;
  }
  fn_0488(&lStack_20,uStack_108,uStack_110,*(undefined8 *)(unaff_R7 + 0x240),
                   *(undefined8 *)(unaff_R7 + 0x248));
  uVar4 = 0x504;
  if (lStack_20 != 0) {
    uStack_40 = uStack_18;
    uStack_38 = uStack_10;
    fn_15e8__sol_log(&lStack_20,&uStack_40,uVar3,uVar5);
    uVar4 = 0x509;
    if (lStack_20 == 1) {
      *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
      *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
      if (uStack_18 == 0 && uStack_10 == 0) goto LAB_ram_00028a98;
      uVar4 = 0x513;
      if (uStack_10 < 0x1000000000000) goto LAB_ram_00028aa8;
    }
  }
  *(undefined4 *)(puStack_100 + 1) = uVar4;
LAB_ram_00027718:
  *puStack_100 = 1;
  return;
}
