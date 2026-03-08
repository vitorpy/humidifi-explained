/* Function: fn_2bcf8__sol_invoke_signed_c
 * Address:  0x2be18
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2bcf8__sol_invoke_signed_c @ 0x2be18 ---- */

void fn_2bcf8__sol_invoke_signed_c(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char *pcStack_110;
  undefined2 uStack_108;
  char *pcStack_100;
  undefined2 uStack_f8;
  byte *pbStack_f0;
  undefined2 uStack_e8;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
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
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  pcStack_c8 = *(char **)*param_2;
  pcStack_90 = *(char **)param_2[1];
  pbStack_58 = *(byte **)param_2[2];
  pbStack_f0 = pbStack_58 + 8;
  pcStack_100 = pcStack_90 + 8;
  pcStack_110 = pcStack_c8 + 8;
  uStack_e8 = 0x100;
  uStack_f8 = 1;
  uStack_108 = 1;
  uStack_d9 = 3;
  uStack_d8 = param_2[3];
  if (*pcStack_c8 == -1) {
    uStack_a0 = pcStack_c8[1] != '\0';
    uStack_9f = pcStack_c8[2] != '\0';
    uStack_9e = pcStack_c8[3] != '\0';
    uStack_c0 = *(undefined8 *)(pcStack_c8 + 0x50);
    pcStack_b0 = pcStack_c8 + 0x28;
    pcStack_b8 = pcStack_c8 + 0x58;
    pcStack_c8 = pcStack_c8 + 0x48;
    uStack_a8 = 0;
    if (*pcStack_90 == -1) {
      uStack_68 = 1;
      if (pcStack_90[1] == '\0') {
        uStack_68 = 0;
        if (pcStack_90[2] == '\0') goto LAB_ram_0002c2a0;
LAB_ram_0002c028:
        uVar4 = 1;
        uStack_67 = 1;
        cVar1 = pcStack_90[3];
      }
      else {
        if (pcStack_90[2] != '\0') goto LAB_ram_0002c028;
LAB_ram_0002c2a0:
        uVar4 = 0;
        uStack_67 = 0;
        cVar1 = pcStack_90[3];
      }
      if (cVar1 == '\0') {
        uStack_67 = uVar4;
      }
      uStack_66 = cVar1 != '\0';
      uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
      pcStack_78 = pcStack_90 + 0x28;
      pcStack_80 = pcStack_90 + 0x58;
      pcStack_90 = pcStack_90 + 0x48;
      uStack_70 = 0;
      if ((*pbStack_58 & 0x88) == 0x88) {
        uStack_30 = 1;
        if (pbStack_58[1] == 0) {
          uStack_30 = 0;
          if (pbStack_58[2] == 0) goto LAB_ram_0002c2e0;
LAB_ram_0002c120:
          uVar4 = 1;
          uStack_2f = 1;
          bVar2 = pbStack_58[3];
        }
        else {
          if (pbStack_58[2] != 0) goto LAB_ram_0002c120;
LAB_ram_0002c2e0:
          uVar4 = 0;
          uStack_2f = 0;
          bVar2 = pbStack_58[3];
        }
        if (bVar2 == 0) {
          uStack_2f = uVar4;
        }
        uStack_2e = bVar2 != 0;
        uStack_50 = *(undefined8 *)(pbStack_58 + 0x50);
        pbStack_40 = pbStack_58 + 0x28;
        pbStack_48 = pbStack_58 + 0x58;
        pbStack_58 = pbStack_58 + 0x48;
        uStack_38 = 0;
        puStack_10 = &uStack_d9;
        ppcStack_20 = &pcStack_110;
        puStack_28 = &DAT_ram_00031980;
        uStack_8 = 9;
        uStack_18 = 3;
        pcStack_d0 = pcStack_110;
        pcStack_98 = pcStack_100;
        pbStack_60 = pbStack_f0;
        fn_2c120(&puStack_28,&pcStack_d0,3,param_3,param_4);
        uVar3 = 0x1a;
        goto LAB_ram_0002c268;
      }
    }
  }
  uVar3 = 0xb;
LAB_ram_0002c268:
  *param_1 = uVar3;
  return;
}
