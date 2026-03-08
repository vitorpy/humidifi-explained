/* Function: fn_9e60
 * Address:  0x9f80
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_9e60 @ 0x9f80 ---- */

void fn_9e60(void)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *unaff_R9;
  ulonglong uStack_218;
  longlong lStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  undefined8 *puStack_1e8;
  longlong *plStack_1e0;
  int *piStack_1d8;
  longlong *plStack_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 auStack_1b8 [39];
  undefined1 uStack_191;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_cc;
  longlong lStack_c4;
  longlong lStack_bc;
  longlong lStack_b4;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  fn_9e60();
  puStack_88 = &DAT_ram_00031980;
  uStack_80 = 0x20;
  uStack_90 = 0x20;
  uStack_10 = 0xd3bb8723dd54a054;
  uStack_18 = 0x6dd2523bce0a93a0;
  uStack_20 = 0x7a819dd33c7070c6;
  uStack_28 = 0xe959f7272b74fd7a;
  puStack_98 = auStack_1b8;
  fn_2dd00__sol_try_find_program_address(&lStack_cc,&puStack_98,3,&uStack_28);
  lStack_118 = lStack_b4;
  lStack_120 = lStack_bc;
  lStack_128 = lStack_c4;
  lStack_130 = lStack_cc;
  puStack_88 = &DAT_ram_00031980;
  uStack_80 = 0x20;
  uStack_90 = 0x20;
  uStack_10 = 0xd3bb8723dd54a054;
  uStack_18 = 0x6dd2523bce0a93a0;
  uStack_20 = 0x7a819dd33c7070c6;
  uStack_28 = 0xe959f7272b74fd7a;
  puStack_98 = auStack_1b8;
  fn_2dd00__sol_try_find_program_address(&lStack_cc,&puStack_98,3,&uStack_28);
  lStack_f8 = lStack_b4;
  lStack_100 = lStack_bc;
  lStack_108 = lStack_c4;
  lStack_110 = lStack_cc;
  lVar3 = *plStack_1d0;
  if ((((*unaff_R9 != *(longlong *)(lVar3 + 8)) || (unaff_R9[1] != *(longlong *)(lVar3 + 0x10))) ||
      (unaff_R9[2] != *(longlong *)(lVar3 + 0x18))) ||
     (bVar1 = false, unaff_R9[3] != *(longlong *)(lVar3 + 0x20))) {
    bVar1 = true;
  }
  iVar2 = 0;
  iVar5 = -0x5452e216;
  if (!bVar1) {
    lVar3 = *(longlong *)(lStack_1f0 + 0x28);
    if (((*plStack_1e0 != *(longlong *)(lVar3 + 8)) ||
        (plStack_1e0[1] != *(longlong *)(lVar3 + 0x10))) ||
       ((plStack_1e0[2] != *(longlong *)(lVar3 + 0x18) ||
        (bVar1 = false, plStack_1e0[3] != *(longlong *)(lVar3 + 0x20))))) {
      bVar1 = true;
    }
    if (!bVar1) {
      lVar3 = *(longlong *)(lStack_1f0 + 0x10);
      if (((lStack_130 != *(longlong *)(lVar3 + 8)) || (lStack_128 != *(longlong *)(lVar3 + 0x10)))
         || ((lStack_120 != *(longlong *)(lVar3 + 0x18) ||
             (bVar1 = false, lStack_118 != *(longlong *)(lVar3 + 0x20))))) {
        bVar1 = true;
      }
      iVar5 = -0x4520531d;
      if (!bVar1) {
        lVar3 = *(longlong *)(lStack_1f0 + 0x18);
        if ((((lStack_cc != *(longlong *)(lVar3 + 8)) || (lStack_c4 != *(longlong *)(lVar3 + 0x10)))
            || (lStack_bc != *(longlong *)(lVar3 + 0x18))) ||
           (bVar1 = false, lStack_b4 != *(longlong *)(lVar3 + 0x20))) {
          bVar1 = true;
        }
        if (!bVar1) {
          fn_8828__sol_invoke_signed_c(&iStack_1c0,lStack_1f0,(longlong *)(lStack_1f0 + 0x10),uStack_1f8);
          if (iStack_1c0 == 0x1a) {
            fn_8828__sol_invoke_signed_c(&iStack_1c8,lStack_1f0,(longlong *)(lStack_1f0 + 0x18),uStack_1f8);
            if (iStack_1c8 == 0x1a) {
              fn_16748__custom_panic(uStack_218,*(undefined8 *)(lStack_208 + 0x50));
              fn_2fe08__sol_memcpy(uStack_218,lStack_200 + 0xf0,0x90);
              fn_2fe08__sol_memcpy(lStack_208 + 0xe8,lStack_200,0xf0);
              *(undefined8 *)(lStack_208 + 0x270) = puStack_1e8[3];
              *(undefined8 *)(lStack_208 + 0x268) = puStack_1e8[2];
              *(undefined8 *)(lStack_208 + 0x260) = puStack_1e8[1];
              *(undefined8 *)(lStack_208 + 600) = *puStack_1e8;
              *(longlong *)(lStack_208 + 0x210) = unaff_R9[3];
              *(longlong *)(lStack_208 + 0x208) = unaff_R9[2];
              *(longlong *)(lStack_208 + 0x200) = unaff_R9[1];
              *(longlong *)(lStack_208 + 0x1f8) = *unaff_R9;
              *(longlong *)(lStack_208 + 0x1d8) = *plStack_1e0;
              *(longlong *)(lStack_208 + 0x1e0) = plStack_1e0[1];
              *(longlong *)(lStack_208 + 0x1e8) = plStack_1e0[2];
              *(longlong *)(lStack_208 + 0x1f0) = plStack_1e0[3];
              *(longlong *)(lStack_208 + 0x238) = lStack_130;
              *(longlong *)(lStack_208 + 0x240) = lStack_128;
              *(longlong *)(lStack_208 + 0x248) = lStack_120;
              *(longlong *)(lStack_208 + 0x250) = lStack_118;
              *(longlong *)(lStack_208 + 0x218) = lStack_110;
              *(longlong *)(lStack_208 + 0x220) = lStack_108;
              *(longlong *)(lStack_208 + 0x228) = lStack_100;
              *(longlong *)(lStack_208 + 0x230) = lStack_f8;
              *(undefined1 *)(lStack_208 + 0x290) = uStack_191;
              *(undefined4 *)(lStack_208 + 0x291) = 0;
              *(undefined4 *)(lStack_208 + 0x294) = 0;
              *(undefined1 *)(lStack_208 + 0x288) = *(undefined1 *)(lStack_200 + 0x1f0);
              *(undefined4 *)(lStack_208 + 0x289) = 0;
              *(undefined4 *)(lStack_208 + 0x28c) = 0;
              uVar4 = *(undefined8 *)(lStack_200 + 0x1e0);
              *(undefined8 *)(lStack_208 + 0x280) = *(undefined8 *)(lStack_200 + 0x1e8);
              *(undefined8 *)(lStack_208 + 0x278) = uVar4;
              *(undefined8 *)(lStack_208 + 0x328) = 0;
              *(undefined8 *)(lStack_208 + 0x330) = 0;
              *(undefined8 *)(lStack_208 + 0x338) = 0;
              *(undefined8 *)(lStack_208 + 0x340) = 0;
              *(undefined8 *)(lStack_208 + 0x348) = 0;
              *(undefined8 *)(lStack_208 + 0x350) = 0;
              *(undefined8 *)(lStack_208 + 0x358) = 0;
              *(undefined8 *)(lStack_208 + 0x360) = 0;
              *(undefined8 *)(lStack_208 + 0x368) = 0;
              *(undefined8 *)(lStack_208 + 0x370) = 0;
              *(undefined8 *)(lStack_208 + 0x380) = 0;
              fn_16748__custom_panic(uStack_218,*(undefined8 *)(lStack_208 + 0x50));
              fn_2a6a8__sol_memcmp(uStack_218);
              iVar2 = 0x1a;
            }
            else {
              uStack_218 = (ulonglong)uStack_1c4;
              iVar2 = iStack_1c8;
            }
          }
          else {
            uStack_218 = (ulonglong)uStack_1bc;
            iVar2 = iStack_1c0;
          }
          iVar5 = (int)uStack_218;
        }
      }
    }
  }
  piStack_1d8[1] = iVar5;
  *piStack_1d8 = iVar2;
  return;
}
