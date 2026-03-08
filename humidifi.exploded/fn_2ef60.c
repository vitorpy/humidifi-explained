/* Function: fn_2ef60
 * Address:  0x2f080
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2ef60 @ 0x2f080 ---- */

void fn_2ef60(ulonglong *param_1,longlong param_2,ulonglong param_3,char param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uStack_10;
  
  bVar1 = *(byte *)(param_2 + 0x38);
  uStack_10 = param_3;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar6 = 0;
      goto LAB_ram_0002f118;
    }
  }
  else {
    if (bVar1 == 2) {
      uVar6 = param_3 >> 1;
      uStack_10 = param_3 + 1 >> 1;
      goto LAB_ram_0002f118;
    }
    if (param_4 == '\0') {
      uVar6 = 0;
      goto LAB_ram_0002f118;
    }
  }
  uStack_10 = 0;
  uVar6 = param_3;
LAB_ram_0002f118:
  lVar7 = uVar6 + 1;
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  do {
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) goto LAB_ram_0002f178;
    lVar2 = func_0x00000000(uVar5,uVar4,*(undefined8 *)(lVar3 + 0x20));
  } while (lVar2 == 0);
  uVar4 = 0x110000;
LAB_ram_0002f178:
  *(undefined4 *)(param_1 + 1) = uVar4;
  *param_1 = uStack_10;
  return;
}
