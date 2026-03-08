/* Function: fn_19d8
 * Address:  0x1af8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_19d8 @ 0x1af8 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_19d8(undefined8 *param_1,longlong *param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lStack_38;
  ulonglong uStack_30;
  char cStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  longlong lStack_10;
  ulonglong uStack_8;
  
  if (param_3 == 0 && param_4 == 0) {
    uVar4 = 0;
    goto LAB_ram_00001de8;
  }
  uVar5 = param_2[1];
  lVar1 = *param_2;
  lStack_20 = -lVar1;
  if (-1 < (longlong)uVar5) {
    lStack_20 = lVar1;
  }
  uVar4 = 0;
  uStack_18 = uVar5;
  if ((longlong)uVar5 < 0) {
    uStack_18 = -(uVar5 + (lVar1 != 0));
  }
  lStack_10 = param_3;
  if ((longlong)param_4 < 0) {
    lStack_10 = -param_3;
  }
  uStack_8 = param_4;
  if ((longlong)param_4 < 0) {
    uStack_8 = -(param_4 + (param_3 != 0));
  }
  fn_1178(&lStack_38,&lStack_20,&lStack_10,0x30);
  if (cStack_28 == '\x01') goto LAB_ram_00001de8;
  if ((longlong)(uVar5 ^ param_4) < 0) {
    bVar3 = true;
    bVar2 = true;
    if (lStack_38 == 0) {
      bVar2 = false;
      if (0x8000000000000000 < uStack_30) goto LAB_ram_00001d18;
LAB_ram_00001d58:
      bVar3 = false;
      if (uStack_30 == 0x8000000000000000) goto LAB_ram_00001d20;
LAB_ram_00001d68:
      if (bVar3) goto LAB_ram_00001de8;
    }
    else {
      if (uStack_30 < 0x8000000000000001) goto LAB_ram_00001d58;
LAB_ram_00001d18:
      if (uStack_30 != 0x8000000000000000) goto LAB_ram_00001d68;
LAB_ram_00001d20:
      if (bVar2) goto LAB_ram_00001de8;
    }
    lStack_38 = -lStack_38;
    uVar5 = uStack_30 ^ 0xffffffffffffffff;
    if (lStack_38 == 0) {
      uVar5 = -uStack_30;
    }
  }
  else {
    uVar5 = uStack_30;
    if ((longlong)uStack_30 < 0) goto LAB_ram_00001de8;
  }
  param_1[1] = lStack_38;
  param_1[2] = uVar5;
  uVar4 = 1;
LAB_ram_00001de8:
  *param_1 = uVar4;
  return;
}
