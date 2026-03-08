/* Function: fn_17488__sol_log
 * Address:  0x175a8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_17488__sol_log @ 0x175a8 ---- */

void fn_17488__sol_log(undefined8 *param_1,ulonglong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  longlong lStack_10;
  ulonglong uStack_8;
  
  if (50000 < (param_2 & 0xffffffff)) {
    *(undefined4 *)(param_1 + 1) = 0x31;
    goto LAB_ram_000177e0;
  }
  uVar4 = 0;
  uVar2 = (ulonglong)*param_3;
  if (uVar2 <= (param_2 & 0xffffffff)) {
    uVar4 = (ulonglong)param_3[2];
    if (uVar4 == uVar2) {
      uVar4 = (ulonglong)param_3[1];
    }
    else {
      lVar1 = 8;
      puVar6 = param_3;
      if (uVar4 <= (param_2 & 0xffffffff)) {
        puVar5 = param_3 + 2;
        uVar3 = (ulonglong)param_3[4];
        if (uVar3 == uVar4) {
LAB_ram_00017680:
          uVar4 = (ulonglong)puVar5[1];
          goto LAB_ram_00017718;
        }
        lVar1 = 0x10;
        uVar2 = uVar4;
        uVar4 = uVar3;
        puVar6 = puVar5;
        if (uVar3 <= (param_2 & 0xffffffff)) {
          puVar5 = param_3 + 4;
          uVar7 = (ulonglong)param_3[6];
          if (uVar7 == uVar3) goto LAB_ram_00017680;
          lVar1 = 0x18;
          uVar2 = uVar3;
          uVar4 = uVar7;
          puVar6 = puVar5;
          if (uVar7 <= (param_2 & 0xffffffff)) {
            puVar5 = param_3 + 6;
            uVar4 = (ulonglong)param_3[8];
            if (uVar4 == uVar7) goto LAB_ram_00017680;
            lVar1 = 0x20;
            uVar2 = uVar7;
            puVar6 = puVar5;
            if (uVar4 <= (param_2 & 0xffffffff)) {
              puVar5 = param_3 + 8;
              uVar3 = (ulonglong)param_3[10];
              if (uVar3 == uVar4) goto LAB_ram_00017680;
              lVar1 = 0x28;
              uVar2 = uVar4;
              uVar4 = uVar3;
              puVar6 = puVar5;
              if (uVar3 <= (param_2 & 0xffffffff)) {
                puVar5 = param_3 + 10;
                uVar4 = (ulonglong)param_3[0xc];
                if (uVar4 == uVar3) goto LAB_ram_00017680;
                lVar1 = 0x30;
                uVar2 = uVar3;
                puVar6 = puVar5;
                if (uVar4 <= (param_2 & 0xffffffff)) {
                  puVar5 = param_3 + 0xc;
                  uVar3 = (ulonglong)param_3[0xe];
                  if (uVar3 == uVar4) goto LAB_ram_00017680;
                  lVar1 = 0x38;
                  uVar2 = uVar4;
                  uVar4 = uVar3;
                  puVar6 = puVar5;
                  if (uVar3 <= (param_2 & 0xffffffff)) {
                    puVar5 = param_3 + 0xe;
                    uVar4 = (ulonglong)param_3[0x10];
                    if (uVar4 == uVar3) goto LAB_ram_00017680;
                    lVar1 = 0x40;
                    uVar2 = uVar3;
                    puVar6 = puVar5;
                    if (uVar4 <= (param_2 & 0xffffffff)) {
                      uVar3 = (ulonglong)param_3[0x12];
                      if (uVar3 == uVar4) {
                        uVar4 = (ulonglong)param_3[0x11];
                        goto LAB_ram_00017718;
                      }
                      puVar5 = param_3 + 0x12;
                      lVar1 = 0x48;
                      uVar2 = uVar4;
                      uVar4 = uVar3;
                      puVar6 = param_3 + 0x10;
                      if (uVar3 <= (param_2 & 0xffffffff)) goto LAB_ram_00017680;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar4 = (ulonglong)puVar6[1] +
              (((ulonglong)*(uint *)((longlong)param_3 + lVar1 + 4) - (ulonglong)puVar6[1]) *
              ((param_2 & 0xffffffff) - uVar2)) / (uVar4 - uVar2);
    }
  }
LAB_ram_00017718:
  lStack_10 = uVar4 << 0x30;
  uStack_8 = (uVar4 & 0xffff0000) >> 0x10;
  fn_15e8__sol_log(&lStack_28,&lStack_10,0xa000000000000,0);
  if (lStack_28 != 0) {
    param_1[2] = uStack_18;
    param_1[1] = uStack_20;
    *(undefined4 *)param_1 = 0;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0xca;
LAB_ram_000177e0:
  *param_1 = 1;
  return;
}
