/* Function: fn_231b8
 * Address:  0x232d8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_231b8 @ 0x232d8 ---- */

void fn_231b8(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar3 = (ushort *)*param_2;
  uVar6 = (ulonglong)*(ushort *)((longlong)puVar3 + param_2[1] + -2);
  uVar4 = 0;
  uVar5 = 0;
  if (uVar6 < *puVar3) {
    puVar3 = (ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar6 + 1]);
    uVar1 = *puVar3;
    if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != -0x1e8395f2e7b51c4b) ||
          (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != -0x51f325fec501496b))
         || ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x98144e7e5ae3fa8
             || (bVar2 = false,
                *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                0x40ee2497930cf7ea)))) {
        bVar2 = true;
      }
      if (bVar2) {
        if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x6ec031f25bd57904)
            || (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != 0x71568ce6ec574ee)
            ) || ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   0x518ef4a3deb2b1fd ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  -0x70ec43a95d324efe)))) {
          bVar2 = true;
        }
        if (bVar2) {
          if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x715b8f7af9be1205
                ) || (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                      -0x3fbd123929120c83)) ||
              (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
               -0x1178411a20edb01e)) ||
             (bVar2 = false,
             *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) != -0x4693a2c08ba113c1
             )) {
            bVar2 = true;
          }
          if (bVar2) {
            if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                  -0x3b66289859b23cf6) ||
                (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                 0x75b1926ae1365115)) ||
               ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                 0x678ad2090231d088 ||
                (bVar2 = false,
                *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                -0x139993aed94b961d)))) {
              bVar2 = true;
            }
            if (bVar2) {
              if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                    0x136d5ca2f1569155) ||
                  (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                   0x340d9a0ae6f72a4f)) ||
                 ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                   -0x2a9d9b9ca96e3882 ||
                  (bVar2 = false,
                  *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                  0x698f3435f126add1)))) {
                bVar2 = true;
              }
              if (bVar2) {
                if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                       -0x16a608d8d48b0286) ||
                     (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                      0x7a819dd33c7070c6)) ||
                    (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                     0x6dd2523bce0a93a0)) ||
                   (bVar2 = false,
                   *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                   -0x2c4478dc22ab5fac)) {
                  bVar2 = true;
                }
                if (bVar2) {
                  if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                        -0x44f118ed916356fa) ||
                      (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                       0x6e904b4c145c1835)) ||
                     ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                       0x2a2f74470ab0ff18 ||
                      (bVar2 = false,
                      *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                      -0x2b367796f4eefba2)))) {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                          -0x4fc4eec7e6cb4135) ||
                        (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                         0x45acad558b7e296b)) ||
                       ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                         0x59369b4a1734ee6f ||
                        (bVar2 = false,
                        *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                        0x42c79970523f5e6b)))) {
                      bVar2 = true;
                    }
                    if (bVar2) {
                      if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                             -0x1d323195ffe246f3) ||
                           (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                            0x67889bcdcd17de84)) ||
                          (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                           0x5666dfd02b922d2b)) ||
                         (bVar2 = false,
                         *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                         0x548b03e01a423aa3)) {
                        bVar2 = true;
                      }
                      if (bVar2) {
                        if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                              -0x6c2c22b8abad132c) ||
                            (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                             0x1776bd19d4d98a5b)) ||
                           ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                             0x6f034a62de39afcb ||
                            (bVar2 = false,
                            *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                            -0x5f19bd0c7dda6fc5)))) {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                                -0x1bb09aaaa3eacf65) ||
                              (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                               0x6493c705f351bd52)) ||
                             ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                               0x262c1d3289763901 ||
                              (bVar2 = false,
                              *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                              0x5be22f238cb47253)))) {
                            bVar2 = true;
                          }
                          if (bVar2) {
                            if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                                   -0x7af703e2864bdf4) ||
                                 (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                                  0x2de7dd1cfc9a6d15)) ||
                                (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) !=
                                 0x6bafec3babd968f6)) ||
                               (bVar2 = false,
                               *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) !=
                               -0x3726a59b99a8f2a9)) {
                              bVar2 = true;
                            }
                            if (bVar2) {
                              if (((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) !=
                                    -0x372c55a8b3c334fc) ||
                                  (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) !=
                                   0x72e40dd1add9f2d5)) ||
                                 ((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12)
                                   != 0x42e6fdaa3eff7804 ||
                                  (bVar2 = false,
                                  *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a)
                                  != -0x3a991ec56a126c8d)))) {
                                bVar2 = true;
                              }
                              if (bVar2) {
                                fn_2c1e8(&uStack_18,0xc8000000000000,0,0x3e8000000000000);
                                uVar4 = uStack_18;
                                uVar5 = uStack_10;
                                goto LAB_ram_00023c48;
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
    uVar4 = 0;
    uVar5 = 0;
  }
LAB_ram_00023c48:
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *param_1 = 0;
  return;
}
