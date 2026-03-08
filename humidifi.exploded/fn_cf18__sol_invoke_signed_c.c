/* Function: fn_cf18__sol_invoke_signed_c
 * Address:  0xd038
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_cf18__sol_invoke_signed_c @ 0xd038 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_cf18__sol_invoke_signed_c(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                     longlong param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 **ppuVar6;
  byte ****ppppbVar7;
  byte *pbVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iStack_178;
  int iStack_174;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined8 uStack_168;
  byte ****ppppbStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined2 uStack_148;
  byte *pbStack_140;
  undefined2 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 uStack_d8;
  byte ****ppppbStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  ulonglong uStack_88;
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
  byte *****pppppbStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  uStack_16a = (undefined1)*(undefined8 *)(param_5 + -0xfe8);
  pbVar5 = (byte *)*param_2;
  pbStack_b0 = pbVar5 + 0x28;
  if ((((*(longlong *)(pbVar5 + 0x28) != -0x6c5e9a281e0922fa) ||
       (*(longlong *)(pbVar5 + 0x30) != -0x53861431b91e3427)) ||
      (*(longlong *)(pbVar5 + 0x38) != -0x6ec8a4a0127a4be4)) ||
     (bVar3 = false, *(longlong *)(pbVar5 + 0x40) != -0x56ff00817a0a73c6)) {
    bVar3 = true;
  }
  uStack_168 = *(undefined8 *)(param_5 + -0xfe0);
  uStack_100 = *(undefined8 *)(param_5 + -0xff0);
  uStack_110 = *(undefined8 *)(param_5 + -0xff8);
  uStack_c0 = *(undefined8 *)(param_5 + -0x1000);
  if (bVar3) {
    if (((*(longlong *)pbStack_b0 != -0x21708a111e0922fa) ||
        (*(longlong *)(pbVar5 + 0x30) != -0x2532931b43a2bde8)) ||
       ((*(longlong *)(pbVar5 + 0x38) != 0x270db9834dfc1ab6 ||
        (bVar3 = false, *(longlong *)(pbVar5 + 0x40) != -0x3745e27d7064202)))) {
      bVar3 = true;
    }
    if (bVar3) {
      iStack_178 = 0;
      iStack_174 = -0x4523f21d;
      goto LAB_ram_0000d778;
    }
    uStack_169 = 3;
    pcStack_90 = (char *)*param_3;
    pbVar8 = (byte *)*param_4;
    ppppbStack_160 = (byte ****)(pbVar5 + 8);
    pbStack_140 = pbVar8 + 8;
    pcStack_150 = pcStack_90 + 8;
    uStack_138 = 0x100;
    uStack_148 = 1;
    uStack_158 = CONCAT62(uStack_158._2_6_,1);
    puStack_f0 = &uStack_16a;
    puStack_130 = (undefined8 *)&DAT_ram_00031fb2;
    uStack_e8 = 1;
    uStack_f8 = 0x20;
    uStack_108 = 0x20;
    uStack_118 = 0x20;
    puStack_128 = (undefined8 *)0x6;
    ppuStack_e0 = &puStack_130;
    uStack_d8 = 5;
    uStack_88 = (ulonglong)*pbVar5;
    if ((ulonglong)*pbVar5 == 0xff) {
      uVar9 = 1;
      if (pbVar5[1] == 0) {
        uVar9 = 0;
        if (pbVar5[2] == 0) goto LAB_ram_0000d7b8;
LAB_ram_0000d470:
        uVar11 = 1;
        uVar10 = 1;
        bVar1 = pbVar5[3];
      }
      else {
        if (pbVar5[2] != 0) goto LAB_ram_0000d470;
LAB_ram_0000d7b8:
        uVar11 = 0;
        uVar10 = 0;
        bVar1 = pbVar5[3];
      }
      if (bVar1 == 0) {
        uVar10 = uVar11;
      }
      pbStack_b8 = pbVar5 + 0x58;
      pbStack_c8 = pbVar5 + 0x48;
      uStack_a0 = CONCAT71(CONCAT61(CONCAT51(uStack_a0._3_5_,bVar1 != 0),uVar10),uVar9);
      uStack_a8 = 0;
      uStack_88 = *(ulonglong *)(pbVar5 + 0x50);
      if (*pcStack_90 == -1) {
        uStack_68 = 1;
        if (pcStack_90[1] == '\0') {
          uStack_68 = 0;
          if (pcStack_90[2] == '\0') goto LAB_ram_0000d7f8;
LAB_ram_0000d538:
          uVar9 = 1;
          uStack_67 = 1;
          cVar2 = pcStack_90[3];
        }
        else {
          if (pcStack_90[2] != '\0') goto LAB_ram_0000d538;
LAB_ram_0000d7f8:
          uVar9 = 0;
          uStack_67 = 0;
          cVar2 = pcStack_90[3];
        }
        if (cVar2 == '\0') {
          uStack_67 = uVar9;
        }
        uStack_66 = cVar2 != '\0';
        uStack_88 = *(ulonglong *)(pcStack_90 + 0x50);
        pcStack_78 = pcStack_90 + 0x28;
        pcStack_80 = pcStack_90 + 0x58;
        pcStack_90 = pcStack_90 + 0x48;
        uStack_70 = 0;
        if ((*pbVar8 & 0x88) == 0x88) {
          uStack_50 = *(undefined8 *)(pbVar8 + 0x50);
          pbStack_40 = pbVar8 + 0x28;
          pbStack_48 = pbVar8 + 0x58;
          pbStack_58 = pbVar8 + 0x48;
          if (pbVar8[3] == 0) {
            uStack_2e = 0;
            if (pbVar8[2] == 0) goto LAB_ram_0000d838;
LAB_ram_0000d688:
            uStack_2f = 1;
          }
          else {
            uStack_2e = 1;
            if (pbVar8[2] != 0) goto LAB_ram_0000d688;
LAB_ram_0000d838:
            uStack_2f = 0;
          }
          uStack_30 = pbVar8[1] != 0;
          uStack_38 = 0;
          puStack_10 = &uStack_169;
          pppppbStack_20 = &ppppbStack_160;
          puStack_28 = &DAT_ram_00031a00;
          uStack_8 = 9;
          uStack_18 = 3;
          ppppbVar7 = (byte ****)&ppppbStack_d0;
          puStack_120 = (undefined8 *)uStack_c0;
          ppppbStack_d0 = ppppbStack_160;
          uStack_c0 = *(ulonglong *)(pbVar5 + 0x50);
          pcStack_98 = pcStack_150;
          pbStack_60 = pbStack_140;
          fn_d630(&puStack_28,ppppbVar7,3,&ppuStack_e0,1);
          iVar4 = (int)ppppbVar7;
          goto LAB_ram_0000d2f8;
        }
      }
    }
    iStack_174 = (int)uStack_88;
    iStack_178 = 0xb;
  }
  else {
    pcStack_90 = &uStack_16a;
    ppppbStack_d0 = (byte ****)&DAT_ram_00031fb2;
    uStack_88 = 1;
    pcStack_98 = (char *)0x20;
    uStack_a8 = 0x20;
    pbStack_b8 = (byte *)0x20;
    pbStack_c8 = (byte *)0x6;
    ppppbStack_160 = (byte ****)&ppppbStack_d0;
    uStack_158 = 5;
    ppuVar6 = &puStack_130;
    puStack_130 = param_2;
    puStack_128 = param_3;
    puStack_120 = param_4;
    uStack_118 = uStack_168;
    pbStack_b0 = (byte *)uStack_110;
    uStack_a0 = uStack_100;
    fn_2bcf8__sol_invoke_signed_c(&iStack_178,ppuVar6,&ppppbStack_160,1);
    iVar4 = (int)ppuVar6;
    if (iStack_178 != 0x1a) goto LAB_ram_0000d778;
LAB_ram_0000d2f8:
    iStack_174 = iVar4;
    iStack_178 = 0x1a;
  }
LAB_ram_0000d778:
  param_1[1] = iStack_174;
  *param_1 = iStack_178;
  return;
}
