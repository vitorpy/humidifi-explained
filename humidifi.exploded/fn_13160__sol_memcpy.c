/* Function: fn_13160__sol_memcpy
 * Address:  0x13280
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_13160__sol_memcpy @ 0x13280 ---- */

void fn_13160__sol_memcpy(uint *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                     undefined1 param_5)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 auStack_388 [14];
  undefined1 auStack_34d [845];
  
  bVar1 = *(byte *)((longlong)param_2 + 0x14);
  if (bVar1 < 2) {
    if ((bVar1 == 0) || (uVar7 = param_2[1], 0x3b < uVar7)) {
      fn_13340();
    }
    else {
      uVar8 = (ulonglong)*(uint *)(param_2 + 2);
      if (uVar8 == 0) {
        uVar6 = 0;
      }
      else {
        lVar9 = *param_2;
        uVar5 = 0;
        uVar4 = 0x16;
        puVar10 = auStack_34d;
        do {
          uVar6 = uVar5;
          if ((uVar4 == 0xc6) || (uVar7 < uVar4)) break;
          lVar11 = lVar9 + uVar4;
          uVar12 = *(undefined8 *)(lVar11 + -9);
          uVar2 = *(undefined1 *)(lVar11 + -1);
          *puVar10 = *(undefined1 *)(lVar11 + -10);
          puVar10[-0x22] = uVar2;
          *(undefined8 *)(puVar10 + -0x2b) = uVar12;
          uVar4 = uVar4 + 0xb;
          puVar10[-0x21] = 0;
          puVar10[-0x23] = 1;
          *(undefined8 *)(puVar10 + -0x33) = 1;
          puVar10 = puVar10 + 0x38;
          uVar5 = uVar5 + 1;
          uVar6 = uVar8;
        } while (uVar5 < uVar8);
      }
      auStack_388[0] = (undefined4)uVar6;
      fn_2fe08__sol_memcpy(param_1,auStack_388,0x388);
    }
  }
  else if (bVar1 == 2) {
    uVar7 = param_2[1];
    bVar3 = 0x15 < uVar7;
    if (bVar3) {
      lVar9 = *param_2;
      param_4 = *(undefined1 *)(lVar9 + 0x15);
      param_5 = *(undefined1 *)(lVar9 + 0xc);
      uVar7 = *(ulonglong *)(lVar9 + 0xd);
    }
    *(undefined1 *)((longlong)param_1 + 0x3b) = param_5;
    *(undefined1 *)((longlong)param_1 + 0x19) = param_4;
    *(ulonglong *)(param_1 + 4) = uVar7;
    *param_1 = (uint)bVar3;
    *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[2] = 1;
    param_1[3] = 0;
  }
  else {
    *param_1 = 0;
  }
  return;
}
