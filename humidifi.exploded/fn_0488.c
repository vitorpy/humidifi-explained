/* Function: fn_0488
 * Address:  0x5a8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_0488 @ 0x5a8 ---- */

void fn_0488(ulonglong *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                     ulonglong param_5)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  longlong lStack_8;
  
  fn_30150(&uStack_40,param_3,(longlong)param_3 >> 0x3f);
  fn_30150(&uStack_30,param_4,0,param_2,0);
  fn_30150(&uStack_10,param_5,(longlong)param_5 >> 0x3f,param_2,param_2 >> 0x3f);
  fn_30150(&lStack_20,param_5,(longlong)param_5 >> 0x3f,param_3,(longlong)param_3 >> 0x3f);
  uVar3 = uStack_10 + uStack_40 + lStack_28;
  lVar5 = lStack_8 + (param_2 >> 0x3f & param_5) + (ulonglong)(uVar3 < uStack_10);
  uVar6 = lStack_38 + (param_4 >> 0x3f & param_3) + (ulonglong)(uStack_40 + lStack_28 < uStack_40);
  uVar7 = uVar6 + lStack_20;
  uVar4 = uVar7 + lVar5;
  lVar5 = ((longlong)uVar6 >> 0x3f) + lStack_18 + (ulonglong)(uVar7 < uVar6) + (lVar5 >> 0x3f) +
          (ulonglong)(uVar4 < uVar7);
  uVar6 = (longlong)(uVar4 * 0x10000) >> 0x3f;
  bVar1 = (uVar4 >> 0x30 | lVar5 * 0x10000) == uVar6;
  bVar2 = lVar5 >> 0x30 == uVar6;
  if (bVar1 && bVar2) {
    param_1[1] = uVar3 * 0x10000 | uStack_30 >> 0x30;
    param_1[2] = uVar4 * 0x10000 | uVar3 >> 0x30;
  }
  *param_1 = (ulonglong)(bVar1 && bVar2);
  return;
}
