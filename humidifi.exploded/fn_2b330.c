/* Function: fn_2b330
 * Address:  0x2b450
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2b330 @ 0x2b450 ---- */

void fn_2b330(undefined8 *param_1,longlong param_2,ulonglong *param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uStack_18;
  longlong lStack_10;
  
  if (*(char *)(param_2 + 8) != '\0') {
    uVar6 = 0;
    fn_2c1e8(&uStack_18,(ulonglong)*(ushort *)(param_2 + 10) << 0x30,0,0x3e8000000000000);
    goto LAB_ram_0002b678;
  }
  uVar6 = 1;
  if ((param_4 == 0) || (*param_3 == 0)) {
LAB_ram_0002b668:
    uStack_18 = 0;
    lStack_10 = 0;
    goto LAB_ram_0002b678;
  }
  if (*(ulonglong *)(param_2 + 0x30) == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0x40) / 0x34bc0;
    if (0x16c < uVar3) {
      uVar3 = 0x16d;
    }
    uVar4 = 1;
    if (0x34bbf < *(ulonglong *)(param_2 + 0x40)) {
      uVar4 = uVar3;
    }
    uVar4 = uVar4 * (*(ulonglong *)(param_2 + 0x30) / 1000000);
  }
  param_4 = param_4 << 4;
  do {
    puVar5 = param_3;
    if (param_4 == 0) goto LAB_ram_0002b668;
    param_4 = param_4 + -0x10;
    param_3 = puVar5 + 2;
  } while (uVar4 < *puVar5);
  fn_2c1e8(&uStack_18,puVar5[1] << 0x30,puVar5[1] >> 0x10,0x4240000000000000);
  uVar6 = 1;
  bVar2 = true;
  if (uStack_18 < 0x800000000000) {
    if (lStack_10 < 0) goto LAB_ram_0002b648;
LAB_ram_0002b6b8:
    bVar1 = false;
  }
  else {
    bVar2 = false;
    if (-1 < lStack_10) goto LAB_ram_0002b6b8;
LAB_ram_0002b648:
    bVar1 = true;
  }
  if (lStack_10 == 0) {
    bVar1 = bVar2;
  }
  if (!bVar1) {
    lStack_10 = 0;
    uStack_18 = 0x800000000000;
  }
LAB_ram_0002b678:
  param_1[1] = uStack_18;
  *param_1 = uVar6;
  param_1[2] = lStack_10;
  return;
}
