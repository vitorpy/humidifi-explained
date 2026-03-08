/* Function: fn_12a18
 * Address:  0x12b38
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_12a18 @ 0x12b38 ---- */

void fn_12a18(int *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int aiStack_28 [2];
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  iVar4 = 0;
  uVar2 = 0xbadc0de;
  if (param_3 == 2) {
    lVar6 = param_2[1];
    lVar3 = *param_2;
    uStack_8 = *(ulonglong *)(lVar6 + 0x270);
    uStack_10 = *(ulonglong *)(lVar6 + 0x268);
    uStack_18 = *(ulonglong *)(lVar6 + 0x260);
    uStack_20 = *(ulonglong *)(lVar6 + 600);
    uVar5 = *(ulonglong *)(lVar6 + 0x710);
    if (uVar5 < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar3 + 8)) || (uStack_18 != *(ulonglong *)(lVar3 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar3 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar3 + 0x20))) {
      bVar1 = true;
    }
    uVar2 = 0xabad1dea;
    if ((*(char *)(lVar3 + 1) != '\0') && (!bVar1)) {
      if (uVar5 == 1) {
        *(undefined8 *)(lVar6 + 0x710) = 2;
      }
      else {
        uVar2 = 0xbad4;
        if (uVar5 == 0) goto LAB_ram_00012f78;
      }
      if (param_5 != 0x50) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
      }
      if ((param_4 & 3) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
      }
      fn_16518(aiStack_28,param_4);
      uVar2 = 0xbad3;
      iVar4 = aiStack_28[0];
      if (aiStack_28[0] == 0x1a) {
        fn_2fe08__sol_memcpy(lVar6 + 0x328,param_4,0x50);
        uVar2 = *(ulonglong *)(lVar6 + 0x330) ^ 0x47d26c2e77aa1400;
        *(ulonglong *)(lVar6 + 0x328) = *(ulonglong *)(lVar6 + 0x328) ^ 0xb82c93d08854ebff;
        *(ulonglong *)(lVar6 + 0x330) = uVar2;
        *(ulonglong *)(lVar6 + 0x338) = *(ulonglong *)(lVar6 + 0x338) ^ 0x47d16c2d77a91401;
        *(ulonglong *)(lVar6 + 0x340) = *(ulonglong *)(lVar6 + 0x340) ^ 0x47d06c2c77a81402;
        *(ulonglong *)(lVar6 + 0x348) = *(ulonglong *)(lVar6 + 0x348) ^ 0x47d76c2b77af1403;
        *(ulonglong *)(lVar6 + 0x350) = *(ulonglong *)(lVar6 + 0x350) ^ 0x47d66c2a77ae1404;
        *(ulonglong *)(lVar6 + 0x358) = *(ulonglong *)(lVar6 + 0x358) ^ 0x47d56c2977ad1405;
        *(ulonglong *)(lVar6 + 0x360) = *(ulonglong *)(lVar6 + 0x360) ^ 0x47d46c2877ac1406;
        *(ulonglong *)(lVar6 + 0x368) = *(ulonglong *)(lVar6 + 0x368) ^ 0x47db6c2777a31407;
        *(ulonglong *)(lVar6 + 0x370) = *(ulonglong *)(lVar6 + 0x370) ^ 0x47da6c2677a21408;
        iVar4 = 0x1a;
      }
    }
  }
LAB_ram_00012f78:
  param_1[1] = (int)uVar2;
  *param_1 = iVar4;
  return;
}
