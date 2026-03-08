/* Function: fn_0158
 * Address:  0x278
 * Source:   humidifi_decompiled_renamed.c
 */

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
