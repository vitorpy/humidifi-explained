/* Function: fn_12770__sol_sha256
 * Address:  0x12890
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_12770__sol_sha256 @ 0x12890 ---- */

undefined8 fn_12770__sol_sha256(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  undefined8 auStack_30 [4];
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  uStack_80 = 0x2a9f6e5d1c8b4a2f;
  uStack_88 = 0x9e6d5c1b8a4f2e9d;
  uStack_90 = 0x6c5b1a8f4e2d9c6b;
  uStack_98 = 0x5a1f8e4d2c9b3a7f;
  uStack_78 = *param_1;
  uStack_70 = param_1[1];
  uStack_68 = param_1[2];
  uStack_60 = param_1[3];
  uStack_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_48 = param_2[2];
  uStack_40 = param_2[3];
  uStack_38 = param_3 >> 7;
  puStack_10 = &uStack_98;
  uStack_8 = 0x68;
  fn_128a8(&puStack_10,1,auStack_30);
  return auStack_30[0];
}
