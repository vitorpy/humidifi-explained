/* Function: fn_1cd8__sol_memcpy
 * Address:  0x1df8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_1cd8__sol_memcpy @ 0x1df8 ---- */

void fn_1cd8__sol_memcpy(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uStack_8;
  
  uVar4 = 0;
  uVar2 = param_2 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    lVar3 = -uVar2;
    puVar1 = param_1;
    do {
      *puVar1 = uVar4 ^ *puVar1 ^ 0xc3ebbae2ff2fff3a;
      uVar4 = uVar4 + 0x1000100010001;
      puVar1 = puVar1 + 1;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  uStack_8 = 0;
  fn_2fe08__sol_memcpy(&uStack_8,(longlong)param_1 + uVar2,param_2 & 7);
  uStack_8 = uVar4 ^ uStack_8 ^ 0xc3ebbae2ff2fff3a;
  fn_2fe08__sol_memcpy((longlong)param_1 + uVar2,&uStack_8,param_2 & 7);
  return;
}
