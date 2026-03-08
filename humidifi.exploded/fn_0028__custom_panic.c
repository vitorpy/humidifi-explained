/* Function: fn_0028__custom_panic
 * Address:  0x148
 * Source:   humidifi_decompiled_renamed.c
 */

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
                   ,0x1c,&DAT_ram_000324b8);
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
