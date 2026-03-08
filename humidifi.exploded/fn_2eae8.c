/* Function: fn_2eae8
 * Address:  0x2ec08
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2eae8 @ 0x2ec08 ---- */

ulonglong fn_2eae8(longlong *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uStack_10;
  int iStack_8;
  
  if ((*param_1 != 0) || ((param_1[2] & 1U) != 0)) {
    if ((param_1[2] & 1U) != 0) {
      pbVar7 = (byte *)0x0;
      pbVar3 = param_2;
      if (param_1[3] != 0) {
        uVar8 = 0;
        pbVar2 = param_2;
        do {
          if (pbVar2 == param_2 + (longlong)param_3) goto LAB_ram_0002ee50;
          pbVar3 = pbVar2 + 1;
          bVar1 = *pbVar2;
          if ((((char)bVar1 < '\0') && (pbVar3 = pbVar2 + 2, 0xdf < bVar1)) &&
             (pbVar3 = pbVar2 + 3, 0xef < bVar1)) {
            pbVar3 = pbVar2 + 4;
          }
          uVar8 = uVar8 + 1;
          pbVar7 = pbVar3 + ((longlong)pbVar7 - (longlong)pbVar2);
          pbVar2 = pbVar3;
        } while (uVar8 < (ulonglong)param_1[3]);
      }
      if (pbVar3 != param_2 + (longlong)param_3) {
        if (pbVar7 == (byte *)0x0) {
LAB_ram_0002ee28:
          pbVar3 = param_2;
        }
        else if (pbVar7 < param_3) {
          pbVar3 = (byte *)0x0;
          if (-0x41 < (char)param_2[(longlong)pbVar7]) goto LAB_ram_0002ee28;
        }
        else {
          pbVar3 = (byte *)0x0;
          if (pbVar7 == param_3) goto LAB_ram_0002ee28;
        }
        if (pbVar3 != (byte *)0x0) {
          param_3 = pbVar7;
          param_2 = pbVar3;
        }
      }
    }
LAB_ram_0002ee50:
    if (*param_1 != 0) {
      uVar8 = param_1[1];
      if (param_3 < (byte *)0x20) {
        uVar4 = 0;
        pbVar3 = param_2;
        for (pbVar7 = param_3; pbVar7 != (byte *)0x0; pbVar7 = pbVar7 + -1) {
          uVar4 = uVar4 + (-0x41 < (char)*pbVar3);
          pbVar3 = pbVar3 + 1;
        }
      }
      else {
        uVar4 = fn_2f330(param_2,param_3);
      }
      if (uVar4 < uVar8) {
        fn_2ef60(&uStack_10,param_1,uVar8 - uVar4,0);
        uVar8 = 1;
        if (iStack_8 != 0x110000) {
          lVar6 = param_1[4];
          lVar9 = param_1[5];
          lVar5 = func_0x00000000(lVar6,param_2,param_3,*(undefined8 *)(lVar9 + 0x18));
          if (lVar5 == 0) {
            uVar8 = 0;
            do {
              uVar4 = uStack_10;
              if (uStack_10 == uVar8) break;
              lVar5 = func_0x00000000(lVar6,iStack_8,*(undefined8 *)(lVar9 + 0x20));
              uVar4 = uVar8;
              uVar8 = uVar8 + 1;
            } while (lVar5 == 0);
            uVar8 = 1;
            if (uStack_10 <= uVar4) {
              uVar8 = 0;
            }
          }
        }
        goto LAB_ram_0002f038;
      }
    }
  }
  uVar8 = func_0x00000000(param_1[4],param_2,param_3,*(undefined8 *)(param_1[5] + 0x18));
LAB_ram_0002f038:
  return uVar8 & 1;
}
