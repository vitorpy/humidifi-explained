/* Function: fn_0888__custom_panic
 * Address:  0x9a8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_0888__custom_panic @ 0x9a8 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_0888__custom_panic(longlong *param_1,undefined *param_2,ulonglong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  undefined *puStack_10;
  ulonglong uStack_8;
  
  if ((longlong)param_3 < 0) {
    lVar5 = 0x2c;
    fn_2deb8__custom_panic(&DAT_ram_00031b8f,0x2c,&DAT_ram_000324f8);
    puStack_40 = &DAT_ram_00032520;
    ppuStack_30 = &puStack_10;
    uStack_8 = 0x120;
    puStack_10 = &DAT_ram_00032510;
    uStack_20 = 0;
    uStack_38 = 1;
    lStack_28 = 1;
    fn_2e0d0(*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),&puStack_40);
    return;
  }
  ppuStack_30 = (undefined **)param_1;
  if (param_2 == (undefined *)0x0 && param_3 == 0) {
    lVar5 = 0;
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar3 = (ulonglong)param_2 | (ulonglong)param_2 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = (uVar3 | uVar3 >> 0x20) ^ 0xffffffffffffffff;
      uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar3 = ((uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
    }
    else {
      uVar3 = param_3 | param_3 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      uVar3 = (uVar3 | uVar3 >> 0x20) ^ 0xffffffffffffffff;
      uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    }
    puVar8 = (undefined *)0x0;
    fn_30108(&puStack_10,1,0,(uVar3 ^ 0xffffffffffffffff) & 0x7e);
    uVar3 = 0;
    do {
      puVar4 = puStack_10 + (longlong)puVar8;
      uStack_20 = uStack_8 + uVar3 + (ulonglong)(puVar4 < puStack_10);
      bVar6 = true;
      if (param_3 < uStack_20) {
        if (param_2 < puVar4) goto LAB_ram_00000dc0;
LAB_ram_00000ef8:
        bVar1 = false;
        if (param_3 != uStack_20) goto LAB_ram_00000f08;
LAB_ram_00000dc8:
        if (bVar1) goto LAB_ram_00000e00;
LAB_ram_00000f58:
        bVar6 = false;
        uVar2 = uStack_8;
      }
      else {
        bVar6 = false;
        if (puVar4 <= param_2) goto LAB_ram_00000ef8;
LAB_ram_00000dc0:
        bVar1 = true;
        if (param_3 == uStack_20) goto LAB_ram_00000dc8;
LAB_ram_00000f08:
        if (!bVar6) goto LAB_ram_00000f58;
LAB_ram_00000e00:
        uStack_20 = 0;
        bVar6 = true;
        puVar4 = (undefined *)0x0;
        uVar2 = 0;
      }
      puVar7 = (undefined *)0x0;
      if (!bVar6) {
        puVar7 = puStack_10;
      }
      puVar8 = puVar7 + ((ulonglong)puVar8 >> 1 | uVar3 << 0x3f);
      if (puVar8 < puVar7) {
        lStack_28 = 1;
        if (param_2 < puVar4) goto LAB_ram_00000e78;
LAB_ram_00000fa0:
        lVar5 = 0;
        if (puStack_10 < (undefined *)0x4) goto LAB_ram_00000fb8;
LAB_ram_00000e88:
        bVar6 = true;
      }
      else {
        lStack_28 = 0;
        if (puVar4 <= param_2) goto LAB_ram_00000fa0;
LAB_ram_00000e78:
        lVar5 = 1;
        if ((undefined *)0x3 < puStack_10) goto LAB_ram_00000e88;
LAB_ram_00000fb8:
        bVar6 = false;
      }
      if (uStack_8 != 0) {
        bVar6 = uStack_8 != 0;
      }
      param_3 = (param_3 - uStack_20) - lVar5;
      uVar3 = uVar2 + (uVar3 >> 1) + lStack_28;
      param_2 = param_2 + -(longlong)puVar4;
      puStack_10 = (undefined *)((ulonglong)puStack_10 >> 2 | uStack_8 << 0x3e);
      uStack_8 = uStack_8 >> 2;
    } while (bVar6);
    uVar3 = uVar3 * 0x1000000 | (ulonglong)puVar8 >> 0x28;
    lVar5 = (longlong)puVar8 * 0x1000000;
  }
  *ppuStack_30 = (undefined *)lVar5;
  ppuStack_30[1] = (undefined *)uVar3;
  return;
}
