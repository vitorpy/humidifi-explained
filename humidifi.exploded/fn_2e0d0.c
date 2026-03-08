/* Function: fn_2e0d0
 * Address:  0x2e1f0
 * Source:   humidifi_decompiled_renamed.c
 */

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
