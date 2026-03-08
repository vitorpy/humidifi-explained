/* Function: fn_124a8__custom_panic
 * Address:  0x125c8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_124a8__custom_panic @ 0x125c8 ---- */

void fn_124a8__custom_panic(undefined4 *param_1,longlong *param_2,longlong param_3,undefined2 *param_4,
                     longlong param_5)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  ulonglong uStack_8;
  
  uVar2 = 0;
  uVar4 = 0xbadc0de;
  if (param_3 == 2) {
    lVar3 = param_2[1];
    lVar5 = *param_2;
    uStack_8 = *(ulonglong *)(lVar3 + 0x270);
    uStack_10 = *(ulonglong *)(lVar3 + 0x268);
    uStack_18 = *(ulonglong *)(lVar3 + 0x260);
    uStack_20 = *(ulonglong *)(lVar3 + 600);
    if (*(ulonglong *)(lVar3 + 0x710) < 5) {
      uStack_18 = uStack_18 ^ 0x4a2178451bac3c7;
      uStack_20 = uStack_20 ^ 0xfb5ce87aae443c38;
      uStack_10 = uStack_10 ^ 0x4a1178751b9c3c6;
      uStack_8 = uStack_8 ^ 0x4a0178651b8c3c5;
    }
    if ((((uStack_20 != *(ulonglong *)(lVar5 + 8)) || (uStack_18 != *(ulonglong *)(lVar5 + 0x10)))
        || (uStack_10 != *(ulonglong *)(lVar5 + 0x18))) ||
       (bVar1 = false, uStack_8 != *(ulonglong *)(lVar5 + 0x20))) {
      bVar1 = true;
    }
    uVar4 = 0xabad1dea;
    if ((*(char *)(lVar5 + 1) != '\0') && (!bVar1)) {
      if (param_5 != 8) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
      }
      if (((ulonglong)param_4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
      }
      *(undefined2 *)(lVar3 + 0x318) = *param_4;
      *(undefined4 *)(lVar3 + 0x31a) = 0;
      *(undefined2 *)(lVar3 + 0x31e) = 0;
      *(ulonglong *)(lVar3 + 0x318) = *(ulonglong *)(lVar3 + 0x318) ^ 0xed5f563e78eee80b;
      uVar2 = 0x1a;
      if (*(ulonglong *)(lVar3 + 0x710) == 0) {
        *(undefined8 *)(lVar3 + 0x710) = 1;
      }
    }
  }
  param_1[1] = uVar4;
  *param_1 = uVar2;
  return;
}
