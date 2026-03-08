/* Function: fn_23b48
 * Address:  0x23c68
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_23b48 @ 0x23c68 ---- */

void fn_23b48(undefined4 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int *piVar6;
  byte bVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  ushort *puVar17;
  longlong *plStack_530;
  ulonglong uStack_528;
  undefined4 uStack_520;
  undefined1 uStack_51c;
  uint uStack_388;
  undefined4 uStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  int aiStack_378 [2];
  char acStack_370 [35];
  char acStack_34d [21];
  char acStack_338 [824];
  
  uVar10 = 0;
  puVar17 = (ushort *)*param_2;
  uVar4 = (ulonglong)*(ushort *)((longlong)puVar17 + param_2[1] + -2);
  uVar8 = 0;
  if (*puVar17 <= uVar4) goto LAB_ram_00024868;
  puVar17 = (ushort *)((longlong)puVar17 + (ulonglong)puVar17[uVar4 + 1]);
  uVar4 = (ulonglong)*puVar17;
  plVar5 = (longlong *)((longlong)puVar17 + uVar4 * 0x21 + 2);
  if ((((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 2) != 0x6ec031f25bd57904) ||
       (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
      (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd)) ||
     (bVar12 = false, *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != -0x70ec43a95d324efe)
     ) {
    bVar12 = true;
  }
  if (bVar12) {
    if (((*plVar5 != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar12 = false,
        *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != 0x103cc0bd736050b0)))) {
      bVar12 = true;
    }
    if (bVar12) {
      if (((*plVar5 != -0x44f118ed916356fa) ||
          (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x6e904b4c145c1835)) ||
         ((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x2a2f74470ab0ff18 ||
          (bVar12 = false,
          *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != -0x2b367796f4eefba2)))) {
        bVar12 = true;
      }
      if (bVar12) {
        if ((((*plVar5 != 0x136d5ca2f1569155) ||
             (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x340d9a0ae6f72a4f)) ||
            (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != -0x2a9d9b9ca96e3882)) ||
           (bVar12 = false,
           *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != 0x698f3435f126add1)) {
          bVar12 = true;
        }
        uVar10 = 0;
        uVar8 = 0;
        if (bVar12) goto LAB_ram_00024868;
      }
    }
  }
  if (((*plVar5 != 0x6ec031f25bd57904) ||
      (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
     ((*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd ||
      (bVar12 = false, *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != -0x70ec43a95d324efe
      )))) {
    bVar12 = true;
  }
  if (bVar12) {
    if ((((*plVar5 != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar12 = false, *(longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x1a) != 0x103cc0bd736050b0
       )) {
      bVar12 = true;
    }
    uVar10 = 0;
    uVar8 = 0;
    if ((bVar12) ||
       (uStack_528 = (ulonglong)*(ushort *)((longlong)puVar17 + uVar4 * 0x21 + 0x22),
       uStack_528 < 0xc)) goto LAB_ram_00024868;
    plStack_530 = (longlong *)((longlong)puVar17 + uVar4 * 0x21 + 0x24);
    lVar13 = *plStack_530;
    if (lVar13 != -0x77a4a414b3c0b4bf) {
      if (lVar13 != 0x65879cc54d18aca8) {
        if (lVar13 == -0x37788a1e6e613908) {
          uVar10 = 1;
          goto LAB_ram_00024680;
        }
        goto LAB_ram_00024860;
      }
      uVar10 = 2;
    }
LAB_ram_00024680:
    uStack_520 = *(undefined4 *)((longlong)puVar17 + uVar4 * 0x21 + 0x2c);
    uStack_51c = (undefined1)uVar10;
    fn_13160__sol_memcpy(&uStack_388,&plStack_530);
    uVar4 = (ulonglong)uStack_388;
    if (1 < uVar4) {
      pcVar11 = acStack_338;
      uVar16 = 0;
      uVar9 = 1;
      do {
        lVar13 = uVar16 * 0x38;
        pcVar15 = pcVar11;
        uVar16 = uVar9;
        do {
          if (((acStack_34d[lVar13] == pcVar15[0x23]) && (acStack_370[lVar13] == '\x01')) &&
             ((*pcVar15 == '\x01' && (acStack_370[lVar13 + 1] != pcVar15[1]))))
          goto LAB_ram_000247e8;
          uVar16 = uVar16 + 1;
          pcVar15 = pcVar15 + 0x38;
        } while (uVar16 < uVar4);
        pcVar11 = pcVar11 + 0x38;
        uVar14 = uVar9 + 1;
        uVar16 = uVar9;
        uVar9 = uVar14;
      } while (uVar14 < uVar4);
    }
LAB_ram_00024860:
    uVar10 = 0;
    uVar8 = 0;
  }
  else {
    uVar1 = *(undefined2 *)((longlong)puVar17 + uVar4 * 0x21 + 0x22);
    lVar13 = (longlong)puVar17 + uVar4 * 0x21 + 0x24;
    uVar16 = fn_15fe0(plVar5,lVar13);
    bVar3 = 0;
    uVar16 = uVar16 & 0xff;
    if (uVar16 < 7) {
      if (uVar16 < 4) {
        if (1 < uVar16) {
          uVar9 = 8;
          uVar14 = 7;
LAB_ram_00024230:
          if ((uVar14 < uVar4) && (uVar9 < uVar4)) {
            if ((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 3) !=
                 *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 3)) ||
               (((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0xb) !=
                  *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0xb) ||
                 (*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x13) !=
                  *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x13))) ||
                (bVar12 = false,
                *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x1b) !=
                *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x1b))))) {
              bVar12 = true;
            }
            bVar3 = 1;
            if (bVar12) {
              bVar3 = 0;
            }
          }
        }
      }
      else if (1 < uVar16 - 4) {
LAB_ram_00024208:
        uVar9 = 4;
        uVar14 = 3;
        goto LAB_ram_00024230;
      }
