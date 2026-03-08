/* Function: fn_2e510
 * Address:  0x2e630
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2e510 @ 0x2e630 ---- */

ulonglong fn_2e510(longlong *param_1,longlong param_2,char *param_3,ulonglong param_4,
                          longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uStack_20;
  int iStack_18;
  ulonglong uStack_10;
  int iStack_8;
  
  uVar11 = *(ulonglong *)(param_5 + -0xff8);
  if (param_2 == 0) {
    uVar6 = 0x2d;
    uVar9 = *(uint *)((longlong)param_1 + 0x34);
LAB_ram_0002e698:
    uVar12 = uVar11 + 1;
  }
  else {
    uVar6 = 0x110000;
    uVar9 = *(uint *)((longlong)param_1 + 0x34);
    uVar12 = uVar11;
    if ((uVar9 & 1) != 0) {
      uVar6 = 0x2b;
      goto LAB_ram_0002e698;
    }
  }
  uVar2 = *(undefined8 *)(param_5 + -0x1000);
  if ((uVar9 & 4) == 0) {
    param_3 = (char *)0x0;
  }
  else {
    if (param_4 < 0x20) {
      lVar1 = 0;
      pcVar3 = param_3;
      for (uVar13 = param_4; uVar13 != 0; uVar13 = uVar13 - 1) {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar3);
        pcVar3 = pcVar3 + 1;
      }
    }
    else {
      lVar1 = fn_2f330(param_3,param_4);
    }
    uVar12 = lVar1 + uVar12;
  }
  if ((*param_1 == 0) || (uVar13 = param_1[1], uVar13 <= uVar12)) {
    lVar1 = fn_2ea28(param_1);
    uVar10 = 1;
    if (lVar1 == 0) {
      uVar10 = func_0x00000000(param_1[4],uVar2,uVar11,*(undefined8 *)(param_1[5] + 0x18));
    }
    goto LAB_ram_0002e980;
  }
  if ((uVar9 & 8) == 0) {
    uVar10 = 1;
    fn_2ef60(&uStack_20,param_1,uVar13 - uVar12,1);
    if ((iStack_18 == 0x110000) ||
       (lVar1 = fn_2ea28(param_1,uVar6,param_3,param_4), lVar1 != 0)) goto LAB_ram_0002e980;
    lVar4 = param_1[4];
    lVar8 = param_1[5];
    lVar1 = func_0x00000000(lVar4,uVar2,uVar11,*(undefined8 *)(lVar8 + 0x18));
    if (lVar1 != 0) goto LAB_ram_0002e980;
    uVar11 = 0;
    do {
      uVar12 = uStack_20;
      if (uStack_20 == uVar11) break;
      lVar1 = func_0x00000000(lVar4,iStack_18,*(undefined8 *)(lVar8 + 0x20));
      uVar12 = uVar11;
      uVar11 = uVar11 + 1;
    } while (lVar1 == 0);
    uVar10 = 1;
    if (uVar12 < uStack_20) goto LAB_ram_0002e980;
  }
  else {
    lVar1 = param_1[6];
    *(undefined4 *)(param_1 + 6) = 0x30;
    lVar4 = param_1[7];
    *(undefined1 *)(param_1 + 7) = 1;
    lVar8 = fn_2ea28(param_1);
    uVar10 = 1;
    if ((lVar8 != 0) ||
       (fn_2ef60(&uStack_10,param_1,uVar13 - uVar12,1), iStack_8 == 0x110000))
    goto LAB_ram_0002e980;
    lVar5 = param_1[4];
    lVar7 = param_1[5];
    lVar8 = func_0x00000000(lVar5,uVar2,uVar11,*(undefined8 *)(lVar7 + 0x18));
    if (lVar8 != 0) goto LAB_ram_0002e980;
    uVar11 = 0;
    do {
      uVar12 = uVar11;
      if (uStack_10 == uVar12) goto LAB_ram_0002eaf0;
      lVar8 = func_0x00000000(lVar5,iStack_8,*(undefined8 *)(lVar7 + 0x20));
      uVar11 = uVar12 + 1;
    } while (lVar8 == 0);
    if (uVar12 < uStack_10) goto LAB_ram_0002e980;
LAB_ram_0002eaf0:
    *(char *)(param_1 + 7) = (char)lVar4;
    *(int *)(param_1 + 6) = (int)lVar1;
  }
  uVar10 = 0;
LAB_ram_0002e980:
  return uVar10 & 1;
}
