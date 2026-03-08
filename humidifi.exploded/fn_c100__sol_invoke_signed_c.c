/* Function: fn_c100__sol_invoke_signed_c
 * Address:  0xc220
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_c100__sol_invoke_signed_c @ 0xc220 ---- */

/* WARNING: Type propagation algorithm not settling */

undefined8
fn_c100__sol_invoke_signed_c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                longlong param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 uStack_152;
  undefined8 uStack_151;
  byte bStack_149;
  char *pcStack_148;
  undefined2 uStack_140;
  byte *pbStack_138;
  undefined2 uStack_130;
  char *pcStack_128;
  undefined2 uStack_120;
  byte *pbStack_118;
  undefined2 uStack_110;
  char *pcStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  byte *pbStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
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
  
  pbStack_c8 = (byte *)*param_4;
  uStack_c0 = *(ulonglong *)(pbStack_c8 + 0x50);
  if (uStack_c0 < 0x2c) {
    return 0;
  }
  if (uStack_c0 == 0x2c) {
                    /* WARNING: Subroutine does not return */
    fn_2df20__custom_panic(0x2c,0x2c,&DAT_ram_00032628);
  }
  uStack_151 = *(undefined8 *)(param_5 + -0x1000);
  bStack_149 = pbStack_c8[0x84];
  uStack_152 = 0xc;
  pcStack_100 = (char *)*param_1;
  pcStack_90 = (char *)*param_2;
  pbVar6 = (byte *)*param_3;
  pbStack_138 = pbStack_c8 + 8;
  pbStack_118 = pbVar6 + 8;
  pcStack_128 = pcStack_90 + 8;
  pcStack_148 = pcStack_100 + 8;
  uStack_110 = 0x100;
  uStack_120 = 1;
  uStack_130 = 0;
  uStack_140 = 1;
  pcStack_108 = pcStack_148;
  pbStack_d0 = pbStack_138;
  pcStack_98 = pcStack_128;
  pbStack_60 = pbStack_118;
  if (*(longlong *)(param_5 + -0xff8) != 0) {
    if (*pcStack_100 != -1) {
      return 0xb;
    }
    if (pcStack_100[1] == '\0') {
      cVar1 = pcStack_100[2];
    }
    else {
      cVar1 = pcStack_100[2];
    }
    uStack_d8 = pcStack_100[1] != '\0';
    if (cVar1 == '\0') {
      cVar2 = pcStack_100[3];
    }
    else {
      cVar2 = pcStack_100[3];
    }
    uStack_d6 = cVar2 != '\0';
    uStack_d7 = cVar1 != '\0';
    uStack_f8 = *(undefined8 *)(pcStack_100 + 0x50);
    pcStack_e8 = pcStack_100 + 0x28;
    pcStack_f0 = pcStack_100 + 0x58;
    pcStack_100 = pcStack_100 + 0x48;
    uStack_e0 = 0;
    if ((*pbStack_c8 & 0x88) == 0x88) {
      if (pbStack_c8[1] == 0) {
        bVar3 = pbStack_c8[2];
      }
      else {
        bVar3 = pbStack_c8[2];
      }
      uStack_a0 = pbStack_c8[1] != 0;
      uStack_9f = bVar3 != 0;
      if ((bool)uStack_9f) {
        bVar3 = pbStack_c8[3];
      }
      else {
        bVar3 = pbStack_c8[3];
      }
      uStack_9e = bVar3 != 0;
      pbStack_b0 = pbStack_c8 + 0x28;
      pbStack_b8 = pbStack_c8 + 0x58;
      pbStack_c8 = pbStack_c8 + 0x48;
      uStack_a8 = 0;
      if (*pcStack_90 == -1) {
        if (pcStack_90[1] == '\0') {
          cVar1 = pcStack_90[2];
        }
        else {
          cVar1 = pcStack_90[2];
        }
        uStack_68 = pcStack_90[1] != '\0';
        if (cVar1 == '\0') {
          cVar2 = pcStack_90[3];
        }
        else {
          cVar2 = pcStack_90[3];
        }
        uStack_66 = cVar2 != '\0';
        uStack_67 = cVar1 != '\0';
        uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
        pcStack_78 = pcStack_90 + 0x28;
        pcStack_80 = pcStack_90 + 0x58;
        pcStack_90 = pcStack_90 + 0x48;
        uStack_70 = 0;
        if ((*pbVar6 & 0x88) == 0x88) {
          if (pbVar6[1] == 0) {
            bVar3 = pbVar6[2];
          }
          else {
            bVar3 = pbVar6[2];
          }
          uStack_30 = pbVar6[1] != 0;
          if (bVar3 == 0) {
            bVar4 = pbVar6[3];
          }
          else {
            bVar4 = pbVar6[3];
          }
          uStack_2e = bVar4 != 0;
          uStack_2f = bVar3 != 0;
          uStack_50 = *(undefined8 *)(pbVar6 + 0x50);
          pbStack_40 = pbVar6 + 0x28;
          pbStack_48 = pbVar6 + 0x58;
          pbStack_58 = pbVar6 + 0x48;
          uStack_38 = 0;
          puStack_10 = &uStack_152;
          ppcStack_20 = &pcStack_148;
          puStack_28 = &DAT_ram_00031a00;
          uStack_8 = 10;
          uStack_18 = 4;
          uVar5 = fn_caa8(&puStack_28,&pcStack_108,4,*(undefined8 *)(param_5 + -0xff0),
                                   *(undefined8 *)(param_5 + -0xfe8));
          return uVar5;
        }
        return 0xb;
      }
      return 0xb;
    }
    return 0xb;
  }
  if (*pcStack_100 != -1) {
    return 0xb;
  }
  uStack_d8 = pcStack_100[1] != '\0';
  uStack_d7 = pcStack_100[2] != '\0';
  uStack_d6 = pcStack_100[3] != '\0';
  uStack_f8 = *(undefined8 *)(pcStack_100 + 0x50);
  pcStack_e8 = pcStack_100 + 0x28;
  pcStack_f0 = pcStack_100 + 0x58;
  pcStack_100 = pcStack_100 + 0x48;
  uStack_e0 = 0;
  if ((*pbStack_c8 & 0x88) != 0x88) {
    return 0xb;
  }
  if (pbStack_c8[1] == 0) {
    bVar3 = pbStack_c8[2];
  }
  else {
    bVar3 = pbStack_c8[2];
  }
  uStack_a0 = pbStack_c8[1] != 0;
  uStack_9f = bVar3 != 0;
  if ((bool)uStack_9f) {
    bVar3 = pbStack_c8[3];
  }
  else {
    bVar3 = pbStack_c8[3];
  }
  uStack_9e = bVar3 != 0;
  pbStack_b0 = pbStack_c8 + 0x28;
  pbStack_b8 = pbStack_c8 + 0x58;
  pbStack_c8 = pbStack_c8 + 0x48;
  uStack_a8 = 0;
  if (*pcStack_90 != -1) {
    return 0xb;
  }
  if (pcStack_90[1] == '\0') {
    cVar1 = pcStack_90[2];
  }
  else {
    cVar1 = pcStack_90[2];
  }
  uStack_68 = pcStack_90[1] != '\0';
  if (cVar1 == '\0') {
    cVar2 = pcStack_90[3];
  }
  else {
    cVar2 = pcStack_90[3];
  }
  uStack_66 = cVar2 != '\0';
  uStack_67 = cVar1 != '\0';
  uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
  pcStack_78 = pcStack_90 + 0x28;
  pcStack_80 = pcStack_90 + 0x58;
  pcStack_90 = pcStack_90 + 0x48;
  uStack_70 = 0;
  if ((*pbVar6 & 0x88) == 0x88) {
    uStack_50 = *(undefined8 *)(pbVar6 + 0x50);
    pbStack_40 = pbVar6 + 0x28;
    pbStack_48 = pbVar6 + 0x58;
    pbStack_58 = pbVar6 + 0x48;
    uStack_2e = pbVar6[3] != 0;
    uStack_2f = pbVar6[2] != 0;
    uStack_30 = pbVar6[1] != 0;
    uStack_38 = 0;
    puStack_10 = &uStack_152;
    ppcStack_20 = &pcStack_148;
    puStack_28 = &DAT_ram_00031a00;
    uStack_8 = 10;
    uStack_18 = 4;
    fn_caa8(&puStack_28,&pcStack_108,4,8,0);
    return 0x1a;
  }
  return 0xb;
}
