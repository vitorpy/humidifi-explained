/* Function: fn_24c18
 * Address:  0x24d38
 * Source:   humidifi_decompiled_renamed.c
 */

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
