/* Function: fn_2f8a8
 * Address:  0x2f9c8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2f8a8 @ 0x2f9c8 ---- */

void fn_2f8a8(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 uStack_16;
  undefined2 auStack_4 [2];
  
  lVar3 = 0x14;
  if (9999 < param_1) {
    uVar4 = param_1;
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      param_1 = uVar4 / 10000;
      *(undefined2 *)((longlong)auStack_4 + lVar3) =
           *(undefined2 *)(&DAT_ram_0003237f + ((uVar4 % 10000) / 100) * 2);
      *(undefined2 *)((longlong)auStack_4 + lVar3 + 2) =
           *(undefined2 *)(&DAT_ram_0003237f + ((uVar4 % 10000) % 100) * 2);
      bVar1 = 99999999 < uVar4;
      uVar4 = param_1;
      lVar2 = lVar3 + -4;
    } while (bVar1);
    lVar3 = lVar3 + 0x10;
  }
  if (99 < param_1) {
    uVar4 = (param_1 & 0xffff) / 100;
    *(undefined2 *)((longlong)&uStack_16 + lVar3) =
         *(undefined2 *)(&DAT_ram_0003237f + ((param_1 + uVar4 * -100) * 2 & 0xfffe));
    param_1 = uVar4;
    lVar3 = lVar3 + -2;
  }
  if (param_1 < 10) {
    *(byte *)((longlong)&uStack_16 + lVar3 + 1) = (byte)param_1 | 0x30;
  }
  else {
    *(undefined2 *)((longlong)&uStack_16 + lVar3) = *(undefined2 *)(&DAT_ram_0003237f + param_1 * 2)
    ;
  }
  fn_2e510(param_3,param_2,1,0);
  return;
}
