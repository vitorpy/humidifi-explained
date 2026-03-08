/* Function: fn_b260
 * Address:  0xb380
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_b260 @ 0xb380 ---- */

void fn_b260(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong unaff_R7;
  ulonglong uVar5;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  longlong lStack_4c8;
  longlong lStack_4b8;
  longlong lStack_4a8;
  longlong lStack_4a0;
  int *piStack_498;
  int aiStack_490 [2];
  int aiStack_488 [2];
  int iStack_480;
  uint uStack_47c;
  int aiStack_478 [2];
  int iStack_470;
  uint uStack_46c;
  int aiStack_468 [2];
  undefined1 auStack_460 [240];
  undefined1 auStack_370 [16];
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined1 auStack_2e0 [144];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  byte bStack_1ce;
  undefined1 auStack_1c0 [39];
  undefined1 uStack_199;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  fn_b260();
  if ((((*(longlong *)(lStack_4a0 + 0x28) != -0x21708a111e0922fa) ||
       (*(longlong *)(lStack_4a0 + 0x30) != -0x2532931b43a2bde8)) ||
      (*(longlong *)(lStack_4a0 + 0x38) != 0x270db9834dfc1ab6)) ||
     (bVar1 = false, *(longlong *)(lStack_4a0 + 0x40) != -0x3745e27d7064202)) {
    bVar1 = true;
  }
  if (bVar1) {
    fn_85a8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4d8);
  }
  else {
    fn_86e8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4d8);
  }
  lStack_100 = lStack_b8;
  lStack_108 = lStack_c0;
  lStack_110 = lStack_c8;
  lStack_118 = lStack_d0;
  if (((*(longlong *)(lStack_4a8 + 0x28) != -0x21708a111e0922fa) ||
      (*(longlong *)(lStack_4a8 + 0x30) != -0x2532931b43a2bde8)) ||
     ((*(longlong *)(lStack_4a8 + 0x38) != 0x270db9834dfc1ab6 ||
      (bVar1 = false, *(longlong *)(lStack_4a8 + 0x40) != -0x3745e27d7064202)))) {
    bVar1 = true;
  }
  if (bVar1) {
    fn_85a8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4e0);
  }
  else {
    fn_86e8__sol_try_find_program_address(&lStack_d0,auStack_1c0,puStack_4e0);
  }
  lStack_48 = lStack_b8;
  lStack_50 = lStack_c0;
  lStack_58 = lStack_c8;
  lStack_60 = lStack_d0;
  if (((lStack_118 != *(longlong *)(lStack_4b8 + 8)) ||
      (lStack_110 != *(longlong *)(lStack_4b8 + 0x10))) ||
     ((lStack_108 != *(longlong *)(lStack_4b8 + 0x18) ||
      (bVar1 = false, lStack_100 != *(longlong *)(lStack_4b8 + 0x20))))) {
    bVar1 = true;
  }
  uVar5 = 0xbadc0de8;
  if (!bVar1) {
    if ((((lStack_d0 != *(longlong *)(lStack_4c8 + 8)) ||
         (lStack_c8 != *(longlong *)(lStack_4c8 + 0x10))) ||
        (lStack_c0 != *(longlong *)(lStack_4c8 + 0x18))) ||
       (bVar1 = false, lStack_b8 != *(longlong *)(lStack_4c8 + 0x20))) {
      bVar1 = true;
    }
    if (!bVar1) {
      if (((*(longlong *)(lStack_4a0 + 0x28) != -0x6c5e9a281e0922fa) ||
          (*(longlong *)(lStack_4a0 + 0x30) != -0x53861431b91e3427)) ||
         ((*(longlong *)(lStack_4a0 + 0x38) != -0x6ec8a4a0127a4be4 ||
          (bVar1 = false, *(longlong *)(lStack_4a0 + 0x40) != -0x56ff00817a0a73c6)))) {
        bVar1 = true;
      }
      if (bVar1) {
        if (((*(longlong *)(lStack_4a0 + 0x28) != -0x21708a111e0922fa) ||
            (*(longlong *)(lStack_4a0 + 0x30) != -0x2532931b43a2bde8)) ||
           ((*(longlong *)(lStack_4a0 + 0x38) != 0x270db9834dfc1ab6 ||
            (bVar1 = false, *(longlong *)(lStack_4a0 + 0x40) != -0x3745e27d7064202)))) {
          bVar1 = true;
        }
        uVar5 = 0xbadc0de3;
        if (bVar1) goto LAB_ram_0000b758;
        fn_8d70__sol_invoke_signed_c(aiStack_468);
        if (aiStack_468[0] != 0x1a) goto LAB_ram_0000b768;
      }
      else {
        fn_8828__sol_invoke_signed_c(&iStack_470);
        if (iStack_470 != 0x1a) {
          uVar5 = (ulonglong)uStack_46c;
          aiStack_468[0] = iStack_470;
          goto LAB_ram_0000b768;
        }
      }
      if ((((*(longlong *)(lStack_4a8 + 0x28) != -0x6c5e9a281e0922fa) ||
           (*(longlong *)(lStack_4a8 + 0x30) != -0x53861431b91e3427)) ||
          (*(longlong *)(lStack_4a8 + 0x38) != -0x6ec8a4a0127a4be4)) ||
         (bVar1 = false, *(longlong *)(lStack_4a8 + 0x40) != -0x56ff00817a0a73c6)) {
        bVar1 = true;
      }
      if (bVar1) {
        if (((*(longlong *)(lStack_4a8 + 0x28) != -0x21708a111e0922fa) ||
            (*(longlong *)(lStack_4a8 + 0x30) != -0x2532931b43a2bde8)) ||
           ((*(longlong *)(lStack_4a8 + 0x38) != 0x270db9834dfc1ab6 ||
            (bVar1 = false, *(longlong *)(lStack_4a8 + 0x40) != -0x3745e27d7064202)))) {
          bVar1 = true;
        }
        uVar5 = 0xbadc0de3;
        if (bVar1) goto LAB_ram_0000b758;
        fn_8d70__sol_invoke_signed_c(aiStack_478);
        aiStack_468[0] = aiStack_478[0];
        if (aiStack_478[0] != 0x1a) goto LAB_ram_0000b768;
      }
      else {
        fn_8828__sol_invoke_signed_c(&iStack_480);
        if (iStack_480 != 0x1a) {
          uVar5 = (ulonglong)uStack_47c;
          aiStack_468[0] = iStack_480;
          goto LAB_ram_0000b768;
        }
      }
      uVar5 = 0xbadc0de9;
      if (((bStack_1ce < 3) && (uVar5 = 0xbadc0dea, lStack_360 <= lStack_358)) &&
         ((lStack_358 <= lStack_330 &&
          (((lStack_330 <= lStack_328 && (lStack_328 <= lStack_300)) && (lStack_300 <= lStack_2f8)))
          ))) {
        fn_167c8__custom_panic(aiStack_488,auStack_460);
        uVar5 = 0xbadc0deb;
        if (aiStack_488[0] == 0x1a) {
          fn_16518(aiStack_490);
          uVar5 = 0xbadc0dec;
          aiStack_468[0] = 0;
          if (aiStack_490[0] == 0x1a) {
            uVar5 = unaff_R7 + 0x58;
            fn_16748__custom_panic(uVar5,*(undefined8 *)(unaff_R7 + 0x50));
            fn_2fe28__sol_memmove(uVar5,auStack_370,0x90);
            fn_2fe28__sol_memmove(unaff_R7 + 0xe8,auStack_460,0xf0);
            uVar2 = puStack_4e0[1];
            uVar3 = puStack_4e0[2];
            uVar4 = puStack_4e0[3];
            *(undefined8 *)(unaff_R7 + 0x1d8) = *puStack_4e0;
            *(undefined8 *)(unaff_R7 + 0x1f0) = uVar4;
            *(undefined8 *)(unaff_R7 + 0x1e8) = uVar3;
            *(undefined8 *)(unaff_R7 + 0x1e0) = uVar2;
            uVar2 = *puStack_4d8;
            uVar3 = puStack_4d8[1];
            uVar4 = puStack_4d8[2];
            *(undefined8 *)(unaff_R7 + 0x210) = puStack_4d8[3];
            *(undefined8 *)(unaff_R7 + 0x208) = uVar4;
            *(undefined8 *)(unaff_R7 + 0x200) = uVar3;
            *(undefined8 *)(unaff_R7 + 0x1f8) = uVar2;
            *(undefined8 *)(unaff_R7 + 0x230) = uStack_238;
            *(undefined8 *)(unaff_R7 + 0x228) = uStack_240;
            *(undefined8 *)(unaff_R7 + 0x220) = uStack_248;
            *(undefined8 *)(unaff_R7 + 0x218) = uStack_250;
            *(undefined8 *)(unaff_R7 + 0x250) = uStack_218;
            *(undefined8 *)(unaff_R7 + 0x248) = uStack_220;
            *(undefined8 *)(unaff_R7 + 0x240) = uStack_228;
            *(undefined8 *)(unaff_R7 + 0x238) = uStack_230;
            uVar2 = *puStack_4f0;
            uVar3 = puStack_4f0[1];
            uVar4 = puStack_4f0[2];
            *(undefined8 *)(unaff_R7 + 0x270) = puStack_4f0[3];
            *(undefined8 *)(unaff_R7 + 0x268) = uVar4;
            *(undefined8 *)(unaff_R7 + 0x260) = uVar3;
            *(undefined8 *)(unaff_R7 + 600) = uVar2;
            *(undefined8 *)(unaff_R7 + 0x278) = uStack_1f0;
            *(undefined8 *)(unaff_R7 + 0x280) = uStack_1e8;
            *(byte *)(unaff_R7 + 0x288) = bStack_1ce;
            *(undefined4 *)(unaff_R7 + 0x28c) = 0;
            *(undefined4 *)(unaff_R7 + 0x289) = 0;
            *(undefined1 *)(unaff_R7 + 0x290) = uStack_199;
            *(undefined8 *)(unaff_R7 + 0x310) = 0;
            *(undefined8 *)(unaff_R7 + 0x308) = 0;
            *(undefined8 *)(unaff_R7 + 0x300) = 0;
            *(undefined8 *)(unaff_R7 + 0x2f8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2f0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2e8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2e0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2d8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2d0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2c8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2c0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2b8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2b0) = 0;
            *(undefined8 *)(unaff_R7 + 0x2a8) = 0;
            *(undefined8 *)(unaff_R7 + 0x2a0) = 0;
            *(undefined8 *)(unaff_R7 + 0x298) = 0;
            *(undefined4 *)(unaff_R7 + 0x294) = 0;
            *(undefined4 *)(unaff_R7 + 0x291) = 0;
            *(undefined8 *)(unaff_R7 + 800) = uStack_1e0;
            *(undefined2 *)(unaff_R7 + 0x318) = uStack_1d0;
            *(undefined4 *)(unaff_R7 + 0x31a) = 0;
            *(undefined2 *)(unaff_R7 + 0x31e) = 0;
            fn_2fe08__sol_memcpy(unaff_R7 + 0x328,auStack_2e0,0x50);
            *(undefined8 *)(unaff_R7 + 0x378) = uStack_1d8;
            *(undefined8 *)(unaff_R7 + 0x400) = 0;
            *(undefined8 *)(unaff_R7 + 0x3f8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3f0) = 0;
            *(undefined8 *)(unaff_R7 + 1000) = 0;
            *(undefined8 *)(unaff_R7 + 0x3e0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3d8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3d0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3c8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3c0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3b8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3b0) = 0;
            *(undefined8 *)(unaff_R7 + 0x3a8) = 0;
            *(undefined8 *)(unaff_R7 + 0x3a0) = 0;
            *(undefined8 *)(unaff_R7 + 0x398) = 0;
            *(undefined8 *)(unaff_R7 + 0x390) = 0;
            *(undefined8 *)(unaff_R7 + 0x388) = 0;
            *(undefined8 *)(unaff_R7 + 0x380) = 0;
            fn_2fe48__sol_memset(unaff_R7 + 0x408,0,0x308);
            *(undefined8 *)(unaff_R7 + 0x710) = 4;
            fn_2a6a8__sol_memcmp(uVar5);
            aiStack_468[0] = 0x1a;
          }
          goto LAB_ram_0000b768;
        }
      }
    }
  }
LAB_ram_0000b758:
  aiStack_468[0] = 0;
LAB_ram_0000b768:
  piStack_498[1] = (int)uVar5;
  *piStack_498 = aiStack_468[0];
  return;
}
