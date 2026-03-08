/* Function: fn_1f270
 * Address:  0x1f390
 * Source:   humidifi_decompiled_renamed.c
 */

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
