/* Function: fn_113b8__custom_panic
 * Address:  0x114d8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_113b8__custom_panic @ 0x114d8 ---- */

void fn_113b8__custom_panic(undefined4 *param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                     longlong param_5)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  ulonglong *puVar7;
  undefined *puVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  byte bVar19;
  ulonglong uVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uStack_90;
  undefined8 *puStack_88;
  ulonglong uStack_80;
  undefined4 *puStack_78;
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
  
  plVar10 = (longlong *)0xbadc0de1;
  uVar4 = 0;
  puStack_78 = param_1;
  if ((param_3 < 0xd) || (plVar10 = (longlong *)0xbadc0ded, param_5 != 0x18)) goto LAB_ram_00011c78;
  lVar18 = *(longlong *)(param_2 + 8);
  plVar15 = *(longlong **)(lVar18 + 0x50);
  uStack_90 = param_3;
  puStack_88 = param_4;
  uStack_80 = param_2;
  if (plVar15 < (longlong *)0x6c0) {
    piVar5 = (int *)0x6c0;
    puVar8 = &DAT_ram_00032640;
    plVar13 = plVar15;
    fn_2f320__custom_panic();
    iVar9 = 0xbadc0de;
    iVar17 = 0;
    if (puVar8 != (undefined *)0x7) goto LAB_ram_00012560;
    if (plVar13 != (longlong *)0x18) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031be9,0xe,2);
    }
    if (((ulonglong)plVar10 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031be9,0xe,0);
    }
    lVar18 = *plVar15;
    lVar16 = plVar15[1];
    fn_11cb0(lVar16 + 0x28,&DAT_ram_00031900,0x20,&uStack_20);
    iVar2 = (int)uStack_20;
    uStack_8 = *(ulonglong *)(lVar16 + 0x270);
    uStack_10 = *(ulonglong *)(lVar16 + 0x268);
    uStack_18 = *(ulonglong *)(lVar16 + 0x260);
    uStack_20 = *(ulonglong *)(lVar16 + 600);
    if (*(ulonglong *)(lVar16 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    uVar22 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
             (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 |
             uStack_20 >> 0x18 & 0xff0000 | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
    uVar11 = *(ulonglong *)(lVar18 + 8);
    uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
             (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
             uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
    if (uVar22 == uVar11) {
      uVar22 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
               (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
               uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
      uVar11 = *(ulonglong *)(lVar18 + 0x10);
      uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
               (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
               uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
      if (uVar22 != uVar11) goto LAB_ram_00011fc0;
      uVar22 = uStack_10 << 0x38 | (uStack_10 & 0xff00) << 0x28 | (uStack_10 & 0xff0000) << 0x18 |
               (uStack_10 & 0xff000000) << 8 | uStack_10 >> 8 & 0xff000000 |
               uStack_10 >> 0x18 & 0xff0000 | uStack_10 >> 0x28 & 0xff00 | uStack_10 >> 0x38;
      uVar11 = *(ulonglong *)(lVar18 + 0x18);
      uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
               (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
               uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
      if (uVar22 != uVar11) goto LAB_ram_00011fc0;
      iVar14 = 0;
      uVar22 = uStack_8 << 0x38 | (uStack_8 & 0xff00) << 0x28 | (uStack_8 & 0xff0000) << 0x18 |
               (uStack_8 & 0xff000000) << 8 | uStack_8 >> 8 & 0xff000000 |
               uStack_8 >> 0x18 & 0xff0000 | uStack_8 >> 0x28 & 0xff00 | uStack_8 >> 0x38;
      uVar11 = *(ulonglong *)(lVar18 + 0x20);
      uVar11 = uVar11 << 0x38 | (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff0000) << 0x18 |
               (uVar11 & 0xff000000) << 8 | uVar11 >> 8 & 0xff000000 | uVar11 >> 0x18 & 0xff0000 |
               uVar11 >> 0x28 & 0xff00 | uVar11 >> 0x38;
      if (uVar22 != uVar11) goto LAB_ram_00011fc0;
    }
    else {
LAB_ram_00011fc0:
      iVar14 = -1;
      if (uVar11 <= uVar22) {
        iVar14 = 1;
      }
    }
    iVar9 = -0x5452e216;
    iVar17 = 0;
    if ((*(char *)(lVar18 + 1) != '\0') && (iVar14 == 0 && iVar2 == 0)) {
      uStack_68 = *(ulonglong *)(lVar16 + 0x250) ^ 0x4a0178651b8c3c5;
      uStack_70 = *(ulonglong *)(lVar16 + 0x248) ^ 0x4a1178751b9c3c6;
      puStack_78 = (undefined4 *)(*(ulonglong *)(lVar16 + 0x240) ^ 0x4a2178451bac3c7);
      uStack_80 = *(ulonglong *)(lVar16 + 0x238) ^ 0xfb5ce87aae443c38;
      uStack_48 = *(ulonglong *)(lVar16 + 0x230) ^ 0x4a0178651b8c3c5;
      uStack_50 = *(ulonglong *)(lVar16 + 0x228) ^ 0x4a1178751b9c3c6;
      uStack_58 = *(ulonglong *)(lVar16 + 0x220) ^ 0x4a2178451bac3c7;
      uStack_60 = *(ulonglong *)(lVar16 + 0x218) ^ 0xfb5ce87aae443c38;
      lVar18 = plVar15[2];
      if ((uStack_80 != *(ulonglong *)(lVar18 + 8)) ||
         (((puStack_78 != (undefined4 *)*(ulonglong *)(lVar18 + 0x10) ||
           (uStack_70 != *(ulonglong *)(lVar18 + 0x18))) ||
          (bVar1 = false, uStack_68 != *(ulonglong *)(lVar18 + 0x20))))) {
        bVar1 = true;
      }
      iVar17 = 0;
      iVar9 = -0x4520531d;
      if (!bVar1) {
        lVar18 = plVar15[4];
        if (((uStack_60 != *(ulonglong *)(lVar18 + 8)) ||
            (uStack_58 != *(ulonglong *)(lVar18 + 0x10))) ||
           ((uStack_50 != *(ulonglong *)(lVar18 + 0x18) ||
            (bVar1 = false, uStack_48 != *(ulonglong *)(lVar18 + 0x20))))) {
          bVar1 = true;
        }
        if (!bVar1) {
          plVar13 = plVar15 + 1;
          uStack_28 = *(ulonglong *)(lVar16 + 0x210) ^ 0x4a0178651b8c3c5;
          uStack_30 = *(ulonglong *)(lVar16 + 0x208) ^ 0x4a1178751b9c3c6;
          uStack_38 = *(ulonglong *)(lVar16 + 0x200) ^ 0x4a2178451bac3c7;
          uStack_40 = *(ulonglong *)(lVar16 + 0x1f8) ^ 0xfb5ce87aae443c38;
          uStack_8 = *(ulonglong *)(lVar16 + 0x1f0) ^ 0x4a0178651b8c3c5;
          uStack_10 = *(ulonglong *)(lVar16 + 0x1e8) ^ 0x4a1178751b9c3c6;
          uStack_18 = *(ulonglong *)(lVar16 + 0x1e0) ^ 0x4a2178451bac3c7;
          uStack_20 = *(ulonglong *)(lVar16 + 0x1d8) ^ 0xfb5ce87aae443c38;
          if (*plVar10 != 0) {
            fn_cf18__sol_invoke_signed_c(&puStack_88,plVar15 + 2,plVar15 + 3,plVar13);
            if ((int)puStack_88 != 0x1a) {
              iVar9 = (int)((ulonglong)puStack_88 >> 0x20);
              iVar17 = (int)puStack_88;
              goto LAB_ram_00012560;
            }
          }
          if (plVar10[1] != 0) {
            fn_cf18__sol_invoke_signed_c(&uStack_90,plVar15 + 4,plVar15 + 5);
            if ((int)uStack_90 != 0x1a) {
              iVar9 = (int)(uStack_90 >> 0x20);
              iVar17 = (int)uStack_90;
              goto LAB_ram_00012560;
            }
          }
          iVar9 = (int)plVar13;
          *(ulonglong *)(lVar16 + 0x2a8) = plVar10[2] ^ 0x6e9de2b30b19f9ea;
          iVar17 = 0x1a;
        }
      }
    }
LAB_ram_00012560:
    piVar5[1] = iVar9;
    *piVar5 = iVar17;
    return;
  }
  if ((lVar18 + 0x58U & 7) != 0) goto LAB_ram_00011ce8;
  uStack_38 = *(ulonglong *)(lVar18 + 0x3c0) ^ 0x9da8833b65a9ba;
  uStack_30 = *(ulonglong *)(lVar18 + 0x3c8) ^ 0x9ca8823b66a9b9;
  uStack_28 = *(ulonglong *)(lVar18 + 0x3d0) ^ 0x93a88d3b67a9b8;
  uStack_60 = *(ulonglong *)(lVar18 + 0x398) ^ 0x9aa8843b60a9bf;
  uStack_58 = *(ulonglong *)(lVar18 + 0x3a0) ^ 0x99a8873b61a9be;
  uStack_50 = *(ulonglong *)(lVar18 + 0x3a8) ^ 0x98a8863b62a9bd;
  uStack_48 = *(ulonglong *)(lVar18 + 0x3b0) ^ 0x9fa8813b63a9bc;
  uStack_40 = *(ulonglong *)(lVar18 + 0x3b8) ^ 0x9ea8803b64a9bb;
  uStack_20 = *(ulonglong *)(lVar18 + 0x3d8) ^ 0x92a88c3b68a9b7;
  uStack_68 = *(ulonglong *)(lVar18 + 0x390) ^ 0xff64577ac49fae40;
  bVar3 = 1;
  bVar19 = 1;
  if (*(ulonglong *)(lVar18 + 0x390) == 0xff64577ac49fae40) {
    bVar19 = 0;
    if (6 < *(ulonglong *)(lVar18 + 0x710)) goto LAB_ram_00011740;
LAB_ram_00011780:
    bVar3 = 0;
    lVar18 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(lVar18 + 0x28) != 0) goto LAB_ram_000117d8;
LAB_ram_000117a8:
    if (((*(longlong *)(lVar18 + 0x30) != 0) || (*(longlong *)(lVar18 + 0x38) != 0)) ||
       (*(longlong *)(lVar18 + 0x40) != 0)) goto LAB_ram_000117d8;
LAB_ram_00011b90:
    uStack_8 = 0;
    uStack_10 = 0;
    uStack_18 = 1;
joined_r0x00011ce0:
    if (((ulonglong)puStack_88 & 7) != 0) {
LAB_ram_00011ce8:
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
    }
    fn_f8d0(&uStack_70,uStack_80,uStack_90,*puStack_88);
    plVar10 = (longlong *)(uStack_70 >> 0x20);
    uVar4 = (undefined4)uStack_70;
  }
  else {
    if (*(ulonglong *)(lVar18 + 0x710) < 7) goto LAB_ram_00011780;
LAB_ram_00011740:
    lVar18 = *(longlong *)(param_2 + 0x60);
    if (*(longlong *)(lVar18 + 0x28) == 0) goto LAB_ram_000117a8;
LAB_ram_000117d8:
    if ((((*(longlong *)(lVar18 + 0x28) != 0x164b2e264bbb7a0a) ||
         (*(longlong *)(lVar18 + 0x30) != -0x365741ee0508e6a4)) ||
        (*(longlong *)(lVar18 + 0x38) != 0x7f02a960c3f7095f)) ||
       (bVar1 = false, *(longlong *)(lVar18 + 0x40) != -0x5c64a878aed5b343)) {
      bVar1 = true;
    }
    if ((!bVar1) && (0x57 < *(ulonglong *)(lVar18 + 0x50))) {
      pcVar6 = (char *)(lVar18 + 0x58);
      if (((ulonglong)pcVar6 & 7) != 0) goto LAB_ram_00011ce8;
      if (*pcVar6 == '\x02') {
        lVar16 = *(longlong *)(param_2 + 0x48);
        if (((*(longlong *)(lVar16 + 8) != 0x66d17b1817d5a706) ||
            (*(longlong *)(lVar16 + 0x10) != -0x3f3d02aafb2b25cb)) ||
           ((*(longlong *)(lVar16 + 0x18) != -0x5a8aa9de7039db3f ||
            (bVar1 = false, *(longlong *)(lVar16 + 0x20) != 0x85fcbbadb)))) {
          bVar1 = true;
        }
        if (!bVar1) {
          if ((ulonglong)*(ushort *)(lVar16 + 0x58) != 0) {
            uVar22 = 0;
            do {
              uVar11 = (ulonglong)*(ushort *)(lVar16 + 0x5a + uVar22 * 2);
              uVar20 = (ulonglong)*(ushort *)(lVar16 + 0x58 + uVar11);
              if (uVar20 != 0) {
                pbVar21 = (byte *)(lVar16 + 0x5a + uVar11);
                uVar11 = 0;
                do {
                  if ((*pbVar21 & 1) != 0) {
                    if ((((*(longlong *)(pbVar21 + 1) != *(longlong *)(lVar18 + 100)) ||
                         (*(longlong *)(pbVar21 + 9) != *(longlong *)(lVar18 + 0x6c))) ||
                        (*(longlong *)(pbVar21 + 0x11) != *(longlong *)(lVar18 + 0x74))) ||
                       (bVar1 = false, *(longlong *)(pbVar21 + 0x19) != *(longlong *)(lVar18 + 0x7c)
                       )) {
                      bVar1 = true;
                    }
                    if (!bVar1) {
                      if ((bool)(bVar3 & bVar19)) {
                        puVar7 = &uStack_68;
                        uVar12 = 5;
                      }
                      else {
                        puVar7 = (ulonglong *)0x8;
                        uVar12 = 0;
                      }
                      fn_2b330(&uStack_18,pcVar6,puVar7,uVar12);
                      goto joined_r0x00011ce0;
                    }
                  }
                  pbVar21 = pbVar21 + 0x21;
                  uVar11 = uVar11 + 1;
                } while (uVar11 < uVar20);
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 < *(ushort *)(lVar16 + 0x58));
          }
          goto LAB_ram_00011b90;
        }
      }
    }
    plVar10 = (longlong *)0xabad1dea;
    uVar4 = 0;
  }
LAB_ram_00011c78:
  puStack_78[1] = (int)plVar10;
  *puStack_78 = uVar4;
  return;
}
