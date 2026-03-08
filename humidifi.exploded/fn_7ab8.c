/* Function: fn_7ab8
 * Address:  0x7bd8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_7ab8 @ 0x7bd8 ---- */

void fn_7ab8(undefined4 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uVar2 = 0;
  uVar5 = 0xbadc0de;
  if (param_3 == 2) {
    lVar4 = param_2[1];
    lVar3 = *param_2;
    uStack_8 = *(ulonglong *)(lVar4 + 0x270);
    uStack_10 = *(ulonglong *)(lVar4 + 0x268);
    uStack_18 = *(ulonglong *)(lVar4 + 0x260);
    uStack_20 = *(ulonglong *)(lVar4 + 600);
    if (*(ulonglong *)(lVar4 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar3 + 8)) || (uStack_18 != *(ulonglong *)(lVar3 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar3 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar3 + 0x20))) {
      bVar1 = true;
    }
    uVar5 = 0xabad1dea;
    if ((*(char *)(lVar3 + 1) != '\0') && (!bVar1)) {
      if (param_5 != 0x90) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
      }
      if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
      }
      uVar5 = 0xbad1;
      if (((*(longlong *)(param_4 + 0x10) <= *(longlong *)(param_4 + 0x18)) &&
          (*(longlong *)(param_4 + 0x18) <= *(longlong *)(param_4 + 0x40))) &&
         ((*(longlong *)(param_4 + 0x40) <= *(longlong *)(param_4 + 0x48) &&
          ((*(longlong *)(param_4 + 0x48) <= *(longlong *)(param_4 + 0x70) &&
           (*(longlong *)(param_4 + 0x70) <= *(longlong *)(param_4 + 0x78))))))) {
        fn_2fe08__sol_memcpy(lVar4 + 0x58,param_4,0x90);
        uVar5 = *(ulonglong *)(lVar4 + 0x60) ^ 0x962f6f387c135a2c;
        *(ulonglong *)(lVar4 + 0x58) = *(ulonglong *)(lVar4 + 0x58) ^ 0x69d190c683eda5d3;
        *(ulonglong *)(lVar4 + 0x60) = uVar5;
        *(ulonglong *)(lVar4 + 0x68) = *(ulonglong *)(lVar4 + 0x68) ^ 0x962c6f3b7c105a2d;
        *(ulonglong *)(lVar4 + 0x70) = *(ulonglong *)(lVar4 + 0x70) ^ 0x962d6f3a7c115a2e;
        *(ulonglong *)(lVar4 + 0x78) = *(ulonglong *)(lVar4 + 0x78) ^ 0x962a6f3d7c165a2f;
        *(ulonglong *)(lVar4 + 0x80) = *(ulonglong *)(lVar4 + 0x80) ^ 0x962b6f3c7c175a28;
        *(ulonglong *)(lVar4 + 0x88) = *(ulonglong *)(lVar4 + 0x88) ^ 0x96286f3f7c145a29;
        *(ulonglong *)(lVar4 + 0x90) = *(ulonglong *)(lVar4 + 0x90) ^ 0x96296f3e7c155a2a;
        *(ulonglong *)(lVar4 + 0x98) = *(ulonglong *)(lVar4 + 0x98) ^ 0x96266f317c1a5a2b;
        *(ulonglong *)(lVar4 + 0xa0) = *(ulonglong *)(lVar4 + 0xa0) ^ 0x96276f307c1b5a24;
        *(ulonglong *)(lVar4 + 0xa8) = *(ulonglong *)(lVar4 + 0xa8) ^ 0x96246f337c185a25;
        *(ulonglong *)(lVar4 + 0xb0) = *(ulonglong *)(lVar4 + 0xb0) ^ 0x96256f327c195a26;
        *(ulonglong *)(lVar4 + 0xb8) = *(ulonglong *)(lVar4 + 0xb8) ^ 0x96226f357c1e5a27;
        *(ulonglong *)(lVar4 + 0xc0) = *(ulonglong *)(lVar4 + 0xc0) ^ 0x96236f347c1f5a20;
        *(ulonglong *)(lVar4 + 200) = *(ulonglong *)(lVar4 + 200) ^ 0x96206f377c1c5a21;
        *(ulonglong *)(lVar4 + 0xd0) = *(ulonglong *)(lVar4 + 0xd0) ^ 0x96216f367c1d5a22;
        *(ulonglong *)(lVar4 + 0xd8) = *(ulonglong *)(lVar4 + 0xd8) ^ 0x963e6f297c025a23;
        *(ulonglong *)(lVar4 + 0xe0) = *(ulonglong *)(lVar4 + 0xe0) ^ 0x963f6f287c035a3c;
        uVar2 = 0x1a;
      }
    }
  }
  param_1[1] = (int)uVar5;
  *param_1 = uVar2;
  return;
}
