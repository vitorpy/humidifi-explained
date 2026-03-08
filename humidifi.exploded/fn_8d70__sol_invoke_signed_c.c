/* Function: fn_8d70__sol_invoke_signed_c
 * Address:  0x8e90
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_8d70__sol_invoke_signed_c @ 0x8e90 ---- */

void fn_8d70__sol_invoke_signed_c(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,
                     undefined8 *param_4,longlong param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined1 uStack_181;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  byte **ppbStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined6 uStack_126;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined7 uStack_116;
  undefined8 uStack_108;
  undefined2 uStack_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  undefined8 uStack_dc;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  byte *pbStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
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
  undefined8 *puStack_20;
  undefined8 uStack_18;
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  uStack_181 = (undefined1)*(undefined8 *)(param_5 + -0xff8);
  pbVar4 = (byte *)*param_4;
  pbVar7 = (byte *)**(undefined8 **)(param_5 + -0x1000);
  puStack_150 = &uStack_181;
  puStack_170 = &DAT_ram_00031a00;
  pbVar11 = pbVar7 + 8;
  pbVar9 = pbVar4 + 8;
  uStack_148 = 1;
  uStack_158 = 0x20;
  uStack_168 = 0x20;
  uStack_178 = 0x20;
  ppbStack_140 = &pbStack_180;
  uStack_138 = 4;
  pcStack_c8 = (char *)*param_2;
  pcVar10 = (char *)*param_3;
  pcVar8 = pcVar10 + 8;
  uStack_120 = SUB81(pcVar8,0);
  uStack_11f = (undefined7)((ulonglong)pcVar8 >> 8);
  pcStack_d0 = pcStack_c8 + 8;
  uStack_130 = SUB81(pcStack_d0,0);
  uStack_12f = (undefined7)((ulonglong)pcStack_d0 >> 8);
  uStack_118 = 1;
  uStack_117 = 1;
  uStack_128 = 1;
  uStack_127 = 1;
  uStack_f8._4_4_ = 0xe1f6dd06;
  uStack_f0 = 0x75ee;
  uStack_ee = 0xde8f;
  uStack_ec = 0xbc5d4218;
  uStack_e8._0_4_ = 0xdacd6ce4;
  uStack_e8._4_4_ = 0x4dfc1ab6;
  uStack_e0 = 0xb983;
  uStack_de = 0x270d;
  uStack_dc = 0xfc8ba1d828f9bdfe;
  uStack_fc = 200;
  uStack_f8._0_4_ = 0;
  uStack_108._4_4_ = 0x22d580;
  uStack_100 = 0;
  uStack_fe = 0;
  uStack_108._0_4_ = 0;
  if (*pcStack_c8 == -1) {
    uStack_a0 = 1;
    if (pcStack_c8[1] == '\0') {
      uStack_a0 = 0;
      if (pcStack_c8[2] != '\0') goto LAB_ram_00009090;
LAB_ram_00009178:
      uVar3 = 0;
      uStack_9f = 0;
      cVar1 = pcStack_c8[3];
    }
    else {
      if (pcStack_c8[2] == '\0') goto LAB_ram_00009178;
LAB_ram_00009090:
      uVar3 = 1;
      uStack_9f = 1;
      cVar1 = pcStack_c8[3];
    }
    if (cVar1 == '\0') {
      uStack_9f = uVar3;
    }
    uStack_9e = cVar1 != '\0';
    uStack_c0 = *(undefined8 *)(pcStack_c8 + 0x50);
    pcStack_b0 = pcStack_c8 + 0x28;
    pcStack_b8 = pcStack_c8 + 0x58;
    pcStack_c8 = pcStack_c8 + 0x48;
    uStack_a8 = 0;
    if (*pcVar10 == -1) {
      uStack_68 = 1;
      if (pcVar10[1] == '\0') {
        uStack_68 = 0;
        if (pcVar10[2] != '\0') goto LAB_ram_000091d8;
LAB_ram_00009738:
        uVar3 = 0;
        uStack_67 = 0;
        cVar1 = pcVar10[3];
      }
      else {
        if (pcVar10[2] == '\0') goto LAB_ram_00009738;
LAB_ram_000091d8:
        uVar3 = 1;
        uStack_67 = 1;
        cVar1 = pcVar10[3];
      }
      if (cVar1 == '\0') {
        uStack_67 = uVar3;
      }
      uStack_66 = cVar1 != '\0';
      uStack_88 = *(undefined8 *)(pcVar10 + 0x50);
      uStack_70 = 0;
      puStack_10 = &uStack_108;
      puStack_20 = (undefined8 *)&uStack_130;
      puStack_28 = &DAT_ram_000319a0;
      uStack_8 = 0x34;
      uStack_18 = 2;
      pbStack_180 = pbVar9;
      pbStack_160 = pbVar11;
      pbStack_98 = (byte *)pcVar8;
      pbStack_90 = (byte *)(pcVar10 + 0x48);
      pbStack_80 = (byte *)(pcVar10 + 0x58);
      pbStack_78 = (byte *)(pcVar10 + 0x28);
      fn_9208(&puStack_28,&pcStack_d0,2,&ppbStack_140,1);
      uStack_130 = 0x12;
      uStack_12f = (undefined7)*(undefined8 *)pbVar9;
      uStack_128 = (undefined1)((ulonglong)*(undefined8 *)pbVar9 >> 0x38);
      uVar5 = *(undefined8 *)(pbVar4 + 0x10);
      uStack_127 = (undefined1)uVar5;
      uStack_126 = (undefined6)((ulonglong)uVar5 >> 8);
      uStack_120 = (undefined1)((ulonglong)uVar5 >> 0x38);
      uStack_11f = (undefined7)*(undefined8 *)(pbVar4 + 0x18);
      uStack_118 = (undefined1)((ulonglong)*(undefined8 *)(pbVar4 + 0x18) >> 0x38);
      uStack_117 = (undefined1)*(undefined8 *)(pbVar4 + 0x20);
      uStack_116 = (undefined7)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 8);
      uStack_e0 = 0;
      uStack_f0 = 0;
      uStack_100 = 1;
      if (*pcVar10 == -1) {
        uStack_a0 = 1;
        if (pcVar10[1] == '\0') {
          uStack_a0 = 0;
          if (pcVar10[2] != '\0') goto LAB_ram_00009408;
LAB_ram_00009788:
          uVar3 = 0;
          uStack_9f = 0;
          cVar1 = pcVar10[3];
        }
        else {
          if (pcVar10[2] == '\0') goto LAB_ram_00009788;
LAB_ram_00009408:
          uVar3 = 1;
          uStack_9f = 1;
          cVar1 = pcVar10[3];
        }
        if (cVar1 == '\0') {
          uStack_9f = uVar3;
        }
        uStack_9e = cVar1 != '\0';
        uStack_c0 = *(undefined8 *)(pcVar10 + 0x50);
        uStack_a8 = 0;
        if ((*pbVar7 & 0x88) == 0x88) {
          uStack_68 = 1;
          if (pbVar7[1] == 0) {
            uStack_68 = 0;
            if (pbVar7[2] != 0) goto LAB_ram_000094f8;
LAB_ram_000097c8:
            uVar3 = 0;
            uStack_67 = 0;
            bVar2 = pbVar7[3];
          }
          else {
            if (pbVar7[2] == 0) goto LAB_ram_000097c8;
LAB_ram_000094f8:
            uVar3 = 1;
            uStack_67 = 1;
            bVar2 = pbVar7[3];
          }
          if (bVar2 == 0) {
            uStack_67 = uVar3;
          }
          uStack_66 = bVar2 != 0;
          uStack_88 = *(undefined8 *)(pbVar7 + 0x50);
          pbStack_78 = pbVar7 + 0x28;
          pbStack_80 = pbVar7 + 0x58;
          pbStack_90 = pbVar7 + 0x48;
          uStack_70 = 0;
          if ((*pbVar4 & 0x88) == 0x88) {
            uStack_50 = *(undefined8 *)(pbVar4 + 0x50);
            pbStack_40 = pbVar4 + 0x28;
            pbStack_48 = pbVar4 + 0x58;
            pbStack_58 = pbVar4 + 0x48;
            if (pbVar4[3] == 0) {
              uStack_2e = 0;
              if (pbVar4[2] != 0) goto LAB_ram_00009650;
LAB_ram_00009800:
              uStack_2f = 0;
            }
            else {
              uStack_2e = 1;
              if (pbVar4[2] == 0) goto LAB_ram_00009800;
LAB_ram_00009650:
              uStack_2f = 1;
            }
            uStack_30 = pbVar4[1] != 0;
            uStack_38 = 0;
            puStack_10 = (undefined8 *)&uStack_130;
            puStack_20 = &uStack_108;
            puStack_28 = &DAT_ram_00031a00;
            uStack_8 = 0x21;
            uStack_18 = 3;
            pcStack_d0 = pcVar8;
            pcStack_c8 = pcVar10 + 0x48;
            pcStack_b8 = pcVar10 + 0x58;
            pcStack_b0 = pcVar10 + 0x28;
            pbStack_98 = pbVar11;
            pbStack_60 = pbVar9;
            uStack_e8 = pbVar9;
            uStack_f8 = pbVar11;
            uStack_108 = pcVar8;
            fn_95e8(&puStack_28,&pcStack_d0,3,8,0);
            uVar6 = 0x1a;
            goto LAB_ram_00009150;
          }
        }
      }
      uVar6 = 0xb;
      goto LAB_ram_00009150;
    }
  }
  uVar6 = 0xb;
LAB_ram_00009150:
  *param_1 = uVar6;
  return;
}
