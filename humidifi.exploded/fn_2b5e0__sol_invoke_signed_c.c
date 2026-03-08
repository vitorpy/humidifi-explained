/* Function: fn_2b5e0__sol_invoke_signed_c
 * Address:  0x2b700
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_2b5e0__sol_invoke_signed_c @ 0x2b700 ---- */

/* WARNING: Removing unreachable block (ram,0x0002ba20) */

void fn_2b5e0__sol_invoke_signed_c(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plStack_e0;
  undefined2 uStack_d8;
  longlong *plStack_d0;
  undefined2 uStack_c8;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
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
  longlong **pplStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  lVar5 = *(longlong *)param_2[1];
  plStack_d0 = (longlong *)(lVar5 + 8);
  lVar7 = *(longlong *)*param_2;
  plStack_e0 = (longlong *)(lVar7 + 8);
  uStack_c8 = 0;
  uStack_d8 = 1;
  uStack_b9 = 0x12;
  puVar4 = (undefined1 *)param_2[2];
  uStack_b8 = *puVar4;
  uStack_b7 = puVar4[1];
  uStack_b6 = puVar4[2];
  uStack_b5 = puVar4[3];
  uStack_b4 = puVar4[4];
  uStack_b3 = puVar4[5];
  uStack_b2 = puVar4[6];
  uStack_b1 = puVar4[7];
  uStack_b0 = puVar4[8];
  uStack_af = puVar4[9];
  uStack_ae = puVar4[10];
  uStack_ad = puVar4[0xb];
  uStack_ac = puVar4[0xc];
  uStack_ab = puVar4[0xd];
  uStack_aa = puVar4[0xe];
  uStack_a9 = puVar4[0xf];
  uStack_a8 = puVar4[0x10];
  uStack_a7 = puVar4[0x11];
  uStack_a6 = puVar4[0x12];
  uStack_a5 = puVar4[0x13];
  uStack_a4 = puVar4[0x14];
  uStack_a3 = puVar4[0x15];
  uStack_a2 = puVar4[0x16];
  uStack_a1 = puVar4[0x17];
  uStack_a0 = puVar4[0x18];
  uStack_9f = puVar4[0x19];
  uStack_9e = puVar4[0x1a];
  uStack_9d = puVar4[0x1b];
  uStack_9c = puVar4[0x1c];
  uStack_9b = puVar4[0x1d];
  uStack_9a = puVar4[0x1e];
  uStack_99 = puVar4[0x1f];
  pcStack_90 = *(char **)*param_2;
  pcStack_98 = pcStack_90 + 8;
  if ((((*(longlong *)(pcStack_90 + 8) != *plStack_e0) ||
       (*(longlong *)(pcStack_90 + 0x10) != *(longlong *)(lVar7 + 0x10))) ||
      (*(longlong *)(pcStack_90 + 0x18) != *(longlong *)(lVar7 + 0x18))) ||
     (bVar3 = false, *(longlong *)(pcStack_90 + 0x20) != *(longlong *)(lVar7 + 0x20))) {
    bVar3 = true;
  }
  uVar6 = 1;
  if ((bVar3) || (uVar6 = 0xb, *pcStack_90 != -1)) goto LAB_ram_0002bd80;
  uStack_68 = 1;
  if (pcStack_90[1] == '\0') {
    uStack_68 = 0;
    if (pcStack_90[2] != '\0') goto LAB_ram_0002ba90;
LAB_ram_0002bdb0:
    uVar8 = 0;
    uStack_67 = 0;
    cVar1 = pcStack_90[3];
  }
  else {
    if (pcStack_90[2] == '\0') goto LAB_ram_0002bdb0;
LAB_ram_0002ba90:
    uVar8 = 1;
    uStack_67 = 1;
    cVar1 = pcStack_90[3];
  }
  if (cVar1 == '\0') {
    uStack_67 = uVar8;
  }
  uStack_66 = cVar1 != '\0';
  uStack_88 = *(undefined8 *)(pcStack_90 + 0x50);
  pcStack_78 = pcStack_90 + 0x28;
  pcStack_80 = pcStack_90 + 0x58;
  pcStack_90 = pcStack_90 + 0x48;
  uStack_70 = 0;
  pbStack_58 = *(byte **)param_2[1];
  pbStack_60 = pbStack_58 + 8;
  if (((*(longlong *)(pbStack_58 + 8) != *plStack_d0) ||
      (*(longlong *)(pbStack_58 + 0x10) != *(longlong *)(lVar5 + 0x10))) ||
     ((*(longlong *)(pbStack_58 + 0x18) != *(longlong *)(lVar5 + 0x18) ||
      (bVar3 = false, *(longlong *)(pbStack_58 + 0x20) != *(longlong *)(lVar5 + 0x20))))) {
    bVar3 = true;
  }
  uVar6 = 1;
  if ((bVar3) || (uVar6 = 0xb, (*pbStack_58 | 0x77) != 0xff)) goto LAB_ram_0002bd80;
  uStack_30 = 1;
  if (pbStack_58[1] == 0) {
    uStack_30 = 0;
    if (pbStack_58[2] != 0) goto LAB_ram_0002bc50;
LAB_ram_0002bdf0:
    uVar8 = 0;
    uStack_2f = 0;
    bVar2 = pbStack_58[3];
  }
  else {
    if (pbStack_58[2] == 0) goto LAB_ram_0002bdf0;
LAB_ram_0002bc50:
    uVar8 = 1;
    uStack_2f = 1;
    bVar2 = pbStack_58[3];
  }
  if (bVar2 == 0) {
    uStack_2f = uVar8;
  }
  uStack_2e = bVar2 != 0;
  uStack_50 = *(undefined8 *)(pbStack_58 + 0x50);
  pbStack_40 = pbStack_58 + 0x28;
  pbStack_48 = pbStack_58 + 0x58;
  pbStack_58 = pbStack_58 + 0x48;
  uStack_38 = 0;
  puStack_10 = &uStack_b9;
  pplStack_20 = &plStack_e0;
  puStack_28 = &DAT_ram_00031980;
  uStack_8 = 0x21;
  uStack_18 = 2;
  fn_2bc48(&puStack_28,&pcStack_98,2,param_3,param_4);
  uVar6 = 0x1a;
LAB_ram_0002bd80:
  *param_1 = uVar6;
  return;
}
