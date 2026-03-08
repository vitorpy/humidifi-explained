/* Function: fn_d740__sol_invoke_signed_c
 * Address:  0xd860
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_d740__sol_invoke_signed_c @ 0xd860 ---- */

void fn_d740__sol_invoke_signed_c(int *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  int iStack_90;
  int iStack_8c;
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined ***pppuStack_10;
  undefined8 uStack_8;
  
  uStack_68 = *(undefined8 *)(param_5 + -0xfd8);
  uStack_81 = (undefined1)*(undefined8 *)(param_5 + -0xfe0);
  puVar2 = *param_2;
  if ((((*(longlong *)(puVar2 + 0x28) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(puVar2 + 0x30) != -0x53861431b91e3427)) ||
      (*(longlong *)(puVar2 + 0x38) != -0x6ec8a4a0127a4be4)) ||
     (bVar1 = false, *(longlong *)(puVar2 + 0x40) != -0x56ff00817a0a73c6)) {
    bVar1 = true;
  }
  uStack_20 = *(undefined8 *)(param_5 + -0xfe8);
  uStack_30 = *(undefined8 *)(param_5 + -0xff0);
  uStack_40 = *(undefined8 *)(param_5 + -0xff8);
  if (bVar1) {
    if (((*(longlong *)(puVar2 + 0x28) != -0x21708a111e0922fa) ||
        (*(longlong *)(puVar2 + 0x30) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(puVar2 + 0x38) != 0x270db9834dfc1ab6 ||
        (bVar1 = false, *(longlong *)(puVar2 + 0x40) != -0x3745e27d7064202)))) {
      bVar1 = true;
    }
    if (bVar1) {
      iStack_90 = 0;
      iStack_8c = -0x4523f21d;
    }
    else {
      ppuStack_60 = (undefined **)CONCAT71(ppuStack_60._1_7_,uStack_81);
      pppuStack_10 = &ppuStack_60;
      puStack_50 = &DAT_ram_00031fb2;
      uStack_8 = 1;
      uStack_18 = 0x20;
      uStack_28 = 0x20;
      uStack_38 = 0x20;
      uStack_48 = 6;
      ppuStack_80 = &puStack_50;
      uStack_78 = 5;
      iStack_90 = fn_c100__sol_invoke_signed_c(param_2,param_3,param_4,*(undefined8 *)(param_5 + -0x1000));
      iStack_8c = -0x4523f211;
    }
  }
  else {
    pppuStack_10 = (undefined ***)&uStack_81;
    puStack_50 = &DAT_ram_00031fb2;
    uStack_8 = 1;
    uStack_18 = 0x20;
    uStack_28 = 0x20;
    uStack_38 = 0x20;
    uStack_48 = 6;
    ppuStack_60 = &puStack_50;
    uStack_58 = 5;
    piVar3 = &iStack_90;
    ppuStack_80 = param_2;
    uStack_78 = param_3;
    uStack_70 = param_4;
    fn_2bcf8__sol_invoke_signed_c(piVar3,&ppuStack_80,&ppuStack_60,1);
    if (iStack_90 == 0x1a) {
      iStack_90 = 0x1a;
      iStack_8c = (int)piVar3;
    }
  }
  param_1[1] = iStack_8c;
  *param_1 = iStack_90;
  return;
}
