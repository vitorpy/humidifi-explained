/* Function: fn_11cb0
 * Address:  0x11dd0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_11cb0 @ 0x11dd0 ---- */

void fn_11cb0(void)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong unaff_R6;
  longlong unaff_R7;
  longlong *unaff_R8;
  int *unaff_R9;
  longlong lStack_a0;
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
  
  fn_11cb0();
  iVar2 = (int)uStack_20;
  uStack_8 = *(ulonglong *)(unaff_R7 + 0x270);
  uStack_10 = *(ulonglong *)(unaff_R7 + 0x268);
  uStack_18 = *(ulonglong *)(unaff_R7 + 0x260);
  uStack_20 = *(ulonglong *)(unaff_R7 + 600);
  if (*(ulonglong *)(unaff_R7 + 0x710) < 5) {
    uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
    uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
    uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
    uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
  }
  uVar3 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
          (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 | uStack_20 >> 0x18 & 0xff0000
          | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
  uVar6 = *(ulonglong *)(unaff_R6 + 8);
  uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
          (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
          uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
  if (uVar3 == uVar6) {
    uVar3 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
            (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
            uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
    uVar6 = *(ulonglong *)(unaff_R6 + 0x10);
    uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
            (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
            uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
    if (uVar3 == uVar6) {
      uVar3 = uStack_10 << 0x38 | (uStack_10 & 0xff00) << 0x28 | (uStack_10 & 0xff0000) << 0x18 |
              (uStack_10 & 0xff000000) << 8 | uStack_10 >> 8 & 0xff000000 |
              uStack_10 >> 0x18 & 0xff0000 | uStack_10 >> 0x28 & 0xff00 | uStack_10 >> 0x38;
      uVar6 = *(ulonglong *)(unaff_R6 + 0x18);
      uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
              (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
              uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
      if (uVar3 == uVar6) {
        iVar7 = 0;
        uVar3 = uStack_8 << 0x38 | (uStack_8 & 0xff00) << 0x28 | (uStack_8 & 0xff0000) << 0x18 |
                (uStack_8 & 0xff000000) << 8 | uStack_8 >> 8 & 0xff000000 |
                uStack_8 >> 0x18 & 0xff0000 | uStack_8 >> 0x28 & 0xff00 | uStack_8 >> 0x38;
        uVar6 = *(ulonglong *)(unaff_R6 + 0x20);
        uVar6 = uVar6 << 0x38 | (uVar6 & 0xff00) << 0x28 | (uVar6 & 0xff0000) << 0x18 |
                (uVar6 & 0xff000000) << 8 | uVar6 >> 8 & 0xff000000 | uVar6 >> 0x18 & 0xff0000 |
                uVar6 >> 0x28 & 0xff00 | uVar6 >> 0x38;
        if (uVar3 == uVar6) goto LAB_ram_00011fd8;
      }
    }
  }
  iVar7 = -1;
  if (uVar6 <= uVar3) {
    iVar7 = 1;
  }
LAB_ram_00011fd8:
  iVar5 = -0x5452e216;
  iVar8 = 0;
  if ((*(char *)(unaff_R6 + 1) != '\0') && (iVar7 == 0 && iVar2 == 0)) {
    uStack_68 = *(ulonglong *)(unaff_R7 + 0x250) ^ 0x4a0178651b8c3c5;
    uStack_70 = *(ulonglong *)(unaff_R7 + 0x248) ^ 0x4a1178751b9c3c6;
    uStack_78 = *(ulonglong *)(unaff_R7 + 0x240) ^ 0x4a2178451bac3c7;
    uStack_80 = *(ulonglong *)(unaff_R7 + 0x238) ^ 0xfb5ce87aae443c38;
    uStack_48 = *(ulonglong *)(unaff_R7 + 0x230) ^ 0x4a0178651b8c3c5;
    uStack_50 = *(ulonglong *)(unaff_R7 + 0x228) ^ 0x4a1178751b9c3c6;
    uStack_58 = *(ulonglong *)(unaff_R7 + 0x220) ^ 0x4a2178451bac3c7;
    uStack_60 = *(ulonglong *)(unaff_R7 + 0x218) ^ 0xfb5ce87aae443c38;
    lVar4 = *(longlong *)(lStack_a0 + 0x10);
    if ((uStack_80 != *(ulonglong *)(lVar4 + 8)) ||
       (((uStack_78 != *(ulonglong *)(lVar4 + 0x10) || (uStack_70 != *(ulonglong *)(lVar4 + 0x18)))
        || (bVar1 = false, uStack_68 != *(ulonglong *)(lVar4 + 0x20))))) {
      bVar1 = true;
    }
    iVar8 = 0;
    iVar5 = -0x4520531d;
    if (!bVar1) {
      lVar4 = *(longlong *)(lStack_a0 + 0x20);
      if (((uStack_60 != *(ulonglong *)(lVar4 + 8)) || (uStack_58 != *(ulonglong *)(lVar4 + 0x10)))
         || ((uStack_50 != *(ulonglong *)(lVar4 + 0x18) ||
             (bVar1 = false, uStack_48 != *(ulonglong *)(lVar4 + 0x20))))) {
        bVar1 = true;
      }
      if (!bVar1) {
        lVar4 = lStack_a0 + 8;
        uStack_28 = *(ulonglong *)(unaff_R7 + 0x210) ^ 0x4a0178651b8c3c5;
        uStack_30 = *(ulonglong *)(unaff_R7 + 0x208) ^ 0x4a1178751b9c3c6;
        uStack_38 = *(ulonglong *)(unaff_R7 + 0x200) ^ 0x4a2178451bac3c7;
        uStack_40 = *(ulonglong *)(unaff_R7 + 0x1f8) ^ 0xfb5ce87aae443c38;
        uStack_8 = *(ulonglong *)(unaff_R7 + 0x1f0) ^ 0x4a0178651b8c3c5;
        uStack_10 = *(ulonglong *)(unaff_R7 + 0x1e8) ^ 0x4a1178751b9c3c6;
        uStack_18 = *(ulonglong *)(unaff_R7 + 0x1e0) ^ 0x4a2178451bac3c7;
        uStack_20 = *(ulonglong *)(unaff_R7 + 0x1d8) ^ 0xfb5ce87aae443c38;
        if (((*unaff_R8 == 0) ||
            (fn_cf18__sol_invoke_signed_c(&iStack_88,(longlong *)(lStack_a0 + 0x10),lStack_a0 + 0x18,lVar4),
            iVar5 = iStack_84, iVar8 = iStack_88, iStack_88 == 0x1a)) &&
           ((unaff_R8[1] == 0 ||
            (fn_cf18__sol_invoke_signed_c(&iStack_90,(longlong *)(lStack_a0 + 0x20),lStack_a0 + 0x28),
            iVar5 = iStack_8c, iVar8 = iStack_90, iStack_90 == 0x1a)))) {
          *(ulonglong *)(unaff_R7 + 0x2a8) = unaff_R8[2] ^ 0x6e9de2b30b19f9ea;
          iVar5 = (int)lVar4;
          iVar8 = 0x1a;
        }
      }
    }
  }
  unaff_R9[1] = iVar5;
  *unaff_R9 = iVar8;
  return;
}
