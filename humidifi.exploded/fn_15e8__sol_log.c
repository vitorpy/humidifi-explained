/* Function: fn_15e8__sol_log
 * Address:  0x1708
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_15e8__sol_log @ 0x1708 ---- */

void fn_15e8__sol_log(undefined8 *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined8 uStack_8;
  
  if (param_3 == 0 && param_4 == 0) {
    uVar3 = 0;
    goto LAB_ram_00001ae8;
  }
  if (param_3 == 0) {
    uVar5 = *param_2;
  }
  else {
    uVar5 = *param_2;
  }
  uStack_98 = param_4;
  lStack_a0 = param_3;
  if ((longlong)param_4 < 0) {
    lStack_a0 = -param_3;
    uStack_98 = -(param_4 + (param_3 != 0));
  }
  uVar7 = param_2[1];
  uVar1 = -uVar5;
  if (-1 < (longlong)uVar7) {
    uVar1 = uVar5;
  }
  lStack_20 = uVar1 << 0x30;
  uVar2 = uVar7;
  if ((longlong)uVar7 < 0) {
    uVar2 = -(uVar7 + (uVar5 != 0));
  }
  uStack_10 = uVar2 >> 0x10;
  uStack_18 = uVar2 << 0x30 | uVar1 >> 0x10;
  uStack_8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  fn_28b70__sol_log(&lStack_60,&lStack_20,&lStack_a0);
  if ((lStack_50 == 0) && (lStack_48 == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar3 = 0;
  if (bVar4) goto LAB_ram_00001ae8;
  if ((longlong)(uVar7 ^ param_4) < 0) {
    bVar6 = true;
    bVar4 = true;
    if (lStack_60 == 0) {
      bVar4 = false;
      if (uStack_58 < 0x8000000000000001) goto LAB_ram_00001a58;
LAB_ram_00001a18:
      if (uStack_58 == 0x8000000000000000) goto LAB_ram_00001a20;
LAB_ram_00001a68:
      if (bVar6) goto LAB_ram_00001ae8;
    }
    else {
      if (0x8000000000000000 < uStack_58) goto LAB_ram_00001a18;
LAB_ram_00001a58:
      bVar6 = false;
      if (uStack_58 != 0x8000000000000000) goto LAB_ram_00001a68;
LAB_ram_00001a20:
      if (bVar4) goto LAB_ram_00001ae8;
    }
    lStack_60 = -lStack_60;
    uVar5 = uStack_58 ^ 0xffffffffffffffff;
    if (lStack_60 == 0) {
      uVar5 = -uStack_58;
    }
  }
  else {
    uVar5 = uStack_58;
    if ((longlong)uStack_58 < 0) goto LAB_ram_00001ae8;
  }
  param_1[1] = lStack_60;
  param_1[2] = uVar5;
  uVar3 = 1;
LAB_ram_00001ae8:
  *param_1 = uVar3;
  return;
}
