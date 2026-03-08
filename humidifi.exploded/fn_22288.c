/* Function: fn_22288
 * Address:  0x223a8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_22288 @ 0x223a8 ---- */

void fn_22288(undefined4 *param_1,undefined8 *param_2,longlong *param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ushort *puVar6;
  ulonglong uVar7;
  ushort *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
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
            uVar3 = 0;
            uVar9 = 0;
            if (bVar2) goto LAB_ram_00023080;
          }
        }
      }
    }
  }
  puVar6 = (ushort *)*param_2;
  uVar7 = (ulonglong)*(ushort *)((longlong)puVar6 + param_2[1] + -2);
  uVar9 = 0;
  uVar3 = 0;
  if (uVar7 < *puVar6) {
    puVar8 = (ushort *)((longlong)puVar6 + (ulonglong)puVar6[uVar7 + 1]);
    uVar1 = *puVar8;
    if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != -0x1e8395f2e7b51c4b) ||
          (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) != -0x51f325fec501496b))
         || ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x98144e7e5ae3fa8
             || (bVar2 = false,
                *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                0x40ee2497930cf7ea)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904)
            || (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)
            ) || ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   0x518ef4a3deb2b1fd ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  -0x70ec43a95d324efe)))) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) != 0x715b8f7af9be1205
                ) || (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                      -0x3fbd123929120c83)) ||
              (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
               -0x1178411a20edb01e)) ||
             (bVar2 = false,
             *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x4693a2c08ba113c1
             )) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                  -0x3b66289859b23cf6) ||
                (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x75b1926ae1365115)) ||
               ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                 0x678ad2090231d088 ||
                (bVar2 = false,
                *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                -0x139993aed94b961d)))) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                    0x136d5ca2f1569155) ||
                  (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                   0x340d9a0ae6f72a4f)) ||
                 ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   -0x2a9d9b9ca96e3882 ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)))) {
                bVar2 = true;
              }
              if (bVar2) {
                if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                       -0x16a608d8d48b0286) ||
                     (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                      0x7a819dd33c7070c6)) ||
                    (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                     0x6dd2523bce0a93a0)) ||
                   (bVar2 = false,
                   *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                   -0x2c4478dc22ab5fac)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                        -0x44f118ed916356fa) ||
                      (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                       0x6e904b4c145c1835)) ||
                     ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                       0x2a2f74470ab0ff18 ||
                      (bVar2 = false,
                      *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                      -0x2b367796f4eefba2)))) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                          -0x4fc4eec7e6cb4135) ||
                        (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                         0x45acad558b7e296b)) ||
                       ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                         0x59369b4a1734ee6f ||
                        (bVar2 = false,
                        *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                        0x42c79970523f5e6b)))) {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                             -0x1d323195ffe246f3) ||
                           (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                            0x67889bcdcd17de84)) ||
                          (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                           0x5666dfd02b922d2b)) ||
                         (bVar2 = false,
                         *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                         0x548b03e01a423aa3)) {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                              -0x6c2c22b8abad132c) ||
                            (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                             0x1776bd19d4d98a5b)) ||
                           ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                             0x6f034a62de39afcb ||
                            (bVar2 = false,
                            *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                            -0x5f19bd0c7dda6fc5)))) {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                                -0x1bb09aaaa3eacf65) ||
                              (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                               0x6493c705f351bd52)) ||
                             ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                               0x262c1d3289763901 ||
                              (bVar2 = false,
                              *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                              0x5be22f238cb47253)))) {
                            bVar2 = true;
                          }
                          if (bVar2) {
                            if ((((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                                   -0x7af703e2864bdf4) ||
                                 (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                                  0x2de7dd1cfc9a6d15)) ||
                                (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                                 0x6bafec3babd968f6)) ||
                               (bVar2 = false,
                               *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                               -0x3726a59b99a8f2a9)) {
                              bVar2 = true;
                            }
                            if (bVar2) {
                              if (((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 2) !=
                                    -0x372c55a8b3c334fc) ||
                                  (*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 10) !=
                                   0x72e40dd1add9f2d5)) ||
                                 ((*(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x12)
                                   != 0x42e6fdaa3eff7804 ||
                                  (bVar2 = false,
                                  *(longlong *)((longlong)puVar8 + (ulonglong)uVar1 * 0x21 + 0x1a)
                                  != -0x3a991ec56a126c8d)))) {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                uVar7 = 0;
                                do {
                                  puVar8 = (ushort *)
                                           ((longlong)puVar6 + (ulonglong)puVar6[uVar7 + 1]);
                                  uVar4 = (ulonglong)*puVar8;
                                  if (((*(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 2) !=
                                        0x50126c1f9cda329f) ||
                                      (*(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 10) !=
                                       0x67c3ec2339739bc0)) ||
                                     ((*(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 0x12) !=
                                       0x1c9c6ad4e763280d ||
                                      (bVar2 = false,
                                      *(longlong *)((longlong)puVar8 + uVar4 * 0x21 + 0x1a) !=
                                      0x57fed5d0bbfd7df4)))) {
                                    bVar2 = true;
                                  }
                                  if (!bVar2) {
LAB_ram_00023260:
                                    fn_2c1e8(&uStack_18,0x37a000000000000,0,
                                                     0x3e8000000000000);
                                    uVar3 = uStack_18;
                                    uVar9 = uStack_10;
                                    break;
                                  }
                                  if (uVar4 != 0) {
                                    plVar5 = (longlong *)((longlong)puVar8 + 3);
                                    uVar10 = 0;
                                    do {
                                      if ((((*plVar5 != 0x50126c1f9cda329f) ||
                                           (plVar5[1] != 0x67c3ec2339739bc0)) ||
                                          (plVar5[2] != 0x1c9c6ad4e763280d)) ||
                                         (bVar2 = false, plVar5[3] != 0x57fed5d0bbfd7df4)) {
                                        bVar2 = true;
                                      }
                                      if (!bVar2) goto LAB_ram_00023260;
                                      plVar5 = (longlong *)((longlong)plVar5 + 0x21);
                                      uVar10 = uVar10 + 1;
                                    } while (uVar10 < uVar4);
                                  }
                                  uVar7 = uVar7 + 1;
                                  uVar3 = 0;
                                  uVar9 = 0;
                                } while (uVar7 < *puVar6);
                                goto LAB_ram_00023080;
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
    uVar3 = 0;
  }
LAB_ram_00023080:
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar9;
  *param_1 = 0;
  return;
}
