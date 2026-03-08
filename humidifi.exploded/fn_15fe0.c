/* Function: fn_15fe0
 * Address:  0x16100
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_15fe0 @ 0x16100 ---- */

undefined8 fn_15fe0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 0xd;
  if (7 < param_3) {
    if ((((*param_1 != 0x6ec031f25bd57904) || (param_1[1] != 0x71568ce6ec574ee)) ||
        (param_1[2] != 0x518ef4a3deb2b1fd)) || (bVar1 = false, param_1[3] != -0x70ec43a95d324efe)) {
      bVar1 = true;
    }
    lVar3 = *param_2;
    if (bVar1) {
      if (((*param_1 != 0x4873bce2144ae3b5) || (param_1[1] != -0x2911a2500a1ef197)) ||
         ((param_1[2] != 0x60b8aa6da3403855 || (bVar1 = false, param_1[3] != 0x103cc0bd736050b0))))
      {
        bVar1 = true;
      }
      if (bVar1) {
        if ((((*param_1 != -0x44f118ed916356fa) || (param_1[1] != 0x6e904b4c145c1835)) ||
            (param_1[2] != 0x2a2f74470ab0ff18)) ||
           (bVar1 = false, param_1[3] != -0x2b367796f4eefba2)) {
          bVar1 = true;
        }
        if (bVar1) {
          if (((*param_1 != 0x136d5ca2f1569155) || (param_1[1] != 0x340d9a0ae6f72a4f)) ||
             ((param_1[2] != -0x2a9d9b9ca96e3882 ||
              (bVar1 = false, param_1[3] != 0x698f3435f126add1)))) {
            bVar1 = true;
          }
          if ((!bVar1) &&
             (((lVar3 == 0x19f106ccead8aadf || (lVar3 == 0x3cec9b1033d4c9bb)) ||
              (lVar3 == 0x351f5084b15529aa)))) {
            uVar2 = 0xc;
          }
        }
        else if (lVar3 == -0x78ffe9badeaba407) {
          uVar2 = 0xb;
        }
      }
      else if (((lVar3 == -0x77a4a414b3c0b4bf) || (lVar3 == 0x65879cc54d18aca8)) ||
              (lVar3 == -0x37788a1e6e613908)) {
        uVar2 = 10;
      }
    }
    else {
      if (lVar3 < 0x24f3f41552b88a9d) {
        if (lVar3 < -0x162701836cac672f) {
          if (lVar3 == -0x7e6329becc64df3f) {
            return 2;
          }
          if (lVar3 == -0x55956088af70861a) {
            return 3;
          }
        }
        else {
          if (lVar3 == -0x162701836cac672f) {
            return 7;
          }
          if (lVar3 == 0x14afc431ccfa64bb) {
            return 6;
          }
          if (lVar3 == 0x18fabbd8cae56035) {
            return 9;
          }
        }
      }
      else if (lVar3 < 0x3e457d9aa869d1b0) {
        if (lVar3 == 0x24f3f41552b88a9d) {
          return 8;
        }
        if (lVar3 == 0x2aade37a97cb17e5) {
          return 0;
        }
      }
      else {
        if (lVar3 == 0x3e457d9aa869d1b0) {
          return 5;
        }
        if (lVar3 == 0x5ced2b7b97ef33d0) {
          return 4;
        }
        if (lVar3 == 0x680e5da774475696) {
          return 1;
        }
      }
      uVar2 = 0xd;
    }
  }
  return uVar2;
}