LAB_ram_000242f8:
      bVar7 = 0;
      if ((uVar16 < 9) && ((0x153UL >> uVar16 & 1) != 0)) {
        lVar2 = uVar16 * 8;
        uVar16 = *(ulonglong *)(&DAT_ram_00032260 + lVar2);
        if ((uVar4 <= uVar16) ||
           ((uVar9 = *(ulonglong *)(&DAT_ram_00032218 + lVar2), uVar4 <= uVar9 ||
            (uVar14 = *(ulonglong *)(&DAT_ram_000321d0 + lVar2), uVar4 <= uVar14))))
        goto LAB_ram_00024560;
        if ((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 3) !=
             *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 3)) ||
           (((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0xb) !=
              *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0xb) ||
             (*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x13) !=
              *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x13))) ||
            (bVar12 = false,
            *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x1b) !=
            *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x1b))))) {
          bVar12 = true;
        }
        if (bVar12) {
          if (((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 3) !=
                *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 3)) ||
              (*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0xb) !=
               *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0xb))) ||
             ((*(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x13) !=
               *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x13) ||
              (bVar12 = false,
              *(longlong *)((longlong)puVar17 + uVar9 * 0x21 + 0x1b) !=
              *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x1b))))) {
            bVar12 = true;
          }
          if (bVar12) {
            if (((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 3) !=
                  *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 3)) ||
                (*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0xb) !=
                 *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0xb))) ||
               ((*(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x13) !=
                 *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x13) ||
                (bVar12 = false,
                *(longlong *)((longlong)puVar17 + uVar14 * 0x21 + 0x1b) !=
                *(longlong *)((longlong)puVar17 + uVar16 * 0x21 + 0x1b))))) {
              bVar12 = true;
            }
            bVar7 = 1;
            if (bVar12) {
              bVar7 = 0;
            }
            goto LAB_ram_00024560;
          }
        }
      }
      else {
LAB_ram_00024560:
        if (!(bool)(bVar3 | bVar7)) goto LAB_ram_00024578;
      }
    }
    else {
      if (uVar16 < 10) {
        if ((uVar16 != 7) && (uVar16 == 8)) goto LAB_ram_00024208;
        uVar9 = 7;
        uVar14 = 6;
        goto LAB_ram_00024230;
      }
      if (uVar16 - 10 < 3) goto LAB_ram_000242f8;
LAB_ram_00024578:
      fn_144e8(&plStack_530,lVar13,uVar1);
      if ((char)plStack_530 == '\x02') goto LAB_ram_00024860;
      fn_2fe08__sol_memcpy(&uStack_388,&plStack_530,0x1a8);
      lVar13 = fn_154c8__custom_panic(&uStack_388);
      if ((char)uStack_388 == '\0') {
        if (iStack_380 != 0) {
          piVar6 = &iStack_380;
          goto LAB_ram_00024650;
        }
      }
      else if (aiStack_378[0] != 0) {
        piVar6 = aiStack_378;
LAB_ram_00024650:
        *piVar6 = 0;
      }
      uVar10 = 0;
      uVar8 = 0;
      if (lVar13 == 0) goto LAB_ram_00024868;
    }
LAB_ram_000247e8:
    fn_2c1e8(&uStack_388,0xc8000000000000,0,0x3e8000000000000);
    uVar8 = CONCAT44(uStack_37c,iStack_380);
    uVar10 = CONCAT44(uStack_384,uStack_388);
  }
LAB_ram_00024868:
  *(undefined8 *)(param_1 + 2) = uVar10;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *param_1 = 0;
  return;
}
