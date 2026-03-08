/* Function: fn_25288
 * Address:  0x253a8
 * Source:   humidifi_decompiled_renamed.c
 */

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
  
  plStack_48 = &DAT_ram_00031a20;
  plStack_50 = &DAT_ram_00031a40;
  bVar4 = true;
  puVar3 = (ushort *)*param_2;
  plVar2 = &DAT_ram_00032033;
  do {
    plVar8 = plVar2;
    if (bVar4) {
      if ((plVar2 == (longlong *)0x0) || (plVar2 == (longlong *)0x320d3)) {
        pplVar5 = &plStack_48;
        plVar8 = (longlong *)0x0;
        if ((plStack_48 == (longlong *)0x0) ||
           (bVar4 = true, plVar2 = plStack_48, plStack_48 == &DAT_ram_00031a40))
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
         (bVar4 = false, plVar2 = plStack_50, plStack_50 == (longlong *)&DAT_ram_00031a60)) {
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
