/* Function: fn_1d720
 * Address:  0x1d840
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1d720 @ 0x1d840 ---- */

void fn_1d720(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ushort *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uStack_50;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
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
            uStack_20 = 0;
            uStack_18 = 0;
            if (bVar2) goto LAB_ram_0001e628;
          }
        }
      }
    }
  }
  uStack_20 = 0;
  puVar4 = (ushort *)*param_2;
  uVar3 = (ulonglong)*(ushort *)((longlong)puVar4 + param_2[1] + -2);
  uVar5 = (ulonglong)*puVar4;
  uStack_18 = 0;
  if (uVar3 < uVar5) {
    puVar6 = (ushort *)((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
    uVar1 = *puVar6;
    if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != -0x1e8395f2e7b51c4b) ||
          (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) != -0x51f325fec501496b))
         || ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x98144e7e5ae3fa8
             || (bVar2 = false,
                *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                0x40ee2497930cf7ea)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904)
            || (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)
            ) || ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   0x518ef4a3deb2b1fd ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  -0x70ec43a95d324efe)))) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) != 0x715b8f7af9be1205
                ) || (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                      -0x3fbd123929120c83)) ||
              (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
               -0x1178411a20edb01e)) ||
             (bVar2 = false,
             *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x4693a2c08ba113c1
             )) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                  -0x3b66289859b23cf6) ||
                (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x75b1926ae1365115)) ||
               ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                 0x678ad2090231d088 ||
                (bVar2 = false,
                *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                -0x139993aed94b961d)))) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                    0x136d5ca2f1569155) ||
                  (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                   0x340d9a0ae6f72a4f)) ||
                 ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   -0x2a9d9b9ca96e3882 ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)))) {
                bVar2 = true;
              }
              if (bVar2) {
                if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                       -0x16a608d8d48b0286) ||
                     (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                      0x7a819dd33c7070c6)) ||
                    (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                     0x6dd2523bce0a93a0)) ||
                   (bVar2 = false,
                   *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                   -0x2c4478dc22ab5fac)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                        -0x44f118ed916356fa) ||
                      (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                       0x6e904b4c145c1835)) ||
                     ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                       0x2a2f74470ab0ff18 ||
                      (bVar2 = false,
                      *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                      -0x2b367796f4eefba2)))) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                          -0x4fc4eec7e6cb4135) ||
                        (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                         0x45acad558b7e296b)) ||
                       ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                         0x59369b4a1734ee6f ||
                        (bVar2 = false,
                        *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                        0x42c79970523f5e6b)))) {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                             -0x1d323195ffe246f3) ||
                           (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                            0x67889bcdcd17de84)) ||
                          (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                           0x5666dfd02b922d2b)) ||
                         (bVar2 = false,
                         *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                         0x548b03e01a423aa3)) {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                              -0x6c2c22b8abad132c) ||
                            (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                             0x1776bd19d4d98a5b)) ||
                           ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                             0x6f034a62de39afcb ||
                            (bVar2 = false,
                            *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                            -0x5f19bd0c7dda6fc5)))) {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                                -0x1bb09aaaa3eacf65) ||
                              (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                               0x6493c705f351bd52)) ||
                             ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                               0x262c1d3289763901 ||
                              (bVar2 = false,
                              *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                              0x5be22f238cb47253)))) {
                            bVar2 = true;
                          }
                          if (bVar2) {
                            if ((((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                                   -0x7af703e2864bdf4) ||
                                 (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                                  0x2de7dd1cfc9a6d15)) ||
                                (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                                 0x6bafec3babd968f6)) ||
                               (bVar2 = false,
                               *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                               -0x3726a59b99a8f2a9)) {
                              bVar2 = true;
                            }
                            if (bVar2) {
                              if (((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 2) !=
                                    -0x372c55a8b3c334fc) ||
                                  (*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 10) !=
                                   0x72e40dd1add9f2d5)) ||
                                 ((*(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x12)
                                   != 0x42e6fdaa3eff7804 ||
                                  (bVar2 = false,
                                  *(longlong *)((longlong)puVar6 + (ulonglong)uVar1 * 0x21 + 0x1a)
                                  != -0x3a991ec56a126c8d)))) {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                if (((*param_3 != 0x6560b6dd6ee140db) ||
                                    (param_3[1] != -0x163a020e81a9d7c4)) ||
                                   ((param_3[2] != 0x10742a9290fc845b ||
                                    (bVar2 = false, param_3[3] != 0x182e105eeb8708ad)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x182e105eeb8708ad;
                                  uStack_10 = 0x10742a9290fc845b;
                                  uStack_18 = 0xe9c5fdf17e56283c;
                                  uStack_20 = 0x6560b6dd6ee140db;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if ((((*plVar7 != 0x6560b6dd6ee140db) ||
                                             (plVar7[1] != -0x163a020e81a9d7c4)) ||
                                            (plVar7[2] != 0x10742a9290fc845b)) ||
                                           (bVar2 = false, plVar7[3] != 0x182e105eeb8708ad)) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if (((*param_3 != -0x724bde0defd224ab) ||
                                    (param_3[1] != -0x4ddc648a4ff5d960)) ||
                                   ((param_3[2] != 0x17f86227578d7956 ||
                                    (bVar2 = false, param_3[3] != -0x2866c6493ba65e0d)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0xd79939b6c459a1f3;
                                  uStack_10 = 0x17f86227578d7956;
                                  uStack_18 = 0xb2239b75b00a26a0;
                                  uStack_20 = 0x8db421f2102ddb55;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if (((*plVar7 != -0x724bde0defd224ab) ||
                                            (plVar7[1] != -0x4ddc648a4ff5d960)) ||
                                           ((plVar7[2] != 0x17f86227578d7956 ||
                                            (bVar2 = false, plVar7[3] != -0x2866c6493ba65e0d)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if ((((*param_3 != -0x5b792ad20f59a16d) ||
                                     (param_3[1] != -0x2c15f09912347a81)) ||
                                    (param_3[2] != 0xccbecd97e436386)) ||
                                   (bVar2 = false, param_3[3] != 0x3aa82a4cb9d28622)) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x3aa82a4cb9d28622;
                                  uStack_10 = 0xccbecd97e436386;
                                  uStack_18 = 0xd3ea0f66edcb857f;
                                  uStack_20 = 0xa486d52df0a65e93;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if (((*plVar7 != -0x5b792ad20f59a16d) ||
                                            (plVar7[1] != -0x2c15f09912347a81)) ||
                                           ((plVar7[2] != 0xccbecd97e436386 ||
                                            (bVar2 = false, plVar7[3] != 0x3aa82a4cb9d28622)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if (((*param_3 != 0x6d46af69e74bdfb4) ||
                                    (param_3[1] != -0xfb7c095e807c65c)) ||
                                   ((param_3[2] != -0x49badeacf352c099 ||
                                    (bVar2 = false, param_3[3] != 0x494ac5dec856a9e9)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x494ac5dec856a9e9;
                                  uStack_10 = 0xb64521530cad3f67;
                                  uStack_18 = 0xf0483f6a17f839a4;
                                  uStack_20 = 0x6d46af69e74bdfb4;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if ((((*plVar7 != 0x6d46af69e74bdfb4) ||
                                             (plVar7[1] != -0xfb7c095e807c65c)) ||
                                            (plVar7[2] != -0x49badeacf352c099)) ||
                                           (bVar2 = false, plVar7[3] != 0x494ac5dec856a9e9)) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                if (((*param_3 != 0x602eddf9a6f50302) ||
                                    (param_3[1] != -0x30262668f50f63cf)) ||
                                   ((param_3[2] != 0x5f9eab07c0325e41 ||
                                    (bVar2 = false, param_3[3] != 0x74308a941848db62)))) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x74308a941848db62;
                                  uStack_10 = 0x5f9eab07c0325e41;
                                  uStack_18 = 0xcfd9d9970af09c31;
                                  uStack_20 = 0x602eddf9a6f50302;
                                  uStack_50 = 0;
                                  do {
                                    uVar3 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uStack_50 + 1]);
                                    if (uVar3 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uStack_50 + 1]
                                                ) + 3);
                                      uVar8 = 0;
                                      do {
                                        if (((*plVar7 != 0x602eddf9a6f50302) ||
                                            (plVar7[1] != -0x30262668f50f63cf)) ||
                                           ((plVar7[2] != 0x5f9eab07c0325e41 ||
                                            (bVar2 = false, plVar7[3] != 0x74308a941848db62)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar8 = uVar8 + 1;
                                      } while (uVar8 < uVar3);
                                    }
                                    uStack_50 = uStack_50 + 1;
                                  } while (uStack_50 < uVar5);
                                }
                                if ((((*param_3 != -0x5a8406c1ee9740dd) ||
                                     (param_3[1] != 0x694d916b33d303ed)) ||
                                    (param_3[2] != -0x5a746ce81742b801)) ||
                                   (bVar2 = false, param_3[3] != 0x77eb01650c19b51)) {
                                  bVar2 = true;
                                }
                                if (bVar2) {
                                  uStack_8 = 0x77eb01650c19b51;
                                  uStack_10 = 0xa58b9317e8bd47ff;
                                  uStack_18 = 0x694d916b33d303ed;
                                  uStack_20 = 0xa57bf93e1168bf23;
                                  uVar3 = 0;
                                  do {
                                    uVar8 = (ulonglong)
                                            *(ushort *)
                                             ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]);
                                    if (uVar8 != 0) {
                                      plVar7 = (longlong *)
                                               ((longlong)
                                                ((longlong)puVar4 + (ulonglong)puVar4[uVar3 + 1]) +
                                               3);
                                      uVar9 = 0;
                                      do {
                                        if (((*plVar7 != -0x5a8406c1ee9740dd) ||
                                            (plVar7[1] != 0x694d916b33d303ed)) ||
                                           ((plVar7[2] != -0x5a746ce81742b801 ||
                                            (bVar2 = false, plVar7[3] != 0x77eb01650c19b51)))) {
                                          bVar2 = true;
                                        }
                                        if (!bVar2) goto LAB_ram_0001f2e8;
                                        plVar7 = (longlong *)((longlong)plVar7 + 0x21);
                                        uVar9 = uVar9 + 1;
                                      } while (uVar9 < uVar8);
                                    }
                                    uVar3 = uVar3 + 1;
                                  } while (uVar3 < uVar5);
                                }
                                uStack_20 = 0;
                                uStack_18 = 0;
                                goto LAB_ram_0001e628;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uStack_20 = 0;
    uStack_18 = 0;
  }
LAB_ram_0001e628:
  *(undefined8 *)(param_1 + 2) = uStack_20;
  *(undefined8 *)(param_1 + 4) = uStack_18;
  *param_1 = 0;
  return;
LAB_ram_0001f2e8:
  fn_2c1e8(&uStack_20,0xc8000000000000,0,0x3e8000000000000);
  goto LAB_ram_0001e628;
}
