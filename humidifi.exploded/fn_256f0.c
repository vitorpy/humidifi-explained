/* Function: fn_256f0
 * Address:  0x25810
 * Source:   humidifi_decompiled_renamed.c
 */

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
