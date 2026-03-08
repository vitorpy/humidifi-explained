/* Decompiled from: humidifi.so */
/* Language: eBPFSol:LE:64:default */
/* Functions: 150 */

/* ---- fn_0028__custom_panic @ 0x148 ---- */

/* WARNING: Type propagation algorithm not settling */

ulonglong fn_0028__custom_panic(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                          ulonglong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined1 uVar15;
  
  if (-1 < (longlong)param_5) {
    uVar15 = param_5 <= param_3;
    if (param_3 == param_5) {
      uVar15 = param_4 <= param_2;
    }
    if (!(bool)uVar15) {
      param_4 = param_2;
      param_5 = param_3;
    }
    if ((longlong)param_3 < 0) {
      param_4 = 0;
      param_5 = 0;
    }
    param_1[1] = param_5;
    *param_1 = param_4;
    return param_5;
  }
  plVar4 = (longlong *)0x31a80;
  fn_2deb8__custom_panic("assertion failed: min <= max/home/runner/work/platform-tools/platform-tools/out/rust/library/core/src/cmp.rsinternal error: entered unreachable code"
                   ,0x1c,&DAT_ram_000324b8 /* .data.rel.ro: &str "/home/runner/work/platform-tools/platform-tools/out/rust/library/core/src/... */);
  uVar2 = 0x1a;
  uVar14 = plVar4[9];
  uVar6 = plVar4[10];
  if (uVar14 < uVar6) {
    puVar11 = (undefined8 *)(plVar4[7] + uVar14 * 0x38);
    puVar3 = (undefined8 *)(*plVar4 + (uVar14 + plVar4[4]) * 8);
    pcVar12 = (char *)((uVar14 + plVar4[4]) * 0x10 + plVar4[2] + 8);
    do {
      pbVar13 = *(byte **)*puVar3;
      plVar10 = *(longlong **)(pcVar12 + -8);
      if ((((*(longlong *)(pbVar13 + 8) != *plVar10) ||
           (*(longlong *)(pbVar13 + 0x10) != plVar10[1])) ||
          (*(longlong *)(pbVar13 + 0x18) != plVar10[2])) ||
         (bVar1 = false, *(longlong *)(pbVar13 + 0x20) != plVar10[3])) {
        bVar1 = true;
      }
      uVar14 = uVar14 + 1;
      if (bVar1) {
        uVar2 = 1;
        goto LAB_ram_00000590;
      }
      bVar7 = 0;
      if (*pcVar12 == '\0') {
        bVar7 = 0x77;
      }
      if ((bVar7 | *pbVar13) != 0xff) {
        uVar2 = 0xb;
        goto LAB_ram_00000590;
      }
      uVar15 = 1;
      if (pbVar13[1] == 0) {
        uVar15 = 0;
        if (pbVar13[2] != 0) goto LAB_ram_000004f0;
LAB_ram_00000530:
        uVar9 = 0;
        uVar8 = 0;
        bVar7 = pbVar13[3];
      }
      else {
        if (pbVar13[2] == 0) goto LAB_ram_00000530;
LAB_ram_000004f0:
        uVar9 = 1;
        uVar8 = 1;
        bVar7 = pbVar13[3];
      }
      if (bVar7 == 0) {
        uVar8 = uVar9;
      }
      uVar5 = *(undefined8 *)(pbVar13 + 0x50);
      puVar11[4] = pbVar13 + 0x28;
      puVar11[3] = pbVar13 + 0x58;
      puVar11[2] = uVar5;
      puVar11[1] = pbVar13 + 0x48;
      *puVar11 = pbVar13 + 8;
      *(bool *)((longlong)puVar11 + 0x32) = bVar7 != 0;
      *(undefined1 *)((longlong)puVar11 + 0x31) = uVar8;
      *(undefined1 *)(puVar11 + 6) = uVar15;
      pcVar12 = pcVar12 + 0x10;
      puVar3 = puVar3 + 1;
      puVar11[5] = 0;
      puVar11 = puVar11 + 7;
    } while (uVar14 < uVar6);
    uVar2 = 0x1a;
    uVar14 = uVar6;
LAB_ram_00000590:
    plVar4[9] = uVar14;
  }
  return uVar2;
}


/* ---- fn_0158 @ 0x278 ---- */

undefined8 fn_0158(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  
  uVar2 = 0x1a;
  uVar12 = param_1[9];
  uVar4 = param_1[10];
  if (uVar12 < uVar4) {
    puVar9 = (undefined8 *)(param_1[7] + uVar12 * 0x38);
    puVar3 = (undefined8 *)(*param_1 + (uVar12 + param_1[4]) * 8);
    pcVar10 = (char *)((uVar12 + param_1[4]) * 0x10 + param_1[2] + 8);
    do {
      pbVar11 = *(byte **)*puVar3;
      plVar8 = *(longlong **)(pcVar10 + -8);
      if ((((*(longlong *)(pbVar11 + 8) != *plVar8) || (*(longlong *)(pbVar11 + 0x10) != plVar8[1]))
          || (*(longlong *)(pbVar11 + 0x18) != plVar8[2])) ||
         (bVar1 = false, *(longlong *)(pbVar11 + 0x20) != plVar8[3])) {
        bVar1 = true;
      }
      uVar12 = uVar12 + 1;
      if (bVar1) {
        uVar2 = 1;
        goto LAB_ram_00000590;
      }
      bVar5 = 0;
      if (*pcVar10 == '\0') {
        bVar5 = 0x77;
      }
      if ((bVar5 | *pbVar11) != 0xff) {
        uVar2 = 0xb;
        goto LAB_ram_00000590;
      }
      uVar13 = 1;
      if (pbVar11[1] == 0) {
        uVar13 = 0;
        if (pbVar11[2] == 0) goto LAB_ram_00000530;
LAB_ram_000004f0:
        uVar7 = 1;
        uVar6 = 1;
        bVar5 = pbVar11[3];
      }
      else {
        if (pbVar11[2] != 0) goto LAB_ram_000004f0;
LAB_ram_00000530:
        uVar7 = 0;
        uVar6 = 0;
        bVar5 = pbVar11[3];
      }
      if (bVar5 == 0) {
        uVar6 = uVar7;
      }
      uVar2 = *(undefined8 *)(pbVar11 + 0x50);
      puVar9[4] = pbVar11 + 0x28;
      puVar9[3] = pbVar11 + 0x58;
      puVar9[2] = uVar2;
      puVar9[1] = pbVar11 + 0x48;
      *puVar9 = pbVar11 + 8;
      *(bool *)((longlong)puVar9 + 0x32) = bVar5 != 0;
      *(undefined1 *)((longlong)puVar9 + 0x31) = uVar6;
      *(undefined1 *)(puVar9 + 6) = uVar13;
      pcVar10 = pcVar10 + 0x10;
      puVar3 = puVar3 + 1;
      puVar9[5] = 0;
      puVar9 = puVar9 + 7;
    } while (uVar12 < uVar4);
    uVar2 = 0x1a;
    uVar12 = uVar4;
LAB_ram_00000590:
    param_1[9] = uVar12;
  }
  return uVar2;
}


/* ---- fn_0488 @ 0x5a8 ---- */

void fn_0488(ulonglong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                     ulonglong param_5)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  longlong lStack_8;
  
  fn_30150(&uStack_40,param_3,(longlong)param_3 >> 0x3f);
  fn_30150(&uStack_30,param_4,0,param_2,0);
  fn_30150(&uStack_10,param_5,(longlong)param_5 >> 0x3f,param_2,param_2 >> 0x3f);
  fn_30150(&lStack_20,param_5,(longlong)param_5 >> 0x3f,param_3,(longlong)param_3 >> 0x3f);
  uVar3 = uStack_10 + uStack_40 + lStack_28;
  lVar5 = lStack_8 + (param_2 >> 0x3f & param_5) + (ulonglong)(uVar3 < uStack_10);
  uVar6 = lStack_38 + (param_4 >> 0x3f & param_3) + (ulonglong)(uStack_40 + lStack_28 < uStack_40);
  uVar7 = uVar6 + lStack_20;
  uVar4 = uVar7 + lVar5;
  lVar5 = ((longlong)uVar6 >> 0x3f) + lStack_18 + (ulonglong)(uVar7 < uVar6) + (lVar5 >> 0x3f) +
          (ulonglong)(uVar4 < uVar7);
  uVar6 = (longlong)(uVar4 * 0x10000) >> 0x3f;
  bVar1 = (uVar4 >> 0x30 | lVar5 * 0x10000) == uVar6;
  bVar2 = lVar5 >> 0x30 == uVar6;
  if (bVar1 && bVar2) {
    param_1[1] = uVar3 * 0x10000 | uStack_30 >> 0x30;
    param_1[2] = uVar4 * 0x10000 | uVar3 >> 0x30;
  }
  *param_1 = (ulonglong)(bVar1 && bVar2);
  return;
}


/* ---- fn_07e8__custom_panic @ 0x908 ---- */

void fn_07e8__custom_panic(void)

{
  longlong in_R4;
  longlong in_R5;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (in_R4 != 0 || in_R5 != 0) {
    fn_2c1e8();
    return;
  }
  puStack_30 = &DAT_ram_000324d0 /* .data.rel.ro: &str "division by zero" (len=16) */;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,&DAT_ram_000324e0 /* .data.rel.ro: &str "src/arith.rs" (len=12) */);
}


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
    fn_2deb8__custom_panic(&DAT_ram_00031b8f /* .rodata: hex: 66 69 78 65 64 20 70 6f 69 6e 74 20 73 71 75 61 */,0x2c,&DAT_ram_000324f8 /* .data.rel.ro: &str "src/lib.rs" (len=10) */);
    puStack_40 = &DAT_ram_00032520 /* .data.rel.ro: &str "CapacityError: " (len=15) */;
    ppuStack_30 = &puStack_10;
    uStack_8 = 0x120;
    puStack_10 = &DAT_ram_00032510 /* .data.rel.ro: &str "insufficient capacity" (len=21) */;
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


/* ---- fn_1090__custom_panic @ 0x11b0 ---- */

void fn_1090__custom_panic(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_000325b0 /* .data.rel.ro: hex: 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */;
  ppuStack_40 = &puStack_20;
  puStack_8 = &LAB_ram_0002dd68;
  puStack_10 = &uStack_51;
  uStack_18 = 0x120;
  puStack_20 = &uStack_68;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_51 = param_3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,&DAT_ram_000325d0 /* .data.rel.ro: &str "src/internal.rs" (len=15) */);
}


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
    puStack_80 = &DAT_ram_00032a48 /* .data.rel.ro: &str "arithmetic operation overflow" (len=29) */;
    lStack_60 = 0;
    lStack_78 = 1;
    lStack_68 = 0;
    lStack_70 = 8;
                    /* WARNING: Subroutine does not return */
    fn_2de88__custom_panic(&puStack_80,&DAT_ram_00032a30 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
  }
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[1] = lStack_78;
  *param_1 = (longlong)puStack_80;
  return;
}


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


/* ---- fn_1cd8__sol_memcpy @ 0x1df8 ---- */

void fn_1cd8__sol_memcpy(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uStack_8;
  
  uVar4 = 0;
  uVar2 = param_2 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    lVar3 = -uVar2;
    puVar1 = param_1;
    do {
      *puVar1 = uVar4 ^ *puVar1 ^ 0xc3ebbae2ff2fff3a;
      uVar4 = uVar4 + 0x1000100010001;
      puVar1 = puVar1 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  uStack_8 = 0;
  fn_2fe08__sol_memcpy(&uStack_8,(longlong)param_1 + uVar2,param_2 & 7);
  uStack_8 = uVar4 ^ uStack_8 ^ 0xc3ebbae2ff2fff3a;
  fn_2fe08__sol_memcpy((longlong)param_1 + uVar2,&uStack_8,param_2 & 7);
  return;
}


/* ---- fn_1e20 @ 0x1f40 ---- */

void fn_1e20(ulonglong *param_1)

{
  *param_1 = *param_1 ^ 0xef4a578c67d5f08b;
  param_1[1] = param_1[1] ^ 0xef4b578d67d4f08a;
  param_1[2] = param_1[2] ^ 0xef48578e67d7f089;
  param_1[3] = param_1[3] ^ 0xef49578f67d6f088;
  param_1[4] = param_1[4] ^ 0xef4e578867d1f08f;
  param_1[5] = param_1[5] ^ 0xef4f578967d0f08e;
  param_1[6] = param_1[6] ^ 0xef4c578a67d3f08d;
  param_1[7] = param_1[7] ^ 0xef4d578b67d2f08c;
  param_1[8] = param_1[8] ^ 0xef42578467ddf083;
  param_1[9] = param_1[9] ^ 0xef43578567dcf082;
  param_1[10] = param_1[10] ^ 0xef40578667dff081;
  param_1[0xb] = param_1[0xb] ^ 0xef41578767def080;
  param_1[0xc] = param_1[0xc] ^ 0xef46578067d9f087;
  param_1[0xd] = param_1[0xd] ^ 0xef47578167d8f086;
  param_1[0xe] = param_1[0xe] ^ 0xef44578267dbf085;
  param_1[0xf] = param_1[0xf] ^ 0xef45578367daf084;
  param_1[0x10] = param_1[0x10] ^ 0xef5a579c67c5f09b;
  param_1[0x11] = param_1[0x11] ^ 0xef5b579d67c4f09a;
  param_1[0x12] = param_1[0x12] ^ 0xef58579e67c7f099;
  param_1[0x13] = param_1[0x13] ^ 0xef59579f67c6f098;
  param_1[0x14] = param_1[0x14] ^ 0xef5e579867c1f09f;
  param_1[0x15] = param_1[0x15] ^ 0xef5f579967c0f09e;
  param_1[0x16] = param_1[0x16] ^ 0xef5c579a67c3f09d;
  param_1[0x17] = param_1[0x17] ^ 0xef5d579b67c2f09c;
  param_1[0x18] = param_1[0x18] ^ 0xef52579467cdf093;
  param_1[0x19] = param_1[0x19] ^ 0xef53579567ccf092;
  param_1[0x1a] = param_1[0x1a] ^ 0xef50579667cff091;
  param_1[0x1b] = param_1[0x1b] ^ 0xef51579767cef090;
  param_1[0x1c] = param_1[0x1c] ^ 0xef56579067c9f097;
  param_1[0x1d] = param_1[0x1d] ^ 0xef57579167c8f096;
  param_1[0x1e] = param_1[0x1e] ^ 0xef54579267cbf095;
  param_1[0x1f] = param_1[0x1f] ^ 0xef55579367caf094;
  return;
}


/* ---- fn_2328 @ 0x2448 ---- */

void fn_2328(ulonglong *param_1)

{
  *param_1 = *param_1 ^ 0x69d190c683eda5d3;
  param_1[1] = param_1[1] ^ 0x962f6f387c135a2c;
  param_1[2] = param_1[2] ^ 0x962c6f3b7c105a2d;
  param_1[3] = param_1[3] ^ 0x962d6f3a7c115a2e;
  param_1[4] = param_1[4] ^ 0x962a6f3d7c165a2f;
  param_1[5] = param_1[5] ^ 0x962b6f3c7c175a28;
  param_1[6] = param_1[6] ^ 0x96286f3f7c145a29;
  param_1[7] = param_1[7] ^ 0x96296f3e7c155a2a;
  param_1[8] = param_1[8] ^ 0x96266f317c1a5a2b;
  param_1[9] = param_1[9] ^ 0x96276f307c1b5a24;
  param_1[10] = param_1[10] ^ 0x96246f337c185a25;
  param_1[0xb] = param_1[0xb] ^ 0x96256f327c195a26;
  param_1[0xc] = param_1[0xc] ^ 0x96226f357c1e5a27;
  param_1[0xd] = param_1[0xd] ^ 0x96236f347c1f5a20;
  param_1[0xe] = param_1[0xe] ^ 0x96206f377c1c5a21;
  param_1[0xf] = param_1[0xf] ^ 0x96216f367c1d5a22;
  param_1[0x10] = param_1[0x10] ^ 0x963e6f297c025a23;
  param_1[0x11] = param_1[0x11] ^ 0x963f6f287c035a3c;
  return;
}


/* ---- fn_2600 @ 0x2720 ---- */

void fn_2600(ulonglong *param_1)

{
  *param_1 = *param_1 ^ 0xdbf169454ad22fa;
  param_1[1] = param_1[1] ^ 0xf241e96aab522d05;
  param_1[2] = param_1[2] ^ 0xf242e969ab532d04;
  param_1[3] = param_1[3] ^ 0xf243e968ab502d07;
  param_1[4] = param_1[4] ^ 0xf244e96fab512d06;
  param_1[5] = param_1[5] ^ 0xf245e96eab562d01;
  param_1[6] = param_1[6] ^ 0xf246e96dab572d00;
  param_1[7] = param_1[7] ^ 0xf247e96cab542d03;
  param_1[8] = param_1[8] ^ 0xf248e963ab552d02;
  param_1[9] = param_1[9] ^ 0xf249e962ab5a2d0d;
  return;
}


/* ---- fn_2798 @ 0x28b8 ---- */

void fn_2798(ulonglong *param_1)

{
  *param_1 = *param_1 ^ 0xb82c93d08854ebff;
  param_1[1] = param_1[1] ^ 0x47d26c2e77aa1400;
  param_1[2] = param_1[2] ^ 0x47d16c2d77a91401;
  param_1[3] = param_1[3] ^ 0x47d06c2c77a81402;
  param_1[4] = param_1[4] ^ 0x47d76c2b77af1403;
  param_1[5] = param_1[5] ^ 0x47d66c2a77ae1404;
  param_1[6] = param_1[6] ^ 0x47d56c2977ad1405;
  param_1[7] = param_1[7] ^ 0x47d46c2877ac1406;
  param_1[8] = param_1[8] ^ 0x47db6c2777a31407;
  param_1[9] = param_1[9] ^ 0x47da6c2677a21408;
  return;
}


/* ---- fn_2930__sol_memcmp @ 0x2a50 ---- */

void fn_2930__sol_memcmp(ulonglong *param_1)

{
  *param_1 = *param_1 ^ 0xbf03b62bffacf846;
  param_1[1] = param_1[1] ^ 0x40fd49d5005207b9;
  param_1[2] = param_1[2] ^ 0x40fe49d6005107b8;
  param_1[3] = param_1[3] ^ 0x40ff49d7005007bb;
  param_1[4] = param_1[4] ^ 0x40f849d0005707ba;
  param_1[5] = param_1[5] ^ 0x40f949d1005607bd;
  param_1[6] = param_1[6] ^ 0x40fa49d2005507bc;
  param_1[7] = param_1[7] ^ 0x40fb49d3005407bf;
  param_1[8] = param_1[8] ^ 0x40f449dc005b07be;
  param_1[9] = param_1[9] ^ 0x40f549dd005a07b1;
  param_1[10] = param_1[10] ^ 0x40f649de005907b0;
  param_1[0xb] = param_1[0xb] ^ 0x40f749df005807b3;
  param_1[0xc] = param_1[0xc] ^ 0x40f049d8005f07b2;
  param_1[0xd] = param_1[0xd] ^ 0x40f149d9005e07b5;
  param_1[0xe] = param_1[0xe] ^ 0x40f249da005d07b4;
  param_1[0xf] = param_1[0xf] ^ 0x40f349db005c07b7;
  param_1[0x10] = param_1[0x10] ^ 0x40ec49c4004307b6;
  param_1[0x11] = param_1[0x11] ^ 0x40ed49c5004207a9;
  param_1[0x12] = param_1[0x12] ^ 0x40ee49c6004107a8;
  param_1[0x13] = param_1[0x13] ^ 0x40ef49c7004007ab;
  param_1[0x14] = param_1[0x14] ^ 0x40e849c0004707aa;
  param_1[0x15] = param_1[0x15] ^ 0x40e949c1004607ad;
  param_1[0x16] = param_1[0x16] ^ 0x40ea49c2004507ac;
  param_1[0x17] = param_1[0x17] ^ 0x40eb49c3004407af;
  param_1[0x18] = param_1[0x18] ^ 0x40e449cc004b07ae;
  param_1[0x19] = param_1[0x19] ^ 0x40e549cd004a07a1;
  param_1[0x1a] = param_1[0x1a] ^ 0x40e649ce004907a0;
  param_1[0x1b] = param_1[0x1b] ^ 0x40e749cf004807a3;
  param_1[0x1c] = param_1[0x1c] ^ 0x40e049c8004f07a2;
  param_1[0x1d] = param_1[0x1d] ^ 0x40e149c9004e07a5;
  return;
}


/* ---- entrypoint @ 0x2f08 ---- */

/* Receives raw transaction data as argument.
   Generally the entrypoint! macro takes care of deserializing this data and
   calls the user-supplied process_instruction on it.
   Function calls are usually in this order:
   - entrypoint::deserialize()
   - instruction_data.as_slice()
   - process_instruction()
   Function signatures for deserialize/process_instruction can be found under
   the SOLANA category in the DataType manager. They need to be applied
   manually via right click, edit, copy the signature and paste it into
   function signature.
    */

ulonglong entrypoint(u64 *__return_storage_ptr__,u8 *transaction_data)

{
  byte bVar1;
  bool bVar2;
  u64 *puVar3;
  int iVar4;
  ulonglong in_R0;
  u64 *puVar5;
  u64 **ppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  u64 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uStack_888;
  uint uStack_884;
  uint uStack_880;
  uint uStack_87c;
  uint uStack_878;
  uint uStack_874;
  uint uStack_870;
  uint uStack_86c;
  uint uStack_868;
  uint uStack_864;
  uint uStack_860;
  uint uStack_85c;
  uint uStack_858;
  uint uStack_854;
  uint uStack_850;
  uint uStack_84c;
  uint uStack_848;
  uint uStack_844;
  uint uStack_840;
  uint uStack_83c;
  uint uStack_838;
  uint uStack_834;
  u64 *apuStack_830 [2];
  longlong lStack_820;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined *puStack_30;
  u64 uStack_28;
  u64 uStack_20;
  u64 uStack_18;
  undefined8 uStack_10;
  
  if ((*__return_storage_ptr__ == 3) &&
     (*(char *)((longlong)__return_storage_ptr__ + 0x2f29) == '\x01')) {
    if ((__return_storage_ptr__[0x5e6] != __return_storage_ptr__[0x4c]) ||
       (((__return_storage_ptr__[0x5e7] != __return_storage_ptr__[0x4d] ||
         (__return_storage_ptr__[0x5e8] != __return_storage_ptr__[0x4e])) ||
        (__return_storage_ptr__[0x5e9] != __return_storage_ptr__[0x4f])))) {
      return 0xabad1dea;
    }
    if ((__return_storage_ptr__[0x1006] ^ 0x6e9de2b30b19f9ea) <=
        (__return_storage_ptr__[0x57] ^ 0x6e9de2b30b19f9ea)) {
      return 0xdead;
    }
    if (__return_storage_ptr__[0xafc] <= (__return_storage_ptr__[0x1008] ^ 0x6edde0930b59ebea)) {
      __return_storage_ptr__[0x59] = __return_storage_ptr__[0xafc] ^ 0x6e9de2b30b19f1ea;
      __return_storage_ptr__[0x54] = __return_storage_ptr__[0x1003];
      __return_storage_ptr__[0x55] = __return_storage_ptr__[0x1004];
      __return_storage_ptr__[0x56] = __return_storage_ptr__[0x1005];
      __return_storage_ptr__[0x57] = __return_storage_ptr__[0x1006];
      __return_storage_ptr__[0x58] = __return_storage_ptr__[0x1007];
      __return_storage_ptr__[0x65] = __return_storage_ptr__[0x1009];
      __return_storage_ptr__[0x70] = __return_storage_ptr__[0x100a];
      return in_R0;
    }
    return 0xdeadc0de;
  }
  puVar5 = __return_storage_ptr__ + 1;
  uVar14 = *__return_storage_ptr__;
  if (uVar14 != 0) {
    apuStack_830[0] = puVar5;
    puVar5 = (u64 *)((longlong)__return_storage_ptr__ + __return_storage_ptr__[0xb] + 0x286f &
                    0xfffffffffffffff8);
    if (uVar14 == 2) {
      apuStack_830[1] = puVar5;
      if ((ulonglong)(byte)*puVar5 == 0xff) goto LAB_ram_00003658;
      apuStack_830[1] = apuStack_830[(byte)*puVar5];
      puVar5 = puVar5 + 1;
    }
    else if (uVar14 != 1) {
      ppuVar6 = apuStack_830;
      uVar8 = uVar14;
      if (5 < uVar14) {
        ppuVar6 = apuStack_830;
        do {
          while ((ulonglong)(byte)*puVar5 != 0xff) {
            ppuVar6[1] = apuStack_830[(byte)*puVar5];
            puVar5 = puVar5 + 1;
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 != 0xff) goto LAB_ram_00003260;
LAB_ram_00003330:
            ppuVar6[2] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 == 0xff) goto LAB_ram_00003368;
LAB_ram_000032a8:
            ppuVar6[3] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 == 0xff) goto LAB_ram_00003180;
LAB_ram_000033a0:
            ppuVar6[4] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 == 0xff) goto LAB_ram_000033f0;
LAB_ram_000031c0:
            ppuVar6 = ppuVar6 + 5;
            *ppuVar6 = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar8 = uVar8 - 5;
            if (uVar8 < 6) goto LAB_ram_00003428;
          }
          ppuVar6[1] = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 == 0xff) goto LAB_ram_00003330;
LAB_ram_00003260:
          ppuVar6[2] = apuStack_830[uVar11];
          puVar5 = puVar5 + 1;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 != 0xff) goto LAB_ram_000032a8;
LAB_ram_00003368:
          ppuVar6[3] = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 != 0xff) goto LAB_ram_000033a0;
LAB_ram_00003180:
          ppuVar6[4] = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 != 0xff) goto LAB_ram_000031c0;
LAB_ram_000033f0:
          ppuVar6 = ppuVar6 + 5;
          *ppuVar6 = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar8 = uVar8 - 5;
        } while (5 < uVar8);
      }
LAB_ram_00003428:
      if (uVar8 < 4) {
        if (uVar8 == 3) {
          if ((ulonglong)(byte)*puVar5 == 0xff) {
            ppuVar6[1] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            bVar1 = (byte)*puVar5;
          }
          else {
            ppuVar6[1] = apuStack_830[(byte)*puVar5];
            puVar5 = puVar5 + 1;
            bVar1 = (byte)*puVar5;
          }
          if ((ulonglong)bVar1 == 0xff) {
            ppuVar6[2] = puVar5;
            goto LAB_ram_00003658;
          }
          ppuVar6[2] = apuStack_830[bVar1];
          puVar5 = puVar5 + 1;
        }
        else if (1 < uVar8) {
          if ((ulonglong)(byte)*puVar5 == 0xff) {
            ppuVar6[1] = puVar5;
            goto LAB_ram_00003658;
          }
          ppuVar6[1] = apuStack_830[(byte)*puVar5];
          puVar5 = puVar5 + 1;
        }
      }
      else {
        uVar11 = (ulonglong)(byte)*puVar5;
        if (uVar8 == 5) {
          if (uVar11 == 0xff) {
            ppuVar6[1] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 == 0xff) goto LAB_ram_00004aa0;
LAB_ram_00003490:
            ppuVar6[2] = apuStack_830[uVar8];
            puVar5 = puVar5 + 1;
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 != 0xff) goto LAB_ram_000034d8;
LAB_ram_00004ad8:
            ppuVar6[3] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            bVar1 = (byte)*puVar5;
          }
          else {
            ppuVar6[1] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 != 0xff) goto LAB_ram_00003490;
LAB_ram_00004aa0:
            ppuVar6[2] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 == 0xff) goto LAB_ram_00004ad8;
LAB_ram_000034d8:
            ppuVar6[3] = apuStack_830[uVar8];
            puVar5 = puVar5 + 1;
            bVar1 = (byte)*puVar5;
          }
          if ((ulonglong)bVar1 != 0xff) {
            ppuVar6[4] = apuStack_830[bVar1];
            puVar5 = puVar5 + 1;
            goto LAB_ram_00003678;
          }
          ppuVar6[4] = puVar5;
        }
        else {
          if (uVar11 == 0xff) {
            ppuVar6[1] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 == 0xff) goto LAB_ram_00004ba0;
LAB_ram_00003eb0:
            ppuVar6[2] = apuStack_830[uVar8];
            puVar5 = puVar5 + 1;
            bVar1 = (byte)*puVar5;
          }
          else {
            ppuVar6[1] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 != 0xff) goto LAB_ram_00003eb0;
LAB_ram_00004ba0:
            ppuVar6[2] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            bVar1 = (byte)*puVar5;
          }
          if ((ulonglong)bVar1 != 0xff) {
            ppuVar6[3] = apuStack_830[bVar1];
            puVar5 = puVar5 + 1;
            goto LAB_ram_00003678;
          }
          ppuVar6[3] = puVar5;
        }
LAB_ram_00003658:
        puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8);
      }
    }
  }
LAB_ram_00003678:
  uVar8 = 0xbadc0de;
  uVar12 = *puVar5;
  if (uVar12 == 0) goto LAB_ram_00007720;
  puVar18 = puVar5 + 1;
  uVar16 = uVar12 - 1;
  uVar11 = ((ulonglong)*(byte *)((longlong)puVar18 + uVar16) ^ uVar16 >> 3 ^ 0x3a) & 0xff;
  if (0x17 < uVar11) {
    uVar11 = 0x18;
  }
  pbVar9 = (byte *)((longlong)puVar18 + uVar12);
  if (uVar11 < 0xd) {
    if (uVar11 < 6) {
      if (uVar11 < 3) {
        if (uVar11 == 0) {
          if (((*(longlong *)pbVar9 != -0x16a608d8d48b0286) ||
              (*(longlong *)(pbVar9 + 8) != 0x7a819dd33c7070c6)) ||
             ((*(longlong *)(pbVar9 + 0x10) != 0x6dd2523bce0a93a0 ||
              (bVar2 = false, *(longlong *)(pbVar9 + 0x18) != -0x2c4478dc22ab5fac)))) {
            bVar2 = true;
          }
          uVar8 = 0xdefaced;
          if (bVar2) goto LAB_ram_00007720;
          fn_1cd8__sol_memcpy(puVar18,uVar16);
          fn_9700(&uStack_888,apuStack_830,uVar14,puVar18,uVar16);
          uVar8 = (ulonglong)uStack_884;
          uVar17 = uStack_888;
        }
        else {
          if (uVar11 != 2) goto LAB_ram_00007888;
          uVar8 = uVar16 & 0xfffffffffffffff8;
          uVar11 = 0;
          if (uVar8 != 0) {
            lVar7 = -uVar8;
            puVar13 = puVar18;
            do {
              *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
              uVar11 = uVar11 + 0x1000100010001;
              puVar13 = puVar13 + 1;
              lVar7 = lVar7 + 8;
            } while (lVar7 != 0);
          }
          puStack_30 = (undefined *)0x0;
          fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
          puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
          fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
          fn_7ab8(&uStack_880,apuStack_830,uVar14,puVar18,uVar16);
          uVar8 = (ulonglong)uStack_87c;
          uVar17 = uStack_880;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_8068__sol_memcmp(&uStack_878,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_874;
        uVar17 = uStack_878;
      }
      else if (uVar11 == 4) {
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        uVar8 = 0xbadc0de;
        uVar17 = 0;
        if (8 < uVar14) {
          if (uVar16 != 0x18) goto LAB_ram_000071d0;
          if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
          puStack_30 = (undefined *)0x0;
          fn_db48(&uStack_870,apuStack_830,uVar14,uStack_800);
          uVar8 = (ulonglong)uStack_86c;
          uVar17 = uStack_870;
        }
      }
      else {
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_11c18(&uStack_868,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_864;
        uVar17 = uStack_868;
      }
    }
    else if (uVar11 < 9) {
      if (uVar11 == 6) {
        uVar17 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        puVar3 = apuStack_830[1];
        puVar5 = apuStack_830[0];
        uVar8 = 0xbadc0de;
        if (uVar14 == 2) {
          fn_52a8(apuStack_830[1] + 5,&DAT_ram_00031900 /* .rodata: hex: 7a fd 74 2b 27 f7 59 e9 c6 70 70 3c d3 9d 81 7a */,0x20,&puStack_30);
          iVar4 = (int)puStack_30;
          uStack_18 = puVar3[0x4e];
          uStack_20 = puVar3[0x4d];
          uStack_28 = puVar3[0x4c];
          puStack_30 = (undefined *)puVar3[0x4b];
          if (puVar3[0xe2] < 5) {
            uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
            puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
            uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
            uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
          }
          uVar14 = (longlong)puStack_30 << 0x38 | ((ulonglong)puStack_30 & 0xff00) << 0x28 |
                   ((ulonglong)puStack_30 & 0xff0000) << 0x18 |
                   ((ulonglong)puStack_30 & 0xff000000) << 8 |
                   (ulonglong)puStack_30 >> 8 & 0xff000000 |
                   (ulonglong)puStack_30 >> 0x18 & 0xff0000 | (ulonglong)puStack_30 >> 0x28 & 0xff00
                   | (ulonglong)puStack_30 >> 0x38;
          uVar8 = puVar5[1];
          uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                  (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                  uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
          if (uVar14 == uVar8) {
            uVar14 = uStack_28 << 0x38 | (uStack_28 & 0xff00) << 0x28 |
                     (uStack_28 & 0xff0000) << 0x18 | (uStack_28 & 0xff000000) << 8 |
                     uStack_28 >> 8 & 0xff000000 | uStack_28 >> 0x18 & 0xff0000 |
                     uStack_28 >> 0x28 & 0xff00 | uStack_28 >> 0x38;
            uVar8 = puVar5[2];
            uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                    uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
            if (uVar14 != uVar8) goto LAB_ram_00005578;
            uVar14 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 |
                     (uStack_20 & 0xff0000) << 0x18 | (uStack_20 & 0xff000000) << 8 |
                     uStack_20 >> 8 & 0xff000000 | uStack_20 >> 0x18 & 0xff0000 |
                     uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
            uVar8 = puVar5[3];
            uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                    uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
            if (uVar14 != uVar8) goto LAB_ram_00005578;
            iVar10 = 0;
            uVar14 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 |
                     (uStack_18 & 0xff0000) << 0x18 | (uStack_18 & 0xff000000) << 8 |
                     uStack_18 >> 8 & 0xff000000 | uStack_18 >> 0x18 & 0xff0000 |
                     uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
            uVar8 = puVar5[4];
            uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                    uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
            if (uVar14 != uVar8) goto LAB_ram_00005578;
          }
          else {
LAB_ram_00005578:
            iVar10 = -1;
            if (uVar8 <= uVar14) {
              iVar10 = 1;
            }
          }
          uVar8 = 0xabad1dea;
          if ((*(byte *)((longlong)puVar5 + 1) != 0) && (iVar10 == 0 && iVar4 == 0)) {
            puVar3[0x56] = 0x6e9de2b30b19f9ea;
            goto LAB_ram_00007068;
          }
        }
      }
      else {
        if (uVar11 != 7) {
          fn_1cd8__sol_memcpy(puVar18,uVar16);
          puStack_30 = &DAT_ram_000329c0 /* .data.rel.ro: &str "disabled ixn" (len=12) */;
          uStack_10 = 0;
          uStack_28 = 1;
          uStack_18 = 0;
          uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
          fn_2de88__custom_panic(&puStack_30,&DAT_ram_000329e8 /* .data.rel.ro: &str "contract/src/instructions.rs" (len=28) */);
        }
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_124a8__custom_panic(&uStack_860,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_85c;
        uVar17 = uStack_860;
      }
    }
    else if (uVar11 < 0xb) {
      if (uVar11 == 9) {
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_12a18(&uStack_858,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_854;
        uVar17 = uStack_858;
      }
      else {
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        uVar8 = 0xbadc0de;
        if ((uVar14 != 3) || (uVar16 != 0x40)) goto LAB_ram_00007448;
        uVar14 = *(ulonglong *)(lStack_820 + 0x58);
        uStack_18 = apuStack_830[1][0x4e];
        uStack_20 = apuStack_830[1][0x4d];
        uStack_28 = apuStack_830[1][0x4c];
        puStack_30 = (undefined *)apuStack_830[1][0x4b];
        uVar17 = 0;
        if (apuStack_830[1][0xe2] < 5) {
          uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
          puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
          uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
          uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
        }
        if ((((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2]))
            || (uStack_20 != apuStack_830[0][3])) ||
           (bVar2 = false, uStack_18 != apuStack_830[0][4])) {
          bVar2 = true;
        }
        uVar8 = 0xabad1dea;
        if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
          uVar11 = puVar5[4];
          if (uVar11 < (apuStack_830[1][0x56] ^ 0x6e9de2b30b19f9ea)) goto LAB_ram_00007410;
          uVar8 = 0xdeadc0de;
          if (uVar14 <= puVar5[6]) {
            uVar16 = puVar5[1];
            apuStack_830[1][0x54] = puVar5[2] ^ 0x46a912eb23798bd9;
            apuStack_830[1][0x53] = uVar16 ^ 0xb957ed15dc877426;
            uVar16 = puVar5[3];
            apuStack_830[1][0x56] = uVar11 ^ 0x6e9de2b30b19f9ea;
            apuStack_830[1][0x55] = uVar16 ^ 0x6e9de2b30b19f9ea;
            uVar11 = puVar5[5];
            apuStack_830[1][0x58] = uVar14 ^ 0x6e9de2b30b19f1ea;
            apuStack_830[1][0x57] = uVar11 ^ 0x6e9de2b30b19f1ea;
            apuStack_830[1][100] = puVar5[7] ^ 0xd3198133b7c1776c;
            apuStack_830[1][0x6f] = puVar5[8] ^ 0x504156a22548f8dd;
            goto LAB_ram_00007068;
          }
        }
      }
    }
    else {
      if (uVar11 != 0xb) {
        fn_1cd8__sol_memcpy(puVar18,uVar16);
        puStack_30 = &DAT_ram_000329c0 /* .data.rel.ro: &str "disabled ixn" (len=12) */;
        uStack_10 = 0;
        uStack_28 = 1;
        uStack_18 = 0;
        uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_30,&DAT_ram_00032a00 /* .data.rel.ro: &str "contract/src/instructions.rs" (len=28) */);
      }
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      if (uVar14 != 2) goto LAB_ram_00007448;
      if (uVar16 != 8) goto LAB_ram_000071d0;
      uVar17 = 0;
      if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
      uStack_18 = apuStack_830[1][0x4e];
      uStack_20 = apuStack_830[1][0x4d];
      uStack_28 = apuStack_830[1][0x4c];
      puStack_30 = (undefined *)apuStack_830[1][0x4b];
      if (apuStack_830[1][0xe2] < 5) {
        uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
        puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
        uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
        uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
      }
      if ((((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2])) ||
          (uStack_20 != apuStack_830[0][3])) || (bVar2 = false, uStack_18 != apuStack_830[0][4])) {
        bVar2 = true;
      }
      uVar8 = 0xabad1dea;
      if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
        apuStack_830[1][0x6f] = *puVar18 ^ 0x504156a22548f8dd;
        uVar8 = 0xbad4;
        if (apuStack_830[1][0xe2] == 2) {
          apuStack_830[1][0xe2] = 4;
          goto LAB_ram_00007068;
        }
      }
    }
  }
  else if (uVar11 < 0x13) {
    if (uVar11 < 0x10) {
      if (uVar11 == 0xd) {
        uVar17 = 0;
        if ((uVar14 == 3) && (uVar16 == 0x40)) {
          uVar14 = *(ulonglong *)(lStack_820 + 0x58);
          uStack_18 = apuStack_830[1][0x4e];
          uStack_20 = apuStack_830[1][0x4d];
          uStack_28 = apuStack_830[1][0x4c];
          puStack_30 = (undefined *)apuStack_830[1][0x4b];
          if (apuStack_830[1][0xe2] < 5) {
            uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
            puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
            uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
            uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
          }
          if (((puStack_30 != (undefined *)__return_storage_ptr__[2]) ||
              (uStack_28 != __return_storage_ptr__[3])) ||
             ((uStack_20 != __return_storage_ptr__[4] ||
              (bVar2 = false, uStack_18 != __return_storage_ptr__[5])))) {
            bVar2 = true;
          }
          uVar8 = 0xabad1dea;
          if ((*(char *)((longlong)__return_storage_ptr__ + 9) != '\0') && (!bVar2)) {
            uVar11 = puVar5[4];
            if ((uVar11 ^ 0x6e9de2b30b19f9ea) < (apuStack_830[1][0x56] ^ 0x6e9de2b30b19f9ea)) {
LAB_ram_00007410:
              uVar17 = 0;
              uVar8 = 0xdead;
            }
            else {
              uVar8 = puVar5[6];
              puVar5[6] = uVar8 ^ 0x6edde0930b59ebea;
              if (uVar14 <= (uVar8 ^ 0x6edde0930b59ebea)) {
                uVar12 = puVar5[1];
                uVar8 = puVar5[2];
                apuStack_830[1][0x54] = uVar8;
                apuStack_830[1][0x53] = uVar12;
                uVar12 = puVar5[3];
                apuStack_830[1][0x56] = uVar11;
                apuStack_830[1][0x55] = uVar12;
                apuStack_830[1][0x57] = puVar5[5];
                apuStack_830[1][100] = puVar5[7];
                uVar12 = puVar5[8];
                apuStack_830[1][0x58] = uVar14 ^ 0x6e9de2b30b19f1ea;
                apuStack_830[1][0x6f] = uVar12;
                goto LAB_ram_00007068;
              }
              uVar8 = 0xdeadc0de;
            }
          }
        }
      }
      else if (uVar11 == 0xe) {
        if ((((*(longlong *)pbVar9 != -0x16a608d8d48b0286) ||
             (*(longlong *)(pbVar9 + 8) != 0x7a819dd33c7070c6)) ||
            (*(longlong *)(pbVar9 + 0x10) != 0x6dd2523bce0a93a0)) ||
           (bVar2 = false, *(longlong *)(pbVar9 + 0x18) != -0x2c4478dc22ab5fac)) {
          bVar2 = true;
        }
        uVar8 = 0xdefaced;
        if (bVar2) goto LAB_ram_00007720;
        fn_1cd8__sol_memcpy(puVar18,uVar16);
        fn_a740(&uStack_850,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_84c;
        uVar17 = uStack_850;
      }
      else {
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        uVar8 = 0xbadc0de1;
        if (uVar14 < 0xc) goto LAB_ram_00007448;
        uVar8 = 0xbadc0ded;
        uVar17 = 0;
        if (uVar16 == 0x18) {
          if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
          fn_f8d0(&uStack_848,apuStack_830,uVar14,puVar5[1]);
          uVar8 = (ulonglong)uStack_844;
          uVar17 = uStack_848;
        }
      }
    }
    else if (uVar11 == 0x10) {
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      uVar17 = 0;
      if (9 < uVar14) {
        if (uVar16 != 0x18) goto LAB_ram_000071d0;
        if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
        uStack_20 = 3;
        uStack_28 = 3;
        if (*(byte *)((longlong)puVar5 + 0x1a) != 1) {
          uStack_20 = 0;
          uStack_28 = (u64)*(byte *)((longlong)puVar5 + 0x19);
        }
        uStack_18 = (u64)*(byte *)((longlong)puVar5 + 0x1a);
        puStack_30 = (undefined *)0x1;
        fn_db48(&uStack_840,apuStack_830,uVar14,uStack_7f8);
        uVar8 = (ulonglong)uStack_83c;
        uVar17 = uStack_840;
      }
    }
    else {
      if (uVar11 != 0x12) {
        fn_2deb8__custom_panic("internal error: entered unreachable code",0x28,&DAT_ram_00032a18 /* .data.rel.ro: &str "contract/src/lib.rs" (len=19) */);
LAB_ram_00007888:
        fn_1cd8__sol_memcpy(puVar18,uVar16);
        puStack_30 = &DAT_ram_000329c0 /* .data.rel.ro: &str "disabled ixn" (len=12) */;
        uStack_10 = 0;
        uStack_28 = 1;
        uStack_18 = 0;
        uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_30,&DAT_ram_000329d0 /* .data.rel.ro: &str "contract/src/instructions.rs" (len=28) */);
      }
      uVar17 = 0;
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      if (uVar14 == 2) {
        uStack_18 = apuStack_830[1][0x4e];
        uStack_20 = apuStack_830[1][0x4d];
        uStack_28 = apuStack_830[1][0x4c];
        puStack_30 = (undefined *)apuStack_830[1][0x4b];
        if (apuStack_830[1][0xe2] < 5) {
          uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
          puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
          uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
          uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
        }
        if (((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2]))
           || ((uStack_20 != apuStack_830[0][3] || (bVar2 = false, uStack_18 != apuStack_830[0][4]))
              )) {
          bVar2 = true;
        }
        uVar8 = 0xabad1dea;
        if (((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) &&
           (uVar8 = 0xbad4, apuStack_830[1][0xe2] == 4)) {
          apuStack_830[1][0x4b] = apuStack_830[1][0x4b] ^ 0xfb5ce87aae443c38;
          apuStack_830[1][0x4c] = apuStack_830[1][0x4c] ^ 0x4a2178451bac3c7;
          apuStack_830[1][0x4d] = apuStack_830[1][0x4d] ^ 0x4a1178751b9c3c6;
          apuStack_830[1][0x4e] = apuStack_830[1][0x4e] ^ 0x4a0178651b8c3c5;
          apuStack_830[1][0xe2] = 5;
          goto LAB_ram_00007068;
        }
      }
    }
  }
  else if (uVar11 < 0x16) {
    if (uVar11 == 0x13) {
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      if (uVar14 == 2) {
        if (uVar16 != 0x10) {
LAB_ram_000071d0:
                    /* WARNING: Subroutine does not return */
          fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
        }
        uVar17 = 0;
        if (((ulonglong)puVar18 & 7) != 0) {
LAB_ram_000071f8:
                    /* WARNING: Subroutine does not return */
          fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
        }
        uStack_18 = apuStack_830[1][0x4e];
        uStack_20 = apuStack_830[1][0x4d];
        uStack_28 = apuStack_830[1][0x4c];
        puStack_30 = (undefined *)apuStack_830[1][0x4b];
        if (apuStack_830[1][0xe2] < 5) {
          uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
          puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
          uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
          uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
        }
        if (((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2]))
           || ((uStack_20 != apuStack_830[0][3] || (bVar2 = false, uStack_18 != apuStack_830[0][4]))
              )) {
          bVar2 = true;
        }
        uVar8 = 0xabad1dea;
        if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
          apuStack_830[1][0x70] = puVar5[1] ^ 0x35f72d643d3464eb;
          apuStack_830[1][0x71] = puVar5[2] ^ 0x9578e14d1d0d9c4e;
          uVar8 = 0xbad4;
          if (apuStack_830[1][0xe2] == 5) {
            apuStack_830[1][0xe2] = 6;
            goto LAB_ram_00007068;
          }
        }
      }
      else {
LAB_ram_00007448:
        uVar17 = 0;
      }
    }
    else if (uVar11 == 0x14) {
      uVar11 = 0;
      uVar8 = uVar16 & 0xfffffffffffffff8;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      fn_113b8__custom_panic(&uStack_838,apuStack_830,uVar14,puVar18,uVar16);
      uVar8 = (ulonglong)uStack_834;
      uVar17 = uStack_838;
    }
    else {
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      puVar3 = apuStack_830[1];
      uVar8 = 0xbadc0de;
      if (uVar14 != 2) goto LAB_ram_00007448;
      if (uVar16 != 0x50) goto LAB_ram_000071d0;
      uVar17 = 0;
      if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
      uStack_18 = apuStack_830[1][0x4e];
      uStack_20 = apuStack_830[1][0x4d];
      uStack_28 = apuStack_830[1][0x4c];
      puStack_30 = (undefined *)apuStack_830[1][0x4b];
      uVar14 = apuStack_830[1][0xe2];
      if (uVar14 < 5) {
        uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
        puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
        uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
        uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
      }
      if ((((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2])) ||
          (uStack_20 != apuStack_830[0][3])) || (bVar2 = false, uStack_18 != apuStack_830[0][4])) {
        bVar2 = true;
      }
      uVar8 = 0xabad1dea;
      if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
        uVar8 = 0xbadc0df1;
        if (puVar5[2] < 0x7a121) {
          if ((((puVar5[1] < puVar5[3]) || (puVar5[2] < puVar5[4])) ||
              ((puVar5[3] < puVar5[5] ||
               (((puVar5[4] < puVar5[6] || (puVar5[5] < puVar5[7])) || (puVar5[6] < puVar5[8]))))))
             || ((puVar5[7] < puVar5[9] || (puVar5[8] < puVar5[10])))) {
            uVar8 = 0xbadc0df0;
          }
          else if (puVar5[10] == 0) {
            fn_2fe08__sol_memcpy(apuStack_830[1] + 0x72,puVar18,0x50);
            uVar8 = puVar3[0x73] ^ 0x9aa8843b60a9bf;
            puVar3[0x72] = puVar3[0x72] ^ 0xff64577ac49fae40;
            puVar3[0x73] = uVar8;
            puVar3[0x74] = puVar3[0x74] ^ 0x99a8873b61a9be;
            puVar3[0x75] = puVar3[0x75] ^ 0x98a8863b62a9bd;
            puVar3[0x76] = puVar3[0x76] ^ 0x9fa8813b63a9bc;
            puVar3[0x77] = puVar3[0x77] ^ 0x9ea8803b64a9bb;
            puVar3[0x78] = puVar3[0x78] ^ 0x9da8833b65a9ba;
            puVar3[0x79] = puVar3[0x79] ^ 0x9ca8823b66a9b9;
            puVar3[0x7a] = puVar3[0x7a] ^ 0x93a88d3b67a9b8;
            puVar3[0x7b] = puVar3[0x7b] ^ 0x92a88c3b68a9b7;
            if (uVar14 == 6) {
              puVar3[0xe2] = 7;
            }
            else if (uVar14 < 6) {
              uVar8 = 0xbad4;
              goto LAB_ram_00007448;
            }
            goto LAB_ram_00007068;
          }
        }
      }
    }
  }
  else if (uVar11 == 0x16) {
    uVar8 = uVar16 & 0xfffffffffffffff8;
    uVar11 = 0;
    if (uVar8 != 0) {
      lVar7 = -uVar8;
      puVar13 = puVar18;
      do {
        *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
        uVar11 = uVar11 + 0x1000100010001;
        puVar13 = puVar13 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    puStack_30 = (undefined *)0x0;
    fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
    puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
    fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
    uVar8 = 0xbadc0de;
    if (uVar14 != 2) goto LAB_ram_00007448;
    if (uVar16 != 0x30) goto LAB_ram_000071d0;
    uVar17 = 0;
    if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
    uStack_18 = apuStack_830[1][0x4e];
    uStack_20 = apuStack_830[1][0x4d];
    uStack_28 = apuStack_830[1][0x4c];
    puStack_30 = (undefined *)apuStack_830[1][0x4b];
    uVar14 = apuStack_830[1][0xe2];
    if (uVar14 < 5) {
      uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
      puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
      uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
      uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
    }
    if (((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2])) ||
       ((uStack_20 != apuStack_830[0][3] || (bVar2 = false, uStack_18 != apuStack_830[0][4])))) {
      bVar2 = true;
    }
    uVar8 = 0xabad1dea;
    if (((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) &&
       (uVar8 = 0xbad4, 6 < uVar14)) {
      if ((((*puVar18 != 0) || (puVar5[2] != 0)) || (puVar5[3] != 0)) || (puVar5[4] != 0)) {
        uVar11 = puVar5[3];
        apuStack_830[1][0x7e] = uVar11;
        uVar16 = puVar5[2];
        apuStack_830[1][0x7d] = uVar16;
        uVar8 = *puVar18;
        apuStack_830[1][0x7c] = uVar8;
        uVar8 = uVar8 ^ 0xfb5ce87aae443c38;
        uVar15 = puVar5[4];
        apuStack_830[1][0x7c] = uVar8;
        apuStack_830[1][0x7d] = uVar16 ^ 0x4a2178451bac3c7;
        apuStack_830[1][0x7e] = uVar11 ^ 0x4a1178751b9c3c6;
        apuStack_830[1][0x7f] = uVar15;
        apuStack_830[1][0x7f] = uVar15 ^ 0x4a0178651b8c3c5;
        apuStack_830[1][0x80] = puVar5[5] ^ 0xcf44133cb352d91c;
        if ((byte)puVar5[6] != 0) {
          pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x289);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          *(byte *)(apuStack_830[1] + 0x51) = 2;
          pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x28c);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          apuStack_830[1][0x51] = apuStack_830[1][0x51] ^ 0xf539f2cf9513d4a1;
        }
        if (uVar14 == 7) {
          apuStack_830[1][0xe2] = 8;
        }
        goto LAB_ram_00007068;
      }
LAB_ram_00007190:
      uVar17 = 0;
      uVar8 = 0xbadc0df2;
    }
  }
  else {
    if (uVar11 != 0x17) goto LAB_ram_00007720;
    uVar8 = uVar16 & 0xfffffffffffffff8;
    uVar11 = 0;
    if (uVar8 != 0) {
      lVar7 = -uVar8;
      puVar13 = puVar18;
      do {
        *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
        uVar11 = uVar11 + 0x1000100010001;
        puVar13 = puVar13 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    puStack_30 = (undefined *)0x0;
    fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
    puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
    fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
    uVar8 = 0xbadc0de;
    if (uVar14 != 2) goto LAB_ram_00007448;
    if (uVar16 != 8) goto LAB_ram_000071d0;
    uStack_18 = apuStack_830[1][0x4e];
    uStack_20 = apuStack_830[1][0x4d];
    uStack_28 = apuStack_830[1][0x4c];
    puStack_30 = (undefined *)apuStack_830[1][0x4b];
    uVar17 = 0;
    if (apuStack_830[1][0xe2] < 5) {
      uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
      puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
      uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
      uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
    }
    if (((puStack_30 != (undefined *)__return_storage_ptr__[2]) ||
        (uStack_28 != __return_storage_ptr__[3])) ||
       ((uStack_20 != __return_storage_ptr__[4] ||
        (bVar2 = false, uStack_18 != __return_storage_ptr__[5])))) {
      bVar2 = true;
    }
    uVar8 = 0xabad1dea;
    if ((*(char *)((longlong)__return_storage_ptr__ + 9) == '\0') || (bVar2)) goto LAB_ram_00007450;
    bVar1 = (byte)*puVar18;
    if (1 < bVar1) {
      uVar8 = 0xbadc0de9;
      if ((bVar1 != 2) || (uVar8 = 0xbad4, apuStack_830[1][0xe2] < 8)) goto LAB_ram_00007450;
      uVar8 = apuStack_830[1][0x7d] ^ 0x4a2178451bac3c7;
      if ((apuStack_830[1][0x7c] == 0xfb5ce87aae443c38) &&
         (((uVar8 == 0 && (apuStack_830[1][0x7e] == 0x4a1178751b9c3c6)) &&
          (apuStack_830[1][0x7f] == 0x4a0178651b8c3c5)))) goto LAB_ram_00007190;
    }
    *(byte *)(apuStack_830[1] + 0x51) = bVar1;
    pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x289);
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x28c);
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    apuStack_830[1][0x51] = apuStack_830[1][0x51] ^ 0xf539f2cf9513d4a1;
LAB_ram_00007068:
    uVar17 = 0x1a;
  }
LAB_ram_00007450:
  if (0xc < uVar17) {
    if (0x13 < uVar17) {
      if (uVar17 < 0x17) {
        if (uVar17 == 0x14) {
          return 0x1500000000;
        }
        if (uVar17 == 0x15) {
          return 0x1600000000;
        }
        return 0x1700000000;
      }
      if (0x18 < uVar17) {
        if (uVar17 != 0x19) {
          return 0;
        }
        return 0x1a00000000;
      }
      if (uVar17 == 0x17) {
        return 0x1800000000;
      }
      return 0x1900000000;
    }
    if (uVar17 < 0x10) {
      if (uVar17 == 0xd) {
        return 0xe00000000;
      }
      if (uVar17 == 0xe) {
        return 0xf00000000;
      }
      return 0x1000000000;
    }
    if (0x11 < uVar17) {
      if (uVar17 == 0x12) {
        return 0x1300000000;
      }
      return 0x1400000000;
    }
    if (uVar17 == 0x10) {
      return 0x1100000000;
    }
    return 0x1200000000;
  }
  if (5 < uVar17) {
    if (uVar17 < 9) {
      if (uVar17 == 6) {
        return 0x700000000;
      }
      if (uVar17 == 7) {
        return 0x800000000;
      }
      return 0x900000000;
    }
    if (10 < uVar17) {
      if (uVar17 == 0xb) {
        return 0xc00000000;
      }
      return 0xd00000000;
    }
    if (uVar17 == 9) {
      return 0xa00000000;
    }
    return 0xb00000000;
  }
  if (2 < uVar17) {
    if (uVar17 == 3) {
      return 0x400000000;
    }
    if (uVar17 == 4) {
      return 0x500000000;
    }
    return 0x600000000;
  }
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      return 0x200000000;
    }
    return 0x300000000;
  }
  if ((uVar8 & 0xffffffff) == 0) {
    return 0x100000000;
  }
LAB_ram_00007720:
  return uVar8 & 0xffffffff;
}


/* ---- fn_52a8 @ 0x53c8 ---- */

/* WARNING: Removing unreachable block (ram,0x000077c8) */

undefined8 fn_52a8(void)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong unaff_R6;
  longlong unaff_R7;
  uint unaff_R9W;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)uStack_30;
  fn_52a8();
  uStack_18 = *(ulonglong *)(unaff_R6 + 0x270);
  uStack_20 = *(ulonglong *)(unaff_R6 + 0x268);
  uStack_28 = *(ulonglong *)(unaff_R6 + 0x260);
  uStack_30 = *(ulonglong *)(unaff_R6 + 600);
  if (*(ulonglong *)(unaff_R6 + 0x710) < 5) {
    uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
    uStack_30 = uStack_30 ^ 0xfb5ce87aae443c38;
    uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
    uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
  }
  uVar3 = uStack_30 << 0x38 | (uStack_30 & 0xff00) << 0x28 | (uStack_30 & 0xff0000) << 0x18 |
          (uStack_30 & 0xff000000) << 8 | uStack_30 >> 8 & 0xff000000 | uStack_30 >> 0x18 & 0xff0000
          | uStack_30 >> 0x28 & 0xff00 | uStack_30 >> 0x38;
  uVar5 = *(ulonglong *)(unaff_R7 + 8);
  uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
          (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
          uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
  if (uVar3 == uVar5) {
    uVar3 = uStack_28 << 0x38 | (uStack_28 & 0xff00) << 0x28 | (uStack_28 & 0xff0000) << 0x18 |
            (uStack_28 & 0xff000000) << 8 | uStack_28 >> 8 & 0xff000000 |
            uStack_28 >> 0x18 & 0xff0000 | uStack_28 >> 0x28 & 0xff00 | uStack_28 >> 0x38;
    uVar5 = *(ulonglong *)(unaff_R7 + 0x10);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 == uVar5) {
      uVar3 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
              (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 |
              uStack_20 >> 0x18 & 0xff0000 | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
      uVar5 = *(ulonglong *)(unaff_R7 + 0x18);
      uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
              uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
      if (uVar3 == uVar5) {
        iVar4 = 0;
        uVar3 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
                (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
                uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
        uVar5 = *(ulonglong *)(unaff_R7 + 0x20);
        uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
                (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
                uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
        if (uVar3 == uVar5) goto LAB_ram_00005590;
      }
    }
  }
  iVar4 = -1;
  if (uVar5 <= uVar3) {
    iVar4 = 1;
  }
LAB_ram_00005590:
  if ((*(char *)(unaff_R7 + 1) != '\0') && (iVar4 == 0 && iVar1 == 0)) {
    *(undefined8 *)(unaff_R6 + 0x2b0) = 0x6e9de2b30b19f9ea;
    unaff_R9W = 0x1a;
  }
  if (unaff_R9W < 0xd) {
    if (unaff_R9W < 6) {
      if (unaff_R9W < 3) {
        if (unaff_R9W == 0) {
          uVar2 = 0xabad1dea;
        }
        else if (unaff_R9W == 1) {
          uVar2 = 0x200000000;
        }
        else {
          uVar2 = 0x300000000;
        }
      }
      else if (unaff_R9W == 3) {
        uVar2 = 0x400000000;
      }
      else if (unaff_R9W == 4) {
        uVar2 = 0x500000000;
      }
      else {
        uVar2 = 0x600000000;
      }
    }
    else if (unaff_R9W < 9) {
      if (unaff_R9W == 6) {
        uVar2 = 0x700000000;
      }
      else if (unaff_R9W == 7) {
        uVar2 = 0x800000000;
      }
      else {
        uVar2 = 0x900000000;
      }
    }
    else if (unaff_R9W < 0xb) {
      if (unaff_R9W == 9) {
        uVar2 = 0xa00000000;
      }
      else {
        uVar2 = 0xb00000000;
      }
    }
    else if (unaff_R9W == 0xb) {
      uVar2 = 0xc00000000;
    }
    else {
      uVar2 = 0xd00000000;
    }
  }
  else if (unaff_R9W < 0x14) {
    if (unaff_R9W < 0x10) {
      if (unaff_R9W == 0xd) {
        uVar2 = 0xe00000000;
      }
      else if (unaff_R9W == 0xe) {
        uVar2 = 0xf00000000;
      }
      else {
        uVar2 = 0x1000000000;
      }
    }
    else if (unaff_R9W < 0x12) {
      if (unaff_R9W == 0x10) {
        uVar2 = 0x1100000000;
      }
      else {
        uVar2 = 0x1200000000;
      }
    }
    else if (unaff_R9W == 0x12) {
      uVar2 = 0x1300000000;
    }
    else {
      uVar2 = 0x1400000000;
    }
  }
  else if (unaff_R9W < 0x17) {
    if (unaff_R9W == 0x14) {
      uVar2 = 0x1500000000;
    }
    else if (unaff_R9W == 0x15) {
      uVar2 = 0x1600000000;
    }
    else {
      uVar2 = 0x1700000000;
    }
  }
  else if (unaff_R9W < 0x19) {
    if (unaff_R9W == 0x17) {
      uVar2 = 0x1800000000;
    }
    else {
      uVar2 = 0x1900000000;
    }
  }
  else {
    uVar2 = 0;
    if (unaff_R9W == 0x19) {
      uVar2 = 0x1a00000000;
    }
  }
  return uVar2;
}


/* ---- fn_7858 @ 0x7978 ---- */

void fn_7858(undefined8 *param_1,char param_2,longlong *param_3,longlong param_4,
                     longlong *param_5)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((((*param_5 != 0x77c2575f37eddd1b) || (param_5[1] != 0x2d6e7a2be59cf048)) ||
      (param_5[2] != 0x7ea41dd6046c6fc4)) || (bVar1 = false, param_5[3] != 0x31797eed4f7e7455)) {
    bVar1 = true;
  }
  if ((!bVar1) || (param_2 == '\0')) {
    *(undefined4 *)param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 1) = 0x1ced;
    *param_1 = 1;
    return;
  }
  if (param_3 != (longlong *)0x0) {
    lVar2 = *param_3;
    if (((*(ulonglong *)(lVar2 + 8) != (*(ulonglong *)(param_4 + 0x388) ^ 0xfb5ce87aae443c38)) ||
        (*(ulonglong *)(lVar2 + 0x10) != (*(ulonglong *)(param_4 + 0x390) ^ 0x4a2178451bac3c7))) ||
       ((*(ulonglong *)(lVar2 + 0x18) != (*(ulonglong *)(param_4 + 0x398) ^ 0x4a1178751b9c3c6) ||
        (bVar1 = false,
        *(ulonglong *)(lVar2 + 0x20) != (*(ulonglong *)(param_4 + 0x3a0) ^ 0x4a0178651b8c3c5))))) {
      bVar1 = true;
    }
    if ((!bVar1) && (*(char *)(lVar2 + 2) == '\0')) {
      uVar3 = 0;
      goto LAB_ram_00007bb0;
    }
  }
  uVar3 = *(ulonglong *)(param_4 + 0x3a8) ^ 0xcf44133cb352d91c;
LAB_ram_00007bb0:
  param_1[1] = uVar3;
  *(undefined4 *)param_1 = 0;
  return;
}


/* ---- fn_7ab8 @ 0x7bd8 ---- */

void fn_7ab8(undefined4 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uVar2 = 0;
  uVar5 = 0xbadc0de;
  if (param_3 == 2) {
    lVar4 = param_2[1];
    lVar3 = *param_2;
    uStack_8 = *(ulonglong *)(lVar4 + 0x270);
    uStack_10 = *(ulonglong *)(lVar4 + 0x268);
    uStack_18 = *(ulonglong *)(lVar4 + 0x260);
    uStack_20 = *(ulonglong *)(lVar4 + 600);
    if (*(ulonglong *)(lVar4 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar3 + 8)) || (uStack_18 != *(ulonglong *)(lVar3 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar3 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar3 + 0x20))) {
      bVar1 = true;
    }
    uVar5 = 0xabad1dea;
    if ((*(char *)(lVar3 + 1) != '\0') && (!bVar1)) {
      if (param_5 != 0x90) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
      }
      if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
      }
      uVar5 = 0xbad1;
      if (((*(longlong *)(param_4 + 0x10) <= *(longlong *)(param_4 + 0x18)) &&
          (*(longlong *)(param_4 + 0x18) <= *(longlong *)(param_4 + 0x40))) &&
         ((*(longlong *)(param_4 + 0x40) <= *(longlong *)(param_4 + 0x48) &&
          ((*(longlong *)(param_4 + 0x48) <= *(longlong *)(param_4 + 0x70) &&
           (*(longlong *)(param_4 + 0x70) <= *(longlong *)(param_4 + 0x78))))))) {
        fn_2fe08__sol_memcpy(lVar4 + 0x58,param_4,0x90);
        uVar5 = *(ulonglong *)(lVar4 + 0x60) ^ 0x962f6f387c135a2c;
        *(ulonglong *)(lVar4 + 0x58) = *(ulonglong *)(lVar4 + 0x58) ^ 0x69d190c683eda5d3;
        *(ulonglong *)(lVar4 + 0x60) = uVar5;
        *(ulonglong *)(lVar4 + 0x68) = *(ulonglong *)(lVar4 + 0x68) ^ 0x962c6f3b7c105a2d;
        *(ulonglong *)(lVar4 + 0x70) = *(ulonglong *)(lVar4 + 0x70) ^ 0x962d6f3a7c115a2e;
        *(ulonglong *)(lVar4 + 0x78) = *(ulonglong *)(lVar4 + 0x78) ^ 0x962a6f3d7c165a2f;
        *(ulonglong *)(lVar4 + 0x80) = *(ulonglong *)(lVar4 + 0x80) ^ 0x962b6f3c7c175a28;
        *(ulonglong *)(lVar4 + 0x88) = *(ulonglong *)(lVar4 + 0x88) ^ 0x96286f3f7c145a29;
        *(ulonglong *)(lVar4 + 0x90) = *(ulonglong *)(lVar4 + 0x90) ^ 0x96296f3e7c155a2a;
        *(ulonglong *)(lVar4 + 0x98) = *(ulonglong *)(lVar4 + 0x98) ^ 0x96266f317c1a5a2b;
        *(ulonglong *)(lVar4 + 0xa0) = *(ulonglong *)(lVar4 + 0xa0) ^ 0x96276f307c1b5a24;
        *(ulonglong *)(lVar4 + 0xa8) = *(ulonglong *)(lVar4 + 0xa8) ^ 0x96246f337c185a25;
        *(ulonglong *)(lVar4 + 0xb0) = *(ulonglong *)(lVar4 + 0xb0) ^ 0x96256f327c195a26;
        *(ulonglong *)(lVar4 + 0xb8) = *(ulonglong *)(lVar4 + 0xb8) ^ 0x96226f357c1e5a27;
        *(ulonglong *)(lVar4 + 0xc0) = *(ulonglong *)(lVar4 + 0xc0) ^ 0x96236f347c1f5a20;
        *(ulonglong *)(lVar4 + 200) = *(ulonglong *)(lVar4 + 200) ^ 0x96206f377c1c5a21;
        *(ulonglong *)(lVar4 + 0xd0) = *(ulonglong *)(lVar4 + 0xd0) ^ 0x96216f367c1d5a22;
        *(ulonglong *)(lVar4 + 0xd8) = *(ulonglong *)(lVar4 + 0xd8) ^ 0x963e6f297c025a23;
        *(ulonglong *)(lVar4 + 0xe0) = *(ulonglong *)(lVar4 + 0xe0) ^ 0x963f6f287c035a3c;
        uVar2 = 0x1a;
      }
    }
  }
  param_1[1] = (int)uVar5;
  *param_1 = uVar2;
  return;
}


/* ---- fn_8068__sol_memcmp @ 0x8188 ---- */

void fn_8068__sol_memcmp(undefined4 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uVar2 = 0;
  puVar6 = (undefined4 *)0xbadc0de;
  if (param_3 == 2) {
    lVar5 = param_2[1];
    lVar3 = *param_2;
    uStack_8 = *(ulonglong *)(lVar5 + 0x270);
    uStack_10 = *(ulonglong *)(lVar5 + 0x268);
    uStack_18 = *(ulonglong *)(lVar5 + 0x260);
    uStack_20 = *(ulonglong *)(lVar5 + 600);
    if (*(ulonglong *)(lVar5 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar3 + 8)) || (uStack_18 != *(ulonglong *)(lVar3 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar3 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar3 + 0x20))) {
      bVar1 = true;
    }
    puVar6 = (undefined4 *)0xabad1dea;
    if ((*(char *)(lVar3 + 1) == '\0') || (bVar1)) goto LAB_ram_00008470;
    if (param_5 != 0xf0) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
    }
    if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
    }
    uVar4 = *(ulonglong *)(param_4 + 0x18);
    if (*(ulonglong *)(param_4 + 0x10) != 0 || uVar4 != 0) {
      if (0xffffffffffff < uVar4) goto LAB_ram_000085c8;
      puVar6 = (undefined4 *)0xbad2;
      if (*(ulonglong *)(param_4 + 0x30) < (*(ulonglong *)(param_4 + 0x10) >> 0x30 | uVar4 << 0x10))
      goto LAB_ram_00008470;
    }
    puVar6 = (undefined4 *)0xbad2;
    if (*(ulonglong *)(param_4 + 0x38) < *(ulonglong *)(param_4 + 0x30)) goto LAB_ram_00008470;
    uVar7 = *(ulonglong *)(param_4 + 0x68);
    uVar4 = *(ulonglong *)(param_4 + 0x80);
    if (*(ulonglong *)(param_4 + 0x60) != 0 || uVar7 != 0) {
      if (0xffffffffffff < uVar7) goto LAB_ram_000085c8;
      uVar2 = *(ulonglong *)(param_4 + 0x60) >> 0x30 | uVar7 << 0x10;
    }
    if (((uVar4 < *(ulonglong *)(param_4 + 0x38)) || (uVar4 < uVar2)) ||
       (*(ulonglong *)(param_4 + 0x88) < uVar4)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(ulonglong *)(param_4 + 0xb8);
      uVar4 = *(ulonglong *)(param_4 + 0xd0);
      uVar7 = 0;
      if (*(ulonglong *)(param_4 + 0xb0) != 0 || uVar2 != 0) {
        if (0xffffffffffff < uVar2) {
LAB_ram_000085c8:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032998 /* .data.rel.ro: &str "contract/src/stateupdate.rs" (len=27) */);
        }
        uVar7 = *(ulonglong *)(param_4 + 0xb0) >> 0x30 | uVar2 << 0x10;
      }
      uVar2 = 0;
      if (((*(ulonglong *)(param_4 + 0x88) <= uVar4) && (uVar7 <= uVar4)) &&
         (uVar4 <= *(ulonglong *)(param_4 + 0xd8))) {
        fn_2fe08__sol_memcpy(lVar5 + 0xe8,param_4,0xf0);
        fn_2930__sol_memcmp(lVar5 + 0xe8);
        uVar2 = 0x1a;
        puVar6 = param_1;
      }
    }
  }
LAB_ram_00008470:
  param_1[1] = (int)puVar6;
  *param_1 = (int)uVar2;
  return;
}


/* ---- fn_84c0__sol_try_find_program_address @ 0x85e0 ---- */

void fn_84c0__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_21;
  undefined8 uStack_19;
  undefined8 uStack_11;
  undefined8 uStack_9;
  undefined1 uStack_1;
  
  puStack_68 = &DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
  uStack_30 = 0x20;
  uStack_40 = 0x20;
  uStack_50 = 0x20;
  uStack_60 = 6;
  uStack_58 = param_2;
  uStack_48 = param_3;
  uStack_38 = param_4;
  fn_2dd00__sol_try_find_program_address(&uStack_21,&puStack_68,4,param_5);
  param_1[3] = uStack_9;
  param_1[2] = uStack_11;
  param_1[1] = uStack_19;
  *param_1 = uStack_21;
  *(undefined1 *)(param_1 + 4) = uStack_1;
  return;
}


/* ---- fn_85a8__sol_try_find_program_address @ 0x86c8 ---- */

void fn_85a8__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_41;
  undefined8 uStack_39;
  undefined8 uStack_31;
  undefined8 uStack_29;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puStack_68 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
  uStack_50 = 0x20;
  uStack_60 = 0x20;
  uStack_70 = 0x20;
  uStack_8 = 0xd3bb8723dd54a054;
  uStack_10 = 0x6dd2523bce0a93a0;
  uStack_18 = 0x7a819dd33c7070c6;
  uStack_20 = 0xe959f7272b74fd7a;
  uStack_78 = param_2;
  uStack_58 = param_3;
  fn_2dd00__sol_try_find_program_address(&uStack_41,&uStack_78,3,&uStack_20);
  param_1[3] = uStack_29;
  param_1[2] = uStack_31;
  param_1[1] = uStack_39;
  *param_1 = uStack_41;
  *(undefined1 *)(param_1 + 4) = uStack_21;
  return;
}


/* ---- fn_86e8__sol_try_find_program_address @ 0x8808 ---- */

void fn_86e8__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_41;
  undefined8 uStack_39;
  undefined8 uStack_31;
  undefined8 uStack_29;
  undefined1 uStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puStack_68 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
  uStack_50 = 0x20;
  uStack_60 = 0x20;
  uStack_70 = 0x20;
  uStack_8 = 0xd3bb8723dd54a054;
  uStack_10 = 0x6dd2523bce0a93a0;
  uStack_18 = 0x7a819dd33c7070c6;
  uStack_20 = 0xe959f7272b74fd7a;
  uStack_78 = param_2;
  uStack_58 = param_3;
  fn_2dd00__sol_try_find_program_address(&uStack_41,&uStack_78,3,&uStack_20);
  param_1[3] = uStack_29;
  param_1[2] = uStack_31;
  param_1[1] = uStack_39;
  *param_1 = uStack_41;
  *(undefined1 *)(param_1 + 4) = uStack_21;
  return;
}


/* ---- fn_8828__sol_invoke_signed_c @ 0x8948 ---- */

void fn_8828__sol_invoke_signed_c(int *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                     longlong param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iStack_150;
  int iStack_14c;
  undefined1 uStack_141;
  longlong alStack_140 [2];
  undefined *puStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  undefined2 uStack_e8;
  byte *pbStack_e0;
  undefined2 uStack_d8;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  char **ppcStack_20;
  undefined8 uStack_18;
  undefined4 *puStack_10;
  undefined8 uStack_8;
  
  uStack_141 = (undefined1)*(undefined8 *)(param_5 + -0xff8);
  lVar6 = *param_4;
  plVar8 = *(longlong **)(param_5 + -0x1000);
  puStack_110 = &uStack_141;
  puStack_130 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
  lStack_120 = *plVar8 + 8;
  uStack_108 = 1;
  uStack_118 = 0x20;
  uStack_128 = 0x20;
  alStack_140[1] = 0x20;
  plStack_100 = alStack_140;
  uStack_f8 = 4;
  pcVar2 = (char *)*param_2;
  pbVar5 = *(byte **)param_3;
  pbStack_e0 = pbVar5 + 8;
  pcStack_f0 = pcVar2 + 8;
  uStack_d8 = 0x101;
  uStack_e8 = 0x101;
  uStack_b8 = 0x93a165d7e1f6dd06;
  uStack_b0 = 0xac79ebce46e1cbd9;
  uStack_a8 = 0x91375b5fed85b41c;
  uStack_a0 = 0xa900ff7e85f58c3a;
  uStack_c0 = 0xa5;
  uStack_c8 = 0x1f1df0;
  uStack_cc = 0;
  pcVar4 = param_3;
  if (*pcVar2 == -1) {
    uStack_68 = 1;
    if (pcVar2[1] == '\0') {
      uStack_68 = 0;
      if (pcVar2[2] == '\0') goto LAB_ram_00008c18;
LAB_ram_00008b20:
      uVar7 = 1;
      uStack_67 = 1;
      cVar1 = pcVar2[3];
    }
    else {
      if (pcVar2[2] != '\0') goto LAB_ram_00008b20;
LAB_ram_00008c18:
      uVar7 = 0;
      uStack_67 = 0;
      cVar1 = pcVar2[3];
    }
    if (cVar1 == '\0') {
      uStack_67 = uVar7;
    }
    uStack_66 = cVar1 != '\0';
    lStack_88 = *(longlong *)(pcVar2 + 0x50);
    pcStack_78 = pcVar2 + 0x28;
    pcStack_80 = pcVar2 + 0x58;
    plStack_90 = (longlong *)(pcVar2 + 0x48);
    uStack_70 = 0;
    pcVar4 = (char *)(ulonglong)*pbVar5;
    if (pcVar4 == (char *)0xff) {
      uStack_50 = *(undefined8 *)(pbVar5 + 0x50);
      pbStack_40 = pbVar5 + 0x28;
      pbStack_48 = pbVar5 + 0x58;
      pbStack_58 = pbVar5 + 0x48;
      if (pbVar5[3] == 0) {
        uStack_2e = 0;
        if (pbVar5[2] == 0) goto LAB_ram_00008e48;
LAB_ram_00008cd8:
        uStack_2f = 1;
      }
      else {
        uStack_2e = 1;
        if (pbVar5[2] != 0) goto LAB_ram_00008cd8;
LAB_ram_00008e48:
        uStack_2f = 0;
      }
      uStack_30 = pbVar5[1] != 0;
      uStack_38 = 0;
      puStack_10 = &uStack_cc;
      ppcStack_20 = &pcStack_f0;
      puStack_28 = &DAT_ram_000319a0 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */;
      uStack_8 = 0x34;
      uStack_18 = 2;
      alStack_140[0] = lVar6 + 8;
      pcStack_98 = pcStack_f0;
      pbStack_60 = pbStack_e0;
      fn_8c88(&puStack_28,&pcStack_98,2,&plStack_100,1);
      iVar3 = 8;
      pcStack_98 = param_3;
      plStack_90 = plVar8;
      lStack_88 = lVar6 + 8;
      fn_2b5e0__sol_invoke_signed_c(&iStack_150,&pcStack_98,8,0);
      if (iStack_150 == 0x1a) {
        iStack_150 = 0x1a;
        iStack_14c = iVar3;
      }
      goto LAB_ram_00008be0;
    }
  }
  iStack_150 = 0xb;
  iStack_14c = (int)pcVar4;
LAB_ram_00008be0:
  param_1[1] = iStack_14c;
  *param_1 = iStack_150;
  return;
}


/* ---- fn_8c88 @ 0x8da8 ---- */

void fn_8c88(void)

{
  int iVar1;
  int *unaff_R8;
  int iStack_150;
  int iStack_14c;
  
  fn_8c88();
  iVar1 = 8;
  fn_2b5e0__sol_invoke_signed_c(&iStack_150,&stack0xffffffffffffff68,8,0);
  if (iStack_150 == 0x1a) {
    iStack_150 = 0x1a;
    iStack_14c = iVar1;
  }
  unaff_R8[1] = iStack_14c;
  *unaff_R8 = iStack_150;
  return;
}


/* ---- fn_8d70__sol_invoke_signed_c @ 0x8e90 ---- */

void fn_8d70__sol_invoke_signed_c(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,
                     undefined8 *param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined1 uStack_181;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  byte **ppbStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined6 uStack_126;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined7 uStack_116;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined8 uStack_dc;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  uStack_181 = (undefined1)*(undefined8 *)(param_5 + -0xff8);
  pbVar4 = (byte *)*param_4;
  pbVar7 = (byte *)**(undefined8 **)(param_5 + -0x1000);
  puStack_150 = &uStack_181;
  puStack_170 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
  pbVar11 = pbVar7 + 8;
  pbVar9 = pbVar4 + 8;
  uStack_148 = 1;
  uStack_158 = 0x20;
  uStack_168 = 0x20;
  uStack_178 = 0x20;
  ppbStack_140 = &pbStack_180;
  uStack_138 = 4;
  pcStack_c8 = (char *)*param_2;
  pcVar10 = (char *)*param_3;
  pcVar8 = pcVar10 + 8;
  uStack_120 = SUB81(pcVar8,0);
  uStack_11f = (undefined7)((ulonglong)pcVar8 >> 8);
  pcStack_d0 = pcStack_c8 + 8;
  uStack_130 = SUB81(pcStack_d0,0);
  uStack_12f = (undefined7)((ulonglong)pcStack_d0 >> 8);
  uStack_118 = 1;
  uStack_117 = 1;
  uStack_128 = 1;
  uStack_127 = 1;
  uStack_f8._4_4_ = 0xe1f6dd06;
  uStack_f0 = 0x75ee;
  uStack_ee = 0xde8f;
  uStack_ec = 0xbc5d4218;
  uStack_e8._0_4_ = 0xdacd6ce4;
  uStack_e8._4_4_ = 0x4dfc1ab6;
  uStack_e0 = 0xb983;
  uStack_de = 0x270d;
  uStack_dc = 0xfc8ba1d828f9bdfe;
  uStack_fc = 200;
  uStack_f8._0_4_ = 0;
  uStack_108._4_4_ = 0x22d580;
  uStack_100 = 0;
  uStack_fe = 0;
  uStack_108._0_4_ = 0;
  if (*pcStack_c8 == -1) {
    uStack_a0 = 1;
    if (pcStack_c8[1] == '\0') {
      uStack_a0 = 0;
      if (pcStack_c8[2] != '\0') goto LAB_ram_00009090;
LAB_ram_00009178:
      uVar3 = 0;
      uStack_9f = 0;
      cVar1 = pcStack_c8[3];
    }
    else {
      if (pcStack_c8[2] == '\0') goto LAB_ram_00009178;
LAB_ram_00009090:
      uVar3 = 1;
      uStack_9f = 1;
      cVar1 = pcStack_c8[3];
    }
    if (cVar1 == '\0') {
      uStack_9f = uVar3;
    }
    uStack_9e = cVar1 != '\0';
    uStack_c0 = *(undefined8 *)(pcStack_c8 + 0x50);
    pcStack_b0 = pcStack_c8 + 0x28;
    pcStack_b8 = pcStack_c8 + 0x58;
    pcStack_c8 = pcStack_c8 + 0x48;
    uStack_a8 = 0;
    if (*pcVar10 == -1) {
      uStack_68 = 1;
      if (pcVar10[1] == '\0') {
        uStack_68 = 0;
        if (pcVar10[2] != '\0') goto LAB_ram_000091d8;
LAB_ram_00009738:
        uVar3 = 0;
        uStack_67 = 0;
        cVar1 = pcVar10[3];
      }
      else {
        if (pcVar10[2] == '\0') goto LAB_ram_00009738;
LAB_ram_000091d8:
        uVar3 = 1;
        uStack_67 = 1;
        cVar1 = pcVar10[3];
      }
      if (cVar1 == '\0') {
        uStack_67 = uVar3;
      }
      uStack_66 = cVar1 != '\0';
      uStack_88 = *(undefined8 *)(pcVar10 + 0x50);
      uStack_70 = 0;
      puStack_10 = &uStack_108;
      puStack_20 = (undefined8 *)&uStack_130;
      puStack_28 = &DAT_ram_000319a0 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */;
      uStack_8 = 0x34;
      uStack_18 = 2;
      pbStack_180 = pbVar9;
      pbStack_160 = pbVar11;
      pbStack_98 = (byte *)pcVar8;
      pbStack_90 = (byte *)(pcVar10 + 0x48);
      pbStack_80 = (byte *)(pcVar10 + 0x58);
      pbStack_78 = (byte *)(pcVar10 + 0x28);
      fn_9208(&puStack_28,&pcStack_d0,2,&ppbStack_140,1);
      uStack_130 = 0x12;
      uStack_12f = (undefined7)*(undefined8 *)pbVar9;
      uStack_128 = (undefined1)((ulonglong)*(undefined8 *)pbVar9 >> 0x38);
      uVar5 = *(undefined8 *)(pbVar4 + 0x10);
      uStack_127 = (undefined1)uVar5;
      uStack_126 = (undefined6)((ulonglong)uVar5 >> 8);
      uStack_120 = (undefined1)((ulonglong)uVar5 >> 0x38);
      uStack_11f = (undefined7)*(undefined8 *)(pbVar4 + 0x18);
      uStack_118 = (undefined1)((ulonglong)*(undefined8 *)(pbVar4 + 0x18) >> 0x38);
      uStack_117 = (undefined1)*(undefined8 *)(pbVar4 + 0x20);
      uStack_116 = (undefined7)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 8);
      uStack_e0 = 0;
      uStack_f0 = 0;
      uStack_100 = 1;
      if (*pcVar10 == -1) {
        uStack_a0 = 1;
        if (pcVar10[1] == '\0') {
          uStack_a0 = 0;
          if (pcVar10[2] != '\0') goto LAB_ram_00009408;
LAB_ram_00009788:
          uVar3 = 0;
          uStack_9f = 0;
          cVar1 = pcVar10[3];
        }
        else {
          if (pcVar10[2] == '\0') goto LAB_ram_00009788;
LAB_ram_00009408:
          uVar3 = 1;
          uStack_9f = 1;
          cVar1 = pcVar10[3];
        }
        if (cVar1 == '\0') {
          uStack_9f = uVar3;
        }
        uStack_9e = cVar1 != '\0';
        uStack_c0 = *(undefined8 *)(pcVar10 + 0x50);
        uStack_a8 = 0;
        if ((*pbVar7 & 0x88) == 0x88) {
          uStack_68 = 1;
          if (pbVar7[1] == 0) {
            uStack_68 = 0;
            if (pbVar7[2] != 0) goto LAB_ram_000094f8;
LAB_ram_000097c8:
            uVar3 = 0;
            uStack_67 = 0;
            bVar2 = pbVar7[3];
          }
          else {
            if (pbVar7[2] == 0) goto LAB_ram_000097c8;
LAB_ram_000094f8:
            uVar3 = 1;
            uStack_67 = 1;
            bVar2 = pbVar7[3];
          }
          if (bVar2 == 0) {
            uStack_67 = uVar3;
          }
          uStack_66 = bVar2 != 0;
          uStack_88 = *(undefined8 *)(pbVar7 + 0x50);
          pbStack_78 = pbVar7 + 0x28;
          pbStack_80 = pbVar7 + 0x58;
          pbStack_90 = pbVar7 + 0x48;
          uStack_70 = 0;
          if ((*pbVar4 & 0x88) == 0x88) {
            uStack_50 = *(undefined8 *)(pbVar4 + 0x50);
            pbStack_40 = pbVar4 + 0x28;
            pbStack_48 = pbVar4 + 0x58;
            pbStack_58 = pbVar4 + 0x48;
            if (pbVar4[3] == 0) {
              uStack_2e = 0;
              if (pbVar4[2] != 0) goto LAB_ram_00009650;
LAB_ram_00009800:
              uStack_2f = 0;
            }
            else {
              uStack_2e = 1;
              if (pbVar4[2] == 0) goto LAB_ram_00009800;
LAB_ram_00009650:
              uStack_2f = 1;
            }
            uStack_30 = pbVar4[1] != 0;
            uStack_38 = 0;
            puStack_10 = (undefined8 *)&uStack_130;
            puStack_20 = &uStack_108;
            puStack_28 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
            uStack_8 = 0x21;
            uStack_18 = 3;
            pcStack_d0 = pcVar8;
            pcStack_c8 = pcVar10 + 0x48;
            pcStack_b8 = pcVar10 + 0x58;
            pcStack_b0 = pcVar10 + 0x28;
            pbStack_98 = pbVar11;
            pbStack_60 = pbVar9;
            uStack_e8 = pbVar9;
            uStack_f8 = pbVar11;
            uStack_108 = pcVar8;
            fn_95e8(&puStack_28,&pcStack_d0,3,8,0);
            uVar6 = 0x1a;
            goto LAB_ram_00009150;
          }
        }
      }
      uVar6 = 0xb;
      goto LAB_ram_00009150;
    }
  }
  uVar6 = 0xb;
LAB_ram_00009150:
  *param_1 = uVar6;
  return;
}


/* ---- fn_9208 @ 0x9328 ---- */

void fn_9208(void)

{
  undefined4 uVar1;
  undefined8 *unaff_R7;
  char *unaff_R8;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined4 *puStack_190;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_127;
  undefined8 uStack_11f;
  undefined8 uStack_117;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  fn_9208();
  uStack_130 = 0x12;
  uStack_12f = *unaff_R7;
  uStack_127 = unaff_R7[1];
  uStack_11f = unaff_R7[2];
  uStack_117 = unaff_R7[3];
  if (((*unaff_R8 == -1) && ((*pbStack_1a8 & 0x88) == 0x88)) && ((*pbStack_1a0 & 0x88) == 0x88)) {
    puStack_10 = &uStack_130;
    puStack_20 = &stack0xfffffffffffffef8;
    puStack_28 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
    uStack_8 = 0x21;
    uStack_18 = 3;
    fn_95e8(&puStack_28,&stack0xffffffffffffff30,3,8,0);
    uVar1 = 0x1a;
  }
  else {
    uVar1 = 0xb;
  }
  *puStack_190 = uVar1;
  return;
}


/* ---- fn_95e8 @ 0x9708 ---- */

void fn_95e8(void)

{
  undefined8 uStack_190;
  
  fn_95e8();
  *uStack_190 = 0x1a;
  return;
}


/* ---- fn_9700 @ 0x9820 ---- */

void fn_9700(int *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined8 *puVar14;
  char *pcVar15;
  longlong *plVar16;
  int iStack_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  undefined *puStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  char cStack_191;
  undefined *puStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  longlong lStack_178;
  longlong *plStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined **ppuStack_f0;
  undefined2 uStack_e8;
  char *pcStack_e0;
  undefined2 uStack_d8;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  char *pcStack_90;
  undefined8 *puStack_88;
  char *pcStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  longlong **pplStack_20;
  undefined8 uStack_18;
  undefined4 *puStack_10;
  undefined8 uStack_8;
  
  iVar3 = 0;
  iVar13 = 0xbadc0de;
  if (param_3 != 8) goto LAB_ram_00009d90;
  iVar13 = -0x5452e216;
  pcVar11 = (char *)*param_2;
  if (pcVar11[1] == '\0') goto LAB_ram_00009d90;
  if ((((*(longlong *)(pcVar11 + 8) != -0x32b20de6c4775e40) ||
       (*(longlong *)(pcVar11 + 0x10) != -0x15200f0917dbfd5f)) ||
      (*(longlong *)(pcVar11 + 0x18) != -0x47ebde6f8ba50bd0)) ||
     (bVar2 = false, *(longlong *)(pcVar11 + 0x20) != 0x4164f987ea077494)) {
    bVar2 = true;
  }
  if (bVar2) goto LAB_ram_00009d90;
  if (param_5 != 0x200) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
  }
  if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
  }
  puVar14 = param_2 + 1;
  ppuStack_98 = (undefined **)&DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
  plVar4 = (longlong *)(param_4 + 0x180);
  plVar16 = (longlong *)(param_4 + 0x1a0);
  puVar8 = (undefined8 *)(param_4 + 0x1c0);
  pcStack_60 = (char *)0x20;
  uStack_70 = 0x20;
  pcStack_80 = (char *)0x20;
  pcStack_90 = (char *)0x6;
  puStack_88 = puVar8;
  plStack_78 = plVar16;
  plStack_68 = plVar4;
  fn_2dd00__sol_try_find_program_address(&puStack_190,&ppuStack_98,4,&DAT_ram_00031900 /* .rodata: hex: 7a fd 74 2b 27 f7 59 e9 c6 70 70 3c d3 9d 81 7a */);
  lStack_1a0 = lStack_178;
  lStack_1a8 = (longlong)puStack_180;
  lStack_1b0 = lStack_188;
  puStack_1b8 = puStack_190;
  cStack_191 = (char)plStack_170;
  pcVar15 = (char *)*puVar14;
  pcStack_e0 = pcVar15 + 8;
  if (((puStack_190 != *(undefined **)(pcVar15 + 8)) ||
      (lStack_188 != *(longlong *)(pcVar15 + 0x10))) ||
     ((puStack_180 != (undefined8 *)*(longlong *)(pcVar15 + 0x18) ||
      (bVar2 = false, lStack_178 != *(longlong *)(pcVar15 + 0x20))))) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = 0;
    iVar13 = 0xbadface;
    goto LAB_ram_00009d90;
  }
  pcStack_150 = &cStack_191;
  puStack_190 = &DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
  uStack_148 = 1;
  uStack_158 = 0x20;
  uStack_168 = 0x20;
  lStack_178 = 0x20;
  lStack_188 = 6;
  ppuStack_140 = &puStack_190;
  uStack_138 = 5;
  uStack_d8 = 0x101;
  uStack_e8 = 0x101;
  uStack_b8 = 0x2b74fd7a;
  uStack_b4 = 0xe959f727;
  uStack_b0 = 0x3c7070c6;
  uStack_ac = 0x7a819dd3;
  uStack_a8 = 0x6dd2523bce0a93a0;
  uStack_a0 = 0xd3bb8723dd54a054;
  uStack_c0 = 0x6c0;
  uStack_bc = 0;
  uStack_c8 = 0xc51c00;
  uStack_c4 = 0;
  uStack_cc = 0;
  pcStack_80 = pcVar15;
  if (*pcVar11 == -1) {
    uVar7 = 1;
    if (pcVar11[1] == '\0') {
      uVar7 = 0;
      if (pcVar11[2] == '\0') goto LAB_ram_00009dc8;
LAB_ram_00009cd0:
      uVar10 = 1;
      uVar9 = 1;
      cVar1 = pcVar11[3];
    }
    else {
      if (pcVar11[2] != '\0') goto LAB_ram_00009cd0;
LAB_ram_00009dc8:
      uVar10 = 0;
      uVar9 = 0;
      cVar1 = pcVar11[3];
    }
    if (cVar1 == '\0') {
      uVar9 = uVar10;
    }
    puStack_88 = *(undefined8 **)(pcVar11 + 0x50);
    plStack_78 = (longlong *)(pcVar11 + 0x28);
    pcStack_80 = pcVar11 + 0x58;
    pcStack_90 = pcVar11 + 0x48;
    plStack_68 = (longlong *)
                 CONCAT71(CONCAT61(CONCAT51(plStack_68._3_5_,cVar1 != '\0'),uVar9),uVar7);
    uStack_70 = 0;
    if (*pcVar15 == -1) {
      uStack_50 = *(undefined8 *)(pcVar15 + 0x50);
      pcStack_40 = pcVar15 + 0x28;
      pcStack_58 = pcVar15 + 0x48;
      uStack_2e = pcVar15[3] != '\0';
      uStack_2f = pcVar15[2] != '\0';
      uStack_30 = pcVar15[1] != '\0';
      pcVar12 = pcVar15 + 0x58;
      uStack_38 = 0;
      puStack_10 = &uStack_cc;
      pplStack_20 = (longlong **)&ppuStack_f0;
      puStack_28 = &DAT_ram_000319a0 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */;
      uStack_8 = 0x34;
      uStack_18 = 2;
      puStack_180 = puVar8;
      plStack_170 = plVar16;
      plStack_160 = plVar4;
      ppuStack_f0 = (undefined **)(pcVar11 + 8);
      ppuStack_98 = (undefined **)(pcVar11 + 8);
      pcStack_60 = pcStack_e0;
      pcStack_48 = pcVar12;
      fn_9e60(&puStack_28,&ppuStack_98,2,&ppuStack_140,1);
      puStack_88 = (undefined8 *)&DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
      uStack_70 = 0x20;
      pcStack_80 = (char *)0x20;
      pcStack_90 = (char *)0x20;
      puStack_10 = (undefined4 *)0xd3bb8723dd54a054;
      uStack_18 = 0x6dd2523bce0a93a0;
      pplStack_20 = (longlong **)0x7a819dd33c7070c6;
      puStack_28 = (undefined *)0xe959f7272b74fd7a;
      ppuStack_98 = &puStack_1b8;
      plStack_78 = plVar16;
      fn_2dd00__sol_try_find_program_address(&uStack_cc,&ppuStack_98,3,&puStack_28);
      lStack_118 = CONCAT44(uStack_b0,uStack_b4);
      lStack_120 = CONCAT44(uStack_b8,uStack_bc);
      lStack_128 = CONCAT44(uStack_c0,uStack_c4);
      lStack_130 = CONCAT44(uStack_c8,uStack_cc);
      puStack_88 = (undefined8 *)&DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
      uStack_70 = 0x20;
      pcStack_80 = (char *)0x20;
      pcStack_90 = (char *)0x20;
      puStack_10 = (undefined4 *)0xd3bb8723dd54a054;
      uStack_18 = 0x6dd2523bce0a93a0;
      pplStack_20 = (longlong **)0x7a819dd33c7070c6;
      puStack_28 = (undefined *)0xe959f7272b74fd7a;
      ppuStack_98 = &puStack_1b8;
      plStack_78 = plVar4;
      fn_2dd00__sol_try_find_program_address(&uStack_cc,&ppuStack_98,3,&puStack_28);
      lStack_f8 = CONCAT44(uStack_b0,uStack_b4);
      lStack_100 = CONCAT44(uStack_b8,uStack_bc);
      lStack_108 = CONCAT44(uStack_c0,uStack_c4);
      lStack_110 = CONCAT44(uStack_c8,uStack_cc);
      lVar5 = param_2[4];
      if (((*plVar16 != *(longlong *)(lVar5 + 8)) ||
          (*(longlong *)(param_4 + 0x1a8) != *(longlong *)(lVar5 + 0x10))) ||
         ((*(longlong *)(param_4 + 0x1b0) != *(longlong *)(lVar5 + 0x18) ||
          (bVar2 = false, *(longlong *)(param_4 + 0x1b8) != *(longlong *)(lVar5 + 0x20))))) {
        bVar2 = true;
      }
      iVar3 = 0;
      iVar13 = -0x5452e216;
      if (!bVar2) {
        lVar5 = param_2[5];
        if ((((*plVar4 != *(longlong *)(lVar5 + 8)) ||
             (*(longlong *)(param_4 + 0x188) != *(longlong *)(lVar5 + 0x10))) ||
            (*(longlong *)(param_4 + 400) != *(longlong *)(lVar5 + 0x18))) ||
           (bVar2 = false, *(longlong *)(param_4 + 0x198) != *(longlong *)(lVar5 + 0x20))) {
          bVar2 = true;
        }
        if (!bVar2) {
          lVar5 = param_2[2];
          if (((lStack_130 != *(longlong *)(lVar5 + 8)) ||
              (lStack_128 != *(longlong *)(lVar5 + 0x10))) ||
             ((lStack_120 != *(longlong *)(lVar5 + 0x18) ||
              (bVar2 = false, lStack_118 != *(longlong *)(lVar5 + 0x20))))) {
            bVar2 = true;
          }
          iVar13 = -0x4520531d;
          if (!bVar2) {
            lVar5 = param_2[3];
            if (((lStack_110 != *(longlong *)(lVar5 + 8)) ||
                (lStack_108 != *(longlong *)(lVar5 + 0x10))) ||
               ((lStack_100 != *(longlong *)(lVar5 + 0x18) ||
                (bVar2 = false, lStack_f8 != *(longlong *)(lVar5 + 0x20))))) {
              bVar2 = true;
            }
            if (!bVar2) {
              fn_8828__sol_invoke_signed_c(&iStack_1c0,param_2,param_2 + 2,puVar14);
              if (iStack_1c0 == 0x1a) {
                fn_8828__sol_invoke_signed_c(&iStack_1c8,param_2,param_2 + 3,puVar14);
                if (iStack_1c8 == 0x1a) {
                  fn_16748__custom_panic(pcVar12,*(undefined8 *)(pcVar15 + 0x50));
                  fn_2fe08__sol_memcpy(pcVar12,param_4 + 0xf0,0x90);
                  fn_2fe08__sol_memcpy(pcVar15 + 0xe8,param_4,0xf0);
                  *(undefined8 *)(pcVar15 + 0x270) = *(undefined8 *)(param_4 + 0x1d8);
                  *(undefined8 *)(pcVar15 + 0x268) = *(undefined8 *)(param_4 + 0x1d0);
                  *(undefined8 *)(pcVar15 + 0x260) = *(undefined8 *)(param_4 + 0x1c8);
                  *(undefined8 *)(pcVar15 + 600) = *puVar8;
                  *(undefined8 *)(pcVar15 + 0x210) = *(undefined8 *)(param_4 + 0x1b8);
                  *(undefined8 *)(pcVar15 + 0x208) = *(undefined8 *)(param_4 + 0x1b0);
                  *(undefined8 *)(pcVar15 + 0x200) = *(undefined8 *)(param_4 + 0x1a8);
                  *(longlong *)(pcVar15 + 0x1f8) = *plVar16;
                  *(longlong *)(pcVar15 + 0x1d8) = *plVar4;
                  *(undefined8 *)(pcVar15 + 0x1e0) = *(undefined8 *)(param_4 + 0x188);
                  *(undefined8 *)(pcVar15 + 0x1e8) = *(undefined8 *)(param_4 + 400);
                  *(undefined8 *)(pcVar15 + 0x1f0) = *(undefined8 *)(param_4 + 0x198);
                  *(longlong *)(pcVar15 + 0x238) = lStack_130;
                  *(longlong *)(pcVar15 + 0x240) = lStack_128;
                  *(longlong *)(pcVar15 + 0x248) = lStack_120;
                  *(longlong *)(pcVar15 + 0x250) = lStack_118;
                  *(longlong *)(pcVar15 + 0x218) = lStack_110;
                  *(longlong *)(pcVar15 + 0x220) = lStack_108;
                  *(longlong *)(pcVar15 + 0x228) = lStack_100;
                  *(longlong *)(pcVar15 + 0x230) = lStack_f8;
                  pcVar15[0x290] = cStack_191;
                  pcVar15[0x291] = '\0';
                  pcVar15[0x292] = '\0';
                  pcVar15[0x293] = '\0';
                  pcVar15[0x294] = '\0';
                  pcVar15[0x294] = '\0';
                  pcVar15[0x295] = '\0';
                  pcVar15[0x296] = '\0';
                  pcVar15[0x297] = '\0';
                  pcVar15[0x288] = *(char *)(param_4 + 0x1f0);
                  pcVar15[0x289] = '\0';
                  pcVar15[0x28a] = '\0';
                  pcVar15[0x28b] = '\0';
                  pcVar15[0x28c] = '\0';
                  pcVar15[0x28c] = '\0';
                  pcVar15[0x28d] = '\0';
                  pcVar15[0x28e] = '\0';
                  pcVar15[0x28f] = '\0';
                  uVar6 = *(undefined8 *)(param_4 + 0x1e0);
                  *(undefined8 *)(pcVar15 + 0x280) = *(undefined8 *)(param_4 + 0x1e8);
                  *(undefined8 *)(pcVar15 + 0x278) = uVar6;
                  pcVar15[0x328] = '\0';
                  pcVar15[0x329] = '\0';
                  pcVar15[0x32a] = '\0';
                  pcVar15[0x32b] = '\0';
                  pcVar15[0x32c] = '\0';
                  pcVar15[0x32d] = '\0';
                  pcVar15[0x32e] = '\0';
                  pcVar15[0x32f] = '\0';
                  pcVar15[0x330] = '\0';
                  pcVar15[0x331] = '\0';
                  pcVar15[0x332] = '\0';
                  pcVar15[0x333] = '\0';
                  pcVar15[0x334] = '\0';
                  pcVar15[0x335] = '\0';
                  pcVar15[0x336] = '\0';
                  pcVar15[0x337] = '\0';
                  pcVar15[0x338] = '\0';
                  pcVar15[0x339] = '\0';
                  pcVar15[0x33a] = '\0';
                  pcVar15[0x33b] = '\0';
                  pcVar15[0x33c] = '\0';
                  pcVar15[0x33d] = '\0';
                  pcVar15[0x33e] = '\0';
                  pcVar15[0x33f] = '\0';
                  pcVar15[0x340] = '\0';
                  pcVar15[0x341] = '\0';
                  pcVar15[0x342] = '\0';
                  pcVar15[0x343] = '\0';
                  pcVar15[0x344] = '\0';
                  pcVar15[0x345] = '\0';
                  pcVar15[0x346] = '\0';
                  pcVar15[0x347] = '\0';
                  pcVar15[0x348] = '\0';
                  pcVar15[0x349] = '\0';
                  pcVar15[0x34a] = '\0';
                  pcVar15[0x34b] = '\0';
                  pcVar15[0x34c] = '\0';
                  pcVar15[0x34d] = '\0';
                  pcVar15[0x34e] = '\0';
                  pcVar15[0x34f] = '\0';
                  pcVar15[0x350] = '\0';
                  pcVar15[0x351] = '\0';
                  pcVar15[0x352] = '\0';
                  pcVar15[0x353] = '\0';
                  pcVar15[0x354] = '\0';
                  pcVar15[0x355] = '\0';
                  pcVar15[0x356] = '\0';
                  pcVar15[0x357] = '\0';
                  pcVar15[0x358] = '\0';
                  pcVar15[0x359] = '\0';
                  pcVar15[0x35a] = '\0';
                  pcVar15[0x35b] = '\0';
                  pcVar15[0x35c] = '\0';
                  pcVar15[0x35d] = '\0';
                  pcVar15[0x35e] = '\0';
                  pcVar15[0x35f] = '\0';
                  pcVar15[0x360] = '\0';
                  pcVar15[0x361] = '\0';
                  pcVar15[0x362] = '\0';
                  pcVar15[0x363] = '\0';
                  pcVar15[0x364] = '\0';
                  pcVar15[0x365] = '\0';
                  pcVar15[0x366] = '\0';
                  pcVar15[0x367] = '\0';
                  pcVar15[0x368] = '\0';
                  pcVar15[0x369] = '\0';
                  pcVar15[0x36a] = '\0';
                  pcVar15[0x36b] = '\0';
                  pcVar15[0x36c] = '\0';
                  pcVar15[0x36d] = '\0';
                  pcVar15[0x36e] = '\0';
                  pcVar15[0x36f] = '\0';
                  pcVar15[0x370] = '\0';
                  pcVar15[0x371] = '\0';
                  pcVar15[0x372] = '\0';
                  pcVar15[0x373] = '\0';
                  pcVar15[0x374] = '\0';
                  pcVar15[0x375] = '\0';
                  pcVar15[0x376] = '\0';
                  pcVar15[0x377] = '\0';
                  pcVar15[0x380] = '\0';
                  pcVar15[0x381] = '\0';
                  pcVar15[0x382] = '\0';
                  pcVar15[899] = '\0';
                  pcVar15[900] = '\0';
                  pcVar15[0x385] = '\0';
                  pcVar15[0x386] = '\0';
                  pcVar15[0x387] = '\0';
                  fn_16748__custom_panic(pcVar12,*(undefined8 *)(pcVar15 + 0x50));
                  fn_2a6a8__sol_memcmp(pcVar12);
                  iVar3 = 0x1a;
                }
                else {
                  pcVar12 = (char *)(ulonglong)uStack_1c4;
                  iVar3 = iStack_1c8;
                }
              }
              else {
                pcVar12 = (char *)(ulonglong)uStack_1bc;
                iVar3 = iStack_1c0;
              }
              iVar13 = (int)pcVar12;
            }
          }
        }
      }
      goto LAB_ram_00009d90;
    }
  }
  iVar13 = (int)pcStack_80;
  iVar3 = 0xb;
LAB_ram_00009d90:
  param_1[1] = iVar13;
  *param_1 = iVar3;
  return;
}


/* ---- fn_9e60 @ 0x9f80 ---- */

void fn_9e60(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *unaff_R9;
  ulonglong uStack_218;
  longlong lStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  undefined8 *puStack_1e8;
  longlong *plStack_1e0;
  int *piStack_1d8;
  longlong *plStack_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 auStack_1b8 [39];
  undefined1 uStack_191;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_cc;
  longlong lStack_c4;
  longlong lStack_bc;
  longlong lStack_b4;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  fn_9e60();
  puStack_88 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
  uStack_80 = 0x20;
  uStack_90 = 0x20;
  uStack_10 = 0xd3bb8723dd54a054;
  uStack_18 = 0x6dd2523bce0a93a0;
  uStack_20 = 0x7a819dd33c7070c6;
  uStack_28 = 0xe959f7272b74fd7a;
  puStack_98 = auStack_1b8;
  fn_2dd00__sol_try_find_program_address(&lStack_cc,&puStack_98,3,&uStack_28);
  lStack_118 = lStack_b4;
  lStack_120 = lStack_bc;
  lStack_128 = lStack_c4;
  lStack_130 = lStack_cc;
  puStack_88 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
  uStack_80 = 0x20;
  uStack_90 = 0x20;
  uStack_10 = 0xd3bb8723dd54a054;
  uStack_18 = 0x6dd2523bce0a93a0;
  uStack_20 = 0x7a819dd33c7070c6;
  uStack_28 = 0xe959f7272b74fd7a;
  puStack_98 = auStack_1b8;
  fn_2dd00__sol_try_find_program_address(&lStack_cc,&puStack_98,3,&uStack_28);
  lStack_f8 = lStack_b4;
  lStack_100 = lStack_bc;
  lStack_108 = lStack_c4;
  lStack_110 = lStack_cc;
  lVar3 = *plStack_1d0;
  if ((((*unaff_R9 != *(longlong *)(lVar3 + 8)) || (unaff_R9[1] != *(longlong *)(lVar3 + 0x10))) ||
      (unaff_R9[2] != *(longlong *)(lVar3 + 0x18))) ||
     (bVar1 = false, unaff_R9[3] != *(longlong *)(lVar3 + 0x20))) {
    bVar1 = true;
  }
  iVar2 = 0;
  iVar5 = -0x5452e216;
  if (!bVar1) {
    lVar3 = *(longlong *)(lStack_1f0 + 0x28);
    if (((*plStack_1e0 != *(longlong *)(lVar3 + 8)) ||
        (plStack_1e0[1] != *(longlong *)(lVar3 + 0x10))) ||
       ((plStack_1e0[2] != *(longlong *)(lVar3 + 0x18) ||
        (bVar1 = false, plStack_1e0[3] != *(longlong *)(lVar3 + 0x20))))) {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = *(longlong *)(lStack_1f0 + 0x10);
      if (((lStack_130 != *(longlong *)(lVar3 + 8)) || (lStack_128 != *(longlong *)(lVar3 + 0x10)))
         || ((lStack_120 != *(longlong *)(lVar3 + 0x18) ||
             (bVar1 = false, lStack_118 != *(longlong *)(lVar3 + 0x20))))) {
        bVar1 = true;
      }
      iVar5 = -0x4520531d;
      if (!bVar1) {
        lVar3 = *(longlong *)(lStack_1f0 + 0x18);
        if ((((lStack_cc != *(longlong *)(lVar3 + 8)) || (lStack_c4 != *(longlong *)(lVar3 + 0x10)))
            || (lStack_bc != *(longlong *)(lVar3 + 0x18))) ||
           (bVar1 = false, lStack_b4 != *(longlong *)(lVar3 + 0x20))) {
          bVar1 = true;
        }
        if (!bVar1) {
          fn_8828__sol_invoke_signed_c(&iStack_1c0,lStack_1f0,(longlong *)(lStack_1f0 + 0x10),uStack_1f8);
          if (iStack_1c0 == 0x1a) {
            fn_8828__sol_invoke_signed_c(&iStack_1c8,lStack_1f0,(longlong *)(lStack_1f0 + 0x18),uStack_1f8);
            if (iStack_1c8 == 0x1a) {
              fn_16748__custom_panic(uStack_218,*(undefined8 *)(lStack_208 + 0x50));
              fn_2fe08__sol_memcpy(uStack_218,lStack_200 + 0xf0,0x90);
              fn_2fe08__sol_memcpy(lStack_208 + 0xe8,lStack_200,0xf0);
              *(undefined8 *)(lStack_208 + 0x270) = puStack_1e8[3];
              *(undefined8 *)(lStack_208 + 0x268) = puStack_1e8[2];
              *(undefined8 *)(lStack_208 + 0x260) = puStack_1e8[1];
              *(undefined8 *)(lStack_208 + 600) = *puStack_1e8;
              *(longlong *)(lStack_208 + 0x210) = unaff_R9[3];
              *(longlong *)(lStack_208 + 0x208) = unaff_R9[2];
              *(longlong *)(lStack_208 + 0x200) = unaff_R9[1];
              *(longlong *)(lStack_208 + 0x1f8) = *unaff_R9;
              *(longlong *)(lStack_208 + 0x1d8) = *plStack_1e0;
              *(longlong *)(lStack_208 + 0x1e0) = plStack_1e0[1];
              *(longlong *)(lStack_208 + 0x1e8) = plStack_1e0[2];
              *(longlong *)(lStack_208 + 0x1f0) = plStack_1e0[3];
              *(longlong *)(lStack_208 + 0x238) = lStack_130;
              *(longlong *)(lStack_208 + 0x240) = lStack_128;
              *(longlong *)(lStack_208 + 0x248) = lStack_120;
              *(longlong *)(lStack_208 + 0x250) = lStack_118;
              *(longlong *)(lStack_208 + 0x218) = lStack_110;
              *(longlong *)(lStack_208 + 0x220) = lStack_108;
              *(longlong *)(lStack_208 + 0x228) = lStack_100;
              *(longlong *)(lStack_208 + 0x230) = lStack_f8;
              *(undefined1 *)(lStack_208 + 0x290) = uStack_191;
              *(undefined4 *)(lStack_208 + 0x291) = 0;
              *(undefined4 *)(lStack_208 + 0x294) = 0;
              *(undefined1 *)(lStack_208 + 0x288) = *(undefined1 *)(lStack_200 + 0x1f0);
              *(undefined4 *)(lStack_208 + 0x289) = 0;
              *(undefined4 *)(lStack_208 + 0x28c) = 0;
              uVar4 = *(undefined8 *)(lStack_200 + 0x1e0);
              *(undefined8 *)(lStack_208 + 0x280) = *(undefined8 *)(lStack_200 + 0x1e8);
              *(undefined8 *)(lStack_208 + 0x278) = uVar4;
              *(undefined8 *)(lStack_208 + 0x328) = 0;
              *(undefined8 *)(lStack_208 + 0x330) = 0;
              *(undefined8 *)(lStack_208 + 0x338) = 0;
              *(undefined8 *)(lStack_208 + 0x340) = 0;
              *(undefined8 *)(lStack_208 + 0x348) = 0;
              *(undefined8 *)(lStack_208 + 0x350) = 0;
              *(undefined8 *)(lStack_208 + 0x358) = 0;
              *(undefined8 *)(lStack_208 + 0x360) = 0;
              *(undefined8 *)(lStack_208 + 0x368) = 0;
              *(undefined8 *)(lStack_208 + 0x370) = 0;
              *(undefined8 *)(lStack_208 + 0x380) = 0;
              fn_16748__custom_panic(uStack_218,*(undefined8 *)(lStack_208 + 0x50));
              fn_2a6a8__sol_memcmp(uStack_218);
              iVar2 = 0x1a;
            }
            else {
              uStack_218 = (ulonglong)uStack_1c4;
              iVar2 = iStack_1c8;
            }
          }
          else {
            uStack_218 = (ulonglong)uStack_1bc;
            iVar2 = iStack_1c0;
          }
          iVar5 = (int)uStack_218;
        }
      }
    }
  }
  piStack_1d8[1] = iVar5;
  *piStack_1d8 = iVar2;
  return;
}


/* ---- fn_a740 @ 0xa860 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_a740(uint *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int aiStack_490 [2];
  int aiStack_488 [2];
  uint uStack_480;
  uint uStack_47c;
  uint auStack_478 [2];
  uint uStack_470;
  uint uStack_46c;
  uint auStack_468 [2];
  undefined1 auStack_460 [240];
  undefined1 auStack_370 [16];
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined1 auStack_2e0 [80];
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  byte bStack_1ce;
  longlong **pplStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  undefined1 uStack_199;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  longlong *plStack_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined2 uStack_130;
  longlong lStack_128;
  undefined2 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  longlong *plStack_e0;
  ulonglong *puStack_d8;
  longlong **pplStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 uStack_b0;
  longlong **pplStack_60;
  undefined8 **ppuStack_58;
  longlong *plStack_50;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 **ppuStack_28;
  longlong ***ppplStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar2 = 0;
  uVar11 = 0xbadc0de1;
  if (param_3 < 10) goto LAB_ram_0000b768;
  lVar12 = *param_2;
  uVar11 = 0xabad1dea;
  if (*(char *)(lVar12 + 1) == '\0') goto LAB_ram_0000b768;
  if ((((*(longlong *)(lVar12 + 8) != -0x32b20de6c4775e40) ||
       (*(longlong *)(lVar12 + 0x10) != -0x15200f0917dbfd5f)) ||
      (*(longlong *)(lVar12 + 0x18) != -0x47ebde6f8ba50bd0)) ||
     (bVar1 = false, *(longlong *)(lVar12 + 0x20) != 0x4164f987ea077494)) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_0000b768;
  if (param_5 != 0x2a0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
  }
  if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
  }
  fn_2fe08__sol_memcpy(auStack_460,param_4,0x2a0);
  lVar7 = param_2[7];
  if (((*(longlong *)(lVar7 + 8) != -0x6c5e9a281e0922fa) ||
      (*(longlong *)(lVar7 + 0x10) != -0x53861431b91e3427)) ||
     ((*(longlong *)(lVar7 + 0x18) != -0x6ec8a4a0127a4be4 ||
      (bVar1 = false, *(longlong *)(lVar7 + 0x20) != -0x56ff00817a0a73c6)))) {
    bVar1 = true;
  }
  lVar3 = param_2[8];
  if (bVar1) {
    if (((*(longlong *)(lVar7 + 8) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar7 + 0x10) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar7 + 0x18) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(lVar7 + 0x20) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_ram_0000aaf0;
  }
  else {
LAB_ram_0000aaf0:
    if ((((*(longlong *)(lVar3 + 8) != -0x6c5e9a281e0922fa) ||
         (*(longlong *)(lVar3 + 0x10) != -0x53861431b91e3427)) ||
        (*(longlong *)(lVar3 + 0x18) != -0x6ec8a4a0127a4be4)) ||
       (bVar1 = false, *(longlong *)(lVar3 + 0x20) != -0x56ff00817a0a73c6)) {
      bVar1 = true;
    }
    if ((!bVar1) ||
       (((*(longlong *)(lVar3 + 8) == -0x21708a111e0922fa &&
         (*(longlong *)(lVar3 + 0x10) == -0x2532931b43a2bde8)) &&
        ((*(longlong *)(lVar3 + 0x18) == 0x270db9834dfc1ab6 &&
         (*(longlong *)(lVar3 + 0x20) == -0x3745e27d7064202)))))) {
      lVar7 = param_2[2];
      if (((*(longlong *)(lVar7 + 8) != lStack_270) || (*(longlong *)(lVar7 + 0x10) != lStack_268))
         || ((*(longlong *)(lVar7 + 0x18) != lStack_260 ||
             (bVar1 = false, *(longlong *)(lVar7 + 0x20) != lStack_258)))) {
        bVar1 = true;
      }
      uVar2 = 0;
      uVar11 = 0xbadc0de4;
      if (bVar1) goto LAB_ram_0000b768;
      lVar3 = param_2[3];
      if ((((*(longlong *)(lVar3 + 8) != lStack_290) || (*(longlong *)(lVar3 + 0x10) != lStack_288))
          || (*(longlong *)(lVar3 + 0x18) != lStack_280)) ||
         (bVar1 = false, *(longlong *)(lVar3 + 0x20) != lStack_278)) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_ram_0000b768;
      plVar4 = param_2 + 4;
      lVar8 = *plVar4;
      if (((*(longlong *)(lVar8 + 8) != lStack_230) || (*(longlong *)(lVar8 + 0x10) != lStack_228))
         || ((*(longlong *)(lVar8 + 0x18) != lStack_220 ||
             (bVar1 = false, *(longlong *)(lVar8 + 0x20) != lStack_218)))) {
        bVar1 = true;
      }
      uVar11 = 0xbadc0de5;
      if (bVar1) goto LAB_ram_0000b768;
      plVar5 = param_2 + 5;
      lVar6 = *plVar5;
      if (((*(longlong *)(lVar6 + 8) != lStack_250) || (*(longlong *)(lVar6 + 0x10) != lStack_248))
         || ((*(longlong *)(lVar6 + 0x18) != lStack_240 ||
             (bVar1 = false, *(longlong *)(lVar6 + 0x20) != lStack_238)))) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_ram_0000b768;
      puVar9 = (ulonglong *)(param_2 + 1);
      fn_84c0__sol_try_find_program_address(&pplStack_d0);
      lStack_1a8 = lStack_b8;
      lStack_1b0 = lStack_c0;
      lStack_1b8 = lStack_c8;
      pplStack_1c0 = pplStack_d0;
      uStack_199 = uStack_b0;
      uVar10 = *puVar9;
      lStack_128 = uVar10 + 8;
      if ((((pplStack_d0 != *(longlong ***)(uVar10 + 8)) ||
           (lStack_c8 != *(longlong *)(uVar10 + 0x10))) ||
          (lStack_c0 != *(longlong *)(uVar10 + 0x18))) ||
         (bVar1 = false, lStack_b8 != *(longlong *)(uVar10 + 0x20))) {
        bVar1 = true;
      }
      if (bVar1) {
        uVar2 = 0;
        uVar11 = 0xbadc0de7;
        goto LAB_ram_0000b768;
      }
      puStack_158 = &uStack_199;
      puStack_198 = &DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
      uStack_150 = 1;
      uStack_160 = 0x20;
      uStack_170 = 0x20;
      uStack_180 = 0x20;
      uStack_190 = 6;
      ppuStack_148 = &puStack_198;
      uStack_140 = 5;
      uStack_120 = 0x101;
      uStack_130 = 0x101;
      uStack_104 = 0x2b74fd7a;
      uStack_100 = 0xe959f727;
      uStack_fc = 0x3c7070c6;
      uStack_f8 = 0x7a819dd3;
      uStack_f4 = 0x6dd2523bce0a93a0;
      uStack_ec = 0xd3bb8723dd54a054;
      uStack_10c = 0x6c0;
      uStack_108 = 0;
      uStack_114 = 0xc51c00;
      uStack_110 = 0;
      uStack_118 = 0;
      ppplStack_20 = &pplStack_60;
      ppuStack_28 = &pplStack_d0;
      puStack_48 = &uStack_118;
      plStack_50 = &lStack_138;
      ppuStack_58 = &pplStack_d0;
      pplStack_60 = &plStack_e0;
      uStack_8 = 2;
      uStack_10 = 2;
      uStack_18 = 0;
      uStack_30 = 2;
      uStack_38 = 2;
      uStack_40 = 0;
      puStack_188 = &uStack_210;
      plStack_178 = &lStack_270;
      plStack_168 = &lStack_290;
      lStack_138 = lVar12 + 8;
      plStack_e0 = param_2;
      puStack_d8 = puVar9;
      uVar2 = fn_0158(&pplStack_60);
      uVar11 = uVar10;
      if (uVar2 != 0x1a) goto LAB_ram_0000b768;
      puStack_48 = &uStack_118;
      ppuStack_58 = (undefined8 **)&lStack_138;
      pplStack_60 = (longlong **)&DAT_ram_000319a0 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */;
      uStack_40 = 0x34;
      plStack_50 = (longlong *)0x2;
      fn_b260(&pplStack_60,&pplStack_d0,2,&ppuStack_148,1);
      if (((*(longlong *)(lVar7 + 0x28) != -0x21708a111e0922fa) ||
          (*(longlong *)(lVar7 + 0x30) != -0x2532931b43a2bde8)) ||
         ((*(longlong *)(lVar7 + 0x38) != 0x270db9834dfc1ab6 ||
          (bVar1 = false, *(longlong *)(lVar7 + 0x40) != -0x3745e27d7064202)))) {
        bVar1 = true;
      }
      if (bVar1) {
        fn_85a8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_270);
      }
      else {
        fn_86e8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_270);
      }
      uStack_100 = (undefined4)lStack_b8;
      uStack_fc = (undefined4)((ulonglong)lStack_b8 >> 0x20);
      uStack_108 = (undefined4)lStack_c0;
      uStack_104 = (undefined4)((ulonglong)lStack_c0 >> 0x20);
      uStack_110 = (undefined4)lStack_c8;
      uStack_10c = (undefined4)((ulonglong)lStack_c8 >> 0x20);
      uStack_118 = SUB84(pplStack_d0,0);
      uStack_114 = (undefined4)((ulonglong)pplStack_d0 >> 0x20);
      if (((*(longlong *)(lVar3 + 0x28) != -0x21708a111e0922fa) ||
          (*(longlong *)(lVar3 + 0x30) != -0x2532931b43a2bde8)) ||
         ((*(longlong *)(lVar3 + 0x38) != 0x270db9834dfc1ab6 ||
          (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x3745e27d7064202)))) {
        bVar1 = true;
      }
      if (bVar1) {
        fn_85a8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_290);
      }
      else {
        fn_86e8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_290);
      }
      puStack_48 = (undefined4 *)lStack_b8;
      plStack_50 = (longlong *)lStack_c0;
      ppuStack_58 = (undefined8 **)lStack_c8;
      pplStack_60 = pplStack_d0;
      if ((((CONCAT44(uStack_114,uStack_118) != *(longlong *)(lVar8 + 8)) ||
           (CONCAT44(uStack_10c,uStack_110) != *(longlong *)(lVar8 + 0x10))) ||
          (CONCAT44(uStack_104,uStack_108) != *(longlong *)(lVar8 + 0x18))) ||
         (bVar1 = false, CONCAT44(uStack_fc,uStack_100) != *(longlong *)(lVar8 + 0x20))) {
        bVar1 = true;
      }
      uVar11 = 0xbadc0de8;
      if (!bVar1) {
        if (((pplStack_d0 != *(longlong ***)(lVar6 + 8)) ||
            (lStack_c8 != *(longlong *)(lVar6 + 0x10))) ||
           ((lStack_c0 != *(longlong *)(lVar6 + 0x18) ||
            (bVar1 = false, lStack_b8 != *(longlong *)(lVar6 + 0x20))))) {
          bVar1 = true;
        }
        if (!bVar1) {
          if (((*(longlong *)(lVar7 + 0x28) != -0x6c5e9a281e0922fa) ||
              (*(longlong *)(lVar7 + 0x30) != -0x53861431b91e3427)) ||
             ((*(longlong *)(lVar7 + 0x38) != -0x6ec8a4a0127a4be4 ||
              (bVar1 = false, *(longlong *)(lVar7 + 0x40) != -0x56ff00817a0a73c6)))) {
            bVar1 = true;
          }
          if (bVar1) {
            if ((((*(longlong *)(lVar7 + 0x28) != -0x21708a111e0922fa) ||
                 (*(longlong *)(lVar7 + 0x30) != -0x2532931b43a2bde8)) ||
                (*(longlong *)(lVar7 + 0x38) != 0x270db9834dfc1ab6)) ||
               (bVar1 = false, *(longlong *)(lVar7 + 0x40) != -0x3745e27d7064202)) {
              bVar1 = true;
            }
            uVar11 = 0xbadc0de3;
            if (bVar1) goto LAB_ram_0000b758;
            fn_8d70__sol_invoke_signed_c(auStack_468,param_2,plVar4,puVar9);
            uVar2 = auStack_468[0];
            if (auStack_468[0] != 0x1a) goto LAB_ram_0000b768;
          }
          else {
            fn_8828__sol_invoke_signed_c(&uStack_470,param_2,plVar4,puVar9);
            if (uStack_470 != 0x1a) {
              uVar11 = (ulonglong)uStack_46c;
              uVar2 = uStack_470;
              goto LAB_ram_0000b768;
            }
          }
          if (((*(longlong *)(lVar3 + 0x28) != -0x6c5e9a281e0922fa) ||
              (*(longlong *)(lVar3 + 0x30) != -0x53861431b91e3427)) ||
             ((*(longlong *)(lVar3 + 0x38) != -0x6ec8a4a0127a4be4 ||
              (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x56ff00817a0a73c6)))) {
            bVar1 = true;
          }
          if (bVar1) {
            if (((*(longlong *)(lVar3 + 0x28) != -0x21708a111e0922fa) ||
                (*(longlong *)(lVar3 + 0x30) != -0x2532931b43a2bde8)) ||
               ((*(longlong *)(lVar3 + 0x38) != 0x270db9834dfc1ab6 ||
                (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x3745e27d7064202)))) {
              bVar1 = true;
            }
            uVar11 = 0xbadc0de3;
            if (bVar1) goto LAB_ram_0000b758;
            fn_8d70__sol_invoke_signed_c(auStack_478,param_2,plVar5,puVar9);
            uVar2 = auStack_478[0];
            if (auStack_478[0] != 0x1a) goto LAB_ram_0000b768;
          }
          else {
            fn_8828__sol_invoke_signed_c(&uStack_480,param_2,plVar5,puVar9);
            if (uStack_480 != 0x1a) {
              uVar11 = (ulonglong)uStack_47c;
              uVar2 = uStack_480;
              goto LAB_ram_0000b768;
            }
          }
          uVar11 = 0xbadc0de9;
          if ((((bStack_1ce < 3) && (uVar11 = 0xbadc0dea, lStack_360 <= lStack_358)) &&
              (lStack_358 <= lStack_330)) &&
             (((lStack_330 <= lStack_328 && (lStack_328 <= lStack_300)) &&
              (lStack_300 <= lStack_2f8)))) {
            fn_167c8__custom_panic(aiStack_488,auStack_460);
            uVar11 = 0xbadc0deb;
            if (aiStack_488[0] == 0x1a) {
              fn_16518(aiStack_490);
              uVar2 = 0;
              uVar11 = 0xbadc0dec;
              if (aiStack_490[0] == 0x1a) {
                uVar11 = uVar10 + 0x58;
                fn_16748__custom_panic(uVar11,*(undefined8 *)(uVar10 + 0x50));
                fn_2fe28__sol_memmove(uVar11,auStack_370,0x90);
                fn_2fe28__sol_memmove(uVar10 + 0xe8,auStack_460,0xf0);
                *(longlong *)(uVar10 + 0x1d8) = lStack_290;
                *(longlong *)(uVar10 + 0x1f0) = lStack_278;
                *(longlong *)(uVar10 + 0x1e8) = lStack_280;
                *(longlong *)(uVar10 + 0x1e0) = lStack_288;
                *(longlong *)(uVar10 + 0x210) = lStack_258;
                *(longlong *)(uVar10 + 0x208) = lStack_260;
                *(longlong *)(uVar10 + 0x200) = lStack_268;
                *(longlong *)(uVar10 + 0x1f8) = lStack_270;
                *(longlong *)(uVar10 + 0x230) = lStack_238;
                *(longlong *)(uVar10 + 0x228) = lStack_240;
                *(longlong *)(uVar10 + 0x220) = lStack_248;
                *(longlong *)(uVar10 + 0x218) = lStack_250;
                *(longlong *)(uVar10 + 0x250) = lStack_218;
                *(longlong *)(uVar10 + 0x248) = lStack_220;
                *(longlong *)(uVar10 + 0x240) = lStack_228;
                *(longlong *)(uVar10 + 0x238) = lStack_230;
                *(undefined8 *)(uVar10 + 0x270) = uStack_1f8;
                *(undefined8 *)(uVar10 + 0x268) = uStack_200;
                *(undefined8 *)(uVar10 + 0x260) = uStack_208;
                *(undefined8 *)(uVar10 + 600) = uStack_210;
                *(undefined8 *)(uVar10 + 0x278) = uStack_1f0;
                *(undefined8 *)(uVar10 + 0x280) = uStack_1e8;
                *(byte *)(uVar10 + 0x288) = bStack_1ce;
                *(undefined4 *)(uVar10 + 0x28c) = 0;
                *(undefined4 *)(uVar10 + 0x289) = 0;
                *(undefined1 *)(uVar10 + 0x290) = uStack_199;
                *(undefined8 *)(uVar10 + 0x310) = 0;
                *(undefined8 *)(uVar10 + 0x308) = 0;
                *(undefined8 *)(uVar10 + 0x300) = 0;
                *(undefined8 *)(uVar10 + 0x2f8) = 0;
                *(undefined8 *)(uVar10 + 0x2f0) = 0;
                *(undefined8 *)(uVar10 + 0x2e8) = 0;
                *(undefined8 *)(uVar10 + 0x2e0) = 0;
                *(undefined8 *)(uVar10 + 0x2d8) = 0;
                *(undefined8 *)(uVar10 + 0x2d0) = 0;
                *(undefined8 *)(uVar10 + 0x2c8) = 0;
                *(undefined8 *)(uVar10 + 0x2c0) = 0;
                *(undefined8 *)(uVar10 + 0x2b8) = 0;
                *(undefined8 *)(uVar10 + 0x2b0) = 0;
                *(undefined8 *)(uVar10 + 0x2a8) = 0;
                *(undefined8 *)(uVar10 + 0x2a0) = 0;
                *(undefined8 *)(uVar10 + 0x298) = 0;
                *(undefined4 *)(uVar10 + 0x294) = 0;
                *(undefined4 *)(uVar10 + 0x291) = 0;
                *(undefined8 *)(uVar10 + 800) = uStack_1e0;
                *(undefined2 *)(uVar10 + 0x318) = uStack_1d0;
                *(undefined4 *)(uVar10 + 0x31a) = 0;
                *(undefined2 *)(uVar10 + 0x31e) = 0;
                fn_2fe08__sol_memcpy(uVar10 + 0x328,auStack_2e0,0x50);
                *(undefined8 *)(uVar10 + 0x378) = uStack_1d8;
                *(undefined8 *)(uVar10 + 0x400) = 0;
                *(undefined8 *)(uVar10 + 0x3f8) = 0;
                *(undefined8 *)(uVar10 + 0x3f0) = 0;
                *(undefined8 *)(uVar10 + 1000) = 0;
                *(undefined8 *)(uVar10 + 0x3e0) = 0;
                *(undefined8 *)(uVar10 + 0x3d8) = 0;
                *(undefined8 *)(uVar10 + 0x3d0) = 0;
                *(undefined8 *)(uVar10 + 0x3c8) = 0;
                *(undefined8 *)(uVar10 + 0x3c0) = 0;
                *(undefined8 *)(uVar10 + 0x3b8) = 0;
                *(undefined8 *)(uVar10 + 0x3b0) = 0;
                *(undefined8 *)(uVar10 + 0x3a8) = 0;
                *(undefined8 *)(uVar10 + 0x3a0) = 0;
                *(undefined8 *)(uVar10 + 0x398) = 0;
                *(undefined8 *)(uVar10 + 0x390) = 0;
                *(undefined8 *)(uVar10 + 0x388) = 0;
                *(undefined8 *)(uVar10 + 0x380) = 0;
                fn_2fe48__sol_memset(uVar10 + 0x408,0,0x308);
                *(undefined8 *)(uVar10 + 0x710) = 4;
                fn_2a6a8__sol_memcmp(uVar11);
                uVar2 = 0x1a;
              }
              goto LAB_ram_0000b768;
            }
          }
        }
      }
LAB_ram_0000b758:
      uVar2 = 0;
      goto LAB_ram_0000b768;
    }
  }
  uVar11 = 0xbadc0de3;
  uVar2 = 0;
LAB_ram_0000b768:
  param_1[1] = (uint)uVar11;
  *param_1 = uVar2;
  return;
}


/* ---- fn_b260 @ 0xb380 ---- */

void fn_b260(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_R7;
  ulonglong uVar5;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  longlong lStack_4c8;
  longlong lStack_4b8;
  longlong lStack_4a8;
  longlong lStack_4a0;
  int *piStack_498;
  int aiStack_490 [2];
  int aiStack_488 [2];
  int iStack_480;
  uint uStack_47c;
  int aiStack_478 [2];
  int iStack_470;
  uint uStack_46c;
  int aiStack_468 [2];
  undefined1 auStack_460 [240];
  undefined1 auStack_370 [16];
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined1 auStack_2e0 [144];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  byte bStack_1ce;
  undefined1 auStack_1c0 [39];
  undefined1 uStack_199;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  fn_b260();
  if ((((*(longlong *)(lStack_4a0 + 0x28) != -0x21708a111e0922fa) ||
       (*(longlong *)(lStack_4a0 + 0x30) != -0x2532931b43a2bde8)) ||
      (*(longlong *)(lStack_4a0 + 0x38) != 0x270db9834dfc1ab6)) ||
     (bVar1 = false, *(longlong *)(lStack_4a0 + 0x40) != -0x3745e27d7064202)) {
    bVar1 = true;
  }
  if (bVar1) {
    fn_85a8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4d8);
  }
  else {
    fn_86e8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4d8);
  }
  lStack_100 = lStack_b8;
  lStack_108 = lStack_c0;
  lStack_110 = lStack_c8;
  lStack_118 = lStack_d0;
  if (((*(longlong *)(lStack_4a8 + 0x28) != -0x21708a111e0922fa) ||
      (*(longlong *)(lStack_4a8 + 0x30) != -0x2532931b43a2bde8)) ||
     ((*(longlong *)(lStack_4a8 + 0x38) != 0x270db9834dfc1ab6 ||
      (bVar1 = false, *(longlong *)(lStack_4a8 + 0x40) != -0x3745e27d7064202)))) {
    bVar1 = true;
  }
  if (bVar1) {
    fn_85a8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4e0);
  }
  else {
    fn_86e8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4e0);
  }
  lStack_48 = lStack_b8;
  lStack_50 = lStack_c0;
  lStack_58 = lStack_c8;
  lStack_60 = lStack_d0;
  if (((lStack_118 != *(longlong *)(lStack_4b8 + 8)) ||
      (lStack_110 != *(longlong *)(lStack_4b8 + 0x10))) ||
     ((lStack_108 != *(longlong *)(lStack_4b8 + 0x18) ||
      (bVar1 = false, lStack_100 != *(longlong *)(lStack_4b8 + 0x20))))) {
    bVar1 = true;
  }
  uVar5 = 0xbadc0de8;
  if (!bVar1) {
    if ((((lStack_d0 != *(longlong *)(lStack_4c8 + 8)) ||
         (lStack_c8 != *(longlong *)(lStack_4c8 + 0x10))) ||
        (lStack_c0 != *(longlong *)(lStack_4c8 + 0x18))) ||
       (bVar1 = false, lStack_b8 != *(longlong *)(lStack_4c8 + 0x20))) {
      bVar1 = true;
    }
    if (!bVar1) {
      if (((*(longlong *)(lStack_4a0 + 0x28) != -0x6c5e9a281e0922fa) ||
          (*(longlong *)(lStack_4a0 + 0x30) != -0x53861431b91e3427)) ||
         ((*(longlong *)(lStack_4a0 + 0x38) != -0x6ec8a4a0127a4be4 ||
          (bVar1 = false, *(longlong *)(lStack_4a0 + 0x40) != -0x56ff00817a0a73c6)))) {
        bVar1 = true;
      }
      if (bVar1) {
        if (((*(longlong *)(lStack_4a0 + 0x28) != -0x21708a111e0922fa) ||
            (*(longlong *)(lStack_4a0 + 0x30) != -0x2532931b43a2bde8)) ||
           ((*(longlong *)(lStack_4a0 + 0x38) != 0x270db9834dfc1ab6 ||
            (bVar1 = false, *(longlong *)(lStack_4a0 + 0x40) != -0x3745e27d7064202)))) {
          bVar1 = true;
        }
        uVar5 = 0xbadc0de3;
        if (bVar1) goto LAB_ram_0000b758;
        fn_8d70__sol_invoke_signed_c(aiStack_468);
        if (aiStack_468[0] != 0x1a) goto LAB_ram_0000b768;
      }
      else {
        fn_8828__sol_invoke_signed_c(&iStack_470);
        if (iStack_470 != 0x1a) {
          uVar5 = (ulonglong)uStack_46c;
          aiStack_468[0] = iStack_470;
          goto LAB_ram_0000b768;
        }
      }
      if ((((*(longlong *)(lStack_4a8 + 0x28) != -0x6c5e9a281e0922fa) ||
           (*(longlong *)(lStack_4a8 + 0x30) != -0x53861431b91e3427)) ||
          (*(longlong *)(lStack_4a8 + 0x38) != -0x6ec8a4a0127a4be4)) ||
         (bVar1 = false, *(longlong *)(lStack_4a8 + 0x40) != -0x56ff00817a0a73c6)) {
        bVar1 = true;
      }
      if (bVar1) {
        if (((*(longlong *)(lStack_4a8 + 0x28) != -0x21708a111e0922fa) ||
            (*(longlong *)(lStack_4a8 + 0x30) != -0x2532931b43a2bde8)) ||
           ((*(longlong *)(lStack_4a8 + 0x38) != 0x270db9834dfc1ab6 ||
            (bVar1 = false, *(longlong *)(lStack_4a8 + 0x40) != -0x3745e27d7064202)))) {
          bVar1 = true;
        }
        uVar5 = 0xbadc0de3;
        if (bVar1) goto LAB_ram_0000b758;
        fn_8d70__sol_invoke_signed_c(aiStack_478);
        aiStack_468[0] = aiStack_478[0];
        if (aiStack_478[0] != 0x1a) goto LAB_ram_0000b768;
      }
      else {
        fn_8828__sol_invoke_signed_c(&iStack_480);
        if (iStack_480 != 0x1a) {
          uVar5 = (ulonglong)uStack_47c;
          aiStack_468[0] = iStack_480;
          goto LAB_ram_0000b768;
        }
      }
      uVar5 = 0xbadc0de9;
      if (((bStack_1ce < 3) && (uVar5 = 0xbadc0dea, lStack_360 <= lStack_358)) &&
         ((lStack_358 <= lStack_330 &&
          (((lStack_330 <= lStack_328 && (lStack_328 <= lStack_300)) && (lStack_300 <= lStack_2f8)))
          ))) {
        fn_167c8__custom_panic(aiStack_488,auStack_460);
        uVar5 = 0xbadc0deb;
        if (aiStack_488[0] == 0x1a) {
          fn_16518(aiStack_490);
          uVar5 = 0xbadc0dec;
          aiStack_468[0] = 0;
          if (aiStack_490[0] == 0x1a) {
            uVar5 = unaff_R7 + 0x58;
            fn_16748__custom_panic(uVar5,*(undefined8 *)(unaff_R7 + 0x50));
            fn_2fe28__sol_memmove(uVar5,auStack_370,0x90);
            fn_2fe28__sol_memmove(unaff_R7 + 0xe8,auStack_460,0xf0);
            uVar2 = puStack_4e0[1];
            uVar3 = puStack_4e0[2];
            uVar4 = puStack_4e0[3];
            *(undefined8 *)(unaff_R7 + 0x1d8) = *puStack_4e0;
            *(undefined8 *)(unaff_R7 + 0x1f0) = uVar4;
            *(undefined8 *)(unaff_R7 + 0x1e8) = uVar3;
            *(undefined8 *)(unaff_R7 + 0x1e0) = uVar2;
            uVar2 = *puStack_4d8;
            uVar3 = puStack_4d8[1];
            uVar4 = puStack_4d8[2];
            *(undefined8 *)(unaff_R7 + 0x210) = puStack_4d8[3];
            *(undefined8 *)(unaff_R7 + 0x208) = uVar4;
            *(undefined8 *)(unaff_R7 + 0x200) = uVar3;
            *(undefined8 *)(unaff_R7 + 0x1f8) = uVar2;
            *(undefined8 *)(unaff_R7 + 0x230) = uStack_238;
            *(undefined8 *)(unaff_R7 + 0x228) = uStack_240;
            *(undefined8 *)(unaff_R7 + 0x220) = uStack_248;
            *(undefined8 *)(unaff_R7 + 0x218) = uStack_250;
            *(undefined8 *)(unaff_R7 + 0x250) = uStack_218;
            *(undefined8 *)(unaff_R7 + 0x248) = uStack_220;
            *(undefined8 *)(unaff_R7 + 0x240) = uStack_228;
            *(undefined8 *)(unaff_R7 + 0x238) = uStack_230;
            uVar2 = *puStack_4f0;
            uVar3 = puStack_4f0[1];
            uVar4 = puStack_4f0[2];
            *(undefined8 *)(unaff_R7 + 0x270) = puStack_4f0[3];
            *(undefined8 *)(unaff_R7 + 0x268) = uVar4;
            *(undefined8 *)(unaff_R7 + 0x260) = uVar3;
            *(undefined8 *)(unaff_R7 + 600) = uVar2;
            *(undefined8 *)(unaff_R7 + 0x278) = uStack_1f0;
            *(undefined8 *)(unaff_R7 + 0x280) = uStack_1e8;
            *(byte *)(unaff_R7 + 0x288) = bStack_1ce;
            *(undefined4 *)(unaff_R7 + 0x28c) = 0;
            *(undefined4 *)(unaff_R7 + 0x289) = 0;
            *(undefined1 *)(unaff_R7 + 0x290) = uStack_199;
            *(undefined8 *)(unaff_R7 + 0x310) = 0;
            *(undefined8 *)(unaff_R7 + 0x308) = 0;
            *(undefined8 *)(unaff_R7 + 0x300) = 0;
            *(undefined8 *)(unaff_R7 + 0x2f8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2f0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2e8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2e0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2d8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2d0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2c8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2c0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2b8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2b0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2a8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2a0) = 0;
            *(undefined8 *)(unaff_R7 + 0x298) = 0;
            *(undefined4 *)(unaff_R7 + 0x294) = 0;
            *(undefined4 *)(unaff_R7 + 0x291) = 0;
            *(undefined8 *)(unaff_R7 + 800) = uStack_1e0;
            *(undefined2 *)(unaff_R7 + 0x318) = uStack_1d0;
            *(undefined4 *)(unaff_R7 + 0x31a) = 0;
            *(undefined2 *)(unaff_R7 + 0x31e) = 0;
            fn_2fe08__sol_memcpy(unaff_R7 + 0x328,auStack_2e0,0x50);
            *(undefined8 *)(unaff_R7 + 0x378) = uStack_1d8;
            *(undefined8 *)(unaff_R7 + 0x400) = 0;
            *(undefined8 *)(unaff_R7 + 0x3f8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3f0) = 0;
            *(undefined8 *)(unaff_R7 + 1000) = 0;
            *(undefined8 *)(unaff_R7 + 0x3e0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3d8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3d0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3c8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3c0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3b8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3b0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3a8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3a0) = 0;
            *(undefined8 *)(unaff_R7 + 0x398) = 0;
            *(undefined8 *)(unaff_R7 + 0x390) = 0;
            *(undefined8 *)(unaff_R7 + 0x388) = 0;
            *(undefined8 *)(unaff_R7 + 0x380) = 0;
            fn_2fe48__sol_memset(unaff_R7 + 0x408,0,0x308);
            *(undefined8 *)(unaff_R7 + 0x710) = 4;
            fn_2a6a8__sol_memcmp(uVar5);
            aiStack_468[0] = 0x1a;
          }
          goto LAB_ram_0000b768;
        }
      }
    }
  }
LAB_ram_0000b758:
  aiStack_468[0] = 0;
LAB_ram_0000b768:
  piStack_498[1] = (int)uVar5;
  *piStack_498 = aiStack_468[0];
  return;
}


/* ---- fn_c100__sol_invoke_signed_c @ 0xc220 ---- */

/* WARNING: Type propagation algorithm not settling */

undefined8
fn_c100__sol_invoke_signed_c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                longlong param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 uStack_152;
  undefined8 uStack_151;
  byte bStack_149;
  char *pcStack_148;
  undefined2 uStack_140;
  byte *pbStack_138;
  undefined2 uStack_130;
  char *pcStack_128;
  undefined2 uStack_120;
  byte *pbStack_118;
  undefined2 uStack_110;
  char *pcStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  byte *pbStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  char **ppcStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  pbStack_c8 = (byte *)*param_4;
  uStack_c0 = *(ulonglong *)(pbStack_c8 + 0x50);
  if (uStack_c0 < 0x2c) {
    return 0;
  }
  if (uStack_c0 == 0x2c) {
                    /* WARNING: Subroutine does not return */
    fn_2df20__custom_panic(0x2c,0x2c,&DAT_ram_00032628 /* .data.rel.ro: &str "contract/src/instructions.rs" (len=28) */);
  }
  uStack_151 = *(undefined8 *)(param_5 + -0x1000);
  bStack_149 = pbStack_c8[0x84];
  uStack_152 = 0xc;
  pcStack_100 = (char *)*param_1;
  pcStack_90 = (char *)*param_2;
  pbVar6 = (byte *)*param_3;
  pbStack_138 = pbStack_c8 + 8;
  pbStack_118 = pbVar6 + 8;
  pcStack_128 = pcStack_90 + 8;
  pcStack_148 = pcStack_100 + 8;
  uStack_110 = 0x100;
  uStack_120 = 1;
  uStack_130 = 0;
  uStack_140 = 1;
  pcStack_108 = pcStack_148;
  pbStack_d0 = pbStack_138;
  pcStack_98 = pcStack_128;
  pbStack_60 = pbStack_118;
  if (*(longlong *)(param_5 + -0xff8) != 0) {
    if (*pcStack_100 != -1) {
      return 0xb;
    }
    if (pcStack_100[1] == '\0') {
      cVar1 = pcStack_100[2];
    }
    else {
      cVar1 = pcStack_100[2];
    }
    uStack_d8 = pcStack_100[1] != '\0';
    if (cVar1 == '\0') {
      cVar2 = pcStack_100[3];
    }
    else {
      cVar2 = pcStack_100[3];
    }
    uStack_d6 = cVar2 != '\0';
    uStack_d7 = cVar1 != '\0';
    uStack_f8 = *(undefined8 *)(pcStack_100 + 0x50);
    pcStack_e8 = pcStack_100 + 0x28;
    pcStack_f0 = pcStack_100 + 0x58;
    pcStack_100 = pcStack_100 + 0x48;
    uStack_e0 = 0;
    if ((*pbStack_c8 & 0x88) == 0x88) {
      if (pbStack_c8[1] == 0) {
        bVar3 = pbStack_c8[2];
      }
      else {
        bVar3 = pbStack_c8[2];
      }
      uStack_a0 = pbStack_c8[1] != 0;
      uStack_9f = bVar3 != 0;
      if ((bool)uStack_9f) {
        bVar3 = pbStack_c8[3];
      }
      else {
        bVar3 = pbStack_c8[3];
      }
      uStack_9e = bVar3 != 0;
      pbStack_b0 = pbStack_c8 + 0x28;
      pbStack_b8 = pbStack_c8 + 0x58;
      pbStack_c8 = pbStack_c8 + 0x48;
      uStack_a8 = 0;
      if (*pcStack_90 == -1) {
        if (pcStack_90[1] == '\0') {
          cVar1 = pcStack_90[2];
        }
        else {
          cVar1 = pcStack_90[2];
        }
        uStack_68 = pcStack_90[1] != '\0';
        if (cVar1 == '\0') {
          cVar2 = pcStack_90[3];
        }
        else {
          cVar2 = pcStack_90[3];
        }
        uStack_66 = cVar2 != '\0';
        uStack_67 = cVar1 != '\0';
        uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
        pcStack_78 = pcStack_90 + 0x28;
        pcStack_80 = pcStack_90 + 0x58;
        pcStack_90 = pcStack_90 + 0x48;
        uStack_70 = 0;
        if ((*pbVar6 & 0x88) == 0x88) {
          if (pbVar6[1] == 0) {
            bVar3 = pbVar6[2];
          }
          else {
            bVar3 = pbVar6[2];
          }
          uStack_30 = pbVar6[1] != 0;
          if (bVar3 == 0) {
            bVar4 = pbVar6[3];
          }
          else {
            bVar4 = pbVar6[3];
          }
          uStack_2e = bVar4 != 0;
          uStack_2f = bVar3 != 0;
          uStack_50 = *(undefined8 *)(pbVar6 + 0x50);
          pbStack_40 = pbVar6 + 0x28;
          pbStack_48 = pbVar6 + 0x58;
          pbStack_58 = pbVar6 + 0x48;
          uStack_38 = 0;
          puStack_10 = &uStack_152;
          ppcStack_20 = &pcStack_148;
          puStack_28 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
          uStack_8 = 10;
          uStack_18 = 4;
          uVar5 = fn_caa8(&puStack_28,&pcStack_108,4,*(undefined8 *)(param_5 + -0xff0),
                                   *(undefined8 *)(param_5 + -0xfe8));
          return uVar5;
        }
        return 0xb;
      }
      return 0xb;
    }
    return 0xb;
  }
  if (*pcStack_100 != -1) {
    return 0xb;
  }
  uStack_d8 = pcStack_100[1] != '\0';
  uStack_d7 = pcStack_100[2] != '\0';
  uStack_d6 = pcStack_100[3] != '\0';
  uStack_f8 = *(undefined8 *)(pcStack_100 + 0x50);
  pcStack_e8 = pcStack_100 + 0x28;
  pcStack_f0 = pcStack_100 + 0x58;
  pcStack_100 = pcStack_100 + 0x48;
  uStack_e0 = 0;
  if ((*pbStack_c8 & 0x88) != 0x88) {
    return 0xb;
  }
  if (pbStack_c8[1] == 0) {
    bVar3 = pbStack_c8[2];
  }
  else {
    bVar3 = pbStack_c8[2];
  }
  uStack_a0 = pbStack_c8[1] != 0;
  uStack_9f = bVar3 != 0;
  if ((bool)uStack_9f) {
    bVar3 = pbStack_c8[3];
  }
  else {
    bVar3 = pbStack_c8[3];
  }
  uStack_9e = bVar3 != 0;
  pbStack_b0 = pbStack_c8 + 0x28;
  pbStack_b8 = pbStack_c8 + 0x58;
  pbStack_c8 = pbStack_c8 + 0x48;
  uStack_a8 = 0;
  if (*pcStack_90 != -1) {
    return 0xb;
  }
  if (pcStack_90[1] == '\0') {
    cVar1 = pcStack_90[2];
  }
  else {
    cVar1 = pcStack_90[2];
  }
  uStack_68 = pcStack_90[1] != '\0';
  if (cVar1 == '\0') {
    cVar2 = pcStack_90[3];
  }
  else {
    cVar2 = pcStack_90[3];
  }
  uStack_66 = cVar2 != '\0';
  uStack_67 = cVar1 != '\0';
  uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
  pcStack_78 = pcStack_90 + 0x28;
  pcStack_80 = pcStack_90 + 0x58;
  pcStack_90 = pcStack_90 + 0x48;
  uStack_70 = 0;
  if ((*pbVar6 & 0x88) == 0x88) {
    uStack_50 = *(undefined8 *)(pbVar6 + 0x50);
    pbStack_40 = pbVar6 + 0x28;
    pbStack_48 = pbVar6 + 0x58;
    pbStack_58 = pbVar6 + 0x48;
    uStack_2e = pbVar6[3] != 0;
    uStack_2f = pbVar6[2] != 0;
    uStack_30 = pbVar6[1] != 0;
    uStack_38 = 0;
    puStack_10 = &uStack_152;
    ppcStack_20 = &pcStack_148;
    puStack_28 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
    uStack_8 = 10;
    uStack_18 = 4;
    fn_caa8(&puStack_28,&pcStack_108,4,8,0);
    return 0x1a;
  }
  return 0xb;
}


/* ---- fn_caa8 @ 0xcbc8 ---- */

undefined8 fn_caa8(void)

{
  fn_caa8();
  return 0x1a;
}


/* ---- fn_ccc0__sol_invoke_signed_c @ 0xcde0 ---- */

void fn_ccc0__sol_invoke_signed_c(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  lVar2 = *param_2;
  if ((((*(longlong *)(lVar2 + 0x28) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(lVar2 + 0x30) != -0x53861431b91e3427)) ||
      (*(longlong *)(lVar2 + 0x38) != -0x6ec8a4a0127a4be4)) ||
     (bVar1 = false, *(longlong *)(lVar2 + 0x40) != -0x56ff00817a0a73c6)) {
    bVar1 = true;
  }
  uStack_8 = *(undefined8 *)(param_5 + -0xff8);
  if (bVar1) {
    if (((*(longlong *)(lVar2 + 0x28) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar2 + 0x30) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar2 + 0x38) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(lVar2 + 0x40) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (bVar1) {
      uStack_28 = 0;
      uStack_24 = 0xbadc0de3;
    }
    else {
      uStack_28 = fn_c100__sol_invoke_signed_c(param_2,param_3,param_4,*(undefined8 *)(param_5 + -0x1000));
      uStack_24 = 0xbadc0def;
    }
  }
  else {
    plStack_20 = param_2;
    uStack_18 = param_3;
    uStack_10 = param_4;
    fn_2bcf8__sol_invoke_signed_c(&uStack_28,&plStack_20,8,0);
  }
  param_1[1] = uStack_24;
  *param_1 = uStack_28;
  return;
}


/* ---- fn_cf18__sol_invoke_signed_c @ 0xd038 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_cf18__sol_invoke_signed_c(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                     longlong param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 **ppuVar6;
  byte ****ppppbVar7;
  byte *pbVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iStack_178;
  int iStack_174;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined8 uStack_168;
  byte ****ppppbStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined2 uStack_148;
  byte *pbStack_140;
  undefined2 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  byte ****ppppbStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  ulonglong uStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  byte *****pppppbStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  uStack_16a = (undefined1)*(undefined8 *)(param_5 + -0xfe8);
  pbVar5 = (byte *)*param_2;
  pbStack_b0 = pbVar5 + 0x28;
  if ((((*(longlong *)(pbVar5 + 0x28) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(pbVar5 + 0x30) != -0x53861431b91e3427)) ||
      (*(longlong *)(pbVar5 + 0x38) != -0x6ec8a4a0127a4be4)) ||
     (bVar3 = false, *(longlong *)(pbVar5 + 0x40) != -0x56ff00817a0a73c6)) {
    bVar3 = true;
  }
  uStack_168 = *(undefined8 *)(param_5 + -0xfe0);
  uStack_100 = *(undefined8 *)(param_5 + -0xff0);
  uStack_110 = *(undefined8 *)(param_5 + -0xff8);
  uStack_c0 = *(undefined8 *)(param_5 + -0x1000);
  if (bVar3) {
    if (((*(longlong *)pbStack_b0 != -0x21708a111e0922fa) ||
        (*(longlong *)(pbVar5 + 0x30) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(pbVar5 + 0x38) != 0x270db9834dfc1ab6 ||
        (bVar3 = false, *(longlong *)(pbVar5 + 0x40) != -0x3745e27d7064202)))) {
      bVar3 = true;
    }
    if (bVar3) {
      iStack_178 = 0;
      iStack_174 = -0x4523f21d;
      goto LAB_ram_0000d778;
    }
    uStack_169 = 3;
    pcStack_90 = (char *)*param_3;
    pbVar8 = (byte *)*param_4;
    ppppbStack_160 = (byte ****)(pbVar5 + 8);
    pbStack_140 = pbVar8 + 8;
    pcStack_150 = pcStack_90 + 8;
    uStack_138 = 0x100;
    uStack_148 = 1;
    uStack_158 = CONCAT62(uStack_158._2_6_,1);
    puStack_f0 = &uStack_16a;
    puStack_130 = (undefined8 *)&DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
    uStack_e8 = 1;
    uStack_f8 = 0x20;
    uStack_108 = 0x20;
    uStack_118 = 0x20;
    puStack_128 = (undefined8 *)0x6;
    ppuStack_e0 = &puStack_130;
    uStack_d8 = 5;
    uStack_88 = (ulonglong)*pbVar5;
    if ((ulonglong)*pbVar5 == 0xff) {
      uVar9 = 1;
      if (pbVar5[1] == 0) {
        uVar9 = 0;
        if (pbVar5[2] == 0) goto LAB_ram_0000d7b8;
LAB_ram_0000d470:
        uVar11 = 1;
        uVar10 = 1;
        bVar1 = pbVar5[3];
      }
      else {
        if (pbVar5[2] != 0) goto LAB_ram_0000d470;
LAB_ram_0000d7b8:
        uVar11 = 0;
        uVar10 = 0;
        bVar1 = pbVar5[3];
      }
      if (bVar1 == 0) {
        uVar10 = uVar11;
      }
      pbStack_b8 = pbVar5 + 0x58;
      pbStack_c8 = pbVar5 + 0x48;
      uStack_a0 = CONCAT71(CONCAT61(CONCAT51(uStack_a0._3_5_,bVar1 != 0),uVar10),uVar9);
      uStack_a8 = 0;
      uStack_88 = *(ulonglong *)(pbVar5 + 0x50);
      if (*pcStack_90 == -1) {
        uStack_68 = 1;
        if (pcStack_90[1] == '\0') {
          uStack_68 = 0;
          if (pcStack_90[2] == '\0') goto LAB_ram_0000d7f8;
LAB_ram_0000d538:
          uVar9 = 1;
          uStack_67 = 1;
          cVar2 = pcStack_90[3];
        }
        else {
          if (pcStack_90[2] != '\0') goto LAB_ram_0000d538;
LAB_ram_0000d7f8:
          uVar9 = 0;
          uStack_67 = 0;
          cVar2 = pcStack_90[3];
        }
        if (cVar2 == '\0') {
          uStack_67 = uVar9;
        }
        uStack_66 = cVar2 != '\0';
        uStack_88 = *(ulonglong *)(pcStack_90 + 0x50);
        pcStack_78 = pcStack_90 + 0x28;
        pcStack_80 = pcStack_90 + 0x58;
        pcStack_90 = pcStack_90 + 0x48;
        uStack_70 = 0;
        if ((*pbVar8 & 0x88) == 0x88) {
          uStack_50 = *(undefined8 *)(pbVar8 + 0x50);
          pbStack_40 = pbVar8 + 0x28;
          pbStack_48 = pbVar8 + 0x58;
          pbStack_58 = pbVar8 + 0x48;
          if (pbVar8[3] == 0) {
            uStack_2e = 0;
            if (pbVar8[2] == 0) goto LAB_ram_0000d838;
LAB_ram_0000d688:
            uStack_2f = 1;
          }
          else {
            uStack_2e = 1;
            if (pbVar8[2] != 0) goto LAB_ram_0000d688;
LAB_ram_0000d838:
            uStack_2f = 0;
          }
          uStack_30 = pbVar8[1] != 0;
          uStack_38 = 0;
          puStack_10 = &uStack_169;
          pppppbStack_20 = &ppppbStack_160;
          puStack_28 = &DAT_ram_00031a00 /* .rodata: hex: 06 dd f6 e1 ee 75 8f de 18 42 5d bc e4 6c cd da */;
          uStack_8 = 9;
          uStack_18 = 3;
          ppppbVar7 = (byte ****)&ppppbStack_d0;
          puStack_120 = (undefined8 *)uStack_c0;
          ppppbStack_d0 = ppppbStack_160;
          uStack_c0 = *(ulonglong *)(pbVar5 + 0x50);
          pcStack_98 = pcStack_150;
          pbStack_60 = pbStack_140;
          fn_d630(&puStack_28,ppppbVar7,3,&ppuStack_e0,1);
          iVar4 = (int)ppppbVar7;
          goto LAB_ram_0000d2f8;
        }
      }
    }
    iStack_174 = (int)uStack_88;
    iStack_178 = 0xb;
  }
  else {
    pcStack_90 = &uStack_16a;
    ppppbStack_d0 = (byte ****)&DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
    uStack_88 = 1;
    pcStack_98 = (char *)0x20;
    uStack_a8 = 0x20;
    pbStack_b8 = (byte *)0x20;
    pbStack_c8 = (byte *)0x6;
    ppppbStack_160 = (byte ****)&ppppbStack_d0;
    uStack_158 = 5;
    ppuVar6 = &puStack_130;
    puStack_130 = param_2;
    puStack_128 = param_3;
    puStack_120 = param_4;
    uStack_118 = uStack_168;
    pbStack_b0 = (byte *)uStack_110;
    uStack_a0 = uStack_100;
    fn_2bcf8__sol_invoke_signed_c(&iStack_178,ppuVar6,&ppppbStack_160,1);
    iVar4 = (int)ppuVar6;
    if (iStack_178 != 0x1a) goto LAB_ram_0000d778;
LAB_ram_0000d2f8:
    iStack_174 = iVar4;
    iStack_178 = 0x1a;
  }
LAB_ram_0000d778:
  param_1[1] = iStack_174;
  *param_1 = iStack_178;
  return;
}


/* ---- fn_d630 @ 0xd750 ---- */

void fn_d630(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puStack_180;
  
  fn_d630();
  puStack_180[1] = param_2;
  *puStack_180 = 0x1a;
  return;
}


/* ---- fn_d740__sol_invoke_signed_c @ 0xd860 ---- */

void fn_d740__sol_invoke_signed_c(int *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  int iStack_90;
  int iStack_8c;
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined ***pppuStack_10;
  undefined8 uStack_8;
  
  uStack_68 = *(undefined8 *)(param_5 + -0xfd8);
  uStack_81 = (undefined1)*(undefined8 *)(param_5 + -0xfe0);
  puVar2 = *param_2;
  if ((((*(longlong *)(puVar2 + 0x28) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(puVar2 + 0x30) != -0x53861431b91e3427)) ||
      (*(longlong *)(puVar2 + 0x38) != -0x6ec8a4a0127a4be4)) ||
     (bVar1 = false, *(longlong *)(puVar2 + 0x40) != -0x56ff00817a0a73c6)) {
    bVar1 = true;
  }
  uStack_20 = *(undefined8 *)(param_5 + -0xfe8);
  uStack_30 = *(undefined8 *)(param_5 + -0xff0);
  uStack_40 = *(undefined8 *)(param_5 + -0xff8);
  if (bVar1) {
    if (((*(longlong *)(puVar2 + 0x28) != -0x21708a111e0922fa) ||
        (*(longlong *)(puVar2 + 0x30) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(puVar2 + 0x38) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(puVar2 + 0x40) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iStack_90 = 0;
      iStack_8c = -0x4523f21d;
    }
    else {
      ppuStack_60 = (undefined **)CONCAT71(ppuStack_60._1_7_,uStack_81);
      pppuStack_10 = &ppuStack_60;
      puStack_50 = &DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
      uStack_8 = 1;
      uStack_18 = 0x20;
      uStack_28 = 0x20;
      uStack_38 = 0x20;
      uStack_48 = 6;
      ppuStack_80 = &puStack_50;
      uStack_78 = 5;
      iStack_90 = fn_c100__sol_invoke_signed_c(param_2,param_3,param_4,*(undefined8 *)(param_5 + -0x1000));
      iStack_8c = -0x4523f211;
    }
  }
  else {
    pppuStack_10 = (undefined ***)&uStack_81;
    puStack_50 = &DAT_ram_00031fb2 /* .rodata: hex: 70 6f 6f 6c 76 31 49 6e 76 61 6c 69 64 20 45 78 */;
    uStack_8 = 1;
    uStack_18 = 0x20;
    uStack_28 = 0x20;
    uStack_38 = 0x20;
    uStack_48 = 6;
    ppuStack_60 = &puStack_50;
    uStack_58 = 5;
    piVar3 = &iStack_90;
    ppuStack_80 = param_2;
    uStack_78 = param_3;
    uStack_70 = param_4;
    fn_2bcf8__sol_invoke_signed_c(piVar3,&ppuStack_80,&ppuStack_60,1);
    if (iStack_90 == 0x1a) {
      iStack_90 = 0x1a;
      iStack_8c = (int)piVar3;
    }
  }
  param_1[1] = iStack_8c;
  *param_1 = iStack_90;
  return;
}


/* ---- fn_db48 @ 0xdc68 ---- */

/* WARNING: Removing unreachable block (ram,0x0000e460) */

void fn_db48(undefined4 *param_1,longlong *param_2,ulonglong param_3,longlong param_4,
                     longlong param_5)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  longlong lVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  longlong lVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong lVar46;
  undefined8 uVar47;
  longlong ***ppplVar48;
  undefined8 uVar49;
  longlong *plStack_250;
  longlong *plStack_238;
  longlong *plStack_230;
  ulonglong uStack_210;
  longlong *plStack_208;
  longlong lStack_1d8;
  undefined1 uStack_1b8;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  longlong **pplStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  uVar32 = 0;
  uVar39 = 0xbadc0de;
  uVar35 = *(ulonglong *)(param_5 + -0xfe0);
  lVar36 = *(longlong *)(param_5 + -0xfe8);
  lVar43 = *(longlong *)(param_5 + -0xff0);
  lVar44 = *(longlong *)(param_5 + -0x1000);
  plVar45 = *(longlong **)(param_5 + -0xfd8);
  lVar46 = *plVar45;
  plVar24 = *(longlong **)(param_5 + -0xff8);
  if ((plVar24 == (longlong *)0x0) && (lVar46 != 0)) goto LAB_ram_0000e970;
  if ((*(longlong *)(param_4 + 8) != -0x368b38e7e82a58fa) ||
     (((*(longlong *)(param_4 + 0x10) != -0x49a1e296679ca9d8 ||
       (*(longlong *)(param_4 + 0x18) != 0x5c6d4b9ba3b85e8b)) ||
      (bVar1 = false, *(longlong *)(param_4 + 0x20) != 0x215b5573)))) {
    bVar1 = true;
  }
  uVar39 = 0xabad1dea;
  if (bVar1) goto LAB_ram_0000e970;
  plVar25 = param_2 + 1;
  lVar26 = *plVar25;
  if (((*(longlong *)(lVar26 + 0x28) != -0x16a608d8d48b0286) ||
      (*(longlong *)(lVar26 + 0x30) != 0x7a819dd33c7070c6)) ||
     ((*(longlong *)(lVar26 + 0x38) != 0x6dd2523bce0a93a0 ||
      (bVar1 = false, *(longlong *)(lVar26 + 0x40) != -0x2c4478dc22ab5fac)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_0000e970;
  if (((*(longlong *)(lVar44 + 8) != 0x66d17b1817d5a706) ||
      (*(longlong *)(lVar44 + 0x10) != -0x3f3d02aafb2b25cb)) ||
     ((*(longlong *)(lVar44 + 0x18) != -0x5a8aa9de7039db3f ||
      (bVar1 = false, *(longlong *)(lVar44 + 0x20) != 0x85fcbbadb)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_0000e970;
  if (*(longlong *)(lVar26 + 0x50) != 0x6c0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,2);
  }
  uVar27 = lVar26 + 0x58;
  if ((uVar27 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,0);
  }
  uVar39 = 0xbadc0de2;
  uVar28 = *(ulonglong *)(lVar26 + 0x288) ^ 0xffffffffffffffa1;
  if (2 < (uVar28 & 0xff)) goto LAB_ram_0000e970;
  if (*(ulonglong *)(param_5 + -0xfd0) < param_3) {
    plVar11 = param_2 + *(ulonglong *)(param_5 + -0xfd0);
  }
  else {
    plVar11 = (longlong *)0x0;
  }
  uVar37 = *(ulonglong *)(param_4 + 0x58);
  uVar33 = *(ulonglong *)(lVar26 + 0x2b0);
  lVar40 = *param_2;
  puVar41 = (undefined8 *)(lVar40 + 8);
  fn_7858(&plStack_100,uVar28,plVar11,uVar27,puVar41);
  plVar11 = plStack_f8;
  if ((int)plStack_100 == 0) {
    plStack_208 = param_2 + 3;
    plVar29 = param_2 + 2;
    uVar32 = *(ulonglong *)(lVar26 + 0x248) ^ 0x4a1178751b9c3c6;
    uVar28 = *(ulonglong *)(lVar26 + 0x250) ^ 0x4a0178651b8c3c5;
    uVar18 = *(ulonglong *)(lVar26 + 0x240) ^ 0x4a2178451bac3c7;
    uVar12 = *(ulonglong *)(lVar26 + 0x238) ^ 0xfb5ce87aae443c38;
    uVar12 = uVar12 << 0x38 | (uVar12 & 0xff00) << 0x28 | (uVar12 & 0xff0000) << 0x18 |
             (uVar12 & 0xff000000) << 8 | uVar12 >> 8 & 0xff000000 | uVar12 >> 0x18 & 0xff0000 |
             uVar12 >> 0x28 & 0xff00 | uVar12 >> 0x38;
    lVar30 = *plVar29;
    uVar19 = *(ulonglong *)(lVar30 + 8);
    uVar19 = uVar19 << 0x38 | (uVar19 & 0xff00) << 0x28 | (uVar19 & 0xff0000) << 0x18 |
             (uVar19 & 0xff000000) << 8 | uVar19 >> 8 & 0xff000000 | uVar19 >> 0x18 & 0xff0000 |
             uVar19 >> 0x28 & 0xff00 | uVar19 >> 0x38;
    if (uVar12 == uVar19) {
      uVar12 = uVar18 << 0x38 | (uVar18 & 0xff00) << 0x28 | (uVar18 & 0xff0000) << 0x18 |
               (uVar18 & 0xff000000) << 8 | uVar18 >> 8 & 0xff000000 | uVar18 >> 0x18 & 0xff0000 |
               uVar18 >> 0x28 & 0xff00 | uVar18 >> 0x38;
      uVar18 = *(ulonglong *)(lVar30 + 0x10);
      uVar19 = uVar18 << 0x38 | (uVar18 & 0xff00) << 0x28 | (uVar18 & 0xff0000) << 0x18 |
               (uVar18 & 0xff000000) << 8 | uVar18 >> 8 & 0xff000000 | uVar18 >> 0x18 & 0xff0000 |
               uVar18 >> 0x28 & 0xff00 | uVar18 >> 0x38;
      if (uVar12 != uVar19) goto LAB_ram_0000e208;
      uVar12 = uVar32 << 0x38 | (uVar32 & 0xff00) << 0x28 | (uVar32 & 0xff0000) << 0x18 |
               (uVar32 & 0xff000000) << 8 | uVar32 >> 8 & 0xff000000 | uVar32 >> 0x18 & 0xff0000 |
               uVar32 >> 0x28 & 0xff00 | uVar32 >> 0x38;
      uVar32 = *(ulonglong *)(lVar30 + 0x18);
      uVar19 = uVar32 << 0x38 | (uVar32 & 0xff00) << 0x28 | (uVar32 & 0xff0000) << 0x18 |
               (uVar32 & 0xff000000) << 8 | uVar32 >> 8 & 0xff000000 | uVar32 >> 0x18 & 0xff0000 |
               uVar32 >> 0x28 & 0xff00 | uVar32 >> 0x38;
      if (uVar12 != uVar19) goto LAB_ram_0000e208;
      iVar10 = 0;
      uVar12 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      uVar32 = *(ulonglong *)(lVar30 + 0x20);
      uVar19 = uVar32 << 0x38 | (uVar32 & 0xff00) << 0x28 | (uVar32 & 0xff0000) << 0x18 |
               (uVar32 & 0xff000000) << 8 | uVar32 >> 8 & 0xff000000 | uVar32 >> 0x18 & 0xff0000 |
               uVar32 >> 0x28 & 0xff00 | uVar32 >> 0x38;
      if (uVar12 != uVar19) goto LAB_ram_0000e208;
    }
    else {
LAB_ram_0000e208:
      iVar10 = -1;
      if (uVar19 <= uVar12) {
        iVar10 = 1;
      }
    }
    plStack_f0 = (longlong *)(*(ulonglong *)(lVar26 + 0x228) ^ 0x4a1178751b9c3c6);
    uStack_e8 = *(ulonglong *)(lVar26 + 0x230) ^ 0x4a0178651b8c3c5;
    plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x220) ^ 0x4a2178451bac3c7);
    plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 0x218) ^ 0xfb5ce87aae443c38);
    uVar32 = (longlong)plStack_100 << 0x38 | ((ulonglong)plStack_100 & 0xff00) << 0x28 |
             ((ulonglong)plStack_100 & 0xff0000) << 0x18 |
             ((ulonglong)plStack_100 & 0xff000000) << 8 | (ulonglong)plStack_100 >> 8 & 0xff000000 |
             (ulonglong)plStack_100 >> 0x18 & 0xff0000 | (ulonglong)plStack_100 >> 0x28 & 0xff00 |
             (ulonglong)plStack_100 >> 0x38;
    lVar3 = *plStack_208;
    uVar28 = *(ulonglong *)(lVar3 + 8);
    uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
             (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
             uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
    if (uVar32 == uVar28) {
      uVar32 = (longlong)plStack_f8 << 0x38 | ((ulonglong)plStack_f8 & 0xff00) << 0x28 |
               ((ulonglong)plStack_f8 & 0xff0000) << 0x18 |
               ((ulonglong)plStack_f8 & 0xff000000) << 8 | (ulonglong)plStack_f8 >> 8 & 0xff000000 |
               (ulonglong)plStack_f8 >> 0x18 & 0xff0000 | (ulonglong)plStack_f8 >> 0x28 & 0xff00 |
               (ulonglong)plStack_f8 >> 0x38;
      uVar28 = *(ulonglong *)(lVar3 + 0x10);
      uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      if (uVar32 != uVar28) goto LAB_ram_0000e370;
      uVar32 = (longlong)plStack_f0 << 0x38 | ((ulonglong)plStack_f0 & 0xff00) << 0x28 |
               ((ulonglong)plStack_f0 & 0xff0000) << 0x18 |
               ((ulonglong)plStack_f0 & 0xff000000) << 8 | (ulonglong)plStack_f0 >> 8 & 0xff000000 |
               (ulonglong)plStack_f0 >> 0x18 & 0xff0000 | (ulonglong)plStack_f0 >> 0x28 & 0xff00 |
               (ulonglong)plStack_f0 >> 0x38;
      uVar28 = *(ulonglong *)(lVar3 + 0x18);
      uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      if (uVar32 != uVar28) goto LAB_ram_0000e370;
      iVar23 = 0;
      uVar32 = uStack_e8 << 0x38 | (uStack_e8 & 0xff00) << 0x28 | (uStack_e8 & 0xff0000) << 0x18 |
               (uStack_e8 & 0xff000000) << 8 | uStack_e8 >> 8 & 0xff000000 |
               uStack_e8 >> 0x18 & 0xff0000 | uStack_e8 >> 0x28 & 0xff00 | uStack_e8 >> 0x38;
      uVar28 = *(ulonglong *)(lVar3 + 0x20);
      uVar28 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
               (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
               uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
      if (uVar32 != uVar28) goto LAB_ram_0000e370;
    }
    else {
LAB_ram_0000e370:
      iVar23 = -1;
      if (uVar28 <= uVar32) {
        iVar23 = 1;
      }
    }
    if (iVar23 != 0 || iVar10 != 0) {
      uVar39 = 0xbadface3;
      uVar32 = 0;
      goto LAB_ram_0000e970;
    }
    plVar20 = (longlong *)(*(ulonglong *)(lVar26 + 0x2c0) ^ 0x6e9de2b30b19f1ea);
    uVar28 = uVar37 - (longlong)plVar20;
    uVar32 = 0;
    if (uVar37 < uVar28) {
      uVar28 = 0;
    }
    else {
      uVar39 = 0xfaded;
      if ((*(ulonglong *)(lVar26 + 0x2b8) ^ 0x6e9de2b30b19f1ea) < uVar28) goto LAB_ram_0000e970;
    }
    uVar39 = 0xfaded;
    lVar4 = fn_e3b0(&plStack_100);
    if (lVar4 != 0) {
      uVar35 = lVar4 << 0x20 | lVar4 - 0x100000000U >> 0x20;
      if (uVar35 < 0x1a) {
        uVar39 = *(undefined4 *)(&DAT_ram_00032150 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */ + uVar35 * 4);
        uVar32 = uVar35;
      }
      else {
        uVar39 = (undefined4)lVar4;
      }
      goto LAB_ram_0000e970;
    }
    if (plVar20 <= plStack_100) goto LAB_ram_0000e970;
    plVar42 = (longlong *)(lVar26 + 8);
    lVar4 = fn_12770__sol_sha256(puVar41,plVar42,plVar20);
    uVar13 = 1;
    if (lVar4 != lVar43) {
      lVar4 = fn_128c0__sol_sha256(puVar41,plVar42,plVar20);
      uVar13 = 1;
      if (lVar4 != lVar43) {
        uVar13 = 0;
      }
    }
    uVar32 = 0;
    uVar37 = uVar35 & 0xff;
    lVar43 = 0;
    if (uVar37 != 0) {
      if (uVar37 != 1) {
        uVar39 = 0xbadb100d;
        goto LAB_ram_0000e970;
      }
      lVar43 = 1;
    }
    uVar39 = 0xb1ade2;
    if ((*(ulonglong *)(lVar30 + 0x50) < 0x48) || (*(ulonglong *)(lVar3 + 0x50) < 0x48))
    goto LAB_ram_0000e970;
    lVar4 = plVar45[2] << 0x30;
    if (lVar46 == 0) {
      lVar4 = 0;
    }
    uVar14 = *(undefined8 *)(lVar30 + 0x98);
    uVar32 = (ulonglong)plVar45[2] >> 0x10;
    if (lVar46 == 0) {
      uVar32 = 0;
    }
    uVar15 = *(undefined8 *)(lVar3 + 0x98);
    uStack_148 = *(longlong *)(lVar26 + 0x20);
    uStack_150 = *(longlong *)(lVar26 + 0x18);
    uStack_158 = *(longlong *)(lVar26 + 0x10);
    pplStack_160 = (longlong **)*plVar42;
    uVar21 = *(undefined8 *)(lVar44 + 0x50);
    lVar44 = lVar44 + 0x58;
    ppplVar48 = &pplStack_160;
    uVar49 = 0;
    lVar30 = lVar43;
    uVar5 = uVar13;
    fn_25ee0(&plStack_100,lVar36,uVar15,uVar14);
    uVar37 = uStack_e8;
    plVar2 = plStack_f0;
    plVar20 = plStack_f8;
    if ((int)plStack_100 == 1) goto LAB_ram_0000e050;
    plStack_230 = param_2 + 5;
    plVar16 = param_2 + 4;
    if (lVar43 == 0) {
      plStack_250 = plVar29;
      plStack_238 = plVar16;
      if (plVar24 != (longlong *)0x0) {
        lVar31 = 0x1f0;
        lVar3 = 0x1e8;
        lVar7 = 0x1e0;
        lVar22 = 0x1d8;
        goto LAB_ram_0000ea48;
      }
    }
    else {
      plStack_250 = plStack_208;
      plStack_238 = plStack_230;
      plStack_230 = plVar16;
      plStack_208 = plVar29;
      if (plVar24 != (longlong *)0x0) {
        lVar31 = 0x210;
        lVar3 = 0x208;
        lVar7 = 0x200;
        lVar22 = 0x1f8;
LAB_ram_0000ea48:
        uStack_170 = *(ulonglong *)(lVar26 + lVar3) ^ 0x4a1178751b9c3c6;
        uStack_168 = *(ulonglong *)(lVar26 + lVar31) ^ 0x4a0178651b8c3c5;
        uStack_178 = *(ulonglong *)(lVar26 + lVar7) ^ 0x4a2178451bac3c7;
        uStack_180 = *(ulonglong *)(lVar26 + lVar22) ^ 0xfb5ce87aae443c38;
        uVar12 = *(ulonglong *)(lVar26 + 0x710);
        if (uVar12 < 5) {
          uVar12 = *(ulonglong *)(lVar26 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_e8 = *(ulonglong *)(lVar26 + 0x270) ^ 0x4a0178651b8c3c5;
          plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x260) ^ 0x4a2178451bac3c7);
          plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 600) ^ 0xfb5ce87aae443c38);
          plStack_f0 = (longlong *)uVar12;
        }
        else {
          uStack_e8 = *(ulonglong *)(lVar26 + 0x270);
          plStack_f0 = *(longlong **)(lVar26 + 0x268);
          plStack_f8 = *(longlong **)(lVar26 + 0x260);
          plStack_100 = *(longlong **)(lVar26 + 600);
        }
        fn_28a20__sol_try_find_program_address(&pplStack_160,&plStack_100,&uStack_180,0xfb5ce87aae443c38,uVar12,lVar30,
                         uVar27,uVar5,ppplVar48,lVar44,uVar21,uVar28,uVar49,lVar4,uVar32,plVar11);
        lVar44 = *plVar24;
        if ((((*(longlong ***)(lVar44 + 8) != pplStack_160) ||
             (*(longlong *)(lVar44 + 0x10) != uStack_158)) ||
            (*(longlong *)(lVar44 + 0x18) != uStack_150)) ||
           (bVar1 = false, *(longlong *)(lVar44 + 0x20) != uStack_148)) {
          bVar1 = true;
        }
        if (bVar1) {
          uVar32 = 0;
          uVar27 = 0xbadc0de8;
          goto LAB_ram_0000e060;
        }
      }
    }
    uStack_210 = 0;
    if (lVar46 != 0) {
      uStack_210 = (ulonglong)(plVar45[1] * lStack_c8) / 10000;
    }
    if (*(ulonglong *)(lVar26 + 0x710) < 5) {
      uStack_170 = *(ulonglong *)(lVar26 + 0x268) ^ 0x4a1178751b9c3c6;
      uStack_168 = *(ulonglong *)(lVar26 + 0x270) ^ 0x4a0178651b8c3c5;
      uStack_178 = *(ulonglong *)(lVar26 + 0x260) ^ 0x4a2178451bac3c7;
      uStack_180 = *(ulonglong *)(lVar26 + 600) ^ 0xfb5ce87aae443c38;
    }
    else {
      uStack_168 = *(ulonglong *)(lVar26 + 0x270);
      uStack_170 = *(ulonglong *)(lVar26 + 0x268);
      uStack_178 = *(ulonglong *)(lVar26 + 0x260);
      uStack_180 = *(ulonglong *)(lVar26 + 600);
    }
    uStack_148 = *(ulonglong *)(lVar26 + 0x210) ^ 0x4a0178651b8c3c5;
    uStack_150 = *(ulonglong *)(lVar26 + 0x208) ^ 0x4a1178751b9c3c6;
    uStack_158 = *(ulonglong *)(lVar26 + 0x200) ^ 0x4a2178451bac3c7;
    pplStack_160 = (longlong **)(*(ulonglong *)(lVar26 + 0x1f8) ^ 0xfb5ce87aae443c38);
    uStack_e8 = *(ulonglong *)(lVar26 + 0x1f0) ^ 0x4a0178651b8c3c5;
    plStack_f0 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e8) ^ 0x4a1178751b9c3c6);
    plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e0) ^ 0x4a2178451bac3c7);
    plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 0x1d8) ^ 0xfb5ce87aae443c38);
    fn_cf18__sol_invoke_signed_c(&uStack_188,plStack_208,plStack_230,plVar25);
    uVar32 = (ulonglong)uStack_188;
    if (uVar32 == 0x1a) {
      if (uStack_210 == 0) {
LAB_ram_0000f388:
        plStack_f8 = plStack_250;
        plStack_100 = plStack_238;
        plStack_f0 = param_2;
        uStack_e8 = lVar36;
        fn_2bcf8__sol_invoke_signed_c(&uStack_198,&plStack_100,8,0);
        uVar32 = (ulonglong)uStack_198;
        if (uVar32 == 0x1a) {
          lStack_1d8 = lVar36;
          lVar44 = lStack_c8;
          if (lVar43 == 0) {
            lStack_1d8 = lStack_c8;
            lVar44 = lVar36;
          }
          uStack_128 = *(undefined8 *)(lVar40 + 0x20);
          uStack_130 = *(undefined8 *)(lVar40 + 0x18);
          uStack_138 = *(undefined8 *)(lVar40 + 0x10);
          uStack_140 = *puVar41;
          lStack_120 = *plVar42;
          uStack_118 = *(undefined8 *)(lVar26 + 0x10);
          uStack_110 = *(undefined8 *)(lVar26 + 0x18);
          uStack_108 = *(undefined8 *)(lVar26 + 0x20);
          lVar36 = plVar45[3];
          uStack_1b8 = (undefined1)plVar45[1];
          uVar32 = *(ulonglong *)(lVar26 + 0x210);
          uVar28 = *(ulonglong *)(lVar26 + 0x1f0);
          uVar12 = *(ulonglong *)(lVar26 + 0x208);
          uVar18 = *(ulonglong *)(lVar26 + 0x1e8);
          uVar19 = *(ulonglong *)(lVar26 + 0x200);
          uVar8 = *(ulonglong *)(lVar26 + 0x1e0);
          uVar34 = *(ulonglong *)(lVar26 + 0x1f8);
          uVar9 = *(ulonglong *)(lVar26 + 0x1d8);
          uVar27 = *(ulonglong *)(lVar26 + 0x378);
          uVar38 = *(ulonglong *)(lVar26 + 800);
          uVar5 = *(undefined8 *)(lVar26 + 0x298);
          uVar47 = *(undefined8 *)(lVar26 + 0x2a0);
          uVar21 = *puVar41;
          uVar49 = *(undefined8 *)(lVar40 + 0x10);
          uVar17 = *(undefined8 *)(lVar40 + 0x18);
          *(undefined8 *)(lVar26 + 0x2e0) = *(undefined8 *)(lVar40 + 0x20);
          *(undefined8 *)(lVar26 + 0x2d8) = uVar17;
          *(undefined8 *)(lVar26 + 0x2d0) = uVar49;
          *(undefined8 *)(lVar26 + 0x2c8) = uVar21;
          *(undefined8 *)(lVar26 + 0x2f0) = uVar47;
          *(undefined8 *)(lVar26 + 0x2e8) = uVar5;
          uVar6 = (undefined1)uVar35;
          *(undefined1 *)(lVar26 + 0x308) = uVar6;
          *(longlong *)(lVar26 + 0x300) = lStack_1d8;
          *(longlong *)(lVar26 + 0x2f8) = lVar44;
          *(undefined8 *)(lVar26 + 0x309) = 0;
          *(undefined8 *)(lVar26 + 0x310) = 0;
          fn_2600(lVar26 + 0x2c8);
          fn_2fe08__sol_memcpy(&plStack_100,&uStack_140,0x40);
          if (lVar46 == 0) {
            uStack_1b8 = 0;
          }
          uStack_20 = uVar33 ^ 0x6e9de2b30b19f9ea;
          uStack_5 = (char)lVar36;
          if (lVar46 == 0) {
            uStack_5 = 0;
          }
          uStack_18 = uVar38 ^ 0xd3198133b7c1776c;
          uVar27 = uVar27 ^ 0x504156a22548f8dd;
          uStack_c0 = uVar9 ^ 0xfb5ce87aae443c38;
          uStack_a0 = uVar34 ^ 0xfb5ce87aae443c38;
          uStack_b8 = uVar8 ^ 0x4a2178451bac3c7;
          uStack_98 = uVar19 ^ 0x4a2178451bac3c7;
          uStack_b0 = uVar18 ^ 0x4a1178751b9c3c6;
          uStack_90 = uVar12 ^ 0x4a1178751b9c3c6;
          uStack_a8 = uVar28 ^ 0x4a0178651b8c3c5;
          uStack_88 = uVar32 ^ 0x4a0178651b8c3c5;
          uStack_48 = uStack_d0;
          uStack_50 = uStack_d8;
          uStack_58 = uStack_e0;
          uStack_60 = uVar37;
          uStack_68 = (ulonglong)plVar2;
          uStack_70 = (ulonglong)plVar20;
          uStack_6 = uStack_1b8;
          uStack_7 = (undefined1)uVar13;
          lStack_28 = lStack_1d8;
          uStack_80 = uVar5;
          uStack_78 = uVar47;
          uStack_40 = uVar14;
          uStack_38 = uVar15;
          lStack_30 = lVar44;
          uStack_10 = uVar27;
          uStack_8 = uVar6;
          fn_1e20(&plStack_100);
          uStack_158 = 0x100;
          pplStack_160 = &plStack_100;
          fn_2de38(&pplStack_160,1);
          uVar32 = 0x1a;
        }
        else {
          uVar27 = (ulonglong)uStack_194;
        }
      }
      else if (plVar24 == (longlong *)0x0) {
        uVar32 = 0;
        uVar27 = 0xbadc0de;
      }
      else {
        if (*(ulonglong *)(lVar26 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lVar26 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lVar26 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lVar26 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lVar26 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lVar26 + 0x270);
          uStack_170 = *(ulonglong *)(lVar26 + 0x268);
          uStack_178 = *(ulonglong *)(lVar26 + 0x260);
          uStack_180 = *(ulonglong *)(lVar26 + 600);
        }
        uStack_148 = *(ulonglong *)(lVar26 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lVar26 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lVar26 + 0x200) ^ 0x4a2178451bac3c7;
        pplStack_160 = (longlong **)(*(ulonglong *)(lVar26 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lVar26 + 0x1f0) ^ 0x4a0178651b8c3c5;
        plStack_f0 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e8) ^ 0x4a1178751b9c3c6);
        plStack_f8 = (longlong *)(*(ulonglong *)(lVar26 + 0x1e0) ^ 0x4a2178451bac3c7);
        plStack_100 = (longlong *)(*(ulonglong *)(lVar26 + 0x1d8) ^ 0xfb5ce87aae443c38);
        fn_cf18__sol_invoke_signed_c(&uStack_190,plStack_208,plVar24,plVar25);
        uVar32 = (ulonglong)uStack_190;
        if (uVar32 == 0x1a) goto LAB_ram_0000f388;
        uVar27 = (ulonglong)uStack_18c;
      }
    }
    else {
      uVar27 = (ulonglong)uStack_184;
    }
  }
  else {
LAB_ram_0000e050:
    uVar27 = (ulonglong)plStack_f8 & 0xffffffff;
    uVar32 = (ulonglong)plStack_100 >> 0x20;
  }
LAB_ram_0000e060:
  uVar39 = (undefined4)uVar27;
LAB_ram_0000e970:
  param_1[1] = uVar39;
  *param_1 = (int)uVar32;
  return;
}


/* ---- fn_e3b0 @ 0xe4d0 ---- */

void fn_e3b0(void)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_R6;
  ulonglong uVar28;
  ulonglong unaff_R7;
  ulonglong uVar29;
  undefined4 unaff_R8W;
  longlong *plVar30;
  longlong unaff_R9;
  undefined8 uVar31;
  longlong lVar32;
  ulonglong **ppuVar33;
  undefined8 uVar34;
  undefined8 uStack_250;
  ulonglong uStack_238;
  ulonglong uStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  longlong *plStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  char cStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong *puStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  lVar3 = lStack_1d8;
  lVar7 = fn_e3b0();
  if (lVar7 != 0) {
    uVar19 = lVar7 << 0x20 | lVar7 - 0x100000000U >> 0x20;
    if (uVar19 < 0x1a) {
      unaff_R8W = *(undefined4 *)(&DAT_ram_00032150 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */ + uVar19 * 4);
      unaff_R6 = uVar19;
    }
    else {
      unaff_R8W = (undefined4)lVar7;
    }
    goto LAB_ram_0000e970;
  }
  if (unaff_R7 <= uStack_100) goto LAB_ram_0000e970;
  plVar30 = (longlong *)(unaff_R9 + 8);
  lVar7 = fn_12770__sol_sha256(puStack_220,plVar30);
  uVar20 = 1;
  if (lVar7 != lStack_1a8) {
    lVar7 = fn_128c0__sol_sha256(puStack_220,plVar30);
    uVar20 = 1;
    if (lVar7 != lStack_1a8) {
      uVar20 = 0;
    }
  }
  unaff_R6 = 0;
  lVar7 = 0;
  if (cStack_1b0 != '\0') {
    if (cStack_1b0 != '\x01') {
      unaff_R8W = 0xbadb100d;
      goto LAB_ram_0000e970;
    }
    lVar7 = 1;
  }
  unaff_R8W = 0xb1ade2;
  if ((*(ulonglong *)(lStack_200 + 0x50) < 0x48) || (*(ulonglong *)(uStack_230 + 0x50) < 0x48))
  goto LAB_ram_0000e970;
  lVar10 = *(ulonglong *)(lStack_1b8 + 0x10) << 0x30;
  if (lStack_1c0 == 0) {
    lVar10 = 0;
  }
  uVar21 = *(undefined8 *)(lStack_200 + 0x98);
  uVar19 = *(ulonglong *)(lStack_1b8 + 0x10) >> 0x10;
  if (lStack_1c0 == 0) {
    uVar19 = 0;
  }
  uVar22 = *(undefined8 *)(uStack_230 + 0x98);
  uStack_148 = *(longlong *)(unaff_R9 + 0x20);
  uStack_150 = *(longlong *)(unaff_R9 + 0x18);
  uStack_158 = *(longlong *)(unaff_R9 + 0x10);
  puStack_160 = (ulonglong *)*plVar30;
  uVar24 = *(undefined8 *)(lStack_1a0 + 0x50);
  lVar26 = lStack_1a0 + 0x58;
  ppuVar33 = &puStack_160;
  uVar34 = 0;
  lVar32 = lVar7;
  uVar9 = uVar20;
  uVar12 = uStack_238;
  uVar18 = uStack_208;
  fn_25ee0(&uStack_100,lStack_1d8,uVar22,uVar21);
  uVar6 = uStack_e8;
  uVar5 = uStack_f0;
  uVar4 = uStack_f8;
  if ((int)uStack_100 == 1) {
    uVar19 = uStack_f8 & 0xffffffff;
    unaff_R6 = uStack_100 >> 0x20;
  }
  else {
    uStack_230 = lStack_1f8 + 0x28;
    uVar23 = lStack_1f8 + 0x20;
    if (lVar7 == 0) {
      uStack_238 = uVar23;
      if (plStack_1c8 != (longlong *)0x0) {
        lVar27 = 0x1f0;
        lVar8 = 0x1e8;
        lVar11 = 0x1e0;
        lVar25 = 0x1d8;
        uStack_208 = uStack_228;
        uStack_228 = uStack_210;
        goto LAB_ram_0000ea48;
      }
      uStack_250 = uStack_210;
      uStack_208 = uStack_228;
    }
    else {
      uStack_238 = uStack_230;
      uStack_230 = uVar23;
      if (plStack_1c8 == (longlong *)0x0) {
        uStack_250 = uStack_228;
        uStack_208 = uStack_210;
      }
      else {
        lVar27 = 0x210;
        lVar8 = 0x208;
        lVar11 = 0x200;
        lVar25 = 0x1f8;
        uStack_208 = uStack_210;
LAB_ram_0000ea48:
        uStack_170 = *(ulonglong *)(lStack_1d0 + lVar8) ^ 0x4a1178751b9c3c6;
        uStack_168 = *(ulonglong *)(lStack_1d0 + lVar27) ^ 0x4a0178651b8c3c5;
        uStack_178 = *(ulonglong *)(lStack_1d0 + lVar11) ^ 0x4a2178451bac3c7;
        uStack_180 = *(ulonglong *)(lStack_1d0 + lVar25) ^ 0xfb5ce87aae443c38;
        uVar23 = *(ulonglong *)(lStack_1d0 + 0x710);
        if (uVar23 < 5) {
          uVar23 = *(ulonglong *)(lStack_1d0 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_100 = *(ulonglong *)(lStack_1d0 + 600) ^ 0xfb5ce87aae443c38;
          uStack_f0 = uVar23;
        }
        else {
          uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x270);
          uStack_f0 = *(ulonglong *)(lStack_1d0 + 0x268);
          uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x260);
          uStack_100 = *(ulonglong *)(lStack_1d0 + 600);
        }
        fn_28a20__sol_try_find_program_address(&puStack_160,&uStack_100,&uStack_180,0xfb5ce87aae443c38,uVar23,lVar32,
                         uStack_1e8,uVar9,ppuVar33,lVar26,uVar24,uVar12,uVar34,lVar10,uVar19,uVar18)
        ;
        lVar10 = *plStack_1c8;
        if ((((*(ulonglong **)(lVar10 + 8) != puStack_160) ||
             (*(longlong *)(lVar10 + 0x10) != uStack_158)) ||
            (*(longlong *)(lVar10 + 0x18) != uStack_150)) ||
           (bVar2 = false, *(longlong *)(lVar10 + 0x20) != uStack_148)) {
          bVar2 = true;
        }
        uStack_250 = uStack_228;
        if (bVar2) {
          unaff_R6 = 0;
          uVar19 = 0xbadc0de8;
          goto LAB_ram_0000e060;
        }
      }
    }
    uStack_210 = 0;
    if (lStack_1c0 != 0) {
      uStack_210 = (ulonglong)(*(longlong *)(lStack_1b8 + 8) * lStack_c8) / 10000;
    }
    if (*(ulonglong *)(lStack_1d0 + 0x710) < 5) {
      uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268) ^ 0x4a1178751b9c3c6;
      uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270) ^ 0x4a0178651b8c3c5;
      uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260) ^ 0x4a2178451bac3c7;
      uStack_180 = *(ulonglong *)(lStack_1d0 + 600) ^ 0xfb5ce87aae443c38;
    }
    else {
      uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270);
      uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268);
      uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260);
      uStack_180 = *(ulonglong *)(lStack_1d0 + 600);
    }
    uStack_148 = *(ulonglong *)(lStack_1d0 + 0x210) ^ 0x4a0178651b8c3c5;
    uStack_150 = *(ulonglong *)(lStack_1d0 + 0x208) ^ 0x4a1178751b9c3c6;
    uStack_158 = *(ulonglong *)(lStack_1d0 + 0x200) ^ 0x4a2178451bac3c7;
    puStack_160 = (ulonglong *)(*(ulonglong *)(lStack_1d0 + 0x1f8) ^ 0xfb5ce87aae443c38);
    uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x1f0) ^ 0x4a0178651b8c3c5;
    uStack_f0 = *(ulonglong *)(lStack_1d0 + 0x1e8) ^ 0x4a1178751b9c3c6;
    uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x1e0) ^ 0x4a2178451bac3c7;
    uStack_100 = *(ulonglong *)(lStack_1d0 + 0x1d8) ^ 0xfb5ce87aae443c38;
    fn_cf18__sol_invoke_signed_c(&uStack_188,uStack_208,uStack_230,uStack_1e0);
    unaff_R6 = (ulonglong)uStack_188;
    if (unaff_R6 == 0x1a) {
      if (uStack_210 == 0) {
LAB_ram_0000f388:
        uStack_f8 = uStack_250;
        uStack_100 = uStack_238;
        fn_2bcf8__sol_invoke_signed_c(&uStack_198,&uStack_100,8,0);
        unaff_R6 = (ulonglong)uStack_198;
        if (unaff_R6 == 0x1a) {
          if (lVar7 == 0) {
            lStack_1d8 = lStack_c8;
            lStack_c8 = lVar3;
          }
          uStack_128 = puStack_220[3];
          uStack_130 = puStack_220[2];
          uStack_138 = puStack_220[1];
          uStack_140 = *puStack_220;
          lStack_120 = *plVar30;
          uStack_118 = *(undefined8 *)(unaff_R9 + 0x10);
          uStack_110 = *(undefined8 *)(unaff_R9 + 0x18);
          uStack_108 = *(undefined8 *)(unaff_R9 + 0x20);
          uVar1 = *(undefined1 *)(lStack_1b8 + 0x18);
          lStack_1b8._0_1_ = (undefined1)*(undefined8 *)(lStack_1b8 + 8);
          uVar12 = *(ulonglong *)(lStack_1d0 + 0x210);
          uVar23 = *(ulonglong *)(lStack_1d0 + 0x1f0);
          uVar13 = *(ulonglong *)(lStack_1d0 + 0x208);
          uVar14 = *(ulonglong *)(lStack_1d0 + 0x1e8);
          uVar15 = *(ulonglong *)(lStack_1d0 + 0x200);
          uVar16 = *(ulonglong *)(lStack_1d0 + 0x1e0);
          uVar28 = *(ulonglong *)(lStack_1d0 + 0x1f8);
          uVar17 = *(ulonglong *)(lStack_1d0 + 0x1d8);
          uVar19 = *(ulonglong *)(lStack_1d0 + 0x378);
          uVar29 = *(ulonglong *)(lStack_1d0 + 800);
          uVar9 = *(undefined8 *)(lStack_1d0 + 0x298);
          uVar31 = *(undefined8 *)(lStack_1d0 + 0x2a0);
          uVar18 = *puStack_220;
          uVar24 = puStack_220[1];
          uVar34 = puStack_220[2];
          *(undefined8 *)(lStack_1d0 + 0x2e0) = puStack_220[3];
          *(undefined8 *)(lStack_1d0 + 0x2d8) = uVar34;
          *(undefined8 *)(lStack_1d0 + 0x2d0) = uVar24;
          *(undefined8 *)(lStack_1d0 + 0x2c8) = uVar18;
          *(undefined8 *)(lStack_1d0 + 0x2f0) = uVar31;
          *(undefined8 *)(lStack_1d0 + 0x2e8) = uVar9;
          *(char *)(lStack_1d0 + 0x308) = cStack_1b0;
          *(longlong *)(lStack_1d0 + 0x300) = lStack_1d8;
          *(longlong *)(lStack_1d0 + 0x2f8) = lStack_c8;
          *(undefined8 *)(lStack_1d0 + 0x309) = 0;
          *(undefined8 *)(lStack_1d0 + 0x310) = 0;
          fn_2600(lStack_1d0 + 0x2c8);
          fn_2fe08__sol_memcpy(&uStack_100,&uStack_140,0x40);
          if (lStack_1c0 == 0) {
            lStack_1b8._0_1_ = 0;
          }
          uStack_20 = uStack_218 ^ 0x6e9de2b30b19f9ea;
          uStack_5 = uVar1;
          if (lStack_1c0 == 0) {
            uStack_5 = 0;
          }
          uStack_18 = uVar29 ^ 0xd3198133b7c1776c;
          uVar19 = uVar19 ^ 0x504156a22548f8dd;
          uStack_c0 = uVar17 ^ 0xfb5ce87aae443c38;
          uStack_a0 = uVar28 ^ 0xfb5ce87aae443c38;
          uStack_b8 = uVar16 ^ 0x4a2178451bac3c7;
          uStack_98 = uVar15 ^ 0x4a2178451bac3c7;
          uStack_b0 = uVar14 ^ 0x4a1178751b9c3c6;
          uStack_90 = uVar13 ^ 0x4a1178751b9c3c6;
          uStack_a8 = uVar23 ^ 0x4a0178651b8c3c5;
          uStack_88 = uVar12 ^ 0x4a0178651b8c3c5;
          uStack_48 = uStack_d0;
          uStack_50 = uStack_d8;
          uStack_58 = uStack_e0;
          uStack_60 = uVar6;
          uStack_68 = uVar5;
          uStack_70 = uVar4;
          uStack_6 = (undefined1)lStack_1b8;
          uStack_7 = (undefined1)uVar20;
          lStack_28 = lStack_1d8;
          uStack_80 = uVar9;
          uStack_78 = uVar31;
          uStack_40 = uVar21;
          uStack_38 = uVar22;
          uStack_10 = uVar19;
          fn_1e20(&uStack_100);
          uStack_158 = 0x100;
          puStack_160 = &uStack_100;
          fn_2de38(&puStack_160,1);
          unaff_R6 = 0x1a;
        }
        else {
          uVar19 = (ulonglong)uStack_194;
        }
      }
      else if (plStack_1c8 == (longlong *)0x0) {
        unaff_R6 = 0;
        uVar19 = 0xbadc0de;
      }
      else {
        if (*(ulonglong *)(lStack_1d0 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lStack_1d0 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lStack_1d0 + 0x270);
          uStack_170 = *(ulonglong *)(lStack_1d0 + 0x268);
          uStack_178 = *(ulonglong *)(lStack_1d0 + 0x260);
          uStack_180 = *(ulonglong *)(lStack_1d0 + 600);
        }
        uStack_148 = *(ulonglong *)(lStack_1d0 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lStack_1d0 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lStack_1d0 + 0x200) ^ 0x4a2178451bac3c7;
        puStack_160 = (ulonglong *)(*(ulonglong *)(lStack_1d0 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lStack_1d0 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_f0 = *(ulonglong *)(lStack_1d0 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_f8 = *(ulonglong *)(lStack_1d0 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_100 = *(ulonglong *)(lStack_1d0 + 0x1d8) ^ 0xfb5ce87aae443c38;
        fn_cf18__sol_invoke_signed_c(&uStack_190,uStack_208,plStack_1c8,uStack_1e0);
        unaff_R6 = (ulonglong)uStack_190;
        if (unaff_R6 == 0x1a) goto LAB_ram_0000f388;
        uVar19 = (ulonglong)uStack_18c;
      }
    }
    else {
      uVar19 = (ulonglong)uStack_184;
    }
  }
LAB_ram_0000e060:
  unaff_R8W = (undefined4)uVar19;
LAB_ram_0000e970:
  puStack_1f0[1] = unaff_R8W;
  *puStack_1f0 = (int)unaff_R6;
  return;
}


/* ---- fn_f8d0 @ 0xf9f0 ---- */

/* WARNING: Removing unreachable block (ram,0x000103d0) */

void fn_f8d0(undefined4 *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                     longlong param_5)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  int iVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 uVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 uStack_200;
  longlong *plStack_1f0;
  longlong *plStack_1e8;
  longlong *plStack_1c8;
  undefined8 uStack_1b0;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong *puStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined2 uStack_6;
  
  lVar32 = param_2[9];
  if ((((*(longlong *)(lVar32 + 8) != 0x66d17b1817d5a706) ||
       (*(longlong *)(lVar32 + 0x10) != -0x3f3d02aafb2b25cb)) ||
      (*(longlong *)(lVar32 + 0x18) != -0x5a8aa9de7039db3f)) ||
     (bVar1 = false, *(longlong *)(lVar32 + 0x20) != 0x85fcbbadb)) {
    bVar1 = true;
  }
  uVar35 = 0;
  puVar26 = (ulonglong *)0xabad1dea;
  if (bVar1) goto LAB_ram_000114c0;
  lVar32 = param_2[6];
  if (((*(longlong *)(lVar32 + 8) != -0x368b38e7e82a58fa) ||
      (*(longlong *)(lVar32 + 0x10) != -0x49a1e296679ca9d8)) ||
     ((*(longlong *)(lVar32 + 0x18) != 0x5c6d4b9ba3b85e8b ||
      (bVar1 = false, *(longlong *)(lVar32 + 0x20) != 0x215b5573)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_000114c0;
  lVar3 = param_2[1];
  if (((*(longlong *)(lVar3 + 0x28) != -0x16a608d8d48b0286) ||
      (*(longlong *)(lVar3 + 0x30) != 0x7a819dd33c7070c6)) ||
     ((*(longlong *)(lVar3 + 0x38) != 0x6dd2523bce0a93a0 ||
      (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x2c4478dc22ab5fac)))) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_000114c0;
  if (*(longlong *)(lVar3 + 0x50) != 0x6c0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,2);
  }
  if ((lVar3 + 0x58U & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,0);
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x288) ^ 0xffffffffffffffa1;
  puVar26 = (ulonglong *)0xbadc0de2;
  if (2 < (uVar4 & 0xff)) goto LAB_ram_000114c0;
  lVar36 = *param_2;
  puVar37 = (undefined8 *)(lVar36 + 8);
  if ((((*(longlong *)(lVar36 + 8) != 0x77c2575f37eddd1b) ||
       (*(longlong *)(lVar36 + 0x10) != 0x2d6e7a2be59cf048)) ||
      (*(longlong *)(lVar36 + 0x18) != 0x7ea41dd6046c6fc4)) ||
     (bVar1 = false, *(longlong *)(lVar36 + 0x20) != 0x31797eed4f7e7455)) {
    bVar1 = true;
  }
  uVar38 = *(ulonglong *)(lVar3 + 0x2b0);
  uVar27 = *(ulonglong *)(param_5 + -0xff8);
  uStack_200 = *(undefined8 *)(param_5 + -0x1000);
  if (((bVar1) && (uVar4 = uVar4 & 0xff, uVar4 != 0)) && (uVar4 == 1)) {
    puVar26 = (ulonglong *)0x1ced;
    uVar35 = 0;
    goto LAB_ram_000114c0;
  }
  plVar16 = param_2 + 3;
  plStack_1c8 = param_2 + 2;
  uVar17 = *(ulonglong *)(lVar3 + 0x248) ^ 0x4a1178751b9c3c6;
  uVar35 = *(ulonglong *)(lVar3 + 0x250) ^ 0x4a0178651b8c3c5;
  uVar28 = *(ulonglong *)(lVar3 + 0x240) ^ 0x4a2178451bac3c7;
  uVar4 = *(ulonglong *)(lVar3 + 0x238) ^ 0xfb5ce87aae443c38;
  uVar23 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
           (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
           uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
  lVar21 = *plStack_1c8;
  uVar4 = *(ulonglong *)(lVar21 + 8);
  uVar4 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
          uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
  if (uVar23 == uVar4) {
    uVar23 = uVar28 << 0x38 | (uVar28 & 0xff00) << 0x28 | (uVar28 & 0xff0000) << 0x18 |
             (uVar28 & 0xff000000) << 8 | uVar28 >> 8 & 0xff000000 | uVar28 >> 0x18 & 0xff0000 |
             uVar28 >> 0x28 & 0xff00 | uVar28 >> 0x38;
    uVar4 = *(ulonglong *)(lVar21 + 0x10);
    uVar4 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
            uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
    if (uVar23 != uVar4) goto LAB_ram_00010160;
    uVar23 = uVar17 << 0x38 | (uVar17 & 0xff00) << 0x28 | (uVar17 & 0xff0000) << 0x18 |
             (uVar17 & 0xff000000) << 8 | uVar17 >> 8 & 0xff000000 | uVar17 >> 0x18 & 0xff0000 |
             uVar17 >> 0x28 & 0xff00 | uVar17 >> 0x38;
    uVar4 = *(ulonglong *)(lVar21 + 0x18);
    uVar4 = uVar4 << 0x38 | (uVar4 & 0xff00) << 0x28 | (uVar4 & 0xff0000) << 0x18 |
            (uVar4 & 0xff000000) << 8 | uVar4 >> 8 & 0xff000000 | uVar4 >> 0x18 & 0xff0000 |
            uVar4 >> 0x28 & 0xff00 | uVar4 >> 0x38;
    if (uVar23 != uVar4) goto LAB_ram_00010160;
    iVar15 = 0;
    uVar23 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    uVar35 = *(ulonglong *)(lVar21 + 0x20);
    uVar4 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
            (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
            uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar23 != uVar4) goto LAB_ram_00010160;
  }
  else {
LAB_ram_00010160:
    iVar15 = -1;
    if (uVar4 <= uVar23) {
      iVar15 = 1;
    }
  }
  uStack_f0 = *(ulonglong *)(lVar3 + 0x228) ^ 0x4a1178751b9c3c6;
  uStack_e8 = *(ulonglong *)(lVar3 + 0x230) ^ 0x4a0178651b8c3c5;
  uStack_f8 = *(ulonglong *)(lVar3 + 0x220) ^ 0x4a2178451bac3c7;
  uStack_100 = *(ulonglong *)(lVar3 + 0x218) ^ 0xfb5ce87aae443c38;
  uVar4 = uStack_100 << 0x38 | (uStack_100 & 0xff00) << 0x28 | (uStack_100 & 0xff0000) << 0x18 |
          (uStack_100 & 0xff000000) << 8 | uStack_100 >> 8 & 0xff000000 |
          uStack_100 >> 0x18 & 0xff0000 | uStack_100 >> 0x28 & 0xff00 | uStack_100 >> 0x38;
  lVar30 = *plVar16;
  uVar35 = *(ulonglong *)(lVar30 + 8);
  uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
           (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
           uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
  if (uVar4 == uVar35) {
    uVar4 = uStack_f8 << 0x38 | (uStack_f8 & 0xff00) << 0x28 | (uStack_f8 & 0xff0000) << 0x18 |
            (uStack_f8 & 0xff000000) << 8 | uStack_f8 >> 8 & 0xff000000 |
            uStack_f8 >> 0x18 & 0xff0000 | uStack_f8 >> 0x28 & 0xff00 | uStack_f8 >> 0x38;
    uVar35 = *(ulonglong *)(lVar30 + 0x10);
    uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar4 != uVar35) goto LAB_ram_000102c8;
    uVar4 = uStack_f0 << 0x38 | (uStack_f0 & 0xff00) << 0x28 | (uStack_f0 & 0xff0000) << 0x18 |
            (uStack_f0 & 0xff000000) << 8 | uStack_f0 >> 8 & 0xff000000 |
            uStack_f0 >> 0x18 & 0xff0000 | uStack_f0 >> 0x28 & 0xff00 | uStack_f0 >> 0x38;
    uVar35 = *(ulonglong *)(lVar30 + 0x18);
    uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar4 != uVar35) goto LAB_ram_000102c8;
    iVar25 = 0;
    uVar4 = uStack_e8 << 0x38 | (uStack_e8 & 0xff00) << 0x28 | (uStack_e8 & 0xff0000) << 0x18 |
            (uStack_e8 & 0xff000000) << 8 | uStack_e8 >> 8 & 0xff000000 |
            uStack_e8 >> 0x18 & 0xff0000 | uStack_e8 >> 0x28 & 0xff00 | uStack_e8 >> 0x38;
    uVar35 = *(ulonglong *)(lVar30 + 0x20);
    uVar35 = uVar35 << 0x38 | (uVar35 & 0xff00) << 0x28 | (uVar35 & 0xff0000) << 0x18 |
             (uVar35 & 0xff000000) << 8 | uVar35 >> 8 & 0xff000000 | uVar35 >> 0x18 & 0xff0000 |
             uVar35 >> 0x28 & 0xff00 | uVar35 >> 0x38;
    if (uVar4 != uVar35) goto LAB_ram_000102c8;
  }
  else {
LAB_ram_000102c8:
    iVar25 = -1;
    if (uVar35 <= uVar4) {
      iVar25 = 1;
    }
  }
  if (iVar25 != 0 || iVar15 != 0) {
    puVar26 = (ulonglong *)0xbadface3;
    uVar35 = 0;
    goto LAB_ram_000114c0;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x2c0) ^ 0x6e9de2b30b19f1ea;
  uVar17 = *(ulonglong *)(lVar32 + 0x58) - uVar4;
  uVar35 = 0;
  if ((uVar17 <= *(ulonglong *)(lVar32 + 0x58)) &&
     (puVar26 = (ulonglong *)0xfaded, (*(ulonglong *)(lVar3 + 0x2b8) ^ 0x6e9de2b30b19f1ea) < uVar17)
     ) goto LAB_ram_000114c0;
  puVar26 = (ulonglong *)fn_10320(&uStack_100);
  if (puVar26 != (ulonglong *)0x0) {
    uVar4 = (longlong)puVar26 << 0x20 | (ulonglong)(puVar26 + -0x20000000) >> 0x20;
    if (uVar4 < 0x1a) {
      puVar26 = (ulonglong *)(ulonglong)*(uint *)(&DAT_ram_00032150 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */ + uVar4 * 4);
      uVar35 = uVar4;
    }
    goto LAB_ram_000114c0;
  }
  puVar26 = (ulonglong *)0xfaded;
  if (uVar4 <= uStack_100) goto LAB_ram_000114c0;
  puVar12 = (undefined8 *)(lVar3 + 8);
  lVar32 = fn_12770__sol_sha256(puVar37,puVar12,uVar4);
  uVar20 = 1;
  if (lVar32 != param_4) {
    lVar32 = fn_128c0__sol_sha256(puVar37,puVar12,uVar4);
    uVar20 = 1;
    if (lVar32 != param_4) {
      uVar20 = 0;
    }
  }
  uVar35 = 0;
  uVar4 = uVar27 & 0xff;
  if (uVar4 == 0) {
    bVar1 = false;
  }
  else {
    if (uVar4 != 1) {
      puVar26 = (ulonglong *)0xbadb100d;
      goto LAB_ram_000114c0;
    }
    bVar1 = true;
  }
  lVar32 = param_2[7];
  if ((((*(longlong *)(lVar32 + 8) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(lVar32 + 0x10) != -0x53861431b91e3427)) ||
      (*(longlong *)(lVar32 + 0x18) != -0x6ec8a4a0127a4be4)) ||
     (bVar2 = false, *(longlong *)(lVar32 + 0x20) != -0x56ff00817a0a73c6)) {
    bVar2 = true;
  }
  lVar13 = param_2[8];
  if (bVar2) {
    if (((*(longlong *)(lVar32 + 8) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar32 + 0x10) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar32 + 0x18) != 0x270db9834dfc1ab6 ||
        (bVar2 = false, *(longlong *)(lVar32 + 0x20) != -0x3745e27d7064202)))) {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_ram_00010758;
LAB_ram_00010888:
    puVar26 = (ulonglong *)0xbadc0de3;
  }
  else {
LAB_ram_00010758:
    if (((*(longlong *)(lVar13 + 8) != -0x6c5e9a281e0922fa) ||
        (*(longlong *)(lVar13 + 0x10) != -0x53861431b91e3427)) ||
       ((*(longlong *)(lVar13 + 0x18) != -0x6ec8a4a0127a4be4 ||
        (bVar2 = false, *(longlong *)(lVar13 + 0x20) != -0x56ff00817a0a73c6)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if ((((*(longlong *)(lVar13 + 8) != -0x21708a111e0922fa) ||
           (*(longlong *)(lVar13 + 0x10) != -0x2532931b43a2bde8)) ||
          (*(longlong *)(lVar13 + 0x18) != 0x270db9834dfc1ab6)) ||
         (bVar2 = false, *(longlong *)(lVar13 + 0x20) != -0x3745e27d7064202)) {
        bVar2 = true;
      }
      if (bVar2) goto LAB_ram_00010888;
    }
    puVar26 = (ulonglong *)0xb1ade2;
    if ((0x47 < *(ulonglong *)(lVar21 + 0x50)) && (0x47 < *(ulonglong *)(lVar30 + 0x50))) {
      uVar22 = *(undefined8 *)(lVar21 + 0x98);
      uVar18 = *(undefined8 *)(lVar30 + 0x98);
      uStack_148 = *(undefined8 *)(lVar3 + 0x20);
      uStack_150 = *(undefined8 *)(lVar3 + 0x18);
      uStack_158 = *(undefined8 *)(lVar3 + 0x10);
      puStack_160 = (ulonglong *)*puVar12;
      fn_25ee0(&uStack_100,uStack_200);
      uVar23 = uStack_e8;
      uVar17 = uStack_f0;
      uVar4 = uStack_f8;
      if ((int)uStack_100 == 1) {
        puVar26 = (ulonglong *)(uStack_f8 & 0xffffffff);
        uVar35 = uStack_100 >> 0x20;
      }
      else {
        plStack_1f0 = param_2 + 5;
        plVar33 = param_2 + 4;
        plStack_1e8 = plVar16;
        if (bVar1) {
          plVar33 = plStack_1f0;
          plStack_1f0 = param_2 + 4;
          plStack_1e8 = plStack_1c8;
          plStack_1c8 = plVar16;
        }
        if (*(ulonglong *)(lVar3 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lVar3 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lVar3 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lVar3 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lVar3 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lVar3 + 0x270);
          uStack_170 = *(ulonglong *)(lVar3 + 0x268);
          uStack_178 = *(ulonglong *)(lVar3 + 0x260);
          uStack_180 = *(ulonglong *)(lVar3 + 600);
        }
        uStack_148 = *(ulonglong *)(lVar3 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lVar3 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lVar3 + 0x200) ^ 0x4a2178451bac3c7;
        puStack_160 = (ulonglong *)(*(ulonglong *)(lVar3 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lVar3 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_f0 = *(ulonglong *)(lVar3 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_f8 = *(ulonglong *)(lVar3 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_100 = *(ulonglong *)(lVar3 + 0x1d8) ^ 0xfb5ce87aae443c38;
        fn_d740__sol_invoke_signed_c(&uStack_188,plStack_1e8,plStack_1f0,param_2 + 1);
        uVar35 = (ulonglong)uStack_188;
        if (uVar35 == 0x1a) {
          fn_ccc0__sol_invoke_signed_c(&uStack_190,plVar33,plStack_1c8,param_2);
          uVar35 = (ulonglong)uStack_190;
          if (uVar35 == 0x1a) {
            uStack_1b0 = uStack_c8;
            if (!bVar1) {
              uStack_1b0 = uStack_200;
            }
            if (!bVar1) {
              uStack_200 = uStack_c8;
            }
            uStack_128 = *(undefined8 *)(lVar36 + 0x20);
            uStack_130 = *(undefined8 *)(lVar36 + 0x18);
            uStack_138 = *(undefined8 *)(lVar36 + 0x10);
            uStack_140 = *puVar37;
            uStack_120 = *puVar12;
            uStack_118 = *(undefined8 *)(lVar3 + 0x10);
            uStack_110 = *(undefined8 *)(lVar3 + 0x18);
            uStack_108 = *(undefined8 *)(lVar3 + 0x20);
            uVar24 = *puVar37;
            uVar14 = *(undefined8 *)(lVar36 + 0x10);
            uVar19 = *(undefined8 *)(lVar36 + 0x18);
            uVar35 = *(ulonglong *)(lVar3 + 0x1d8);
            uVar28 = *(ulonglong *)(lVar3 + 0x1e0);
            uVar5 = *(ulonglong *)(lVar3 + 0x1e8);
            uVar6 = *(ulonglong *)(lVar3 + 0x1f8);
            uVar7 = *(ulonglong *)(lVar3 + 0x200);
            uVar8 = *(ulonglong *)(lVar3 + 0x208);
            uVar9 = *(ulonglong *)(lVar3 + 0x1f0);
            uVar39 = *(ulonglong *)(lVar3 + 0x210);
            uVar29 = *(ulonglong *)(lVar3 + 0x378);
            uVar34 = *(ulonglong *)(lVar3 + 800);
            uVar10 = *(undefined8 *)(lVar3 + 0x298);
            uVar31 = *(undefined8 *)(lVar3 + 0x2a0);
            *(undefined8 *)(lVar3 + 0x2e0) = *(undefined8 *)(lVar36 + 0x20);
            *(undefined8 *)(lVar3 + 0x2d8) = uVar19;
            *(undefined8 *)(lVar3 + 0x2d0) = uVar14;
            *(undefined8 *)(lVar3 + 0x2c8) = uVar24;
            *(undefined8 *)(lVar3 + 0x2f0) = uVar31;
            *(undefined8 *)(lVar3 + 0x2e8) = uVar10;
            uVar11 = (undefined1)uVar27;
            *(undefined1 *)(lVar3 + 0x308) = uVar11;
            *(undefined8 *)(lVar3 + 0x300) = uStack_200;
            *(undefined8 *)(lVar3 + 0x2f8) = uStack_1b0;
            *(undefined8 *)(lVar3 + 0x309) = 0;
            *(undefined8 *)(lVar3 + 0x310) = 0;
            fn_2600(lVar3 + 0x2c8);
            puVar26 = &uStack_100;
            fn_2fe08__sol_memcpy(puVar26,&uStack_140,0x40);
            uStack_18 = uVar34 ^ 0xd3198133b7c1776c;
            uStack_10 = uVar29 ^ 0x504156a22548f8dd;
            uStack_88 = uVar39 ^ 0x4a0178651b8c3c5;
            uStack_a8 = uVar9 ^ 0x4a0178651b8c3c5;
            uStack_48 = uStack_d0;
            uStack_50 = uStack_d8;
            uStack_58 = uStack_e0;
            uStack_60 = uVar23;
            uStack_68 = uVar17;
            uStack_70 = uVar4;
            uStack_28 = uStack_200;
            uStack_30 = uStack_1b0;
            uStack_90 = uVar8 ^ 0x4a1178751b9c3c6;
            uStack_98 = uVar7 ^ 0x4a2178451bac3c7;
            uStack_a0 = uVar6 ^ 0xfb5ce87aae443c38;
            uStack_b0 = uVar5 ^ 0x4a1178751b9c3c6;
            uStack_b8 = uVar28 ^ 0x4a2178451bac3c7;
            uStack_c0 = uVar35 ^ 0xfb5ce87aae443c38;
            uStack_6 = 0;
            uStack_80 = uVar10;
            uStack_78 = uVar31;
            uStack_40 = uVar22;
            uStack_38 = uVar18;
            uStack_20 = uVar38 ^ 0x6e9de2b30b19f9ea;
            uStack_8 = uVar11;
            uStack_7 = uVar20;
            fn_1e20(puVar26);
            uStack_158 = 0x100;
            puStack_160 = puVar26;
            fn_2de38(&puStack_160,1);
            uVar35 = 0x1a;
          }
          else {
            puVar26 = (ulonglong *)(ulonglong)uStack_18c;
          }
        }
        else {
          puVar26 = (ulonglong *)(ulonglong)uStack_184;
        }
      }
    }
  }
LAB_ram_000114c0:
  param_1[1] = (int)puVar26;
  *param_1 = (int)uVar35;
  return;
}


/* ---- fn_10320 @ 0x10440 ---- */

void fn_10320(void)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulonglong *unaff_R6;
  ulonglong uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong unaff_R9;
  ulonglong uVar27;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  char cStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b0;
  longlong lStack_1a0;
  longlong lStack_198;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong *puStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  undefined1 uStack_7;
  undefined2 uStack_6;
  
  puVar5 = (ulonglong *)fn_10320();
  if (puVar5 != (ulonglong *)0x0) {
    uVar15 = (longlong)puVar5 << 0x20 | (ulonglong)(puVar5 + -0x20000000) >> 0x20;
    if (uVar15 < 0x1a) {
      puVar5 = (ulonglong *)(ulonglong)*(uint *)(&DAT_ram_00032150 /* .rodata: hex: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */ + uVar15 * 4);
      unaff_R9 = uVar15;
    }
    goto LAB_ram_000114c0;
  }
  puVar5 = unaff_R6;
  if (uStack_218 <= uStack_100) goto LAB_ram_000114c0;
  puVar16 = (undefined8 *)(lStack_1a0 + 8);
  lVar6 = fn_12770__sol_sha256(puStack_1e0,puVar16,uStack_218);
  uVar21 = 1;
  if (lVar6 != lStack_198) {
    lVar6 = fn_128c0__sol_sha256(puStack_1e0,puVar16,uStack_218);
    uVar21 = 1;
    if (lVar6 != lStack_198) {
      uVar21 = 0;
    }
  }
  unaff_R9 = 0;
  if (cStack_1d8 == '\0') {
    bVar2 = false;
  }
  else {
    if (cStack_1d8 != '\x01') {
      puVar5 = (ulonglong *)0xbadb100d;
      goto LAB_ram_000114c0;
    }
    bVar2 = true;
  }
  lVar6 = *(longlong *)(lStack_230 + 0x38);
  if ((((*(longlong *)(lVar6 + 8) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(lVar6 + 0x10) != -0x53861431b91e3427)) ||
      (*(longlong *)(lVar6 + 0x18) != -0x6ec8a4a0127a4be4)) ||
     (bVar1 = false, *(longlong *)(lVar6 + 0x20) != -0x56ff00817a0a73c6)) {
    bVar1 = true;
  }
  lVar17 = *(longlong *)(lStack_230 + 0x40);
  if (bVar1) {
    if (((*(longlong *)(lVar6 + 8) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar6 + 0x10) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar6 + 0x18) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(lVar6 + 0x20) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_ram_00010758;
LAB_ram_00010888:
    puVar5 = (ulonglong *)0xbadc0de3;
  }
  else {
LAB_ram_00010758:
    if (((*(longlong *)(lVar17 + 8) != -0x6c5e9a281e0922fa) ||
        (*(longlong *)(lVar17 + 0x10) != -0x53861431b91e3427)) ||
       ((*(longlong *)(lVar17 + 0x18) != -0x6ec8a4a0127a4be4 ||
        (bVar1 = false, *(longlong *)(lVar17 + 0x20) != -0x56ff00817a0a73c6)))) {
      bVar1 = true;
    }
    if (bVar1) {
      if ((((*(longlong *)(lVar17 + 8) != -0x21708a111e0922fa) ||
           (*(longlong *)(lVar17 + 0x10) != -0x2532931b43a2bde8)) ||
          (*(longlong *)(lVar17 + 0x18) != 0x270db9834dfc1ab6)) ||
         (bVar1 = false, *(longlong *)(lVar17 + 0x20) != -0x3745e27d7064202)) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_ram_00010888;
    }
    puVar5 = (ulonglong *)0xb1ade2;
    if ((0x47 < *(ulonglong *)(lStack_220 + 0x50)) && (0x47 < *(ulonglong *)(lStack_228 + 0x50))) {
      uVar22 = *(undefined8 *)(lStack_220 + 0x98);
      uVar19 = *(undefined8 *)(lStack_228 + 0x98);
      uStack_148 = *(undefined8 *)(lStack_1a0 + 0x20);
      uStack_150 = *(undefined8 *)(lStack_1a0 + 0x18);
      uStack_158 = *(undefined8 *)(lStack_1a0 + 0x10);
      puStack_160 = (ulonglong *)*puVar16;
      fn_25ee0(&uStack_100,uStack_200);
      uVar4 = uStack_e8;
      uVar3 = uStack_f0;
      uVar15 = uStack_f8;
      if ((int)uStack_100 == 1) {
        puVar5 = (ulonglong *)(uStack_f8 & 0xffffffff);
        unaff_R9 = uStack_100 >> 0x20;
      }
      else {
        lStack_1f0 = lStack_230 + 0x28;
        if (bVar2) {
          uStack_1e8 = uStack_208;
          lVar6 = lStack_1f0;
          lStack_1f0 = lStack_230 + 0x20;
        }
        else {
          uStack_1e8 = uStack_1c8;
          uStack_1c8 = uStack_208;
          lVar6 = lStack_230 + 0x20;
        }
        if (*(ulonglong *)(lStack_1a0 + 0x710) < 5) {
          uStack_170 = *(ulonglong *)(lStack_1a0 + 0x268) ^ 0x4a1178751b9c3c6;
          uStack_168 = *(ulonglong *)(lStack_1a0 + 0x270) ^ 0x4a0178651b8c3c5;
          uStack_178 = *(ulonglong *)(lStack_1a0 + 0x260) ^ 0x4a2178451bac3c7;
          uStack_180 = *(ulonglong *)(lStack_1a0 + 600) ^ 0xfb5ce87aae443c38;
        }
        else {
          uStack_168 = *(ulonglong *)(lStack_1a0 + 0x270);
          uStack_170 = *(ulonglong *)(lStack_1a0 + 0x268);
          uStack_178 = *(ulonglong *)(lStack_1a0 + 0x260);
          uStack_180 = *(ulonglong *)(lStack_1a0 + 600);
        }
        uStack_148 = *(ulonglong *)(lStack_1a0 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_150 = *(ulonglong *)(lStack_1a0 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_158 = *(ulonglong *)(lStack_1a0 + 0x200) ^ 0x4a2178451bac3c7;
        puStack_160 = (ulonglong *)(*(ulonglong *)(lStack_1a0 + 0x1f8) ^ 0xfb5ce87aae443c38);
        uStack_e8 = *(ulonglong *)(lStack_1a0 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_f0 = *(ulonglong *)(lStack_1a0 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_f8 = *(ulonglong *)(lStack_1a0 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_100 = *(ulonglong *)(lStack_1a0 + 0x1d8) ^ 0xfb5ce87aae443c38;
        fn_d740__sol_invoke_signed_c(&uStack_188,uStack_1e8,lStack_1f0,uStack_1b0);
        unaff_R9 = (ulonglong)uStack_188;
        if (unaff_R9 == 0x1a) {
          fn_ccc0__sol_invoke_signed_c(&uStack_190,lVar6,uStack_1c8,lStack_230);
          unaff_R9 = (ulonglong)uStack_190;
          if (unaff_R9 == 0x1a) {
            uStack_1b0 = uStack_c8;
            if (!bVar2) {
              uStack_1b0 = uStack_200;
            }
            if (!bVar2) {
              uStack_200 = uStack_c8;
            }
            uStack_128 = puStack_1e0[3];
            uStack_130 = puStack_1e0[2];
            uStack_138 = puStack_1e0[1];
            uStack_140 = *puStack_1e0;
            uStack_120 = *puVar16;
            uStack_118 = *(undefined8 *)(lStack_1a0 + 0x10);
            uStack_110 = *(undefined8 *)(lStack_1a0 + 0x18);
            uStack_108 = *(undefined8 *)(lStack_1a0 + 0x20);
            uVar23 = *puStack_1e0;
            uVar18 = puStack_1e0[1];
            uVar20 = puStack_1e0[2];
            uVar7 = *(ulonglong *)(lStack_1a0 + 0x1d8);
            uVar8 = *(ulonglong *)(lStack_1a0 + 0x1e0);
            uVar9 = *(ulonglong *)(lStack_1a0 + 0x1e8);
            uVar10 = *(ulonglong *)(lStack_1a0 + 0x1f8);
            uVar11 = *(ulonglong *)(lStack_1a0 + 0x200);
            uVar12 = *(ulonglong *)(lStack_1a0 + 0x208);
            uVar13 = *(ulonglong *)(lStack_1a0 + 0x1f0);
            uVar27 = *(ulonglong *)(lStack_1a0 + 0x210);
            uVar24 = *(ulonglong *)(lStack_1a0 + 0x378);
            uVar26 = *(ulonglong *)(lStack_1a0 + 800);
            uVar14 = *(undefined8 *)(lStack_1a0 + 0x298);
            uVar25 = *(undefined8 *)(lStack_1a0 + 0x2a0);
            *(undefined8 *)(lStack_1a0 + 0x2e0) = puStack_1e0[3];
            *(undefined8 *)(lStack_1a0 + 0x2d8) = uVar20;
            *(undefined8 *)(lStack_1a0 + 0x2d0) = uVar18;
            *(undefined8 *)(lStack_1a0 + 0x2c8) = uVar23;
            *(undefined8 *)(lStack_1a0 + 0x2f0) = uVar25;
            *(undefined8 *)(lStack_1a0 + 0x2e8) = uVar14;
            *(char *)(lStack_1a0 + 0x308) = cStack_1d8;
            *(undefined8 *)(lStack_1a0 + 0x300) = uStack_200;
            *(undefined8 *)(lStack_1a0 + 0x2f8) = uStack_1b0;
            *(undefined8 *)(lStack_1a0 + 0x309) = 0;
            *(undefined8 *)(lStack_1a0 + 0x310) = 0;
            fn_2600(lStack_1a0 + 0x2c8);
            puVar5 = &uStack_100;
            fn_2fe08__sol_memcpy(puVar5,&uStack_140,0x40);
            uStack_18 = uVar26 ^ 0xd3198133b7c1776c;
            uStack_10 = uVar24 ^ 0x504156a22548f8dd;
            uStack_88 = uVar27 ^ 0x4a0178651b8c3c5;
            uStack_a8 = uVar13 ^ 0x4a0178651b8c3c5;
            uStack_48 = uStack_d0;
            uStack_50 = uStack_d8;
            uStack_58 = uStack_e0;
            uStack_60 = uVar4;
            uStack_68 = uVar3;
            uStack_70 = uVar15;
            uStack_28 = uStack_200;
            uStack_30 = uStack_1b0;
            uStack_90 = uVar12 ^ 0x4a1178751b9c3c6;
            uStack_98 = uVar11 ^ 0x4a2178451bac3c7;
            uStack_a0 = uVar10 ^ 0xfb5ce87aae443c38;
            uStack_b0 = uVar9 ^ 0x4a1178751b9c3c6;
            uStack_b8 = uVar8 ^ 0x4a2178451bac3c7;
            uStack_c0 = uVar7 ^ 0xfb5ce87aae443c38;
            uStack_6 = 0;
            uStack_80 = uVar14;
            uStack_78 = uVar25;
            uStack_40 = uVar22;
            uStack_38 = uVar19;
            uStack_20 = uStack_210 ^ 0x6e9de2b30b19f9ea;
            uStack_7 = uVar21;
            fn_1e20(puVar5);
            uStack_158 = 0x100;
            puStack_160 = puVar5;
            fn_2de38(&puStack_160,1);
            unaff_R9 = 0x1a;
          }
          else {
            puVar5 = (ulonglong *)(ulonglong)uStack_18c;
          }
        }
        else {
          puVar5 = (ulonglong *)(ulonglong)uStack_184;
        }
      }
    }
  }
LAB_ram_000114c0:
  puStack_1d0[1] = (int)puVar5;
  *puStack_1d0 = (int)unaff_R9;
  return;
}


/* ---- fn_113b8__custom_panic @ 0x114d8 ---- */

void fn_113b8__custom_panic(undefined4 *param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                     longlong param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  ulonglong *puVar7;
  undefined *puVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  byte bVar19;
  ulonglong uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uStack_90;
  undefined8 *puStack_88;
  ulonglong uStack_80;
  undefined4 *puStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  plVar10 = (longlong *)0xbadc0de1;
  uVar4 = 0;
  puStack_78 = param_1;
  if ((param_3 < 0xd) || (plVar10 = (longlong *)0xbadc0ded, param_5 != 0x18)) goto LAB_ram_00011c78;
  lVar18 = *(longlong *)(param_2 + 8);
  plVar15 = *(longlong **)(lVar18 + 0x50);
  uStack_90 = param_3;
  puStack_88 = param_4;
  uStack_80 = param_2;
  if (plVar15 < (longlong *)0x6c0) {
    piVar5 = (int *)0x6c0;
    puVar8 = &DAT_ram_00032640 /* .data.rel.ro: &str "contract/src/instructions.rs" (len=28) */;
    plVar13 = plVar15;
    fn_2f320__custom_panic();
    iVar9 = 0xbadc0de;
    iVar17 = 0;
    if (puVar8 != (undefined *)0x7) goto LAB_ram_00012560;
    if (plVar13 != (longlong *)0x18) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,2);
    }
    if (((ulonglong)plVar10 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,0);
    }
    lVar18 = *plVar15;
    lVar16 = plVar15[1];
    fn_11cb0(lVar16 + 0x28,&DAT_ram_00031900 /* .rodata: hex: 7a fd 74 2b 27 f7 59 e9 c6 70 70 3c d3 9d 81 7a */,0x20,&uStack_20);
    iVar2 = (int)uStack_20;
    uStack_8 = *(ulonglong *)(lVar16 + 0x270);
    uStack_10 = *(ulonglong *)(lVar16 + 0x268);
    uStack_18 = *(ulonglong *)(lVar16 + 0x260);
    uStack_20 = *(ulonglong *)(lVar16 + 600);
    if (*(ulonglong *)(lVar16 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    uVar22 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
             (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 |
             uStack_20 >> 0x18 & 0xff0000 | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
    uVar11 = *(ulonglong *)(lVar18 + 8);
    uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
             (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
             uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
    if (uVar22 == uVar11) {
      uVar22 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
               (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
               uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
      uVar11 = *(ulonglong *)(lVar18 + 0x10);
      uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
               (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
               uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
      if (uVar22 != uVar11) goto LAB_ram_00011fc0;
      uVar22 = uStack_10 << 0x38 | (uStack_10 & 0xff00) << 0x28 | (uStack_10 & 0xff0000) << 0x18 |
               (uStack_10 & 0xff000000) << 8 | uStack_10 >> 8 & 0xff000000 |
               uStack_10 >> 0x18 & 0xff0000 | uStack_10 >> 0x28 & 0xff00 | uStack_10 >> 0x38;
      uVar11 = *(ulonglong *)(lVar18 + 0x18);
      uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
               (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
               uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
      if (uVar22 != uVar11) goto LAB_ram_00011fc0;
      iVar14 = 0;
      uVar22 = uStack_8 << 0x38 | (uStack_8 & 0xff00) << 0x28 | (uStack_8 & 0xff0000) << 0x18 |
               (uStack_8 & 0xff000000) << 8 | uStack_8 >> 8 & 0xff000000 |
               uStack_8 >> 0x18 & 0xff0000 | uStack_8 >> 0x28 & 0xff00 | uStack_8 >> 0x38;
      uVar11 = *(ulonglong *)(lVar18 + 0x20);
      uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
               (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
               uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
      if (uVar22 != uVar11) goto LAB_ram_00011fc0;
    }
    else {
LAB_ram_00011fc0:
      iVar14 = -1;
      if (uVar11 <= uVar22) {
        iVar14 = 1;
      }
    }
    iVar9 = -0x5452e216;
    iVar17 = 0;
    if ((*(char *)(lVar18 + 1) != '\0') && (iVar14 == 0 && iVar2 == 0)) {
      uStack_68 = *(ulonglong *)(lVar16 + 0x250) ^ 0x4a0178651b8c3c5;
      uStack_70 = *(ulonglong *)(lVar16 + 0x248) ^ 0x4a1178751b9c3c6;
      puStack_78 = (undefined4 *)(*(ulonglong *)(lVar16 + 0x240) ^ 0x4a2178451bac3c7);
      uStack_80 = *(ulonglong *)(lVar16 + 0x238) ^ 0xfb5ce87aae443c38;
      uStack_48 = *(ulonglong *)(lVar16 + 0x230) ^ 0x4a0178651b8c3c5;
      uStack_50 = *(ulonglong *)(lVar16 + 0x228) ^ 0x4a1178751b9c3c6;
      uStack_58 = *(ulonglong *)(lVar16 + 0x220) ^ 0x4a2178451bac3c7;
      uStack_60 = *(ulonglong *)(lVar16 + 0x218) ^ 0xfb5ce87aae443c38;
      lVar18 = plVar15[2];
      if ((uStack_80 != *(ulonglong *)(lVar18 + 8)) ||
         (((puStack_78 != (undefined4 *)*(ulonglong *)(lVar18 + 0x10) ||
           (uStack_70 != *(ulonglong *)(lVar18 + 0x18))) ||
          (bVar1 = false, uStack_68 != *(ulonglong *)(lVar18 + 0x20))))) {
        bVar1 = true;
      }
      iVar17 = 0;
      iVar9 = -0x4520531d;
      if (!bVar1) {
        lVar18 = plVar15[4];
        if (((uStack_60 != *(ulonglong *)(lVar18 + 8)) ||
            (uStack_58 != *(ulonglong *)(lVar18 + 0x10))) ||
           ((uStack_50 != *(ulonglong *)(lVar18 + 0x18) ||
            (bVar1 = false, uStack_48 != *(ulonglong *)(lVar18 + 0x20))))) {
          bVar1 = true;
        }
        if (!bVar1) {
          plVar13 = plVar15 + 1;
          uStack_28 = *(ulonglong *)(lVar16 + 0x210) ^ 0x4a0178651b8c3c5;
          uStack_30 = *(ulonglong *)(lVar16 + 0x208) ^ 0x4a1178751b9c3c6;
          uStack_38 = *(ulonglong *)(lVar16 + 0x200) ^ 0x4a2178451bac3c7;
          uStack_40 = *(ulonglong *)(lVar16 + 0x1f8) ^ 0xfb5ce87aae443c38;
          uStack_8 = *(ulonglong *)(lVar16 + 0x1f0) ^ 0x4a0178651b8c3c5;
          uStack_10 = *(ulonglong *)(lVar16 + 0x1e8) ^ 0x4a1178751b9c3c6;
          uStack_18 = *(ulonglong *)(lVar16 + 0x1e0) ^ 0x4a2178451bac3c7;
          uStack_20 = *(ulonglong *)(lVar16 + 0x1d8) ^ 0xfb5ce87aae443c38;
          if (*plVar10 != 0) {
            fn_cf18__sol_invoke_signed_c(&puStack_88,plVar15 + 2,plVar15 + 3,plVar13);
            if ((int)puStack_88 != 0x1a) {
              iVar9 = (int)((ulonglong)puStack_88 >> 0x20);
              iVar17 = (int)puStack_88;
              goto LAB_ram_00012560;
            }
          }
          if (plVar10[1] != 0) {
            fn_cf18__sol_invoke_signed_c(&uStack_90,plVar15 + 4,plVar15 + 5);
            if ((int)uStack_90 != 0x1a) {
              iVar9 = (int)(uStack_90 >> 0x20);
              iVar17 = (int)uStack_90;
              goto LAB_ram_00012560;
            }
          }
          iVar9 = (int)plVar13;
          *(ulonglong *)(lVar16 + 0x2a8) = plVar10[2] ^ 0x6e9de2b30b19f9ea;
          iVar17 = 0x1a;
        }
      }
    }
LAB_ram_00012560:
    piVar5[1] = iVar9;
    *piVar5 = iVar17;
    return;
  }
  if ((lVar18 + 0x58U & 7) != 0) goto LAB_ram_00011ce8;
  uStack_38 = *(ulonglong *)(lVar18 + 0x3c0) ^ 0x9da8833b65a9ba;
  uStack_30 = *(ulonglong *)(lVar18 + 0x3c8) ^ 0x9ca8823b66a9b9;
  uStack_28 = *(ulonglong *)(lVar18 + 0x3d0) ^ 0x93a88d3b67a9b8;
  uStack_60 = *(ulonglong *)(lVar18 + 0x398) ^ 0x9aa8843b60a9bf;
  uStack_58 = *(ulonglong *)(lVar18 + 0x3a0) ^ 0x99a8873b61a9be;
  uStack_50 = *(ulonglong *)(lVar18 + 0x3a8) ^ 0x98a8863b62a9bd;
  uStack_48 = *(ulonglong *)(lVar18 + 0x3b0) ^ 0x9fa8813b63a9bc;
  uStack_40 = *(ulonglong *)(lVar18 + 0x3b8) ^ 0x9ea8803b64a9bb;
  uStack_20 = *(ulonglong *)(lVar18 + 0x3d8) ^ 0x92a88c3b68a9b7;
  uStack_68 = *(ulonglong *)(lVar18 + 0x390) ^ 0xff64577ac49fae40;
  bVar3 = 1;
  bVar19 = 1;
  if (*(ulonglong *)(lVar18 + 0x390) == 0xff64577ac49fae40) {
    bVar19 = 0;
    if (6 < *(ulonglong *)(lVar18 + 0x710)) goto LAB_ram_00011740;
LAB_ram_00011780:
    bVar3 = 0;
    lVar18 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(lVar18 + 0x28) != 0) goto LAB_ram_000117d8;
LAB_ram_000117a8:
    if (((*(longlong *)(lVar18 + 0x30) != 0) || (*(longlong *)(lVar18 + 0x38) != 0)) ||
       (*(longlong *)(lVar18 + 0x40) != 0)) goto LAB_ram_000117d8;
LAB_ram_00011b90:
    uStack_8 = 0;
    uStack_10 = 0;
    uStack_18 = 1;
joined_r0x00011ce0:
    if (((ulonglong)puStack_88 & 7) != 0) {
LAB_ram_00011ce8:
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
    }
    fn_f8d0(&uStack_70,uStack_80,uStack_90,*puStack_88);
    plVar10 = (longlong *)(uStack_70 >> 0x20);
    uVar4 = (undefined4)uStack_70;
  }
  else {
    if (*(ulonglong *)(lVar18 + 0x710) < 7) goto LAB_ram_00011780;
LAB_ram_00011740:
    lVar18 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(lVar18 + 0x28) == 0) goto LAB_ram_000117a8;
LAB_ram_000117d8:
    if ((((*(longlong *)(lVar18 + 0x28) != 0x164b2e264bbb7a0a) ||
         (*(longlong *)(lVar18 + 0x30) != -0x365741ee0508e6a4)) ||
        (*(longlong *)(lVar18 + 0x38) != 0x7f02a960c3f7095f)) ||
       (bVar1 = false, *(longlong *)(lVar18 + 0x40) != -0x5c64a878aed5b343)) {
      bVar1 = true;
    }
    if ((!bVar1) && (0x57 < *(ulonglong *)(lVar18 + 0x50))) {
      pcVar6 = (char *)(lVar18 + 0x58);
      if (((ulonglong)pcVar6 & 7) != 0) goto LAB_ram_00011ce8;
      if (*pcVar6 == '\x02') {
        lVar16 = *(longlong *)(param_2 + 0x48);
        if (((*(longlong *)(lVar16 + 8) != 0x66d17b1817d5a706) ||
            (*(longlong *)(lVar16 + 0x10) != -0x3f3d02aafb2b25cb)) ||
           ((*(longlong *)(lVar16 + 0x18) != -0x5a8aa9de7039db3f ||
            (bVar1 = false, *(longlong *)(lVar16 + 0x20) != 0x85fcbbadb)))) {
          bVar1 = true;
        }
        if (!bVar1) {
          if ((ulonglong)*(ushort *)(lVar16 + 0x58) != 0) {
            uVar22 = 0;
            do {
              uVar11 = (ulonglong)*(ushort *)(lVar16 + 0x5a + uVar22 * 2);
              uVar20 = (ulonglong)*(ushort *)(lVar16 + 0x58 + uVar11);
              if (uVar20 != 0) {
                pbVar21 = (byte *)(lVar16 + 0x5a + uVar11);
                uVar11 = 0;
                do {
                  if ((*pbVar21 & 1) != 0) {
                    if ((((*(longlong *)(pbVar21 + 1) != *(longlong *)(lVar18 + 100)) ||
                         (*(longlong *)(pbVar21 + 9) != *(longlong *)(lVar18 + 0x6c))) ||
                        (*(longlong *)(pbVar21 + 0x11) != *(longlong *)(lVar18 + 0x74))) ||
                       (bVar1 = false, *(longlong *)(pbVar21 + 0x19) != *(longlong *)(lVar18 + 0x7c)
                       )) {
                      bVar1 = true;
                    }
                    if (!bVar1) {
                      if ((bool)(bVar3 & bVar19)) {
                        puVar7 = &uStack_68;
                        uVar12 = 5;
                      }
                      else {
                        puVar7 = (ulonglong *)0x8;
                        uVar12 = 0;
                      }
                      fn_2b330(&uStack_18,pcVar6,puVar7,uVar12);
                      goto joined_r0x00011ce0;
                    }
                  }
                  pbVar21 = pbVar21 + 0x21;
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar20);
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < *(ushort *)(lVar16 + 0x58));
          }
          goto LAB_ram_00011b90;
        }
      }
    }
    plVar10 = (longlong *)0xabad1dea;
    uVar4 = 0;
  }
LAB_ram_00011c78:
  puStack_78[1] = (int)plVar10;
  *puStack_78 = uVar4;
  return;
}


/* ---- fn_11c18 @ 0x11d38 ---- */

void fn_11c18(int *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                     longlong param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  iVar8 = 0;
  iVar4 = 0xbadc0de;
  if (param_3 != 7) goto LAB_ram_00012560;
  if (param_5 != 0x18) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,2);
  }
  if (((ulonglong)param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,0);
  }
  lVar9 = *param_2;
  lVar10 = param_2[1];
  fn_11cb0(lVar10 + 0x28,&DAT_ram_00031900 /* .rodata: hex: 7a fd 74 2b 27 f7 59 e9 c6 70 70 3c d3 9d 81 7a */,0x20,&uStack_20);
  iVar2 = (int)uStack_20;
  uStack_8 = *(ulonglong *)(lVar10 + 0x270);
  uStack_10 = *(ulonglong *)(lVar10 + 0x268);
  uStack_18 = *(ulonglong *)(lVar10 + 0x260);
  uStack_20 = *(ulonglong *)(lVar10 + 600);
  if (*(ulonglong *)(lVar10 + 0x710) < 5) {
    uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
    uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
    uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
    uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
  }
  uVar3 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
          (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 | uStack_20 >> 0x18 & 0xff0000
          | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
  uVar5 = *(ulonglong *)(lVar9 + 8);
  uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
          (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
          uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
  if (uVar3 == uVar5) {
    uVar3 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
            (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
            uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
    uVar5 = *(ulonglong *)(lVar9 + 0x10);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 != uVar5) goto LAB_ram_00011fc0;
    uVar3 = uStack_10 << 0x38 | (uStack_10 & 0xff00) << 0x28 | (uStack_10 & 0xff0000) << 0x18 |
            (uStack_10 & 0xff000000) << 8 | uStack_10 >> 8 & 0xff000000 |
            uStack_10 >> 0x18 & 0xff0000 | uStack_10 >> 0x28 & 0xff00 | uStack_10 >> 0x38;
    uVar5 = *(ulonglong *)(lVar9 + 0x18);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 != uVar5) goto LAB_ram_00011fc0;
    iVar7 = 0;
    uVar3 = uStack_8 << 0x38 | (uStack_8 & 0xff00) << 0x28 | (uStack_8 & 0xff0000) << 0x18 |
            (uStack_8 & 0xff000000) << 8 | uStack_8 >> 8 & 0xff000000 | uStack_8 >> 0x18 & 0xff0000
            | uStack_8 >> 0x28 & 0xff00 | uStack_8 >> 0x38;
    uVar5 = *(ulonglong *)(lVar9 + 0x20);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 != uVar5) goto LAB_ram_00011fc0;
  }
  else {
LAB_ram_00011fc0:
    iVar7 = -1;
    if (uVar5 <= uVar3) {
      iVar7 = 1;
    }
  }
  iVar8 = 0;
  iVar4 = -0x5452e216;
  if ((*(char *)(lVar9 + 1) != '\0') && (iVar7 == 0 && iVar2 == 0)) {
    uStack_68 = *(ulonglong *)(lVar10 + 0x250) ^ 0x4a0178651b8c3c5;
    uStack_70 = *(ulonglong *)(lVar10 + 0x248) ^ 0x4a1178751b9c3c6;
    uStack_78 = *(ulonglong *)(lVar10 + 0x240) ^ 0x4a2178451bac3c7;
    uStack_80 = *(ulonglong *)(lVar10 + 0x238) ^ 0xfb5ce87aae443c38;
    uStack_48 = *(ulonglong *)(lVar10 + 0x230) ^ 0x4a0178651b8c3c5;
    uStack_50 = *(ulonglong *)(lVar10 + 0x228) ^ 0x4a1178751b9c3c6;
    uStack_58 = *(ulonglong *)(lVar10 + 0x220) ^ 0x4a2178451bac3c7;
    uStack_60 = *(ulonglong *)(lVar10 + 0x218) ^ 0xfb5ce87aae443c38;
    lVar9 = param_2[2];
    if ((uStack_80 != *(ulonglong *)(lVar9 + 8)) ||
       (((uStack_78 != *(ulonglong *)(lVar9 + 0x10) || (uStack_70 != *(ulonglong *)(lVar9 + 0x18)))
        || (bVar1 = false, uStack_68 != *(ulonglong *)(lVar9 + 0x20))))) {
      bVar1 = true;
    }
    iVar8 = 0;
    iVar4 = -0x4520531d;
    if (!bVar1) {
      lVar9 = param_2[4];
      if (((uStack_60 != *(ulonglong *)(lVar9 + 8)) || (uStack_58 != *(ulonglong *)(lVar9 + 0x10)))
         || ((uStack_50 != *(ulonglong *)(lVar9 + 0x18) ||
             (bVar1 = false, uStack_48 != *(ulonglong *)(lVar9 + 0x20))))) {
        bVar1 = true;
      }
      if (!bVar1) {
        plVar6 = param_2 + 1;
        uStack_28 = *(ulonglong *)(lVar10 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_30 = *(ulonglong *)(lVar10 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_38 = *(ulonglong *)(lVar10 + 0x200) ^ 0x4a2178451bac3c7;
        uStack_40 = *(ulonglong *)(lVar10 + 0x1f8) ^ 0xfb5ce87aae443c38;
        uStack_8 = *(ulonglong *)(lVar10 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_10 = *(ulonglong *)(lVar10 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_18 = *(ulonglong *)(lVar10 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_20 = *(ulonglong *)(lVar10 + 0x1d8) ^ 0xfb5ce87aae443c38;
        if (((*param_4 == 0) ||
            (fn_cf18__sol_invoke_signed_c(&iStack_88,param_2 + 2,param_2 + 3,plVar6), iVar8 = iStack_88,
            iVar4 = iStack_84, iStack_88 == 0x1a)) &&
           ((param_4[1] == 0 ||
            (fn_cf18__sol_invoke_signed_c(&iStack_90,param_2 + 4,param_2 + 5), iVar8 = iStack_90,
            iVar4 = iStack_8c, iStack_90 == 0x1a)))) {
          *(ulonglong *)(lVar10 + 0x2a8) = param_4[2] ^ 0x6e9de2b30b19f9ea;
          iVar8 = 0x1a;
          iVar4 = (int)plVar6;
        }
      }
    }
  }
LAB_ram_00012560:
  param_1[1] = iVar4;
  *param_1 = iVar8;
  return;
}


/* ---- fn_11cb0 @ 0x11dd0 ---- */

void fn_11cb0(void)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong unaff_R6;
  longlong unaff_R7;
  longlong *unaff_R8;
  int *unaff_R9;
  longlong lStack_a0;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  fn_11cb0();
  iVar2 = (int)uStack_20;
  uStack_8 = *(ulonglong *)(unaff_R7 + 0x270);
  uStack_10 = *(ulonglong *)(unaff_R7 + 0x268);
  uStack_18 = *(ulonglong *)(unaff_R7 + 0x260);
  uStack_20 = *(ulonglong *)(unaff_R7 + 600);
  if (*(ulonglong *)(unaff_R7 + 0x710) < 5) {
    uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
    uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
    uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
    uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
  }
  uVar3 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
          (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 | uStack_20 >> 0x18 & 0xff0000
          | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
  uVar6 = *(ulonglong *)(unaff_R6 + 8);
  uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
          (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
          uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
  if (uVar3 == uVar6) {
    uVar3 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
            (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
            uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
    uVar6 = *(ulonglong *)(unaff_R6 + 0x10);
    uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
            (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
            uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
    if (uVar3 == uVar6) {
      uVar3 = uStack_10 << 0x38 | (uStack_10 & 0xff00) << 0x28 | (uStack_10 & 0xff0000) << 0x18 |
              (uStack_10 & 0xff000000) << 8 | uStack_10 >> 8 & 0xff000000 |
              uStack_10 >> 0x18 & 0xff0000 | uStack_10 >> 0x28 & 0xff00 | uStack_10 >> 0x38;
      uVar6 = *(ulonglong *)(unaff_R6 + 0x18);
      uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
              (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
              uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
      if (uVar3 == uVar6) {
        iVar7 = 0;
        uVar3 = uStack_8 << 0x38 | (uStack_8 & 0xff00) << 0x28 | (uStack_8 & 0xff0000) << 0x18 |
                (uStack_8 & 0xff000000) << 8 | uStack_8 >> 8 & 0xff000000 |
                uStack_8 >> 0x18 & 0xff0000 | uStack_8 >> 0x28 & 0xff00 | uStack_8 >> 0x38;
        uVar6 = *(ulonglong *)(unaff_R6 + 0x20);
        uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
                (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
                uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
        if (uVar3 == uVar6) goto LAB_ram_00011fd8;
      }
    }
  }
  iVar7 = -1;
  if (uVar6 <= uVar3) {
    iVar7 = 1;
  }
LAB_ram_00011fd8:
  iVar5 = -0x5452e216;
  iVar8 = 0;
  if ((*(char *)(unaff_R6 + 1) != '\0') && (iVar7 == 0 && iVar2 == 0)) {
    uStack_68 = *(ulonglong *)(unaff_R7 + 0x250) ^ 0x4a0178651b8c3c5;
    uStack_70 = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x4a1178751b9c3c6;
    uStack_78 = *(ulonglong *)(unaff_R7 + 0x240) ^ 0x4a2178451bac3c7;
    uStack_80 = *(ulonglong *)(unaff_R7 + 0x238) ^ 0xfb5ce87aae443c38;
    uStack_48 = *(ulonglong *)(unaff_R7 + 0x230) ^ 0x4a0178651b8c3c5;
    uStack_50 = *(ulonglong *)(unaff_R7 + 0x228) ^ 0x4a1178751b9c3c6;
    uStack_58 = *(ulonglong *)(unaff_R7 + 0x220) ^ 0x4a2178451bac3c7;
    uStack_60 = *(ulonglong *)(unaff_R7 + 0x218) ^ 0xfb5ce87aae443c38;
    lVar4 = *(longlong *)(lStack_a0 + 0x10);
    if ((uStack_80 != *(ulonglong *)(lVar4 + 8)) ||
       (((uStack_78 != *(ulonglong *)(lVar4 + 0x10) || (uStack_70 != *(ulonglong *)(lVar4 + 0x18)))
        || (bVar1 = false, uStack_68 != *(ulonglong *)(lVar4 + 0x20))))) {
      bVar1 = true;
    }
    iVar8 = 0;
    iVar5 = -0x4520531d;
    if (!bVar1) {
      lVar4 = *(longlong *)(lStack_a0 + 0x20);
      if (((uStack_60 != *(ulonglong *)(lVar4 + 8)) || (uStack_58 != *(ulonglong *)(lVar4 + 0x10)))
         || ((uStack_50 != *(ulonglong *)(lVar4 + 0x18) ||
             (bVar1 = false, uStack_48 != *(ulonglong *)(lVar4 + 0x20))))) {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar4 = lStack_a0 + 8;
        uStack_28 = *(ulonglong *)(unaff_R7 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_30 = *(ulonglong *)(unaff_R7 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_38 = *(ulonglong *)(unaff_R7 + 0x200) ^ 0x4a2178451bac3c7;
        uStack_40 = *(ulonglong *)(unaff_R7 + 0x1f8) ^ 0xfb5ce87aae443c38;
        uStack_8 = *(ulonglong *)(unaff_R7 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_10 = *(ulonglong *)(unaff_R7 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_18 = *(ulonglong *)(unaff_R7 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_20 = *(ulonglong *)(unaff_R7 + 0x1d8) ^ 0xfb5ce87aae443c38;
        if (((*unaff_R8 == 0) ||
            (fn_cf18__sol_invoke_signed_c(&iStack_88,(longlong *)(lStack_a0 + 0x10),lStack_a0 + 0x18,lVar4),
            iVar5 = iStack_84, iVar8 = iStack_88, iStack_88 == 0x1a)) &&
           ((unaff_R8[1] == 0 ||
            (fn_cf18__sol_invoke_signed_c(&iStack_90,(longlong *)(lStack_a0 + 0x20),lStack_a0 + 0x28),
            iVar5 = iStack_8c, iVar8 = iStack_90, iStack_90 == 0x1a)))) {
          *(ulonglong *)(unaff_R7 + 0x2a8) = unaff_R8[2] ^ 0x6e9de2b30b19f9ea;
          iVar5 = (int)lVar4;
          iVar8 = 0x1a;
        }
      }
    }
  }
  unaff_R9[1] = iVar5;
  *unaff_R9 = iVar8;
  return;
}


/* ---- fn_124a8__custom_panic @ 0x125c8 ---- */

void fn_124a8__custom_panic(undefined4 *param_1,longlong *param_2,longlong param_3,undefined2 *param_4,
                     longlong param_5)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uVar2 = 0;
  uVar4 = 0xbadc0de;
  if (param_3 == 2) {
    lVar3 = param_2[1];
    lVar5 = *param_2;
    uStack_8 = *(ulonglong *)(lVar3 + 0x270);
    uStack_10 = *(ulonglong *)(lVar3 + 0x268);
    uStack_18 = *(ulonglong *)(lVar3 + 0x260);
    uStack_20 = *(ulonglong *)(lVar3 + 600);
    if (*(ulonglong *)(lVar3 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar5 + 8)) || (uStack_18 != *(ulonglong *)(lVar5 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar5 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar5 + 0x20))) {
      bVar1 = true;
    }
    uVar4 = 0xabad1dea;
    if ((*(char *)(lVar5 + 1) != '\0') && (!bVar1)) {
      if (param_5 != 8) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
      }
      if (((ulonglong)param_4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
      }
      *(undefined2 *)(lVar3 + 0x318) = *param_4;
      *(undefined4 *)(lVar3 + 0x31a) = 0;
      *(undefined2 *)(lVar3 + 0x31e) = 0;
      *(ulonglong *)(lVar3 + 0x318) = *(ulonglong *)(lVar3 + 0x318) ^ 0xed5f563e78eee80b;
      uVar2 = 0x1a;
      if (*(ulonglong *)(lVar3 + 0x710) == 0) {
        *(undefined8 *)(lVar3 + 0x710) = 1;
      }
    }
  }
  param_1[1] = uVar4;
  *param_1 = uVar2;
  return;
}


/* ---- fn_12770__sol_sha256 @ 0x12890 ---- */

undefined8 fn_12770__sol_sha256(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  undefined8 auStack_30 [4];
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  uStack_80 = 0x2a9f6e5d1c8b4a2f;
  uStack_88 = 0x9e6d5c1b8a4f2e9d;
  uStack_90 = 0x6c5b1a8f4e2d9c6b;
  uStack_98 = 0x5a1f8e4d2c9b3a7f;
  uStack_78 = *param_1;
  uStack_70 = param_1[1];
  uStack_68 = param_1[2];
  uStack_60 = param_1[3];
  uStack_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_48 = param_2[2];
  uStack_40 = param_2[3];
  uStack_38 = param_3 >> 7;
  puStack_10 = &uStack_98;
  uStack_8 = 0x68;
  fn_128a8(&puStack_10,1,auStack_30);
  return auStack_30[0];
}


/* ---- fn_128a8 @ 0x129c8 ---- */

undefined8 fn_128a8(void)

{
  undefined8 uStack_30;
  
  fn_128a8();
  return uStack_30;
}


/* ---- fn_128c0__sol_sha256 @ 0x129e0 ---- */

undefined8 fn_128c0__sol_sha256(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 auStack_30 [4];
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  uStack_80 = 0x2a9f6e5d1c8b4a2f;
  uStack_88 = 0x9e6d5c1b8a4f2e9d;
  uStack_90 = 0x6c5b1a8f4e2d9c6b;
  uStack_98 = 0x5a1f8e4d2c9b3a7f;
  uStack_78 = *param_1;
  uStack_70 = param_1[1];
  uStack_68 = param_1[2];
  uStack_60 = param_1[3];
  uStack_58 = *param_2;
  uStack_50 = param_2[1];
  uStack_48 = param_2[2];
  uStack_40 = param_2[3];
  lStack_38 = (param_3 >> 6) - 1;
  puStack_10 = &uStack_98;
  uStack_8 = 0x68;
  fn_12a00(&puStack_10,1,auStack_30);
  return auStack_30[0];
}


/* ---- fn_12a00 @ 0x12b20 ---- */

undefined8 fn_12a00(void)

{
  undefined8 uStack_30;
  
  fn_12a00();
  return uStack_30;
}


/* ---- fn_12a18 @ 0x12b38 ---- */

void fn_12a18(int *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int aiStack_28 [2];
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  iVar4 = 0;
  uVar2 = 0xbadc0de;
  if (param_3 == 2) {
    lVar6 = param_2[1];
    lVar3 = *param_2;
    uStack_8 = *(ulonglong *)(lVar6 + 0x270);
    uStack_10 = *(ulonglong *)(lVar6 + 0x268);
    uStack_18 = *(ulonglong *)(lVar6 + 0x260);
    uStack_20 = *(ulonglong *)(lVar6 + 600);
    uVar5 = *(ulonglong *)(lVar6 + 0x710);
    if (uVar5 < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar3 + 8)) || (uStack_18 != *(ulonglong *)(lVar3 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar3 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar3 + 0x20))) {
      bVar1 = true;
    }
    uVar2 = 0xabad1dea;
    if ((*(char *)(lVar3 + 1) != '\0') && (!bVar1)) {
      if (uVar5 == 1) {
        *(undefined8 *)(lVar6 + 0x710) = 2;
      }
      else {
        uVar2 = 0xbad4;
        if (uVar5 == 0) goto LAB_ram_00012f78;
      }
      if (param_5 != 0x50) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,2);
      }
      if ((param_4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 66 72 6f 6d 5f 62 */,10,0);
      }
      fn_16518(aiStack_28,param_4);
      uVar2 = 0xbad3;
      iVar4 = aiStack_28[0];
      if (aiStack_28[0] == 0x1a) {
        fn_2fe08__sol_memcpy(lVar6 + 0x328,param_4,0x50);
        uVar2 = *(ulonglong *)(lVar6 + 0x330) ^ 0x47d26c2e77aa1400;
        *(ulonglong *)(lVar6 + 0x328) = *(ulonglong *)(lVar6 + 0x328) ^ 0xb82c93d08854ebff;
        *(ulonglong *)(lVar6 + 0x330) = uVar2;
        *(ulonglong *)(lVar6 + 0x338) = *(ulonglong *)(lVar6 + 0x338) ^ 0x47d16c2d77a91401;
        *(ulonglong *)(lVar6 + 0x340) = *(ulonglong *)(lVar6 + 0x340) ^ 0x47d06c2c77a81402;
        *(ulonglong *)(lVar6 + 0x348) = *(ulonglong *)(lVar6 + 0x348) ^ 0x47d76c2b77af1403;
        *(ulonglong *)(lVar6 + 0x350) = *(ulonglong *)(lVar6 + 0x350) ^ 0x47d66c2a77ae1404;
        *(ulonglong *)(lVar6 + 0x358) = *(ulonglong *)(lVar6 + 0x358) ^ 0x47d56c2977ad1405;
        *(ulonglong *)(lVar6 + 0x360) = *(ulonglong *)(lVar6 + 0x360) ^ 0x47d46c2877ac1406;
        *(ulonglong *)(lVar6 + 0x368) = *(ulonglong *)(lVar6 + 0x368) ^ 0x47db6c2777a31407;
        *(ulonglong *)(lVar6 + 0x370) = *(ulonglong *)(lVar6 + 0x370) ^ 0x47da6c2677a21408;
        iVar4 = 0x1a;
      }
    }
  }
LAB_ram_00012f78:
  param_1[1] = (int)uVar2;
  *param_1 = iVar4;
  return;
}


/* ---- fn_12ec0__custom_panic @ 0x12fe0 ---- */

ulonglong fn_12ec0__custom_panic(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint auStack_3b0 [6];
  char acStack_398 [16];
  undefined4 uStack_388;
  char acStack_375 [40];
  undefined1 auStack_34d [809];
  char acStack_24 [34];
  char cStack_2;
  char cStack_1;
  
  fn_13160__sol_memcpy(auStack_3b0,param_1);
  if ((ulonglong)auStack_3b0[0] != 0) {
    lVar8 = 0;
    uVar4 = 0;
    do {
      if (acStack_375[lVar8] == '\x17') {
        cStack_1 = acStack_398[lVar8 + 1];
        cStack_2 = acStack_398[lVar8];
        if (0xf < (uVar4 & 0xffffffff)) {
          puVar3 = (uint *)&DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */;
          plVar5 = (longlong *)0x2b;
          uVar7 = 0x70;
          uVar11 = 0xb0;
          uVar4 = fn_2dfe8__custom_panic(&DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */,0x2b,&cStack_2);
          bVar1 = *(byte *)((longlong)plVar5 + 0x14);
          if (1 < bVar1) {
            if (bVar1 != 2) {
              *puVar3 = 0;
              return uVar4;
            }
            uVar10 = plVar5[1];
            bVar2 = 0x15 < uVar10;
            if (bVar2) {
              lVar8 = *plVar5;
              uVar7 = *(undefined1 *)(lVar8 + 0x15);
              uVar11 = *(undefined1 *)(lVar8 + 0xc);
              uVar10 = *(ulonglong *)(lVar8 + 0xd);
            }
            *(undefined1 *)((longlong)puVar3 + 0x3b) = uVar11;
            *(undefined1 *)((longlong)puVar3 + 0x19) = uVar7;
            *(ulonglong *)(puVar3 + 4) = uVar10;
            *puVar3 = (uint)bVar2;
            *(undefined1 *)((longlong)puVar3 + 0x1a) = 0;
            *(undefined1 *)(puVar3 + 6) = 1;
            puVar3[2] = 1;
            puVar3[3] = 0;
            return uVar4;
          }
          if ((bVar1 == 0) || (uVar4 = plVar5[1], 0x3b < uVar4)) {
            uVar4 = fn_13340();
            return uVar4;
          }
          uVar10 = (ulonglong)*(uint *)(plVar5 + 2);
          if (uVar10 != 0) {
            lVar8 = *plVar5;
            uVar6 = 0;
            uVar16 = 0x16;
            puVar15 = auStack_34d;
            goto LAB_ram_00013328;
          }
          uVar9 = 0;
          goto LAB_ram_00013430;
        }
        lVar13 = (uVar4 & 0xffffffff) * 2;
        acStack_24[lVar13 + 1] = cStack_1;
        acStack_24[lVar13] = cStack_2;
        uVar4 = uVar4 + 1;
      }
      lVar8 = lVar8 + 0x38;
    } while ((ulonglong)auStack_3b0[0] * 0x38 != lVar8);
    uVar4 = uVar4 & 0xffffffff;
    if (uVar4 < 2) {
      return 0;
    }
    pcVar12 = acStack_24 + 3;
    uVar10 = 0;
    do {
      uVar9 = uVar10 + 1;
      if (uVar4 <= uVar9) {
        return 0;
      }
      if (acStack_24[uVar10 * 2] == '\x01') {
        pcVar14 = pcVar12;
        uVar16 = uVar9;
        do {
          if ((pcVar14[-1] == '\x01') && (acStack_24[uVar10 * 2 + 1] != *pcVar14)) {
            return (ulonglong)(1 < uVar4);
          }
          pcVar14 = pcVar14 + 2;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar4);
      }
      pcVar12 = pcVar12 + 2;
      uVar10 = uVar9;
    } while (uVar9 < uVar4);
  }
  return 0;
  while( true ) {
    lVar13 = lVar8 + uVar16;
    uVar17 = *(undefined8 *)(lVar13 + -9);
    uVar7 = *(undefined1 *)(lVar13 + -1);
    *puVar15 = *(undefined1 *)(lVar13 + -10);
    puVar15[-0x22] = uVar7;
    *(undefined8 *)(puVar15 + -0x2b) = uVar17;
    uVar16 = uVar16 + 0xb;
    puVar15[-0x21] = 0;
    puVar15[-0x23] = 1;
    *(undefined8 *)(puVar15 + -0x33) = 1;
    puVar15 = puVar15 + 0x38;
    uVar6 = uVar6 + 1;
    uVar9 = uVar10;
    if (uVar10 <= uVar6) break;
LAB_ram_00013328:
    uVar9 = uVar6;
    if ((uVar16 == 0xc6) || (uVar4 < uVar16)) break;
  }
LAB_ram_00013430:
  uStack_388 = (undefined4)uVar9;
  uVar4 = fn_2fe08__sol_memcpy();
  return uVar4;
}


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


/* ---- fn_13340 @ 0x13460 ---- */

void fn_13340(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  undefined4 auStack_388 [6];
  byte abStack_370 [35];
  undefined1 auStack_34d [845];
  
  uVar4 = param_2[1];
  lVar8 = *param_2;
  uVar5 = (ulonglong)*(uint *)(param_2 + 2);
  uVar2 = 0;
  uVar3 = uVar2;
  if (uVar5 != 0) {
    uVar7 = 0x2d;
    puVar10 = auStack_34d;
    do {
      uVar3 = uVar2;
      if ((uVar4 < uVar7) || (uVar7 == 0x23d)) break;
      lVar12 = lVar8 + uVar7;
      uVar1 = *(undefined1 *)(lVar12 + -0x21);
      puVar10[-0x21] = 1;
      puVar10[-0x23] = 0;
      *(undefined8 *)(puVar10 + -0x33) = 0;
      *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(lVar12 + -0x20);
      *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(lVar12 + -0x18);
      *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(lVar12 + -0x10);
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(lVar12 + -8);
      *puVar10 = uVar1;
      uVar7 = uVar7 + 0x21;
      puVar10 = puVar10 + 0x38;
      uVar2 = uVar2 + 1;
      uVar3 = uVar5;
    } while (uVar2 < uVar5);
  }
  uVar2 = uVar4 - 4;
  auStack_388[0] = (undefined4)uVar3;
  if ((uVar2 <= uVar4) && (0xc < uVar2)) {
    lVar11 = lVar8 + 0xf;
    lVar12 = 0;
    do {
      if (uVar4 <= lVar12 + 0xcU) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(lVar12 + 0xcU,uVar4,&DAT_ram_000326e0 /* .data.rel.ro: &str "contract/src/routers/dflow.rs" (len=29) */);
      }
      if (*(char *)(lVar11 + lVar12 + -3) == '\0') {
        if (uVar4 <= lVar12 + 0xdU) {
                    /* WARNING: Subroutine does not return */
          fn_2df20__custom_panic(lVar12 + 0xd,uVar4,&DAT_ram_000326f8 /* .data.rel.ro: &str "contract/src/routers/dflow.rs" (len=29) */);
        }
        if (*(char *)(lVar11 + lVar12 + -2) == '\0') {
          if (uVar4 <= lVar12 + 0xeU) {
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(lVar12 + 0xeU,uVar4,&DAT_ram_00032710 /* .data.rel.ro: &str "contract/src/routers/dflow.rs" (len=29) */);
          }
          if (*(char *)(lVar11 + lVar12 + -1) == '\0') {
            if (uVar4 <= lVar12 + 0xfU) {
                    /* WARNING: Subroutine does not return */
              fn_2df20__custom_panic(lVar12 + 0xfU,uVar4,&DAT_ram_00032728 /* .data.rel.ro: &str "contract/src/routers/dflow.rs" (len=29) */);
            }
            uVar5 = (ulonglong)*(byte *)(lVar11 + lVar12);
            if ((((uVar5 < 0x24) && ((1L << uVar5 & 0x800101017U) != 0)) || (uVar5 == 0x81)) &&
               (lVar12 + 0x10U < uVar4)) {
              uVar2 = lVar12 + 0xf;
              lVar8 = uVar2 + lVar8;
              goto code_r0x000139f0;
            }
          }
        }
      }
      uVar5 = lVar12 + 0xd;
      lVar12 = lVar12 + 1;
    } while (uVar5 < uVar2);
  }
  if (3 < uVar4) {
    lVar12 = -4;
    lVar8 = lVar8 + 4;
    do {
      if (*(int *)(lVar8 + -4) == 0x78) {
        uVar2 = -lVar12;
        if (uVar2 < uVar4) {
code_r0x000139f0:
          bVar6 = uVar4 != uVar2;
          lVar12 = 0;
          uVar4 = uVar4 - uVar2;
          uVar2 = uVar3 & 0xffffffff;
          bVar9 = uVar2 != 0;
          if ((uVar4 < 9) || ((uVar3 & 0xffffffff) == 0)) {
            uVar3 = 0;
          }
          else {
            pbVar13 = abStack_370 + 1;
            uVar3 = 0;
            lVar11 = 0;
            do {
              if (!bVar6) {
                    /* WARNING: Subroutine does not return */
                fn_2df20__custom_panic(lVar11,uVar4,&DAT_ram_000326c8 /* .data.rel.ro: &str "contract/src/routers/dflow.rs" (len=29) */);
              }
              bVar6 = lVar11 + 9U < uVar4;
              uVar3 = uVar3 + 1;
              bVar9 = uVar3 < uVar2;
              *pbVar13 = *(byte *)(lVar8 + lVar11) & 1;
              pbVar13[-1] = 1;
              lVar12 = lVar11 + 9;
            } while ((lVar11 + 0x12U <= uVar4) &&
                    (pbVar13 = pbVar13 + 0x38, lVar11 = lVar12, uVar3 < uVar2));
          }
          if ((bVar6) && (bVar9)) {
            abStack_370[uVar3 * 0x38 + 1] = *(byte *)(lVar8 + lVar12) & 1;
            abStack_370[uVar3 * 0x38] = 1;
          }
        }
        break;
      }
      lVar8 = lVar8 + 1;
      lVar12 = lVar12 + -1;
    } while (4 < uVar4 + lVar12 + 5);
  }
  fn_2fe08__sol_memcpy(param_1,auStack_388,0x388);
  return;
}


/* ---- fn_13988__custom_panic @ 0x13aa8 ---- */

void fn_13988__custom_panic(undefined1 *param_1,byte *param_2,undefined *param_3,undefined *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  
  if (param_3 <= param_4) goto LAB_ram_00013d08;
  uVar2 = 1;
  bVar1 = param_2[(longlong)param_4];
  uVar8 = (ulonglong)bVar1;
  if (uVar8 < 0x4f) {
    if (uVar8 < 10) {
      if (uVar8 < 8) {
        puVar9 = (undefined *)0x1;
        if ((1L << uVar8 & 0x89U) != 0) goto LAB_ram_00013cd0;
      }
      else {
        puVar9 = (undefined *)0x1;
      }
      goto LAB_ram_00013ce0;
    }
    uVar6 = uVar8 - 10;
    if (uVar6 < 0x3e) {
      if ((1L << uVar6 & 0x200405050210201U) != 0) goto LAB_ram_00013cd0;
      if ((1L << uVar6 & 0x2000002000000000U) != 0) {
LAB_ram_00013c40:
        puVar9 = (undefined *)0x2;
        goto LAB_ram_00013ce0;
      }
      if (uVar6 != 0x1f) goto LAB_ram_00013b58;
    }
    else {
LAB_ram_00013b58:
      if (uVar8 != 0x4b) {
        puVar9 = (undefined *)0x1;
        if (uVar8 == 0x4d) goto LAB_ram_00013cd0;
        goto LAB_ram_00013ce0;
      }
    }
    puVar9 = (undefined *)0x4;
  }
  else if (uVar8 < 0x66) {
    if (uVar8 < 0x57) {
      if (uVar8 - 0x51 < 2) goto LAB_ram_00013ca0;
      if (uVar8 == 0x4f) goto LAB_ram_00013cd0;
      puVar9 = (undefined *)0x1;
      if (uVar8 == 0x56) goto LAB_ram_00013c40;
    }
    else if (uVar8 < 99) {
      if (uVar8 == 0x57) {
LAB_ram_00013c00:
        puVar9 = (undefined *)0x9;
      }
      else if ((uVar8 == 0x58) || (puVar9 = (undefined *)0x1, uVar8 == 0x60)) goto LAB_ram_00013cd0;
    }
    else {
      puVar9 = (undefined *)0x1;
      if (uVar8 - 99 < 2) {
LAB_ram_00013cd0:
        uVar2 = 0;
        puVar9 = (undefined *)0x0;
      }
    }
  }
  else {
    uVar6 = uVar8 - 0x69;
    if (uVar6 < 0xe) {
      if ((1L << uVar6 & 0x189U) != 0) goto LAB_ram_00013cd0;
      if (uVar6 == 6) {
        fn_13fa8__custom_panic();
        return;
      }
      if (uVar6 == 0xd) goto LAB_ram_00013c00;
    }
    if (uVar8 == 0x66) goto LAB_ram_00013cd0;
    puVar9 = (undefined *)0x1;
    if (uVar8 != 0x67) goto LAB_ram_00013ce0;
LAB_ram_00013ca0:
    puVar9 = (undefined *)0x8;
  }
LAB_ram_00013ce0:
  puVar7 = param_4 + 1;
  if (param_3 < puVar9 + (longlong)puVar7) {
LAB_ram_00013d08:
    *param_1 = 7;
    return;
  }
  if (puVar9 < (undefined *)0x2) {
    if (puVar9 == (undefined *)0x0) {
      uVar4 = 0;
      goto LAB_ram_00013ee8;
    }
    if (puVar9 == (undefined *)0x1) {
      if (puVar7 < param_3) {
        param_2 = (byte *)(ulonglong)param_2[(longlong)puVar7];
        uVar4 = 1;
        uVar2 = (uint)(param_2 != (byte *)0x0);
        goto LAB_ram_00013ee8;
      }
      goto LAB_ram_00014050;
    }
LAB_ram_00013eb8:
    if (uVar2 != 0) {
      if (param_3 <= puVar7) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(puVar7,param_3,&DAT_ram_000327b8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
      }
      param_2 = param_2 + (longlong)puVar7;
      param_4 = (undefined *)(ulonglong)*param_2;
    }
    uVar4 = 6;
    puVar7 = puVar9;
LAB_ram_00013ee8:
    *(undefined **)(param_1 + 8) = puVar7;
    *(int *)(param_1 + 4) = (int)param_2;
    param_1[3] = (char)param_4;
    param_1[2] = (char)uVar2;
    param_1[1] = bVar1;
    *param_1 = uVar4;
    *(undefined **)(param_1 + 0x10) = puVar9 + 1;
    return;
  }
  if (puVar9 == (undefined *)0x2) {
    puVar3 = param_4 + 3;
    if (param_4 < (undefined *)0xfffffffffffffffd) {
      puVar5 = param_3;
      if (puVar3 <= param_3) {
        param_2 = param_2 + (longlong)puVar7;
        uVar4 = 2;
        param_4 = (undefined *)(ulonglong)param_2[1];
        uVar2 = (uint)*param_2;
        goto LAB_ram_00013ee8;
      }
    }
    else {
      puVar3 = (undefined *)fn_2f328__custom_panic(puVar7,puVar3,&DAT_ram_00032758 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_00013f88:
      puVar3 = (undefined *)fn_2f328__custom_panic(puVar7,puVar3,&DAT_ram_00032770 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_00013fb0:
      puVar5 = &DAT_ram_00032788 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
      puVar3 = (undefined *)fn_2f328__custom_panic(puVar7,puVar3,&DAT_ram_00032788 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    }
    param_3 = &DAT_ram_00032758 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    puVar3 = (undefined *)fn_2f320__custom_panic(puVar3,puVar5,&DAT_ram_00032758 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_00014000:
    puVar5 = &DAT_ram_00032770 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    puVar3 = (undefined *)fn_2f320__custom_panic(puVar3,param_3,&DAT_ram_00032770 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
  }
  else {
    if (puVar9 == (undefined *)0x4) {
      puVar3 = param_4 + 5;
      if ((undefined *)0xfffffffffffffffa < param_4) goto LAB_ram_00013f88;
      if (puVar3 <= param_3) {
        uVar4 = 3;
        uVar2 = *(uint *)(param_2 + (longlong)puVar7);
        param_2 = (byte *)(ulonglong)(uVar2 >> 0x10);
        param_4 = (undefined *)(ulonglong)(uVar2 >> 8);
        goto LAB_ram_00013ee8;
      }
      goto LAB_ram_00014000;
    }
    if (puVar9 != (undefined *)0x9) goto LAB_ram_00013eb8;
    puVar3 = param_4 + 9;
    if ((undefined *)0xfffffffffffffff6 < param_4) goto LAB_ram_00013fb0;
    puVar5 = param_3;
    if (puVar3 <= param_3) {
      if (param_3 <= puVar3) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(puVar3,param_3,&DAT_ram_000327a0 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
      }
      uVar2 = (uint)(param_2[(longlong)puVar3] != 0);
      param_2 = param_2 + (longlong)puVar7;
      uVar4 = 4;
      puVar7 = *(undefined **)param_2;
      goto LAB_ram_00013ee8;
    }
  }
  param_3 = &DAT_ram_00032788 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
  fn_2f320__custom_panic(puVar3,puVar5,&DAT_ram_00032788 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_00014050:
                    /* WARNING: Subroutine does not return */
  fn_2df20__custom_panic(puVar7,param_3,&DAT_ram_00032740 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
}


/* ---- fn_13fa8__custom_panic @ 0x140c8 ---- */

void fn_13fa8__custom_panic(undefined1 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cStack_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  longlong lStack_18;
  undefined8 uStack_8;
  
  puVar5 = (undefined8 *)(param_4 + 5);
  if (puVar5 <= param_3) {
    puVar3 = (undefined8 *)(param_4 + 1);
    if (puVar5 < puVar3) {
      puVar7 = &DAT_ram_000327d0 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
      fn_2f328__custom_panic();
      fn_13988__custom_panic(&cStack_28);
      if (cStack_28 != '\a') {
        uStack_8 = uStack_20;
        puVar4 = (undefined *)(lStack_18 + param_4);
        if (puVar4 + 3 <= puVar7) {
          if (puVar7 <= puVar4) {
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(puVar4,puVar7,&DAT_ram_000327e8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
          }
          puVar6 = puVar4 + 1;
          if (puVar6 < puVar7) {
            puVar8 = puVar4 + 2;
            if (puVar8 < puVar7) {
              uVar1 = *(undefined *)((longlong)puVar5 + (longlong)puVar8);
              uVar2 = *(undefined *)((longlong)puVar5 + (longlong)puVar6);
              *(undefined *)(puVar3 + 2) = *(undefined *)((longlong)puVar5 + (longlong)puVar4);
              *(undefined1 *)((longlong)puVar3 + 0x11) = uVar2;
              *(undefined1 *)((longlong)puVar3 + 0x12) = uVar1;
              puVar3[3] = lStack_18 + 3;
              puVar3[1] = uStack_20;
              *puVar3 = CONCAT71(uStack_27,cStack_28);
              return;
            }
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(puVar8,puVar7,&DAT_ram_00032818 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
          }
                    /* WARNING: Subroutine does not return */
          fn_2df20__custom_panic(puVar6,puVar7,&DAT_ram_00032800 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
        }
      }
      *(undefined1 *)puVar3 = 7;
      return;
    }
    if ((ulonglong)*(uint *)(param_2 + (longlong)puVar3) != 0) {
      uVar9 = 0;
      do {
        if (param_3 <= puVar5) goto LAB_ram_000141c0;
        lVar10 = 10;
        if ((ulonglong)*(byte *)(param_2 + (longlong)puVar5) < 3) {
          lVar10 = *(longlong *)
                    (&DAT_ram_000321b8 /* .rodata: hex: 0a 00 00 00 00 00 00 00 02 00 00 00 00 00 00 00 */ + (ulonglong)*(byte *)(param_2 + (longlong)puVar5) * 8);
        }
        uVar9 = uVar9 + 1;
        puVar5 = (undefined8 *)(lVar10 + (longlong)puVar5);
      } while (uVar9 < *(uint *)(param_2 + (longlong)puVar3));
    }
    if (puVar5 <= param_3) {
      *(longlong *)(param_1 + 0x10) = (longlong)puVar5 - param_4;
      *(longlong *)(param_1 + 8) = ((longlong)puVar5 - param_4) + -1;
      *param_1 = 5;
      return;
    }
  }
LAB_ram_000141c0:
  *param_1 = 7;
  return;
}


/* ---- fn_14100 @ 0x14220 ---- */

void fn_14100(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cStack_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  longlong lStack_18;
  undefined8 uStack_8;
  
  fn_13988__custom_panic(&cStack_28);
  if (cStack_28 != '\a') {
    uStack_8 = uStack_20;
    uVar3 = lStack_18 + param_4;
    if (uVar3 + 3 <= param_3) {
      if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar3,param_3,&DAT_ram_000327e8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
      }
      uVar4 = uVar3 + 1;
      if (uVar4 < param_3) {
        uVar5 = uVar3 + 2;
        if (uVar5 < param_3) {
          uVar1 = *(undefined1 *)(param_2 + uVar5);
          uVar2 = *(undefined1 *)(param_2 + uVar4);
          *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + uVar3);
          *(undefined1 *)((longlong)param_1 + 0x11) = uVar2;
          *(undefined1 *)((longlong)param_1 + 0x12) = uVar1;
          param_1[3] = lStack_18 + 3;
          param_1[1] = uStack_20;
          *param_1 = CONCAT71(uStack_27,cStack_28);
          return;
        }
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar5,param_3,&DAT_ram_00032818 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
      }
                    /* WARNING: Subroutine does not return */
      fn_2df20__custom_panic(uVar4,param_3,&DAT_ram_00032800 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    }
  }
  *(undefined1 *)param_1 = 7;
  return;
}


/* ---- fn_142e0 @ 0x14400 ---- */

void fn_142e0(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cStack_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  longlong lStack_18;
  undefined8 uStack_8;
  
  fn_13988__custom_panic(&cStack_28);
  if (cStack_28 == '\a') {
LAB_ram_00014498:
    *(undefined1 *)param_1 = 7;
    return;
  }
  uStack_8 = uStack_20;
  uVar3 = lStack_18 + param_4;
  if (param_3 < uVar3 + 4) goto LAB_ram_00014498;
  uVar4 = uVar3 + 2;
  if (uVar3 < 0xfffffffffffffffe) {
    if (uVar4 <= param_3) {
      uVar5 = uVar4;
      if (uVar4 < param_3) {
        uVar5 = uVar3 + 3;
        if (uVar5 < param_3) {
          uVar1 = *(undefined1 *)(param_2 + uVar5);
          uVar2 = *(undefined1 *)(param_2 + uVar4);
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + uVar3);
          *(undefined1 *)((longlong)param_1 + 0x12) = uVar2;
          *(undefined1 *)((longlong)param_1 + 0x13) = uVar1;
          param_1[3] = lStack_18 + 4;
          param_1[1] = uStack_20;
          *param_1 = CONCAT71(uStack_27,cStack_28);
          return;
        }
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar5,param_3,&DAT_ram_00032860 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
      }
      goto LAB_ram_000145b8;
    }
  }
  else {
    fn_2f328__custom_panic(uVar3,uVar4,&DAT_ram_00032830 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
  }
  uVar5 = param_3;
  fn_2f320__custom_panic(uVar4,param_3,&DAT_ram_00032830 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_000145b8:
                    /* WARNING: Subroutine does not return */
  fn_2df20__custom_panic(uVar5,param_3,&DAT_ram_00032848 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
}


/* ---- fn_144e8 @ 0x14608 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_144e8(undefined4 *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *unaff_R6;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  byte bStack_398;
  undefined1 uStack_380;
  undefined4 *puStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [4];
  undefined1 auStack_32c [5];
  undefined8 uStack_327;
  undefined1 auStack_31f [7];
  longlong alStack_318 [46];
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [4];
  char cStack_1a0;
  undefined8 uStack_19f;
  undefined1 auStack_197 [7];
  longlong alStack_190 [47];
  undefined8 uStack_18;
  
  if (param_3 < (undefined4 *)0x8) goto LAB_ram_00014af8;
  lVar6 = *param_2;
  if (lVar6 < 0x24f3f41552b88a9d) {
    if (lVar6 < -0x162701836cac672f) {
      uVar13 = 2;
      if (lVar6 == -0x7e6329becc64df3f) {
LAB_ram_00014ac0:
        puVar11 = (undefined4 *)0x1;
        puVar18 = (undefined4 *)0x0;
        lVar6 = 0x13;
        if (param_3 < (undefined4 *)0x20) goto LAB_ram_00014af8;
      }
      else {
        if (lVar6 != -0x55956088af70861a) goto LAB_ram_00014af8;
        puVar18 = (undefined4 *)0x1;
        lVar6 = 0xb;
        uVar13 = 3;
        puVar11 = (undefined4 *)0x1;
        if (param_3 < (undefined4 *)0x18) goto LAB_ram_00014af8;
      }
      goto LAB_ram_00014b48;
    }
    if (lVar6 == -0x162701836cac672f) {
      uVar13 = 7;
    }
    else {
      uVar13 = 6;
      if (lVar6 == 0x14afc431ccfa64bb) goto LAB_ram_00014840;
      if (lVar6 != 0x18fabbd8cae56035) goto LAB_ram_00014af8;
      uVar13 = 9;
    }
    if (param_3 < (undefined4 *)0x23) goto LAB_ram_00014af8;
    lVar6 = 9;
    uVar8 = 1;
    bStack_398 = *(byte *)(param_2 + 1);
    unaff_R6 = (undefined4 *)(ulonglong)bStack_398;
LAB_ram_00014890:
    puVar18 = (undefined4 *)(lVar6 + 0x1a);
    if (puVar18 <= param_3) {
      puVar9 = (undefined8 *)((longlong)param_2 + lVar6);
      uVar2 = *(undefined2 *)((longlong)puVar9 + 0x14);
      uVar3 = *(undefined2 *)((longlong)puVar9 + 0x12);
      uVar4 = *(undefined2 *)(puVar9 + 2);
      uVar12 = puVar9[1];
      uVar7 = *puVar9;
      uVar1 = *(uint *)((longlong)puVar9 + 0x16);
      if ((ulonglong)uVar1 == 0) {
        uVar16 = 0;
      }
      else {
        uVar17 = 0;
        unaff_R6 = (undefined4 *)((longlong)auStack_1a8 + 1);
        uVar16 = 0;
        do {
          fn_142e0(auStack_1a8,param_2,param_3,puVar18);
          if (auStack_1a8[0] == '\a') goto LAB_ram_00014d88;
          uStack_18 = CONCAT53(_auStack_1a4,auStack_1a8._1_3_);
          if (uVar17 < 0x10) {
            uVar14 = (ulonglong)uVar16;
            if (0xf < uVar14) goto LAB_ram_000152d0;
            auStack_32c[uVar14 * 0x18 + 4] = auStack_1a8[0];
            (&uStack_327)[uVar14 * 3] = uStack_18;
            *(ulonglong *)((longlong)alStack_318 + uVar14 * 0x18 + -7) =
                 CONCAT17(uStack_19f._7_1_,(undefined7)uStack_19f);
            alStack_318[uVar14 * 3] = CONCAT71(auStack_197,uStack_19f._7_1_);
            uVar16 = uVar16 + 1;
          }
          uVar17 = uVar17 + 1;
          puVar18 = (undefined4 *)((longlong)puVar18 + alStack_190[0]);
        } while (uVar17 < uVar1);
      }
      auStack_330 = (undefined1  [4])uVar16;
      fn_2fe08__sol_memcpy(auStack_1a4 + 2,auStack_330,0x188);
      *(byte *)((longlong)param_1 + 9) = bStack_398;
      *(undefined1 *)(param_1 + 2) = uVar8;
      *(undefined2 *)((longlong)param_1 + 6) = uVar2;
      *(undefined2 *)(param_1 + 1) = uVar3;
      *(undefined2 *)((longlong)param_1 + 2) = uVar4;
      *(undefined1 *)((longlong)param_1 + 1) = uVar13;
      *(undefined1 *)param_1 = 1;
      fn_2fe08__sol_memcpy((undefined1 *)((longlong)param_1 + 10),auStack_1a8,0x18e);
      *(undefined8 *)(param_1 + 0x68) = uVar12;
      *(undefined8 *)(param_1 + 0x66) = uVar7;
      return;
    }
    fn_2f320__custom_panic(puVar18,param_3,&DAT_ram_00032938 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    puVar10 = param_3;
    puVar18 = param_1;
LAB_ram_000150d8:
    fn_2f328__custom_panic();
LAB_ram_000150f0:
    param_3 = (undefined4 *)&DAT_ram_00032878 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    fn_2f328__custom_panic();
LAB_ram_00015108:
    puVar11 = (undefined4 *)&DAT_ram_000328d8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    fn_2f320__custom_panic(puVar10,param_3,&DAT_ram_000328d8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    puVar10 = param_3;
    param_3 = puVar11;
LAB_ram_00015130:
    fn_2f320__custom_panic(puVar10,param_3,&DAT_ram_00032878 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    puVar10 = param_3;
LAB_ram_00015158:
    puVar11 = unaff_R6;
    fn_2f328__custom_panic(puVar10,unaff_R6,&DAT_ram_000328f0 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    puVar10 = puVar11;
LAB_ram_00015180:
    param_3 = (undefined4 *)&DAT_ram_00032890 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    fn_2f328__custom_panic(puVar10,puVar18,&DAT_ram_00032890 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_000151a8:
    puVar11 = (undefined4 *)&DAT_ram_000328f0 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    fn_2f320__custom_panic(unaff_R6,param_3,&DAT_ram_000328f0 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
    param_3 = puVar11;
LAB_ram_000151d0:
    fn_2f320__custom_panic(puVar18,param_3,&DAT_ram_00032890 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_000151f8:
    param_3 = (undefined4 *)&DAT_ram_000328a8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */;
    fn_2f328__custom_panic(puVar18,unaff_R6);
  }
  else {
    if (lVar6 < 0x3e457d9aa869d1b0) {
      if (lVar6 == 0x24f3f41552b88a9d) {
        uVar13 = 8;
LAB_ram_00014840:
        if (param_3 < (undefined4 *)0x22) goto LAB_ram_00014af8;
        lVar6 = 8;
        uVar8 = 0;
        goto LAB_ram_00014890;
      }
      uVar13 = 0;
      if (lVar6 != 0x2aade37a97cb17e5) goto LAB_ram_00014af8;
    }
    else {
      if (lVar6 == 0x3e457d9aa869d1b0) {
        uVar13 = 5;
        goto LAB_ram_00014ac0;
      }
      if (lVar6 == 0x680e5da774475696) {
        puVar11 = (undefined4 *)0x0;
        lVar6 = 0xb;
        uVar13 = 1;
        puVar18 = (undefined4 *)0x1;
        if (param_3 < (undefined4 *)0x17) goto LAB_ram_00014af8;
        goto LAB_ram_00014b48;
      }
      if (lVar6 != 0x5ced2b7b97ef33d0) goto LAB_ram_00014af8;
      uVar13 = 4;
    }
    puVar18 = (undefined4 *)0x0;
    lVar6 = 0x13;
    puVar11 = (undefined4 *)0x0;
    if (param_3 < (undefined4 *)0x1f) {
LAB_ram_00014af8:
      *(undefined1 *)param_1 = 2;
      return;
    }
LAB_ram_00014b48:
    if (puVar11 == (undefined4 *)0x0) {
      uVar17 = 8;
    }
    else {
      uVar17 = 9;
      uStack_380 = (undefined1)param_2[1];
    }
    uVar14 = uVar17 | 4;
    uVar1 = *(uint *)((longlong)param_2 + uVar17);
    if ((ulonglong)uVar1 == 0) {
      uVar16 = 0;
      unaff_R6 = puVar11;
    }
    else {
      uVar17 = 0;
      unaff_R6 = (undefined4 *)((longlong)auStack_330 + 1);
      uVar16 = 0;
      do {
        fn_14100(auStack_330,param_2,param_3,uVar14);
        if (auStack_330[0] == '\a') goto LAB_ram_00014d88;
        uStack_18 = CONCAT53(auStack_32c,auStack_330._1_3_);
        if (uVar17 < 0x10) {
          uVar15 = (ulonglong)uVar16;
          if (0xf < uVar15) goto LAB_ram_00015248;
          (&cStack_1a0)[uVar15 * 0x18] = auStack_330[0];
          (&uStack_19f)[uVar15 * 3] = uStack_18;
          *(ulonglong *)((longlong)alStack_190 + uVar15 * 0x18 + -7) =
               CONCAT17(uStack_327._7_1_,(undefined7)uStack_327);
          alStack_190[uVar15 * 3] = CONCAT71(auStack_31f,uStack_327._7_1_);
          uVar16 = uVar16 + 1;
        }
        uVar17 = uVar17 + 1;
        uVar14 = alStack_318[0] + uVar14;
      } while (uVar17 < uVar1);
    }
    if (param_3 < (undefined4 *)(uVar14 + lVar6)) {
LAB_ram_00014d88:
      *(undefined1 *)param_1 = 2;
      return;
    }
    puVar10 = (undefined4 *)(uVar14 + 8);
    auStack_1a8 = (undefined1  [4])uVar16;
    if (puVar18 != (undefined4 *)0x0) {
      if (0xfffffffffffffff7 < uVar14) goto LAB_ram_000150d8;
      if (param_3 < puVar10) goto LAB_ram_00015108;
      unaff_R6 = (undefined4 *)(uVar14 + 10);
      if (unaff_R6 < puVar10) goto LAB_ram_00015158;
      if (unaff_R6 <= param_3) {
        if (unaff_R6 < param_3) {
          uStack_338 = *(undefined8 *)((longlong)param_2 + uVar14);
          uVar7 = 0;
          puVar18 = puVar10;
          puStack_340 = param_3;
LAB_ram_00014fd8:
          uVar8 = *(undefined1 *)((longlong)param_2 + (longlong)unaff_R6);
          uVar2 = *(undefined2 *)((longlong)param_2 + (longlong)puVar18);
          fn_2fe08__sol_memcpy(param_1 + 2,auStack_1a8,0x188);
          *(undefined4 **)(param_1 + 0x68) = puStack_340;
          *(undefined8 *)(param_1 + 0x66) = uVar7;
          *(undefined8 *)(param_1 + 100) = uStack_338;
          *(undefined1 *)((longlong)param_1 + 7) = uStack_380;
          *(char *)((longlong)param_1 + 6) = (char)puVar11;
          *(undefined2 *)(param_1 + 1) = uVar2;
          *(undefined1 *)((longlong)param_1 + 2) = uVar13;
          *(undefined1 *)((longlong)param_1 + 1) = uVar8;
          *(undefined1 *)param_1 = 0;
          return;
        }
        goto LAB_ram_00015358;
      }
      goto LAB_ram_000151a8;
    }
    if (0xfffffffffffffff7 < uVar14) goto LAB_ram_000150f0;
    if (param_3 < puVar10) goto LAB_ram_00015130;
    puVar18 = (undefined4 *)(uVar14 + 0x10);
    if (puVar18 < puVar10) goto LAB_ram_00015180;
    if (param_3 < puVar18) goto LAB_ram_000151d0;
    unaff_R6 = (undefined4 *)(uVar14 + 0x12);
    if (unaff_R6 < puVar18) goto LAB_ram_000151f8;
    if (unaff_R6 <= param_3) {
      if (param_3 <= unaff_R6) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(unaff_R6,param_3,&DAT_ram_000328c0 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
      }
      puStack_340 = *(undefined4 **)((longlong)param_2 + uVar14);
      uStack_338 = *(undefined8 *)((longlong)param_2 + (longlong)puVar10);
      uVar7 = 1;
      goto LAB_ram_00014fd8;
    }
  }
  fn_2f320__custom_panic(unaff_R6,param_3,&DAT_ram_000328a8 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
  auStack_330[0] = (char)param_3;
LAB_ram_00015248:
  auStack_330._1_3_ = (undefined3)uStack_18;
  auStack_32c = SUB85((ulonglong)uStack_18 >> 0x18,0);
  cVar5 = '+';
  fn_2dfe8__custom_panic(&DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */,0x2b,auStack_330,&DAT_ram_00032530 /* .data.rel.ro: hex: 00 00 00 00 00 00 00 00 18 00 00 00 00 00 00 00 */,&DAT_ram_00032920 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
  auStack_1a8[0] = cVar5;
LAB_ram_000152d0:
  auStack_1a8._1_3_ = (undefined3)uStack_18;
  _auStack_1a4 = (undefined5)((ulonglong)uStack_18 >> 0x18);
  param_3 = (undefined4 *)auStack_1a8;
  fn_2dfe8__custom_panic(&DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */,0x2b,param_3,&DAT_ram_00032590 /* .data.rel.ro: hex: 00 00 00 00 00 00 00 00 18 00 00 00 00 00 00 00 */,&DAT_ram_00032950 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
LAB_ram_00015358:
                    /* WARNING: Subroutine does not return */
  fn_2df20__custom_panic(unaff_R6,param_3,&DAT_ram_00032908 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
}


/* ---- fn_15288 @ 0x153a8 ---- */

bool fn_15288(char *param_1,char param_2)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  
  if (*param_1 == '\0') {
    lVar4 = (ulonglong)*(uint *)(param_1 + 8) * 0x18;
    pcVar2 = param_1 + -6;
    do {
      pcVar3 = pcVar2;
      if (lVar4 == 0) {
        return (bool)2;
      }
      cVar5 = 'o';
      bVar1 = pcVar3[0x16];
      if (bVar1 != 5) {
        cVar5 = pcVar3[0x17];
      }
      lVar4 = lVar4 + -0x18;
      pcVar2 = pcVar3 + 0x18;
    } while (cVar5 != param_2);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        return (bool)2;
      }
      if (bVar1 == 1) {
LAB_ram_00015500:
        return (bool)*pcVar2;
      }
    }
    else {
      if (4 < bVar1) {
        if (bVar1 == 5) {
          return (bool)2;
        }
        if (*pcVar2 != '\x01') {
          return (bool)2;
        }
        cVar5 = pcVar3[0x19];
        goto code_r0x000155a0;
      }
      if (bVar1 != 3) goto LAB_ram_00015500;
    }
    cVar5 = *pcVar2;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x18;
    do {
      pcVar2 = param_1;
      if (lVar4 == 0) {
        return (bool)2;
      }
      cVar5 = 'o';
      bVar1 = pcVar2[0x18];
      if (bVar1 != 5) {
        cVar5 = pcVar2[0x19];
      }
      lVar4 = lVar4 + -0x18;
      param_1 = pcVar2 + 0x18;
    } while (cVar5 != param_2);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        return (bool)2;
      }
      if (bVar1 == 1) {
LAB_ram_000154d8:
        return (bool)pcVar2[0x1a];
      }
    }
    else {
      if (4 < bVar1) {
        if (bVar1 == 5) {
          return (bool)2;
        }
        if (pcVar2[0x1a] != '\x01') {
          return (bool)2;
        }
        cVar5 = pcVar2[0x1b];
        goto code_r0x000155a0;
      }
      if (bVar1 != 3) goto LAB_ram_000154d8;
    }
    cVar5 = pcVar2[0x1a];
  }
code_r0x000155a0:
  return cVar5 != '\0';
}


/* ---- fn_154c8__custom_panic @ 0x155e8 ---- */

undefined8 fn_154c8__custom_panic(char *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong alStack_70 [2];
  uint uStack_5c;
  char acStack_58 [4];
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  undefined4 uStack_38;
  char acStack_34 [32];
  uint uStack_14;
  char acStack_10 [16];
  
  if (*param_1 != '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    acStack_58[1] = param_1[0x2b];
    acStack_58[0] = param_1[0x2a];
    lVar11 = 1;
    if (iVar1 == 1) goto LAB_ram_00015c98;
    acStack_58[3] = param_1[0x43];
    acStack_58[2] = param_1[0x42];
    lVar11 = 2;
    if (iVar1 == 2) goto LAB_ram_00015c98;
    cStack_53 = param_1[0x5b];
    cStack_54 = param_1[0x5a];
    lVar11 = 3;
    if (iVar1 == 3) goto LAB_ram_00015c98;
    cStack_51 = param_1[0x73];
    cStack_52 = param_1[0x72];
    lVar11 = 4;
    if (iVar1 == 4) goto LAB_ram_00015c98;
    cStack_4f = param_1[0x8b];
    cStack_50 = param_1[0x8a];
    lVar11 = 5;
    if (iVar1 == 5) goto LAB_ram_00015c98;
    cStack_4d = param_1[0xa3];
    cStack_4e = param_1[0xa2];
    lVar11 = 6;
    if (iVar1 == 6) goto LAB_ram_00015c98;
    cStack_4b = param_1[0xbb];
    cStack_4c = param_1[0xba];
    lVar11 = 7;
    if (iVar1 == 7) goto LAB_ram_00015c98;
    cStack_49 = param_1[0xd3];
    cStack_4a = param_1[0xd2];
    lVar11 = 8;
    if (iVar1 == 8) goto LAB_ram_00015c98;
    cStack_47 = param_1[0xeb];
    cStack_48 = param_1[0xea];
    lVar11 = 9;
    if (iVar1 == 9) goto LAB_ram_00015c98;
    cStack_45 = param_1[0x103];
    cStack_46 = param_1[0x102];
    lVar11 = 10;
    if (iVar1 == 10) goto LAB_ram_00015c98;
    cStack_43 = param_1[0x11b];
    cStack_44 = param_1[0x11a];
    lVar11 = 0xb;
    if (iVar1 == 0xb) goto LAB_ram_00015c98;
    cStack_41 = param_1[0x133];
    cStack_42 = param_1[0x132];
    lVar11 = 0xc;
    if (iVar1 == 0xc) goto LAB_ram_00015c98;
    cStack_3f = param_1[0x14b];
    cStack_40 = param_1[0x14a];
    lVar11 = 0xd;
    if (iVar1 == 0xd) goto LAB_ram_00015c98;
    cStack_3d = param_1[0x163];
    cStack_3e = param_1[0x162];
    lVar11 = 0xe;
    if (iVar1 == 0xe) goto LAB_ram_00015c98;
    cStack_3b = param_1[0x17b];
    cStack_3c = param_1[0x17a];
    lVar11 = 0xf;
    if (iVar1 == 0xf) goto LAB_ram_00015c98;
    cStack_39 = param_1[0x193];
    cStack_3a = param_1[0x192];
    lVar11 = 0x10;
    if (iVar1 == 0x10) goto LAB_ram_00015c98;
    uStack_38 = CONCAT31(CONCAT21(uStack_38._2_2_,param_1[0x1ab]),param_1[0x1aa]);
    param_1 = &DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */;
    fn_2dfe8__custom_panic(&DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */,0x2b,&uStack_38,&DAT_ram_00032550 /* .data.rel.ro: hex: 00 00 00 00 00 00 00 00 02 00 00 00 00 00 00 00 */,&DAT_ram_00032980 /* .data.rel.ro: &str "contract/src/routers/jupiter.rs" (len=31) */);
  }
  if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
    return 0;
  }
  lVar8 = (ulonglong)*(uint *)(param_1 + 8) * 0x18;
  acStack_58[1] = param_1[0x22];
  acStack_58[0] = param_1[0x21];
  lVar11 = 1;
  if (lVar8 != 0x18) {
    acStack_58[3] = param_1[0x3a];
    acStack_58[2] = param_1[0x39];
    lVar11 = 2;
    if (lVar8 != 0x30) {
      cStack_53 = param_1[0x52];
      cStack_54 = param_1[0x51];
      lVar11 = 3;
      if (lVar8 != 0x48) {
        cStack_51 = param_1[0x6a];
        cStack_52 = param_1[0x69];
        lVar11 = 4;
        if (lVar8 != 0x60) {
          cStack_4f = param_1[0x82];
          cStack_50 = param_1[0x81];
          lVar11 = 5;
          if (lVar8 != 0x78) {
            cStack_4d = param_1[0x9a];
            cStack_4e = param_1[0x99];
            lVar11 = 6;
            if (lVar8 != 0x90) {
              cStack_4b = param_1[0xb2];
              cStack_4c = param_1[0xb1];
              lVar11 = 7;
              if (lVar8 != 0xa8) {
                cStack_49 = param_1[0xca];
                cStack_4a = param_1[0xc9];
                lVar11 = 8;
                if (lVar8 != 0xc0) {
                  cStack_47 = param_1[0xe2];
                  cStack_48 = param_1[0xe1];
                  lVar11 = 9;
                  if (lVar8 != 0xd8) {
                    cStack_45 = param_1[0xfa];
                    cStack_46 = param_1[0xf9];
                    lVar11 = 10;
                    if (lVar8 != 0xf0) {
                      cStack_43 = param_1[0x112];
                      cStack_44 = param_1[0x111];
                      lVar11 = 0xb;
                      if (lVar8 != 0x108) {
                        cStack_41 = param_1[0x12a];
                        cStack_42 = param_1[0x129];
                        lVar11 = 0xc;
                        if (lVar8 != 0x120) {
                          cStack_3f = param_1[0x142];
                          cStack_40 = param_1[0x141];
                          lVar11 = 0xd;
                          if (lVar8 != 0x138) {
                            cStack_3d = param_1[0x15a];
                            cStack_3e = param_1[0x159];
                            lVar11 = 0xe;
                            if (lVar8 != 0x150) {
                              cStack_3b = param_1[0x172];
                              cStack_3c = param_1[0x171];
                              lVar11 = 0xf;
                              if (lVar8 != 0x168) {
                                cStack_39 = param_1[0x18a];
                                cStack_3a = param_1[0x189];
                                lVar11 = 0x10;
                                if (lVar8 != 0x180) {
                                  uStack_38 = CONCAT31(CONCAT21(uStack_38._2_2_,param_1[0x1a2]),
                                                       param_1[0x1a1]);
                                  puVar12 = &uStack_38;
                                  plVar7 = (longlong *)&DAT_ram_00031b64 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 52 65 73 75 6c 74 3a 3a */;
                                  plVar10 = (longlong *)0x2b;
                                  fn_2dfe8__custom_panic();
                                  uVar6 = 0xd;
                                  if ((undefined4 *)0x7 < puVar12) {
                                    if ((((*plVar7 != 0x6ec031f25bd57904) ||
                                         (plVar7[1] != 0x71568ce6ec574ee)) ||
                                        (plVar7[2] != 0x518ef4a3deb2b1fd)) ||
                                       (bVar4 = false, plVar7[3] != -0x70ec43a95d324efe)) {
                                      bVar4 = true;
                                    }
                                    lVar11 = *plVar10;
                                    if (bVar4) {
                                      if (((*plVar7 != 0x4873bce2144ae3b5) ||
                                          (plVar7[1] != -0x2911a2500a1ef197)) ||
                                         ((plVar7[2] != 0x60b8aa6da3403855 ||
                                          (bVar4 = false, plVar7[3] != 0x103cc0bd736050b0)))) {
                                        bVar4 = true;
                                      }
                                      if (bVar4) {
                                        if ((((*plVar7 != -0x44f118ed916356fa) ||
                                             (plVar7[1] != 0x6e904b4c145c1835)) ||
                                            (plVar7[2] != 0x2a2f74470ab0ff18)) ||
                                           (bVar4 = false, plVar7[3] != -0x2b367796f4eefba2)) {
                                          bVar4 = true;
                                        }
                                        if (bVar4) {
                                          if (((*plVar7 != 0x136d5ca2f1569155) ||
                                              (plVar7[1] != 0x340d9a0ae6f72a4f)) ||
                                             ((plVar7[2] != -0x2a9d9b9ca96e3882 ||
                                              (bVar4 = false, plVar7[3] != 0x698f3435f126add1)))) {
                                            bVar4 = true;
                                          }
                                          if ((!bVar4) &&
                                             (((lVar11 == 0x19f106ccead8aadf ||
                                               (lVar11 == 0x3cec9b1033d4c9bb)) ||
                                              (lVar11 == 0x351f5084b15529aa)))) {
                                            uVar6 = 0xc;
                                          }
                                        }
                                        else if (lVar11 == -0x78ffe9badeaba407) {
                                          uVar6 = 0xb;
                                        }
                                      }
                                      else if (((lVar11 == -0x77a4a414b3c0b4bf) ||
                                               (lVar11 == 0x65879cc54d18aca8)) ||
                                              (lVar11 == -0x37788a1e6e613908)) {
                                        uVar6 = 10;
                                      }
                                    }
                                    else {
                                      if (lVar11 < 0x24f3f41552b88a9d) {
                                        if (lVar11 < -0x162701836cac672f) {
                                          if (lVar11 == -0x7e6329becc64df3f) {
                                            return 2;
                                          }
                                          if (lVar11 == -0x55956088af70861a) {
                                            return 3;
                                          }
                                        }
                                        else {
                                          if (lVar11 == -0x162701836cac672f) {
                                            return 7;
                                          }
                                          if (lVar11 == 0x14afc431ccfa64bb) {
                                            return 6;
                                          }
                                          if (lVar11 == 0x18fabbd8cae56035) {
                                            return 9;
                                          }
                                        }
                                      }
                                      else if (lVar11 < 0x3e457d9aa869d1b0) {
                                        if (lVar11 == 0x24f3f41552b88a9d) {
                                          return 8;
                                        }
                                        if (lVar11 == 0x2aade37a97cb17e5) {
                                          return 0;
                                        }
                                      }
                                      else {
                                        if (lVar11 == 0x3e457d9aa869d1b0) {
                                          return 5;
                                        }
                                        if (lVar11 == 0x5ced2b7b97ef33d0) {
                                          return 4;
                                        }
                                        if (lVar11 == 0x680e5da774475696) {
                                          return 1;
                                        }
                                      }
                                      uVar6 = 0xd;
                                    }
                                  }
                                  return uVar6;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_ram_00015c98:
  uStack_5c = (uint)lVar11;
  pcVar5 = acStack_58;
  do {
    cVar2 = *pcVar5;
    if ((ulonglong)uStack_5c == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      pcVar9 = acStack_58;
      do {
        if (*pcVar9 == cVar2) {
          if (pcVar9[1] == cVar2) {
            return 1;
          }
          if ((uVar14 & 0xffffffff) < 0x20) {
            acStack_34[uVar14 & 0xffffffff] = pcVar9[1];
            uVar14 = uVar14 + 1;
          }
        }
        pcVar9 = pcVar9 + 2;
      } while (pcVar9 != acStack_58 + (ulonglong)uStack_5c * 2);
    }
    uStack_14 = 0;
LAB_ram_00015e50:
    if ((uVar14 & 0xffffffff) != 0) {
      uVar13 = (ulonglong)uStack_14;
      uVar15 = uVar14 & 0xffffffff;
      uVar14 = uVar15 - 1;
      uStack_38 = (int)uVar14;
      cVar3 = acStack_34[uVar15 - 1];
      if (cVar3 == cVar2) {
        return 1;
      }
      if (0xf < uVar13) break;
      if (uVar13 != 0) {
        uVar15 = 0;
        do {
          if (acStack_10[uVar15] == cVar3) goto LAB_ram_00015e50;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar13);
        goto joined_r0x00015f68;
      }
      uVar13 = 0;
      goto LAB_ram_00015f90;
    }
    pcVar5 = pcVar5 + 2;
    if (pcVar5 == acStack_58 + lVar11 * 2) {
      return 0;
    }
  } while( true );
  fn_2f0e0(alStack_70,cVar3,acStack_10);
  if (alStack_70[0] != 1) {
    uVar13 = (ulonglong)uStack_14;
joined_r0x00015f68:
    if (uVar13 < 0x10) {
LAB_ram_00015f90:
      acStack_10[uVar13] = cVar3;
      uStack_14 = (int)uVar13 + 1;
    }
    if ((ulonglong)uStack_5c != 0) {
      lVar8 = (ulonglong)uStack_5c << 1;
      pcVar9 = acStack_58 + 1;
      do {
        if ((pcVar9[-1] == cVar3) && ((uVar14 & 0xffffffff) < 0x20)) {
          acStack_34[uVar14 & 0xffffffff] = *pcVar9;
          uVar14 = uVar14 + 1;
        }
        pcVar9 = pcVar9 + 2;
        lVar8 = lVar8 + -2;
      } while (lVar8 != 0);
    }
    uStack_38 = (int)uVar14;
  }
  goto LAB_ram_00015e50;
}


/* ---- fn_15fe0 @ 0x16100 ---- */

undefined8 fn_15fe0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0xd;
  if (7 < param_3) {
    if ((((*param_1 != 0x6ec031f25bd57904) || (param_1[1] != 0x71568ce6ec574ee)) ||
        (param_1[2] != 0x518ef4a3deb2b1fd)) || (bVar1 = false, param_1[3] != -0x70ec43a95d324efe)) {
      bVar1 = true;
    }
    lVar3 = *param_2;
    if (bVar1) {
      if (((*param_1 != 0x4873bce2144ae3b5) || (param_1[1] != -0x2911a2500a1ef197)) ||
         ((param_1[2] != 0x60b8aa6da3403855 || (bVar1 = false, param_1[3] != 0x103cc0bd736050b0))))
      {
        bVar1 = true;
      }
      if (bVar1) {
        if ((((*param_1 != -0x44f118ed916356fa) || (param_1[1] != 0x6e904b4c145c1835)) ||
            (param_1[2] != 0x2a2f74470ab0ff18)) ||
           (bVar1 = false, param_1[3] != -0x2b367796f4eefba2)) {
          bVar1 = true;
        }
        if (bVar1) {
          if (((*param_1 != 0x136d5ca2f1569155) || (param_1[1] != 0x340d9a0ae6f72a4f)) ||
             ((param_1[2] != -0x2a9d9b9ca96e3882 ||
              (bVar1 = false, param_1[3] != 0x698f3435f126add1)))) {
            bVar1 = true;
          }
          if ((!bVar1) &&
             (((lVar3 == 0x19f106ccead8aadf || (lVar3 == 0x3cec9b1033d4c9bb)) ||
              (lVar3 == 0x351f5084b15529aa)))) {
            uVar2 = 0xc;
          }
        }
        else if (lVar3 == -0x78ffe9badeaba407) {
          uVar2 = 0xb;
        }
      }
      else if (((lVar3 == -0x77a4a414b3c0b4bf) || (lVar3 == 0x65879cc54d18aca8)) ||
              (lVar3 == -0x37788a1e6e613908)) {
        uVar2 = 10;
      }
    }
    else {
      if (lVar3 < 0x24f3f41552b88a9d) {
        if (lVar3 < -0x162701836cac672f) {
          if (lVar3 == -0x7e6329becc64df3f) {
            return 2;
          }
          if (lVar3 == -0x55956088af70861a) {
            return 3;
          }
        }
        else {
          if (lVar3 == -0x162701836cac672f) {
            return 7;
          }
          if (lVar3 == 0x14afc431ccfa64bb) {
            return 6;
          }
          if (lVar3 == 0x18fabbd8cae56035) {
            return 9;
          }
        }
      }
      else if (lVar3 < 0x3e457d9aa869d1b0) {
        if (lVar3 == 0x24f3f41552b88a9d) {
          return 8;
        }
        if (lVar3 == 0x2aade37a97cb17e5) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0x3e457d9aa869d1b0) {
          return 5;
        }
        if (lVar3 == 0x5ced2b7b97ef33d0) {
          return 4;
        }
        if (lVar3 == 0x680e5da774475696) {
          return 1;
        }
      }
      uVar2 = 0xd;
    }
  }
  return uVar2;
}


/* ---- fn_16518 @ 0x16638 ---- */

void fn_16518(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = *param_2;
  if (50000 < uVar1) goto LAB_ram_000166f0;
  uVar2 = param_2[2];
  if (uVar2 != uVar1) {
    if (((50000 < uVar2) || (uVar2 <= uVar1)) || (param_2[3] < param_2[1])) goto LAB_ram_000166f0;
    uVar3 = param_2[4];
    uVar1 = uVar2;
    if (uVar3 != uVar2) {
      if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[5] < param_2[3])) goto LAB_ram_000166f0;
      uVar2 = param_2[6];
      uVar1 = uVar3;
      if (uVar2 != uVar3) {
        if (((50000 < uVar2) || (uVar2 <= uVar3)) || (param_2[7] < param_2[5]))
        goto LAB_ram_000166f0;
        uVar3 = param_2[8];
        uVar1 = uVar2;
        if (uVar3 != uVar2) {
          if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[9] < param_2[7]))
          goto LAB_ram_000166f0;
          uVar2 = param_2[10];
          uVar1 = uVar3;
          if (uVar2 != uVar3) {
            if (((50000 < uVar2) || (uVar2 <= uVar3)) || (param_2[0xb] < param_2[9]))
            goto LAB_ram_000166f0;
            uVar3 = param_2[0xc];
            uVar1 = uVar2;
            if (uVar3 != uVar2) {
              if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[0xd] < param_2[0xb]))
              goto LAB_ram_000166f0;
              uVar2 = param_2[0xe];
              uVar1 = uVar3;
              if (uVar2 != uVar3) {
                if (((50000 < uVar2) || (uVar2 <= uVar3)) || (param_2[0xf] < param_2[0xd]))
                goto LAB_ram_000166f0;
                uVar3 = param_2[0x10];
                uVar1 = uVar2;
                if (uVar3 != uVar2) {
                  if (((50000 < uVar3) || (uVar3 <= uVar2)) || (param_2[0x11] < param_2[0xf]))
                  goto LAB_ram_000166f0;
                  uVar2 = param_2[0x12];
                  uVar1 = uVar3;
                  if (uVar2 != uVar3) {
                    if (((uVar2 < 0xc351) && (uVar3 < uVar2)) && (param_2[0x11] <= param_2[0x13])) {
                      uVar4 = 0x1a;
                    }
                    goto LAB_ram_000166f0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0x1a;
  if (uVar1 != 50000) {
    uVar4 = 0;
  }
LAB_ram_000166f0:
  *param_1 = uVar4;
  param_1[1] = 0xbad3;
  return;
}


/* ---- fn_16748__custom_panic @ 0x16868 ---- */

ulonglong fn_16748__custom_panic(ulonglong param_1,longlong param_2)

{
  if (param_2 != 0x6c0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,2);
  }
  if ((param_1 & 7) == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_1090__custom_panic(&DAT_ram_00031be9 /* .rodata: hex: 66 72 6f 6d 5f 62 79 74 65 73 5f 6d 75 74 3e 73 */,0xe,0);
}


/* ---- fn_167c8__custom_panic @ 0x168e8 ---- */

void fn_167c8__custom_panic(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  if (*(ulonglong *)(param_2 + 0x10) != 0 || uVar2 != 0) {
    if (0xffffffffffff < uVar2) goto LAB_ram_00016ab8;
    uVar1 = 0;
    if (*(ulonglong *)(param_2 + 0x30) < (*(ulonglong *)(param_2 + 0x10) >> 0x30 | uVar2 << 0x10))
    goto LAB_ram_00016970;
  }
  uVar1 = 0;
  if (*(ulonglong *)(param_2 + 0x30) <= *(ulonglong *)(param_2 + 0x38)) {
    uVar4 = *(ulonglong *)(param_2 + 0x68);
    uVar3 = *(ulonglong *)(param_2 + 0x80);
    uVar2 = 0;
    if (*(ulonglong *)(param_2 + 0x60) != 0 || uVar4 != 0) {
      if (0xffffffffffff < uVar4) goto LAB_ram_00016ab8;
      uVar2 = *(ulonglong *)(param_2 + 0x60) >> 0x30 | uVar4 << 0x10;
    }
    if (((*(ulonglong *)(param_2 + 0x38) <= uVar3) && (uVar2 <= uVar3)) &&
       (uVar3 <= *(ulonglong *)(param_2 + 0x88))) {
      uVar4 = *(ulonglong *)(param_2 + 0xb8);
      uVar3 = *(ulonglong *)(param_2 + 0xd0);
      uVar2 = 0;
      if (*(ulonglong *)(param_2 + 0xb0) != 0 || uVar4 != 0) {
        if (0xffffffffffff < uVar4) {
LAB_ram_00016ab8:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032998 /* .data.rel.ro: &str "contract/src/stateupdate.rs" (len=27) */);
        }
        uVar2 = *(ulonglong *)(param_2 + 0xb0) >> 0x30 | uVar4 << 0x10;
      }
      if (((*(ulonglong *)(param_2 + 0x88) <= uVar3) && (uVar2 <= uVar3)) &&
         (uVar3 <= *(ulonglong *)(param_2 + 0xd8))) {
        uVar1 = 0x1a;
      }
    }
  }
LAB_ram_00016970:
  *param_1 = uVar1;
  param_1[1] = 0xbad2;
  return;
}


/* ---- fn_169b0 @ 0x16ad0 ---- */

longlong fn_169b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_1 < *(longlong *)(param_2 + 0x10)) ||
       (lVar1 = param_2, *(longlong *)(param_2 + 0x18) < param_1)) &&
      ((param_1 < *(longlong *)(param_2 + 0x40) ||
       (lVar1 = param_2 + 0x30, *(longlong *)(param_2 + 0x48) < param_1)))) &&
     ((param_1 < *(longlong *)(param_2 + 0x70) ||
      (lVar1 = param_2 + 0x60, *(longlong *)(param_2 + 0x78) < param_1)))) {
    lVar1 = 0;
  }
  return lVar1;
}


/* ---- fn_16a50 @ 0x16b70 ---- */

longlong fn_16a50(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_1 < *(ulonglong *)(param_2 + 0x30)) ||
       (lVar1 = param_2, *(ulonglong *)(param_2 + 0x38) < param_1)) &&
      ((param_1 < *(ulonglong *)(param_2 + 0x80) ||
       (lVar1 = param_2 + 0x50, *(ulonglong *)(param_2 + 0x88) < param_1)))) &&
     ((param_1 < *(ulonglong *)(param_2 + 0xd0) ||
      (lVar1 = param_2 + 0xa0, *(ulonglong *)(param_2 + 0xd8) < param_1)))) {
    lVar1 = 0;
  }
  return lVar1;
}


/* ---- fn_16af0__sol_log @ 0x16c10 ---- */

ulonglong fn_16af0__sol_log(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                          longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  longlong lStack_18;
  longlong lStack_10;
  ulonglong uStack_8;
  
  lVar9 = *(longlong *)(param_5 + -0x1000);
  fn_30150(&uStack_68,param_2,(longlong)param_2 >> 0x3f,lVar9);
  fn_30150(&uStack_58,lVar9,0,param_1,0);
  uVar6 = *(ulonglong *)(param_5 + -0xff8);
  fn_30150(&uStack_38,uVar6,(longlong)uVar6 >> 0x3f,param_1,param_1 >> 0x3f);
  fn_30150(&lStack_48,uVar6,(longlong)uVar6 >> 0x3f,param_2,(longlong)param_2 >> 0x3f);
  uVar4 = uStack_38 + uStack_68 + lStack_50;
  lVar2 = lStack_30 + (param_1 >> 0x3f & uVar6) + (ulonglong)(uVar4 < uStack_38);
  uVar6 = lStack_60 + (lVar9 >> 0x3f & param_2) + (ulonglong)(uStack_68 + lStack_50 < uStack_68);
  uVar7 = uVar6 + lStack_48;
  uVar1 = uVar7 + lVar2;
  uVar10 = 0;
  lVar2 = ((longlong)uVar6 >> 0x3f) + lStack_40 + (ulonglong)(uVar7 < uVar6) + (lVar2 >> 0x3f) +
          (ulonglong)(uVar1 < uVar7);
  uVar7 = (longlong)(uVar1 * 0x10000) >> 0x3f;
  uVar6 = 0x9c;
  if ((uVar1 >> 0x30 | lVar2 * 0x10000) != uVar7 || lVar2 >> 0x30 != uVar7) goto LAB_ram_00017590;
  uVar7 = uVar4 * 0x10000 | uStack_58 >> 0x30;
  uVar1 = uVar1 * 0x10000 | uVar4 >> 0x30;
  if (*(longlong *)(param_5 + -0xff0) == -1) {
    bVar3 = true;
    if (param_3 < uVar7) {
      if ((longlong)param_4 < (longlong)uVar1) goto LAB_ram_00017030;
LAB_ram_00016fd0:
      bVar5 = false;
    }
    else {
      bVar3 = false;
      if ((longlong)uVar1 <= (longlong)param_4) goto LAB_ram_00016fd0;
LAB_ram_00017030:
      bVar5 = true;
    }
    if (uVar1 != param_4) {
      bVar3 = bVar5;
    }
    uVar6 = 0;
    uVar10 = 0x1a;
    if (bVar3) goto LAB_ram_00017590;
  }
  else if (*(longlong *)(param_5 + -0xff0) == 1) {
    bVar3 = uVar7 < param_3;
    if ((longlong)uVar1 < (longlong)param_4) goto LAB_ram_00017030;
    goto LAB_ram_00016fd0;
  }
  uVar4 = uVar7 + param_3;
  uVar10 = 0;
  uVar8 = uVar1 + param_4 + (ulonglong)(uVar4 < uVar7);
  uVar6 = 0xb2;
  if (-1 < (longlong)((uVar1 ^ param_4 ^ 0xffffffffffffffff) & (uVar1 ^ uVar8))) {
    if ((longlong)
        (((uVar8 & 0x7fffffffffff8000) << 1 | (uVar8 << 0x31 | uVar4 >> 0xf) >> 0x30) ^ uVar8) < 0)
    {
      uVar6 = 0xb4;
    }
    else {
      uStack_8 = (uVar1 - param_4) - (ulonglong)(uVar7 < param_3);
      if ((longlong)((uVar1 ^ param_4) & (uVar1 ^ uStack_8)) < 0) {
        uVar6 = 0xb6;
      }
      else {
        lVar2 = uVar7 - param_3;
        lStack_10 = -lVar2;
        if (-1 < (longlong)uStack_8) {
          lStack_10 = lVar2;
        }
        if ((longlong)uStack_8 < 0) {
          uStack_8 = -(uStack_8 + (lVar2 != 0));
        }
        fn_15e8__sol_log(&lStack_28,&lStack_10,(uVar4 >> 0xf) << 0x10 | uVar4 * 2 & 0xfffe);
        uVar6 = 0xb9;
        if (lStack_28 != 0) {
          fn_30150(&uStack_78,lStack_18,lStack_18 >> 0x3f,0x86a0000000000000,
                           0xffffffffffffffff);
          fn_30150(&uStack_88,uStack_20,0,0x86a0000000000000,0);
          uVar1 = uStack_20 + uStack_78 + lStack_80;
          uVar6 = lStack_70 + lStack_18 + (ulonglong)(uStack_78 + lStack_80 < uStack_78);
          uVar4 = uVar6 + lStack_18;
          uVar7 = uVar4 + (uVar1 < uStack_20);
          lVar2 = ((longlong)uVar6 >> 0x3f) + (lStack_18 >> 0x3f) + (ulonglong)(uVar4 < uVar6) +
                  (ulonglong)(uVar7 < uVar4);
          uVar4 = (longlong)(uVar7 * 0x10000) >> 0x3f;
          uVar6 = 0xbc;
          if ((uVar7 >> 0x30 | lVar2 * 0x10000) == uVar4 && lVar2 >> 0x30 == uVar4) {
            uVar6 = uVar7 * 0x10000 | uVar1 >> 0x30;
            uVar10 = 0x1a;
            if ((uVar1 * 0x10000 == 0 && (uStack_88 & 0xffe0000000000000) == 0) && uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 < 0x10000) {
              uVar6 = uVar1 * 0x10000 >> 0x30 | uVar6 << 0x10;
            }
            else {
              uVar10 = 0;
              uVar6 = 0xbe;
            }
          }
        }
      }
    }
  }
LAB_ram_00017590:
  return uVar6 << 0x20 | uVar10;
}


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


/* ---- fn_17900__sol_log @ 0x17a20 ---- */

void fn_17900__sol_log(undefined4 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  
  uVar1 = fn_16af0__sol_log(param_2 << 0x30,((longlong)param_2 >> 0x3f) << 0x30 | param_2 >> 0x10,
                           param_3 << 0x30,((longlong)param_3 >> 0x3f) << 0x30 | param_3 >> 0x10);
  if ((uVar1 & 0xffffffff) == 0x1a) {
    fn_17488__sol_log(param_1,uVar1 >> 0x20,*(undefined8 *)(param_5 + -0xff8));
  }
  else {
    param_1[2] = (int)(uVar1 >> 0x20);
    param_1[1] = (int)uVar1;
    *param_1 = 1;
  }
  return;
}


/* ---- fn_17a30 @ 0x17b50 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_17a30(undefined4 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  byte bVar1;
  undefined *puVar2;
  ulonglong uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulonglong uVar19;
  undefined *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uStack_200;
  longlong lStack_1f8;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  ulonglong uStack_1b0;
  longlong lStack_1a8;
  ulonglong uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  longlong lStack_178;
  undefined *puStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  undefined *puStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined *puStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  undefined *puStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  undefined *puStack_8;
  
  puStack_10 = (undefined *)(param_2 << 0x30);
  puStack_8 = (undefined *)(((longlong)param_2 >> 0x3f) << 0x30 | param_2 >> 0x10);
  puVar20 = *(undefined **)(param_5 + -0x1000);
  uVar15 = *(ulonglong *)(param_5 + -0xff8);
  fn_15e8__sol_log(&puStack_50,&puStack_10,puVar20,uVar15);
  uVar19 = uStack_40;
  puVar17 = puStack_48;
  if (puStack_50 == (undefined *)0x1) {
    if (puVar20 == (undefined *)0x0 && uVar15 == 0) {
LAB_ram_00018070:
      uVar7 = 0x9200000000;
      goto LAB_ram_00018088;
    }
    uVar16 = ((longlong)param_3 >> 0x3f) << 0x30 | param_3 >> 0x10;
    lStack_20 = param_3 << 0x30;
    lVar9 = -lStack_20;
    if ((longlong)uVar16 < 0) {
      bVar5 = lStack_20 != 0;
      lStack_20 = lVar9;
      if (bVar5) goto LAB_ram_00017ca0;
LAB_ram_00017e18:
      lVar9 = 0;
    }
    else {
      if (lStack_20 == 0) goto LAB_ram_00017e18;
LAB_ram_00017ca0:
      lVar9 = 1;
    }
    puStack_18 = (undefined *)uVar16;
    if ((longlong)uVar16 < 0) {
      puStack_18 = (undefined *)-(uVar16 + lVar9);
    }
    plVar11 = *(longlong **)(param_5 + -0xff0);
    bVar5 = puVar20 != (undefined *)0x0;
    uVar21 = uVar15;
    if ((longlong)uVar15 < 0) {
      puVar20 = (undefined *)-(longlong)puVar20;
      uVar21 = -(uVar15 + bVar5);
    }
    puStack_10 = puVar20;
    puStack_8 = (undefined *)uVar21;
    fn_1178(&puStack_50,&lStack_20,&puStack_10,0x30);
    if ((char)uStack_40 != '\0') goto LAB_ram_00018070;
    if ((longlong)(uVar16 ^ uVar15) < 0) {
      bVar8 = true;
      bVar5 = true;
      if (puStack_50 == (undefined *)0x0) {
        bVar5 = false;
        if (puStack_48 < (undefined *)0x8000000000000001) goto LAB_ram_00017ef0;
LAB_ram_00017eb0:
        if (puStack_48 == (undefined *)0x8000000000000000) goto LAB_ram_00017eb8;
LAB_ram_00017f00:
        if (bVar8) goto LAB_ram_00018070;
      }
      else {
        if ((undefined *)0x8000000000000000 < puStack_48) goto LAB_ram_00017eb0;
LAB_ram_00017ef0:
        bVar8 = false;
        if (puStack_48 != (undefined *)0x8000000000000000) goto LAB_ram_00017f00;
LAB_ram_00017eb8:
        if (bVar5) goto LAB_ram_00018070;
      }
      puStack_1c0 = (undefined *)-(longlong)puStack_50;
      puStack_1d0 = (undefined *)((ulonglong)puStack_48 ^ 0xffffffffffffffff);
      if (puStack_1c0 == (undefined *)0x0) {
        puStack_1d0 = (undefined *)-(longlong)puStack_48;
      }
    }
    else {
      puStack_1d0 = puStack_48;
      puStack_1c0 = puStack_50;
      if ((longlong)puStack_48 < 0) goto LAB_ram_00018070;
    }
    uVar16 = ((longlong)param_4 >> 0x3f) << 0x30 | param_4 >> 0x10;
    lStack_20 = param_4 << 0x30;
    lVar9 = -lStack_20;
    if ((longlong)uVar16 < 0) {
      bVar5 = lStack_20 != 0;
      lStack_20 = lVar9;
      if (bVar5) goto LAB_ram_00017fd8;
LAB_ram_000180c8:
      lVar9 = 0;
    }
    else {
      if (lStack_20 == 0) goto LAB_ram_000180c8;
LAB_ram_00017fd8:
      lVar9 = 1;
    }
    puStack_18 = (undefined *)uVar16;
    if ((longlong)uVar16 < 0) {
      puStack_18 = (undefined *)-(uVar16 + lVar9);
    }
    puStack_10 = puVar20;
    puStack_8 = (undefined *)uVar21;
    fn_1178(&puStack_50,&lStack_20,&puStack_10,0x30);
    if ((char)uStack_40 != '\0') goto LAB_ram_00018070;
    if ((longlong)(uVar16 ^ uVar15) < 0) {
      bVar8 = true;
      bVar5 = true;
      if (puStack_50 == (undefined *)0x0) {
        bVar5 = false;
        if (puStack_48 < (undefined *)0x8000000000000001) goto LAB_ram_00018198;
LAB_ram_00018158:
        if (puStack_48 == (undefined *)0x8000000000000000) goto LAB_ram_00018160;
LAB_ram_000181a8:
        if (bVar8) goto LAB_ram_00018070;
      }
      else {
        if ((undefined *)0x8000000000000000 < puStack_48) goto LAB_ram_00018158;
LAB_ram_00018198:
        bVar8 = false;
        if (puStack_48 != (undefined *)0x8000000000000000) goto LAB_ram_000181a8;
LAB_ram_00018160:
        if (bVar5) goto LAB_ram_00018070;
      }
      puVar20 = (undefined *)-(longlong)puStack_50;
      puVar10 = (undefined *)((ulonglong)puStack_48 ^ 0xffffffffffffffff);
      if (puVar20 == (undefined *)0x0) {
        puVar10 = (undefined *)-(longlong)puStack_48;
      }
    }
    else {
      puVar20 = puStack_50;
      puVar10 = puStack_48;
      if ((longlong)puStack_48 < 0) goto LAB_ram_00018070;
    }
    bVar1 = *(byte *)(plVar11 + 4);
    if (3 < bVar1) goto LAB_ram_0001af60;
    uVar15 = (longlong)puStack_1c0 >> 0x3f;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (-1 < (longlong)uVar19) {
          if (puVar17 != (undefined *)0x0 || uVar19 != 0) {
            if (uVar19 == 0) {
              uVar16 = (ulonglong)puVar17 | (ulonglong)puVar17 >> 1;
              uVar16 = uVar16 | uVar16 >> 2;
              uVar16 = uVar16 | uVar16 >> 4;
              uVar16 = uVar16 | uVar16 >> 8;
              uVar16 = uVar16 | uVar16 >> 0x10;
              uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
              uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
              uVar16 = ((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                       0x40;
            }
            else {
              uVar16 = uVar19 | uVar19 >> 1;
              uVar16 = uVar16 | uVar16 >> 2;
              uVar16 = uVar16 | uVar16 >> 4;
              uVar16 = uVar16 | uVar16 >> 8;
              uVar16 = uVar16 | uVar16 >> 0x10;
              uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
              uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
              uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            }
            puVar13 = (undefined *)0x0;
            fn_30108(&puStack_e0,1,0,(uVar16 ^ 0xffffffffffffffff) & 0x7e);
            uVar16 = 0;
            do {
              puVar2 = puStack_e0 + (longlong)puVar13;
              uVar21 = uStack_d8 + uVar16 + (ulonglong)(puVar2 < puStack_e0);
              bVar5 = true;
              if (uVar19 < uVar21) {
                if (puVar17 < puVar2) goto LAB_ram_00018b08;
LAB_ram_00018c40:
                bVar8 = false;
                if (uVar19 != uVar21) goto LAB_ram_00018c50;
LAB_ram_00018b10:
                if (bVar8) goto LAB_ram_00018b40;
LAB_ram_00018c98:
                bVar5 = false;
                uVar12 = uStack_d8;
              }
              else {
                bVar5 = false;
                if (puVar2 <= puVar17) goto LAB_ram_00018c40;
LAB_ram_00018b08:
                bVar8 = true;
                if (uVar19 == uVar21) goto LAB_ram_00018b10;
LAB_ram_00018c50:
                if (!bVar5) goto LAB_ram_00018c98;
LAB_ram_00018b40:
                uVar12 = 0;
                bVar5 = true;
                uVar21 = 0;
                puVar2 = (undefined *)0x0;
              }
              puVar4 = (undefined *)0x0;
              if (!bVar5) {
                puVar4 = puStack_e0;
              }
              puVar13 = puVar4 + ((ulonglong)puVar13 >> 1 | uVar16 << 0x3f);
              lVar9 = 1;
              if (puVar13 < puVar4) {
                if (puVar17 < puVar2) goto LAB_ram_00018bc0;
LAB_ram_00018cd8:
                lVar22 = 0;
                if (puStack_e0 < (undefined *)0x4) goto LAB_ram_00018cf0;
LAB_ram_00018bd0:
                bVar5 = true;
              }
              else {
                lVar9 = 0;
                if (puVar2 <= puVar17) goto LAB_ram_00018cd8;
LAB_ram_00018bc0:
                lVar22 = 1;
                if ((undefined *)0x3 < puStack_e0) goto LAB_ram_00018bd0;
LAB_ram_00018cf0:
                bVar5 = false;
              }
              if (uStack_d8 != 0) {
                bVar5 = uStack_d8 != 0;
              }
              uVar19 = (uVar19 - uVar21) - lVar22;
              uVar16 = uVar12 + (uVar16 >> 1) + lVar9;
              puVar17 = puVar17 + -(longlong)puVar2;
              puStack_e0 = (undefined *)((ulonglong)puStack_e0 >> 2 | uStack_d8 << 0x3e);
              uStack_d8 = uStack_d8 >> 2;
            } while (bVar5);
            uStack_200 = uVar16 * 0x1000000 | (ulonglong)puVar13 >> 0x28;
            puVar17 = (undefined *)((longlong)puVar13 * 0x1000000);
            goto LAB_ram_00019588;
          }
          puVar17 = (undefined *)0x0;
          uStack_200 = 0;
LAB_ram_000195a0:
          if (-1 < (longlong)puStack_1d0) {
            if (puStack_1c0 == (undefined *)0x0 && puStack_1d0 == (undefined *)0x0) {
              puStack_1c0 = (undefined *)0x0;
              puStack_1d0 = (undefined *)0x0;
            }
            else {
              if (puStack_1d0 == (undefined *)0x0) {
                uVar19 = (ulonglong)puStack_1c0 | (ulonglong)puStack_1c0 >> 1;
                uVar19 = uVar19 | uVar19 >> 2;
                uVar19 = uVar19 | uVar19 >> 4;
                uVar19 = uVar19 | uVar19 >> 8;
                uVar19 = uVar19 | uVar19 >> 0x10;
                uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
                uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar19 = ((uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                         + 0x40;
              }
              else {
                uVar19 = (ulonglong)puStack_1d0 | (ulonglong)puStack_1d0 >> 1;
                uVar19 = uVar19 | uVar19 >> 2;
                uVar19 = uVar19 | uVar19 >> 4;
                uVar19 = uVar19 | uVar19 >> 8;
                uVar19 = uVar19 | uVar19 >> 0x10;
                uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
                uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
                uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
                uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              }
              puVar13 = (undefined *)0x0;
              fn_30108(&puStack_170,1,0,(uVar19 ^ 0xffffffffffffffff) & 0x7e);
              uVar19 = 0;
              do {
                puVar2 = puStack_170 + (longlong)puVar13;
                puVar4 = (undefined *)(uStack_168 + uVar19 + (ulonglong)(puVar2 < puStack_170));
                bVar5 = true;
                if (puStack_1d0 < puVar4) {
                  if (puStack_1c0 < puVar2) goto LAB_ram_00019e20;
LAB_ram_00019f58:
                  bVar8 = false;
                  if (puStack_1d0 != puVar4) goto LAB_ram_00019f70;
LAB_ram_00019e30:
                  if (bVar8) goto LAB_ram_00019e60;
LAB_ram_00019fb8:
                  bVar5 = false;
                  uVar15 = uStack_168;
                }
                else {
                  bVar5 = false;
                  if (puVar2 <= puStack_1c0) goto LAB_ram_00019f58;
LAB_ram_00019e20:
                  bVar8 = true;
                  if (puStack_1d0 == puVar4) goto LAB_ram_00019e30;
LAB_ram_00019f70:
                  if (!bVar5) goto LAB_ram_00019fb8;
LAB_ram_00019e60:
                  bVar5 = true;
                  puVar4 = (undefined *)0x0;
                  uVar15 = 0;
                  puVar2 = (undefined *)0x0;
                }
                puVar18 = (undefined *)0x0;
                if (!bVar5) {
                  puVar18 = puStack_170;
                }
                puVar13 = puVar18 + ((ulonglong)puVar13 >> 1 | uVar19 << 0x3f);
                lVar9 = 1;
                if (puVar13 < puVar18) {
                  if (puStack_1c0 < puVar2) goto LAB_ram_00019ed8;
LAB_ram_00019ff8:
                  lVar22 = 0;
                  if (puStack_170 < (undefined *)0x4) goto LAB_ram_0001a010;
LAB_ram_00019ee8:
                  bVar5 = true;
                }
                else {
                  lVar9 = 0;
                  if (puVar2 <= puStack_1c0) goto LAB_ram_00019ff8;
LAB_ram_00019ed8:
                  lVar22 = 1;
                  if ((undefined *)0x3 < puStack_170) goto LAB_ram_00019ee8;
LAB_ram_0001a010:
                  bVar5 = false;
                }
                if (uStack_168 != 0) {
                  bVar5 = uStack_168 != 0;
                }
                puStack_1d0 = puStack_1d0 + (-(longlong)puVar4 - lVar22);
                uVar19 = uVar15 + (uVar19 >> 1) + lVar9;
                puStack_1c0 = puStack_1c0 + -(longlong)puVar2;
                puStack_170 = (undefined *)((ulonglong)puStack_170 >> 2 | uStack_168 << 0x3e);
                uStack_168 = uStack_168 >> 2;
              } while (bVar5);
              puStack_1d0 = (undefined *)(uVar19 * 0x1000000 | (ulonglong)puVar13 >> 0x28);
              puStack_1c0 = (undefined *)((longlong)puVar13 * 0x1000000);
            }
            goto LAB_ram_0001a860;
          }
        }
LAB_ram_0001af30:
        fn_2deb8__custom_panic(&DAT_ram_00031b8f /* .rodata: hex: 66 69 78 65 64 20 70 6f 69 6e 74 20 73 71 75 61 */,0x2c,&DAT_ram_000324f8 /* .data.rel.ro: &str "src/lib.rs" (len=10) */);
LAB_ram_0001af60:
        puStack_50 = &DAT_ram_00032658 /* .data.rel.ro: &str "Invalid Exp value" (len=17) */;
        uStack_30 = 0;
        puStack_48 = (undefined *)0x1;
        uStack_38 = 0;
        uStack_40 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_50,&DAT_ram_00032668 /* .data.rel.ro: &str "contract/src/ops.rs" (len=19) */);
      }
      uStack_200 = uVar19;
    }
    else {
      uVar16 = (longlong)puVar17 >> 0x3f;
      if (bVar1 == 2) {
        if ((longlong)uVar19 < 0) goto LAB_ram_0001af30;
        if (puVar17 == (undefined *)0x0 && uVar19 == 0) {
          lVar9 = 0;
          uVar21 = 0;
        }
        else {
          if (uVar19 == 0) {
            uVar21 = (ulonglong)puVar17 | (ulonglong)puVar17 >> 1;
            uVar21 = uVar21 | uVar21 >> 2;
            uVar21 = uVar21 | uVar21 >> 4;
            uVar21 = uVar21 | uVar21 >> 8;
            uVar21 = uVar21 | uVar21 >> 0x10;
            uVar21 = (uVar21 | uVar21 >> 0x20) ^ 0xffffffffffffffff;
            uVar21 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = ((uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                     0x40;
          }
          else {
            uVar21 = uVar19 | uVar19 >> 1;
            uVar21 = uVar21 | uVar21 >> 2;
            uVar21 = uVar21 | uVar21 >> 4;
            uVar21 = uVar21 | uVar21 >> 8;
            uVar21 = uVar21 | uVar21 >> 0x10;
            uVar21 = (uVar21 | uVar21 >> 0x20) ^ 0xffffffffffffffff;
            uVar21 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          }
          puVar13 = (undefined *)0x0;
          fn_30108(&puStack_90,1,0,(uVar21 ^ 0xffffffffffffffff) & 0x7e);
          uVar12 = 0;
          puStack_1d8 = puVar17;
          uVar21 = uVar19;
          do {
            puVar2 = puStack_90 + (longlong)puVar13;
            uVar3 = uStack_88 + uVar12 + (ulonglong)(puVar2 < puStack_90);
            bVar5 = true;
            if (uVar21 < uVar3) {
              if (puStack_1d8 < puVar2) goto LAB_ram_00018fc8;
LAB_ram_000190f8:
              bVar8 = false;
              if (uVar21 != uVar3) goto LAB_ram_00019108;
LAB_ram_00018fd0:
              if (bVar8) goto LAB_ram_00019000;
LAB_ram_00019150:
              bVar5 = false;
              uVar14 = uStack_88;
            }
            else {
              bVar5 = false;
              if (puVar2 <= puStack_1d8) goto LAB_ram_000190f8;
LAB_ram_00018fc8:
              bVar8 = true;
              if (uVar21 == uVar3) goto LAB_ram_00018fd0;
LAB_ram_00019108:
              if (!bVar5) goto LAB_ram_00019150;
LAB_ram_00019000:
              bVar5 = true;
              uVar14 = 0;
              uVar3 = 0;
              puVar2 = (undefined *)0x0;
            }
            puVar4 = (undefined *)0x0;
            if (!bVar5) {
              puVar4 = puStack_90;
            }
            puVar13 = puVar4 + ((ulonglong)puVar13 >> 1 | uVar12 << 0x3f);
            if (puVar13 < puVar4) {
              uStack_200 = 1;
              if (puStack_1d8 < puVar2) goto LAB_ram_00019088;
LAB_ram_000191a0:
              lVar9 = 0;
              if (puStack_90 < (undefined *)0x4) goto LAB_ram_000191b8;
LAB_ram_00019098:
              bVar5 = true;
              if (uStack_88 != 0) goto LAB_ram_000190b0;
LAB_ram_000191d8:
              bVar8 = false;
            }
            else {
              uStack_200 = 0;
              if (puVar2 <= puStack_1d8) goto LAB_ram_000191a0;
LAB_ram_00019088:
              lVar9 = 1;
              if ((undefined *)0x3 < puStack_90) goto LAB_ram_00019098;
LAB_ram_000191b8:
              bVar5 = false;
              if (uStack_88 == 0) goto LAB_ram_000191d8;
LAB_ram_000190b0:
              bVar8 = true;
            }
            if (uStack_88 != 0) {
              bVar5 = bVar8;
            }
            uVar21 = (uVar21 - uVar3) - lVar9;
            uVar12 = uVar14 + (uVar12 >> 1) + uStack_200;
            puStack_1d8 = puStack_1d8 + -(longlong)puVar2;
            puStack_90 = (undefined *)((ulonglong)puStack_90 >> 2 | uStack_88 << 0x3e);
            uStack_88 = uStack_88 >> 2;
          } while (bVar5);
          uVar21 = uVar12 * 0x1000000 | (ulonglong)puVar13 >> 0x28;
          lVar9 = (longlong)puVar13 * 0x1000000;
        }
        fn_30150(&uStack_d0,uVar19,0);
        fn_30150(&uStack_c0,lVar9,0,puVar17,0);
        fn_30150(&uStack_a0,uVar21,(longlong)uVar21 >> 0x3f,puVar17,uVar16);
        fn_30150(&lStack_b0,uVar21,(longlong)uVar21 >> 0x3f,uVar19,0);
        uVar12 = uStack_a0 + uStack_d0 + lStack_b8;
        lVar22 = lStack_98 + (uVar16 & uVar21) + (ulonglong)(uVar12 < uStack_a0);
        uVar19 = lStack_c8 + (uVar19 & lVar9 >> 0x3f & 0x7fffffffffffffff) +
                 (ulonglong)(uStack_d0 + lStack_b8 < uStack_d0);
        uVar16 = uVar19 + lStack_b0;
        uVar21 = uVar16 + lVar22;
        lVar9 = ((longlong)uVar19 >> 0x3f) + lStack_a8 + (ulonglong)(uVar16 < uVar19) +
                (lVar22 >> 0x3f) + (ulonglong)(uVar21 < uVar16);
        uVar19 = (longlong)(uVar21 * 0x10000) >> 0x3f;
        if ((uVar21 >> 0x30 | lVar9 * 0x10000) != uVar19 || lVar9 >> 0x30 != uVar19)
        goto LAB_ram_0001afd8;
        uStack_200 = uVar21 * 0x10000 | uVar12 >> 0x30;
        puVar17 = (undefined *)(uVar12 * 0x10000 | uStack_c0 >> 0x30);
LAB_ram_00019588:
        if (bVar1 < 2) {
          if (bVar1 == 0) goto LAB_ram_000195a0;
          goto LAB_ram_0001a860;
        }
        puStack_1d8 = puVar17;
        if (bVar1 != 2) goto LAB_ram_00019910;
        if ((longlong)puStack_1d0 < 0) goto LAB_ram_0001af30;
        if (puStack_1c0 == (undefined *)0x0 && puStack_1d0 == (undefined *)0x0) {
          lVar9 = 0;
          uVar19 = 0;
        }
        else {
          if (puStack_1d0 == (undefined *)0x0) {
            uVar19 = (ulonglong)puStack_1c0 | (ulonglong)puStack_1c0 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
            uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
            uVar19 = ((uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                     0x40;
          }
          else {
            uVar19 = (ulonglong)puStack_1d0 | (ulonglong)puStack_1d0 >> 1;
            uVar19 = uVar19 | uVar19 >> 2;
            uVar19 = uVar19 | uVar19 >> 4;
            uVar19 = uVar19 | uVar19 >> 8;
            uVar19 = uVar19 | uVar19 >> 0x10;
            uVar19 = (uVar19 | uVar19 >> 0x20) ^ 0xffffffffffffffff;
            uVar19 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
            uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
            uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          }
          puVar2 = (undefined *)0x0;
          fn_30108(&puStack_120,1,0,(uVar19 ^ 0xffffffffffffffff) & 0x7e);
          uVar19 = 0;
          puVar17 = puStack_1c0;
          puVar13 = puStack_1d0;
          do {
            puVar4 = puStack_120 + (longlong)puVar2;
            puStack_1b8 = (undefined *)(uStack_118 + uVar19 + (ulonglong)(puVar4 < puStack_120));
            bVar5 = true;
            if (puVar13 < puStack_1b8) {
              if (puVar17 < puVar4) goto LAB_ram_0001a2d8;
LAB_ram_0001a418:
              bVar8 = false;
              if (puVar13 != puStack_1b8) goto LAB_ram_0001a428;
LAB_ram_0001a2e0:
              if (bVar8) goto LAB_ram_0001a328;
LAB_ram_0001a488:
              bVar5 = false;
              uVar16 = uStack_118;
            }
            else {
              bVar5 = false;
              if (puVar4 <= puVar17) goto LAB_ram_0001a418;
LAB_ram_0001a2d8:
              bVar8 = true;
              if (puVar13 == puStack_1b8) goto LAB_ram_0001a2e0;
LAB_ram_0001a428:
              if (!bVar5) goto LAB_ram_0001a488;
LAB_ram_0001a328:
              puStack_1b8 = (undefined *)0x0;
              bVar5 = true;
              uVar16 = 0;
              puVar4 = (undefined *)0x0;
            }
            puVar18 = (undefined *)0x0;
            if (!bVar5) {
              puVar18 = puStack_120;
            }
            puVar2 = puVar18 + ((ulonglong)puVar2 >> 1 | uVar19 << 0x3f);
            if (puVar2 < puVar18) {
              lStack_1f8 = 1;
              if (puVar17 < puVar4) goto LAB_ram_0001a3a0;
LAB_ram_0001a4c8:
              lVar9 = 0;
              if (puStack_120 < (undefined *)0x4) goto LAB_ram_0001a4e0;
LAB_ram_0001a3b0:
              bVar5 = true;
            }
            else {
              lStack_1f8 = 0;
              if (puVar4 <= puVar17) goto LAB_ram_0001a4c8;
LAB_ram_0001a3a0:
              lVar9 = 1;
              if ((undefined *)0x3 < puStack_120) goto LAB_ram_0001a3b0;
LAB_ram_0001a4e0:
              bVar5 = false;
            }
            if (uStack_118 != 0) {
              bVar5 = uStack_118 != 0;
            }
            puVar13 = puVar13 + (-(longlong)puStack_1b8 - lVar9);
            uVar19 = uVar16 + (uVar19 >> 1) + lStack_1f8;
            puVar17 = puVar17 + -(longlong)puVar4;
            puStack_120 = (undefined *)((ulonglong)puStack_120 >> 2 | uStack_118 << 0x3e);
            uStack_118 = uStack_118 >> 2;
          } while (bVar5);
          uVar19 = uVar19 * 0x1000000 | (ulonglong)puVar2 >> 0x28;
          lVar9 = (longlong)puVar2 * 0x1000000;
        }
        fn_30150(&uStack_160,puStack_1d0,0,lVar9);
        fn_30150(&uStack_150,lVar9,0,puStack_1c0,0);
        fn_30150(&uStack_130,uVar19,(longlong)uVar19 >> 0x3f,puStack_1c0,uVar15);
        fn_30150(&lStack_140,uVar19,(longlong)uVar19 >> 0x3f,puStack_1d0,0);
        uVar21 = uStack_130 + uStack_160 + lStack_148;
        lVar22 = lStack_128 + (uVar15 & uVar19) + (ulonglong)(uVar21 < uStack_130);
        uVar16 = lStack_158 + ((ulonglong)puStack_1d0 & lVar9 >> 0x3f & 0x7fffffffffffffff) +
                 (ulonglong)(uStack_160 + lStack_148 < uStack_160);
        uVar19 = uVar16 + lStack_140;
        uVar15 = uVar19 + lVar22;
        lVar9 = ((longlong)uVar16 >> 0x3f) + lStack_138 + (ulonglong)(uVar19 < uVar16) +
                (lVar22 >> 0x3f) + (ulonglong)(uVar15 < uVar19);
        uVar19 = (longlong)(uVar15 * 0x10000) >> 0x3f;
        if ((uVar15 >> 0x30 | lVar9 * 0x10000) != uVar19 || lVar9 >> 0x30 != uVar19) {
LAB_ram_0001afd8:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032680 /* .data.rel.ro: &str "contract/src/ops.rs" (len=19) */);
        }
        puStack_1d0 = (undefined *)(uVar15 * 0x10000 | uVar21 >> 0x30);
      }
      else {
        lVar9 = (longlong)uVar19 >> 0x3f;
        fn_30150(&uStack_80,uVar19,lVar9,puVar17,uVar16);
        fn_30150(&uStack_70,puVar17,0,puVar17,0);
        fn_30150(&lStack_60,uVar19,lVar9,uVar19,lVar9);
        uVar21 = uStack_80 + lStack_68;
        lStack_78 = lStack_78 + (uVar16 & uVar19);
        uVar19 = uVar21 + uStack_80;
        lVar9 = lStack_78 + (ulonglong)(uVar19 < uVar21);
        uVar21 = lStack_78 + (ulonglong)(uVar21 < uStack_80);
        uVar12 = uVar21 + lStack_60;
        uVar16 = uVar12 + lVar9;
        lVar9 = ((longlong)uVar21 >> 0x3f) + lStack_58 + (ulonglong)(uVar12 < uVar21) +
                (lVar9 >> 0x3f) + (ulonglong)(uVar16 < uVar12);
        uVar21 = (longlong)(uVar16 * 0x10000) >> 0x3f;
        if ((uVar16 >> 0x30 | lVar9 * 0x10000) != uVar21 || lVar9 >> 0x30 != uVar21)
        goto LAB_ram_0001afc0;
        uStack_200 = uVar16 * 0x10000 | uVar19 >> 0x30;
        puStack_1d8 = (undefined *)(uVar19 * 0x10000 | uStack_70 >> 0x30);
LAB_ram_00019910:
        lVar9 = (longlong)puStack_1d0 >> 0x3f;
        fn_30150(&uStack_110,puStack_1d0,lVar9,puStack_1c0,uVar15);
        fn_30150(&uStack_100,puStack_1c0,0,puStack_1c0,0);
        fn_30150(&lStack_f0,puStack_1d0,lVar9,puStack_1d0,lVar9);
        uVar19 = uStack_110 + lStack_f8;
        lStack_108 = lStack_108 + (uVar15 & (ulonglong)puStack_1d0);
        uVar21 = uVar19 + uStack_110;
        lVar9 = lStack_108 + (ulonglong)(uVar21 < uVar19);
        uVar16 = lStack_108 + (ulonglong)(uVar19 < uStack_110);
        uVar19 = uVar16 + lStack_f0;
        uVar15 = uVar19 + lVar9;
        lVar9 = ((longlong)uVar16 >> 0x3f) + lStack_e8 + (ulonglong)(uVar19 < uVar16) +
                (lVar9 >> 0x3f) + (ulonglong)(uVar15 < uVar19);
        uVar19 = (longlong)(uVar15 * 0x10000) >> 0x3f;
        if ((uVar15 >> 0x30 | lVar9 * 0x10000) != uVar19 || lVar9 >> 0x30 != uVar19) {
LAB_ram_0001afc0:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032698 /* .data.rel.ro: &str "contract/src/ops.rs" (len=19) */);
        }
        puStack_1d0 = (undefined *)(uVar15 * 0x10000 | uVar21 >> 0x30);
        uStack_150 = uStack_100;
      }
      puStack_1c0 = (undefined *)(uVar21 * 0x10000 | uStack_150 >> 0x30);
      puVar17 = puStack_1d8;
    }
LAB_ram_0001a860:
    puVar13 = puStack_1d0 + (-(ulonglong)(puStack_1c0 < puVar17) - uStack_200);
    uVar6 = 0xf1;
    if ((-1 < (longlong)
              (((ulonglong)puStack_1d0 ^ uStack_200) & ((ulonglong)puStack_1d0 ^ (ulonglong)puVar13)
              )) && (uVar6 = 0xf4, puVar20 != (undefined *)0x0 || puVar10 != (undefined *)0x0)) {
      lStack_20 = (longlong)puStack_1c0 - (longlong)puVar17;
      lVar9 = -lStack_20;
      if ((longlong)puVar13 < 0) {
        bVar5 = lStack_20 != 0;
        lStack_20 = lVar9;
        if (bVar5) goto LAB_ram_0001a920;
LAB_ram_0001aa20:
        lVar9 = 0;
        if ((longlong)puVar13 < 0) goto LAB_ram_0001aa38;
LAB_ram_0001a930:
        puStack_18 = puVar13;
        if (puVar20 != (undefined *)0x0) goto LAB_ram_0001a948;
LAB_ram_0001aa60:
        lVar9 = 0;
      }
      else {
        if (lStack_20 == 0) goto LAB_ram_0001aa20;
LAB_ram_0001a920:
        lVar9 = 1;
        if (-1 < (longlong)puVar13) goto LAB_ram_0001a930;
LAB_ram_0001aa38:
        puStack_18 = (undefined *)-(longlong)(puVar13 + lVar9);
        if (puVar20 == (undefined *)0x0) goto LAB_ram_0001aa60;
LAB_ram_0001a948:
        lVar9 = 1;
      }
      puStack_8 = puVar10;
      puStack_10 = puVar20;
      if ((longlong)puVar10 < 0) {
        puStack_10 = (undefined *)-(longlong)puVar20;
        puStack_8 = (undefined *)-(longlong)(puVar10 + lVar9);
      }
      fn_1178(&puStack_50,&lStack_20,&puStack_10,0x30);
      if ((char)uStack_40 == '\0') {
        if ((longlong)((ulonglong)puVar13 ^ (ulonglong)puVar10) < 0) {
          bVar8 = true;
          bVar5 = true;
          if (puStack_50 == (undefined *)0x0) {
            bVar5 = false;
            if (puStack_48 < (undefined *)0x8000000000000001) goto LAB_ram_0001ab48;
LAB_ram_0001ab08:
            if (puStack_48 == (undefined *)0x8000000000000000) goto LAB_ram_0001ab10;
LAB_ram_0001ab58:
            if (bVar8) goto LAB_ram_0001a9e0;
          }
          else {
            if ((undefined *)0x8000000000000000 < puStack_48) goto LAB_ram_0001ab08;
LAB_ram_0001ab48:
            bVar8 = false;
            if (puStack_48 != (undefined *)0x8000000000000000) goto LAB_ram_0001ab58;
LAB_ram_0001ab10:
            if (bVar5) goto LAB_ram_0001a9e0;
          }
          puVar17 = (undefined *)-(longlong)puStack_50;
          puVar20 = (undefined *)((ulonglong)puStack_48 ^ 0xffffffffffffffff);
          if (puVar17 == (undefined *)0x0) {
            puVar20 = (undefined *)-(longlong)puStack_48;
          }
        }
        else {
          puVar20 = puStack_48;
          puVar17 = puStack_50;
          if ((longlong)puStack_48 < 0) goto LAB_ram_0001a9e0;
        }
        uVar15 = plVar11[1];
        fn_30150(&uStack_1b0,uVar15,(longlong)uVar15 >> 0x3f,puVar17);
        lVar9 = *plVar11;
        fn_30150(&uStack_1a0,lVar9,0,puVar17,0);
        fn_30150(&uStack_180,puVar20,(longlong)puVar20 >> 0x3f,lVar9,lVar9 >> 0x3f);
        fn_30150(&lStack_190,uVar15,(longlong)uVar15 >> 0x3f,puVar20,
                         (longlong)puVar20 >> 0x3f);
        uVar19 = uStack_180 + uStack_1b0 + lStack_198;
        lVar9 = lStack_178 + (lVar9 >> 0x3f & (ulonglong)puVar20) + (ulonglong)(uVar19 < uStack_180)
        ;
        uVar16 = lStack_1a8 + ((longlong)puVar17 >> 0x3f & uVar15) +
                 (ulonglong)(uStack_1b0 + lStack_198 < uStack_1b0);
        uVar21 = uVar16 + lStack_190;
        uVar15 = uVar21 + lVar9;
        lVar9 = ((longlong)uVar16 >> 0x3f) + lStack_188 + (ulonglong)(uVar21 < uVar16) +
                (lVar9 >> 0x3f) + (ulonglong)(uVar15 < uVar21);
        uVar16 = (longlong)(uVar15 * 0x10000) >> 0x3f;
        if ((uVar15 >> 0x30 | lVar9 * 0x10000) == uVar16 && lVar9 >> 0x30 == uVar16) {
          *(ulonglong *)(param_1 + 2) = uVar19 * 0x10000 | uStack_1a0 >> 0x30;
          *(ulonglong *)(param_1 + 4) = uVar15 * 0x10000 | uVar19 >> 0x30;
          uVar6 = 0;
          goto LAB_ram_00018098;
        }
        uVar7 = 0xf800000000;
        goto LAB_ram_00018088;
      }
    }
LAB_ram_0001a9e0:
    param_1[2] = uVar6;
    param_1[1] = 0;
  }
  else {
    uVar7 = 0x8800000000;
LAB_ram_00018088:
    *(undefined8 *)(param_1 + 1) = uVar7;
  }
  uVar6 = 1;
LAB_ram_00018098:
  *param_1 = uVar6;
  return;
}


/* ---- fn_1aed0 @ 0x1aff0 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_1aed0(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lStack_180;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  undefined *puStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lStack_40 = param_2 << 0x30;
  uStack_38 = ((longlong)param_2 >> 0x3f) << 0x30 | param_2 >> 0x10;
  fn_15e8__sol_log(&puStack_30,&lStack_40);
  if (puStack_30 == (undefined *)0x0) {
    uVar8 = 0x8800000000;
  }
  else {
    uStack_170 = (uStack_20 - param_5[3]) - (ulonglong)(uStack_28 < (ulonglong)param_5[2]);
    if ((longlong)((uStack_20 ^ param_5[3]) & (uStack_20 ^ uStack_170)) < 0) {
      uVar8 = 0x10800000000;
    }
    else if ((longlong)uStack_170 < 0) {
      uVar8 = 0x10c00000000;
    }
    else {
      bVar1 = *(byte *)(param_5 + 8);
      if (3 < bVar1) {
        puStack_30 = &DAT_ram_00032658 /* .data.rel.ro: &str "Invalid Exp value" (len=17) */;
        uStack_10 = 0;
        uStack_28 = 1;
        uStack_18 = 0;
        uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_30,&DAT_ram_00032668 /* .data.rel.ro: &str "contract/src/ops.rs" (len=19) */);
      }
      uStack_168 = uStack_28 - param_5[2];
      uVar9 = param_5[1];
      lVar15 = *param_5;
      uVar14 = lVar15 >> 0x3f;
      uVar12 = (longlong)uStack_168 >> 0x3f;
      lVar10 = (longlong)uVar9 >> 0x3f;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (uStack_168 == 0 && uStack_170 == 0) {
            lVar16 = 0;
            uVar12 = 0;
          }
          else {
            if (uStack_170 == 0) {
              uVar12 = uStack_168 | uStack_168 >> 1;
              uVar12 = uVar12 | uVar12 >> 2;
              uVar12 = uVar12 | uVar12 >> 4;
              uVar12 = uVar12 | uVar12 >> 8;
              uVar12 = uVar12 | uVar12 >> 0x10;
              uVar12 = (uVar12 | uVar12 >> 0x20) ^ 0xffffffffffffffff;
              uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
              uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
              uVar12 = ((uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                       0x40;
            }
            else {
              uVar12 = uStack_170 | uStack_170 >> 1;
              uVar12 = uVar12 | uVar12 >> 2;
              uVar12 = uVar12 | uVar12 >> 4;
              uVar12 = uVar12 | uVar12 >> 8;
              uVar12 = uVar12 | uVar12 >> 0x10;
              uVar12 = (uVar12 | uVar12 >> 0x20) ^ 0xffffffffffffffff;
              uVar12 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
              uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
              uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            }
            uVar13 = 0;
            fn_30108(&uStack_120,1,0,(uVar12 ^ 0xffffffffffffffff) & 0x7e);
            uVar12 = 0;
            do {
              uVar5 = uStack_120 + uVar13;
              uVar11 = uStack_118 + uVar12 + (ulonglong)(uVar5 < uStack_120);
              bVar4 = true;
              if (uStack_170 < uVar11) {
                if (uStack_168 < uVar5) goto LAB_ram_0001c0c0;
LAB_ram_0001c208:
                bVar2 = false;
                if (uStack_170 != uVar11) goto LAB_ram_0001c218;
LAB_ram_0001c0c8:
                if (bVar2) goto LAB_ram_0001c0f8;
LAB_ram_0001c260:
                bVar4 = false;
                uVar3 = uStack_118;
              }
              else {
                bVar4 = false;
                if (uVar5 <= uStack_168) goto LAB_ram_0001c208;
LAB_ram_0001c0c0:
                bVar2 = true;
                if (uStack_170 == uVar11) goto LAB_ram_0001c0c8;
LAB_ram_0001c218:
                if (!bVar4) goto LAB_ram_0001c260;
LAB_ram_0001c0f8:
                bVar4 = true;
                uVar11 = 0;
                uVar5 = 0;
                uVar3 = 0;
              }
              uVar6 = 0;
              if (!bVar4) {
                uVar6 = uStack_120;
              }
              uVar13 = uVar6 + (uVar13 >> 1 | uVar12 << 0x3f);
              if (uVar13 < uVar6) {
                lStack_180 = 1;
                if (uStack_168 < uVar5) goto LAB_ram_0001c178;
LAB_ram_0001c2b0:
                lVar16 = 0;
                if (uStack_120 < 4) goto LAB_ram_0001c2c8;
LAB_ram_0001c188:
                bVar4 = true;
              }
              else {
                lStack_180 = 0;
                if (uVar5 <= uStack_168) goto LAB_ram_0001c2b0;
LAB_ram_0001c178:
                lVar16 = 1;
                if (3 < uStack_120) goto LAB_ram_0001c188;
LAB_ram_0001c2c8:
                bVar4 = false;
              }
              if (uStack_118 != 0) {
                bVar4 = uStack_118 != 0;
              }
              uStack_170 = (uStack_170 - uVar11) - lVar16;
              uVar12 = uVar3 + (uVar12 >> 1) + lStack_180;
              uStack_168 = uStack_168 - uVar5;
              uStack_120 = uStack_120 >> 2 | uStack_118 << 0x3e;
              uStack_118 = uStack_118 >> 2;
            } while (bVar4);
            uVar12 = uVar12 * 0x1000000 | uVar13 >> 0x28;
            lVar16 = uVar13 * 0x1000000;
          }
          fn_30150(&uStack_160,uVar9,lVar10,lVar16);
          fn_30150(&uStack_150,lVar16,0,lVar15,0);
          fn_30150(&uStack_130,uVar12,(longlong)uVar12 >> 0x3f,lVar15,uVar14);
          fn_30150(&lStack_140,uVar12,(longlong)uVar12 >> 0x3f,uVar9,lVar10);
          uVar13 = uStack_130 + uStack_160 + lStack_148;
          lVar10 = lStack_128 + (uVar14 & uVar12) + (ulonglong)(uVar13 < uStack_130);
          uVar12 = lStack_158 + (lVar16 >> 0x3f & uVar9) +
                   (ulonglong)(uStack_160 + lStack_148 < uStack_160);
          uVar14 = uVar12 + lStack_140;
          uVar9 = uVar14 + lVar10;
          lVar10 = ((longlong)uVar12 >> 0x3f) + lStack_138 + (ulonglong)(uVar14 < uVar12) +
                   (lVar10 >> 0x3f) + (ulonglong)(uVar9 < uVar14);
          uVar12 = (longlong)(uVar9 * 0x10000) >> 0x3f;
          if ((uVar9 >> 0x30 | lVar10 * 0x10000) == uVar12 && lVar10 >> 0x30 == uVar12) {
            uStack_20 = uVar9 * 0x10000 | uVar13 >> 0x30;
LAB_ram_0001c628:
            uStack_28 = param_5[4] + (uVar13 * 0x10000 | uStack_150 >> 0x30);
            bVar4 = uStack_28 < (ulonglong)param_5[4];
            lVar10 = param_5[5];
LAB_ram_0001c678:
            uVar7 = 0;
            *(ulonglong *)(param_1 + 2) = uStack_28;
            *(ulonglong *)(param_1 + 4) = lVar10 + uStack_20 + (ulonglong)bVar4;
            goto LAB_ram_0001b138;
          }
          uVar8 = 0x11300000000;
        }
        else {
          fn_30150(&uStack_110,uVar9,lVar10,uStack_168);
          fn_30150(&uStack_100,lVar15,0,uStack_168,0);
          fn_30150(&uStack_e0,uStack_170,0,lVar15,uVar14);
          fn_30150(&lStack_f0,uVar9,lVar10,uStack_170,0);
          uVar13 = uStack_e0 + uStack_110 + lStack_f8;
          lVar10 = lStack_d8 + (uStack_170 & uVar14 & 0x7fffffffffffffff) +
                   (ulonglong)(uVar13 < uStack_e0);
          uVar12 = lStack_108 + (uVar12 & uVar9) + (ulonglong)(uStack_110 + lStack_f8 < uStack_110);
          uVar14 = uVar12 + lStack_f0;
          uVar9 = uVar14 + lVar10;
          lVar10 = ((longlong)uVar12 >> 0x3f) + lStack_e8 + (ulonglong)(uVar14 < uVar12) +
                   (lVar10 >> 0x3f) + (ulonglong)(uVar9 < uVar14);
          uVar12 = (longlong)(uVar9 * 0x10000) >> 0x3f;
          if ((uVar9 >> 0x30 | lVar10 * 0x10000) == uVar12 && lVar10 >> 0x30 == uVar12) {
            uStack_20 = uVar9 * 0x10000 | uVar13 >> 0x30;
            uStack_150 = uStack_100;
            goto LAB_ram_0001c628;
          }
          uVar8 = 0x11800000000;
        }
      }
      else if (bVar1 == 2) {
        fn_30150(&uStack_c0,uVar9,lVar10,uStack_168);
        fn_30150(&uStack_b0,lVar15,0,uStack_168,0);
        fn_30150(&uStack_90,uStack_170,0,lVar15,uVar14);
        fn_30150(&lStack_a0,uVar9,lVar10,uStack_170,0);
        uVar13 = uStack_90 + uStack_c0 + lStack_a8;
        lVar10 = lStack_88 + (uStack_170 & uVar14 & 0x7fffffffffffffff) +
                 (ulonglong)(uVar13 < uStack_90);
        uVar9 = lStack_b8 + (uVar12 & uVar9) + (ulonglong)(uStack_c0 + lStack_a8 < uStack_c0);
        uVar12 = uVar9 + lStack_a0;
        uVar14 = uVar12 + lVar10;
        lVar10 = ((longlong)uVar9 >> 0x3f) + lStack_98 + (ulonglong)(uVar12 < uVar9) +
                 (lVar10 >> 0x3f) + (ulonglong)(uVar14 < uVar12);
        uVar9 = (longlong)(uVar14 * 0x10000) >> 0x3f;
        if ((uVar14 >> 0x30 | lVar10 * 0x10000) == uVar9 && lVar10 >> 0x30 == uVar9) {
          fn_0888__custom_panic(&uStack_d0,uStack_168,uStack_170);
          fn_0488(&puStack_30,uVar13 * 0x10000 | uStack_b0 >> 0x30,
                           uVar14 * 0x10000 | uVar13 >> 0x30,uStack_d0,uStack_c8);
          if (puStack_30 != (undefined *)0x0) {
LAB_ram_0001bda0:
            uStack_28 = param_5[4] + uStack_28;
            bVar4 = uStack_28 < (ulonglong)param_5[4];
            lVar10 = param_5[5];
            goto LAB_ram_0001c678;
          }
          uVar8 = 0x12200000000;
        }
        else {
          uVar8 = 0x11e00000000;
        }
      }
      else {
        fn_30150(&uStack_80,uVar9,lVar10,uStack_168);
        fn_30150(&uStack_70,lVar15,0,uStack_168,0);
        fn_30150(&uStack_50,uStack_170,0,lVar15,uVar14);
        fn_30150(&lStack_60,uVar9,lVar10,uStack_170,0);
        uVar13 = uStack_50 + uStack_80 + lStack_68;
        lVar10 = lStack_48 + (uStack_170 & uVar14 & 0x7fffffffffffffff) +
                 (ulonglong)(uVar13 < uStack_50);
        uVar9 = lStack_78 + (uVar12 & uVar9) + (ulonglong)(uStack_80 + lStack_68 < uStack_80);
        uVar14 = uVar9 + lStack_60;
        uVar12 = uVar14 + lVar10;
        lVar10 = ((longlong)uVar9 >> 0x3f) + lStack_58 + (ulonglong)(uVar14 < uVar9) +
                 (lVar10 >> 0x3f) + (ulonglong)(uVar12 < uVar14);
        uVar9 = (longlong)(uVar12 * 0x10000) >> 0x3f;
        if ((uVar12 >> 0x30 | lVar10 * 0x10000) == uVar9 && lVar10 >> 0x30 == uVar9) {
          fn_0488(&puStack_30,uVar13 * 0x10000 | uStack_70 >> 0x30,
                           uVar12 * 0x10000 | uVar13 >> 0x30,uStack_168,uStack_170);
          if (puStack_30 != (undefined *)0x0) goto LAB_ram_0001bda0;
          uVar8 = 0x12c00000000;
        }
        else {
          uVar8 = 0x12900000000;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 1) = uVar8;
  uVar7 = 1;
LAB_ram_0001b138:
  *param_1 = uVar7;
  return;
}


/* ---- fn_1c610__sol_log @ 0x1c730 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_1c610__sol_log(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined4 uVar8;
  byte bVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  longlong lStack_8;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  fn_231b8(&iStack_18,&uStack_28);
  lVar15 = lStack_8;
  if (iStack_18 == 0) {
    uVar16 = *(undefined8 *)(param_5 + -0xff0);
    uVar22 = *(undefined8 *)(param_5 + -0xff8);
    uVar13 = *(undefined8 *)(param_5 + -0x1000);
    uVar2 = CONCAT44(uStack_c,uStack_10);
    fn_23b48(&iStack_18,&uStack_28);
    lVar17 = lStack_8;
    if (iStack_18 == 0) {
      uVar10 = CONCAT44(uStack_c,uStack_10);
      fn_1d720(&iStack_18,&uStack_28,param_4);
      lVar18 = lStack_8;
      if (iStack_18 == 0) {
        uVar3 = CONCAT44(uStack_c,uStack_10);
        fn_1f4f0(&iStack_18,&uStack_28,param_4);
        lVar19 = lStack_8;
        if (iStack_18 == 0) {
          uVar4 = CONCAT44(uStack_c,uStack_10);
          fn_20d70(&iStack_18,&uStack_28,param_4,uVar13,uVar22);
          lVar20 = lStack_8;
          if (iStack_18 == 0) {
            uVar5 = CONCAT44(uStack_c,uStack_10);
            fn_22288(&iStack_18,&uStack_28,param_4);
            lVar21 = lStack_8;
            if (iStack_18 == 0) {
              uVar6 = CONCAT44(uStack_c,uStack_10);
              fn_1f270(&iStack_18,&uStack_28);
              lVar14 = lStack_8;
              if (iStack_18 == 0) {
                uVar23 = CONCAT44(uStack_c,uStack_10);
                fn_256f0(&iStack_18,&uStack_28,uVar16);
                if (iStack_18 == 0) {
                  bVar12 = true;
                  if (lVar17 < lVar15) {
                    if (lVar15 == lVar17) goto LAB_ram_0001caf8;
LAB_ram_0001cd60:
                    if (!bVar12) goto LAB_ram_0001cd80;
LAB_ram_0001cb08:
                    uVar10 = uVar2;
                    lVar17 = lVar15;
                    if (lVar18 < lVar15) goto LAB_ram_0001cb18;
LAB_ram_0001cd98:
                    bVar12 = false;
                    if (uVar10 <= uVar3) goto LAB_ram_0001cdb8;
LAB_ram_0001cb30:
                    bVar11 = true;
                    if (lVar17 == lVar18) goto LAB_ram_0001cb38;
LAB_ram_0001cdc8:
                    if (!bVar12) goto LAB_ram_0001cde8;
LAB_ram_0001cb40:
                    lVar18 = lVar17;
                    uVar3 = uVar10;
                    if (lVar19 < lVar18) goto LAB_ram_0001cb58;
LAB_ram_0001ce00:
                    bVar12 = false;
                    if (uVar3 <= uVar4) goto LAB_ram_0001ce20;
LAB_ram_0001cb70:
                    bVar11 = true;
                    if (lVar18 == lVar19) goto LAB_ram_0001cb78;
LAB_ram_0001ce30:
                    if (!bVar12) goto LAB_ram_0001ce50;
LAB_ram_0001cb80:
                    lVar19 = lVar18;
                    uVar4 = uVar3;
                    if (lVar20 < lVar19) goto LAB_ram_0001cba0;
LAB_ram_0001ce70:
                    bVar12 = false;
                    if (uVar4 <= uVar5) goto LAB_ram_0001ce90;
LAB_ram_0001cbb8:
                    bVar11 = true;
                    if (lVar19 == lVar20) goto LAB_ram_0001cbc8;
LAB_ram_0001cea8:
                    if (!bVar12) goto LAB_ram_0001ced0;
LAB_ram_0001cbd0:
                    lVar20 = lVar19;
                    uVar5 = uVar4;
                    if (lVar21 < lVar20) goto LAB_ram_0001cbf0;
LAB_ram_0001cee8:
                    bVar12 = false;
                    if (uVar5 <= uVar6) goto LAB_ram_0001cf00;
LAB_ram_0001cc00:
                    bVar11 = true;
                    if (lVar20 == lVar21) goto LAB_ram_0001cc08;
LAB_ram_0001cf10:
                    if (!bVar12) goto LAB_ram_0001cf30;
LAB_ram_0001cc10:
                    lVar21 = lVar20;
                    uVar6 = uVar5;
                    if (lVar14 < lVar21) goto LAB_ram_0001cc28;
LAB_ram_0001cf48:
                    bVar12 = false;
                    if (uVar6 <= uVar23) goto LAB_ram_0001cf68;
LAB_ram_0001cc40:
                    bVar11 = true;
                    if (lVar21 == lVar14) goto LAB_ram_0001cc48;
LAB_ram_0001cf78:
                    if (!bVar12) goto LAB_ram_0001cf98;
LAB_ram_0001cc50:
                    lVar14 = lVar21;
                    uVar23 = uVar6;
                    if (lStack_8 < lVar14) goto LAB_ram_0001cc78;
LAB_ram_0001cfc0:
                    bVar12 = false;
                    if (uVar23 <= CONCAT44(uStack_c,uStack_10)) goto LAB_ram_0001cfe0;
LAB_ram_0001cc90:
                    bVar11 = true;
                    if (lVar14 == lStack_8) goto LAB_ram_0001cc98;
LAB_ram_0001cff0:
                    if (!bVar12) goto LAB_ram_0001cca0;
LAB_ram_0001cca0:
                    if (0xffffffffffff < uVar23) goto LAB_ram_0001ccc8;
LAB_ram_0001d038:
                    bVar12 = false;
                    if (lVar14 < 1) goto LAB_ram_0001d050;
LAB_ram_0001ccd8:
                    bVar11 = true;
                    if (lVar14 == 0) goto LAB_ram_0001cce0;
LAB_ram_0001d060:
                    if ((uVar23 & 0xffffffffffff) == 0) goto LAB_ram_0001d088;
LAB_ram_0001cd00:
                    bVar9 = 1;
                    if (uVar23 < 0x1000000000000) goto LAB_ram_0001cd18;
LAB_ram_0001d0a8:
                    bVar7 = 0;
                    if (lVar14 != 0) goto LAB_ram_0001d0b8;
LAB_ram_0001cd20:
                    if (!bVar11) goto LAB_ram_0001d0d8;
LAB_ram_0001d1b8:
                    fn_24768(&iStack_18,&uStack_28);
                    lVar15 = lStack_8;
                    if (iStack_18 == 0) {
                      uVar2 = CONCAT44(uStack_c,uStack_10);
                      fn_25288(&iStack_18,&uStack_28,param_4);
                      if (iStack_18 == 0) {
                        uVar10 = uVar2 + uVar23;
                        uVar23 = uVar10 + CONCAT44(uStack_c,uStack_10);
                        lVar14 = lVar15 + lVar14 + (ulonglong)(uVar10 < uVar2) + lStack_8 +
                                 (ulonglong)(uVar23 < uVar10);
                        goto LAB_ram_0001d2d8;
                      }
                    }
                  }
                  else {
                    bVar12 = false;
                    if (lVar15 != lVar17) goto LAB_ram_0001cd60;
LAB_ram_0001caf8:
                    if (uVar10 < uVar2) goto LAB_ram_0001cb08;
LAB_ram_0001cd80:
                    if (lVar17 <= lVar18) goto LAB_ram_0001cd98;
LAB_ram_0001cb18:
                    bVar12 = true;
                    if (uVar3 < uVar10) goto LAB_ram_0001cb30;
LAB_ram_0001cdb8:
                    bVar11 = false;
                    if (lVar17 != lVar18) goto LAB_ram_0001cdc8;
LAB_ram_0001cb38:
                    if (bVar11) goto LAB_ram_0001cb40;
LAB_ram_0001cde8:
                    if (lVar18 <= lVar19) goto LAB_ram_0001ce00;
LAB_ram_0001cb58:
                    bVar12 = true;
                    if (uVar4 < uVar3) goto LAB_ram_0001cb70;
LAB_ram_0001ce20:
                    bVar11 = false;
                    if (lVar18 != lVar19) goto LAB_ram_0001ce30;
LAB_ram_0001cb78:
                    if (bVar11) goto LAB_ram_0001cb80;
LAB_ram_0001ce50:
                    if (lVar19 <= lVar20) goto LAB_ram_0001ce70;
LAB_ram_0001cba0:
                    bVar12 = true;
                    if (uVar5 < uVar4) goto LAB_ram_0001cbb8;
LAB_ram_0001ce90:
                    bVar11 = false;
                    if (lVar19 != lVar20) goto LAB_ram_0001cea8;
LAB_ram_0001cbc8:
                    if (bVar11) goto LAB_ram_0001cbd0;
LAB_ram_0001ced0:
                    if (lVar20 <= lVar21) goto LAB_ram_0001cee8;
LAB_ram_0001cbf0:
                    bVar12 = true;
                    if (uVar6 < uVar5) goto LAB_ram_0001cc00;
LAB_ram_0001cf00:
                    bVar11 = false;
                    if (lVar20 != lVar21) goto LAB_ram_0001cf10;
LAB_ram_0001cc08:
                    if (bVar11) goto LAB_ram_0001cc10;
LAB_ram_0001cf30:
                    if (lVar21 <= lVar14) goto LAB_ram_0001cf48;
LAB_ram_0001cc28:
                    bVar12 = true;
                    if (uVar23 < uVar6) goto LAB_ram_0001cc40;
LAB_ram_0001cf68:
                    bVar11 = false;
                    if (lVar21 != lVar14) goto LAB_ram_0001cf78;
LAB_ram_0001cc48:
                    if (bVar11) goto LAB_ram_0001cc50;
LAB_ram_0001cf98:
                    if (lVar14 <= lStack_8) goto LAB_ram_0001cfc0;
LAB_ram_0001cc78:
                    bVar12 = true;
                    if (CONCAT44(uStack_c,uStack_10) < uVar23) goto LAB_ram_0001cc90;
LAB_ram_0001cfe0:
                    bVar11 = false;
                    if (lVar14 != lStack_8) goto LAB_ram_0001cff0;
LAB_ram_0001cc98:
                    if (bVar11) goto LAB_ram_0001cca0;
LAB_ram_0001cca0:
                    uVar23 = CONCAT44(uStack_c,uStack_10);
                    lVar14 = lStack_8;
                    if (uVar23 < 0x1000000000000) goto LAB_ram_0001d038;
LAB_ram_0001ccc8:
                    bVar12 = true;
                    if (0 < lVar14) goto LAB_ram_0001ccd8;
LAB_ram_0001d050:
                    bVar11 = false;
                    if (lVar14 != 0) goto LAB_ram_0001d060;
LAB_ram_0001cce0:
                    bVar11 = bVar12;
                    if ((uVar23 & 0xffffffffffff) != 0) goto LAB_ram_0001cd00;
LAB_ram_0001d088:
                    bVar9 = 0;
                    if (0xffffffffffff < uVar23) goto LAB_ram_0001d0a8;
LAB_ram_0001cd18:
                    bVar7 = 1;
                    if (lVar14 == 0) goto LAB_ram_0001cd20;
LAB_ram_0001d0b8:
                    bVar7 = 0;
                    if (bVar11) goto LAB_ram_0001d1b8;
LAB_ram_0001d0d8:
                    if ((bool)(bVar7 & bVar9)) goto LAB_ram_0001d1b8;
                    uVar2 = fn_1d4e0(&uStack_28,&DAT_ram_000319c0 /* .rodata: hex: 06 d3 ed c4 e5 73 ad af f3 e5 73 89 8b 54 5b 1e */);
                    uVar8 = (undefined4)(uVar2 >> 0x20);
                    if ((uVar2 & 0xffffffff) != 0x1a) goto LAB_ram_0001ca60;
                    if ((uVar2 >> 0x20 & 1) == 0) {
                      uVar2 = fn_1d4e0(&uStack_28,&DAT_ram_00031a60 /* .rodata: hex: 9f 32 da 9c 1f 6c 12 50 c0 9b 73 39 23 ec c3 67 */);
                      uVar8 = (undefined4)(uVar2 >> 0x20);
                      if ((uVar2 & 0xffffffff) != 0x1a) goto LAB_ram_0001ca60;
                      if ((uVar2 >> 0x20 & 1) != 0) goto LAB_ram_0001d158;
                    }
                    else {
LAB_ram_0001d158:
                      fn_07e8__custom_panic(&iStack_18,0x44c000000000000,0,0x3e8000000000000,0);
                      lVar14 = CONCAT44(uStack_c,uStack_10);
                      uVar23 = CONCAT44(uStack_14,iStack_18);
                    }
LAB_ram_0001d2d8:
                    fn_24c18(&iStack_18,&uStack_28);
                    lVar15 = lStack_8;
                    if (iStack_18 == 0) {
                      uVar2 = CONCAT44(uStack_c,uStack_10);
                      fn_250c8(&iStack_18,&uStack_28);
                      if (iStack_18 == 0) {
                        uVar23 = uVar2 + uVar23;
                        lVar15 = lVar15 + lVar14 + (ulonglong)(uVar23 < uVar2) + lStack_8;
                        uVar2 = uVar23 + CONCAT44(uStack_c,uStack_10);
                        if (uVar2 < uVar23) {
                          lVar15 = lVar15 + 1;
                        }
                        uVar1 = 0xffffffffffff < uVar2;
                        if (lVar15 != 0) {
                          uVar1 = 0 < lVar15;
                        }
                        if (((bool)uVar1) ||
                           ((lVar15 == 0 && uVar2 < 0x1000000000000) &&
                            (uVar2 & 0xffffffffffff) != 0)) {
                          fn_1d4b8(1,0);
                        }
                        *(ulonglong *)(param_1 + 2) = uVar2;
                        *(longlong *)(param_1 + 4) = lVar15;
                        *param_1 = 0;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = (ulonglong)uStack_14;
  uVar8 = uStack_10;
LAB_ram_0001ca60:
  param_1[2] = uVar8;
  param_1[1] = (int)uVar2;
  *param_1 = 1;
  return;
}


/* ---- fn_1d4b8 @ 0x1d5d8 ---- */

void fn_1d4b8(void)

{
  undefined4 *unaff_R6;
  undefined8 unaff_R7;
  undefined8 unaff_R8;
  
  fn_1d4b8();
  *(undefined8 *)(unaff_R6 + 2) = unaff_R8;
  *(undefined8 *)(unaff_R6 + 4) = unaff_R7;
  *unaff_R6 = 0;
  return;
}


/* ---- fn_1d4e0 @ 0x1d600 ---- */

undefined8 fn_1d4e0(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  ushort *puVar2;
  ulonglong uVar3;
  ushort *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar2 = (ushort *)*param_1;
  if ((ulonglong)*puVar2 != 0) {
    uVar3 = 0;
    do {
      if (uVar3 != *(ushort *)((longlong)puVar2 + param_1[1] + -2)) {
        puVar4 = (ushort *)((longlong)puVar2 + (ulonglong)puVar2[uVar3 + 1]);
        uVar6 = (ulonglong)*puVar4;
        if ((((*(longlong *)((longlong)puVar4 + uVar6 * 0x21 + 2) != *param_2) ||
             (*(longlong *)((longlong)puVar4 + uVar6 * 0x21 + 10) != param_2[1])) ||
            (*(longlong *)((longlong)puVar4 + uVar6 * 0x21 + 0x12) != param_2[2])) ||
           (bVar1 = false, *(longlong *)((longlong)puVar4 + uVar6 * 0x21 + 0x1a) != param_2[3])) {
          bVar1 = true;
        }
        if (!bVar1) {
          return 0x10000001a;
        }
        if (uVar6 != 0) {
          plVar5 = (longlong *)((longlong)puVar4 + 3);
          uVar7 = 0;
          do {
            if (((*plVar5 != *param_2) || (plVar5[1] != param_2[1])) ||
               ((plVar5[2] != param_2[2] || (bVar1 = false, plVar5[3] != param_2[3])))) {
              bVar1 = true;
            }
            if (!bVar1) {
              return 0x10000001a;
            }
            plVar5 = (longlong *)((longlong)plVar5 + 0x21);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar6);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar2);
  }
  return 0x1a;
}


/* ---- fn_1d720 @ 0x1d840 ---- */

void fn_1d720(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uStack_50;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if ((((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
      (param_3[2] != 0x10742a9290fc845b)) || (bVar2 = false, param_3[3] != 0x182e105eeb8708ad)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
       ((param_3[2] != 0x17f86227578d7956 || (bVar2 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
         ((param_3[2] != 0xccbecd97e436386 || (bVar2 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if ((((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
            (param_3[2] != -0x49badeacf352c099)) ||
           (bVar2 = false, param_3[3] != 0x494ac5dec856a9e9)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
             ((param_3[2] != 0x5f9eab07c0325e41 || (bVar2 = false, param_3[3] != 0x74308a941848db62)
              ))) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
               ((param_3[2] != -0x5a746ce81742b801 ||
                (bVar2 = false, param_3[3] != 0x77eb01650c19b51)))) {
              bVar2 = true;
            }
            uStack_20 = 0;
            uStack_18 = 0;
            if (bVar2) goto LAB_ram_0001e628;
          }
        }
      }
    }
  }
  uStack_20 = 0;
  puVar4 = (ushort *)*param_2;
  uVar3 = (ulonglong)*(ushort *)((longlong)puVar4 + param_2[1] + -2);
  uVar5 = (ulonglong)*puVar4;
  uStack_18 = 0;
  if (uVar3 < uVar5) {
    puVar6 = (ushort *)((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
    uVar1 = *puVar6;
    if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != -0x1e8395f2e7b51c4b) ||
          (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) != -0x51f325fec501496b))
         || ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x98144e7e5ae3fa8
             || (bVar2 = false,
                *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                0x40ee2497930cf7ea)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904)
            || (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)
            ) || ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   0x518ef4a3deb2b1fd ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  -0x70ec43a95d324efe)))) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != 0x715b8f7af9be1205
                ) || (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                      -0x3fbd123929120c83)) ||
              (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
               -0x1178411a20edb01e)) ||
             (bVar2 = false,
             *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x4693a2c08ba113c1
             )) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                  -0x3b66289859b23cf6) ||
                (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x75b1926ae1365115)) ||
               ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                 0x678ad2090231d088 ||
                (bVar2 = false,
                *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                -0x139993aed94b961d)))) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                    0x136d5ca2f1569155) ||
                  (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                   0x340d9a0ae6f72a4f)) ||
                 ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   -0x2a9d9b9ca96e3882 ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)))) {
                bVar2 = true;
              }
              if (bVar2) {
                if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                       -0x16a608d8d48b0286) ||
                     (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                      0x7a819dd33c7070c6)) ||
                    (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                     0x6dd2523bce0a93a0)) ||
                   (bVar2 = false,
                   *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                   -0x2c4478dc22ab5fac)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                        -0x44f118ed916356fa) ||
                      (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                       0x6e904b4c145c1835)) ||
                     ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                       0x2a2f74470ab0ff18 ||
                      (bVar2 = false,
                      *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                      -0x2b367796f4eefba2)))) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                          -0x4fc4eec7e6cb4135) ||
                        (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                         0x45acad558b7e296b)) ||
                       ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                         0x59369b4a1734ee6f ||
                        (bVar2 = false,
                        *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                        0x42c79970523f5e6b)))) {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                             -0x1d323195ffe246f3) ||
                           (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                            0x67889bcdcd17de84)) ||
                          (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                           0x5666dfd02b922d2b)) ||
                         (bVar2 = false,
                         *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                         0x548b03e01a423aa3)) {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                              -0x6c2c22b8abad132c) ||
                            (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                             0x1776bd19d4d98a5b)) ||
                           ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                             0x6f034a62de39afcb ||
                            (bVar2 = false,
                            *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                            -0x5f19bd0c7dda6fc5)))) {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                                -0x1bb09aaaa3eacf65) ||
                              (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                               0x6493c705f351bd52)) ||
                             ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                               0x262c1d3289763901 ||
                              (bVar2 = false,
                              *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                              0x5be22f238cb47253)))) {
                            bVar2 = true;
                          }
                          if (bVar2) {
                            if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                                   -0x7af703e2864bdf4) ||
                                 (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                                  0x2de7dd1cfc9a6d15)) ||
                                (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                                 0x6bafec3babd968f6)) ||
                               (bVar2 = false,
                               *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                               -0x3726a59b99a8f2a9)) {
                              bVar2 = true;
                            }
                            if (bVar2) {
                              if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                                    -0x372c55a8b3c334fc) ||
                                  (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                                   0x72e40dd1add9f2d5)) ||
                                 ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12)
                                   != 0x42e6fdaa3eff7804 ||
                                  (bVar2 = false,
                                  *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a)
                                  != -0x3a991ec56a126c8d)))) {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (((*param_3 != 0x6560b6dd6ee140db) ||
                                    (param_3[1] != -0x163a020e81a9d7c4)) ||
                                   ((param_3[2] != 0x10742a9290fc845b ||
                                    (bVar2 = false, param_3[3] != 0x182e105eeb8708ad)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x182e105eeb8708ad;
                                  uStack_10 = 0x10742a9290fc845b;
                                  uStack_18 = 0xe9c5fdf17e56283c;
                                  uStack_20 = 0x6560b6dd6ee140db;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if ((((*plVar7 != 0x6560b6dd6ee140db) ||
                                             (plVar7[1] != -0x163a020e81a9d7c4)) ||
                                            (plVar7[2] != 0x10742a9290fc845b)) ||
                                           (bVar2 = false, plVar7[3] != 0x182e105eeb8708ad)) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if (((*param_3 != -0x724bde0defd224ab) ||
                                    (param_3[1] != -0x4ddc648a4ff5d960)) ||
                                   ((param_3[2] != 0x17f86227578d7956 ||
                                    (bVar2 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0xd79939b6c459a1f3;
                                  uStack_10 = 0x17f86227578d7956;
                                  uStack_18 = 0xb2239b75b00a26a0;
                                  uStack_20 = 0x8db421f2102ddb55;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if (((*plVar7 != -0x724bde0defd224ab) ||
                                            (plVar7[1] != -0x4ddc648a4ff5d960)) ||
                                           ((plVar7[2] != 0x17f86227578d7956 ||
                                            (bVar2 = false, plVar7[3] != -0x2866c6493ba65e0d)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if ((((*param_3 != -0x5b792ad20f59a16d) ||
                                     (param_3[1] != -0x2c15f09912347a81)) ||
                                    (param_3[2] != 0xccbecd97e436386)) ||
                                   (bVar2 = false, param_3[3] != 0x3aa82a4cb9d28622)) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x3aa82a4cb9d28622;
                                  uStack_10 = 0xccbecd97e436386;
                                  uStack_18 = 0xd3ea0f66edcb857f;
                                  uStack_20 = 0xa486d52df0a65e93;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if (((*plVar7 != -0x5b792ad20f59a16d) ||
                                            (plVar7[1] != -0x2c15f09912347a81)) ||
                                           ((plVar7[2] != 0xccbecd97e436386 ||
                                            (bVar2 = false, plVar7[3] != 0x3aa82a4cb9d28622)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if (((*param_3 != 0x6d46af69e74bdfb4) ||
                                    (param_3[1] != -0xfb7c095e807c65c)) ||
                                   ((param_3[2] != -0x49badeacf352c099 ||
                                    (bVar2 = false, param_3[3] != 0x494ac5dec856a9e9)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x494ac5dec856a9e9;
                                  uStack_10 = 0xb64521530cad3f67;
                                  uStack_18 = 0xf0483f6a17f839a4;
                                  uStack_20 = 0x6d46af69e74bdfb4;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if ((((*plVar7 != 0x6d46af69e74bdfb4) ||
                                             (plVar7[1] != -0xfb7c095e807c65c)) ||
                                            (plVar7[2] != -0x49badeacf352c099)) ||
                                           (bVar2 = false, plVar7[3] != 0x494ac5dec856a9e9)) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if (((*param_3 != 0x602eddf9a6f50302) ||
                                    (param_3[1] != -0x30262668f50f63cf)) ||
                                   ((param_3[2] != 0x5f9eab07c0325e41 ||
                                    (bVar2 = false, param_3[3] != 0x74308a941848db62)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x74308a941848db62;
                                  uStack_10 = 0x5f9eab07c0325e41;
                                  uStack_18 = 0xcfd9d9970af09c31;
                                  uStack_20 = 0x602eddf9a6f50302;
                                  uStack_50 = 0;
                                  do {
                                    uVar3 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uStack_50 + 1]);
                                    if (uVar3 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uStack_50 + 1]
                                                ) + 3);
                                      uVar8 = 0;
                                      do {
                                        if (((*plVar7 != 0x602eddf9a6f50302) ||
                                            (plVar7[1] != -0x30262668f50f63cf)) ||
                                           ((plVar7[2] != 0x5f9eab07c0325e41 ||
                                            (bVar2 = false, plVar7[3] != 0x74308a941848db62)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar8 = uVar8 + 1;
                                      } while (uVar8 < uVar3);
                                    }
                                    uStack_50 = uStack_50 + 1;
                                  } while (uStack_50 < uVar5);
                                }
                                if ((((*param_3 != -0x5a8406c1ee9740dd) ||
                                     (param_3[1] != 0x694d916b33d303ed)) ||
                                    (param_3[2] != -0x5a746ce81742b801)) ||
                                   (bVar2 = false, param_3[3] != 0x77eb01650c19b51)) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x77eb01650c19b51;
                                  uStack_10 = 0xa58b9317e8bd47ff;
                                  uStack_18 = 0x694d916b33d303ed;
                                  uStack_20 = 0xa57bf93e1168bf23;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if (((*plVar7 != -0x5a8406c1ee9740dd) ||
                                            (plVar7[1] != 0x694d916b33d303ed)) ||
                                           ((plVar7[2] != -0x5a746ce81742b801 ||
                                            (bVar2 = false, plVar7[3] != 0x77eb01650c19b51)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                uStack_20 = 0;
                                uStack_18 = 0;
                                goto LAB_ram_0001e628;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uStack_20 = 0;
    uStack_18 = 0;
  }
LAB_ram_0001e628:
  *(undefined8 *)(param_1 + 2) = uStack_20;
  *(undefined8 *)(param_1 + 4) = uStack_18;
  *param_1 = 0;
  return;
LAB_ram_0001f2e8:
  fn_2c1e8(&uStack_20,0xc8000000000000,0,0x3e8000000000000);
  goto LAB_ram_0001e628;
}


/* ---- fn_1f270 @ 0x1f390 ---- */

void fn_1f270(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar6 = (ushort *)*param_2;
  uVar1 = *puVar6;
  if ((ulonglong)uVar1 == 0) {
    uStack_18 = 0;
    uStack_10 = 0;
  }
  else {
    bVar4 = false;
    uVar9 = 0;
    puVar8 = puVar6;
    do {
      puVar8 = puVar8 + 1;
      puVar7 = (ushort *)((longlong)puVar6 + (ulonglong)*puVar8);
      uVar2 = *puVar7;
      cVar5 = fn_15fe0((longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 2,
                               (longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 0x24,
                               *(undefined2 *)((longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 0x22));
      if ((((*(longlong *)((longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 2) != -0x7af703e2864bdf4) ||
           (*(longlong *)((longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 10) != 0x2de7dd1cfc9a6d15))
          || (*(longlong *)((longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 0x12) != 0x6bafec3babd968f6
             )) || (bVar3 = false,
                   *(longlong *)((longlong)puVar7 + (ulonglong)uVar2 * 0x21 + 0x1a) !=
                   -0x3726a59b99a8f2a9)) {
        bVar3 = true;
      }
      if (((!bVar3) || (bVar3 = bVar4, cVar5 != '\r')) && (bVar3 = true, bVar4)) {
        fn_2c1e8(&uStack_18,0xc8000000000000,0,0x3e8000000000000);
        goto LAB_ram_0001f5f0;
      }
      bVar4 = bVar3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
    uStack_18 = 0;
    uStack_10 = 0;
  }
LAB_ram_0001f5f0:
  *(undefined8 *)(param_1 + 2) = uStack_18;
  *(undefined8 *)(param_1 + 4) = uStack_10;
  *param_1 = 0;
  return;
}


/* ---- fn_1f4f0 @ 0x1f610 ---- */

void fn_1f4f0(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char acStack_350 [424];
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  
  if ((((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
      (param_3[2] != 0x10742a9290fc845b)) || (bVar8 = false, param_3[3] != 0x182e105eeb8708ad)) {
    bVar8 = true;
  }
  if (bVar8) {
    if (((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
       ((param_3[2] != 0x17f86227578d7956 || (bVar8 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
      bVar8 = true;
    }
    if (bVar8) {
      if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
         ((param_3[2] != 0xccbecd97e436386 || (bVar8 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
        bVar8 = true;
      }
      if (bVar8) {
        if ((((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
            (param_3[2] != -0x49badeacf352c099)) ||
           (bVar8 = false, param_3[3] != 0x494ac5dec856a9e9)) {
          bVar8 = true;
        }
        if (bVar8) {
          if (((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
             ((param_3[2] != 0x5f9eab07c0325e41 || (bVar8 = false, param_3[3] != 0x74308a941848db62)
              ))) {
            bVar8 = true;
          }
          if (bVar8) {
            if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
               ((param_3[2] != -0x5a746ce81742b801 ||
                (bVar8 = false, param_3[3] != 0x77eb01650c19b51)))) {
              bVar8 = true;
            }
            plStack_1a8 = (longlong *)0x0;
            uStack_1a0 = 0;
            if (bVar8) goto LAB_ram_00020e50;
          }
        }
      }
    }
  }
  plStack_1a8 = (longlong *)0x0;
  puVar3 = (ushort *)*param_2;
  uVar4 = (ulonglong)*(ushort *)((longlong)puVar3 + param_2[1] + -2);
  uVar7 = (ulonglong)*puVar3;
  uStack_1a0 = 0;
  if (uVar7 <= uVar4) goto LAB_ram_00020e50;
  puVar5 = (ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
  uVar1 = *puVar5;
  if ((((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904) ||
       (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
      (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd)) ||
     (bVar8 = false,
     *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x70ec43a95d324efe)) {
    bVar8 = true;
  }
  if (bVar8) {
    if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar8 = false,
        *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)))) {
      bVar8 = true;
    }
    if (bVar8) {
      if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != -0x44f118ed916356fa) ||
          (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != 0x6e904b4c145c1835)) ||
         ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x2a2f74470ab0ff18 ||
          (bVar8 = false,
          *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x2b367796f4eefba2)))
         ) {
        bVar8 = true;
      }
      if (bVar8) {
        if ((((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x136d5ca2f1569155)
             || (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x340d9a0ae6f72a4f)) ||
            (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != -0x2a9d9b9ca96e3882
            )) || (bVar8 = false,
                  *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)) {
          bVar8 = true;
        }
        plStack_1a8 = (longlong *)0x0;
        if (bVar8) goto LAB_ram_00020e50;
      }
    }
  }
  if (((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
     ((param_3[2] != 0x10742a9290fc845b || (bVar8 = false, param_3[3] != 0x182e105eeb8708ad)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x182e105eeb8708ad;
    uStack_198 = 0x10742a9290fc845b;
    uStack_1a0 = 0xe9c5fdf17e56283c;
    plStack_1a8 = (longlong *)0x6560b6dd6ee140db;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != 0x6560b6dd6ee140db) || (plVar10[1] != -0x163a020e81a9d7c4)) ||
             ((plVar10[2] != 0x10742a9290fc845b || (bVar8 = false, plVar10[3] != 0x182e105eeb8708ad)
              ))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if ((((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
      (param_3[2] != 0x17f86227578d7956)) || (bVar8 = false, param_3[3] != -0x2866c6493ba65e0d)) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0xd79939b6c459a1f3;
    uStack_198 = 0x17f86227578d7956;
    uStack_1a0 = 0xb2239b75b00a26a0;
    plStack_1a8 = (longlong *)0x8db421f2102ddb55;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != -0x724bde0defd224ab) || (plVar10[1] != -0x4ddc648a4ff5d960)) ||
             ((plVar10[2] != 0x17f86227578d7956 ||
              (bVar8 = false, plVar10[3] != -0x2866c6493ba65e0d)))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
     ((param_3[2] != 0xccbecd97e436386 || (bVar8 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x3aa82a4cb9d28622;
    uStack_198 = 0xccbecd97e436386;
    uStack_1a0 = 0xd3ea0f66edcb857f;
    plStack_1a8 = (longlong *)0xa486d52df0a65e93;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if ((((*plVar10 != -0x5b792ad20f59a16d) || (plVar10[1] != -0x2c15f09912347a81)) ||
              (plVar10[2] != 0xccbecd97e436386)) ||
             (bVar8 = false, plVar10[3] != 0x3aa82a4cb9d28622)) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if (((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
     ((param_3[2] != -0x49badeacf352c099 || (bVar8 = false, param_3[3] != 0x494ac5dec856a9e9)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x494ac5dec856a9e9;
    uStack_198 = 0xb64521530cad3f67;
    uStack_1a0 = 0xf0483f6a17f839a4;
    plStack_1a8 = (longlong *)0x6d46af69e74bdfb4;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != 0x6d46af69e74bdfb4) || (plVar10[1] != -0xfb7c095e807c65c)) ||
             ((plVar10[2] != -0x49badeacf352c099 ||
              (bVar8 = false, plVar10[3] != 0x494ac5dec856a9e9)))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if ((((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
      (param_3[2] != 0x5f9eab07c0325e41)) || (bVar8 = false, param_3[3] != 0x74308a941848db62)) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x74308a941848db62;
    uStack_198 = 0x5f9eab07c0325e41;
    uStack_1a0 = 0xcfd9d9970af09c31;
    plStack_1a8 = (longlong *)0x602eddf9a6f50302;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != 0x602eddf9a6f50302) || (plVar10[1] != -0x30262668f50f63cf)) ||
             ((plVar10[2] != 0x5f9eab07c0325e41 || (bVar8 = false, plVar10[3] != 0x74308a941848db62)
              ))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
     ((param_3[2] != -0x5a746ce81742b801 || (bVar8 = false, param_3[3] != 0x77eb01650c19b51)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x77eb01650c19b51;
    uStack_198 = 0xa58b9317e8bd47ff;
    uStack_1a0 = 0x694d916b33d303ed;
    plStack_1a8 = (longlong *)0xa57bf93e1168bf23;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if ((((*plVar10 != -0x5a8406c1ee9740dd) || (plVar10[1] != 0x694d916b33d303ed)) ||
              (plVar10[2] != -0x5a746ce81742b801)) ||
             (bVar8 = false, plVar10[3] != 0x77eb01650c19b51)) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
    plStack_1a8 = (longlong *)0x0;
    uStack_1a0 = 0;
    goto LAB_ram_00020e50;
  }
  goto LAB_ram_00020cb8;
LAB_ram_00020ab0:
  if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904) ||
      (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
     ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd ||
      (bVar8 = false,
      *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x70ec43a95d324efe)))) {
    bVar8 = true;
  }
  if (bVar8) {
    if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar8 = false,
        *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)))) {
      bVar8 = true;
    }
    plStack_1a8 = (longlong *)0x0;
    uStack_1a0 = 0;
    if ((bVar8) ||
       (uVar4 = (ulonglong)*(ushort *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x22),
       uVar4 < 0xc)) goto LAB_ram_00020e50;
    plVar10 = (longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x24);
    lVar9 = *plVar10;
    uVar2 = 0;
    if (lVar9 != -0x77a4a414b3c0b4bf) {
      if (lVar9 == 0x65879cc54d18aca8) {
        uVar2 = 2;
      }
      else {
        if (lVar9 != -0x37788a1e6e613908) goto LAB_ram_00020e50;
        uVar2 = 1;
      }
    }
    uStack_198 = CONCAT44(CONCAT31(uStack_198._5_3_,uVar2),
                          *(undefined4 *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x2c));
    plStack_1a8 = plVar10;
    uStack_1a0 = uVar4;
    lVar9 = fn_12ec0__custom_panic(&plStack_1a8);
    plVar10 = plStack_1a8;
    uVar4 = uStack_1a0;
    goto joined_r0x00020d88;
  }
  fn_144e8(acStack_350,(longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x24,
                   *(undefined2 *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x22));
  if (acStack_350[0] != '\x02') {
    fn_2fe08__sol_memcpy(&plStack_1a8,acStack_350,0x1a8);
    lVar9 = fn_154c8__custom_panic(&plStack_1a8);
    plVar10 = plStack_1a8;
    uVar4 = uStack_1a0;
    if ((char)plStack_1a8 == '\0') {
      if ((int)uStack_1a0 != 0) {
        puVar6 = &uStack_1a0;
        goto LAB_ram_00020d70;
      }
    }
    else if ((int)uStack_198 != 0) {
      puVar6 = &uStack_198;
LAB_ram_00020d70:
      *(undefined4 *)puVar6 = 0;
      uVar4 = uStack_1a0;
    }
joined_r0x00020d88:
    uStack_1a0 = 0;
    plStack_1a8 = (longlong *)0x0;
    if (lVar9 != 0) {
      plStack_1a8 = plVar10;
      uStack_1a0 = uVar4;
      fn_07e8__custom_panic(&plStack_1a8,0xc8000000000000,0,0x3e8000000000000,0);
    }
    goto LAB_ram_00020e50;
  }
LAB_ram_00020cb8:
  plStack_1a8 = (longlong *)0x0;
  uStack_1a0 = 0;
LAB_ram_00020e50:
  *(longlong **)(param_1 + 2) = plStack_1a8;
  *(ulonglong *)(param_1 + 4) = uStack_1a0;
  *param_1 = 0;
  return;
}


/* ---- fn_20d70 @ 0x20e90 ---- */

void fn_20d70(undefined4 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                     longlong *param_5)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ushort *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lStack_570;
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  longlong lStack_550;
  longlong lStack_548;
  longlong lStack_540;
  longlong lStack_538;
  uint uStack_530;
  undefined4 uStack_52c;
  ulonglong auStack_528 [2];
  char acStack_518 [880];
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  int iStack_198;
  undefined1 uStack_194;
  
  if ((((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
      (param_3[2] != 0x10742a9290fc845b)) || (bVar2 = false, param_3[3] != 0x182e105eeb8708ad)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
       ((param_3[2] != 0x17f86227578d7956 || (bVar2 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
         ((param_3[2] != 0xccbecd97e436386 || (bVar2 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if ((((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
            (param_3[2] != -0x49badeacf352c099)) ||
           (bVar2 = false, param_3[3] != 0x494ac5dec856a9e9)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
             ((param_3[2] != 0x5f9eab07c0325e41 || (bVar2 = false, param_3[3] != 0x74308a941848db62)
              ))) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
               ((param_3[2] != -0x5a746ce81742b801 ||
                (bVar2 = false, param_3[3] != 0x77eb01650c19b51)))) {
              bVar2 = true;
            }
            uVar12 = 0;
            uVar15 = 0;
            if (bVar2) goto LAB_ram_00022388;
          }
        }
      }
    }
  }
  uVar12 = 0;
  puVar5 = (ushort *)*param_2;
  uVar6 = (ulonglong)*(ushort *)((longlong)puVar5 + param_2[1] + -2);
  uVar15 = 0;
  if (*puVar5 <= uVar6) goto LAB_ram_00022388;
  puVar5 = (ushort *)((longlong)puVar5 + (ulonglong)puVar5[uVar6 + 1]);
  uVar6 = (ulonglong)*puVar5;
  if ((((*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 2) != 0x6ec031f25bd57904) ||
       (*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
      (*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd)) ||
     (bVar2 = false, *(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x1a) != -0x70ec43a95d324efe))
  {
    bVar2 = true;
  }
  uVar13 = (ulonglong)*(ushort *)((longlong)puVar5 + uVar6 * 0x21 + 0x22);
  plVar10 = (longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x24);
  if (bVar2) {
    if (((*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar2 = false, *(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x1a) != 0x103cc0bd736050b0)
        ))) {
      bVar2 = true;
    }
    uVar12 = 0;
    uVar15 = 0;
    if (bVar2) goto LAB_ram_00022388;
    bVar4 = 2;
    if (0xb < uVar13) {
      lVar7 = *plVar10;
      if (lVar7 != -0x77a4a414b3c0b4bf) {
        if (lVar7 == 0x65879cc54d18aca8) {
          uVar12 = 2;
        }
        else {
          if (lVar7 != -0x37788a1e6e613908) goto LAB_ram_00021b08;
          uVar12 = 1;
        }
      }
      iStack_198 = *(int *)((longlong)puVar5 + uVar6 * 0x21 + 0x2c);
      uStack_194 = (undefined1)uVar12;
      plStack_1a8 = plVar10;
      uStack_1a0 = uVar13;
      fn_13160__sol_memcpy(&uStack_530,&plStack_1a8);
      puVar9 = auStack_528;
      lVar7 = 0;
      do {
        lVar16 = lVar7;
        if ((ulonglong)uStack_530 * 0x38 == lVar16) {
          bVar4 = 2;
          goto LAB_ram_00021b08;
        }
        pcVar1 = (char *)((longlong)puVar9 + 0x33);
        puVar9 = puVar9 + 7;
        lVar7 = lVar16 + 0x38;
      } while (*pcVar1 != '(');
      bVar4 = 2;
      if ((acStack_518[lVar16] == '\x01') && (bVar4 = 1, acStack_518[lVar16 + 1] == '\0')) {
        bVar4 = 0;
      }
    }
    goto LAB_ram_00021b08;
  }
  if (uVar6 == 0) {
    uVar12 = 0;
    goto LAB_ram_00022388;
  }
  uVar8 = 0;
  uVar17 = 0;
  uVar14 = 0;
  do {
    if (((*(longlong *)((longlong)puVar5 + 3) != 0x50126c1f9cda329f) ||
        (*(longlong *)((longlong)puVar5 + 0xb) != 0x67c3ec2339739bc0)) ||
       ((*(longlong *)((longlong)puVar5 + 0x13) != 0x1c9c6ad4e763280d ||
        (bVar2 = false, *(longlong *)((longlong)puVar5 + 0x1b) != 0x57fed5d0bbfd7df4)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar5 + 3) != -0x69f4a935eeabd322) ||
          (*(longlong *)((longlong)puVar5 + 0xb) != 0x156492098a673ea6)) ||
         ((*(longlong *)((longlong)puVar5 + 0x13) != -0x58a98d91a3c1cd4c ||
          (bVar2 = false, *(longlong *)((longlong)puVar5 + 0x1b) != -0x3eac325f67561f09)))) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar15 = 1;
        uVar19 = uVar8;
        if ((uVar8 & uVar17) == 0) goto LAB_ram_00021508;
LAB_ram_00021810:
        uVar17 = 1;
        uVar11 = 1;
        uVar18 = 1;
        break;
      }
      if ((((*(longlong *)((longlong)puVar5 + 3) != 0x70445cd3ea4a744d) ||
           (*(longlong *)((longlong)puVar5 + 0xb) != 0x6721023cd0ded5e7)) ||
          (*(longlong *)((longlong)puVar5 + 0x13) != 0x158269176877d439)) ||
         (bVar2 = false, *(longlong *)((longlong)puVar5 + 0x1b) != -0x25fedc0091beafba)) {
        bVar2 = true;
      }
      uVar19 = uVar8 & uVar15;
      if (bVar2) {
        if ((uVar19 & uVar17) != 0) goto LAB_ram_00021810;
        uVar17 = (uVar19 ^ 1) & uVar17;
      }
      else {
        uVar17 = 1;
        uVar11 = 1;
        uVar18 = 1;
        if (uVar19 != 0) break;
      }
    }
    else {
      uVar8 = 1;
      uVar19 = uVar15;
      if ((uVar15 & uVar17) != 0) goto LAB_ram_00021810;
LAB_ram_00021508:
      uVar17 = (uVar19 ^ 1) & uVar17;
    }
    uVar11 = uVar15;
    puVar5 = (ushort *)((longlong)puVar5 + 0x21);
    uVar14 = uVar14 + 1;
    uVar15 = uVar11;
    uVar18 = uVar8;
  } while (uVar14 < uVar6);
  uVar12 = 0;
  if (uVar18 == 0) {
    uVar15 = 0;
    goto LAB_ram_00022388;
  }
  if (uVar11 == 0) {
    uVar15 = 0;
    goto LAB_ram_00022388;
  }
  uVar15 = 0;
  if (uVar17 == 0) goto LAB_ram_00022388;
  fn_144e8(&uStack_530,plVar10,uVar13);
  if ((char)uStack_530 == '\x02') {
    uVar12 = 0;
    uVar15 = 0;
    goto LAB_ram_00022388;
  }
  fn_2fe08__sol_memcpy(&plStack_1a8,&uStack_530,0x1a8);
  bVar4 = fn_15288(&plStack_1a8,0x75);
  if ((char)plStack_1a8 == '\0') {
    if ((int)uStack_1a0 != 0) {
      puVar9 = &uStack_1a0;
      goto LAB_ram_00021ae8;
    }
  }
  else if (iStack_198 != 0) {
    puVar9 = (ulonglong *)&iStack_198;
LAB_ram_00021ae8:
    *(int *)puVar9 = 0;
  }
LAB_ram_00021b08:
  uVar12 = 0;
  uVar15 = 0;
  if (bVar4 == 2) goto LAB_ram_00022388;
  if ((bVar4 & 1) == 0) {
    lStack_558 = 0x615d2f450302a67c;
    lStack_560 = -0x1b1f092d3d1b444f;
    lStack_568 = 0x3174c9ab6af3653d;
    lStack_570 = 0x3aaddbbef37afac6;
    lStack_550 = -0x7b7e5401a87764fa;
    lStack_548 = 0x35c01846637f68fb;
    lStack_540 = 0x553beb1adc39c4da;
    lStack_538 = 0x100000000f0a098;
    if (*param_4 == -0x7b7e5401a87764fa) goto LAB_ram_00021d00;
LAB_ram_00021d50:
    bVar2 = true;
  }
  else {
    lStack_558 = 0x100000000f0a098;
    lStack_560 = 0x553beb1adc39c4da;
    lStack_568 = 0x35c01846637f68fb;
    lStack_570 = -0x7b7e5401a87764fa;
    lStack_550 = 0x3aaddbbef37afac6;
    lStack_548 = 0x3174c9ab6af3653d;
    lStack_540 = -0x1b1f092d3d1b444f;
    lStack_538 = 0x615d2f450302a67c;
    if (*param_4 != 0x3aaddbbef37afac6) goto LAB_ram_00021d50;
LAB_ram_00021d00:
    if (((lStack_548 != param_4[1]) || (lStack_540 != param_4[2])) ||
       (bVar2 = false, lStack_538 != param_4[3])) goto LAB_ram_00021d50;
  }
  if (bVar2) {
    if (((lStack_550 != 0x3aaddbbef37afac6) || (lStack_548 != 0x3174c9ab6af3653d)) ||
       ((lStack_540 != -0x1b1f092d3d1b444f || (bVar2 = false, lStack_538 != 0x615d2f450302a67c)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((lStack_550 != 0x27b2edaf600e01ce) || (lStack_548 != 0x5a14542f1963bd17)) ||
         ((lStack_540 != -0x382d7d44cca569c1 || (bVar3 = false, lStack_538 != 0x6482201eceb29e02))))
      {
        bVar3 = true;
      }
      bVar2 = true;
      if (bVar3) goto LAB_ram_00022000;
    }
    if ((((*param_4 != 0x3aaddbbef37afac6) || (param_4[1] != 0x3174c9ab6af3653d)) ||
        (param_4[2] != -0x1b1f092d3d1b444f)) || (bVar2 = false, param_4[3] != 0x615d2f450302a67c)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*param_4 != 0x27b2edaf600e01ce) || (param_4[1] != 0x5a14542f1963bd17)) ||
         ((param_4[2] != -0x382d7d44cca569c1 || (bVar3 = false, param_4[3] != 0x6482201eceb29e02))))
      {
        bVar3 = true;
      }
      bVar2 = false;
      if (!bVar3) goto LAB_ram_00022000;
      bVar2 = true;
      lVar7 = *param_5;
    }
    else {
      bVar2 = false;
      lVar7 = *param_5;
    }
    if (lStack_570 != lVar7) goto LAB_ram_00022090;
LAB_ram_00022018:
    if (((lStack_568 != param_5[1]) || (lStack_560 != param_5[2])) ||
       (bVar3 = false, lStack_558 != param_5[3])) goto LAB_ram_00022090;
  }
  else {
    bVar2 = false;
LAB_ram_00022000:
    if (lStack_570 == *param_5) goto LAB_ram_00022018;
LAB_ram_00022090:
    bVar3 = true;
  }
  if (bVar3) {
    if ((((lStack_570 != 0x3aaddbbef37afac6) || (lStack_568 != 0x3174c9ab6af3653d)) ||
        (lStack_560 != -0x1b1f092d3d1b444f)) || (bVar3 = false, lStack_558 != 0x615d2f450302a67c)) {
      bVar3 = true;
    }
    if (bVar3) {
      if (((lStack_570 != 0x27b2edaf600e01ce) || (lStack_568 != 0x5a14542f1963bd17)) ||
         ((lStack_560 != -0x382d7d44cca569c1 || (bVar3 = false, lStack_558 != 0x6482201eceb29e02))))
      {
        bVar3 = true;
      }
      uVar12 = 0;
      if (bVar3) goto LAB_ram_00022388;
    }
    if (((*param_5 != 0x3aaddbbef37afac6) || (param_5[1] != 0x3174c9ab6af3653d)) ||
       ((param_5[2] != -0x1b1f092d3d1b444f || (bVar3 = false, param_5[3] != 0x615d2f450302a67c)))) {
      bVar3 = true;
    }
    if (bVar3) {
      if ((((*param_5 != 0x27b2edaf600e01ce) || (param_5[1] != 0x5a14542f1963bd17)) ||
          (param_5[2] != -0x382d7d44cca569c1)) || (bVar4 = 0, param_5[3] != 0x6482201eceb29e02)) {
        bVar4 = 1;
      }
      bVar2 = (bool)(bVar2 | bVar4);
    }
  }
  uVar12 = 0;
  if (!bVar2) {
    fn_2c1e8(&uStack_530,0x37a000000000000,0,0x3e8000000000000);
    uVar12 = CONCAT44(uStack_52c,uStack_530);
    uVar15 = auStack_528[0];
  }
LAB_ram_00022388:
  *(undefined8 *)(param_1 + 2) = uVar12;
  *(ulonglong *)(param_1 + 4) = uVar15;
  *param_1 = 0;
  return;
}


/* ---- fn_22288 @ 0x223a8 ---- */

void fn_22288(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ushort *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if ((((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
      (param_3[2] != 0x10742a9290fc845b)) || (bVar2 = false, param_3[3] != 0x182e105eeb8708ad)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
       ((param_3[2] != 0x17f86227578d7956 || (bVar2 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
         ((param_3[2] != 0xccbecd97e436386 || (bVar2 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if ((((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
            (param_3[2] != -0x49badeacf352c099)) ||
           (bVar2 = false, param_3[3] != 0x494ac5dec856a9e9)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
             ((param_3[2] != 0x5f9eab07c0325e41 || (bVar2 = false, param_3[3] != 0x74308a941848db62)
              ))) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
               ((param_3[2] != -0x5a746ce81742b801 ||
                (bVar2 = false, param_3[3] != 0x77eb01650c19b51)))) {
              bVar2 = true;
            }
            uVar3 = 0;
            uVar9 = 0;
            if (bVar2) goto LAB_ram_00023080;
          }
        }
      }
    }
  }
  puVar6 = (ushort *)*param_2;
  uVar7 = (ulonglong)*(ushort *)((longlong)puVar6 + param_2[1] + -2);
  uVar9 = 0;
  uVar3 = 0;
  if (uVar7 < *puVar6) {
    puVar8 = (ushort *)((longlong)puVar6 + (ulonglong)puVar6[uVar7 + 1]);
    uVar1 = *puVar8;
    if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != -0x1e8395f2e7b51c4b) ||
          (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) != -0x51f325fec501496b))
         || ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x98144e7e5ae3fa8
             || (bVar2 = false,
                *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                0x40ee2497930cf7ea)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904)
            || (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)
            ) || ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   0x518ef4a3deb2b1fd ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  -0x70ec43a95d324efe)))) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != 0x715b8f7af9be1205
                ) || (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                      -0x3fbd123929120c83)) ||
              (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
               -0x1178411a20edb01e)) ||
             (bVar2 = false,
             *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x4693a2c08ba113c1
             )) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                  -0x3b66289859b23cf6) ||
                (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x75b1926ae1365115)) ||
               ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                 0x678ad2090231d088 ||
                (bVar2 = false,
                *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                -0x139993aed94b961d)))) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                    0x136d5ca2f1569155) ||
                  (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                   0x340d9a0ae6f72a4f)) ||
                 ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   -0x2a9d9b9ca96e3882 ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)))) {
                bVar2 = true;
              }
              if (bVar2) {
                if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                       -0x16a608d8d48b0286) ||
                     (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                      0x7a819dd33c7070c6)) ||
                    (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                     0x6dd2523bce0a93a0)) ||
                   (bVar2 = false,
                   *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                   -0x2c4478dc22ab5fac)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                        -0x44f118ed916356fa) ||
                      (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                       0x6e904b4c145c1835)) ||
                     ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                       0x2a2f74470ab0ff18 ||
                      (bVar2 = false,
                      *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                      -0x2b367796f4eefba2)))) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                          -0x4fc4eec7e6cb4135) ||
                        (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                         0x45acad558b7e296b)) ||
                       ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                         0x59369b4a1734ee6f ||
                        (bVar2 = false,
                        *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                        0x42c79970523f5e6b)))) {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                             -0x1d323195ffe246f3) ||
                           (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                            0x67889bcdcd17de84)) ||
                          (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                           0x5666dfd02b922d2b)) ||
                         (bVar2 = false,
                         *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                         0x548b03e01a423aa3)) {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                              -0x6c2c22b8abad132c) ||
                            (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                             0x1776bd19d4d98a5b)) ||
                           ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                             0x6f034a62de39afcb ||
                            (bVar2 = false,
                            *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                            -0x5f19bd0c7dda6fc5)))) {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                                -0x1bb09aaaa3eacf65) ||
                              (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                               0x6493c705f351bd52)) ||
                             ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                               0x262c1d3289763901 ||
                              (bVar2 = false,
                              *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                              0x5be22f238cb47253)))) {
                            bVar2 = true;
                          }
                          if (bVar2) {
                            if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                                   -0x7af703e2864bdf4) ||
                                 (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                                  0x2de7dd1cfc9a6d15)) ||
                                (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                                 0x6bafec3babd968f6)) ||
                               (bVar2 = false,
                               *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                               -0x3726a59b99a8f2a9)) {
                              bVar2 = true;
                            }
                            if (bVar2) {
                              if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                                    -0x372c55a8b3c334fc) ||
                                  (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                                   0x72e40dd1add9f2d5)) ||
                                 ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12)
                                   != 0x42e6fdaa3eff7804 ||
                                  (bVar2 = false,
                                  *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a)
                                  != -0x3a991ec56a126c8d)))) {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                uVar7 = 0;
                                do {
                                  puVar8 = (ushort *)
                                           ((longlong)puVar6 + (ulonglong)puVar6[uVar7 + 1]);
                                  uVar4 = (ulonglong)*puVar8;
                                  if (((*(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 2) !=
                                        0x50126c1f9cda329f) ||
                                      (*(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 10) !=
                                       0x67c3ec2339739bc0)) ||
                                     ((*(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 0x12) !=
                                       0x1c9c6ad4e763280d ||
                                      (bVar2 = false,
                                      *(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 0x1a) !=
                                      0x57fed5d0bbfd7df4)))) {
                                    bVar2 = true;
                                  }
                                  if (!bVar2) {
LAB_ram_00023260:
                                    fn_2c1e8(&uStack_18,0x37a000000000000,0,
                                                     0x3e8000000000000);
                                    uVar3 = uStack_18;
                                    uVar9 = uStack_10;
                                    break;
                                  }
                                  if (uVar4 != 0) {
                                    plVar5 = (longlong *)((longlong)puVar8 + 3);
                                    uVar10 = 0;
                                    do {
                                      if ((((*plVar5 != 0x50126c1f9cda329f) ||
                                           (plVar5[1] != 0x67c3ec2339739bc0)) ||
                                          (plVar5[2] != 0x1c9c6ad4e763280d)) ||
                                         (bVar2 = false, plVar5[3] != 0x57fed5d0bbfd7df4)) {
                                        bVar2 = true;
                                      }
                                      if (!bVar2) goto LAB_ram_00023260;
                                      plVar5 = (longlong *)((longlong)plVar5 + 0x21);
                                      uVar10 = uVar10 + 1;
                                    } while (uVar10 < uVar4);
                                  }
                                  uVar7 = uVar7 + 1;
                                  uVar3 = 0;
                                  uVar9 = 0;
                                } while (uVar7 < *puVar6);
                                goto LAB_ram_00023080;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
LAB_ram_00023080:
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar9;
  *param_1 = 0;
  return;
}


/* ---- fn_231b8 @ 0x232d8 ---- */

void fn_231b8(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar3 = (ushort *)*param_2;
  uVar6 = (ulonglong)*(ushort *)((longlong)puVar3 + param_2[1] + -2);
  uVar4 = 0;
  uVar5 = 0;
  if (uVar6 < *puVar3) {
    puVar3 = (ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar6 + 1]);
    uVar1 = *puVar3;
    if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != -0x1e8395f2e7b51c4b) ||
          (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != -0x51f325fec501496b))
         || ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x98144e7e5ae3fa8
             || (bVar2 = false,
                *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                0x40ee2497930cf7ea)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904)
            || (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)
            ) || ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   0x518ef4a3deb2b1fd ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  -0x70ec43a95d324efe)))) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x715b8f7af9be1205
                ) || (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                      -0x3fbd123929120c83)) ||
              (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
               -0x1178411a20edb01e)) ||
             (bVar2 = false,
             *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x4693a2c08ba113c1
             )) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                  -0x3b66289859b23cf6) ||
                (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x75b1926ae1365115)) ||
               ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                 0x678ad2090231d088 ||
                (bVar2 = false,
                *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                -0x139993aed94b961d)))) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                    0x136d5ca2f1569155) ||
                  (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                   0x340d9a0ae6f72a4f)) ||
                 ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   -0x2a9d9b9ca96e3882 ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)))) {
                bVar2 = true;
              }
              if (bVar2) {
                if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                       -0x16a608d8d48b0286) ||
                     (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                      0x7a819dd33c7070c6)) ||
                    (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                     0x6dd2523bce0a93a0)) ||
                   (bVar2 = false,
                   *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                   -0x2c4478dc22ab5fac)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                        -0x44f118ed916356fa) ||
                      (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                       0x6e904b4c145c1835)) ||
                     ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                       0x2a2f74470ab0ff18 ||
                      (bVar2 = false,
                      *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                      -0x2b367796f4eefba2)))) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                          -0x4fc4eec7e6cb4135) ||
                        (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                         0x45acad558b7e296b)) ||
                       ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                         0x59369b4a1734ee6f ||
                        (bVar2 = false,
                        *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                        0x42c79970523f5e6b)))) {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                             -0x1d323195ffe246f3) ||
                           (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                            0x67889bcdcd17de84)) ||
                          (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                           0x5666dfd02b922d2b)) ||
                         (bVar2 = false,
                         *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                         0x548b03e01a423aa3)) {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                              -0x6c2c22b8abad132c) ||
                            (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                             0x1776bd19d4d98a5b)) ||
                           ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                             0x6f034a62de39afcb ||
                            (bVar2 = false,
                            *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                            -0x5f19bd0c7dda6fc5)))) {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                                -0x1bb09aaaa3eacf65) ||
                              (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                               0x6493c705f351bd52)) ||
                             ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                               0x262c1d3289763901 ||
                              (bVar2 = false,
                              *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                              0x5be22f238cb47253)))) {
                            bVar2 = true;
                          }
                          if (bVar2) {
                            if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                                   -0x7af703e2864bdf4) ||
                                 (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                                  0x2de7dd1cfc9a6d15)) ||
                                (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                                 0x6bafec3babd968f6)) ||
                               (bVar2 = false,
                               *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                               -0x3726a59b99a8f2a9)) {
                              bVar2 = true;
                            }
                            if (bVar2) {
                              if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                                    -0x372c55a8b3c334fc) ||
                                  (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                                   0x72e40dd1add9f2d5)) ||
                                 ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12)
                                   != 0x42e6fdaa3eff7804 ||
                                  (bVar2 = false,
                                  *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a)
                                  != -0x3a991ec56a126c8d)))) {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                fn_2c1e8(&uStack_18,0xc8000000000000,0,0x3e8000000000000);
                                uVar4 = uStack_18;
                                uVar5 = uStack_10;
                                goto LAB_ram_00023c48;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar4 = 0;
    uVar5 = 0;
  }
LAB_ram_00023c48:
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *param_1 = 0;
  return;
}


/* ---- fn_23b48 @ 0x23c68 ---- */

void fn_23b48(undefined4 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int *piVar6;
  byte bVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  ushort *puVar17;
  longlong *plStack_530;
  ulonglong uStack_528;
  undefined4 uStack_520;
  undefined1 uStack_51c;
  uint uStack_388;
  undefined4 uStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  int aiStack_378 [2];
  char acStack_370 [35];
  char acStack_34d [21];
  char acStack_338 [824];
  
  uVar10 = 0;
  puVar17 = (ushort *)*param_2;
  uVar4 = (ulonglong)*(ushort *)((longlong)puVar17 + param_2[1] + -2);
  uVar8 = 0;
  if (*puVar17 <= uVar4) goto LAB_ram_00024868;
  puVar17 = (ushort *)((longlong)puVar17 + (ulonglong)puVar17[uVar4 + 1]);
  uVar4 = (ulonglong)*puVar17;
  plVar5 = (longlong *)((longlong)puVar17 + uVar4 * 0x21 + 2);
  if ((((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 2) != 0x6ec031f25bd57904) ||
       (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
      (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd)) ||
     (bVar12 = false, *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != -0x70ec43a95d324efe)
     ) {
    bVar12 = true;
  }
  if (bVar12) {
    if (((*plVar5 != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar12 = false,
        *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != 0x103cc0bd736050b0)))) {
      bVar12 = true;
    }
    if (bVar12) {
      if (((*plVar5 != -0x44f118ed916356fa) ||
          (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x6e904b4c145c1835)) ||
         ((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x2a2f74470ab0ff18 ||
          (bVar12 = false,
          *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != -0x2b367796f4eefba2)))) {
        bVar12 = true;
      }
      if (bVar12) {
        if ((((*plVar5 != 0x136d5ca2f1569155) ||
             (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x340d9a0ae6f72a4f)) ||
            (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != -0x2a9d9b9ca96e3882)) ||
           (bVar12 = false,
           *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != 0x698f3435f126add1)) {
          bVar12 = true;
        }
        uVar10 = 0;
        uVar8 = 0;
        if (bVar12) goto LAB_ram_00024868;
      }
    }
  }
  if (((*plVar5 != 0x6ec031f25bd57904) ||
      (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
     ((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd ||
      (bVar12 = false, *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != -0x70ec43a95d324efe
      )))) {
    bVar12 = true;
  }
  if (bVar12) {
    if ((((*plVar5 != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar12 = false, *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != 0x103cc0bd736050b0
       )) {
      bVar12 = true;
    }
    uVar10 = 0;
    uVar8 = 0;
    if ((bVar12) ||
       (uStack_528 = (ulonglong)*(ushort *)((longlong)puVar17 + uVar4 * 0x21 + 0x22),
       uStack_528 < 0xc)) goto LAB_ram_00024868;
    plStack_530 = (longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x24);
    lVar13 = *plStack_530;
    if (lVar13 != -0x77a4a414b3c0b4bf) {
      if (lVar13 != 0x65879cc54d18aca8) {
        if (lVar13 == -0x37788a1e6e613908) {
          uVar10 = 1;
          goto LAB_ram_00024680;
        }
        goto LAB_ram_00024860;
      }
      uVar10 = 2;
    }
LAB_ram_00024680:
    uStack_520 = *(undefined4 *)((longlong)puVar17 + uVar4 * 0x21 + 0x2c);
    uStack_51c = (undefined1)uVar10;
    fn_13160__sol_memcpy(&uStack_388,&plStack_530);
    uVar4 = (ulonglong)uStack_388;
    if (1 < uVar4) {
      pcVar11 = acStack_338;
      uVar16 = 0;
      uVar9 = 1;
      do {
        lVar13 = uVar16 * 0x38;
        pcVar15 = pcVar11;
        uVar16 = uVar9;
        do {
          if (((acStack_34d[lVar13] == pcVar15[0x23]) && (acStack_370[lVar13] == '\x01')) &&
             ((*pcVar15 == '\x01' && (acStack_370[lVar13 + 1] != pcVar15[1]))))
          goto LAB_ram_000247e8;
          uVar16 = uVar16 + 1;
          pcVar15 = pcVar15 + 0x38;
        } while (uVar16 < uVar4);
        pcVar11 = pcVar11 + 0x38;
        uVar14 = uVar9 + 1;
        uVar16 = uVar9;
        uVar9 = uVar14;
      } while (uVar14 < uVar4);
    }
LAB_ram_00024860:
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar1 = *(undefined2 *)((longlong)puVar17 + uVar4 * 0x21 + 0x22);
    lVar13 = (longlong)puVar17 + uVar4 * 0x21 + 0x24;
    uVar16 = fn_15fe0(plVar5,lVar13);
    bVar3 = 0;
    uVar16 = uVar16 & 0xff;
    if (uVar16 < 7) {
      if (uVar16 < 4) {
        if (1 < uVar16) {
          uVar9 = 8;
          uVar14 = 7;
LAB_ram_00024230:
          if ((uVar14 < uVar4) && (uVar9 < uVar4)) {
            if ((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 3) !=
                 *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 3)) ||
               (((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0xb) !=
                  *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0xb) ||
                 (*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x13) !=
                  *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x13))) ||
                (bVar12 = false,
                *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x1b) !=
                *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x1b))))) {
              bVar12 = true;
            }
            bVar3 = 1;
            if (bVar12) {
              bVar3 = 0;
            }
          }
        }
      }
      else if (1 < uVar16 - 4) {
LAB_ram_00024208:
        uVar9 = 4;
        uVar14 = 3;
        goto LAB_ram_00024230;
      }
LAB_ram_000242f8:
      bVar7 = 0;
      if ((uVar16 < 9) && ((0x153UL >> uVar16 & 1) != 0)) {
        lVar2 = uVar16 * 8;
        uVar16 = *(ulonglong *)(&DAT_ram_00032260 /* .rodata: hex: 01 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 */ + lVar2);
        if ((uVar4 <= uVar16) ||
           ((uVar9 = *(ulonglong *)(&DAT_ram_00032218 /* .rodata: hex: 02 00 00 00 00 00 00 00 02 00 00 00 00 00 00 00 */ + lVar2), uVar4 <= uVar9 ||
            (uVar14 = *(ulonglong *)(&DAT_ram_000321d0 /* .rodata: hex: 03 00 00 00 00 00 00 00 03 00 00 00 00 00 00 00 */ + lVar2), uVar4 <= uVar14))))
        goto LAB_ram_00024560;
        if ((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 3) !=
             *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 3)) ||
           (((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0xb) !=
              *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0xb) ||
             (*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x13) !=
              *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x13))) ||
            (bVar12 = false,
            *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x1b) !=
            *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x1b))))) {
          bVar12 = true;
        }
        if (bVar12) {
          if (((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 3) !=
                *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 3)) ||
              (*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0xb) !=
               *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0xb))) ||
             ((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x13) !=
               *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x13) ||
              (bVar12 = false,
              *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x1b) !=
              *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x1b))))) {
            bVar12 = true;
          }
          if (bVar12) {
            if (((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 3) !=
                  *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 3)) ||
                (*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0xb) !=
                 *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0xb))) ||
               ((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x13) !=
                 *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x13) ||
                (bVar12 = false,
                *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x1b) !=
                *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x1b))))) {
              bVar12 = true;
            }
            bVar7 = 1;
            if (bVar12) {
              bVar7 = 0;
            }
            goto LAB_ram_00024560;
          }
        }
      }
      else {
LAB_ram_00024560:
        if (!(bool)(bVar3 | bVar7)) goto LAB_ram_00024578;
      }
    }
    else {
      if (uVar16 < 10) {
        if ((uVar16 != 7) && (uVar16 == 8)) goto LAB_ram_00024208;
        uVar9 = 7;
        uVar14 = 6;
        goto LAB_ram_00024230;
      }
      if (uVar16 - 10 < 3) goto LAB_ram_000242f8;
LAB_ram_00024578:
      fn_144e8(&plStack_530,lVar13,uVar1);
      if ((char)plStack_530 == '\x02') goto LAB_ram_00024860;
      fn_2fe08__sol_memcpy(&uStack_388,&plStack_530,0x1a8);
      lVar13 = fn_154c8__custom_panic(&uStack_388);
      if ((char)uStack_388 == '\0') {
        if (iStack_380 != 0) {
          piVar6 = &iStack_380;
          goto LAB_ram_00024650;
        }
      }
      else if (aiStack_378[0] != 0) {
        piVar6 = aiStack_378;
LAB_ram_00024650:
        *piVar6 = 0;
      }
      uVar10 = 0;
      uVar8 = 0;
      if (lVar13 == 0) goto LAB_ram_00024868;
    }
LAB_ram_000247e8:
    fn_2c1e8(&uStack_388,0xc8000000000000,0,0x3e8000000000000);
    uVar8 = CONCAT44(uStack_37c,iStack_380);
    uVar10 = CONCAT44(uStack_384,uStack_388);
  }
LAB_ram_00024868:
  *(undefined8 *)(param_1 + 2) = uVar10;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *param_1 = 0;
  return;
}


/* ---- fn_24768 @ 0x24888 ---- */

void fn_24768(undefined4 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ushort *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  longlong *plVar10;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar2 = (ushort *)*param_2;
  uVar5 = (ulonglong)*puVar2;
  if (uVar5 == 0) {
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = 0;
    do {
      puVar9 = (ushort *)((longlong)puVar2 + (ulonglong)puVar2[uVar6 + 1]);
      uVar7 = (ulonglong)*puVar9;
      if ((((*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 2) != -0x50528c1a3b122cfa) ||
           (*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 10) != 0x1e5b548b8973e5f3)) ||
          (*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x12) != -0x77b12671fa722d18)) ||
         (bVar1 = false, *(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x1a) != 0xaea1b5732b3bce0)
         ) {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_ram_00024ca8;
      if (uVar7 != 0) {
        plVar10 = (longlong *)((longlong)puVar9 + 3);
        uVar3 = 0;
        do {
          if (((*plVar10 != -0x50528c1a3b122cfa) || (plVar10[1] != 0x1e5b548b8973e5f3)) ||
             ((plVar10[2] != -0x77b12671fa722d18 || (bVar1 = false, plVar10[3] != 0xaea1b5732b3bce0)
              ))) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00024ca8;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
    uVar6 = 0;
    do {
      puVar9 = (ushort *)((longlong)puVar2 + (ulonglong)puVar2[uVar6 + 1]);
      uVar7 = (ulonglong)*puVar9;
      if (((*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 2) != 0x50126c1f9cda329f) ||
          (*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 10) != 0x67c3ec2339739bc0)) ||
         ((*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x12) != 0x1c9c6ad4e763280d ||
          (bVar1 = false,
          *(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x1a) != 0x57fed5d0bbfd7df4)))) {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_ram_00024ca8;
      if (uVar7 != 0) {
        plVar10 = (longlong *)((longlong)puVar9 + 3);
        uVar3 = 0;
        do {
          if ((((*plVar10 == 0x50126c1f9cda329f) && (plVar10[1] == 0x67c3ec2339739bc0)) &&
              (plVar10[2] == 0x1c9c6ad4e763280d)) && (plVar10[3] == 0x57fed5d0bbfd7df4))
          goto LAB_ram_00024ca8;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      uVar6 = uVar6 + 1;
      uVar4 = 0;
      uVar8 = 0;
    } while (uVar6 < uVar5);
  }
LAB_ram_00024d18:
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *param_1 = 0;
  return;
LAB_ram_00024ca8:
  fn_2c1e8(&uStack_18,0x384000000000000,0,0x3e8000000000000);
  uVar4 = uStack_18;
  uVar8 = uStack_10;
  goto LAB_ram_00024d18;
}


/* ---- fn_24c18 @ 0x24d38 ---- */

void fn_24c18(undefined4 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ushort *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  longlong *plVar10;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar2 = (ushort *)*param_2;
  uVar5 = (ulonglong)*puVar2;
  if (uVar5 == 0) {
    uVar4 = 0;
    uVar8 = 0;
  }
  else {
    uVar6 = 0;
    do {
      puVar9 = (ushort *)((longlong)puVar2 + (ulonglong)puVar2[uVar6 + 1]);
      uVar7 = (ulonglong)*puVar9;
      if ((((*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 2) != -0x1f0bdccdd8a585e2) ||
           (*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 10) != -0x1ad6fffefd421bd7)) ||
          (*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x12) != 0x6df2d47a0d373d05)) ||
         (bVar1 = false,
         *(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x1a) != -0x541f646a124c2e4a)) {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_ram_00025158;
      if (uVar7 != 0) {
        plVar10 = (longlong *)((longlong)puVar9 + 3);
        uVar3 = 0;
        do {
          if (((*plVar10 != -0x1f0bdccdd8a585e2) || (plVar10[1] != -0x1ad6fffefd421bd7)) ||
             ((plVar10[2] != 0x6df2d47a0d373d05 ||
              (bVar1 = false, plVar10[3] != -0x541f646a124c2e4a)))) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00025158;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
    uVar6 = 0;
    do {
      puVar9 = (ushort *)((longlong)puVar2 + (ulonglong)puVar2[uVar6 + 1]);
      uVar7 = (ulonglong)*puVar9;
      if (((*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 2) != 0x58903f74c3b08902) ||
          (*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 10) != -0x1cf01a0bacce9fee)) ||
         ((*(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x12) != 0x4392e2ef592aecdd ||
          (bVar1 = false,
          *(longlong *)((longlong)puVar9 + uVar7 * 0x21 + 0x1a) != 0x341ba97256f0ac88)))) {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_ram_00025158;
      if (uVar7 != 0) {
        plVar10 = (longlong *)((longlong)puVar9 + 3);
        uVar3 = 0;
        do {
          if ((((*plVar10 == 0x58903f74c3b08902) && (plVar10[1] == -0x1cf01a0bacce9fee)) &&
              (plVar10[2] == 0x4392e2ef592aecdd)) && (plVar10[3] == 0x341ba97256f0ac88))
          goto LAB_ram_00025158;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar7);
      }
      uVar6 = uVar6 + 1;
      uVar4 = 0;
      uVar8 = 0;
    } while (uVar6 < uVar5);
  }
LAB_ram_000251c8:
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *param_1 = 0;
  return;
LAB_ram_00025158:
  fn_2c1e8(&uStack_18,0x1f4000000000000,0,0x3e8000000000000);
  uVar4 = uStack_18;
  uVar8 = uStack_10;
  goto LAB_ram_000251c8;
}


/* ---- fn_250c8 @ 0x251e8 ---- */

void fn_250c8(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar3 = (ushort *)*param_2;
  uVar5 = (ulonglong)*(ushort *)((longlong)puVar3 + param_2[1] + -2);
  uVar4 = 0;
  uVar6 = 0;
  if (uVar5 < *puVar3) {
    puVar3 = (ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar5 + 1]);
    uVar1 = *puVar3;
    if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    uVar4 = 0;
    if (!bVar2) {
      fn_2c1e8(&uStack_18,0x3e8000000000000,0,0x3e8000000000000);
      uVar4 = uStack_18;
      uVar6 = uStack_10;
    }
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar6;
  *param_1 = 0;
  return;
}


/* ---- fn_25288 @ 0x253a8 ---- */

void fn_25288(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  ushort *puVar3;
  bool bVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plStack_50;
  longlong *plStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  longlong lStack_8;
  
  plStack_48 = &DAT_ram_00031a20 /* .rodata: hex: 23 bf 68 11 3e f9 7b a5 ed 03 d3 33 6b 91 4d 69 */;
  plStack_50 = &DAT_ram_00031a40 /* .rodata: hex: 44 d5 80 30 3b 1b 54 a0 e4 3a 75 4b 00 a9 bf b5 */;
  bVar4 = true;
  puVar3 = (ushort *)*param_2;
  plVar2 = &DAT_ram_00032033 /* .rodata: hex: db 40 e1 6e dd b6 60 65 3c 28 56 7e f1 fd c5 e9 */;
  do {
    plVar8 = plVar2;
    if (bVar4) {
      if ((plVar2 == (longlong *)0x0) || (plVar2 == (longlong *)0x320d3)) {
        pplVar5 = &plStack_48;
        plVar8 = (longlong *)0x0;
        if ((plStack_48 == (longlong *)0x0) ||
           (bVar4 = true, plVar2 = plStack_48, plStack_48 == &DAT_ram_00031a40 /* .rodata: hex: 44 d5 80 30 3b 1b 54 a0 e4 3a 75 4b 00 a9 bf b5 */))
        goto LAB_ram_000254d8;
        goto LAB_ram_00025520;
      }
      bVar4 = true;
      plVar8 = plVar2 + 4;
    }
    else {
LAB_ram_000254d8:
      pplVar5 = &plStack_50;
      if ((plStack_50 == (longlong *)0x0) ||
         (bVar4 = false, plVar2 = plStack_50, plStack_50 == (longlong *)&DAT_ram_00031a60 /* .rodata: hex: 9f 32 da 9c 1f 6c 12 50 c0 9b 73 39 23 ec c3 67 */)) {
        lStack_20 = 0;
        lStack_18 = 0;
LAB_ram_000257d0:
        *(longlong *)(param_1 + 2) = lStack_20;
        *(longlong *)(param_1 + 4) = lStack_18;
        *param_1 = 0;
        return;
      }
LAB_ram_00025520:
      *pplVar5 = plVar2 + 4;
    }
    lStack_28 = plVar2[3];
    lStack_30 = plVar2[2];
    lStack_38 = plVar2[1];
    lStack_40 = *plVar2;
    if ((((lStack_40 != *param_3) || (lStack_38 != param_3[1])) || (lStack_30 != param_3[2])) ||
       (bVar1 = false, lStack_28 != param_3[3])) {
      bVar1 = true;
    }
    plVar2 = plVar8;
    if ((bVar1) && ((ulonglong)*puVar3 != 0)) {
      uVar7 = 0;
      do {
        uVar9 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar7 + 1]);
        if (uVar9 != 0) {
          plVar8 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar7 + 1]) + 3);
          uVar6 = 0;
          do {
            if (((*plVar8 != lStack_40) || (plVar8[1] != lStack_38)) ||
               ((plVar8[2] != lStack_30 || (bVar1 = false, plVar8[3] != lStack_28)))) {
              bVar1 = true;
            }
            if (!bVar1) {
              lStack_20 = lStack_40;
              lStack_18 = lStack_38;
              lStack_10 = lStack_30;
              lStack_8 = lStack_28;
              fn_2c1e8(&lStack_20,0x384000000000000,0,0x3e8000000000000);
              goto LAB_ram_000257d0;
            }
            plVar8 = (longlong *)((longlong)plVar8 + 0x21);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar9);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar3);
    }
  } while( true );
}


/* ---- fn_256f0 @ 0x25810 ---- */

void fn_256f0(undefined4 *param_1,undefined8 *param_2,ulonglong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar3 = (ushort *)*param_2;
  uVar5 = (ulonglong)*puVar3;
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      uVar7 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]);
      if (uVar7 != 0) {
        plVar6 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]) + 3);
        uVar8 = 0;
        do {
          if ((((*plVar6 != 0x3aca882143c3f10a) || (plVar6[1] != 0x1a95183aa1355163)) ||
              (plVar6[2] != 0x78a83d609f5abdce)) || (bVar1 = false, plVar6[3] != 0x77a3458a6218085e)
             ) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00025fa8;
          plVar6 = (longlong *)((longlong)plVar6 + 0x21);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
    uVar2 = 0;
    do {
      uVar7 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]);
      if (uVar7 != 0) {
        plVar6 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]) + 3);
        uVar8 = 0;
        do {
          if (((*plVar6 != 0x3aca882143c3f10a) || (plVar6[1] != -0x7672f262cd0bae9d)) ||
             ((plVar6[2] != 0x447a2fb3fc239b2f || (bVar1 = false, plVar6[3] != 0xb041ba6adf)))) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00025fa8;
          plVar6 = (longlong *)((longlong)plVar6 + 0x21);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
    uVar2 = 0;
    do {
      uVar7 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]);
      if (uVar7 != 0) {
        plVar6 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]) + 3);
        uVar8 = 0;
        do {
          if (((*plVar6 != 0x3aca882143c3f10a) || (plVar6[1] != 0x1a95183aa1355163)) ||
             ((plVar6[2] != 0x67ae2dace629bdce || (bVar1 = false, plVar6[3] != 0x3c000040d706dbff)))
             ) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00025fa8;
          plVar6 = (longlong *)((longlong)plVar6 + 0x21);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
    uVar2 = 0;
    do {
      uVar7 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]);
      if (uVar7 != 0) {
        plVar6 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]) + 3);
        uVar8 = 0;
        do {
          if ((((*plVar6 != -0x4794be73b93c0ef6) || (plVar6[1] != 0x35cd692c2af52327)) ||
              (plVar6[2] != -0x98a3353704f3ad0)) || (bVar1 = false, plVar6[3] != 0x3c00008063e199fd)
             ) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00025fa8;
          plVar6 = (longlong *)((longlong)plVar6 + 0x21);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
    uVar2 = 0;
    do {
      uVar7 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]);
      if (uVar7 != 0) {
        plVar6 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar2 + 1]) + 3);
        uVar8 = 0;
        do {
          if (((*plVar6 != 0x3aca882143c3f10a) || (plVar6[1] != 0x1a95183aa1355163)) ||
             ((plVar6[2] != -0x6c8fd15319d64232 || (bVar1 = false, plVar6[3] != -0x2d8f0e298cefc0d9)
              ))) {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_ram_00025fa8;
          plVar6 = (longlong *)((longlong)plVar6 + 0x21);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar5);
  }
  uVar5 = param_3 >> 0x10;
  lVar4 = param_3 << 0x30;
LAB_ram_00025fe0:
  *(longlong *)(param_1 + 2) = lVar4;
  *(ulonglong *)(param_1 + 4) = uVar5;
  *param_1 = 0;
  return;
LAB_ram_00025fa8:
  lVar4 = 0;
  uVar5 = 0;
  goto LAB_ram_00025fe0;
}


/* ---- fn_25ee0 @ 0x26000 ---- */

void fn_25ee0(undefined8 *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                     longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  longlong lVar21;
  undefined4 uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  longlong lStack_190;
  ulonglong uStack_178;
  ulonglong uStack_150;
  longlong lStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  puVar28 = *(ulonglong **)(param_5 + -0xff8);
  uVar5 = 0x6e9de2b30b19f9ea;
  if (puVar28[0xd7] < 4) {
    uVar5 = 0x6e9de2b30b19f1ea;
  }
  puVar28[0x48] = puVar28[0x48] ^ 0xb957ed15dc877426;
  puVar28[0x49] = puVar28[0x49] ^ 0x46a912eb23798bd9;
  puVar28[0x44] = puVar28[0x44] ^ 0xb957ed15dc877c26;
  puVar28[0x45] = puVar28[0x45] ^ 0x46a912eb237873d9;
  *puVar28 = *puVar28 ^ 0x69d190c683eda5d3;
  puVar28[1] = puVar28[1] ^ 0x962f6f387c135a2c;
  puVar28[2] = puVar28[2] ^ 0x962c6f3b7c105a2d;
  puVar28[3] = puVar28[3] ^ 0x962d6f3a7c115a2e;
  puVar28[0x4a] = puVar28[0x4a] ^ uVar5;
  puVar28[4] = puVar28[4] ^ 0x962a6f3d7c165a2f;
  puVar28[5] = puVar28[5] ^ 0x962b6f3c7c175a28;
  puVar28[6] = puVar28[6] ^ 0x96286f3f7c145a29;
  puVar28[7] = puVar28[7] ^ 0x96296f3e7c155a2a;
  puVar28[8] = puVar28[8] ^ 0x96266f317c1a5a2b;
  puVar28[9] = puVar28[9] ^ 0x96276f307c1b5a24;
  puVar28[10] = puVar28[10] ^ 0x96246f337c185a25;
  puVar28[0xb] = puVar28[0xb] ^ 0x96256f327c195a26;
  puVar28[0xc] = puVar28[0xc] ^ 0x96226f357c1e5a27;
  puVar28[0xd] = puVar28[0xd] ^ 0x96236f347c1f5a20;
  puVar28[0xe] = puVar28[0xe] ^ 0x96206f377c1c5a21;
  puVar28[0xf] = puVar28[0xf] ^ 0x96216f367c1d5a22;
  puVar28[0x10] = puVar28[0x10] ^ 0x963e6f297c025a23;
  puVar28[0x11] = puVar28[0x11] ^ 0x963f6f287c035a3c;
  fn_2930__sol_memcmp();
  puVar28[0x5a] = puVar28[0x5a] ^ 0xb82c93d08854ebff;
  puVar28[0x5b] = puVar28[0x5b] ^ 0x47d26c2e77aa1400;
  puVar28[0x5c] = puVar28[0x5c] ^ 0x47d16c2d77a91401;
  puVar28[0x5d] = puVar28[0x5d] ^ 0x47d06c2c77a81402;
  puVar28[0x5e] = puVar28[0x5e] ^ 0x47d76c2b77af1403;
  puVar28[0x5f] = puVar28[0x5f] ^ 0x47d66c2a77ae1404;
  puVar28[0x60] = puVar28[0x60] ^ 0x47d56c2977ad1405;
  puVar28[0x61] = puVar28[0x61] ^ 0x47d46c2877ac1406;
  puVar28[0x62] = puVar28[0x62] ^ 0x47db6c2777a31407;
  puVar28[99] = puVar28[99] ^ 0x47da6c2677a21408;
  puVar28[0x34] = puVar28[0x34] ^ 0xfb5ce87aae443c38;
  puVar28[0x35] = puVar28[0x35] ^ 0x4a2178451bac3c7;
  puVar28[0x36] = puVar28[0x36] ^ 0x4a1178751b9c3c6;
  puVar28[0x37] = puVar28[0x37] ^ 0x4a0178651b8c3c5;
  puVar28[0x30] = puVar28[0x30] ^ 0xfb5ce87aae443c38;
  puVar28[0x31] = puVar28[0x31] ^ 0x4a2178451bac3c7;
  puVar28[0x32] = puVar28[0x32] ^ 0x4a1178751b9c3c6;
  puVar28[0x33] = puVar28[0x33] ^ 0x4a0178651b8c3c5;
  uVar6 = *(ulonglong *)(param_5 + -0xfb8);
  uVar7 = *(ulonglong *)(param_5 + -0xfc0);
  uVar5 = *(ulonglong *)(param_5 + -0xfb0);
  uVar8 = *(ulonglong *)(param_5 + -0xfc8);
  uVar9 = *(ulonglong *)(param_5 + -0xfd0);
  uVar10 = *(undefined8 *)(param_5 + -0xfd8);
  uVar11 = *(undefined8 *)(param_5 + -0xfe0);
  uVar12 = *(undefined8 *)(param_5 + -0xfe8);
  lVar13 = *(longlong *)(param_5 + -0xff0);
  lVar26 = *(longlong *)(param_5 + -0x1000);
  if (puVar28[0xd7] < 6) {
    uStack_178 = 0;
    uStack_150 = 0;
  }
  else {
    uStack_150 = puVar28[0x66] ^ 0x9578e14d1d0d9c4e;
    uStack_178 = puVar28[0x65] ^ 0x35f72d643d3464eb;
    puVar28[0x65] = uStack_178;
    puVar28[0x66] = uStack_150;
  }
  puVar14 = puVar28 + 0x34;
  puVar34 = puVar28 + 0x30;
  if (lVar26 == 0) {
    puVar14 = puVar28 + 0x30;
    puVar34 = puVar28 + 0x34;
  }
  uStack_a0 = *puVar34;
  uStack_98 = puVar34[1];
  uStack_90 = puVar34[2];
  uStack_88 = puVar34[3];
  uStack_80 = *puVar14;
  iStack_20 = (int)uStack_80;
  uStack_1c = (undefined4)(uStack_80 >> 0x20);
  uStack_78 = puVar14[1];
  uStack_18 = (undefined4)uStack_78;
  uStack_14 = (uint)(uStack_78 >> 0x20);
  uStack_70 = puVar14[2];
  uStack_68 = puVar14[3];
  uVar29 = param_2 >> 0x10;
  lVar31 = param_2 << 0x30;
  lStack_60 = lVar31;
  uStack_58 = uVar29;
  uStack_40 = uStack_a0;
  uStack_38 = uStack_98;
  uStack_30 = uStack_90;
  uStack_28 = uStack_88;
  uStack_10 = uStack_70;
  uStack_8 = uStack_68;
  if (lVar26 != 0) {
    fn_15e8__sol_log(&iStack_20,&lStack_60,puVar28[0x48],puVar28[0x49]);
    if (CONCAT44(uStack_1c,iStack_20) == 0) {
      *(undefined4 *)(param_1 + 1) = 0x40e;
      goto LAB_ram_00027718;
    }
    if ((longlong)param_2 < 0) {
      uVar22 = 0x412;
      goto LAB_ram_00026e48;
    }
    lStack_190 = -1;
    uVar27 = param_2;
    if (CONCAT44(uStack_14,uStack_18) == 0 && uStack_10 == 0) {
      param_2 = 0;
      goto LAB_ram_00026f50;
    }
    uVar22 = 0x415;
    if ((longlong)uStack_10 < 0) {
      if (0xffff7fffffffffff < uStack_10) {
        param_2 = (ulonglong)(uStack_14 >> 0x10) | uStack_10 << 0x10;
        goto LAB_ram_00026f50;
      }
    }
    else if ((uStack_10 < 0x1000000000000) &&
            (param_2 = (ulonglong)(uStack_14 >> 0x10) | uStack_10 << 0x10, -1 < (longlong)param_2))
    goto LAB_ram_00026f50;
    goto LAB_ram_00026e48;
  }
  uVar27 = puVar28[0x48];
  fn_30150(&uStack_c0,uVar29,0,uVar27);
  fn_30150(&uStack_d0,uVar27,0,lVar31,0);
  uVar32 = puVar28[0x49];
  fn_30150(&uStack_e0,uVar32,(longlong)uVar32 >> 0x3f,lVar31,lVar31 >> 0x3f);
  fn_30150(&lStack_b0,uVar32,(longlong)uVar32 >> 0x3f,uVar29,0);
  uVar25 = uStack_e0 + uStack_c0 + lStack_c8;
  lVar23 = lStack_d8 + (lVar31 >> 0x3f & uVar32) + (ulonglong)(uVar25 < uStack_e0);
  uVar33 = lStack_b8 + ((longlong)uVar27 >> 0x3f & uVar29) +
           (ulonglong)(uStack_c0 + lStack_c8 < uStack_c0);
  uVar27 = uVar33 + lStack_b0;
  uVar32 = uVar27 + lVar23;
  lVar23 = ((longlong)uVar33 >> 0x3f) + lStack_a8 + (ulonglong)(uVar27 < uVar33) + (lVar23 >> 0x3f)
           + (ulonglong)(uVar32 < uVar27);
  uVar27 = (longlong)(uVar32 * 0x10000) >> 0x3f;
  if ((uVar32 >> 0x30 | lVar23 * 0x10000) != uVar27 || lVar23 >> 0x30 != uVar27) {
    *(undefined4 *)(param_1 + 1) = 0x41a;
    goto LAB_ram_00027718;
  }
  uVar27 = uVar32 * 0x10000 | uVar25 >> 0x30;
  uVar25 = uVar25 * 0x10000;
  if ((uVar25 == 0 && uStack_d0 >> 0x30 == 0) && uVar27 == 0) {
    uVar27 = 0;
joined_r0x00026e80:
    lStack_190 = 1;
    if (-1 < (longlong)param_2) {
LAB_ram_00026f50:
      uVar32 = param_4 - puVar28[0x4a];
      if (0 < (longlong)puVar28[0x4a] != (longlong)uVar32 < param_4) {
        *(undefined4 *)(param_1 + 1) = 0x427;
        goto LAB_ram_00027718;
      }
      lVar23 = param_2 * lStack_190;
      uVar33 = uVar32 + lVar23;
      bVar19 = (longlong)uVar33 < (longlong)uVar32;
      if (lVar23 < 0) {
        bVar19 = !bVar19;
      }
      if (bVar19) {
        *(undefined4 *)(param_1 + 1) = 0x42a;
        goto LAB_ram_00027718;
      }
      lVar21 = param_3 - uVar27 * lStack_190;
      bVar19 = lVar21 < param_3;
      if (0 < (longlong)(uVar27 * lStack_190)) {
        bVar19 = !bVar19;
      }
      if (bVar19) {
        *(undefined4 *)(param_1 + 1) = 0x42e;
        goto LAB_ram_00027718;
      }
      bVar19 = lVar23 < 0;
      if (param_4 + lVar23 < param_4) {
        bVar19 = !bVar19;
      }
      if (bVar19) {
        *(undefined4 *)(param_1 + 1) = 0x431;
        goto LAB_ram_00027718;
      }
      uVar25 = 0;
      uVar30 = 0;
      if (1 < puVar28[0xd7]) {
        fn_17900__sol_log(&iStack_20,param_4 + lVar23,lVar21,puVar28[0x48]);
        if (iStack_20 != 0) goto LAB_ram_000272a8;
        uVar25 = CONCAT44(uStack_14,uStack_18);
        uVar30 = uStack_10;
      }
      lVar23 = (uVar32 ^ (longlong)uVar32 >> 0x3f) - ((longlong)uVar32 >> 0x3f);
      lVar21 = (uVar33 ^ (longlong)uVar33 >> 0x3f) - ((longlong)uVar33 >> 0x3f);
      bVar19 = true;
      if (lVar21 - lVar23 < lVar21) {
        if (0 < lVar23) goto LAB_ram_00027390;
LAB_ram_000273c8:
        if (!bVar19) {
LAB_ram_000273e8:
          lVar1 = fn_169b0(lVar21 - lVar23,puVar28);
          if (lVar1 == 0) {
            *(undefined4 *)(param_1 + 1) = 0xbeef1;
            goto LAB_ram_00027718;
          }
          if ((longlong)uVar27 < 0) {
            uVar22 = 0x447;
            goto LAB_ram_00027740;
          }
          lVar2 = fn_16a50(uVar27,puVar28 + 0x12);
          if (lVar2 == 0) {
            uVar22 = 0xbeef2;
            goto LAB_ram_00027740;
          }
          uVar33 = puVar28[0x44];
          uVar17 = puVar28[0x45];
          fn_17a30(&iStack_20,lVar23,lVar21,param_2);
          uVar32 = uStack_10;
          if (iStack_20 != 0) {
LAB_ram_000272a8:
            *(ulonglong *)((longlong)param_1 + 4) = CONCAT44(uStack_18,uStack_1c);
            *(undefined4 *)param_1 = 1;
            return;
          }
          lVar23 = CONCAT44(uStack_14,uStack_18);
          fn_1aed0(&iStack_20,param_2,puVar28[0x44],puVar28[0x45],lVar2,uVar33,uVar17,lVar1)
          ;
          uVar33 = uStack_10;
          if (iStack_20 != 0) goto LAB_ram_000272a8;
          lVar21 = CONCAT44(uStack_14,uStack_18);
          puVar34 = &uStack_80;
          puVar14 = &uStack_a0;
          fn_1c610__sol_log(&iStack_20,uVar11,uVar10,uVar12);
          uVar17 = uStack_10;
          if (iStack_20 != 0) goto LAB_ram_000272a8;
          uVar15 = uVar25 + lVar23;
          uVar18 = uVar30 + uVar32 + (ulonglong)(uVar15 < uVar25);
          uVar22 = 0x461;
          if (-1 < (longlong)((uVar30 ^ uVar32 ^ 0xffffffffffffffff) & (uVar30 ^ uVar18))) {
            uVar24 = uVar15 + lVar21;
            uVar15 = uVar18 + uVar33 + (ulonglong)(uVar24 < uVar15);
            uVar22 = 0x463;
            if (-1 < (longlong)((uVar18 ^ uVar33 ^ 0xffffffffffffffff) & (uVar18 ^ uVar15))) {
              uVar18 = puVar28[0xd7];
              lVar1 = 1;
              if (uVar18 != 1) {
                lVar1 = 2;
              }
              lVar2 = 0;
              if (uVar18 != 0) {
                lVar2 = lVar1;
              }
              lVar1 = CONCAT44(uStack_14,uStack_18);
              uVar4 = uVar15;
              uVar3 = uVar24;
              if ((1UL >> lVar2 == 0) && (lVar13 == 0)) {
                uVar3 = uVar24 + ((puVar28[0x58] ^ 0xe80b) << 0x30);
                uVar4 = uVar15 + (uVar3 < uVar24);
                uStack_50 = uVar3;
                uStack_48 = uVar4;
                if ((longlong)((uVar15 ^ 0xffffffffffffffff) & (uVar15 ^ uVar4)) < 0) {
                  *(undefined4 *)(param_1 + 1) = 0x46e;
                  goto LAB_ram_00027718;
                }
              }
              if (uVar18 < 3) {
                uVar18 = uStack_150;
                if ((6UL >> lVar2 & 1) != 0) {
                  fn_0488(&iStack_20,(puVar28[0x59] ^ 0xd3198133b7c1776c) << 0x30,
                                   (puVar28[0x59] ^ 0xd3198133b7c1776c) >> 0x10,0x4189374bc7,0,
                                   puVar14,puVar34,uStack_150);
                  if (CONCAT44(uStack_1c,iStack_20) != 1) {
                    *(undefined4 *)(param_1 + 1) = 0x496;
                    goto LAB_ram_00027718;
                  }
                  fn_0488(&uStack_40,uVar3,uVar4,CONCAT44(uStack_14,uStack_18),uStack_10,
                                   puVar14,puVar34,uStack_150);
                  uVar4 = uStack_30;
                  uVar3 = uStack_38;
                  uVar18 = uStack_150;
                  if (uStack_40 == 0) {
                    *(undefined4 *)(param_1 + 1) = 0x498;
                    goto LAB_ram_00027718;
                  }
                }
              }
              else {
                uVar18 = puVar28[0x59];
                fn_0488(&iStack_20,(puVar28[100] ^ 0x504156a22548f8dd) << 0x30,
                                 (puVar28[100] ^ 0x504156a22548f8dd) >> 0x10,0x4189374bc7,0,puVar14,
                                 puVar34,uStack_150);
                uVar15 = uStack_10;
                if (CONCAT44(uStack_1c,iStack_20) == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x481;
                  goto LAB_ram_00027718;
                }
                lVar13 = CONCAT44(uStack_14,uStack_18);
                fn_0488(&iStack_20,uVar3,uVar4,(uVar18 ^ 0xd3198133b7c1776c) << 0x30,
                                 (uVar18 ^ 0xd3198133b7c1776c) >> 0x10,puVar14,puVar34,uStack_150);
                if (CONCAT44(uStack_1c,iStack_20) == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x484;
                  goto LAB_ram_00027718;
                }
                fn_0488(&uStack_40,CONCAT44(uStack_14,uStack_18),uStack_10,0x4189374bc7,0,
                                 puVar14,puVar34,uStack_150);
                if (uStack_40 == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x486;
                  goto LAB_ram_00027718;
                }
                bVar19 = true;
                if (uVar3 < uStack_38) {
                  if ((longlong)uVar4 < (longlong)uStack_30) goto LAB_ram_00027a58;
LAB_ram_00027be8:
                  bVar20 = false;
                }
                else {
                  bVar19 = false;
                  if ((longlong)uStack_30 <= (longlong)uVar4) goto LAB_ram_00027be8;
LAB_ram_00027a58:
                  bVar20 = true;
                }
                if (uStack_30 != uVar4) {
                  bVar19 = bVar20;
                }
                uVar18 = uStack_38;
                if (!bVar19) {
                  uVar18 = uVar3;
                }
                uVar3 = uVar18 + lVar13;
                uVar24 = uStack_30;
                if (!bVar19) {
                  uVar24 = uVar4;
                }
                uVar4 = uVar24 + uVar15 + (ulonglong)(uVar3 < uVar18);
                uVar18 = uStack_150;
                if ((longlong)((uVar24 ^ uVar15 ^ 0xffffffffffffffff) & (uVar24 ^ uVar4)) < 0) {
                  *(undefined4 *)(param_1 + 1) = 0x48e;
                  goto LAB_ram_00027718;
                }
              }
              if ((uVar8 & 1) == 0) {
                if ((longlong)uVar6 < 0) {
                  uVar22 = 0x4a0;
LAB_ram_00027740:
                  *(undefined4 *)(param_1 + 1) = uVar22;
                  *param_1 = 1;
                  return;
                }
                uStack_150 = uVar3 + uVar7;
                uVar7 = uVar4 + uVar6 + (ulonglong)(uStack_150 < uVar3);
                uVar22 = 0x4a4;
                if ((longlong)((uVar4 ^ uVar6 ^ 0xffffffffffffffff) & (uVar4 ^ uVar7)) < 0)
                goto LAB_ram_00027740;
              }
              else {
                uVar22 = 0x4ac;
                uVar8 = -(uVar6 + (0x1000000000000 < uVar7));
                if ((longlong)(uVar6 & uVar8) < 0) goto LAB_ram_00027740;
                if ((longlong)uVar8 < 0) {
                  uVar22 = 0x4ae;
                  goto LAB_ram_00027740;
                }
                fn_0488(&iStack_20,uVar3,uVar4,0x1000000000000 - uVar7,uVar8,puVar14,
                                 puVar34,uVar18);
                if (CONCAT44(uStack_1c,iStack_20) == 0) {
                  *(undefined4 *)(param_1 + 1) = 0x4b2;
                  goto LAB_ram_00027718;
                }
                uStack_150 = CONCAT44(uStack_14,uStack_18);
                uVar7 = uStack_10;
              }
              fn_07e8__custom_panic(&iStack_20,uStack_178 << 0x30,uStack_178 >> 0x10,0x3e8000000000000,0)
              ;
              if ((char)uStack_10 != '\0') {
                *(undefined4 *)(param_1 + 1) = 0x4b8;
                goto LAB_ram_00027718;
              }
              fn_0488(&iStack_20,CONCAT44(uStack_1c,iStack_20),
                               CONCAT44(uStack_14,uStack_18),uVar9 << 0x30,uVar9 >> 0x10,puVar14,
                               puVar34,uVar18);
              if (CONCAT44(uStack_1c,iStack_20) == 0) {
                *(undefined4 *)(param_1 + 1) = 0x4bb;
                goto LAB_ram_00027718;
              }
              fn_0028__custom_panic(&lStack_f0,CONCAT44(uStack_14,uStack_18),uStack_10,0x3e8000000000000,
                               0);
              uVar6 = uStack_150 + lVar1;
              uVar8 = uVar7 + uVar17 + (ulonglong)(uVar6 < uStack_150);
              uVar22 = 0x4c1;
              if (-1 < (longlong)((uVar7 ^ uVar17 ^ 0xffffffffffffffff) & (uVar7 ^ uVar8))) {
                uVar7 = uVar6 + lStack_f0;
                uVar6 = uVar8 + uStack_e8 + (ulonglong)(uVar7 < uVar6);
                uVar22 = 0x4c3;
                if (-1 < (longlong)((uVar8 ^ uStack_e8 ^ 0xffffffffffffffff) & (uVar8 ^ uVar6))) {
                  uStack_50 = uVar7 + (uVar5 << 0x30);
                  uVar5 = uVar5 >> 0x10;
                  uStack_48 = uVar6 + uVar5 + (ulonglong)(uStack_50 < uVar7);
                  uVar22 = 0x4c5;
                  if (-1 < (longlong)((uVar6 ^ uVar5 ^ 0xffffffffffffffff) & (uVar6 ^ uStack_48))) {
                    fn_19d8(&iStack_20,&uStack_50,0x2710000000000000,0);
                    uVar5 = uStack_10;
                    if (CONCAT44(uStack_1c,iStack_20) != 1) {
                      *(undefined4 *)(param_1 + 1) = 0x4c9;
                      goto LAB_ram_00027718;
                    }
                    bVar19 = true;
                    bVar20 = true;
                    if (lVar1 == 0) {
                      bVar20 = false;
                      if ((longlong)uVar17 < 1) goto LAB_ram_00028278;
LAB_ram_000281c8:
                      if (uVar17 == 0) goto LAB_ram_00028290;
LAB_ram_000281d8:
                      puVar16 = &DAT_ram_00031c5e /* .rodata: hex: f0 9f a6 90 f0 9f 90 8b f0 9f a6 80 f0 9f 90 b3 */;
                      lVar13 = 4;
                      if (!bVar19) {
                        fn_285a8();
                        return;
                      }
                    }
                    else {
                      if (0 < (longlong)uVar17) goto LAB_ram_000281c8;
LAB_ram_00028278:
                      bVar19 = false;
                      if (uVar17 != 0) goto LAB_ram_000281d8;
LAB_ram_00028290:
                      puVar16 = &DAT_ram_00031c5e /* .rodata: hex: f0 9f a6 90 f0 9f 90 8b f0 9f a6 80 f0 9f 90 b3 */;
                      lVar13 = 4;
                      if (!bVar20) {
                        if (uVar27 < 1000000000000) {
                          puVar16 = &DAT_ram_00031c6e /* .rodata: hex: f0 9f 90 b2 f0 9f a6 88 f0 9f 90 a0 f0 9f 90 ac */;
                          if (((((uVar27 < 500000000000) &&
                                (puVar16 = &DAT_ram_00031c62 /* .rodata: hex: f0 9f 90 8b f0 9f a6 80 f0 9f 90 b3 f0 9f 90 b2 */, uVar27 < 250000000000)) &&
                               (puVar16 = &DAT_ram_00031c6a /* .rodata: hex: f0 9f 90 b3 f0 9f 90 b2 f0 9f a6 88 f0 9f 90 a0 */, uVar27 < 100000000000)) &&
                              ((puVar16 = &DAT_ram_00031c7a /* .rodata: hex: f0 9f 90 ac f0 9f 90 9f f0 9f 90 89 f0 9f 90 89 */, uVar27 < 25000000000 &&
                               (puVar16 = &DAT_ram_00031c72 /* .rodata: hex: f0 9f a6 88 f0 9f 90 a0 f0 9f 90 ac f0 9f 90 9f */, uVar27 < 10000000000)))) &&
                             ((puVar16 = &DAT_ram_00031c7e /* .rodata: hex: f0 9f 90 9f f0 9f 90 89 f0 9f 90 89 f0 9f 90 89 */, uVar27 < 1000000000 &&
                              ((puVar16 = &DAT_ram_00031c76 /* .rodata: hex: f0 9f 90 a0 f0 9f 90 ac f0 9f 90 9f f0 9f 90 89 */, uVar27 < 100000000 &&
                               (puVar16 = &DAT_ram_00031c66 /* .rodata: hex: f0 9f a6 80 f0 9f 90 b3 f0 9f 90 b2 f0 9f a6 88 */, uVar27 < 25000000)))))) {
                            puVar16 = &DAT_ram_00031c5e /* .rodata: hex: f0 9f a6 90 f0 9f 90 8b f0 9f a6 80 f0 9f 90 b3 */;
                          }
                        }
                        else {
                          uVar6 = uVar27 / 1000000000000 - 1;
                          if (uVar6 < 0x13) {
                            lVar13 = uVar6 * 4 + 4;
                            puVar16 = *(undefined1 **)(&DAT_ram_00032a58 /* .data.rel.ro: hex: 00 00 00 00 5a 1c 03 00 00 00 00 00 82 1c 03 00 */ + uVar6 * 8);
                          }
                          else {
                            puVar16 = &DAT_ram_00031f46 /* .rodata: hex: f0 9f 90 89 f0 9f 90 89 f0 9f 90 89 f0 9f 90 89 */;
                            lVar13 = 0x50;
                          }
                        }
                      }
                    }
                    uVar6 = CONCAT44(uStack_14,uStack_18);
                    fn_281a8(puVar16,lVar13);
                    uVar7 = 0x6e9de2b30b19f1ea;
                    if (3 < puVar28[0xd7]) {
                      uVar7 = 0x6e9de2b30b19f9ea;
                    }
                    puVar28[0x44] = puVar28[0x44] ^ 0xb957ed15dc877c26;
                    puVar28[0x45] = puVar28[0x45] ^ 0x46a912eb237873d9;
                    puVar28[0x4a] = puVar28[0x4a] ^ uVar7;
                    fn_2328(puVar28);
                    fn_2930__sol_memcmp(puVar28 + 0x12);
                    fn_2798(puVar28 + 0x5a);
                    puVar28[0x34] = puVar28[0x34] ^ 0xfb5ce87aae443c38;
                    puVar28[0x35] = puVar28[0x35] ^ 0x4a2178451bac3c7;
                    puVar28[0x36] = puVar28[0x36] ^ 0x4a1178751b9c3c6;
                    puVar28[0x37] = puVar28[0x37] ^ 0x4a0178651b8c3c5;
                    puVar28[0x30] = puVar28[0x30] ^ 0xfb5ce87aae443c38;
                    puVar28[0x31] = puVar28[0x31] ^ 0x4a2178451bac3c7;
                    puVar28[0x32] = puVar28[0x32] ^ 0x4a1178751b9c3c6;
                    puVar28[0x33] = puVar28[0x33] ^ 0x4a0178651b8c3c5;
                    if (5 < puVar28[0xd7]) {
                      puVar28[0x65] = puVar28[0x65] ^ 0x35f72d643d3464eb;
                      puVar28[0x66] = puVar28[0x66] ^ 0x9578e14d1d0d9c4e;
                    }
                    uVar7 = uVar6 + 0x1000000000000;
                    uVar6 = uVar5 + (uVar7 < uVar6);
                    if ((longlong)((uVar5 ^ 0xffffffffffffffff) & (uVar5 ^ uVar6)) < 0) {
                      *(undefined4 *)(param_1 + 1) = 0x4fb;
                      goto LAB_ram_00027718;
                    }
                    if (lVar26 != 0) {
                      fn_0488(&iStack_20,puVar28[0x48],puVar28[0x49],uVar7,uVar6);
                      if (CONCAT44(uStack_1c,iStack_20) == 0) {
                        *(undefined4 *)(param_1 + 1) = 0x522;
                        goto LAB_ram_00027718;
                      }
                      fn_15e8__sol_log(&iStack_20,&lStack_60,CONCAT44(uStack_14,uStack_18),uStack_10
                                      );
                      if (CONCAT44(uStack_1c,iStack_20) == 0) {
                        *(undefined4 *)(param_1 + 1) = 0x527;
                        goto LAB_ram_00027718;
                      }
                      uVar5 = CONCAT44(uStack_14,uStack_18);
                      puVar28[0x48] = puVar28[0x48] ^ 0xb957ed15dc877426;
                      puVar28[0x49] = puVar28[0x49] ^ 0x46a912eb23798bd9;
                      if (uVar5 != 0 || uStack_10 != 0) {
                        if (0xffffffffffff < uStack_10) {
                          *(undefined4 *)(param_1 + 1) = 0x531;
                          goto LAB_ram_00027718;
                        }
LAB_ram_00028aa8:
                        uVar5 = uVar5 >> 0x30 | uStack_10 << 0x10;
                        goto LAB_ram_00028ac0;
                      }
LAB_ram_00028a98:
                      uVar5 = 0;
LAB_ram_00028ac0:
                      param_1[5] = uVar25;
                      param_1[3] = lVar23;
                      param_1[1] = lVar21;
                      param_1[7] = uVar5;
                      param_1[6] = uVar30;
                      param_1[4] = uVar32;
                      param_1[2] = uVar33;
                      *(undefined4 *)param_1 = 0;
                      return;
                    }
                    fn_0488(&iStack_20,lVar31,uVar29,puVar28[0x48],puVar28[0x49]);
                    uVar22 = 0x504;
                    if (CONCAT44(uStack_1c,iStack_20) != 0) {
                      uStack_40 = CONCAT44(uStack_14,uStack_18);
                      uStack_38 = uStack_10;
                      fn_15e8__sol_log(&iStack_20,&uStack_40,uVar7,uVar6);
                      uVar22 = 0x509;
                      if (CONCAT44(uStack_1c,iStack_20) == 1) {
                        uVar5 = CONCAT44(uStack_14,uStack_18);
                        puVar28[0x48] = puVar28[0x48] ^ 0xb957ed15dc877426;
                        puVar28[0x49] = puVar28[0x49] ^ 0x46a912eb23798bd9;
                        if (uVar5 == 0 && uStack_10 == 0) goto LAB_ram_00028a98;
                        uVar22 = 0x513;
                        if (uStack_10 < 0x1000000000000) goto LAB_ram_00028aa8;
                      }
                    }
                    *(undefined4 *)(param_1 + 1) = uVar22;
                    goto LAB_ram_00027718;
                  }
                }
              }
LAB_ram_00026e48:
              *(undefined4 *)(param_1 + 1) = uVar22;
              goto LAB_ram_00027718;
            }
          }
          *(undefined4 *)(param_1 + 1) = uVar22;
          goto LAB_ram_00027718;
        }
      }
      else {
        bVar19 = false;
        if (lVar23 < 1) goto LAB_ram_000273c8;
LAB_ram_00027390:
        if (bVar19) goto LAB_ram_000273e8;
      }
      *(undefined4 *)(param_1 + 1) = 0x443;
      goto LAB_ram_00027718;
    }
    uVar22 = 0x421;
  }
  else {
    uVar22 = 0x420;
    if ((longlong)uVar27 < 0) {
      if (0xffff7fffffffffff < uVar27) {
        uVar27 = uVar25 >> 0x30 | uVar27 << 0x10;
        goto joined_r0x00026e80;
      }
    }
    else if ((uVar27 < 0x1000000000000) &&
            (uVar27 = uVar25 >> 0x30 | uVar27 << 0x10, -1 < (longlong)uVar27))
    goto joined_r0x00026e80;
  }
  *(undefined4 *)(param_1 + 1) = uVar22;
LAB_ram_00027718:
  *param_1 = 1;
  return;
}


/* ---- fn_281a8 @ 0x282c8 ---- */

void fn_281a8(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong unaff_R6;
  longlong unaff_R7;
  ulonglong unaff_R9;
  ulonglong uVar3;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_148;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_60 [32];
  ulonglong uStack_40;
  ulonglong uStack_38;
  longlong lStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  fn_281a8();
  uVar1 = 0x6e9de2b30b19f1ea;
  if (3 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    uVar1 = 0x6e9de2b30b19f9ea;
  }
  *(ulonglong *)(unaff_R7 + 0x220) = *(ulonglong *)(unaff_R7 + 0x220) ^ 0xb957ed15dc877c26;
  *(ulonglong *)(unaff_R7 + 0x228) = *(ulonglong *)(unaff_R7 + 0x228) ^ 0x46a912eb237873d9;
  *(ulonglong *)(unaff_R7 + 0x250) = *(ulonglong *)(unaff_R7 + 0x250) ^ uVar1;
  fn_2328();
  fn_2930__sol_memcmp(uStack_128);
  fn_2798(uStack_190);
  *(ulonglong *)(unaff_R7 + 0x1a0) = *(ulonglong *)(unaff_R7 + 0x1a0) ^ 0xfb5ce87aae443c38;
  *(ulonglong *)(unaff_R7 + 0x1a8) = *(ulonglong *)(unaff_R7 + 0x1a8) ^ 0x4a2178451bac3c7;
  *(ulonglong *)(unaff_R7 + 0x1b0) = *(ulonglong *)(unaff_R7 + 0x1b0) ^ 0x4a1178751b9c3c6;
  *(ulonglong *)(unaff_R7 + 0x1b8) = *(ulonglong *)(unaff_R7 + 0x1b8) ^ 0x4a0178651b8c3c5;
  *(ulonglong *)(unaff_R7 + 0x180) = *(ulonglong *)(unaff_R7 + 0x180) ^ 0xfb5ce87aae443c38;
  *(ulonglong *)(unaff_R7 + 0x188) = *(ulonglong *)(unaff_R7 + 0x188) ^ 0x4a2178451bac3c7;
  *(ulonglong *)(unaff_R7 + 400) = *(ulonglong *)(unaff_R7 + 400) ^ 0x4a1178751b9c3c6;
  *(ulonglong *)(unaff_R7 + 0x198) = *(ulonglong *)(unaff_R7 + 0x198) ^ 0x4a0178651b8c3c5;
  if (5 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    *(ulonglong *)(unaff_R7 + 0x328) = *(ulonglong *)(unaff_R7 + 0x328) ^ 0x35f72d643d3464eb;
    *(ulonglong *)(unaff_R7 + 0x330) = *(ulonglong *)(unaff_R7 + 0x330) ^ 0x9578e14d1d0d9c4e;
  }
  uVar1 = unaff_R9 + 0x1000000000000;
  uVar3 = unaff_R6 + (uVar1 < unaff_R9);
  if ((longlong)((unaff_R6 ^ 0xffffffffffffffff) & (unaff_R6 ^ uVar3)) < 0) {
    *(undefined4 *)(puStack_100 + 1) = 0x4fb;
    goto LAB_ram_00027718;
  }
  if (lStack_130 != 0) {
    fn_0488(&lStack_20,*(undefined8 *)(unaff_R7 + 0x240),*(undefined8 *)(unaff_R7 + 0x248),
                     uVar1,uVar3);
    if (lStack_20 == 0) {
      *(undefined4 *)(puStack_100 + 1) = 0x522;
      goto LAB_ram_00027718;
    }
    fn_15e8__sol_log(&lStack_20,auStack_60,uStack_18,uStack_10);
    if (lStack_20 == 0) {
      *(undefined4 *)(puStack_100 + 1) = 0x527;
      goto LAB_ram_00027718;
    }
    *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
    *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
    if (uStack_18 != 0 || uStack_10 != 0) {
      if (0xffffffffffff < uStack_10) {
        *(undefined4 *)(puStack_100 + 1) = 0x531;
        goto LAB_ram_00027718;
      }
LAB_ram_00028aa8:
      uVar1 = uStack_18 >> 0x30 | uStack_10 << 0x10;
      goto LAB_ram_00028ac0;
    }
LAB_ram_00028a98:
    uVar1 = 0;
LAB_ram_00028ac0:
    puStack_100[5] = uStack_120;
    puStack_100[3] = uStack_148;
    puStack_100[1] = uStack_1a0;
    puStack_100[7] = uVar1;
    puStack_100[6] = uStack_118;
    puStack_100[4] = uStack_1a8;
    puStack_100[2] = uStack_f8;
    *(undefined4 *)puStack_100 = 0;
    return;
  }
  fn_0488(&lStack_20,uStack_108,uStack_110,*(undefined8 *)(unaff_R7 + 0x240),
                   *(undefined8 *)(unaff_R7 + 0x248));
  uVar2 = 0x504;
  if (lStack_20 != 0) {
    uStack_40 = uStack_18;
    uStack_38 = uStack_10;
    fn_15e8__sol_log(&lStack_20,&uStack_40,uVar1,uVar3);
    uVar2 = 0x509;
    if (lStack_20 == 1) {
      *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
      *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
      if (uStack_18 == 0 && uStack_10 == 0) goto LAB_ram_00028a98;
      uVar2 = 0x513;
      if (uStack_10 < 0x1000000000000) goto LAB_ram_00028aa8;
    }
  }
  *(undefined4 *)(puStack_100 + 1) = uVar2;
LAB_ram_00027718:
  *puStack_100 = 1;
  return;
}


/* ---- fn_285a8 @ 0x286c8 ---- */

void fn_285a8(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong unaff_R7;
  ulonglong uVar5;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulonglong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_148;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_60 [32];
  ulonglong uStack_40;
  ulonglong uStack_38;
  longlong lStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uVar1 = uStack_10;
  uVar5 = uStack_18;
  if (uStack_198 < 1000000000000) {
    puVar2 = &DAT_ram_00031c6e /* .rodata: hex: f0 9f 90 b2 f0 9f a6 88 f0 9f 90 a0 f0 9f 90 ac */;
    if (((((uStack_198 < 500000000000) && (puVar2 = &DAT_ram_00031c62 /* .rodata: hex: f0 9f 90 8b f0 9f a6 80 f0 9f 90 b3 f0 9f 90 b2 */, uStack_198 < 250000000000))
         && (puVar2 = &DAT_ram_00031c6a /* .rodata: hex: f0 9f 90 b3 f0 9f 90 b2 f0 9f a6 88 f0 9f 90 a0 */, uStack_198 < 100000000000)) &&
        ((puVar2 = &DAT_ram_00031c7a /* .rodata: hex: f0 9f 90 ac f0 9f 90 9f f0 9f 90 89 f0 9f 90 89 */, uStack_198 < 25000000000 &&
         (puVar2 = &DAT_ram_00031c72 /* .rodata: hex: f0 9f a6 88 f0 9f 90 a0 f0 9f 90 ac f0 9f 90 9f */, uStack_198 < 10000000000)))) &&
       ((puVar2 = &DAT_ram_00031c7e /* .rodata: hex: f0 9f 90 9f f0 9f 90 89 f0 9f 90 89 f0 9f 90 89 */, uStack_198 < 1000000000 &&
        ((puVar2 = &DAT_ram_00031c76 /* .rodata: hex: f0 9f 90 a0 f0 9f 90 ac f0 9f 90 9f f0 9f 90 89 */, uStack_198 < 100000000 &&
         (puVar2 = &DAT_ram_00031c66 /* .rodata: hex: f0 9f a6 80 f0 9f 90 b3 f0 9f 90 b2 f0 9f a6 88 */, uStack_198 < 25000000)))))) {
      puVar2 = &DAT_ram_00031c5e /* .rodata: hex: f0 9f a6 90 f0 9f 90 8b f0 9f a6 80 f0 9f 90 b3 */;
    }
  }
  else {
    uVar3 = uStack_198 / 1000000000000 - 1;
    if (uVar3 < 0x13) {
      param_2 = uVar3 * 4 + 4;
      puVar2 = *(undefined1 **)(&DAT_ram_00032a58 /* .data.rel.ro: hex: 00 00 00 00 5a 1c 03 00 00 00 00 00 82 1c 03 00 */ + uVar3 * 8);
    }
    else {
      puVar2 = &DAT_ram_00031f46 /* .rodata: hex: f0 9f 90 89 f0 9f 90 89 f0 9f 90 89 f0 9f 90 89 */;
      param_2 = 0x50;
    }
  }
  fn_281a8(puVar2,param_2);
  uVar3 = 0x6e9de2b30b19f1ea;
  if (3 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    uVar3 = 0x6e9de2b30b19f9ea;
  }
  *(ulonglong *)(unaff_R7 + 0x220) = *(ulonglong *)(unaff_R7 + 0x220) ^ 0xb957ed15dc877c26;
  *(ulonglong *)(unaff_R7 + 0x228) = *(ulonglong *)(unaff_R7 + 0x228) ^ 0x46a912eb237873d9;
  *(ulonglong *)(unaff_R7 + 0x250) = *(ulonglong *)(unaff_R7 + 0x250) ^ uVar3;
  fn_2328();
  fn_2930__sol_memcmp(uStack_128);
  fn_2798(uStack_190);
  *(ulonglong *)(unaff_R7 + 0x1a0) = *(ulonglong *)(unaff_R7 + 0x1a0) ^ 0xfb5ce87aae443c38;
  *(ulonglong *)(unaff_R7 + 0x1a8) = *(ulonglong *)(unaff_R7 + 0x1a8) ^ 0x4a2178451bac3c7;
  *(ulonglong *)(unaff_R7 + 0x1b0) = *(ulonglong *)(unaff_R7 + 0x1b0) ^ 0x4a1178751b9c3c6;
  *(ulonglong *)(unaff_R7 + 0x1b8) = *(ulonglong *)(unaff_R7 + 0x1b8) ^ 0x4a0178651b8c3c5;
  *(ulonglong *)(unaff_R7 + 0x180) = *(ulonglong *)(unaff_R7 + 0x180) ^ 0xfb5ce87aae443c38;
  *(ulonglong *)(unaff_R7 + 0x188) = *(ulonglong *)(unaff_R7 + 0x188) ^ 0x4a2178451bac3c7;
  *(ulonglong *)(unaff_R7 + 400) = *(ulonglong *)(unaff_R7 + 400) ^ 0x4a1178751b9c3c6;
  *(ulonglong *)(unaff_R7 + 0x198) = *(ulonglong *)(unaff_R7 + 0x198) ^ 0x4a0178651b8c3c5;
  if (5 < *(ulonglong *)(unaff_R7 + 0x6b8)) {
    *(ulonglong *)(unaff_R7 + 0x328) = *(ulonglong *)(unaff_R7 + 0x328) ^ 0x35f72d643d3464eb;
    *(ulonglong *)(unaff_R7 + 0x330) = *(ulonglong *)(unaff_R7 + 0x330) ^ 0x9578e14d1d0d9c4e;
  }
  uVar3 = uVar5 + 0x1000000000000;
  uVar5 = uVar1 + (uVar3 < uVar5);
  if ((longlong)((uVar1 ^ 0xffffffffffffffff) & (uVar1 ^ uVar5)) < 0) {
    *(undefined4 *)(puStack_100 + 1) = 0x4fb;
    goto LAB_ram_00027718;
  }
  if (lStack_130 != 0) {
    fn_0488(&lStack_20,*(undefined8 *)(unaff_R7 + 0x240),*(undefined8 *)(unaff_R7 + 0x248),
                     uVar3,uVar5);
    if (lStack_20 == 0) {
      *(undefined4 *)(puStack_100 + 1) = 0x522;
      goto LAB_ram_00027718;
    }
    fn_15e8__sol_log(&lStack_20,auStack_60,uStack_18,uStack_10);
    if (lStack_20 == 0) {
      *(undefined4 *)(puStack_100 + 1) = 0x527;
      goto LAB_ram_00027718;
    }
    *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
    *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
    if (uStack_18 != 0 || uStack_10 != 0) {
      if (0xffffffffffff < uStack_10) {
        *(undefined4 *)(puStack_100 + 1) = 0x531;
        goto LAB_ram_00027718;
      }
LAB_ram_00028aa8:
      uVar5 = uStack_18 >> 0x30 | uStack_10 << 0x10;
      goto LAB_ram_00028ac0;
    }
LAB_ram_00028a98:
    uVar5 = 0;
LAB_ram_00028ac0:
    puStack_100[5] = uStack_120;
    puStack_100[3] = uStack_148;
    puStack_100[1] = uStack_1a0;
    puStack_100[7] = uVar5;
    puStack_100[6] = uStack_118;
    puStack_100[4] = uStack_1a8;
    puStack_100[2] = uStack_f8;
    *(undefined4 *)puStack_100 = 0;
    return;
  }
  fn_0488(&lStack_20,uStack_108,uStack_110,*(undefined8 *)(unaff_R7 + 0x240),
                   *(undefined8 *)(unaff_R7 + 0x248));
  uVar4 = 0x504;
  if (lStack_20 != 0) {
    uStack_40 = uStack_18;
    uStack_38 = uStack_10;
    fn_15e8__sol_log(&lStack_20,&uStack_40,uVar3,uVar5);
    uVar4 = 0x509;
    if (lStack_20 == 1) {
      *(ulonglong *)(unaff_R7 + 0x240) = *(ulonglong *)(unaff_R7 + 0x240) ^ 0xb957ed15dc877426;
      *(ulonglong *)(unaff_R7 + 0x248) = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x46a912eb23798bd9;
      if (uStack_18 == 0 && uStack_10 == 0) goto LAB_ram_00028a98;
      uVar4 = 0x513;
      if (uStack_10 < 0x1000000000000) goto LAB_ram_00028aa8;
    }
  }
  *(undefined4 *)(puStack_100 + 1) = uVar4;
LAB_ram_00027718:
  *puStack_100 = 1;
  return;
}


/* ---- fn_28a20__sol_try_find_program_address @ 0x28b40 ---- */

void fn_28a20__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puStack_58 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
  uStack_40 = 0x20;
  uStack_50 = 0x20;
  uStack_60 = 0x20;
  uStack_31 = 0xff;
  uStack_68 = param_2;
  uStack_48 = param_3;
  lVar1 = fn_28ab8(&uStack_68,3,&DAT_ram_00031940 /* .rodata: hex: 8c 97 25 8f 4e 24 89 f1 bb 3d 10 29 14 8e 0d 83 */,&puStack_30,&uStack_31);
  if (lVar1 == 0) {
    param_1[3] = uStack_18;
    param_1[2] = uStack_20;
    param_1[1] = uStack_28;
    *param_1 = puStack_30;
    return;
  }
  puStack_30 = &DAT_ram_000325e8 /* .data.rel.ro: &str "Unable to find a viable program address bump seed" (len=49) */;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,&DAT_ram_000325f8 /* .data.rel.ro: &str "src/pubkey.rs" (len=13) */);
}


/* ---- fn_28ab8 @ 0x28bd8 ---- */

void fn_28ab8(void)

{
  longlong lVar1;
  undefined8 *unaff_R6;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar1 = fn_28ab8();
  if (lVar1 == 0) {
    unaff_R6[3] = uStack_18;
    unaff_R6[2] = uStack_20;
    unaff_R6[1] = uStack_28;
    *unaff_R6 = puStack_30;
    return;
  }
  puStack_30 = &DAT_ram_000325e8 /* .data.rel.ro: &str "Unable to find a viable program address bump seed" (len=49) */;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,&DAT_ram_000325f8 /* .data.rel.ro: &str "src/pubkey.rs" (len=13) */);
}


/* ---- fn_28b70__sol_log @ 0x28c90 ---- */

/* WARNING: Removing unreachable block (ram,0x000297e0) */
/* WARNING: Type propagation algorithm not settling */

void fn_28b70__sol_log(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  bool bVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined *puVar27;
  undefined **ppuStack_190;
  longlong alStack_188 [2];
  ulonglong uStack_178;
  undefined8 uStack_170;
  longlong alStack_168 [2];
  ulonglong uStack_158;
  undefined8 uStack_150;
  longlong alStack_148 [2];
  ulonglong uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  longlong alStack_d8 [2];
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined *apuStack_b8 [2];
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined *apuStack_88 [2];
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined *apuStack_68 [2];
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong auStack_40 [8];
  
  lVar22 = -0x40;
  uVar19 = param_2[3];
  uVar15 = uVar19;
  if (uVar19 == 0) {
    lVar22 = -0x80;
    uVar15 = param_2[2];
    if (uVar15 != 0) goto LAB_ram_00028ce8;
    lVar22 = -0xc0;
    uVar15 = param_2[1];
    if (uVar15 != 0) goto LAB_ram_00028ce8;
    uVar16 = *param_2;
    uVar15 = 0x40;
    if (uVar16 != 0) {
      uVar16 = uVar16 | uVar16 >> 1;
      uVar16 = uVar16 | uVar16 >> 2;
      uVar16 = uVar16 | uVar16 >> 4;
      uVar16 = uVar16 | uVar16 >> 8;
      uVar16 = uVar16 | uVar16 >> 0x10;
      uVar15 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
      uVar15 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    }
    uVar15 = 0x40 - uVar15;
    uVar16 = param_3[3];
  }
  else {
LAB_ram_00028ce8:
    uVar15 = uVar15 | uVar15 >> 1;
    uVar15 = uVar15 | uVar15 >> 2;
    uVar15 = uVar15 | uVar15 >> 4;
    uVar15 = uVar15 | uVar15 >> 8;
    uVar15 = uVar15 | uVar15 >> 0x10;
    uVar15 = (uVar15 | uVar15 >> 0x20) ^ 0xffffffffffffffff;
    uVar15 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (lVar22 - ((uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) +
             0x140;
    uVar16 = param_3[3];
  }
  lVar22 = -0x40;
  if (uVar16 == 0) {
    lVar22 = -0x80;
    uVar16 = param_3[2];
    if (uVar16 == 0) {
      lVar22 = -0xc0;
      uVar16 = param_3[1];
      if (uVar16 == 0) {
        uVar16 = *param_3;
        if (uVar16 == 0) {
LAB_ram_0002a690:
          apuStack_b8[0] = &DAT_ram_000324d0 /* .data.rel.ro: &str "division by zero" (len=16) */;
          uStack_98 = 0;
          apuStack_b8[1] = (undefined *)0x1;
          uStack_a0 = 0;
          uStack_a8 = 8;
                    /* WARNING: Subroutine does not return */
          fn_2de88__custom_panic(apuStack_b8,&DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
        }
        uVar16 = uVar16 | uVar16 >> 1;
        uVar16 = uVar16 | uVar16 >> 2;
        uVar16 = uVar16 | uVar16 >> 4;
        uVar16 = uVar16 | uVar16 >> 8;
        uVar16 = uVar16 | uVar16 >> 0x10;
        uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
        uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
        uVar16 = 0x40 - ((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
        goto joined_r0x00029028;
      }
    }
  }
  uVar16 = uVar16 | uVar16 >> 1;
  uVar16 = uVar16 | uVar16 >> 2;
  uVar16 = uVar16 | uVar16 >> 4;
  uVar16 = uVar16 | uVar16 >> 8;
  uVar16 = uVar16 | uVar16 >> 0x10;
  uVar16 = (uVar16 | uVar16 >> 0x20) ^ 0xffffffffffffffff;
  uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  uVar16 = (lVar22 - ((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) +
           0x140;
joined_r0x00029028:
  if (uVar15 < uVar16) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_2[3];
    return;
  }
  if (uVar16 < 0x41) {
    uVar15 = *param_3;
    if (uVar15 == 0) {
      puVar9 = &DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */;
      fn_2f828__custom_panic();
      fn_2a678(**(undefined8 **)(puVar9 + 8),(*(undefined8 **)(puVar9 + 8))[1]);
      fn_2a698("** PANICKED **",0xe);
      return;
    }
    uVar26 = param_2[2];
    uVar23 = param_2[1];
    uVar16 = *param_2;
    fn_31788(&uStack_138,uVar26,uVar19 - (uVar19 / uVar15) * uVar15,uVar15,0);
    fn_30150(alStack_148,uStack_138,uStack_130,uVar15,0);
    fn_31788(&uStack_158,uVar23,uVar26 - alStack_148[0],uVar15,0);
    fn_30150(alStack_168,uStack_158,uStack_150,uVar15,0);
    fn_31788(&uStack_178,uVar16,uVar23 - alStack_168[0],uVar15,0);
    fn_30150(alStack_188,uStack_178,uStack_170,uVar15,0);
    param_1[3] = uVar19 / uVar15;
    param_1[2] = uStack_138;
    param_1[1] = uStack_158;
    *param_1 = uStack_178;
    param_1[4] = uVar16 - alStack_188[0];
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    uStack_70 = param_3[3];
    uStack_78 = param_3[2];
    apuStack_88[1] = (undefined *)param_3[1];
    apuStack_88[0] = (undefined *)*param_3;
    uVar23 = uVar16 - 1 >> 6;
    uVar16 = (ulonglong)apuStack_b8[uVar23 + 6];
    if (uVar16 == 0) {
      uVar26 = 0x40;
    }
    else {
      uVar26 = uVar16 | uVar16 >> 1;
      uVar26 = uVar26 | uVar26 >> 2;
      uVar26 = uVar26 | uVar26 >> 4;
      uVar26 = uVar26 | uVar26 >> 8;
      uVar26 = uVar26 | uVar26 >> 0x10;
      uVar26 = (uVar26 | uVar26 >> 0x20) ^ 0xffffffffffffffff;
      uVar26 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    }
    uVar12 = (ulonglong)(uVar16 == 0);
    uStack_a0 = 0;
    uStack_a8 = 0;
    apuStack_b8[1] = (undefined *)0x0;
    apuStack_b8[0] = (undefined *)0x0;
    uVar4 = uVar26 & 0x3f;
    apuStack_b8[uVar12] = (undefined *)((longlong)apuStack_88[0] << uVar4);
    puVar9 = apuStack_b8[0];
    lVar22 = 0x10;
    if (uVar16 != 0) {
      lVar22 = 8;
    }
    plVar24 = (longlong *)((longlong)apuStack_b8 + lVar22);
    *plVar24 = (longlong)apuStack_88[1] << uVar4;
    apuStack_b8[uVar12 + 2] = (undefined *)(uStack_78 << uVar4);
    if (uVar16 != 0) {
      uStack_a0 = uStack_70 << uVar4;
    }
    if (uVar4 != 0) {
      uVar13 = -uVar26 & 0x3f;
      *plVar24 = *plVar24 + ((ulonglong)apuStack_88[0] >> uVar13);
      apuStack_b8[uVar12 + 2] =
           (undefined *)((longlong)apuStack_b8[uVar12 + 2] + ((ulonglong)apuStack_88[1] >> uVar13));
      if (uVar16 != 0) {
        uStack_a0 = uStack_a0 + (uStack_78 >> uVar13);
      }
    }
    uVar12 = uStack_a0;
    uVar16 = uStack_a8;
    puVar1 = apuStack_b8[1];
    uVar15 = uVar15 - 1 >> 6;
    uStack_70 = uStack_a0;
    uStack_78 = uStack_a8;
    apuStack_88[1] = apuStack_b8[1];
    apuStack_88[0] = apuStack_b8[0];
    uVar17 = 0x40 - uVar26 >> 6;
    puVar20 = param_2 + uVar17;
    uVar13 = 0x40 - uVar26 & 0x3f;
    uStack_50 = puVar20[2] >> uVar13;
    apuStack_68[1] = (undefined *)(*puVar20 >> uVar13);
    uStack_58 = puVar20[1] >> uVar13;
    if (uVar26 == 0) {
      uStack_48 = 0;
    }
    else {
      uStack_48 = param_2[uVar17 + 3] >> uVar13;
      if (uVar13 != 0) {
        uStack_50 = (uVar19 << uVar4) + uStack_50;
        uStack_58 = (puVar20[2] << uVar4) + uStack_58;
        apuStack_68[1] = apuStack_68[1] + (puVar20[1] << uVar4);
      }
    }
    uVar19 = uVar15 - uVar23;
    uVar13 = uVar23 + 1;
    apuStack_68[0] = (undefined *)(*param_2 << uVar4);
    ppuStack_190 = apuStack_68 + (uVar15 - uVar23);
    uVar5 = apuStack_b8[uVar23 + 5];
    auStack_40[3] = 0;
    auStack_40[2] = 0;
    auStack_40[1] = 0;
    auStack_40[0] = 0;
    puVar6 = apuStack_b8[uVar23 + 6];
    uVar15 = uVar19;
    do {
      uVar17 = uVar15 + uVar13;
      if (4 < uVar17) {
LAB_ram_0002a6f0:
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar17,5,&DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
      }
      ppuVar11 = apuStack_68 + uVar17;
      uVar25 = 0xffffffffffffffff;
      if (*ppuVar11 < puVar6) {
        if (4 < uVar15 + uVar23) {
                    /* WARNING: Subroutine does not return */
          fn_2df20__custom_panic(0xffffffffffffffff,5,&DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
        }
        uVar17 = uVar17 - 2;
        if (4 < uVar17) goto LAB_ram_0002a6f0;
        puVar21 = apuStack_68[uVar15 + uVar23];
        fn_31788(&uStack_c8,puVar21,*ppuVar11,puVar6,0);
        uVar14 = uStack_c8;
        fn_30150(alStack_d8,uStack_c8,uStack_c0,puVar6,0);
        puVar27 = apuStack_68[uVar17];
        puVar21 = puVar21 + -alStack_d8[0];
        do {
          uVar25 = uVar14;
          fn_30150(&puStack_e8,uVar25,0,uVar5,0);
          bVar10 = true;
          bVar3 = true;
          if (puVar27 < puStack_e8) {
            bVar3 = false;
            if (puVar21 <= puStack_e0) goto LAB_ram_00029bd8;
LAB_ram_00029ba0:
            if (puVar21 == puStack_e0) goto LAB_ram_00029be8;
LAB_ram_00029ba8:
            if (bVar10) break;
          }
          else {
            if (puStack_e0 < puVar21) goto LAB_ram_00029ba0;
LAB_ram_00029bd8:
            bVar10 = false;
            if (puVar21 != puStack_e0) goto LAB_ram_00029ba8;
LAB_ram_00029be8:
            if (bVar3) break;
          }
          bVar3 = puVar21 <= puVar21 + (longlong)puVar6;
          uVar14 = uVar25 - 1;
          uVar25 = uVar25 - 1;
          puVar21 = puVar21 + (longlong)puVar6;
        } while (bVar3);
      }
      fn_30150(&puStack_f8,uVar25,0,puVar9,0);
      fn_30150(&lStack_108,uVar25,0,puVar1,0);
      fn_30150(&lStack_118,uVar25,0,uVar16,0);
      fn_30150(&lStack_128,uVar25,0,uVar12,0);
      uVar17 = lStack_100 + (ulonglong)(puStack_f0 + lStack_108 < puStack_f0);
      uStack_a8 = uVar17 + lStack_118;
      uVar17 = lStack_110 + (ulonglong)(uStack_a8 < uVar17);
      uStack_a0 = uVar17 + lStack_128;
      apuStack_b8[0] = puStack_f8;
      apuStack_b8[1] = puStack_f0 + lStack_108;
      uStack_98 = lStack_120 + (ulonglong)(uStack_a0 < uVar17);
      if (5 < uVar19) {
        fn_2f318__custom_panic(uVar19,5,&DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
        goto LAB_ram_0002a690;
      }
      uVar17 = 5 - uVar15;
      uVar14 = uVar17;
      if (uVar23 + 2 <= uVar17) {
        uVar14 = uVar23 + 2;
      }
      uVar2 = 5;
      if (uVar15 == 5) {
LAB_ram_0002a720:
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar2,4,&DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
      }
      lVar22 = 0;
      uVar18 = 0;
      uVar2 = 0;
      do {
        uVar7 = *(ulonglong *)((longlong)apuStack_b8 + lVar22);
        uVar2 = uVar7 + uVar2;
        uVar8 = *(ulonglong *)((longlong)ppuStack_190 + lVar22);
        *(ulonglong *)((longlong)ppuStack_190 + lVar22) = uVar8 - uVar2;
        uVar2 = (ulonglong)(uVar2 < uVar7 || uVar8 < uVar2);
        lVar22 = lVar22 + 8;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar14);
      if (uVar2 != 0) {
        if (uVar13 <= uVar17) {
          uVar17 = uVar13;
        }
        lVar22 = 0;
        uVar14 = 0;
        uVar2 = 0;
        do {
          uVar18 = *(ulonglong *)((longlong)apuStack_88 + lVar22);
          uVar2 = uVar18 + uVar2;
          uVar8 = *(ulonglong *)((longlong)ppuStack_190 + lVar22);
          uVar7 = uVar8 + uVar2;
          *(ulonglong *)((longlong)ppuStack_190 + lVar22) = uVar7;
          uVar2 = (ulonglong)(uVar2 < uVar18 || uVar7 < uVar8);
          lVar22 = lVar22 + 8;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
        *ppuVar11 = *ppuVar11 + uVar2;
        uVar25 = uVar25 - 1;
      }
      uVar2 = uVar19;
      if (3 < uVar19) goto LAB_ram_0002a720;
      auStack_40[uVar15] = uVar25;
      ppuStack_190 = ppuStack_190 + -1;
      bVar3 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar3);
    uStack_98 = uStack_48;
    uStack_a0 = uStack_50;
    uStack_a8 = uStack_58;
    apuStack_b8[1] = apuStack_68[1];
    apuStack_b8[0] = apuStack_68[0];
    auStack_40[4] = (ulonglong)apuStack_68[0] >> uVar4;
    auStack_40[5] = (ulonglong)apuStack_68[1] >> uVar4;
    auStack_40[6] = uStack_58 >> uVar4;
    auStack_40[7] = uStack_50 >> uVar4;
    if (uVar26 != 0) {
      uVar15 = 1;
      do {
        if (uVar15 < 4) {
          uVar19 = uVar15 + 1;
          uVar16 = uVar15 - 1;
          if (3 < uVar16) {
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(0xffffffffffffffff,4,&DAT_ram_00032610 /* .data.rel.ro: &str "contract/src/arith.rs" (len=21) */);
          }
        }
        else {
          uVar19 = 4;
          uVar16 = 3;
        }
        auStack_40[uVar16 + 4] =
             auStack_40[uVar16 + 4] | (longlong)apuStack_b8[uVar15] << (-uVar26 & 0x3f);
        bVar3 = uVar15 < 4;
        uVar15 = uVar19;
      } while (bVar3);
    }
    param_1[7] = auStack_40[7];
    param_1[6] = auStack_40[6];
    param_1[5] = auStack_40[5];
    param_1[4] = auStack_40[4];
    param_1[3] = auStack_40[3];
    param_1[2] = auStack_40[2];
    param_1[1] = auStack_40[1];
    *param_1 = auStack_40[0];
  }
  return;
}


/* ---- custom_panic @ 0x2a780 ---- */

void custom_panic(longlong param_1)

{
  fn_2a678(**(undefined8 **)(param_1 + 8),(*(undefined8 **)(param_1 + 8))[1]);
  fn_2a698("** PANICKED **",0xe);
  return;
}


/* ---- fn_2a678 @ 0x2a798 ---- */

void fn_2a678(void)

{
  fn_2a678();
  fn_2a698("** PANICKED **",0xe);
  return;
}


/* ---- fn_2a698 @ 0x2a7b8 ---- */

void fn_2a698(void)

{
  fn_2a698();
  return;
}


/* ---- fn_2a6a8__sol_memcmp @ 0x2a7c8 ---- */

void fn_2a6a8__sol_memcmp(ulonglong *param_1)

{
  *param_1 = *param_1 ^ 0x69d190c683eda5d3;
  param_1[1] = param_1[1] ^ 0x962f6f387c135a2c;
  param_1[2] = param_1[2] ^ 0x962c6f3b7c105a2d;
  param_1[3] = param_1[3] ^ 0x962d6f3a7c115a2e;
  param_1[4] = param_1[4] ^ 0x962a6f3d7c165a2f;
  param_1[5] = param_1[5] ^ 0x962b6f3c7c175a28;
  param_1[6] = param_1[6] ^ 0x96286f3f7c145a29;
  param_1[7] = param_1[7] ^ 0x96296f3e7c155a2a;
  param_1[8] = param_1[8] ^ 0x96266f317c1a5a2b;
  param_1[9] = param_1[9] ^ 0x96276f307c1b5a24;
  param_1[10] = param_1[10] ^ 0x96246f337c185a25;
  param_1[0xb] = param_1[0xb] ^ 0x96256f327c195a26;
  param_1[0xc] = param_1[0xc] ^ 0x96226f357c1e5a27;
  param_1[0xd] = param_1[0xd] ^ 0x96236f347c1f5a20;
  param_1[0xe] = param_1[0xe] ^ 0x96206f377c1c5a21;
  param_1[0xf] = param_1[0xf] ^ 0x96216f367c1d5a22;
  param_1[0x10] = param_1[0x10] ^ 0x963e6f297c025a23;
  param_1[0x11] = param_1[0x11] ^ 0x963f6f287c035a3c;
  fn_2930__sol_memcmp(param_1 + 0x12);
  param_1[0x30] = param_1[0x30] ^ 0xfb5ce87aae443c38;
  param_1[0x31] = param_1[0x31] ^ 0x4a2178451bac3c7;
  param_1[0x32] = param_1[0x32] ^ 0x4a1178751b9c3c6;
  param_1[0x33] = param_1[0x33] ^ 0x4a0178651b8c3c5;
  param_1[0x34] = param_1[0x34] ^ 0xfb5ce87aae443c38;
  param_1[0x35] = param_1[0x35] ^ 0x4a2178451bac3c7;
  param_1[0x36] = param_1[0x36] ^ 0x4a1178751b9c3c6;
  param_1[0x37] = param_1[0x37] ^ 0x4a0178651b8c3c5;
  param_1[0x38] = param_1[0x38] ^ 0xfb5ce87aae443c38;
  param_1[0x39] = param_1[0x39] ^ 0x4a2178451bac3c7;
  param_1[0x3a] = param_1[0x3a] ^ 0x4a1178751b9c3c6;
  param_1[0x3b] = param_1[0x3b] ^ 0x4a0178651b8c3c5;
  param_1[0x3c] = param_1[0x3c] ^ 0xfb5ce87aae443c38;
  param_1[0x3d] = param_1[0x3d] ^ 0x4a2178451bac3c7;
  param_1[0x3e] = param_1[0x3e] ^ 0x4a1178751b9c3c6;
  param_1[0x3f] = param_1[0x3f] ^ 0x4a0178651b8c3c5;
  param_1[0x40] = param_1[0x40] ^ 0xfb5ce87aae443c38;
  param_1[0x41] = param_1[0x41] ^ 0x4a2178451bac3c7;
  param_1[0x42] = param_1[0x42] ^ 0x4a1178751b9c3c6;
  param_1[0x43] = param_1[0x43] ^ 0x4a0178651b8c3c5;
  param_1[0x44] = param_1[0x44] ^ 0xb957ed15dc877c26;
  param_1[0x45] = param_1[0x45] ^ 0x46a912eb237873d9;
  param_1[0x46] = param_1[0x46] ^ 0xf539f2cf9513d4a1;
  param_1[0x47] = param_1[0x47] ^ 0xadcf8e5743314562;
  param_1[0x48] = param_1[0x48] ^ 0xb957ed15dc877426;
  param_1[0x49] = param_1[0x49] ^ 0x46a912eb23798bd9;
  param_1[0x4a] = param_1[0x4a] ^ 0x6e9de2b30b19f9ea;
  param_1[0x4b] = param_1[0x4b] ^ 0x6e9de2b30b19f9ea;
  param_1[0x4c] = param_1[0x4c] ^ 0x6e9de2b30b19f1ea;
  param_1[0x4d] = param_1[0x4d] ^ 0x6e9de2b30b19f1ea;
  param_1[0x4e] = param_1[0x4e] ^ 0xdbf169454ad22fa;
  param_1[0x4f] = param_1[0x4f] ^ 0xf241e96aab522d05;
  param_1[0x50] = param_1[0x50] ^ 0xf242e969ab532d04;
  param_1[0x51] = param_1[0x51] ^ 0xf243e968ab502d07;
  param_1[0x52] = param_1[0x52] ^ 0xf244e96fab512d06;
  param_1[0x53] = param_1[0x53] ^ 0xf245e96eab562d01;
  param_1[0x54] = param_1[0x54] ^ 0xf246e96dab572d00;
  param_1[0x55] = param_1[0x55] ^ 0xf247e96cab542d03;
  param_1[0x56] = param_1[0x56] ^ 0xf248e963ab552d02;
  param_1[0x57] = param_1[0x57] ^ 0xf249e962ab5a2d0d;
  param_1[0x58] = param_1[0x58] ^ 0xed5f563e78eee80b;
  param_1[0x59] = param_1[0x59] ^ 0xd3198133b7c1776c;
  param_1[0x5a] = param_1[0x5a] ^ 0xb82c93d08854ebff;
  param_1[0x5b] = param_1[0x5b] ^ 0x47d26c2e77aa1400;
  param_1[0x5c] = param_1[0x5c] ^ 0x47d16c2d77a91401;
  param_1[0x5d] = param_1[0x5d] ^ 0x47d06c2c77a81402;
  param_1[0x5e] = param_1[0x5e] ^ 0x47d76c2b77af1403;
  param_1[0x5f] = param_1[0x5f] ^ 0x47d66c2a77ae1404;
  param_1[0x60] = param_1[0x60] ^ 0x47d56c2977ad1405;
  param_1[0x61] = param_1[0x61] ^ 0x47d46c2877ac1406;
  param_1[0x62] = param_1[0x62] ^ 0x47db6c2777a31407;
  param_1[99] = param_1[99] ^ 0x47da6c2677a21408;
  param_1[100] = param_1[100] ^ 0x504156a22548f8dd;
  param_1[0x65] = param_1[0x65] ^ 0x35f72d643d3464eb;
  param_1[0x66] = param_1[0x66] ^ 0x9578e14d1d0d9c4e;
  param_1[0x67] = param_1[0x67] ^ 0xff64577ac49fae40;
  param_1[0x68] = param_1[0x68] ^ 0x9aa8843b60a9bf;
  param_1[0x69] = param_1[0x69] ^ 0x99a8873b61a9be;
  param_1[0x6a] = param_1[0x6a] ^ 0x98a8863b62a9bd;
  param_1[0x6b] = param_1[0x6b] ^ 0x9fa8813b63a9bc;
  param_1[0x6c] = param_1[0x6c] ^ 0x9ea8803b64a9bb;
  param_1[0x6d] = param_1[0x6d] ^ 0x9da8833b65a9ba;
  param_1[0x6e] = param_1[0x6e] ^ 0x9ca8823b66a9b9;
  param_1[0x6f] = param_1[0x6f] ^ 0x93a88d3b67a9b8;
  param_1[0x70] = param_1[0x70] ^ 0x92a88c3b68a9b7;
  param_1[0x71] = param_1[0x71] ^ 0xfb5ce87aae443c38;
  param_1[0x72] = param_1[0x72] ^ 0x4a2178451bac3c7;
  param_1[0x73] = param_1[0x73] ^ 0x4a1178751b9c3c6;
  param_1[0x74] = param_1[0x74] ^ 0x4a0178651b8c3c5;
  param_1[0x75] = param_1[0x75] ^ 0xcf44133cb352d91c;
  return;
}


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


/* ---- fn_2b5e0__sol_invoke_signed_c @ 0x2b700 ---- */

/* WARNING: Removing unreachable block (ram,0x0002ba20) */

void fn_2b5e0__sol_invoke_signed_c(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plStack_e0;
  undefined2 uStack_d8;
  longlong *plStack_d0;
  undefined2 uStack_c8;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  longlong **pplStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  lVar5 = *(longlong *)param_2[1];
  plStack_d0 = (longlong *)(lVar5 + 8);
  lVar7 = *(longlong *)*param_2;
  plStack_e0 = (longlong *)(lVar7 + 8);
  uStack_c8 = 0;
  uStack_d8 = 1;
  uStack_b9 = 0x12;
  puVar4 = (undefined1 *)param_2[2];
  uStack_b8 = *puVar4;
  uStack_b7 = puVar4[1];
  uStack_b6 = puVar4[2];
  uStack_b5 = puVar4[3];
  uStack_b4 = puVar4[4];
  uStack_b3 = puVar4[5];
  uStack_b2 = puVar4[6];
  uStack_b1 = puVar4[7];
  uStack_b0 = puVar4[8];
  uStack_af = puVar4[9];
  uStack_ae = puVar4[10];
  uStack_ad = puVar4[0xb];
  uStack_ac = puVar4[0xc];
  uStack_ab = puVar4[0xd];
  uStack_aa = puVar4[0xe];
  uStack_a9 = puVar4[0xf];
  uStack_a8 = puVar4[0x10];
  uStack_a7 = puVar4[0x11];
  uStack_a6 = puVar4[0x12];
  uStack_a5 = puVar4[0x13];
  uStack_a4 = puVar4[0x14];
  uStack_a3 = puVar4[0x15];
  uStack_a2 = puVar4[0x16];
  uStack_a1 = puVar4[0x17];
  uStack_a0 = puVar4[0x18];
  uStack_9f = puVar4[0x19];
  uStack_9e = puVar4[0x1a];
  uStack_9d = puVar4[0x1b];
  uStack_9c = puVar4[0x1c];
  uStack_9b = puVar4[0x1d];
  uStack_9a = puVar4[0x1e];
  uStack_99 = puVar4[0x1f];
  pcStack_90 = *(char **)*param_2;
  pcStack_98 = pcStack_90 + 8;
  if ((((*(longlong *)(pcStack_90 + 8) != *plStack_e0) ||
       (*(longlong *)(pcStack_90 + 0x10) != *(longlong *)(lVar7 + 0x10))) ||
      (*(longlong *)(pcStack_90 + 0x18) != *(longlong *)(lVar7 + 0x18))) ||
     (bVar3 = false, *(longlong *)(pcStack_90 + 0x20) != *(longlong *)(lVar7 + 0x20))) {
    bVar3 = true;
  }
  uVar6 = 1;
  if ((bVar3) || (uVar6 = 0xb, *pcStack_90 != -1)) goto LAB_ram_0002bd80;
  uStack_68 = 1;
  if (pcStack_90[1] == '\0') {
    uStack_68 = 0;
    if (pcStack_90[2] != '\0') goto LAB_ram_0002ba90;
LAB_ram_0002bdb0:
    uVar8 = 0;
    uStack_67 = 0;
    cVar1 = pcStack_90[3];
  }
  else {
    if (pcStack_90[2] == '\0') goto LAB_ram_0002bdb0;
LAB_ram_0002ba90:
    uVar8 = 1;
    uStack_67 = 1;
    cVar1 = pcStack_90[3];
  }
  if (cVar1 == '\0') {
    uStack_67 = uVar8;
  }
  uStack_66 = cVar1 != '\0';
  uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
  pcStack_78 = pcStack_90 + 0x28;
  pcStack_80 = pcStack_90 + 0x58;
  pcStack_90 = pcStack_90 + 0x48;
  uStack_70 = 0;
  pbStack_58 = *(byte **)param_2[1];
  pbStack_60 = pbStack_58 + 8;
  if (((*(longlong *)(pbStack_58 + 8) != *plStack_d0) ||
      (*(longlong *)(pbStack_58 + 0x10) != *(longlong *)(lVar5 + 0x10))) ||
     ((*(longlong *)(pbStack_58 + 0x18) != *(longlong *)(lVar5 + 0x18) ||
      (bVar3 = false, *(longlong *)(pbStack_58 + 0x20) != *(longlong *)(lVar5 + 0x20))))) {
    bVar3 = true;
  }
  uVar6 = 1;
  if ((bVar3) || (uVar6 = 0xb, (*pbStack_58 | 0x77) != 0xff)) goto LAB_ram_0002bd80;
  uStack_30 = 1;
  if (pbStack_58[1] == 0) {
    uStack_30 = 0;
    if (pbStack_58[2] != 0) goto LAB_ram_0002bc50;
LAB_ram_0002bdf0:
    uVar8 = 0;
    uStack_2f = 0;
    bVar2 = pbStack_58[3];
  }
  else {
    if (pbStack_58[2] == 0) goto LAB_ram_0002bdf0;
LAB_ram_0002bc50:
    uVar8 = 1;
    uStack_2f = 1;
    bVar2 = pbStack_58[3];
  }
  if (bVar2 == 0) {
    uStack_2f = uVar8;
  }
  uStack_2e = bVar2 != 0;
  uStack_50 = *(undefined8 *)(pbStack_58 + 0x50);
  pbStack_40 = pbStack_58 + 0x28;
  pbStack_48 = pbStack_58 + 0x58;
  pbStack_58 = pbStack_58 + 0x48;
  uStack_38 = 0;
  puStack_10 = &uStack_b9;
  pplStack_20 = &plStack_e0;
  puStack_28 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
  uStack_8 = 0x21;
  uStack_18 = 2;
  fn_2bc48(&puStack_28,&pcStack_98,2,param_3,param_4);
  uVar6 = 0x1a;
LAB_ram_0002bd80:
  *param_1 = uVar6;
  return;
}


/* ---- fn_2bc48 @ 0x2bd68 ---- */

void fn_2bc48(void)

{
  undefined4 *unaff_R6;
  
  fn_2bc48();
  *unaff_R6 = 0x1a;
  return;
}


/* ---- fn_2bcf8__sol_invoke_signed_c @ 0x2be18 ---- */

void fn_2bcf8__sol_invoke_signed_c(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char *pcStack_110;
  undefined2 uStack_108;
  char *pcStack_100;
  undefined2 uStack_f8;
  byte *pbStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  char **ppcStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  pcStack_c8 = *(char **)*param_2;
  pcStack_90 = *(char **)param_2[1];
  pbStack_58 = *(byte **)param_2[2];
  pbStack_f0 = pbStack_58 + 8;
  pcStack_100 = pcStack_90 + 8;
  pcStack_110 = pcStack_c8 + 8;
  uStack_e8 = 0x100;
  uStack_f8 = 1;
  uStack_108 = 1;
  uStack_d9 = 3;
  uStack_d8 = param_2[3];
  if (*pcStack_c8 == -1) {
    uStack_a0 = pcStack_c8[1] != '\0';
    uStack_9f = pcStack_c8[2] != '\0';
    uStack_9e = pcStack_c8[3] != '\0';
    uStack_c0 = *(undefined8 *)(pcStack_c8 + 0x50);
    pcStack_b0 = pcStack_c8 + 0x28;
    pcStack_b8 = pcStack_c8 + 0x58;
    pcStack_c8 = pcStack_c8 + 0x48;
    uStack_a8 = 0;
    if (*pcStack_90 == -1) {
      uStack_68 = 1;
      if (pcStack_90[1] == '\0') {
        uStack_68 = 0;
        if (pcStack_90[2] == '\0') goto LAB_ram_0002c2a0;
LAB_ram_0002c028:
        uVar4 = 1;
        uStack_67 = 1;
        cVar1 = pcStack_90[3];
      }
      else {
        if (pcStack_90[2] != '\0') goto LAB_ram_0002c028;
LAB_ram_0002c2a0:
        uVar4 = 0;
        uStack_67 = 0;
        cVar1 = pcStack_90[3];
      }
      if (cVar1 == '\0') {
        uStack_67 = uVar4;
      }
      uStack_66 = cVar1 != '\0';
      uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
      pcStack_78 = pcStack_90 + 0x28;
      pcStack_80 = pcStack_90 + 0x58;
      pcStack_90 = pcStack_90 + 0x48;
      uStack_70 = 0;
      if ((*pbStack_58 & 0x88) == 0x88) {
        uStack_30 = 1;
        if (pbStack_58[1] == 0) {
          uStack_30 = 0;
          if (pbStack_58[2] == 0) goto LAB_ram_0002c2e0;
LAB_ram_0002c120:
          uVar4 = 1;
          uStack_2f = 1;
          bVar2 = pbStack_58[3];
        }
        else {
          if (pbStack_58[2] != 0) goto LAB_ram_0002c120;
LAB_ram_0002c2e0:
          uVar4 = 0;
          uStack_2f = 0;
          bVar2 = pbStack_58[3];
        }
        if (bVar2 == 0) {
          uStack_2f = uVar4;
        }
        uStack_2e = bVar2 != 0;
        uStack_50 = *(undefined8 *)(pbStack_58 + 0x50);
        pbStack_40 = pbStack_58 + 0x28;
        pbStack_48 = pbStack_58 + 0x58;
        pbStack_58 = pbStack_58 + 0x48;
        uStack_38 = 0;
        puStack_10 = &uStack_d9;
        ppcStack_20 = &pcStack_110;
        puStack_28 = &DAT_ram_00031980 /* .rodata: hex: 06 dd f6 e1 d7 65 a1 93 d9 cb e1 46 ce eb 79 ac */;
        uStack_8 = 9;
        uStack_18 = 3;
        pcStack_d0 = pcStack_110;
        pcStack_98 = pcStack_100;
        pbStack_60 = pbStack_f0;
        fn_2c120(&puStack_28,&pcStack_d0,3,param_3,param_4);
        uVar3 = 0x1a;
        goto LAB_ram_0002c268;
      }
    }
  }
  uVar3 = 0xb;
LAB_ram_0002c268:
  *param_1 = uVar3;
  return;
}


/* ---- fn_2c120 @ 0x2c240 ---- */

void fn_2c120(void)

{
  undefined4 *unaff_R6;
  
  fn_2c120();
  *unaff_R6 = 0x1a;
  return;
}


/* ---- fn_2c1e8 @ 0x2c308 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_2c1e8(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uVar2 = *(ulonglong *)(param_5 + -0x1000);
  uVar4 = *(ulonglong *)(param_5 + -0xff8);
  if ((uVar4 & 0xffffffff) == 0x80) {
    lStack_40 = 0;
    if (param_2 == 0 && param_3 == 0x8000000000000000) {
      lStack_38 = 0;
      if ((param_4 & uVar2) == 0xffffffffffffffff) {
        param_1[1] = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        return;
      }
    }
    else {
      lStack_38 = 0;
    }
  }
  else {
    fn_30108(&lStack_40,param_2,param_3,uVar4 & 0x7f);
    fn_2fe70(&lStack_50,param_2,param_3,-uVar4 & 0x7f);
    param_3 = uStack_48;
    param_2 = lStack_50;
  }
  uVar4 = 0xffffffffffffffff;
  lVar3 = -1;
  if ((lStack_40 == 0 && lStack_38 == 0) && (lVar3 = 0, param_2 != 0)) {
    lVar3 = 0;
  }
  lVar1 = lStack_40;
  if ((longlong)param_3 < 0) {
    lVar1 = -lStack_40;
  }
  if ((longlong)param_3 < 0) {
    lStack_38 = -(lStack_38 + (ulonglong)(lStack_40 != 0));
  }
  lVar3 = lVar3 - param_2;
  if (-1 < (longlong)param_3) {
    lVar3 = param_2;
  }
  fn_2c770(&lStack_30,lVar1,lStack_38,lVar3);
  if (lStack_30 == 0 && lStack_28 == 0) {
    uVar4 = 0;
  }
  param_3 = param_3 ^ uVar2;
  if ((longlong)param_3 < 0) {
    uStack_18 = (uVar4 - uStack_18) - (ulonglong)(uVar4 < uStack_20);
    uStack_20 = uVar4 - uStack_20;
  }
  if ((longlong)param_3 < 0) {
    lStack_28 = -(lStack_28 + (ulonglong)(lStack_30 != 0));
  }
  lVar3 = -lStack_30;
  if (-1 < (longlong)param_3) {
    lVar3 = lStack_30;
  }
  *param_1 = lVar3;
  param_1[1] = lStack_28;
  *(bool *)(param_1 + 2) = uStack_20 != lStack_28 >> 0x3f || uStack_18 != lStack_28 >> 0x3f;
  return;
}


/* ---- fn_2c770 @ 0x2c890 ---- */

void fn_2c770(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lStack_178;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  longlong alStack_100 [2];
  ulonglong uStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  longlong alStack_d0 [2];
  longlong lStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  longlong alStack_a0 [2];
  ulonglong uStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  longlong alStack_70 [2];
  longlong lStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  longlong lStack_10;
  undefined8 uStack_8;
  
  uStack_128 = *(ulonglong *)(param_5 + -0xff8);
  uVar9 = *(ulonglong *)(param_5 + -0xff0);
  if (uVar9 == 0) {
    uVar1 = uStack_128 | uStack_128 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = (uVar1 | uVar1 >> 0x20) ^ 0xffffffffffffffff;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
    uVar1 = ((uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  else {
    uVar1 = uVar9 | uVar9 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = (uVar1 | uVar1 >> 0x20) ^ 0xffffffffffffffff;
    uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
    uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
    uVar1 = (uVar1 + (uVar1 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  uVar10 = *(ulonglong *)(param_5 + -0x1000);
  uVar12 = (undefined4)uVar1;
  if (uVar1 == 0) {
    lStack_10 = 0;
    uStack_8 = 0;
    uStack_148 = param_4;
    uStack_140 = param_3;
    uStack_138 = param_2;
  }
  else {
    fn_302f8(&lStack_10,param_4,uVar10,-uVar1 & 0x7f);
    fn_30108(&uStack_20,param_4,uVar10,uVar12);
    fn_302f8(&uStack_30,param_2,param_3,-uVar1 & 0x7f);
    fn_30108(&uStack_40,param_2,param_3,uVar12);
    fn_30108(&uStack_50,uStack_128,uVar9,uVar12);
    uVar10 = uStack_28 | uStack_18;
    uStack_148 = uStack_30 | uStack_20;
    uStack_128 = uStack_50;
    uStack_140 = uStack_38;
    uStack_138 = uStack_40;
    uVar9 = uStack_48;
  }
  fn_31788(&lStack_60,lStack_10,uStack_8,uVar9,0);
  fn_30150(alStack_70,lStack_60,uStack_58,uVar9,0);
  fn_30150(&uStack_80,lStack_60,uStack_58,uStack_128,0);
  uVar1 = lStack_10 - alStack_70[0];
  bVar5 = true;
  bVar3 = true;
  if (uVar10 < uStack_80) {
    bVar3 = false;
    if (uVar1 < uStack_78) goto LAB_ram_0002cfb8;
LAB_ram_0002ce38:
    if (uVar1 == uStack_78) goto LAB_ram_0002ce40;
LAB_ram_0002cfc8:
    if (bVar5) goto LAB_ram_0002cfe0;
LAB_ram_0002ce50:
    uVar8 = uVar10 + uStack_128;
    uVar7 = uVar1 + uVar9 + (ulonglong)(uVar8 < uVar10);
    uVar6 = 1;
    if (uVar8 < uStack_80) {
      uVar6 = 0;
      if (uVar7 < uStack_78) goto LAB_ram_0002da68;
LAB_ram_0002cec8:
      uVar14 = 1;
      if (uVar7 == uStack_78) goto LAB_ram_0002ced0;
LAB_ram_0002da78:
      uVar6 = uVar14;
      if (uVar1 <= uVar7) goto LAB_ram_0002da90;
LAB_ram_0002cee0:
      uVar14 = 1;
      if (uVar7 == uVar1) goto LAB_ram_0002cee8;
LAB_ram_0002daa0:
      uVar6 = uVar14 | uVar6;
    }
    else {
      if (uStack_78 <= uVar7) goto LAB_ram_0002cec8;
LAB_ram_0002da68:
      uVar14 = 0;
      if (uVar7 != uStack_78) goto LAB_ram_0002da78;
LAB_ram_0002ced0:
      if (uVar7 < uVar1) goto LAB_ram_0002cee0;
LAB_ram_0002da90:
      uVar14 = 0;
      if (uVar7 != uVar1) goto LAB_ram_0002daa0;
LAB_ram_0002cee8:
      uVar6 = uVar8 < uVar10 | uVar6;
    }
    lVar11 = -1;
    if (uVar6 == 0) {
      lVar11 = -2;
    }
    uVar1 = uVar9;
    if ((uVar6 == 0) && (uVar8 = uStack_128 + uVar8, uVar8 < uStack_128)) {
      lVar4 = 1;
    }
    else {
      lVar4 = 0;
      if (uVar6 != 0) {
        uVar1 = 0;
      }
    }
    lVar4 = (uVar1 + uVar7 + lVar4) - uStack_78;
    lVar11 = lVar11 + lStack_60;
    uVar10 = uVar8;
  }
  else {
    if (uStack_78 <= uVar1) goto LAB_ram_0002ce38;
LAB_ram_0002cfb8:
    bVar5 = false;
    if (uVar1 != uStack_78) goto LAB_ram_0002cfc8;
LAB_ram_0002ce40:
    if (!bVar3) goto LAB_ram_0002ce50;
LAB_ram_0002cfe0:
    lVar4 = uVar1 - uStack_78;
    lVar11 = lStack_60;
  }
  bVar3 = true;
  fn_31788(&uStack_90,uVar10 - uStack_80,lVar4 - (ulonglong)(uVar10 < uStack_80),uVar9,0);
  fn_30150(alStack_a0,uStack_90,lStack_88,uVar9,0);
  fn_30150(&uStack_b0,uStack_90,lStack_88,uStack_128,0);
  uVar1 = (uVar10 - uStack_80) - alStack_a0[0];
  bVar5 = true;
  if (uStack_148 < uStack_b0) {
    bVar5 = false;
    if (uVar1 < uStack_a8) goto LAB_ram_0002d310;
LAB_ram_0002d128:
    if (uVar1 == uStack_a8) goto LAB_ram_0002d130;
LAB_ram_0002d328:
    if (bVar3) goto LAB_ram_0002d340;
LAB_ram_0002d140:
    uVar7 = uStack_148 + uStack_128;
    uVar6 = uVar1 + uVar9 + (ulonglong)(uVar7 < uStack_148);
    uVar10 = 1;
    if (uVar7 < uStack_b0) {
      uVar10 = 0;
      if (uVar6 < uStack_a8) goto LAB_ram_0002db20;
LAB_ram_0002d1c0:
      uVar8 = 1;
      if (uVar6 == uStack_a8) goto LAB_ram_0002d1c8;
LAB_ram_0002db30:
      uVar10 = uVar8;
      if (uVar1 <= uVar6) goto LAB_ram_0002db48;
LAB_ram_0002d1d8:
      uVar8 = 1;
      if (uVar6 == uVar1) goto LAB_ram_0002d1e0;
LAB_ram_0002db58:
      uVar10 = uVar8 | uVar10;
    }
    else {
      if (uStack_a8 <= uVar6) goto LAB_ram_0002d1c0;
LAB_ram_0002db20:
      uVar8 = 0;
      if (uVar6 != uStack_a8) goto LAB_ram_0002db30;
LAB_ram_0002d1c8:
      if (uVar6 < uVar1) goto LAB_ram_0002d1d8;
LAB_ram_0002db48:
      uVar8 = 0;
      if (uVar6 != uVar1) goto LAB_ram_0002db58;
LAB_ram_0002d1e0:
      uVar10 = uVar7 < uStack_148 | uVar10;
    }
    uVar8 = 0xffffffffffffffff;
    if (uVar10 == 0) {
      uVar8 = 0xfffffffffffffffe;
    }
    uVar1 = uVar8 + uStack_90;
    uVar14 = 0;
    if (uVar10 == 0) {
      uVar14 = uStack_128;
    }
    uStack_148 = uVar14 + uVar7;
    uVar7 = 0;
    if (uVar10 == 0) {
      uVar7 = uVar9;
    }
    lVar2 = lStack_88 + (ulonglong)(uVar1 < uVar8) + -1;
    lVar4 = (uVar7 + uVar6 + (ulonglong)(uStack_148 < uVar14)) - uStack_a8;
  }
  else {
    if (uStack_a8 <= uVar1) goto LAB_ram_0002d128;
LAB_ram_0002d310:
    bVar3 = false;
    if (uVar1 != uStack_a8) goto LAB_ram_0002d328;
LAB_ram_0002d130:
    if (!bVar5) goto LAB_ram_0002d140;
LAB_ram_0002d340:
    lVar4 = uVar1 - uStack_a8;
    lVar2 = lStack_88;
    uVar1 = uStack_90;
  }
  bVar3 = true;
  fn_31788(&lStack_c0,uStack_148 - uStack_b0,lVar4 - (ulonglong)(uStack_148 < uStack_b0),
                   uVar9,0);
  fn_30150(alStack_d0,lStack_c0,uStack_b8,uVar9,0);
  fn_30150(&uStack_e0,lStack_c0,uStack_b8,uStack_128,0);
  uVar10 = (uStack_148 - uStack_b0) - alStack_d0[0];
  bVar5 = true;
  if (uStack_140 < uStack_e0) {
    bVar5 = false;
    if (uVar10 < uStack_d8) goto LAB_ram_0002d618;
LAB_ram_0002d478:
    if (uVar10 == uStack_d8) goto LAB_ram_0002d480;
LAB_ram_0002d630:
    if (bVar3) goto LAB_ram_0002d648;
LAB_ram_0002d490:
    uVar8 = uStack_140 + uStack_128;
    uVar7 = uVar10 + uVar9 + (ulonglong)(uVar8 < uStack_140);
    uVar6 = 1;
    if (uVar8 < uStack_e0) {
      uVar6 = 0;
      if (uVar7 < uStack_d8) goto LAB_ram_0002db98;
LAB_ram_0002d508:
      uVar14 = 1;
      if (uVar7 == uStack_d8) goto LAB_ram_0002d510;
LAB_ram_0002dba8:
      uVar6 = uVar14;
      if (uVar10 <= uVar7) goto LAB_ram_0002dbc0;
LAB_ram_0002d520:
      uVar14 = 1;
      if (uVar7 == uVar10) goto LAB_ram_0002d528;
LAB_ram_0002dbd0:
      uVar6 = uVar14 | uVar6;
    }
    else {
      if (uStack_d8 <= uVar7) goto LAB_ram_0002d508;
LAB_ram_0002db98:
      uVar14 = 0;
      if (uVar7 != uStack_d8) goto LAB_ram_0002dba8;
LAB_ram_0002d510:
      if (uVar7 < uVar10) goto LAB_ram_0002d520;
LAB_ram_0002dbc0:
      uVar14 = 0;
      if (uVar7 != uVar10) goto LAB_ram_0002dbd0;
LAB_ram_0002d528:
      uVar6 = uVar8 < uStack_140 | uVar6;
    }
    lVar13 = -1;
    if (uVar6 == 0) {
      lVar13 = -2;
    }
    lVar13 = lVar13 + lStack_c0;
    uVar10 = 0;
    if (uVar6 == 0) {
      uVar10 = uStack_128;
    }
    uStack_140 = uVar10 + uVar8;
    uVar8 = 0;
    if (uVar6 == 0) {
      uVar8 = uVar9;
    }
    lVar4 = (uVar8 + uVar7 + (ulonglong)(uStack_140 < uVar10)) - uStack_d8;
  }
  else {
    if (uStack_d8 <= uVar10) goto LAB_ram_0002d478;
LAB_ram_0002d618:
    bVar3 = false;
    if (uVar10 != uStack_d8) goto LAB_ram_0002d630;
LAB_ram_0002d480:
    if (!bVar5) goto LAB_ram_0002d490;
LAB_ram_0002d648:
    lVar4 = uVar10 - uStack_d8;
    lVar13 = lStack_c0;
  }
  bVar3 = true;
  fn_31788(&uStack_f0,uStack_140 - uStack_e0,lVar4 - (ulonglong)(uStack_140 < uStack_e0),
                   uVar9,0);
  fn_30150(alStack_100,uStack_f0,lStack_e8,uVar9,0);
  fn_30150(&uStack_110,uStack_f0,lStack_e8,uStack_128,0);
  uVar10 = (uStack_140 - uStack_e0) - alStack_100[0];
  bVar5 = true;
  if (uStack_138 < uStack_110) {
    bVar5 = false;
    if (uVar10 < uStack_108) goto LAB_ram_0002d930;
LAB_ram_0002d780:
    if (uVar10 == uStack_108) goto LAB_ram_0002d788;
LAB_ram_0002d948:
    if (bVar3) goto code_r0x0002d980;
  }
  else {
    if (uStack_108 <= uVar10) goto LAB_ram_0002d780;
LAB_ram_0002d930:
    bVar3 = false;
    if (uVar10 != uStack_108) goto LAB_ram_0002d948;
LAB_ram_0002d788:
    if (bVar5) goto code_r0x0002d980;
  }
  uVar7 = uStack_138 + uStack_128;
  lStack_178 = 1;
  uVar8 = uVar10 + uVar9 + (ulonglong)(uVar7 < uStack_138);
  uVar6 = 1;
  if (uVar7 < uStack_110) {
    uVar6 = 0;
    if (uVar8 < uStack_108) goto LAB_ram_0002dc10;
LAB_ram_0002d828:
    uVar14 = 1;
    if (uVar8 == uStack_108) goto LAB_ram_0002d830;
LAB_ram_0002dc20:
    uVar6 = uVar14;
    if (uVar10 <= uVar8) goto LAB_ram_0002dc38;
LAB_ram_0002d840:
    uVar14 = 1;
    if (uVar8 == uVar10) goto LAB_ram_0002d848;
LAB_ram_0002dc48:
    uVar6 = uVar14 | uVar6;
    if (uVar6 == 0) goto LAB_ram_0002dc68;
LAB_ram_0002d860:
    uStack_f0 = uStack_f0 - 1;
    if (uStack_f0 != 0xffffffffffffffff) goto LAB_ram_0002d880;
LAB_ram_0002dc90:
    lVar4 = 0;
    if (uVar6 == 0) goto LAB_ram_0002dca8;
LAB_ram_0002dcd0:
    lStack_178 = 0;
    uStack_138 = uVar7;
  }
  else {
    if (uStack_108 <= uVar8) goto LAB_ram_0002d828;
LAB_ram_0002dc10:
    uVar14 = 0;
    if (uVar8 != uStack_108) goto LAB_ram_0002dc20;
LAB_ram_0002d830:
    if (uVar8 < uVar10) goto LAB_ram_0002d840;
LAB_ram_0002dc38:
    uVar14 = 0;
    if (uVar8 != uVar10) goto LAB_ram_0002dc48;
LAB_ram_0002d848:
    uVar6 = uVar7 < uStack_138 | uVar6;
    if (uVar6 != 0) goto LAB_ram_0002d860;
LAB_ram_0002dc68:
    uStack_f0 = uStack_f0 - 2;
    if (0xfffffffffffffffd < uStack_f0) goto LAB_ram_0002dc90;
LAB_ram_0002d880:
    lVar4 = 1;
    if (uVar6 != 0) goto LAB_ram_0002dcd0;
LAB_ram_0002dca8:
    uVar7 = uStack_128 + uVar7;
    uStack_138 = uVar7;
    if (uStack_128 <= uVar7) goto LAB_ram_0002dcd0;
  }
  uVar10 = 0;
  if (uVar6 == 0) {
    uVar10 = uVar9;
  }
  uVar10 = uVar10 + uVar8 + lStack_178;
  lStack_e8 = lStack_e8 + lVar4 + -1;
code_r0x0002d980:
  fn_302f8(&uStack_120,uStack_138 - uStack_110,
                   (uVar10 - uStack_108) - (ulonglong)(uStack_138 < uStack_110),uVar12);
  param_1[2] = uVar1;
  *param_1 = uStack_f0;
  param_1[3] = lVar2 + lVar11;
  param_1[1] = lStack_e8 + lVar13;
  param_1[5] = uStack_118;
  param_1[4] = uStack_120;
  return;
}


/* ---- fn_2dd00__sol_try_find_program_address @ 0x2de20 ---- */

void fn_2dd00__sol_try_find_program_address(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_1;
  
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  puStack_38 = (undefined *)0x0;
  uStack_1 = 0xff;
  lVar1 = fn_2dd70(param_2,param_3,param_4,&puStack_38,&uStack_1);
  if (lVar1 == 0) {
    param_1[3] = uStack_20;
    param_1[2] = uStack_28;
    param_1[1] = uStack_30;
    *param_1 = puStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_1;
    return;
  }
  puStack_38 = &DAT_ram_00032b10 /* .data.rel.ro: &str "Unable to find a viable program address bump seed" (len=49) */;
  uStack_18 = 0;
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_38,&DAT_ram_00032b20 /* .data.rel.ro: &str "src/lib.rs" (len=10) */);
}


/* ---- fn_2dd70 @ 0x2de90 ---- */

void fn_2dd70(void)

{
  longlong lVar1;
  undefined8 *unaff_R6;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 uStack_1;
  
  lVar1 = fn_2dd70();
  if (lVar1 == 0) {
    unaff_R6[3] = uStack_20;
    unaff_R6[2] = uStack_28;
    unaff_R6[1] = uStack_30;
    *unaff_R6 = puStack_38;
    *(undefined1 *)(unaff_R6 + 4) = uStack_1;
    return;
  }
  puStack_38 = &DAT_ram_00032b10 /* .data.rel.ro: &str "Unable to find a viable program address bump seed" (len=49) */;
  uStack_18 = 0;
  uStack_30 = 1;
  uStack_20 = 0;
  uStack_28 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_38,&DAT_ram_00032b20 /* .data.rel.ro: &str "src/lib.rs" (len=10) */);
}


/* ---- fn_2de38 @ 0x2df58 ---- */

void fn_2de38(void)

{
  fn_2de38();
  return;
}


/* ---- fn_2de48__custom_panic @ 0x2df68 ---- */

void fn_2de48__custom_panic(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  fn_2de50();
  fn_2de50();
  fn_2de58();
  puVar1 = &DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */;
  puVar3 = (undefined8 *)0x2b;
  fn_2deb8__custom_panic(&DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */,0x2b,param_1);
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  ppuVar2 = &puStack_18;
  puStack_18 = puVar1;
  puStack_10 = puVar3;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = ppuVar2;
  puStack_8 = puVar3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_1);
}


/* ---- fn_2de50 @ 0x2df70 ---- */

void fn_2de50(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  fn_2de50();
  fn_2de58();
  puVar1 = &DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */;
  puVar3 = (undefined8 *)0x2b;
  fn_2deb8__custom_panic(&DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */,0x2b,param_1);
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  ppuVar2 = &puStack_18;
  puStack_18 = puVar1;
  puStack_10 = puVar3;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = ppuVar2;
  puStack_8 = puVar3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_1);
}


/* ---- fn_2de58 @ 0x2df78 ---- */

void fn_2de58(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  fn_2de58();
  puVar1 = &DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */;
  puVar3 = (undefined8 *)0x2b;
  fn_2deb8__custom_panic(&DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */,0x2b,param_1);
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  ppuVar2 = &puStack_18;
  puStack_18 = puVar1;
  puStack_10 = puVar3;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = ppuVar2;
  puStack_8 = puVar3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_1);
}


/* ---- fn_2de60__custom_panic @ 0x2df80 ---- */

void fn_2de60__custom_panic(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  puVar1 = &DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */;
  puVar3 = (undefined8 *)0x2b;
  fn_2deb8__custom_panic(&DAT_ram_00032340 /* .rodata: hex: 63 61 6c 6c 65 64 20 60 4f 70 74 69 6f 6e 3a 3a */,0x2b,param_1);
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  ppuVar2 = &puStack_18;
  puStack_18 = puVar1;
  puStack_10 = puVar3;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = ppuVar2;
  puStack_8 = puVar3;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_1);
}


/* ---- fn_2de88__custom_panic @ 0x2dfa8 ---- */

void fn_2de88__custom_panic(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 *puStack_10;
  undefined8 *puStack_8;
  
  puStack_8 = (undefined8 *)CONCAT62(puStack_8._2_6_,1);
  puVar1 = &uStack_18;
  uStack_18 = param_1;
  puStack_10 = param_2;
  fn_2de48__custom_panic();
  ppuStack_40 = &puStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  puStack_10 = puVar1;
  puStack_8 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&ppuStack_40,param_3);
}


/* ---- fn_2deb8__custom_panic @ 0x2dfd8 ---- */

void fn_2deb8__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  puStack_40 = &uStack_10;
  uStack_20 = 0;
  uStack_38 = 1;
  uStack_28 = 0;
  uStack_30 = 8;
  uStack_10 = param_1;
  uStack_8 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_40,param_3);
}


/* ---- fn_2df20__custom_panic @ 0x2e040 ---- */

void fn_2df20__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  undefined8 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_00032b38 /* .data.rel.ro: &str "index out of bounds: the len is " (len=32) */;
  ppuStack_40 = &puStack_20;
  puStack_10 = &uStack_60;
  puStack_8 = &LAB_ram_0002f9a0;
  puStack_18 = &LAB_ram_0002f9a0;
  puStack_20 = &uStack_58;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_60 = param_1;
  uStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_3);
}


/* ---- fn_2dfe8__custom_panic @ 0x2e108 ---- */

void fn_2dfe8__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  undefined8 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_00032b58 /* .data.rel.ro: hex: 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 */;
  ppuStack_40 = &puStack_20;
  puStack_8 = &LAB_ram_0002fc70;
  puStack_10 = &uStack_60;
  puStack_18 = &LAB_ram_0002fca0;
  puStack_20 = &uStack_70;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_5);
}


/* ---- fn_2e0d0 @ 0x2e1f0 ---- */

undefined8 fn_2e0d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  longlong lStack_18;
  undefined8 uStack_10;
  undefined1 uStack_8;
  
  uStack_8 = 3;
  uStack_10 = 0x20;
  uStack_30 = 0;
  uStack_40 = 0;
  lVar10 = param_3[4];
  uStack_20 = param_1;
  lStack_18 = param_2;
  if (lVar10 == 0) {
    if (param_3[3] != 0) {
      puVar6 = (undefined8 *)param_3[2];
      puVar11 = puVar6 + param_3[3] * 2;
      uVar9 = 0;
      plVar12 = (longlong *)(*param_3 + 8);
      do {
        if (((*plVar12 != 0) &&
            (lVar10 = func_0x00000000(uStack_20,plVar12[-1],*plVar12,
                                      *(undefined8 *)(lStack_18 + 0x18)), lVar10 != 0)) ||
           (lVar10 = func_0x00000000(*puVar6,&uStack_40,puVar6[1]), lVar10 != 0))
        goto LAB_ram_0002e610;
        uVar9 = uVar9 + 1;
        plVar12 = plVar12 + 2;
        puVar6 = puVar6 + 2;
      } while (puVar6 != puVar11);
      goto LAB_ram_0002e5a0;
    }
  }
  else {
    lVar3 = param_3[5];
    if (lVar3 != 0) {
      lVar8 = 0;
      lVar4 = param_3[2];
      plVar12 = (longlong *)(*param_3 + 8);
      uVar9 = 0;
      do {
        lVar7 = *plVar12;
        if ((lVar7 != 0) &&
           (lVar1 = func_0x00000000(uStack_20,plVar12[-1],lVar7,*(undefined8 *)(lStack_18 + 0x18)),
           lVar1 != 0)) goto LAB_ram_0002e610;
        lVar1 = lVar10 + lVar8;
        uStack_8 = *(undefined1 *)(lVar1 + 0x30);
        uStack_10 = *(undefined8 *)(lVar1 + 0x28);
        uStack_30 = 0;
        uStack_40 = 0;
        if (*(longlong *)(lVar1 + 0x10) != 2) {
          plVar5 = (longlong *)(lVar1 + 0x10);
          if (*(longlong *)(lVar1 + 0x10) == 1) {
            lVar7 = *(longlong *)(lVar10 + lVar8 + 0x18) * 0x10;
            plVar5 = (longlong *)(lVar4 + lVar7);
            if (*plVar5 != 0) goto LAB_ram_0002e388;
          }
          uStack_40 = 1;
          lVar7 = plVar5[1];
        }
LAB_ram_0002e388:
        plVar5 = (longlong *)(lVar10 + lVar8);
        lStack_28 = *plVar5;
        if (lStack_28 != 2) {
          if (lStack_28 == 1) {
            lStack_28 = *(longlong *)(lVar10 + lVar8 + 8) * 0x10;
            plVar5 = (longlong *)(lVar4 + lStack_28);
            if (*plVar5 != 0) goto LAB_ram_0002e418;
          }
          uStack_30 = 1;
          lStack_28 = plVar5[1];
        }
LAB_ram_0002e418:
        puVar6 = (undefined8 *)(lVar4 + *(longlong *)(lVar10 + lVar8 + 0x20) * 0x10);
        lStack_38 = lVar7;
        lVar7 = func_0x00000000(*puVar6,&uStack_40,puVar6[1]);
        if (lVar7 != 0) goto LAB_ram_0002e610;
        uVar9 = uVar9 + 1;
        plVar12 = plVar12 + 2;
        lVar8 = lVar8 + 0x38;
      } while (lVar3 * 0x38 != lVar8);
      goto LAB_ram_0002e5a0;
    }
  }
  uVar9 = 0;
LAB_ram_0002e5a0:
  if ((uVar9 < (ulonglong)param_3[1]) &&
     (puVar6 = (undefined8 *)(*param_3 + uVar9 * 0x10),
     lVar10 = func_0x00000000(uStack_20,*puVar6,puVar6[1],*(undefined8 *)(lStack_18 + 0x18)),
     lVar10 != 0)) {
LAB_ram_0002e610:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


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


/* ---- fn_2ea28 @ 0x2eb48 ---- */

undefined8 fn_2ea28(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_2 & 0xffffffff) != 0x110000) &&
     (lVar1 = func_0x00000000(*(undefined8 *)(param_1 + 0x20),param_2,
                              *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x20)), lVar1 != 0)) {
    return 1;
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x00000000(*(undefined8 *)(param_1 + 0x20),param_3,param_4,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18));
  }
  return uVar2;
}


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


/* ---- fn_2f080 @ 0x2f1a0 ---- */

void fn_2f080(longlong param_1)

{
  func_0x00000000(*(undefined8 *)(param_1 + 0x20));
  return;
}


/* ---- fn_2f0b0 @ 0x2f1d0 ---- */

void fn_2f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  fn_2eae8(param_3,param_1,param_2);
  return;
}


/* ---- fn_2f0e0 @ 0x2f200 ---- */

void fn_2f0e0(undefined8 *param_1,byte param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar1 = param_3 + 7 & 0xfffffffffffffff8;
  uVar4 = uVar3;
  if (uVar1 != param_3) {
    uVar1 = uVar1 - param_3;
    if (param_4 <= uVar1) {
      uVar1 = param_4;
    }
    if (uVar1 != 0) {
      do {
        if (*(byte *)(param_3 + uVar3) == param_2) goto LAB_ram_0002f418;
        uVar3 = uVar3 + 1;
        uVar4 = uVar1;
      } while (uVar3 < uVar1);
    }
  }
  if (uVar4 <= param_4 - 0x10) {
    do {
      uVar3 = ((ulonglong *)(param_3 + uVar4))[1] ^ (ulonglong)param_2 * 0x101010101010101;
      uVar1 = *(ulonglong *)(param_3 + uVar4) ^ (ulonglong)param_2 * 0x101010101010101;
      if (((0x101010101010100 - uVar1 | uVar1) & (0x101010101010100 - uVar3 | uVar3) &
          0x8080808080808080) != 0x8080808080808080) break;
      uVar4 = uVar4 + 0x10;
    } while (uVar4 <= param_4 - 0x10);
  }
  uVar3 = uVar4;
  if (param_4 == uVar4) {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if (*(byte *)(param_3 + uVar4 + uVar1) == param_2) {
        uVar3 = uVar4 + uVar1;
LAB_ram_0002f418:
        uVar2 = 1;
        goto LAB_ram_0002f420;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_4 - uVar4);
    uVar2 = 0;
  }
LAB_ram_0002f420:
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return;
}


/* ---- fn_2f318__custom_panic @ 0x2f438 ---- */

longlong fn_2f318__custom_panic(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  fn_2fbb0__custom_panic();
  fn_2fc78__custom_panic();
  fn_2fd40__custom_panic();
  pcVar8 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar8 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar9 = param_2 - uVar4, uVar9 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar9 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar8 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar8;
      pcVar8 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar8 = param_1 + uVar4 + (uVar9 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar8 = param_1 + uVar4;
    uVar4 = uVar9 >> 3;
    do {
      uVar9 = uVar4;
      pcVar2 = pcVar8;
      if (uVar9 == 0) {
        return lVar1;
      }
      uVar3 = uVar9;
      if (0xbf < uVar9) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar9) {
        pcVar8 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar8 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar8 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar8 = pcVar8 + 0x20;
        } while (pcVar8 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar8 = pcVar2 + uVar3 * 8;
      uVar4 = uVar9 - uVar3;
    } while ((uVar3 & 3) == 0);
    if (0xbf < uVar9) {
      uVar9 = 0;
    }
    puVar6 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
    uVar4 = 0;
    lVar5 = (uVar9 & 3) << 3;
    do {
      uVar4 = (((*puVar6 ^ 0xffffffffffffffff) >> 7 | *puVar6 >> 6) & 0x101010101010101) + uVar4;
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}


/* ---- fn_2f320__custom_panic @ 0x2f440 ---- */

longlong fn_2f320__custom_panic(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  fn_2fc78__custom_panic();
  fn_2fd40__custom_panic();
  pcVar8 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar8 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar9 = param_2 - uVar4, uVar9 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar9 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar8 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar8;
      pcVar8 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar8 = param_1 + uVar4 + (uVar9 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar8 = param_1 + uVar4;
    uVar4 = uVar9 >> 3;
    do {
      uVar9 = uVar4;
      pcVar2 = pcVar8;
      if (uVar9 == 0) {
        return lVar1;
      }
      uVar3 = uVar9;
      if (0xbf < uVar9) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar9) {
        pcVar8 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar8 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar8 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar8 = pcVar8 + 0x20;
        } while (pcVar8 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar8 = pcVar2 + uVar3 * 8;
      uVar4 = uVar9 - uVar3;
    } while ((uVar3 & 3) == 0);
    if (0xbf < uVar9) {
      uVar9 = 0;
    }
    puVar6 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
    uVar4 = 0;
    lVar5 = (uVar9 & 3) << 3;
    do {
      uVar4 = (((*puVar6 ^ 0xffffffffffffffff) >> 7 | *puVar6 >> 6) & 0x101010101010101) + uVar4;
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}


/* ---- fn_2f328__custom_panic @ 0x2f448 ---- */

longlong fn_2f328__custom_panic(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  fn_2fd40__custom_panic();
  pcVar8 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar8 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar9 = param_2 - uVar4, uVar9 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar9 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar8 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar8;
      pcVar8 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar8 = param_1 + uVar4 + (uVar9 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar8 = param_1 + uVar4;
    uVar4 = uVar9 >> 3;
    do {
      uVar9 = uVar4;
      pcVar2 = pcVar8;
      if (uVar9 == 0) {
        return lVar1;
      }
      uVar3 = uVar9;
      if (0xbf < uVar9) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar9) {
        pcVar8 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar8 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar8 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar8 = pcVar8 + 0x20;
        } while (pcVar8 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar8 = pcVar2 + uVar3 * 8;
      uVar4 = uVar9 - uVar3;
    } while ((uVar3 & 3) == 0);
    if (0xbf < uVar9) {
      uVar9 = 0;
    }
    puVar6 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
    uVar4 = 0;
    lVar5 = (uVar9 & 3) << 3;
    do {
      uVar4 = (((*puVar6 ^ 0xffffffffffffffff) >> 7 | *puVar6 >> 6) & 0x101010101010101) + uVar4;
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}


/* ---- fn_2f330 @ 0x2f450 ---- */

longlong fn_2f330(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  pcVar8 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar8 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar9 = param_2 - uVar4, uVar9 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar9 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar8 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar8;
      pcVar8 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar8 = param_1 + uVar4 + (uVar9 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar8 = param_1 + uVar4;
    uVar4 = uVar9 >> 3;
    do {
      uVar9 = uVar4;
      pcVar2 = pcVar8;
      if (uVar9 == 0) {
        return lVar1;
      }
      uVar3 = uVar9;
      if (0xbf < uVar9) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar9) {
        pcVar8 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar8 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar8 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar8 = pcVar8 + 0x20;
        } while (pcVar8 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar8 = pcVar2 + uVar3 * 8;
      uVar4 = uVar9 - uVar3;
    } while ((uVar3 & 3) == 0);
    if (0xbf < uVar9) {
      uVar9 = 0;
    }
    puVar6 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
    uVar4 = 0;
    lVar5 = (uVar9 & 3) << 3;
    do {
      uVar4 = (((*puVar6 ^ 0xffffffffffffffff) >> 7 | *puVar6 >> 6) & 0x101010101010101) + uVar4;
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}


/* ---- fn_2f828__custom_panic @ 0x2f948 ---- */

void fn_2f828__custom_panic(undefined8 param_1)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puStack_30 = &DAT_ram_00032b78 /* .data.rel.ro: &str "attempt to divide by zero" (len=25) */;
  uStack_10 = 0;
  uStack_28 = 1;
  uStack_18 = 0;
  uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_30,param_1);
}


/* ---- fn_2f8a8 @ 0x2f9c8 ---- */

void fn_2f8a8(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 uStack_16;
  undefined2 auStack_4 [2];
  
  lVar3 = 0x14;
  if (9999 < param_1) {
    uVar4 = param_1;
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      param_1 = uVar4 / 10000;
      *(undefined2 *)((longlong)auStack_4 + lVar3) =
           *(undefined2 *)(&DAT_ram_0003237f /* .rodata: hex: 30 30 30 31 30 32 30 33 30 34 30 35 30 36 30 37 */ + ((uVar4 % 10000) / 100) * 2);
      *(undefined2 *)((longlong)auStack_4 + lVar3 + 2) =
           *(undefined2 *)(&DAT_ram_0003237f /* .rodata: hex: 30 30 30 31 30 32 30 33 30 34 30 35 30 36 30 37 */ + ((uVar4 % 10000) % 100) * 2);
      bVar1 = 99999999 < uVar4;
      uVar4 = param_1;
      lVar2 = lVar3 + -4;
    } while (bVar1);
    lVar3 = lVar3 + 0x10;
  }
  if (99 < param_1) {
    uVar4 = (param_1 & 0xffff) / 100;
    *(undefined2 *)((longlong)&uStack_16 + lVar3) =
         *(undefined2 *)(&DAT_ram_0003237f /* .rodata: hex: 30 30 30 31 30 32 30 33 30 34 30 35 30 36 30 37 */ + ((param_1 + uVar4 * -100) * 2 & 0xfffe));
    param_1 = uVar4;
    lVar3 = lVar3 + -2;
  }
  if (param_1 < 10) {
    *(byte *)((longlong)&uStack_16 + lVar3 + 1) = (byte)param_1 | 0x30;
  }
  else {
    *(undefined2 *)((longlong)&uStack_16 + lVar3) = *(undefined2 *)(&DAT_ram_0003237f /* .rodata: hex: 30 30 30 31 30 32 30 33 30 34 30 35 30 36 30 37 */ + param_1 * 2)
    ;
  }
  fn_2e510(param_3,param_2,1,0);
  return;
}


/* ---- fn_2fbb0__custom_panic @ 0x2fcd0 ---- */

void fn_2fbb0__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  undefined8 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_00032b88 /* .data.rel.ro: &str "range start index " (len=18) */;
  ppuStack_40 = &puStack_20;
  puStack_10 = &uStack_58;
  puStack_8 = &LAB_ram_0002f9a0;
  puStack_18 = &LAB_ram_0002f9a0;
  puStack_20 = &uStack_60;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_60 = param_1;
  uStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_3);
}


/* ---- fn_2fc78__custom_panic @ 0x2fd98 ---- */

void fn_2fc78__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  undefined8 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_00032ba8 /* .data.rel.ro: &str "range end index " (len=16) */;
  ppuStack_40 = &puStack_20;
  puStack_10 = &uStack_58;
  puStack_8 = &LAB_ram_0002f9a0;
  puStack_18 = &LAB_ram_0002f9a0;
  puStack_20 = &uStack_60;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_60 = param_1;
  uStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_3);
}


/* ---- fn_2fd40__custom_panic @ 0x2fe60 ---- */

void fn_2fd40__custom_panic(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 *puStack_20;
  undefined1 *puStack_18;
  undefined8 *puStack_10;
  undefined1 *puStack_8;
  
  puStack_50 = &DAT_ram_00032bc8 /* .data.rel.ro: &str "slice index starts at " (len=22) */;
  ppuStack_40 = &puStack_20;
  puStack_10 = &uStack_58;
  puStack_8 = &LAB_ram_0002f9a0;
  puStack_18 = &LAB_ram_0002f9a0;
  puStack_20 = &uStack_60;
  uStack_30 = 0;
  uStack_48 = 2;
  uStack_38 = 2;
  uStack_60 = param_1;
  uStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
  fn_2de88__custom_panic(&puStack_50,param_3);
}


/* ---- fn_2fe08__sol_memcpy @ 0x2ff28 ---- */

undefined8 fn_2fe08__sol_memcpy(undefined8 param_1)

{
  fn_2fe10();
  return param_1;
}


/* ---- fn_2fe10 @ 0x2ff30 ---- */

void fn_2fe10(void)

{
  fn_2fe10();
  return;
}


/* ---- fn_2fe28__sol_memmove @ 0x2ff48 ---- */

undefined8 fn_2fe28__sol_memmove(undefined8 param_1)

{
  fn_2fe30();
  return param_1;
}


/* ---- fn_2fe30 @ 0x2ff50 ---- */

void fn_2fe30(void)

{
  fn_2fe30();
  return;
}


/* ---- fn_2fe48__sol_memset @ 0x2ff68 ---- */

undefined8 fn_2fe48__sol_memset(undefined8 param_1,undefined1 param_2)

{
  fn_2fe58(param_1,param_2);
  return param_1;
}


/* ---- fn_2fe58 @ 0x2ff78 ---- */

void fn_2fe58(void)

{
  fn_2fe58();
  return;
}


/* ---- fn_2fe70 @ 0x2ff90 ---- */

void fn_2fe70(undefined8 *param_1)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  fn_2ff78(&uStack_10);
  param_1[1] = uStack_8;
  *param_1 = uStack_10;
  return;
}


/* ---- fn_2feb8 @ 0x2ffd8 ---- */

void fn_2feb8(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0xffffffff) != 0) {
      param_3 = param_3 << (param_4 & 0x3f) | param_2 >> (-param_4 & 0x3f);
      param_2 = param_2 << (param_4 & 0x3f);
    }
  }
  else {
    param_3 = param_2 << (param_4 & 0x3f);
    param_2 = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* ---- fn_2ff78 @ 0x30098 ---- */

void fn_2ff78(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0xffffffff) != 0) {
      param_2 = param_3 << (-param_4 & 0x3f) | param_2 >> (param_4 & 0x3f);
      param_3 = (longlong)param_3 >> (param_4 & 0x3f);
    }
  }
  else {
    param_2 = (longlong)param_3 >> (param_4 & 0x3f);
    param_3 = (longlong)param_3 >> 0x3f;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* ---- fn_30040 @ 0x30160 ---- */

void fn_30040(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  if ((param_4 & 0x40) == 0) {
    if ((param_4 & 0xffffffff) != 0) {
      param_2 = param_3 << (-param_4 & 0x3f) | param_2 >> (param_4 & 0x3f);
      param_3 = param_3 >> (param_4 & 0x3f);
    }
  }
  else {
    param_2 = param_3 >> (param_4 & 0x3f);
    param_3 = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


/* ---- fn_30108 @ 0x30228 ---- */

void fn_30108(undefined8 *param_1)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  fn_2feb8(&uStack_10);
  param_1[1] = uStack_8;
  *param_1 = uStack_10;
  return;
}


/* ---- fn_30150 @ 0x30270 ---- */

void fn_30150(undefined8 *param_1)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  fn_30198(&uStack_10);
  param_1[1] = uStack_8;
  *param_1 = uStack_10;
  return;
}


/* ---- fn_30198 @ 0x302b8 ---- */

void fn_30198(ulonglong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = (param_4 & 0xffffffff) * (param_2 & 0xffffffff);
  uVar4 = (param_4 >> 0x20) * (param_2 & 0xffffffff);
  uVar1 = uVar4 + (param_4 & 0xffffffff) * (param_2 >> 0x20);
  uVar3 = uVar2 + (uVar1 << 0x20);
  *param_1 = uVar3;
  param_1[1] = (param_4 >> 0x20) * (param_2 >> 0x20) +
               ((ulonglong)(uVar1 < uVar4) << 0x20 | uVar1 >> 0x20) + (ulonglong)(uVar3 < uVar2) +
               param_5 * param_2 + param_4 * param_3;
  return;
}


/* ---- fn_302f8 @ 0x30418 ---- */

void fn_302f8(undefined8 *param_1)

{
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  fn_30040(&uStack_10);
  param_1[1] = uStack_8;
  *param_1 = uStack_10;
  return;
}


/* ---- fn_30340 @ 0x30460 ---- */

void fn_30340(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                     ulonglong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uStack_c8;
  longlong lStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong auStack_90 [2];
  ulonglong auStack_80 [2];
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong auStack_60 [2];
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  longlong lStack_28;
  ulonglong auStack_20 [2];
  ulonglong auStack_10 [2];
  
  uVar4 = param_5 | param_5 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  if (param_3 == 0) {
    uVar6 = param_2 | param_2 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  else {
    uVar6 = param_3 | param_3 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (param_5 == 0) {
    uVar4 = param_4 | param_4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) ^ 0xffffffffffffffff;
    uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = ((uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) + 0x40;
  }
  if (uVar6 < uVar4) {
    if (uVar6 < 0x40) {
      if (uVar4 < 0x60) {
        if (0x1f < (uVar4 - uVar6 & 0xffffffff)) {
          uVar2 = 0x60 - uVar4;
          fn_302f8(auStack_10,param_4,param_5,(longlong)(int)uVar2);
          uVar7 = 0;
          uVar5 = 0;
          uStack_c8 = param_2;
          do {
            uVar6 = 0x40 - uVar6;
            fn_302f8(auStack_20,uStack_c8,param_3,(longlong)(int)uVar6);
            if ((uVar6 & 0xffffffff) < (uVar2 & 0xffffffff)) {
              uVar4 = param_4;
              fn_302f8(auStack_60,param_4,param_5,(longlong)(int)uVar6);
              if (auStack_60[0] != 0) {
                uVar4 = auStack_20[0] / auStack_60[0];
              }
              fn_30150(&uStack_70);
              bVar1 = uStack_c8 < uStack_70;
              if (param_3 != uStack_68) {
                bVar1 = param_3 < uStack_68;
              }
              if (bVar1) {
                param_4 = uStack_c8 + param_4;
                uVar4 = (uVar4 + uVar7) - 1;
                param_3 = ((param_3 + param_5 + (ulonglong)(param_4 < uStack_c8)) - uStack_68) -
                          (ulonglong)(param_4 < uStack_70);
                param_2 = param_4 - uStack_70;
                uVar5 = uVar5 + (uVar4 < uVar7);
                uVar7 = uVar4;
              }
              else {
                param_3 = (param_3 - uStack_68) - (ulonglong)(uStack_c8 < uStack_70);
                param_2 = uStack_c8 - uStack_70;
                uVar5 = uVar5 + (uVar7 + uVar4 < uVar7);
                uVar7 = uVar7 + uVar4;
              }
              goto LAB_ram_00030bd0;
            }
            uVar3 = auStack_20[0] / ((auStack_10[0] & 0xffffffff) + 1);
            uVar6 = uVar6 - uVar2 & 0x7f;
            fn_30108(&uStack_30,uVar3,0,uVar6);
            fn_30150(&uStack_40,uVar3,0,param_4,param_5);
            fn_30108(&uStack_50,uStack_40,uStack_38,uVar6);
            uVar7 = uStack_30 + uVar7;
            param_3 = (param_3 - lStack_48) - (ulonglong)(uStack_c8 < uStack_50);
            param_2 = uStack_c8 - uStack_50;
            if (param_3 == 0) {
              uVar6 = param_2 | param_2 >> 1;
              uVar6 = uVar6 | uVar6 >> 2;
              uVar6 = uVar6 | uVar6 >> 4;
              uVar6 = uVar6 | uVar6 >> 8;
              uVar6 = uVar6 | uVar6 >> 0x10;
              uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
              uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
              uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
              uVar6 = ((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) +
                      0x40;
            }
            else {
              uVar6 = param_3 | param_3 >> 1;
              uVar6 = uVar6 | uVar6 >> 2;
              uVar6 = uVar6 | uVar6 >> 4;
              uVar6 = uVar6 | uVar6 >> 8;
              uVar6 = uVar6 | uVar6 >> 0x10;
              uVar6 = (uVar6 | uVar6 >> 0x20) ^ 0xffffffffffffffff;
              uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
              uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
              uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            }
            uVar5 = lStack_28 + uVar5 + (ulonglong)(uVar7 < uStack_30);
            if (uVar4 <= uVar6) {
              bVar1 = param_2 < param_4;
              if (param_3 != param_5) {
                bVar1 = param_3 < param_5;
              }
              if (!bVar1) {
                uVar7 = uVar7 + 1;
                param_3 = (param_3 - param_5) - (ulonglong)(param_2 < param_4);
                uVar5 = uVar5 + (uVar7 == 0);
                param_2 = param_2 - param_4;
              }
              goto LAB_ram_00030bd0;
            }
            uStack_c8 = param_2;
          } while (uVar6 < 0x40);
          if (param_4 != 0) {
            uVar6 = param_2 / param_4;
          }
          param_3 = 0;
          param_2 = param_2 % param_4;
          uVar5 = uVar5 + (uVar7 + uVar6 < uVar7);
          uVar7 = uVar7 + uVar6;
          goto LAB_ram_00030bd0;
        }
        lVar8 = (longlong)(0x40 - (int)uVar6);
        fn_302f8(auStack_80,param_4,param_5,lVar8);
        fn_302f8(auStack_90,param_2,param_3,lVar8);
        uVar7 = auStack_90[0] / auStack_80[0];
        fn_30150(&uStack_a0,param_4,0,uVar7,0);
        fn_30150(&lStack_b0,param_5,0,uVar7,0);
        uVar4 = uStack_98 + lStack_b0;
        if (lStack_a8 + (ulonglong)(uVar4 < uStack_98) == 0) {
          bVar1 = param_2 < uStack_a0;
          if (param_3 != uVar4) {
            bVar1 = param_3 < uVar4;
          }
          if (!bVar1) {
            param_3 = (param_3 - uVar4) - (ulonglong)(param_2 < uStack_a0);
            param_2 = param_2 - uStack_a0;
            goto LAB_ram_00030bc8;
          }
        }
        param_2 = param_4 + param_2;
        param_3 = ((param_5 + param_3 + (ulonglong)(param_2 < param_4)) - uVar4) -
                  (ulonglong)(param_2 < uStack_a0);
        param_2 = param_2 - uStack_a0;
        uVar5 = 0;
        uVar7 = uVar7 - 1;
        goto LAB_ram_00030bd0;
      }
      uVar6 = param_4 & 0xffffffff;
      uVar4 = (param_3 - (param_3 / uVar6) * param_4 << 0x20 | param_2 >> 0x20) / uVar6;
      uVar5 = uVar4 >> 0x20 | param_3 / uVar6;
      param_2 = (param_2 >> 0x20) - uVar4 * param_4 << 0x20 | param_2 & 0xffffffff;
      uVar2 = param_2 / uVar6;
      uVar7 = uVar4 << 0x20 | uVar2;
      param_2 = param_2 - uVar2 * uVar6;
    }
    else {
      uVar7 = param_2 / param_4;
      param_2 = param_2 - uVar7 * param_4;
      uVar5 = 0;
    }
    param_3 = 0;
  }
  else {
    uVar7 = 0;
    bVar1 = param_2 < param_4;
    if (param_3 != param_5) {
      bVar1 = param_3 < param_5;
    }
    if (!bVar1) {
      uVar7 = 1;
      param_3 = (param_3 - param_5) - (ulonglong)(param_2 < param_4);
      param_2 = param_2 - param_4;
    }
LAB_ram_00030bc8:
    uVar5 = 0;
  }
LAB_ram_00030bd0:
  param_1[2] = param_2;
  *param_1 = uVar7;
  param_1[3] = param_3;
  param_1[1] = uVar5;
  return;
}


/* ---- fn_31788 @ 0x318a8 ---- */

void fn_31788(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  fn_30340(&uStack_20);
  param_1[1] = uStack_18;
  *param_1 = uStack_20;
  return;
}


/* ---- abort @ 0x35040 DECOMPILE ERROR: 
Low-level Error: Injection error: Unable to disassemble EXTERNAL block location: ram:00035040 ---- */

/* Total: 148 decompiled, 1 errors */
