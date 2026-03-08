/* Function: fn_1d4e0
 * Address:  0x1d600
 * Source:   humidifi_decompiled_renamed.c
 */

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
