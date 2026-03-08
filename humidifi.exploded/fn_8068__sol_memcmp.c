/* Function: fn_8068__sol_memcmp
 * Address:  0x8188
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_8068__sol_memcmp @ 0x8188 ---- */

void fn_8068__sol_memcmp(undefined4 *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uVar2 = 0;
  puVar6 = (undefined4 *)0xbadc0de;
  if (param_3 == 2) {
    lVar5 = param_2[1];
    lVar3 = *param_2;
    uStack_8 = *(ulonglong *)(lVar5 + 0x270);
    uStack_10 = *(ulonglong *)(lVar5 + 0x268);
    uStack_18 = *(ulonglong *)(lVar5 + 0x260);
    uStack_20 = *(ulonglong *)(lVar5 + 600);
    if (*(ulonglong *)(lVar5 + 0x710) < 5) {
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
    puVar6 = (undefined4 *)0xabad1dea;
    if ((*(char *)(lVar3 + 1) == '\0') || (bVar1)) goto LAB_ram_00008470;
    if (param_5 != 0xf0) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
    }
    if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
    }
    uVar4 = *(ulonglong *)(param_4 + 0x18);
    if (*(ulonglong *)(param_4 + 0x10) != 0 || uVar4 != 0) {
      if (0xffffffffffff < uVar4) goto LAB_ram_000085c8;
      puVar6 = (undefined4 *)0xbad2;
      if (*(ulonglong *)(param_4 + 0x30) < (*(ulonglong *)(param_4 + 0x10) >> 0x30 | uVar4 << 0x10))
      goto LAB_ram_00008470;
    }
    puVar6 = (undefined4 *)0xbad2;
    if (*(ulonglong *)(param_4 + 0x38) < *(ulonglong *)(param_4 + 0x30)) goto LAB_ram_00008470;
    uVar7 = *(ulonglong *)(param_4 + 0x68);
    uVar4 = *(ulonglong *)(param_4 + 0x80);
    if (*(ulonglong *)(param_4 + 0x60) != 0 || uVar7 != 0) {
      if (0xffffffffffff < uVar7) goto LAB_ram_000085c8;
      uVar2 = *(ulonglong *)(param_4 + 0x60) >> 0x30 | uVar7 << 0x10;
    }
    if (((uVar4 < *(ulonglong *)(param_4 + 0x38)) || (uVar4 < uVar2)) ||
       (*(ulonglong *)(param_4 + 0x88) < uVar4)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(ulonglong *)(param_4 + 0xb8);
      uVar4 = *(ulonglong *)(param_4 + 0xd0);
      uVar7 = 0;
      if (*(ulonglong *)(param_4 + 0xb0) != 0 || uVar2 != 0) {
        if (0xffffffffffff < uVar2) {
LAB_ram_000085c8:
                    /* WARNING: Subroutine does not return */
          fn_2de60__custom_panic(&DAT_ram_00032998);
        }
        uVar7 = *(ulonglong *)(param_4 + 0xb0) >> 0x30 | uVar2 << 0x10;
      }
      uVar2 = 0;
      if (((*(ulonglong *)(param_4 + 0x88) <= uVar4) && (uVar7 <= uVar4)) &&
         (uVar4 <= *(ulonglong *)(param_4 + 0xd8))) {
        fn_2fe08__sol_memcpy(lVar5 + 0xe8,param_4,0xf0);
        fn_2930__sol_memcmp(lVar5 + 0xe8);
        uVar2 = 0x1a;
        puVar6 = param_1;
      }
    }
  }
LAB_ram_00008470:
  param_1[1] = (int)puVar6;
  *param_1 = (int)uVar2;
  return;
}
