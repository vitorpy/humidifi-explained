/* Function: fn_13340
 * Address:  0x13460
 * Source:   humidifi_decompiled_renamed.c
 */

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
        fn_2df20__custom_panic(lVar12 + 0xcU,uVar4,&DAT_ram_000326e0);
      }
      if (*(char *)(lVar11 + lVar12 + -3) == '\0') {
        if (uVar4 <= lVar12 + 0xdU) {
                    /* WARNING: Subroutine does not return */
          fn_2df20__custom_panic(lVar12 + 0xd,uVar4,&DAT_ram_000326f8);
        }
        if (*(char *)(lVar11 + lVar12 + -2) == '\0') {
          if (uVar4 <= lVar12 + 0xeU) {
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(lVar12 + 0xeU,uVar4,&DAT_ram_00032710);
          }
          if (*(char *)(lVar11 + lVar12 + -1) == '\0') {
            if (uVar4 <= lVar12 + 0xfU) {
                    /* WARNING: Subroutine does not return */
              fn_2df20__custom_panic(lVar12 + 0xfU,uVar4,&DAT_ram_00032728);
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
                fn_2df20__custom_panic(lVar11,uVar4,&DAT_ram_000326c8);
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
