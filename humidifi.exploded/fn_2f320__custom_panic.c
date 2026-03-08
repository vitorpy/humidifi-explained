/* Function: fn_2f320__custom_panic
 * Address:  0x2f440
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2f320__custom_panic @ 0x2f440 ---- */

longlong fn_2f320__custom_panic(char *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  fn_2fc78__custom_panic();
  fn_2fd40__custom_panic();
  pcVar8 = (char *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
  uVar4 = (longlong)pcVar8 - (longlong)param_1;
  if ((param_2 < uVar4) || (uVar9 = param_2 - uVar4, uVar9 < 8)) {
    lVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      lVar1 = lVar1 + (ulonglong)(-0x41 < *param_1);
      param_1 = param_1 + 1;
    }
  }
  else {
    uVar3 = uVar9 & 7;
    lVar1 = 0;
    lVar5 = 0;
    if (pcVar8 != param_1) {
      lVar7 = (longlong)param_1 - (longlong)pcVar8;
      pcVar8 = param_1;
      do {
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
      } while (lVar7 != 0);
    }
    if (uVar3 != 0) {
      pcVar8 = param_1 + uVar4 + (uVar9 & 0xfffffffffffffff8);
      lVar1 = 0;
      do {
        lVar1 = lVar1 + (ulonglong)(-0x41 < *pcVar8);
        pcVar8 = pcVar8 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    lVar1 = lVar1 + lVar5;
    pcVar8 = param_1 + uVar4;
    uVar4 = uVar9 >> 3;
    do {
      uVar9 = uVar4;
      pcVar2 = pcVar8;
      if (uVar9 == 0) {
        return lVar1;
      }
      uVar3 = uVar9;
      if (0xbf < uVar9) {
        uVar3 = 0xc0;
      }
      uVar4 = 0;
      if (3 < uVar9) {
        pcVar8 = pcVar2;
        do {
          lVar5 = 0;
          do {
            uVar4 = (((*(ulonglong *)(pcVar8 + lVar5) ^ 0xffffffffffffffff) >> 7 |
                     *(ulonglong *)(pcVar8 + lVar5) >> 6) & 0x101010101010101) + uVar4;
            lVar5 = lVar5 + 8;
          } while (lVar5 != 0x20);
          pcVar8 = pcVar8 + 0x20;
        } while (pcVar8 != pcVar2 + (uVar3 * 8 & 0x7e0));
      }
      lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
              0x30) + lVar1;
      pcVar8 = pcVar2 + uVar3 * 8;
      uVar4 = uVar9 - uVar3;
    } while ((uVar3 & 3) == 0);
    if (0xbf < uVar9) {
      uVar9 = 0;
    }
    puVar6 = (ulonglong *)(pcVar2 + (uVar3 & 0xfc) * 8);
    uVar4 = 0;
    lVar5 = (uVar9 & 3) << 3;
    do {
      uVar4 = (((*puVar6 ^ 0xffffffffffffffff) >> 7 | *puVar6 >> 6) & 0x101010101010101) + uVar4;
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    lVar1 = (((uVar4 >> 8 & 0xff00ff00ff00ff) + (uVar4 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar1;
  }
  return lVar1;
}
