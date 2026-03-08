/* Function: fn_20d70
 * Address:  0x20e90
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_20d70 @ 0x20e90 ---- */

void fn_20d70(undefined4 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                     longlong *param_5)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ushort *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lStack_570;
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  longlong lStack_550;
  longlong lStack_548;
  longlong lStack_540;
  longlong lStack_538;
  uint uStack_530;
  undefined4 uStack_52c;
  ulonglong auStack_528 [2];
  char acStack_518 [880];
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  int iStack_198;
  undefined1 uStack_194;
  
  if ((((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
      (param_3[2] != 0x10742a9290fc845b)) || (bVar2 = false, param_3[3] != 0x182e105eeb8708ad)) {
    bVar2 = true;
  }
  if (bVar2) {
    if (((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
       ((param_3[2] != 0x17f86227578d7956 || (bVar2 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
         ((param_3[2] != 0xccbecd97e436386 || (bVar2 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if ((((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
            (param_3[2] != -0x49badeacf352c099)) ||
           (bVar2 = false, param_3[3] != 0x494ac5dec856a9e9)) {
          bVar2 = true;
        }
        if (bVar2) {
          if (((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
             ((param_3[2] != 0x5f9eab07c0325e41 || (bVar2 = false, param_3[3] != 0x74308a941848db62)
              ))) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
               ((param_3[2] != -0x5a746ce81742b801 ||
                (bVar2 = false, param_3[3] != 0x77eb01650c19b51)))) {
              bVar2 = true;
            }
            uVar12 = 0;
            uVar15 = 0;
            if (bVar2) goto LAB_ram_00022388;
          }
        }
      }
    }
  }
  uVar12 = 0;
  puVar5 = (ushort *)*param_2;
  uVar6 = (ulonglong)*(ushort *)((longlong)puVar5 + param_2[1] + -2);
  uVar15 = 0;
  if (*puVar5 <= uVar6) goto LAB_ram_00022388;
  puVar5 = (ushort *)((longlong)puVar5 + (ulonglong)puVar5[uVar6 + 1]);
  uVar6 = (ulonglong)*puVar5;
  if ((((*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 2) != 0x6ec031f25bd57904) ||
       (*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
      (*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd)) ||
     (bVar2 = false, *(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x1a) != -0x70ec43a95d324efe))
  {
    bVar2 = true;
  }
  uVar13 = (ulonglong)*(ushort *)((longlong)puVar5 + uVar6 * 0x21 + 0x22);
  plVar10 = (longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x24);
  if (bVar2) {
    if (((*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar2 = false, *(longlong *)((longlong)puVar5 + uVar6 * 0x21 + 0x1a) != 0x103cc0bd736050b0)
        ))) {
      bVar2 = true;
    }
    uVar12 = 0;
    uVar15 = 0;
    if (bVar2) goto LAB_ram_00022388;
    bVar4 = 2;
    if (0xb < uVar13) {
      lVar7 = *plVar10;
      if (lVar7 != -0x77a4a414b3c0b4bf) {
        if (lVar7 == 0x65879cc54d18aca8) {
          uVar12 = 2;
        }
        else {
          if (lVar7 != -0x37788a1e6e613908) goto LAB_ram_00021b08;
          uVar12 = 1;
        }
      }
      iStack_198 = *(int *)((longlong)puVar5 + uVar6 * 0x21 + 0x2c);
      uStack_194 = (undefined1)uVar12;
      plStack_1a8 = plVar10;
      uStack_1a0 = uVar13;
      fn_13160__sol_memcpy(&uStack_530,&plStack_1a8);
      puVar9 = auStack_528;
      lVar7 = 0;
      do {
        lVar16 = lVar7;
        if ((ulonglong)uStack_530 * 0x38 == lVar16) {
          bVar4 = 2;
          goto LAB_ram_00021b08;
        }
        pcVar1 = (char *)((longlong)puVar9 + 0x33);
        puVar9 = puVar9 + 7;
        lVar7 = lVar16 + 0x38;
      } while (*pcVar1 != '(');
      bVar4 = 2;
      if ((acStack_518[lVar16] == '\x01') && (bVar4 = 1, acStack_518[lVar16 + 1] == '\0')) {
        bVar4 = 0;
      }
    }
    goto LAB_ram_00021b08;
  }
  if (uVar6 == 0) {
    uVar12 = 0;
    goto LAB_ram_00022388;
  }
  uVar8 = 0;
  uVar17 = 0;
  uVar14 = 0;
  do {
    if (((*(longlong *)((longlong)puVar5 + 3) != 0x50126c1f9cda329f) ||
        (*(longlong *)((longlong)puVar5 + 0xb) != 0x67c3ec2339739bc0)) ||
       ((*(longlong *)((longlong)puVar5 + 0x13) != 0x1c9c6ad4e763280d ||
        (bVar2 = false, *(longlong *)((longlong)puVar5 + 0x1b) != 0x57fed5d0bbfd7df4)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar5 + 3) != -0x69f4a935eeabd322) ||
          (*(longlong *)((longlong)puVar5 + 0xb) != 0x156492098a673ea6)) ||
         ((*(longlong *)((longlong)puVar5 + 0x13) != -0x58a98d91a3c1cd4c ||
          (bVar2 = false, *(longlong *)((longlong)puVar5 + 0x1b) != -0x3eac325f67561f09)))) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar15 = 1;
        uVar19 = uVar8;
        if ((uVar8 & uVar17) == 0) goto LAB_ram_00021508;
LAB_ram_00021810:
        uVar17 = 1;
        uVar11 = 1;
        uVar18 = 1;
        break;
      }
      if ((((*(longlong *)((longlong)puVar5 + 3) != 0x70445cd3ea4a744d) ||
           (*(longlong *)((longlong)puVar5 + 0xb) != 0x6721023cd0ded5e7)) ||
          (*(longlong *)((longlong)puVar5 + 0x13) != 0x158269176877d439)) ||
         (bVar2 = false, *(longlong *)((longlong)puVar5 + 0x1b) != -0x25fedc0091beafba)) {
        bVar2 = true;
      }
      uVar19 = uVar8 & uVar15;
      if (bVar2) {
        if ((uVar19 & uVar17) != 0) goto LAB_ram_00021810;
        uVar17 = (uVar19 ^ 1) & uVar17;
      }
      else {
        uVar17 = 1;
        uVar11 = 1;
        uVar18 = 1;
        if (uVar19 != 0) break;
      }
    }
    else {
      uVar8 = 1;
      uVar19 = uVar15;
      if ((uVar15 & uVar17) != 0) goto LAB_ram_00021810;
LAB_ram_00021508:
      uVar17 = (uVar19 ^ 1) & uVar17;
    }
    uVar11 = uVar15;
    puVar5 = (ushort *)((longlong)puVar5 + 0x21);
    uVar14 = uVar14 + 1;
    uVar15 = uVar11;
    uVar18 = uVar8;
  } while (uVar14 < uVar6);
  uVar12 = 0;
  if (uVar18 == 0) {
    uVar15 = 0;
    goto LAB_ram_00022388;
  }
  if (uVar11 == 0) {
    uVar15 = 0;
    goto LAB_ram_00022388;
  }
  uVar15 = 0;
  if (uVar17 == 0) goto LAB_ram_00022388;
  fn_144e8(&uStack_530,plVar10,uVar13);
  if ((char)uStack_530 == '\x02') {
    uVar12 = 0;
    uVar15 = 0;
    goto LAB_ram_00022388;
  }
  fn_2fe08__sol_memcpy(&plStack_1a8,&uStack_530,0x1a8);
  bVar4 = fn_15288(&plStack_1a8,0x75);
  if ((char)plStack_1a8 == '\0') {
    if ((int)uStack_1a0 != 0) {
      puVar9 = &uStack_1a0;
      goto LAB_ram_00021ae8;
    }
  }
  else if (iStack_198 != 0) {
    puVar9 = (ulonglong *)&iStack_198;
LAB_ram_00021ae8:
    *(int *)puVar9 = 0;
  }
LAB_ram_00021b08:
  uVar12 = 0;
  uVar15 = 0;
  if (bVar4 == 2) goto LAB_ram_00022388;
  if ((bVar4 & 1) == 0) {
    lStack_558 = 0x615d2f450302a67c;
    lStack_560 = -0x1b1f092d3d1b444f;
    lStack_568 = 0x3174c9ab6af3653d;
    lStack_570 = 0x3aaddbbef37afac6;
    lStack_550 = -0x7b7e5401a87764fa;
    lStack_548 = 0x35c01846637f68fb;
    lStack_540 = 0x553beb1adc39c4da;
    lStack_538 = 0x100000000f0a098;
    if (*param_4 == -0x7b7e5401a87764fa) goto LAB_ram_00021d00;
LAB_ram_00021d50:
    bVar2 = true;
  }
  else {
    lStack_558 = 0x100000000f0a098;
    lStack_560 = 0x553beb1adc39c4da;
    lStack_568 = 0x35c01846637f68fb;
    lStack_570 = -0x7b7e5401a87764fa;
    lStack_550 = 0x3aaddbbef37afac6;
    lStack_548 = 0x3174c9ab6af3653d;
    lStack_540 = -0x1b1f092d3d1b444f;
    lStack_538 = 0x615d2f450302a67c;
    if (*param_4 != 0x3aaddbbef37afac6) goto LAB_ram_00021d50;
LAB_ram_00021d00:
    if (((lStack_548 != param_4[1]) || (lStack_540 != param_4[2])) ||
       (bVar2 = false, lStack_538 != param_4[3])) goto LAB_ram_00021d50;
  }
  if (bVar2) {
    if (((lStack_550 != 0x3aaddbbef37afac6) || (lStack_548 != 0x3174c9ab6af3653d)) ||
       ((lStack_540 != -0x1b1f092d3d1b444f || (bVar2 = false, lStack_538 != 0x615d2f450302a67c)))) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((lStack_550 != 0x27b2edaf600e01ce) || (lStack_548 != 0x5a14542f1963bd17)) ||
         ((lStack_540 != -0x382d7d44cca569c1 || (bVar3 = false, lStack_538 != 0x6482201eceb29e02))))
      {
        bVar3 = true;
      }
      bVar2 = true;
      if (bVar3) goto LAB_ram_00022000;
    }
    if ((((*param_4 != 0x3aaddbbef37afac6) || (param_4[1] != 0x3174c9ab6af3653d)) ||
        (param_4[2] != -0x1b1f092d3d1b444f)) || (bVar2 = false, param_4[3] != 0x615d2f450302a67c)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*param_4 != 0x27b2edaf600e01ce) || (param_4[1] != 0x5a14542f1963bd17)) ||
         ((param_4[2] != -0x382d7d44cca569c1 || (bVar3 = false, param_4[3] != 0x6482201eceb29e02))))
      {
        bVar3 = true;
      }
      bVar2 = false;
      if (!bVar3) goto LAB_ram_00022000;
      bVar2 = true;
      lVar7 = *param_5;
    }
    else {
      bVar2 = false;
      lVar7 = *param_5;
    }
    if (lStack_570 != lVar7) goto LAB_ram_00022090;
LAB_ram_00022018:
    if (((lStack_568 != param_5[1]) || (lStack_560 != param_5[2])) ||
       (bVar3 = false, lStack_558 != param_5[3])) goto LAB_ram_00022090;
  }
  else {
    bVar2 = false;
LAB_ram_00022000:
    if (lStack_570 == *param_5) goto LAB_ram_00022018;
LAB_ram_00022090:
    bVar3 = true;
  }
  if (bVar3) {
    if ((((lStack_570 != 0x3aaddbbef37afac6) || (lStack_568 != 0x3174c9ab6af3653d)) ||
        (lStack_560 != -0x1b1f092d3d1b444f)) || (bVar3 = false, lStack_558 != 0x615d2f450302a67c)) {
      bVar3 = true;
    }
    if (bVar3) {
      if (((lStack_570 != 0x27b2edaf600e01ce) || (lStack_568 != 0x5a14542f1963bd17)) ||
         ((lStack_560 != -0x382d7d44cca569c1 || (bVar3 = false, lStack_558 != 0x6482201eceb29e02))))
      {
        bVar3 = true;
      }
      uVar12 = 0;
      if (bVar3) goto LAB_ram_00022388;
    }
    if (((*param_5 != 0x3aaddbbef37afac6) || (param_5[1] != 0x3174c9ab6af3653d)) ||
       ((param_5[2] != -0x1b1f092d3d1b444f || (bVar3 = false, param_5[3] != 0x615d2f450302a67c)))) {
      bVar3 = true;
    }
    if (bVar3) {
      if ((((*param_5 != 0x27b2edaf600e01ce) || (param_5[1] != 0x5a14542f1963bd17)) ||
          (param_5[2] != -0x382d7d44cca569c1)) || (bVar4 = 0, param_5[3] != 0x6482201eceb29e02)) {
        bVar4 = 1;
      }
      bVar2 = (bool)(bVar2 | bVar4);
    }
  }
  uVar12 = 0;
  if (!bVar2) {
    fn_2c1e8(&uStack_530,0x37a000000000000,0,0x3e8000000000000);
    uVar12 = CONCAT44(uStack_52c,uStack_530);
    uVar15 = auStack_528[0];
  }
LAB_ram_00022388:
  *(undefined8 *)(param_1 + 2) = uVar12;
  *(ulonglong *)(param_1 + 4) = uVar15;
  *param_1 = 0;
  return;
}
