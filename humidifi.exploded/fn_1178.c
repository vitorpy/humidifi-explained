/* Function: fn_1178
 * Address:  0x1298
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1178 @ 0x1298 ---- */

void fn_1178(longlong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong alStack_20 [4];
  
  uStack_98 = param_3[1];
  uStack_a0 = *param_3;
  uVar4 = param_2[1];
  uVar5 = *param_2;
  uVar2 = param_4 & 0xffffffff;
  alStack_20[3] = 0;
  alStack_20[2] = 0;
  alStack_20[1] = 0;
  alStack_20[0] = 0;
  if (uVar2 < 0x100) {
    uVar6 = param_4 & 0x3f;
    uVar1 = uVar2 >> 6;
    alStack_20[uVar1] = uVar5 << uVar6;
    if (uVar2 < 0xc0) {
      alStack_20[uVar1 + 1] = uVar4 << uVar6;
      if (((param_4 & 0xffffffff) < 0x80) &&
         (alStack_20[uVar1 + 2] = 0, (param_4 & 0xffffffff) < 0x40)) {
        alStack_20[3] = 0;
      }
      if (uVar6 != 0) {
        alStack_20[uVar1 + 1] = alStack_20[uVar1 + 1] + (uVar5 >> (-uVar2 & 0x3f));
        if ((param_4 & 0xffffffff) < 0x80) {
          alStack_20[uVar1 + 2] = alStack_20[uVar1 + 2] + (uVar4 >> (-uVar2 & 0x3f));
        }
      }
    }
  }
  uStack_88 = 0;
  uStack_90 = 0;
  fn_28b70__sol_log(&puStack_80,alStack_20,&uStack_a0);
  lStack_38 = lStack_68;
  lStack_40 = lStack_70;
  uStack_30 = 0;
  uStack_28 = 0;
  if ((lStack_70 == 0) && (lStack_68 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (((((lStack_60 != 0) || (lStack_58 != 0)) || (lStack_50 != 0)) || (lStack_48 != 0)) &&
     ((puStack_80 = puStack_80 + 1, puStack_80 == (undefined *)0x0 &&
      (lStack_78 = lStack_78 + 1, lStack_78 == 0)))) {
    puStack_80 = &DAT_ram_00032a48;
    lStack_60 = 0;
    lStack_78 = 1;
    lStack_68 = 0;
    lStack_70 = 8;
                    /* WARNING: Subroutine does not return */
    fn_2de88__custom_panic(&puStack_80,&DAT_ram_00032a30);
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[1] = lStack_78;
  *param_1 = (longlong)puStack_80;
  return;
}
