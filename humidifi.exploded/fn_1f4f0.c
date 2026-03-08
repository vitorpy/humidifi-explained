/* Function: fn_1f4f0
 * Address:  0x1f610
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1f4f0 @ 0x1f610 ---- */

void fn_1f4f0(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ushort *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char acStack_350 [424];
  longlong *plStack_1a8;
  ulonglong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  
  if ((((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
      (param_3[2] != 0x10742a9290fc845b)) || (bVar8 = false, param_3[3] != 0x182e105eeb8708ad)) {
    bVar8 = true;
  }
  if (bVar8) {
    if (((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
       ((param_3[2] != 0x17f86227578d7956 || (bVar8 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
      bVar8 = true;
    }
    if (bVar8) {
      if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
         ((param_3[2] != 0xccbecd97e436386 || (bVar8 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
        bVar8 = true;
      }
      if (bVar8) {
        if ((((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
            (param_3[2] != -0x49badeacf352c099)) ||
           (bVar8 = false, param_3[3] != 0x494ac5dec856a9e9)) {
          bVar8 = true;
        }
        if (bVar8) {
          if (((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
             ((param_3[2] != 0x5f9eab07c0325e41 || (bVar8 = false, param_3[3] != 0x74308a941848db62)
              ))) {
            bVar8 = true;
          }
          if (bVar8) {
            if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
               ((param_3[2] != -0x5a746ce81742b801 ||
                (bVar8 = false, param_3[3] != 0x77eb01650c19b51)))) {
              bVar8 = true;
            }
            plStack_1a8 = (longlong *)0x0;
            uStack_1a0 = 0;
            if (bVar8) goto LAB_ram_00020e50;
          }
        }
      }
    }
  }
  plStack_1a8 = (longlong *)0x0;
  puVar3 = (ushort *)*param_2;
  uVar4 = (ulonglong)*(ushort *)((longlong)puVar3 + param_2[1] + -2);
  uVar7 = (ulonglong)*puVar3;
  uStack_1a0 = 0;
  if (uVar7 <= uVar4) goto LAB_ram_00020e50;
  puVar5 = (ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
  uVar1 = *puVar5;
  if ((((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904) ||
       (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
      (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd)) ||
     (bVar8 = false,
     *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x70ec43a95d324efe)) {
    bVar8 = true;
  }
  if (bVar8) {
    if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar8 = false,
        *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)))) {
      bVar8 = true;
    }
    if (bVar8) {
      if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != -0x44f118ed916356fa) ||
          (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != 0x6e904b4c145c1835)) ||
         ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x2a2f74470ab0ff18 ||
          (bVar8 = false,
          *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x2b367796f4eefba2)))
         ) {
        bVar8 = true;
      }
      if (bVar8) {
        if ((((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x136d5ca2f1569155)
             || (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x340d9a0ae6f72a4f)) ||
            (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != -0x2a9d9b9ca96e3882
            )) || (bVar8 = false,
                  *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)) {
          bVar8 = true;
        }
        plStack_1a8 = (longlong *)0x0;
        if (bVar8) goto LAB_ram_00020e50;
      }
    }
  }
  if (((*param_3 != 0x6560b6dd6ee140db) || (param_3[1] != -0x163a020e81a9d7c4)) ||
     ((param_3[2] != 0x10742a9290fc845b || (bVar8 = false, param_3[3] != 0x182e105eeb8708ad)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x182e105eeb8708ad;
    uStack_198 = 0x10742a9290fc845b;
    uStack_1a0 = 0xe9c5fdf17e56283c;
    plStack_1a8 = (longlong *)0x6560b6dd6ee140db;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != 0x6560b6dd6ee140db) || (plVar10[1] != -0x163a020e81a9d7c4)) ||
             ((plVar10[2] != 0x10742a9290fc845b || (bVar8 = false, plVar10[3] != 0x182e105eeb8708ad)
              ))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if ((((*param_3 != -0x724bde0defd224ab) || (param_3[1] != -0x4ddc648a4ff5d960)) ||
      (param_3[2] != 0x17f86227578d7956)) || (bVar8 = false, param_3[3] != -0x2866c6493ba65e0d)) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0xd79939b6c459a1f3;
    uStack_198 = 0x17f86227578d7956;
    uStack_1a0 = 0xb2239b75b00a26a0;
    plStack_1a8 = (longlong *)0x8db421f2102ddb55;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != -0x724bde0defd224ab) || (plVar10[1] != -0x4ddc648a4ff5d960)) ||
             ((plVar10[2] != 0x17f86227578d7956 ||
              (bVar8 = false, plVar10[3] != -0x2866c6493ba65e0d)))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if (((*param_3 != -0x5b792ad20f59a16d) || (param_3[1] != -0x2c15f09912347a81)) ||
     ((param_3[2] != 0xccbecd97e436386 || (bVar8 = false, param_3[3] != 0x3aa82a4cb9d28622)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x3aa82a4cb9d28622;
    uStack_198 = 0xccbecd97e436386;
    uStack_1a0 = 0xd3ea0f66edcb857f;
    plStack_1a8 = (longlong *)0xa486d52df0a65e93;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if ((((*plVar10 != -0x5b792ad20f59a16d) || (plVar10[1] != -0x2c15f09912347a81)) ||
              (plVar10[2] != 0xccbecd97e436386)) ||
             (bVar8 = false, plVar10[3] != 0x3aa82a4cb9d28622)) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if (((*param_3 != 0x6d46af69e74bdfb4) || (param_3[1] != -0xfb7c095e807c65c)) ||
     ((param_3[2] != -0x49badeacf352c099 || (bVar8 = false, param_3[3] != 0x494ac5dec856a9e9)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x494ac5dec856a9e9;
    uStack_198 = 0xb64521530cad3f67;
    uStack_1a0 = 0xf0483f6a17f839a4;
    plStack_1a8 = (longlong *)0x6d46af69e74bdfb4;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != 0x6d46af69e74bdfb4) || (plVar10[1] != -0xfb7c095e807c65c)) ||
             ((plVar10[2] != -0x49badeacf352c099 ||
              (bVar8 = false, plVar10[3] != 0x494ac5dec856a9e9)))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if ((((*param_3 != 0x602eddf9a6f50302) || (param_3[1] != -0x30262668f50f63cf)) ||
      (param_3[2] != 0x5f9eab07c0325e41)) || (bVar8 = false, param_3[3] != 0x74308a941848db62)) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x74308a941848db62;
    uStack_198 = 0x5f9eab07c0325e41;
    uStack_1a0 = 0xcfd9d9970af09c31;
    plStack_1a8 = (longlong *)0x602eddf9a6f50302;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if (((*plVar10 != 0x602eddf9a6f50302) || (plVar10[1] != -0x30262668f50f63cf)) ||
             ((plVar10[2] != 0x5f9eab07c0325e41 || (bVar8 = false, plVar10[3] != 0x74308a941848db62)
              ))) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  if (((*param_3 != -0x5a8406c1ee9740dd) || (param_3[1] != 0x694d916b33d303ed)) ||
     ((param_3[2] != -0x5a746ce81742b801 || (bVar8 = false, param_3[3] != 0x77eb01650c19b51)))) {
    bVar8 = true;
  }
  if (bVar8) {
    uStack_190 = 0x77eb01650c19b51;
    uStack_198 = 0xa58b9317e8bd47ff;
    uStack_1a0 = 0x694d916b33d303ed;
    plStack_1a8 = (longlong *)0xa57bf93e1168bf23;
    uVar4 = 0;
    do {
      uVar11 = (ulonglong)*(ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]);
      if (uVar11 != 0) {
        plVar10 = (longlong *)((longlong)((longlong)puVar3 + (ulonglong)puVar3[uVar4 + 1]) + 3);
        uVar12 = 0;
        do {
          if ((((*plVar10 != -0x5a8406c1ee9740dd) || (plVar10[1] != 0x694d916b33d303ed)) ||
              (plVar10[2] != -0x5a746ce81742b801)) ||
             (bVar8 = false, plVar10[3] != 0x77eb01650c19b51)) {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_ram_00020ab0;
          plVar10 = (longlong *)((longlong)plVar10 + 0x21);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar11);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
    plStack_1a8 = (longlong *)0x0;
    uStack_1a0 = 0;
    goto LAB_ram_00020e50;
  }
  goto LAB_ram_00020cb8;
LAB_ram_00020ab0:
  if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904) ||
      (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)) ||
     ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x518ef4a3deb2b1fd ||
      (bVar8 = false,
      *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x70ec43a95d324efe)))) {
    bVar8 = true;
  }
  if (bVar8) {
    if (((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
        (*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
       ((*(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855 ||
        (bVar8 = false,
        *(longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)))) {
      bVar8 = true;
    }
    plStack_1a8 = (longlong *)0x0;
    uStack_1a0 = 0;
    if ((bVar8) ||
       (uVar4 = (ulonglong)*(ushort *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x22),
       uVar4 < 0xc)) goto LAB_ram_00020e50;
    plVar10 = (longlong *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x24);
    lVar9 = *plVar10;
    uVar2 = 0;
    if (lVar9 != -0x77a4a414b3c0b4bf) {
      if (lVar9 == 0x65879cc54d18aca8) {
        uVar2 = 2;
      }
      else {
        if (lVar9 != -0x37788a1e6e613908) goto LAB_ram_00020e50;
        uVar2 = 1;
      }
    }
    uStack_198 = CONCAT44(CONCAT31(uStack_198._5_3_,uVar2),
                          *(undefined4 *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x2c));
    plStack_1a8 = plVar10;
    uStack_1a0 = uVar4;
    lVar9 = fn_12ec0__custom_panic(&plStack_1a8);
    plVar10 = plStack_1a8;
    uVar4 = uStack_1a0;
    goto joined_r0x00020d88;
  }
  fn_144e8(acStack_350,(longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x24,
                   *(undefined2 *)((longlong)puVar5 + (ulonglong)uVar1 * 0x21 + 0x22));
  if (acStack_350[0] != '\x02') {
    fn_2fe08__sol_memcpy(&plStack_1a8,acStack_350,0x1a8);
    lVar9 = fn_154c8__custom_panic(&plStack_1a8);
    plVar10 = plStack_1a8;
    uVar4 = uStack_1a0;
    if ((char)plStack_1a8 == '\0') {
      if ((int)uStack_1a0 != 0) {
        puVar6 = &uStack_1a0;
        goto LAB_ram_00020d70;
      }
    }
    else if ((int)uStack_198 != 0) {
      puVar6 = &uStack_198;
LAB_ram_00020d70:
      *(undefined4 *)puVar6 = 0;
      uVar4 = uStack_1a0;
    }
joined_r0x00020d88:
    uStack_1a0 = 0;
    plStack_1a8 = (longlong *)0x0;
    if (lVar9 != 0) {
      plStack_1a8 = plVar10;
      uStack_1a0 = uVar4;
      fn_07e8__custom_panic(&plStack_1a8,0xc8000000000000,0,0x3e8000000000000,0);
    }
    goto LAB_ram_00020e50;
  }
LAB_ram_00020cb8:
  plStack_1a8 = (longlong *)0x0;
  uStack_1a0 = 0;
LAB_ram_00020e50:
  *(longlong **)(param_1 + 2) = plStack_1a8;
  *(ulonglong *)(param_1 + 4) = uStack_1a0;
  *param_1 = 0;
  return;
}
