/* Function: fn_2c1e8
 * Address:  0x2c308
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2c1e8 @ 0x2c308 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_2c1e8(longlong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lStack_50;
  ulonglong uStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  
  uVar2 = *(ulonglong *)(param_5 + -0x1000);
  uVar4 = *(ulonglong *)(param_5 + -0xff8);
  if ((uVar4 & 0xffffffff) == 0x80) {
    lStack_40 = 0;
    if (param_2 == 0 && param_3 == 0x8000000000000000) {
      lStack_38 = 0;
      if ((param_4 & uVar2) == 0xffffffffffffffff) {
        param_1[1] = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        return;
      }
    }
    else {
      lStack_38 = 0;
    }
  }
  else {
    fn_30108(&lStack_40,param_2,param_3,uVar4 & 0x7f);
    fn_2fe70(&lStack_50,param_2,param_3,-uVar4 & 0x7f);
    param_3 = uStack_48;
    param_2 = lStack_50;
  }
  uVar4 = 0xffffffffffffffff;
  lVar3 = -1;
  if ((lStack_40 == 0 && lStack_38 == 0) && (lVar3 = 0, param_2 != 0)) {
    lVar3 = 0;
  }
  lVar1 = lStack_40;
  if ((longlong)param_3 < 0) {
    lVar1 = -lStack_40;
  }
  if ((longlong)param_3 < 0) {
    lStack_38 = -(lStack_38 + (ulonglong)(lStack_40 != 0));
  }
  lVar3 = lVar3 - param_2;
  if (-1 < (longlong)param_3) {
    lVar3 = param_2;
  }
  fn_2c770(&lStack_30,lVar1,lStack_38,lVar3);
  if (lStack_30 == 0 && lStack_28 == 0) {
    uVar4 = 0;
  }
  param_3 = param_3 ^ uVar2;
  if ((longlong)param_3 < 0) {
    uStack_18 = (uVar4 - uStack_18) - (ulonglong)(uVar4 < uStack_20);
    uStack_20 = uVar4 - uStack_20;
  }
  if ((longlong)param_3 < 0) {
    lStack_28 = -(lStack_28 + (ulonglong)(lStack_30 != 0));
  }
  lVar3 = -lStack_30;
  if (-1 < (longlong)param_3) {
    lVar3 = lStack_30;
  }
  *param_1 = lVar3;
  param_1[1] = lStack_28;
  *(bool *)(param_1 + 2) = uStack_20 != lStack_28 >> 0x3f || uStack_18 != lStack_28 >> 0x3f;
  return;
}
