/* Function: fn_281a8
 * Address:  0x282c8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_281a8 @ 0x282c8 ---- */

void fn_281a8(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong unaff_R6;
  longlong unaff_R7;
  ulonglong unaff_R9;
  ulonglong uVar3;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
  
  fn_281a8();
  uVar1 = 0x6e9de2b30b19f1ea;
  if (3 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    uVar1 = 0x6e9de2b30b19f9ea;
  }
  *(ulonglong *)(unaff_R7 + 0x220) = *(ulonglong *)(unaff_R7 + 0x220) ^ 0xb957ed15dc877c26;
  *(ulonglong *)(unaff_R7 + 0x228) = *(ulonglong *)(unaff_R7 + 0x228) ^ 0x46a912eb237873d9;
  *(ulonglong *)(unaff_R7 + 0x250) = *(ulonglong *)(unaff_R7 + 0x250) ^ uVar1;
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
  uVar1 = unaff_R9 + 0x1000000000000;
  uVar3 = unaff_R6 + (uVar1 < unaff_R9);
  if ((longlong)((unaff_R6 ^ 0xffffffffffffffff) & (unaff_R6 ^ uVar3)) < 0) {
    *(undefined4 *)(puStack_100 + 1) = 0x4fb;
    goto LAB_ram_00027718;
  }
  if (lStack_130 != 0) {
    fn_0488(&lStack_20,*(undefined8 *)(unaff_R7 + 0x240),*(undefined8 *)(unaff_R7 + 0x248),
                     uVar1,uVar3);
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
      uVar1 = uStack_18 >> 0x30 | uStack_10 << 0x10;
      goto LAB_ram_00028ac0;
    }
LAB_ram_00028a98:
    uVar1 = 0;
LAB_ram_00028ac0:
    puStack_100[5] = uStack_120;
    puStack_100[3] = uStack_148;
    puStack_100[1] = uStack_1a0;
    puStack_100[7] = uVar1;
    puStack_100[6] = uStack_118;
    puStack_100[4] = uStack_1a8;
    puStack_100[2] = uStack_f8;
    *(undefined4 *)puStack_100 = 0;
    return;
  }
  fn_0488(&lStack_20,uStack_108,uStack_110,*(undefined8 *)(unaff_R7 + 0x240),
                   *(undefined8 *)(unaff_R7 + 0x248));
  uVar2 = 0x504;
  if (lStack_20 != 0) {
    uStack_40 = uStack_18;
    uStack_38 = uStack_10;
    fn_15e8__sol_log(&lStack_20,&uStack_40,uVar1,uVar3);
    uVar2 = 0x509;
    if (lStack_20 == 1) {
      *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
      *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
      if (uStack_18 == 0 && uStack_10 == 0) goto LAB_ram_00028a98;
      uVar2 = 0x513;
      if (uStack_10 < 0x1000000000000) goto LAB_ram_00028aa8;
    }
  }
  *(undefined4 *)(puStack_100 + 1) = uVar2;
LAB_ram_00027718:
  *puStack_100 = 1;
  return;
}
