/* Function: fn_a740
 * Address:  0xa860
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_a740 @ 0xa860 ---- */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_a740(uint *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int aiStack_490 [2];
  int aiStack_488 [2];
  uint uStack_480;
  uint uStack_47c;
  uint auStack_478 [2];
  uint uStack_470;
  uint uStack_46c;
  uint auStack_468 [2];
  undefined1 auStack_460 [240];
  undefined1 auStack_370 [16];
  longlong lStack_360;
  longlong lStack_358;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_300;
  longlong lStack_2f8;
  undefined1 auStack_2e0 [80];
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined2 uStack_1d0;
  byte bStack_1ce;
  longlong **pplStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  undefined1 uStack_199;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  longlong *plStack_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined2 uStack_130;
  longlong lStack_128;
  undefined2 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  longlong *plStack_e0;
  ulonglong *puStack_d8;
  longlong **pplStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined1 uStack_b0;
  longlong **pplStack_60;
  undefined8 **ppuStack_58;
  longlong *plStack_50;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 **ppuStack_28;
  longlong ***ppplStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar2 = 0;
  uVar11 = 0xbadc0de1;
  if (param_3 < 10) goto LAB_ram_0000b768;
  lVar12 = *param_2;
  uVar11 = 0xabad1dea;
  if (*(char *)(lVar12 + 1) == '\0') goto LAB_ram_0000b768;
  if ((((*(longlong *)(lVar12 + 8) != -0x32b20de6c4775e40) ||
       (*(longlong *)(lVar12 + 0x10) != -0x15200f0917dbfd5f)) ||
      (*(longlong *)(lVar12 + 0x18) != -0x47ebde6f8ba50bd0)) ||
     (bVar1 = false, *(longlong *)(lVar12 + 0x20) != 0x4164f987ea077494)) {
    bVar1 = true;
  }
  if (bVar1) goto LAB_ram_0000b768;
  if (param_5 != 0x2a0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
  }
  if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
  }
  fn_2fe08__sol_memcpy(auStack_460,param_4,0x2a0);
  lVar7 = param_2[7];
  if (((*(longlong *)(lVar7 + 8) != -0x6c5e9a281e0922fa) ||
      (*(longlong *)(lVar7 + 0x10) != -0x53861431b91e3427)) ||
     ((*(longlong *)(lVar7 + 0x18) != -0x6ec8a4a0127a4be4 ||
      (bVar1 = false, *(longlong *)(lVar7 + 0x20) != -0x56ff00817a0a73c6)))) {
    bVar1 = true;
  }
  lVar3 = param_2[8];
  if (bVar1) {
    if (((*(longlong *)(lVar7 + 8) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar7 + 0x10) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar7 + 0x18) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(lVar7 + 0x20) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_ram_0000aaf0;
  }
  else {
LAB_ram_0000aaf0:
    if ((((*(longlong *)(lVar3 + 8) != -0x6c5e9a281e0922fa) ||
         (*(longlong *)(lVar3 + 0x10) != -0x53861431b91e3427)) ||
        (*(longlong *)(lVar3 + 0x18) != -0x6ec8a4a0127a4be4)) ||
       (bVar1 = false, *(longlong *)(lVar3 + 0x20) != -0x56ff00817a0a73c6)) {
      bVar1 = true;
    }
    if ((!bVar1) ||
       (((*(longlong *)(lVar3 + 8) == -0x21708a111e0922fa &&
         (*(longlong *)(lVar3 + 0x10) == -0x2532931b43a2bde8)) &&
        ((*(longlong *)(lVar3 + 0x18) == 0x270db9834dfc1ab6 &&
         (*(longlong *)(lVar3 + 0x20) == -0x3745e27d7064202)))))) {
      lVar7 = param_2[2];
      if (((*(longlong *)(lVar7 + 8) != lStack_270) || (*(longlong *)(lVar7 + 0x10) != lStack_268))
         || ((*(longlong *)(lVar7 + 0x18) != lStack_260 ||
             (bVar1 = false, *(longlong *)(lVar7 + 0x20) != lStack_258)))) {
        bVar1 = true;
      }
      uVar2 = 0;
      uVar11 = 0xbadc0de4;
      if (bVar1) goto LAB_ram_0000b768;
      lVar3 = param_2[3];
      if ((((*(longlong *)(lVar3 + 8) != lStack_290) || (*(longlong *)(lVar3 + 0x10) != lStack_288))
          || (*(longlong *)(lVar3 + 0x18) != lStack_280)) ||
         (bVar1 = false, *(longlong *)(lVar3 + 0x20) != lStack_278)) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_ram_0000b768;
      plVar4 = param_2 + 4;
      lVar8 = *plVar4;
      if (((*(longlong *)(lVar8 + 8) != lStack_230) || (*(longlong *)(lVar8 + 0x10) != lStack_228))
         || ((*(longlong *)(lVar8 + 0x18) != lStack_220 ||
             (bVar1 = false, *(longlong *)(lVar8 + 0x20) != lStack_218)))) {
        bVar1 = true;
      }
      uVar11 = 0xbadc0de5;
      if (bVar1) goto LAB_ram_0000b768;
      plVar5 = param_2 + 5;
      lVar6 = *plVar5;
      if (((*(longlong *)(lVar6 + 8) != lStack_250) || (*(longlong *)(lVar6 + 0x10) != lStack_248))
         || ((*(longlong *)(lVar6 + 0x18) != lStack_240 ||
             (bVar1 = false, *(longlong *)(lVar6 + 0x20) != lStack_238)))) {
        bVar1 = true;
      }
      if (bVar1) goto LAB_ram_0000b768;
      puVar9 = (ulonglong *)(param_2 + 1);
      fn_84c0__sol_try_find_program_address(&pplStack_d0);
      lStack_1a8 = lStack_b8;
      lStack_1b0 = lStack_c0;
      lStack_1b8 = lStack_c8;
      pplStack_1c0 = pplStack_d0;
      uStack_199 = uStack_b0;
      uVar10 = *puVar9;
      lStack_128 = uVar10 + 8;
      if ((((pplStack_d0 != *(longlong ***)(uVar10 + 8)) ||
           (lStack_c8 != *(longlong *)(uVar10 + 0x10))) ||
          (lStack_c0 != *(longlong *)(uVar10 + 0x18))) ||
         (bVar1 = false, lStack_b8 != *(longlong *)(uVar10 + 0x20))) {
        bVar1 = true;
      }
      if (bVar1) {
        uVar2 = 0;
        uVar11 = 0xbadc0de7;
        goto LAB_ram_0000b768;
      }
      puStack_158 = &uStack_199;
      puStack_198 = &DAT_ram_00031fb2;
      uStack_150 = 1;
      uStack_160 = 0x20;
      uStack_170 = 0x20;
      uStack_180 = 0x20;
      uStack_190 = 6;
      ppuStack_148 = &puStack_198;
      uStack_140 = 5;
      uStack_120 = 0x101;
      uStack_130 = 0x101;
      uStack_104 = 0x2b74fd7a;
      uStack_100 = 0xe959f727;
      uStack_fc = 0x3c7070c6;
      uStack_f8 = 0x7a819dd3;
      uStack_f4 = 0x6dd2523bce0a93a0;
      uStack_ec = 0xd3bb8723dd54a054;
      uStack_10c = 0x6c0;
      uStack_108 = 0;
      uStack_114 = 0xc51c00;
      uStack_110 = 0;
      uStack_118 = 0;
      ppplStack_20 = &pplStack_60;
      ppuStack_28 = &pplStack_d0;
      puStack_48 = &uStack_118;
      plStack_50 = &lStack_138;
      ppuStack_58 = &pplStack_d0;
      pplStack_60 = &plStack_e0;
      uStack_8 = 2;
      uStack_10 = 2;
      uStack_18 = 0;
      uStack_30 = 2;
      uStack_38 = 2;
      uStack_40 = 0;
      puStack_188 = &uStack_210;
      plStack_178 = &lStack_270;
      plStack_168 = &lStack_290;
      lStack_138 = lVar12 + 8;
      plStack_e0 = param_2;
      puStack_d8 = puVar9;
      uVar2 = fn_0158(&pplStack_60);
      uVar11 = uVar10;
      if (uVar2 != 0x1a) goto LAB_ram_0000b768;
      puStack_48 = &uStack_118;
      ppuStack_58 = (undefined8 **)&lStack_138;
      pplStack_60 = (longlong **)&DAT_ram_000319a0;
      uStack_40 = 0x34;
      plStack_50 = (longlong *)0x2;
      fn_b260(&pplStack_60,&pplStack_d0,2,&ppuStack_148,1);
      if (((*(longlong *)(lVar7 + 0x28) != -0x21708a111e0922fa) ||
          (*(longlong *)(lVar7 + 0x30) != -0x2532931b43a2bde8)) ||
         ((*(longlong *)(lVar7 + 0x38) != 0x270db9834dfc1ab6 ||
          (bVar1 = false, *(longlong *)(lVar7 + 0x40) != -0x3745e27d7064202)))) {
        bVar1 = true;
      }
      if (bVar1) {
        fn_85a8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_270);
      }
      else {
        fn_86e8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_270);
      }
      uStack_100 = (undefined4)lStack_b8;
      uStack_fc = (undefined4)((ulonglong)lStack_b8 >> 0x20);
      uStack_108 = (undefined4)lStack_c0;
      uStack_104 = (undefined4)((ulonglong)lStack_c0 >> 0x20);
      uStack_110 = (undefined4)lStack_c8;
      uStack_10c = (undefined4)((ulonglong)lStack_c8 >> 0x20);
      uStack_118 = SUB84(pplStack_d0,0);
      uStack_114 = (undefined4)((ulonglong)pplStack_d0 >> 0x20);
      if (((*(longlong *)(lVar3 + 0x28) != -0x21708a111e0922fa) ||
          (*(longlong *)(lVar3 + 0x30) != -0x2532931b43a2bde8)) ||
         ((*(longlong *)(lVar3 + 0x38) != 0x270db9834dfc1ab6 ||
          (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x3745e27d7064202)))) {
        bVar1 = true;
      }
      if (bVar1) {
        fn_85a8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_290);
      }
      else {
        fn_86e8__sol_try_find_program_address(&pplStack_d0,&pplStack_1c0,&lStack_290);
      }
      puStack_48 = (undefined4 *)lStack_b8;
      plStack_50 = (longlong *)lStack_c0;
      ppuStack_58 = (undefined8 **)lStack_c8;
      pplStack_60 = pplStack_d0;
      if ((((CONCAT44(uStack_114,uStack_118) != *(longlong *)(lVar8 + 8)) ||
           (CONCAT44(uStack_10c,uStack_110) != *(longlong *)(lVar8 + 0x10))) ||
          (CONCAT44(uStack_104,uStack_108) != *(longlong *)(lVar8 + 0x18))) ||
         (bVar1 = false, CONCAT44(uStack_fc,uStack_100) != *(longlong *)(lVar8 + 0x20))) {
        bVar1 = true;
      }
      uVar11 = 0xbadc0de8;
      if (!bVar1) {
        if (((pplStack_d0 != *(longlong ***)(lVar6 + 8)) ||
            (lStack_c8 != *(longlong *)(lVar6 + 0x10))) ||
           ((lStack_c0 != *(longlong *)(lVar6 + 0x18) ||
            (bVar1 = false, lStack_b8 != *(longlong *)(lVar6 + 0x20))))) {
          bVar1 = true;
        }
        if (!bVar1) {
          if (((*(longlong *)(lVar7 + 0x28) != -0x6c5e9a281e0922fa) ||
              (*(longlong *)(lVar7 + 0x30) != -0x53861431b91e3427)) ||
             ((*(longlong *)(lVar7 + 0x38) != -0x6ec8a4a0127a4be4 ||
              (bVar1 = false, *(longlong *)(lVar7 + 0x40) != -0x56ff00817a0a73c6)))) {
            bVar1 = true;
          }
          if (bVar1) {
            if ((((*(longlong *)(lVar7 + 0x28) != -0x21708a111e0922fa) ||
                 (*(longlong *)(lVar7 + 0x30) != -0x2532931b43a2bde8)) ||
                (*(longlong *)(lVar7 + 0x38) != 0x270db9834dfc1ab6)) ||
               (bVar1 = false, *(longlong *)(lVar7 + 0x40) != -0x3745e27d7064202)) {
              bVar1 = true;
            }
            uVar11 = 0xbadc0de3;
            if (bVar1) goto LAB_ram_0000b758;
            fn_8d70__sol_invoke_signed_c(auStack_468,param_2,plVar4,puVar9);
            uVar2 = auStack_468[0];
            if (auStack_468[0] != 0x1a) goto LAB_ram_0000b768;
          }
          else {
            fn_8828__sol_invoke_signed_c(&uStack_470,param_2,plVar4,puVar9);
            if (uStack_470 != 0x1a) {
              uVar11 = (ulonglong)uStack_46c;
              uVar2 = uStack_470;
              goto LAB_ram_0000b768;
            }
          }
          if (((*(longlong *)(lVar3 + 0x28) != -0x6c5e9a281e0922fa) ||
              (*(longlong *)(lVar3 + 0x30) != -0x53861431b91e3427)) ||
             ((*(longlong *)(lVar3 + 0x38) != -0x6ec8a4a0127a4be4 ||
              (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x56ff00817a0a73c6)))) {
            bVar1 = true;
          }
          if (bVar1) {
            if (((*(longlong *)(lVar3 + 0x28) != -0x21708a111e0922fa) ||
                (*(longlong *)(lVar3 + 0x30) != -0x2532931b43a2bde8)) ||
               ((*(longlong *)(lVar3 + 0x38) != 0x270db9834dfc1ab6 ||
                (bVar1 = false, *(longlong *)(lVar3 + 0x40) != -0x3745e27d7064202)))) {
              bVar1 = true;
            }
            uVar11 = 0xbadc0de3;
            if (bVar1) goto LAB_ram_0000b758;
            fn_8d70__sol_invoke_signed_c(auStack_478,param_2,plVar5,puVar9);
            uVar2 = auStack_478[0];
            if (auStack_478[0] != 0x1a) goto LAB_ram_0000b768;
          }
          else {
            fn_8828__sol_invoke_signed_c(&uStack_480,param_2,plVar5,puVar9);
            if (uStack_480 != 0x1a) {
              uVar11 = (ulonglong)uStack_47c;
              uVar2 = uStack_480;
              goto LAB_ram_0000b768;
            }
          }
          uVar11 = 0xbadc0de9;
          if ((((bStack_1ce < 3) && (uVar11 = 0xbadc0dea, lStack_360 <= lStack_358)) &&
              (lStack_358 <= lStack_330)) &&
             (((lStack_330 <= lStack_328 && (lStack_328 <= lStack_300)) &&
              (lStack_300 <= lStack_2f8)))) {
            fn_167c8__custom_panic(aiStack_488,auStack_460);
            uVar11 = 0xbadc0deb;
            if (aiStack_488[0] == 0x1a) {
              fn_16518(aiStack_490);
              uVar2 = 0;
              uVar11 = 0xbadc0dec;
              if (aiStack_490[0] == 0x1a) {
                uVar11 = uVar10 + 0x58;
                fn_16748__custom_panic(uVar11,*(undefined8 *)(uVar10 + 0x50));
                fn_2fe28__sol_memmove(uVar11,auStack_370,0x90);
                fn_2fe28__sol_memmove(uVar10 + 0xe8,auStack_460,0xf0);
                *(longlong *)(uVar10 + 0x1d8) = lStack_290;
                *(longlong *)(uVar10 + 0x1f0) = lStack_278;
                *(longlong *)(uVar10 + 0x1e8) = lStack_280;
                *(longlong *)(uVar10 + 0x1e0) = lStack_288;
                *(longlong *)(uVar10 + 0x210) = lStack_258;
                *(longlong *)(uVar10 + 0x208) = lStack_260;
                *(longlong *)(uVar10 + 0x200) = lStack_268;
                *(longlong *)(uVar10 + 0x1f8) = lStack_270;
                *(longlong *)(uVar10 + 0x230) = lStack_238;
                *(longlong *)(uVar10 + 0x228) = lStack_240;
                *(longlong *)(uVar10 + 0x220) = lStack_248;
                *(longlong *)(uVar10 + 0x218) = lStack_250;
                *(longlong *)(uVar10 + 0x250) = lStack_218;
                *(longlong *)(uVar10 + 0x248) = lStack_220;
                *(longlong *)(uVar10 + 0x240) = lStack_228;
                *(longlong *)(uVar10 + 0x238) = lStack_230;
                *(undefined8 *)(uVar10 + 0x270) = uStack_1f8;
                *(undefined8 *)(uVar10 + 0x268) = uStack_200;
                *(undefined8 *)(uVar10 + 0x260) = uStack_208;
                *(undefined8 *)(uVar10 + 600) = uStack_210;
                *(undefined8 *)(uVar10 + 0x278) = uStack_1f0;
                *(undefined8 *)(uVar10 + 0x280) = uStack_1e8;
                *(byte *)(uVar10 + 0x288) = bStack_1ce;
                *(undefined4 *)(uVar10 + 0x28c) = 0;
                *(undefined4 *)(uVar10 + 0x289) = 0;
                *(undefined1 *)(uVar10 + 0x290) = uStack_199;
                *(undefined8 *)(uVar10 + 0x310) = 0;
                *(undefined8 *)(uVar10 + 0x308) = 0;
                *(undefined8 *)(uVar10 + 0x300) = 0;
                *(undefined8 *)(uVar10 + 0x2f8) = 0;
                *(undefined8 *)(uVar10 + 0x2f0) = 0;
                *(undefined8 *)(uVar10 + 0x2e8) = 0;
                *(undefined8 *)(uVar10 + 0x2e0) = 0;
                *(undefined8 *)(uVar10 + 0x2d8) = 0;
                *(undefined8 *)(uVar10 + 0x2d0) = 0;
                *(undefined8 *)(uVar10 + 0x2c8) = 0;
                *(undefined8 *)(uVar10 + 0x2c0) = 0;
                *(undefined8 *)(uVar10 + 0x2b8) = 0;
                *(undefined8 *)(uVar10 + 0x2b0) = 0;
                *(undefined8 *)(uVar10 + 0x2a8) = 0;
                *(undefined8 *)(uVar10 + 0x2a0) = 0;
                *(undefined8 *)(uVar10 + 0x298) = 0;
                *(undefined4 *)(uVar10 + 0x294) = 0;
                *(undefined4 *)(uVar10 + 0x291) = 0;
                *(undefined8 *)(uVar10 + 800) = uStack_1e0;
                *(undefined2 *)(uVar10 + 0x318) = uStack_1d0;
                *(undefined4 *)(uVar10 + 0x31a) = 0;
                *(undefined2 *)(uVar10 + 0x31e) = 0;
                fn_2fe08__sol_memcpy(uVar10 + 0x328,auStack_2e0,0x50);
                *(undefined8 *)(uVar10 + 0x378) = uStack_1d8;
                *(undefined8 *)(uVar10 + 0x400) = 0;
                *(undefined8 *)(uVar10 + 0x3f8) = 0;
                *(undefined8 *)(uVar10 + 0x3f0) = 0;
                *(undefined8 *)(uVar10 + 1000) = 0;
                *(undefined8 *)(uVar10 + 0x3e0) = 0;
                *(undefined8 *)(uVar10 + 0x3d8) = 0;
                *(undefined8 *)(uVar10 + 0x3d0) = 0;
                *(undefined8 *)(uVar10 + 0x3c8) = 0;
                *(undefined8 *)(uVar10 + 0x3c0) = 0;
                *(undefined8 *)(uVar10 + 0x3b8) = 0;
                *(undefined8 *)(uVar10 + 0x3b0) = 0;
                *(undefined8 *)(uVar10 + 0x3a8) = 0;
                *(undefined8 *)(uVar10 + 0x3a0) = 0;
                *(undefined8 *)(uVar10 + 0x398) = 0;
                *(undefined8 *)(uVar10 + 0x390) = 0;
                *(undefined8 *)(uVar10 + 0x388) = 0;
                *(undefined8 *)(uVar10 + 0x380) = 0;
                fn_2fe48__sol_memset(uVar10 + 0x408,0,0x308);
                *(undefined8 *)(uVar10 + 0x710) = 4;
                fn_2a6a8__sol_memcmp(uVar11);
                uVar2 = 0x1a;
              }
              goto LAB_ram_0000b768;
            }
          }
        }
      }
LAB_ram_0000b758:
      uVar2 = 0;
      goto LAB_ram_0000b768;
    }
  }
  uVar11 = 0xbadc0de3;
  uVar2 = 0;
LAB_ram_0000b768:
  param_1[1] = (uint)uVar11;
  *param_1 = uVar2;
  return;
}
