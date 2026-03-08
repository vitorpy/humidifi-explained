/* Function: fn_16af0__sol_log
 * Address:  0x16c10
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_16af0__sol_log @ 0x16c10 ---- */

ulonglong fn_16af0__sol_log(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                          longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  longlong lStack_18;
  longlong lStack_10;
  ulonglong uStack_8;
  
  lVar9 = *(longlong *)(param_5 + -0x1000);
  fn_30150(&uStack_68,param_2,(longlong)param_2 >> 0x3f,lVar9);
  fn_30150(&uStack_58,lVar9,0,param_1,0);
  uVar6 = *(ulonglong *)(param_5 + -0xff8);
  fn_30150(&uStack_38,uVar6,(longlong)uVar6 >> 0x3f,param_1,param_1 >> 0x3f);
  fn_30150(&lStack_48,uVar6,(longlong)uVar6 >> 0x3f,param_2,(longlong)param_2 >> 0x3f);
  uVar4 = uStack_38 + uStack_68 + lStack_50;
  lVar2 = lStack_30 + (param_1 >> 0x3f & uVar6) + (ulonglong)(uVar4 < uStack_38);
  uVar6 = lStack_60 + (lVar9 >> 0x3f & param_2) + (ulonglong)(uStack_68 + lStack_50 < uStack_68);
  uVar7 = uVar6 + lStack_48;
  uVar1 = uVar7 + lVar2;
  uVar10 = 0;
  lVar2 = ((longlong)uVar6 >> 0x3f) + lStack_40 + (ulonglong)(uVar7 < uVar6) + (lVar2 >> 0x3f) +
          (ulonglong)(uVar1 < uVar7);
  uVar7 = (longlong)(uVar1 * 0x10000) >> 0x3f;
  uVar6 = 0x9c;
  if ((uVar1 >> 0x30 | lVar2 * 0x10000) != uVar7 || lVar2 >> 0x30 != uVar7) goto LAB_ram_00017590;
  uVar7 = uVar4 * 0x10000 | uStack_58 >> 0x30;
  uVar1 = uVar1 * 0x10000 | uVar4 >> 0x30;
  if (*(longlong *)(param_5 + -0xff0) == -1) {
    bVar3 = true;
    if (param_3 < uVar7) {
      if ((longlong)param_4 < (longlong)uVar1) goto LAB_ram_00017030;
LAB_ram_00016fd0:
      bVar5 = false;
    }
    else {
      bVar3 = false;
      if ((longlong)uVar1 <= (longlong)param_4) goto LAB_ram_00016fd0;
LAB_ram_00017030:
      bVar5 = true;
    }
    if (uVar1 != param_4) {
      bVar3 = bVar5;
    }
    uVar6 = 0;
    uVar10 = 0x1a;
    if (bVar3) goto LAB_ram_00017590;
  }
  else if (*(longlong *)(param_5 + -0xff0) == 1) {
    bVar3 = uVar7 < param_3;
    if ((longlong)uVar1 < (longlong)param_4) goto LAB_ram_00017030;
    goto LAB_ram_00016fd0;
  }
  uVar4 = uVar7 + param_3;
  uVar10 = 0;
  uVar8 = uVar1 + param_4 + (ulonglong)(uVar4 < uVar7);
  uVar6 = 0xb2;
  if (-1 < (longlong)((uVar1 ^ param_4 ^ 0xffffffffffffffff) & (uVar1 ^ uVar8))) {
    if ((longlong)
        (((uVar8 & 0x7fffffffffff8000) << 1 | (uVar8 << 0x31 | uVar4 >> 0xf) >> 0x30) ^ uVar8) < 0)
    {
      uVar6 = 0xb4;
    }
    else {
      uStack_8 = (uVar1 - param_4) - (ulonglong)(uVar7 < param_3);
      if ((longlong)((uVar1 ^ param_4) & (uVar1 ^ uStack_8)) < 0) {
        uVar6 = 0xb6;
      }
      else {
        lVar2 = uVar7 - param_3;
        lStack_10 = -lVar2;
        if (-1 < (longlong)uStack_8) {
          lStack_10 = lVar2;
        }
        if ((longlong)uStack_8 < 0) {
          uStack_8 = -(uStack_8 + (lVar2 != 0));
        }
        fn_15e8__sol_log(&lStack_28,&lStack_10,(uVar4 >> 0xf) << 0x10 | uVar4 * 2 & 0xfffe);
        uVar6 = 0xb9;
        if (lStack_28 != 0) {
          fn_30150(&uStack_78,lStack_18,lStack_18 >> 0x3f,0x86a0000000000000,
                           0xffffffffffffffff);
          fn_30150(&uStack_88,uStack_20,0,0x86a0000000000000,0);
          uVar1 = uStack_20 + uStack_78 + lStack_80;
          uVar6 = lStack_70 + lStack_18 + (ulonglong)(uStack_78 + lStack_80 < uStack_78);
          uVar4 = uVar6 + lStack_18;
          uVar7 = uVar4 + (uVar1 < uStack_20);
          lVar2 = ((longlong)uVar6 >> 0x3f) + (lStack_18 >> 0x3f) + (ulonglong)(uVar4 < uVar6) +
                  (ulonglong)(uVar7 < uVar4);
          uVar4 = (longlong)(uVar7 * 0x10000) >> 0x3f;
          uVar6 = 0xbc;
          if ((uVar7 >> 0x30 | lVar2 * 0x10000) == uVar4 && lVar2 >> 0x30 == uVar4) {
            uVar6 = uVar7 * 0x10000 | uVar1 >> 0x30;
            uVar10 = 0x1a;
            if ((uVar1 * 0x10000 == 0 && (uStack_88 & 0xffe0000000000000) == 0) && uVar6 == 0) {
              uVar6 = 0;
            }
            else if (uVar6 < 0x10000) {
              uVar6 = uVar1 * 0x10000 >> 0x30 | uVar6 << 0x10;
            }
            else {
              uVar10 = 0;
              uVar6 = 0xbe;
            }
          }
        }
      }
    }
  }
LAB_ram_00017590:
  return uVar6 << 0x20 | uVar10;
}
