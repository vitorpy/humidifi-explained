/* Function: fn_154c8__custom_panic
 * Address:  0x155e8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_154c8__custom_panic @ 0x155e8 ---- */

undefined8 fn_154c8__custom_panic(char *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong alStack_70 [2];
  uint uStack_5c;
  char acStack_58 [4];
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  char cStack_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  undefined4 uStack_38;
  char acStack_34 [32];
  uint uStack_14;
  char acStack_10 [16];
  
  if (*param_1 != '\0') {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    acStack_58[1] = param_1[0x2b];
    acStack_58[0] = param_1[0x2a];
    lVar11 = 1;
    if (iVar1 == 1) goto LAB_ram_00015c98;
    acStack_58[3] = param_1[0x43];
    acStack_58[2] = param_1[0x42];
    lVar11 = 2;
    if (iVar1 == 2) goto LAB_ram_00015c98;
    cStack_53 = param_1[0x5b];
    cStack_54 = param_1[0x5a];
    lVar11 = 3;
    if (iVar1 == 3) goto LAB_ram_00015c98;
    cStack_51 = param_1[0x73];
    cStack_52 = param_1[0x72];
    lVar11 = 4;
    if (iVar1 == 4) goto LAB_ram_00015c98;
    cStack_4f = param_1[0x8b];
    cStack_50 = param_1[0x8a];
    lVar11 = 5;
    if (iVar1 == 5) goto LAB_ram_00015c98;
    cStack_4d = param_1[0xa3];
    cStack_4e = param_1[0xa2];
    lVar11 = 6;
    if (iVar1 == 6) goto LAB_ram_00015c98;
    cStack_4b = param_1[0xbb];
    cStack_4c = param_1[0xba];
    lVar11 = 7;
    if (iVar1 == 7) goto LAB_ram_00015c98;
    cStack_49 = param_1[0xd3];
    cStack_4a = param_1[0xd2];
    lVar11 = 8;
    if (iVar1 == 8) goto LAB_ram_00015c98;
    cStack_47 = param_1[0xeb];
    cStack_48 = param_1[0xea];
    lVar11 = 9;
    if (iVar1 == 9) goto LAB_ram_00015c98;
    cStack_45 = param_1[0x103];
    cStack_46 = param_1[0x102];
    lVar11 = 10;
    if (iVar1 == 10) goto LAB_ram_00015c98;
    cStack_43 = param_1[0x11b];
    cStack_44 = param_1[0x11a];
    lVar11 = 0xb;
    if (iVar1 == 0xb) goto LAB_ram_00015c98;
    cStack_41 = param_1[0x133];
    cStack_42 = param_1[0x132];
    lVar11 = 0xc;
    if (iVar1 == 0xc) goto LAB_ram_00015c98;
    cStack_3f = param_1[0x14b];
    cStack_40 = param_1[0x14a];
    lVar11 = 0xd;
    if (iVar1 == 0xd) goto LAB_ram_00015c98;
    cStack_3d = param_1[0x163];
    cStack_3e = param_1[0x162];
    lVar11 = 0xe;
    if (iVar1 == 0xe) goto LAB_ram_00015c98;
    cStack_3b = param_1[0x17b];
    cStack_3c = param_1[0x17a];
    lVar11 = 0xf;
    if (iVar1 == 0xf) goto LAB_ram_00015c98;
    cStack_39 = param_1[0x193];
    cStack_3a = param_1[0x192];
    lVar11 = 0x10;
    if (iVar1 == 0x10) goto LAB_ram_00015c98;
    uStack_38 = CONCAT31(CONCAT21(uStack_38._2_2_,param_1[0x1ab]),param_1[0x1aa]);
    param_1 = &DAT_ram_00031b64;
    fn_2dfe8__custom_panic(&DAT_ram_00031b64,0x2b,&uStack_38,&DAT_ram_00032550,&DAT_ram_00032980);
  }
  if ((ulonglong)*(uint *)(param_1 + 8) == 0) {
    return 0;
  }
  lVar8 = (ulonglong)*(uint *)(param_1 + 8) * 0x18;
  acStack_58[1] = param_1[0x22];
  acStack_58[0] = param_1[0x21];
  lVar11 = 1;
  if (lVar8 != 0x18) {
    acStack_58[3] = param_1[0x3a];
    acStack_58[2] = param_1[0x39];
    lVar11 = 2;
    if (lVar8 != 0x30) {
      cStack_53 = param_1[0x52];
      cStack_54 = param_1[0x51];
      lVar11 = 3;
      if (lVar8 != 0x48) {
        cStack_51 = param_1[0x6a];
        cStack_52 = param_1[0x69];
        lVar11 = 4;
        if (lVar8 != 0x60) {
          cStack_4f = param_1[0x82];
          cStack_50 = param_1[0x81];
          lVar11 = 5;
          if (lVar8 != 0x78) {
            cStack_4d = param_1[0x9a];
            cStack_4e = param_1[0x99];
            lVar11 = 6;
            if (lVar8 != 0x90) {
              cStack_4b = param_1[0xb2];
              cStack_4c = param_1[0xb1];
              lVar11 = 7;
              if (lVar8 != 0xa8) {
                cStack_49 = param_1[0xca];
                cStack_4a = param_1[0xc9];
                lVar11 = 8;
                if (lVar8 != 0xc0) {
                  cStack_47 = param_1[0xe2];
                  cStack_48 = param_1[0xe1];
                  lVar11 = 9;
                  if (lVar8 != 0xd8) {
                    cStack_45 = param_1[0xfa];
                    cStack_46 = param_1[0xf9];
                    lVar11 = 10;
                    if (lVar8 != 0xf0) {
                      cStack_43 = param_1[0x112];
                      cStack_44 = param_1[0x111];
                      lVar11 = 0xb;
                      if (lVar8 != 0x108) {
                        cStack_41 = param_1[0x12a];
                        cStack_42 = param_1[0x129];
                        lVar11 = 0xc;
                        if (lVar8 != 0x120) {
                          cStack_3f = param_1[0x142];
                          cStack_40 = param_1[0x141];
                          lVar11 = 0xd;
                          if (lVar8 != 0x138) {
                            cStack_3d = param_1[0x15a];
                            cStack_3e = param_1[0x159];
                            lVar11 = 0xe;
                            if (lVar8 != 0x150) {
                              cStack_3b = param_1[0x172];
                              cStack_3c = param_1[0x171];
                              lVar11 = 0xf;
                              if (lVar8 != 0x168) {
                                cStack_39 = param_1[0x18a];
                                cStack_3a = param_1[0x189];
                                lVar11 = 0x10;
                                if (lVar8 != 0x180) {
                                  uStack_38 = CONCAT31(CONCAT21(uStack_38._2_2_,param_1[0x1a2]),
                                                       param_1[0x1a1]);
                                  puVar12 = &uStack_38;
                                  plVar7 = (longlong *)&DAT_ram_00031b64;
                                  plVar10 = (longlong *)0x2b;
                                  fn_2dfe8__custom_panic();
                                  uVar6 = 0xd;
                                  if ((undefined4 *)0x7 < puVar12) {
                                    if ((((*plVar7 != 0x6ec031f25bd57904) ||
                                         (plVar7[1] != 0x71568ce6ec574ee)) ||
                                        (plVar7[2] != 0x518ef4a3deb2b1fd)) ||
                                       (bVar4 = false, plVar7[3] != -0x70ec43a95d324efe)) {
                                      bVar4 = true;
                                    }
                                    lVar11 = *plVar10;
                                    if (bVar4) {
                                      if (((*plVar7 != 0x4873bce2144ae3b5) ||
                                          (plVar7[1] != -0x2911a2500a1ef197)) ||
                                         ((plVar7[2] != 0x60b8aa6da3403855 ||
                                          (bVar4 = false, plVar7[3] != 0x103cc0bd736050b0)))) {
                                        bVar4 = true;
                                      }
                                      if (bVar4) {
                                        if ((((*plVar7 != -0x44f118ed916356fa) ||
                                             (plVar7[1] != 0x6e904b4c145c1835)) ||
                                            (plVar7[2] != 0x2a2f74470ab0ff18)) ||
                                           (bVar4 = false, plVar7[3] != -0x2b367796f4eefba2)) {
                                          bVar4 = true;
                                        }
                                        if (bVar4) {
                                          if (((*plVar7 != 0x136d5ca2f1569155) ||
                                              (plVar7[1] != 0x340d9a0ae6f72a4f)) ||
                                             ((plVar7[2] != -0x2a9d9b9ca96e3882 ||
                                              (bVar4 = false, plVar7[3] != 0x698f3435f126add1)))) {
                                            bVar4 = true;
                                          }
                                          if ((!bVar4) &&
                                             (((lVar11 == 0x19f106ccead8aadf ||
                                               (lVar11 == 0x3cec9b1033d4c9bb)) ||
                                              (lVar11 == 0x351f5084b15529aa)))) {
                                            uVar6 = 0xc;
                                          }
                                        }
                                        else if (lVar11 == -0x78ffe9badeaba407) {
                                          uVar6 = 0xb;
                                        }
                                      }
                                      else if (((lVar11 == -0x77a4a414b3c0b4bf) ||
                                               (lVar11 == 0x65879cc54d18aca8)) ||
                                              (lVar11 == -0x37788a1e6e613908)) {
                                        uVar6 = 10;
                                      }
                                    }
                                    else {
                                      if (lVar11 < 0x24f3f41552b88a9d) {
                                        if (lVar11 < -0x162701836cac672f) {
                                          if (lVar11 == -0x7e6329becc64df3f) {
                                            return 2;
                                          }
                                          if (lVar11 == -0x55956088af70861a) {
                                            return 3;
                                          }
                                        }
                                        else {
                                          if (lVar11 == -0x162701836cac672f) {
                                            return 7;
                                          }
                                          if (lVar11 == 0x14afc431ccfa64bb) {
                                            return 6;
                                          }
                                          if (lVar11 == 0x18fabbd8cae56035) {
                                            return 9;
                                          }
                                        }
                                      }
                                      else if (lVar11 < 0x3e457d9aa869d1b0) {
                                        if (lVar11 == 0x24f3f41552b88a9d) {
                                          return 8;
                                        }
                                        if (lVar11 == 0x2aade37a97cb17e5) {
                                          return 0;
                                        }
                                      }
                                      else {
                                        if (lVar11 == 0x3e457d9aa869d1b0) {
                                          return 5;
                                        }
                                        if (lVar11 == 0x5ced2b7b97ef33d0) {
                                          return 4;
                                        }
                                        if (lVar11 == 0x680e5da774475696) {
                                          return 1;
                                        }
                                      }
                                      uVar6 = 0xd;
                                    }
                                  }
                                  return uVar6;
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
    }
  }
LAB_ram_00015c98:
  uStack_5c = (uint)lVar11;
  pcVar5 = acStack_58;
  do {
    cVar2 = *pcVar5;
    if ((ulonglong)uStack_5c == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      pcVar9 = acStack_58;
      do {
        if (*pcVar9 == cVar2) {
          if (pcVar9[1] == cVar2) {
            return 1;
          }
          if ((uVar14 & 0xffffffff) < 0x20) {
            acStack_34[uVar14 & 0xffffffff] = pcVar9[1];
            uVar14 = uVar14 + 1;
          }
        }
        pcVar9 = pcVar9 + 2;
      } while (pcVar9 != acStack_58 + (ulonglong)uStack_5c * 2);
    }
    uStack_14 = 0;
LAB_ram_00015e50:
    if ((uVar14 & 0xffffffff) != 0) {
      uVar13 = (ulonglong)uStack_14;
      uVar15 = uVar14 & 0xffffffff;
      uVar14 = uVar15 - 1;
      uStack_38 = (int)uVar14;
      cVar3 = acStack_34[uVar15 - 1];
      if (cVar3 == cVar2) {
        return 1;
      }
      if (0xf < uVar13) break;
      if (uVar13 != 0) {
        uVar15 = 0;
        do {
          if (acStack_10[uVar15] == cVar3) goto LAB_ram_00015e50;
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar13);
        goto joined_r0x00015f68;
      }
      uVar13 = 0;
      goto LAB_ram_00015f90;
    }
    pcVar5 = pcVar5 + 2;
    if (pcVar5 == acStack_58 + lVar11 * 2) {
      return 0;
    }
  } while( true );
  fn_2f0e0(alStack_70,cVar3,acStack_10);
  if (alStack_70[0] != 1) {
    uVar13 = (ulonglong)uStack_14;
joined_r0x00015f68:
    if (uVar13 < 0x10) {
LAB_ram_00015f90:
      acStack_10[uVar13] = cVar3;
      uStack_14 = (int)uVar13 + 1;
    }
    if ((ulonglong)uStack_5c != 0) {
      lVar8 = (ulonglong)uStack_5c << 1;
      pcVar9 = acStack_58 + 1;
      do {
        if ((pcVar9[-1] == cVar3) && ((uVar14 & 0xffffffff) < 0x20)) {
          acStack_34[uVar14 & 0xffffffff] = *pcVar9;
          uVar14 = uVar14 + 1;
        }
        pcVar9 = pcVar9 + 2;
        lVar8 = lVar8 + -2;
      } while (lVar8 != 0);
    }
    uStack_38 = (int)uVar14;
  }
  goto LAB_ram_00015e50;
}
