/* Function: fn_ccc0__sol_invoke_signed_c
 * Address:  0xcde0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_ccc0__sol_invoke_signed_c @ 0xcde0 ---- */

void fn_ccc0__sol_invoke_signed_c(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  lVar2 = *param_2;
  if ((((*(longlong *)(lVar2 + 0x28) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(lVar2 + 0x30) != -0x53861431b91e3427)) ||
      (*(longlong *)(lVar2 + 0x38) != -0x6ec8a4a0127a4be4)) ||
     (bVar1 = false, *(longlong *)(lVar2 + 0x40) != -0x56ff00817a0a73c6)) {
    bVar1 = true;
  }
  uStack_8 = *(undefined8 *)(param_5 + -0xff8);
  if (bVar1) {
    if (((*(longlong *)(lVar2 + 0x28) != -0x21708a111e0922fa) ||
        (*(longlong *)(lVar2 + 0x30) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(lVar2 + 0x38) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(lVar2 + 0x40) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (bVar1) {
      uStack_28 = 0;
      uStack_24 = 0xbadc0de3;
    }
    else {
      uStack_28 = fn_c100__sol_invoke_signed_c(param_2,param_3,param_4,*(undefined8 *)(param_5 + -0x1000));
      uStack_24 = 0xbadc0def;
    }
  }
  else {
    plStack_20 = param_2;
    uStack_18 = param_3;
    uStack_10 = param_4;
    fn_2bcf8__sol_invoke_signed_c(&uStack_28,&plStack_20,8,0);
  }
  param_1[1] = uStack_24;
  *param_1 = uStack_28;
  return;
}
