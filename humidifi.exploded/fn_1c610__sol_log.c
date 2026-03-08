/* Function: fn_1c610__sol_log
 * Address:  0x1c730
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1c610__sol_log @ 0x1c730 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_1c610__sol_log(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined4 uVar8;
  byte bVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uStack_28;
  undefined8 uStack_20;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  longlong lStack_8;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  fn_231b8(&iStack_18,&uStack_28);
  lVar15 = lStack_8;
  if (iStack_18 == 0) {
    uVar16 = *(undefined8 *)(param_5 + -0xff0);
    uVar22 = *(undefined8 *)(param_5 + -0xff8);
    uVar13 = *(undefined8 *)(param_5 + -0x1000);
    uVar2 = CONCAT44(uStack_c,uStack_10);
    fn_23b48(&iStack_18,&uStack_28);
    lVar17 = lStack_8;
    if (iStack_18 == 0) {
      uVar10 = CONCAT44(uStack_c,uStack_10);
      fn_1d720(&iStack_18,&uStack_28,param_4);
      lVar18 = lStack_8;
      if (iStack_18 == 0) {
        uVar3 = CONCAT44(uStack_c,uStack_10);
        fn_1f4f0(&iStack_18,&uStack_28,param_4);
        lVar19 = lStack_8;
        if (iStack_18 == 0) {
          uVar4 = CONCAT44(uStack_c,uStack_10);
          fn_20d70(&iStack_18,&uStack_28,param_4,uVar13,uVar22);
          lVar20 = lStack_8;
          if (iStack_18 == 0) {
            uVar5 = CONCAT44(uStack_c,uStack_10);
            fn_22288(&iStack_18,&uStack_28,param_4);
            lVar21 = lStack_8;
            if (iStack_18 == 0) {
              uVar6 = CONCAT44(uStack_c,uStack_10);
              fn_1f270(&iStack_18,&uStack_28);
              lVar14 = lStack_8;
              if (iStack_18 == 0) {
                uVar23 = CONCAT44(uStack_c,uStack_10);
                fn_256f0(&iStack_18,&uStack_28,uVar16);
                if (iStack_18 == 0) {
                  bVar12 = true;
                  if (lVar17 < lVar15) {
                    if (lVar15 == lVar17) goto LAB_ram_0001caf8;
LAB_ram_0001cd60:
                    if (!bVar12) goto LAB_ram_0001cd80;
LAB_ram_0001cb08:
                    uVar10 = uVar2;
                    lVar17 = lVar15;
                    if (lVar18 < lVar15) goto LAB_ram_0001cb18;
LAB_ram_0001cd98:
                    bVar12 = false;
                    if (uVar10 <= uVar3) goto LAB_ram_0001cdb8;
LAB_ram_0001cb30:
                    bVar11 = true;
                    if (lVar17 == lVar18) goto LAB_ram_0001cb38;
LAB_ram_0001cdc8:
                    if (!bVar12) goto LAB_ram_0001cde8;
LAB_ram_0001cb40:
                    lVar18 = lVar17;
                    uVar3 = uVar10;
                    if (lVar19 < lVar18) goto LAB_ram_0001cb58;
LAB_ram_0001ce00:
                    bVar12 = false;
                    if (uVar3 <= uVar4) goto LAB_ram_0001ce20;
LAB_ram_0001cb70:
                    bVar11 = true;
                    if (lVar18 == lVar19) goto LAB_ram_0001cb78;
LAB_ram_0001ce30:
                    if (!bVar12) goto LAB_ram_0001ce50;
LAB_ram_0001cb80:
                    lVar19 = lVar18;
                    uVar4 = uVar3;
                    if (lVar20 < lVar19) goto LAB_ram_0001cba0;
LAB_ram_0001ce70:
                    bVar12 = false;
                    if (uVar4 <= uVar5) goto LAB_ram_0001ce90;
LAB_ram_0001cbb8:
                    bVar11 = true;
                    if (lVar19 == lVar20) goto LAB_ram_0001cbc8;
LAB_ram_0001cea8:
                    if (!bVar12) goto LAB_ram_0001ced0;
LAB_ram_0001cbd0:
                    lVar20 = lVar19;
                    uVar5 = uVar4;
                    if (lVar21 < lVar20) goto LAB_ram_0001cbf0;
LAB_ram_0001cee8:
                    bVar12 = false;
                    if (uVar5 <= uVar6) goto LAB_ram_0001cf00;
LAB_ram_0001cc00:
                    bVar11 = true;
                    if (lVar20 == lVar21) goto LAB_ram_0001cc08;
LAB_ram_0001cf10:
                    if (!bVar12) goto LAB_ram_0001cf30;
LAB_ram_0001cc10:
                    lVar21 = lVar20;
                    uVar6 = uVar5;
                    if (lVar14 < lVar21) goto LAB_ram_0001cc28;
LAB_ram_0001cf48:
                    bVar12 = false;
                    if (uVar6 <= uVar23) goto LAB_ram_0001cf68;
LAB_ram_0001cc40:
                    bVar11 = true;
                    if (lVar21 == lVar14) goto LAB_ram_0001cc48;
LAB_ram_0001cf78:
                    if (!bVar12) goto LAB_ram_0001cf98;
LAB_ram_0001cc50:
                    lVar14 = lVar21;
                    uVar23 = uVar6;
                    if (lStack_8 < lVar14) goto LAB_ram_0001cc78;
LAB_ram_0001cfc0:
                    bVar12 = false;
                    if (uVar23 <= CONCAT44(uStack_c,uStack_10)) goto LAB_ram_0001cfe0;
LAB_ram_0001cc90:
                    bVar11 = true;
                    if (lVar14 == lStack_8) goto LAB_ram_0001cc98;
LAB_ram_0001cff0:
                    if (!bVar12) goto LAB_ram_0001cca0;
LAB_ram_0001cca0:
                    if (0xffffffffffff < uVar23) goto LAB_ram_0001ccc8;
LAB_ram_0001d038:
                    bVar12 = false;
                    if (lVar14 < 1) goto LAB_ram_0001d050;
LAB_ram_0001ccd8:
                    bVar11 = true;
                    if (lVar14 == 0) goto LAB_ram_0001cce0;
LAB_ram_0001d060:
                    if ((uVar23 & 0xffffffffffff) == 0) goto LAB_ram_0001d088;
LAB_ram_0001cd00:
                    bVar9 = 1;
                    if (uVar23 < 0x1000000000000) goto LAB_ram_0001cd18;
LAB_ram_0001d0a8:
                    bVar7 = 0;
                    if (lVar14 != 0) goto LAB_ram_0001d0b8;
LAB_ram_0001cd20:
                    if (!bVar11) goto LAB_ram_0001d0d8;
LAB_ram_0001d1b8:
                    fn_24768(&iStack_18,&uStack_28);
                    lVar15 = lStack_8;
                    if (iStack_18 == 0) {
                      uVar2 = CONCAT44(uStack_c,uStack_10);
                      fn_25288(&iStack_18,&uStack_28,param_4);
                      if (iStack_18 == 0) {
                        uVar10 = uVar2 + uVar23;
                        uVar23 = uVar10 + CONCAT44(uStack_c,uStack_10);
                        lVar14 = lVar15 + lVar14 + (ulonglong)(uVar10 < uVar2) + lStack_8 +
                                 (ulonglong)(uVar23 < uVar10);
                        goto LAB_ram_0001d2d8;
                      }
                    }
                  }
                  else {
                    bVar12 = false;
                    if (lVar15 != lVar17) goto LAB_ram_0001cd60;
LAB_ram_0001caf8:
                    if (uVar10 < uVar2) goto LAB_ram_0001cb08;
LAB_ram_0001cd80:
                    if (lVar17 <= lVar18) goto LAB_ram_0001cd98;
LAB_ram_0001cb18:
                    bVar12 = true;
                    if (uVar3 < uVar10) goto LAB_ram_0001cb30;
LAB_ram_0001cdb8:
                    bVar11 = false;
                    if (lVar17 != lVar18) goto LAB_ram_0001cdc8;
LAB_ram_0001cb38:
                    if (bVar11) goto LAB_ram_0001cb40;
LAB_ram_0001cde8:
                    if (lVar18 <= lVar19) goto LAB_ram_0001ce00;
LAB_ram_0001cb58:
                    bVar12 = true;
                    if (uVar4 < uVar3) goto LAB_ram_0001cb70;
LAB_ram_0001ce20:
                    bVar11 = false;
                    if (lVar18 != lVar19) goto LAB_ram_0001ce30;
LAB_ram_0001cb78:
                    if (bVar11) goto LAB_ram_0001cb80;
LAB_ram_0001ce50:
                    if (lVar19 <= lVar20) goto LAB_ram_0001ce70;
LAB_ram_0001cba0:
                    bVar12 = true;
                    if (uVar5 < uVar4) goto LAB_ram_0001cbb8;
LAB_ram_0001ce90:
                    bVar11 = false;
                    if (lVar19 != lVar20) goto LAB_ram_0001cea8;
LAB_ram_0001cbc8:
                    if (bVar11) goto LAB_ram_0001cbd0;
LAB_ram_0001ced0:
                    if (lVar20 <= lVar21) goto LAB_ram_0001cee8;
LAB_ram_0001cbf0:
                    bVar12 = true;
                    if (uVar6 < uVar5) goto LAB_ram_0001cc00;
LAB_ram_0001cf00:
                    bVar11 = false;
                    if (lVar20 != lVar21) goto LAB_ram_0001cf10;
LAB_ram_0001cc08:
                    if (bVar11) goto LAB_ram_0001cc10;
LAB_ram_0001cf30:
                    if (lVar21 <= lVar14) goto LAB_ram_0001cf48;
LAB_ram_0001cc28:
                    bVar12 = true;
                    if (uVar23 < uVar6) goto LAB_ram_0001cc40;
LAB_ram_0001cf68:
                    bVar11 = false;
                    if (lVar21 != lVar14) goto LAB_ram_0001cf78;
LAB_ram_0001cc48:
                    if (bVar11) goto LAB_ram_0001cc50;
LAB_ram_0001cf98:
                    if (lVar14 <= lStack_8) goto LAB_ram_0001cfc0;
LAB_ram_0001cc78:
                    bVar12 = true;
                    if (CONCAT44(uStack_c,uStack_10) < uVar23) goto LAB_ram_0001cc90;
LAB_ram_0001cfe0:
                    bVar11 = false;
                    if (lVar14 != lStack_8) goto LAB_ram_0001cff0;
LAB_ram_0001cc98:
                    if (bVar11) goto LAB_ram_0001cca0;
LAB_ram_0001cca0:
                    uVar23 = CONCAT44(uStack_c,uStack_10);
                    lVar14 = lStack_8;
                    if (uVar23 < 0x1000000000000) goto LAB_ram_0001d038;
LAB_ram_0001ccc8:
                    bVar12 = true;
                    if (0 < lVar14) goto LAB_ram_0001ccd8;
LAB_ram_0001d050:
                    bVar11 = false;
                    if (lVar14 != 0) goto LAB_ram_0001d060;
LAB_ram_0001cce0:
                    bVar11 = bVar12;
                    if ((uVar23 & 0xffffffffffff) != 0) goto LAB_ram_0001cd00;
LAB_ram_0001d088:
                    bVar9 = 0;
                    if (0xffffffffffff < uVar23) goto LAB_ram_0001d0a8;
LAB_ram_0001cd18:
                    bVar7 = 1;
                    if (lVar14 == 0) goto LAB_ram_0001cd20;
LAB_ram_0001d0b8:
                    bVar7 = 0;
                    if (bVar11) goto LAB_ram_0001d1b8;
LAB_ram_0001d0d8:
                    if ((bool)(bVar7 & bVar9)) goto LAB_ram_0001d1b8;
                    uVar2 = fn_1d4e0(&uStack_28,&DAT_ram_000319c0);
                    uVar8 = (undefined4)(uVar2 >> 0x20);
                    if ((uVar2 & 0xffffffff) != 0x1a) goto LAB_ram_0001ca60;
                    if ((uVar2 >> 0x20 & 1) == 0) {
                      uVar2 = fn_1d4e0(&uStack_28,&DAT_ram_00031a60);
                      uVar8 = (undefined4)(uVar2 >> 0x20);
                      if ((uVar2 & 0xffffffff) != 0x1a) goto LAB_ram_0001ca60;
                      if ((uVar2 >> 0x20 & 1) != 0) goto LAB_ram_0001d158;
                    }
                    else {
LAB_ram_0001d158:
                      fn_07e8__custom_panic(&iStack_18,0x44c000000000000,0,0x3e8000000000000,0);
                      lVar14 = CONCAT44(uStack_c,uStack_10);
                      uVar23 = CONCAT44(uStack_14,iStack_18);
                    }
LAB_ram_0001d2d8:
                    fn_24c18(&iStack_18,&uStack_28);
                    lVar15 = lStack_8;
                    if (iStack_18 == 0) {
                      uVar2 = CONCAT44(uStack_c,uStack_10);
                      fn_250c8(&iStack_18,&uStack_28);
                      if (iStack_18 == 0) {
                        uVar23 = uVar2 + uVar23;
                        lVar15 = lVar15 + lVar14 + (ulonglong)(uVar23 < uVar2) + lStack_8;
                        uVar2 = uVar23 + CONCAT44(uStack_c,uStack_10);
                        if (uVar2 < uVar23) {
                          lVar15 = lVar15 + 1;
                        }
                        uVar1 = 0xffffffffffff < uVar2;
                        if (lVar15 != 0) {
                          uVar1 = 0 < lVar15;
                        }
                        if (((bool)uVar1) ||
                           ((lVar15 == 0 && uVar2 < 0x1000000000000) &&
                            (uVar2 & 0xffffffffffff) != 0)) {
                          fn_1d4b8(1,0);
                        }
                        *(ulonglong *)(param_1 + 2) = uVar2;
                        *(longlong *)(param_1 + 4) = lVar15;
                        *param_1 = 0;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = (ulonglong)uStack_14;
  uVar8 = uStack_10;
LAB_ram_0001ca60:
  param_1[2] = uVar8;
  param_1[1] = (int)uVar2;
  *param_1 = 1;
  return;
}
