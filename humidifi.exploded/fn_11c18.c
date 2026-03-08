/* Function: fn_11c18
 * Address:  0x11d38
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_11c18 @ 0x11d38 ---- */

void fn_11c18(int *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                     longlong param_5)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  iVar8 = 0;
  iVar4 = 0xbadc0de;
  if (param_3 != 7) goto LAB_ram_00012560;
  if (param_5 != 0x18) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,2);
  }
  if (((ulonglong)param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031be9,0xe,0);
  }
  lVar9 = *param_2;
  lVar10 = param_2[1];
  fn_11cb0(lVar10 + 0x28,&DAT_ram_00031900,0x20,&uStack_20);
  iVar2 = (int)uStack_20;
  uStack_8 = *(ulonglong *)(lVar10 + 0x270);
  uStack_10 = *(ulonglong *)(lVar10 + 0x268);
  uStack_18 = *(ulonglong *)(lVar10 + 0x260);
  uStack_20 = *(ulonglong *)(lVar10 + 600);
  if (*(ulonglong *)(lVar10 + 0x710) < 5) {
    uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
    uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
    uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
    uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
  }
  uVar3 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
          (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 | uStack_20 >> 0x18 & 0xff0000
          | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
  uVar5 = *(ulonglong *)(lVar9 + 8);
  uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
          (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
          uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
  if (uVar3 == uVar5) {
    uVar3 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
            (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
            uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
    uVar5 = *(ulonglong *)(lVar9 + 0x10);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 != uVar5) goto LAB_ram_00011fc0;
    uVar3 = uStack_10 << 0x38 | (uStack_10 & 0xff00) << 0x28 | (uStack_10 & 0xff0000) << 0x18 |
            (uStack_10 & 0xff000000) << 8 | uStack_10 >> 8 & 0xff000000 |
            uStack_10 >> 0x18 & 0xff0000 | uStack_10 >> 0x28 & 0xff00 | uStack_10 >> 0x38;
    uVar5 = *(ulonglong *)(lVar9 + 0x18);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 != uVar5) goto LAB_ram_00011fc0;
    iVar7 = 0;
    uVar3 = uStack_8 << 0x38 | (uStack_8 & 0xff00) << 0x28 | (uStack_8 & 0xff0000) << 0x18 |
            (uStack_8 & 0xff000000) << 8 | uStack_8 >> 8 & 0xff000000 | uStack_8 >> 0x18 & 0xff0000
            | uStack_8 >> 0x28 & 0xff00 | uStack_8 >> 0x38;
    uVar5 = *(ulonglong *)(lVar9 + 0x20);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 != uVar5) goto LAB_ram_00011fc0;
  }
  else {
LAB_ram_00011fc0:
    iVar7 = -1;
    if (uVar5 <= uVar3) {
      iVar7 = 1;
    }
  }
  iVar8 = 0;
  iVar4 = -0x5452e216;
  if ((*(char *)(lVar9 + 1) != '\0') && (iVar7 == 0 && iVar2 == 0)) {
    uStack_68 = *(ulonglong *)(lVar10 + 0x250) ^ 0x4a0178651b8c3c5;
    uStack_70 = *(ulonglong *)(lVar10 + 0x248) ^ 0x4a1178751b9c3c6;
    uStack_78 = *(ulonglong *)(lVar10 + 0x240) ^ 0x4a2178451bac3c7;
    uStack_80 = *(ulonglong *)(lVar10 + 0x238) ^ 0xfb5ce87aae443c38;
    uStack_48 = *(ulonglong *)(lVar10 + 0x230) ^ 0x4a0178651b8c3c5;
    uStack_50 = *(ulonglong *)(lVar10 + 0x228) ^ 0x4a1178751b9c3c6;
    uStack_58 = *(ulonglong *)(lVar10 + 0x220) ^ 0x4a2178451bac3c7;
    uStack_60 = *(ulonglong *)(lVar10 + 0x218) ^ 0xfb5ce87aae443c38;
    lVar9 = param_2[2];
    if ((uStack_80 != *(ulonglong *)(lVar9 + 8)) ||
       (((uStack_78 != *(ulonglong *)(lVar9 + 0x10) || (uStack_70 != *(ulonglong *)(lVar9 + 0x18)))
        || (bVar1 = false, uStack_68 != *(ulonglong *)(lVar9 + 0x20))))) {
      bVar1 = true;
    }
    iVar8 = 0;
    iVar4 = -0x4520531d;
    if (!bVar1) {
      lVar9 = param_2[4];
      if (((uStack_60 != *(ulonglong *)(lVar9 + 8)) || (uStack_58 != *(ulonglong *)(lVar9 + 0x10)))
         || ((uStack_50 != *(ulonglong *)(lVar9 + 0x18) ||
             (bVar1 = false, uStack_48 != *(ulonglong *)(lVar9 + 0x20))))) {
        bVar1 = true;
      }
      if (!bVar1) {
        plVar6 = param_2 + 1;
        uStack_28 = *(ulonglong *)(lVar10 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_30 = *(ulonglong *)(lVar10 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_38 = *(ulonglong *)(lVar10 + 0x200) ^ 0x4a2178451bac3c7;
        uStack_40 = *(ulonglong *)(lVar10 + 0x1f8) ^ 0xfb5ce87aae443c38;
        uStack_8 = *(ulonglong *)(lVar10 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_10 = *(ulonglong *)(lVar10 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_18 = *(ulonglong *)(lVar10 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_20 = *(ulonglong *)(lVar10 + 0x1d8) ^ 0xfb5ce87aae443c38;
        if (((*param_4 == 0) ||
            (fn_cf18__sol_invoke_signed_c(&iStack_88,param_2 + 2,param_2 + 3,plVar6), iVar8 = iStack_88,
            iVar4 = iStack_84, iStack_88 == 0x1a)) &&
           ((param_4[1] == 0 ||
            (fn_cf18__sol_invoke_signed_c(&iStack_90,param_2 + 4,param_2 + 5), iVar8 = iStack_90,
            iVar4 = iStack_8c, iStack_90 == 0x1a)))) {
          *(ulonglong *)(lVar10 + 0x2a8) = param_4[2] ^ 0x6e9de2b30b19f9ea;
          iVar8 = 0x1a;
          iVar4 = (int)plVar6;
        }
      }
    }
  }
LAB_ram_00012560:
  param_1[1] = iVar4;
  *param_1 = iVar8;
  return;
}
