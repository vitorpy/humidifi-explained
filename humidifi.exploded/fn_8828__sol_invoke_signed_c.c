/* Function: fn_8828__sol_invoke_signed_c
 * Address:  0x8948
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_8828__sol_invoke_signed_c @ 0x8948 ---- */

void fn_8828__sol_invoke_signed_c(int *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                     longlong param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong *plVar8;
  int iStack_150;
  int iStack_14c;
  undefined1 uStack_141;
  longlong alStack_140 [2];
  undefined *puStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  undefined2 uStack_e8;
  byte *pbStack_e0;
  undefined2 uStack_d8;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  char **ppcStack_20;
  undefined8 uStack_18;
  undefined4 *puStack_10;
  undefined8 uStack_8;
  
  uStack_141 = (undefined1)*(undefined8 *)(param_5 + -0xff8);
  lVar6 = *param_4;
  plVar8 = *(longlong **)(param_5 + -0x1000);
  puStack_110 = &uStack_141;
  puStack_130 = &DAT_ram_00031980;
  lStack_120 = *plVar8 + 8;
  uStack_108 = 1;
  uStack_118 = 0x20;
  uStack_128 = 0x20;
  alStack_140[1] = 0x20;
  plStack_100 = alStack_140;
  uStack_f8 = 4;
  pcVar2 = (char *)*param_2;
  pbVar5 = *(byte **)param_3;
  pbStack_e0 = pbVar5 + 8;
  pcStack_f0 = pcVar2 + 8;
  uStack_d8 = 0x101;
  uStack_e8 = 0x101;
  uStack_b8 = 0x93a165d7e1f6dd06;
  uStack_b0 = 0xac79ebce46e1cbd9;
  uStack_a8 = 0x91375b5fed85b41c;
  uStack_a0 = 0xa900ff7e85f58c3a;
  uStack_c0 = 0xa5;
  uStack_c8 = 0x1f1df0;
  uStack_cc = 0;
  pcVar4 = param_3;
  if (*pcVar2 == -1) {
    uStack_68 = 1;
    if (pcVar2[1] == '\0') {
      uStack_68 = 0;
      if (pcVar2[2] == '\0') goto LAB_ram_00008c18;
LAB_ram_00008b20:
      uVar7 = 1;
      uStack_67 = 1;
      cVar1 = pcVar2[3];
    }
    else {
      if (pcVar2[2] != '\0') goto LAB_ram_00008b20;
LAB_ram_00008c18:
      uVar7 = 0;
      uStack_67 = 0;
      cVar1 = pcVar2[3];
    }
    if (cVar1 == '\0') {
      uStack_67 = uVar7;
    }
    uStack_66 = cVar1 != '\0';
    lStack_88 = *(longlong *)(pcVar2 + 0x50);
    pcStack_78 = pcVar2 + 0x28;
    pcStack_80 = pcVar2 + 0x58;
    plStack_90 = (longlong *)(pcVar2 + 0x48);
    uStack_70 = 0;
    pcVar4 = (char *)(ulonglong)*pbVar5;
    if (pcVar4 == (char *)0xff) {
      uStack_50 = *(undefined8 *)(pbVar5 + 0x50);
      pbStack_40 = pbVar5 + 0x28;
      pbStack_48 = pbVar5 + 0x58;
      pbStack_58 = pbVar5 + 0x48;
      if (pbVar5[3] == 0) {
        uStack_2e = 0;
        if (pbVar5[2] == 0) goto LAB_ram_00008e48;
LAB_ram_00008cd8:
        uStack_2f = 1;
      }
      else {
        uStack_2e = 1;
        if (pbVar5[2] != 0) goto LAB_ram_00008cd8;
LAB_ram_00008e48:
        uStack_2f = 0;
      }
      uStack_30 = pbVar5[1] != 0;
      uStack_38 = 0;
      puStack_10 = &uStack_cc;
      ppcStack_20 = &pcStack_f0;
      puStack_28 = &DAT_ram_000319a0;
      uStack_8 = 0x34;
      uStack_18 = 2;
      alStack_140[0] = lVar6 + 8;
      pcStack_98 = pcStack_f0;
      pbStack_60 = pbStack_e0;
      fn_8c88(&puStack_28,&pcStack_98,2,&plStack_100,1);
      iVar3 = 8;
      pcStack_98 = param_3;
      plStack_90 = plVar8;
      lStack_88 = lVar6 + 8;
      fn_2b5e0__sol_invoke_signed_c(&iStack_150,&pcStack_98,8,0);
      if (iStack_150 == 0x1a) {
        iStack_150 = 0x1a;
        iStack_14c = iVar3;
      }
      goto LAB_ram_00008be0;
    }
  }
  iStack_150 = 0xb;
  iStack_14c = (int)pcVar4;
LAB_ram_00008be0:
  param_1[1] = iStack_14c;
  *param_1 = iStack_150;
  return;
}
