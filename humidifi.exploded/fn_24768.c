/* Function: fn_24768
 * Address:  0x24888
 * Source:   humidifi_decompiled_renamed.c
 */

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
