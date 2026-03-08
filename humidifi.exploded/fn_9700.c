/* Function: fn_9700
 * Address:  0x9820
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_9700 @ 0x9820 ---- */

void fn_9700(int *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
                     longlong param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  undefined8 *puVar14;
  char *pcVar15;
  longlong *plVar16;
  int iStack_1c8;
  uint uStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  undefined *puStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  char cStack_191;
  undefined *puStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  longlong lStack_178;
  longlong *plStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined8 uStack_158;
  char *pcStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  longlong lStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined **ppuStack_f0;
  undefined2 uStack_e8;
  char *pcStack_e0;
  undefined2 uStack_d8;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  char *pcStack_90;
  undefined8 *puStack_88;
  char *pcStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined *puStack_28;
  longlong **pplStack_20;
  undefined8 uStack_18;
  undefined4 *puStack_10;
  undefined8 uStack_8;
  
  iVar3 = 0;
  iVar13 = 0xbadc0de;
  if (param_3 != 8) goto LAB_ram_00009d90;
  iVar13 = -0x5452e216;
  pcVar11 = (char *)*param_2;
  if (pcVar11[1] == '\0') goto LAB_ram_00009d90;
  if ((((*(longlong *)(pcVar11 + 8) != -0x32b20de6c4775e40) ||
       (*(longlong *)(pcVar11 + 0x10) != -0x15200f0917dbfd5f)) ||
      (*(longlong *)(pcVar11 + 0x18) != -0x47ebde6f8ba50bd0)) ||
     (bVar2 = false, *(longlong *)(pcVar11 + 0x20) != 0x4164f987ea077494)) {
    bVar2 = true;
  }
  if (bVar2) goto LAB_ram_00009d90;
  if (param_5 != 0x200) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
  }
  if ((param_4 & 7) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
  }
  puVar14 = param_2 + 1;
  ppuStack_98 = (undefined **)&DAT_ram_00031fb2;
  plVar4 = (longlong *)(param_4 + 0x180);
  plVar16 = (longlong *)(param_4 + 0x1a0);
  puVar8 = (undefined8 *)(param_4 + 0x1c0);
  pcStack_60 = (char *)0x20;
  uStack_70 = 0x20;
  pcStack_80 = (char *)0x20;
  pcStack_90 = (char *)0x6;
  puStack_88 = puVar8;
  plStack_78 = plVar16;
  plStack_68 = plVar4;
  fn_2dd00__sol_try_find_program_address(&puStack_190,&ppuStack_98,4,&DAT_ram_00031900);
  lStack_1a0 = lStack_178;
  lStack_1a8 = (longlong)puStack_180;
  lStack_1b0 = lStack_188;
  puStack_1b8 = puStack_190;
  cStack_191 = (char)plStack_170;
  pcVar15 = (char *)*puVar14;
  pcStack_e0 = pcVar15 + 8;
  if (((puStack_190 != *(undefined **)(pcVar15 + 8)) ||
      (lStack_188 != *(longlong *)(pcVar15 + 0x10))) ||
     ((puStack_180 != (undefined8 *)*(longlong *)(pcVar15 + 0x18) ||
      (bVar2 = false, lStack_178 != *(longlong *)(pcVar15 + 0x20))))) {
    bVar2 = true;
  }
  if (bVar2) {
    iVar3 = 0;
    iVar13 = 0xbadface;
    goto LAB_ram_00009d90;
  }
  pcStack_150 = &cStack_191;
  puStack_190 = &DAT_ram_00031fb2;
  uStack_148 = 1;
  uStack_158 = 0x20;
  uStack_168 = 0x20;
  lStack_178 = 0x20;
  lStack_188 = 6;
  ppuStack_140 = &puStack_190;
  uStack_138 = 5;
  uStack_d8 = 0x101;
  uStack_e8 = 0x101;
  uStack_b8 = 0x2b74fd7a;
  uStack_b4 = 0xe959f727;
  uStack_b0 = 0x3c7070c6;
  uStack_ac = 0x7a819dd3;
  uStack_a8 = 0x6dd2523bce0a93a0;
  uStack_a0 = 0xd3bb8723dd54a054;
  uStack_c0 = 0x6c0;
  uStack_bc = 0;
  uStack_c8 = 0xc51c00;
  uStack_c4 = 0;
  uStack_cc = 0;
  pcStack_80 = pcVar15;
  if (*pcVar11 == -1) {
    uVar7 = 1;
    if (pcVar11[1] == '\0') {
      uVar7 = 0;
      if (pcVar11[2] == '\0') goto LAB_ram_00009dc8;
LAB_ram_00009cd0:
      uVar10 = 1;
      uVar9 = 1;
      cVar1 = pcVar11[3];
    }
    else {
      if (pcVar11[2] != '\0') goto LAB_ram_00009cd0;
LAB_ram_00009dc8:
      uVar10 = 0;
      uVar9 = 0;
      cVar1 = pcVar11[3];
    }
    if (cVar1 == '\0') {
      uVar9 = uVar10;
    }
    puStack_88 = *(undefined8 **)(pcVar11 + 0x50);
    plStack_78 = (longlong *)(pcVar11 + 0x28);
    pcStack_80 = pcVar11 + 0x58;
    pcStack_90 = pcVar11 + 0x48;
    plStack_68 = (longlong *)
                 CONCAT71(CONCAT61(CONCAT51(plStack_68._3_5_,cVar1 != '\0'),uVar9),uVar7);
    uStack_70 = 0;
    if (*pcVar15 == -1) {
      uStack_50 = *(undefined8 *)(pcVar15 + 0x50);
      pcStack_40 = pcVar15 + 0x28;
      pcStack_58 = pcVar15 + 0x48;
      uStack_2e = pcVar15[3] != '\0';
      uStack_2f = pcVar15[2] != '\0';
      uStack_30 = pcVar15[1] != '\0';
      pcVar12 = pcVar15 + 0x58;
      uStack_38 = 0;
      puStack_10 = &uStack_cc;
      pplStack_20 = (longlong **)&ppuStack_f0;
      puStack_28 = &DAT_ram_000319a0;
      uStack_8 = 0x34;
      uStack_18 = 2;
      puStack_180 = puVar8;
      plStack_170 = plVar16;
      plStack_160 = plVar4;
      ppuStack_f0 = (undefined **)(pcVar11 + 8);
      ppuStack_98 = (undefined **)(pcVar11 + 8);
      pcStack_60 = pcStack_e0;
      pcStack_48 = pcVar12;
      fn_9e60(&puStack_28,&ppuStack_98,2,&ppuStack_140,1);
      puStack_88 = (undefined8 *)&DAT_ram_00031980;
      uStack_70 = 0x20;
      pcStack_80 = (char *)0x20;
      pcStack_90 = (char *)0x20;
      puStack_10 = (undefined4 *)0xd3bb8723dd54a054;
      uStack_18 = 0x6dd2523bce0a93a0;
      pplStack_20 = (longlong **)0x7a819dd33c7070c6;
      puStack_28 = (undefined *)0xe959f7272b74fd7a;
      ppuStack_98 = &puStack_1b8;
      plStack_78 = plVar16;
      fn_2dd00__sol_try_find_program_address(&uStack_cc,&ppuStack_98,3,&puStack_28);
      lStack_118 = CONCAT44(uStack_b0,uStack_b4);
      lStack_120 = CONCAT44(uStack_b8,uStack_bc);
      lStack_128 = CONCAT44(uStack_c0,uStack_c4);
      lStack_130 = CONCAT44(uStack_c8,uStack_cc);
      puStack_88 = (undefined8 *)&DAT_ram_00031980;
      uStack_70 = 0x20;
      pcStack_80 = (char *)0x20;
      pcStack_90 = (char *)0x20;
      puStack_10 = (undefined4 *)0xd3bb8723dd54a054;
      uStack_18 = 0x6dd2523bce0a93a0;
      pplStack_20 = (longlong **)0x7a819dd33c7070c6;
      puStack_28 = (undefined *)0xe959f7272b74fd7a;
      ppuStack_98 = &puStack_1b8;
      plStack_78 = plVar4;
      fn_2dd00__sol_try_find_program_address(&uStack_cc,&ppuStack_98,3,&puStack_28);
      lStack_f8 = CONCAT44(uStack_b0,uStack_b4);
      lStack_100 = CONCAT44(uStack_b8,uStack_bc);
      lStack_108 = CONCAT44(uStack_c0,uStack_c4);
      lStack_110 = CONCAT44(uStack_c8,uStack_cc);
      lVar5 = param_2[4];
      if (((*plVar16 != *(longlong *)(lVar5 + 8)) ||
          (*(longlong *)(param_4 + 0x1a8) != *(longlong *)(lVar5 + 0x10))) ||
         ((*(longlong *)(param_4 + 0x1b0) != *(longlong *)(lVar5 + 0x18) ||
          (bVar2 = false, *(longlong *)(param_4 + 0x1b8) != *(longlong *)(lVar5 + 0x20))))) {
        bVar2 = true;
      }
      iVar3 = 0;
      iVar13 = -0x5452e216;
      if (!bVar2) {
        lVar5 = param_2[5];
        if ((((*plVar4 != *(longlong *)(lVar5 + 8)) ||
             (*(longlong *)(param_4 + 0x188) != *(longlong *)(lVar5 + 0x10))) ||
            (*(longlong *)(param_4 + 400) != *(longlong *)(lVar5 + 0x18))) ||
           (bVar2 = false, *(longlong *)(param_4 + 0x198) != *(longlong *)(lVar5 + 0x20))) {
          bVar2 = true;
        }
        if (!bVar2) {
          lVar5 = param_2[2];
          if (((lStack_130 != *(longlong *)(lVar5 + 8)) ||
              (lStack_128 != *(longlong *)(lVar5 + 0x10))) ||
             ((lStack_120 != *(longlong *)(lVar5 + 0x18) ||
              (bVar2 = false, lStack_118 != *(longlong *)(lVar5 + 0x20))))) {
            bVar2 = true;
          }
          iVar13 = -0x4520531d;
          if (!bVar2) {
            lVar5 = param_2[3];
            if (((lStack_110 != *(longlong *)(lVar5 + 8)) ||
                (lStack_108 != *(longlong *)(lVar5 + 0x10))) ||
               ((lStack_100 != *(longlong *)(lVar5 + 0x18) ||
                (bVar2 = false, lStack_f8 != *(longlong *)(lVar5 + 0x20))))) {
              bVar2 = true;
            }
            if (!bVar2) {
              fn_8828__sol_invoke_signed_c(&iStack_1c0,param_2,param_2 + 2,puVar14);
              if (iStack_1c0 == 0x1a) {
                fn_8828__sol_invoke_signed_c(&iStack_1c8,param_2,param_2 + 3,puVar14);
                if (iStack_1c8 == 0x1a) {
                  fn_16748__custom_panic(pcVar12,*(undefined8 *)(pcVar15 + 0x50));
                  fn_2fe08__sol_memcpy(pcVar12,param_4 + 0xf0,0x90);
                  fn_2fe08__sol_memcpy(pcVar15 + 0xe8,param_4,0xf0);
                  *(undefined8 *)(pcVar15 + 0x270) = *(undefined8 *)(param_4 + 0x1d8);
                  *(undefined8 *)(pcVar15 + 0x268) = *(undefined8 *)(param_4 + 0x1d0);
                  *(undefined8 *)(pcVar15 + 0x260) = *(undefined8 *)(param_4 + 0x1c8);
                  *(undefined8 *)(pcVar15 + 600) = *puVar8;
                  *(undefined8 *)(pcVar15 + 0x210) = *(undefined8 *)(param_4 + 0x1b8);
                  *(undefined8 *)(pcVar15 + 0x208) = *(undefined8 *)(param_4 + 0x1b0);
                  *(undefined8 *)(pcVar15 + 0x200) = *(undefined8 *)(param_4 + 0x1a8);
                  *(longlong *)(pcVar15 + 0x1f8) = *plVar16;
                  *(longlong *)(pcVar15 + 0x1d8) = *plVar4;
                  *(undefined8 *)(pcVar15 + 0x1e0) = *(undefined8 *)(param_4 + 0x188);
                  *(undefined8 *)(pcVar15 + 0x1e8) = *(undefined8 *)(param_4 + 400);
                  *(undefined8 *)(pcVar15 + 0x1f0) = *(undefined8 *)(param_4 + 0x198);
                  *(longlong *)(pcVar15 + 0x238) = lStack_130;
                  *(longlong *)(pcVar15 + 0x240) = lStack_128;
                  *(longlong *)(pcVar15 + 0x248) = lStack_120;
                  *(longlong *)(pcVar15 + 0x250) = lStack_118;
                  *(longlong *)(pcVar15 + 0x218) = lStack_110;
                  *(longlong *)(pcVar15 + 0x220) = lStack_108;
                  *(longlong *)(pcVar15 + 0x228) = lStack_100;
                  *(longlong *)(pcVar15 + 0x230) = lStack_f8;
                  pcVar15[0x290] = cStack_191;
                  pcVar15[0x291] = '\0';
                  pcVar15[0x292] = '\0';
                  pcVar15[0x293] = '\0';
                  pcVar15[0x294] = '\0';
                  pcVar15[0x294] = '\0';
                  pcVar15[0x295] = '\0';
                  pcVar15[0x296] = '\0';
                  pcVar15[0x297] = '\0';
                  pcVar15[0x288] = *(char *)(param_4 + 0x1f0);
                  pcVar15[0x289] = '\0';
                  pcVar15[0x28a] = '\0';
                  pcVar15[0x28b] = '\0';
                  pcVar15[0x28c] = '\0';
                  pcVar15[0x28c] = '\0';
                  pcVar15[0x28d] = '\0';
                  pcVar15[0x28e] = '\0';
                  pcVar15[0x28f] = '\0';
                  uVar6 = *(undefined8 *)(param_4 + 0x1e0);
                  *(undefined8 *)(pcVar15 + 0x280) = *(undefined8 *)(param_4 + 0x1e8);
                  *(undefined8 *)(pcVar15 + 0x278) = uVar6;
                  pcVar15[0x328] = '\0';
                  pcVar15[0x329] = '\0';
                  pcVar15[0x32a] = '\0';
                  pcVar15[0x32b] = '\0';
                  pcVar15[0x32c] = '\0';
                  pcVar15[0x32d] = '\0';
                  pcVar15[0x32e] = '\0';
                  pcVar15[0x32f] = '\0';
                  pcVar15[0x330] = '\0';
                  pcVar15[0x331] = '\0';
                  pcVar15[0x332] = '\0';
                  pcVar15[0x333] = '\0';
                  pcVar15[0x334] = '\0';
                  pcVar15[0x335] = '\0';
                  pcVar15[0x336] = '\0';
                  pcVar15[0x337] = '\0';
                  pcVar15[0x338] = '\0';
                  pcVar15[0x339] = '\0';
                  pcVar15[0x33a] = '\0';
                  pcVar15[0x33b] = '\0';
                  pcVar15[0x33c] = '\0';
                  pcVar15[0x33d] = '\0';
                  pcVar15[0x33e] = '\0';
                  pcVar15[0x33f] = '\0';
                  pcVar15[0x340] = '\0';
                  pcVar15[0x341] = '\0';
                  pcVar15[0x342] = '\0';
                  pcVar15[0x343] = '\0';
                  pcVar15[0x344] = '\0';
                  pcVar15[0x345] = '\0';
                  pcVar15[0x346] = '\0';
                  pcVar15[0x347] = '\0';
                  pcVar15[0x348] = '\0';
                  pcVar15[0x349] = '\0';
                  pcVar15[0x34a] = '\0';
                  pcVar15[0x34b] = '\0';
                  pcVar15[0x34c] = '\0';
                  pcVar15[0x34d] = '\0';
                  pcVar15[0x34e] = '\0';
                  pcVar15[0x34f] = '\0';
                  pcVar15[0x350] = '\0';
                  pcVar15[0x351] = '\0';
                  pcVar15[0x352] = '\0';
                  pcVar15[0x353] = '\0';
                  pcVar15[0x354] = '\0';
                  pcVar15[0x355] = '\0';
                  pcVar15[0x356] = '\0';
                  pcVar15[0x357] = '\0';
                  pcVar15[0x358] = '\0';
                  pcVar15[0x359] = '\0';
                  pcVar15[0x35a] = '\0';
                  pcVar15[0x35b] = '\0';
                  pcVar15[0x35c] = '\0';
                  pcVar15[0x35d] = '\0';
                  pcVar15[0x35e] = '\0';
                  pcVar15[0x35f] = '\0';
                  pcVar15[0x360] = '\0';
                  pcVar15[0x361] = '\0';
                  pcVar15[0x362] = '\0';
                  pcVar15[0x363] = '\0';
                  pcVar15[0x364] = '\0';
                  pcVar15[0x365] = '\0';
                  pcVar15[0x366] = '\0';
                  pcVar15[0x367] = '\0';
                  pcVar15[0x368] = '\0';
                  pcVar15[0x369] = '\0';
                  pcVar15[0x36a] = '\0';
                  pcVar15[0x36b] = '\0';
                  pcVar15[0x36c] = '\0';
                  pcVar15[0x36d] = '\0';
                  pcVar15[0x36e] = '\0';
                  pcVar15[0x36f] = '\0';
                  pcVar15[0x370] = '\0';
                  pcVar15[0x371] = '\0';
                  pcVar15[0x372] = '\0';
                  pcVar15[0x373] = '\0';
                  pcVar15[0x374] = '\0';
                  pcVar15[0x375] = '\0';
                  pcVar15[0x376] = '\0';
                  pcVar15[0x377] = '\0';
                  pcVar15[0x380] = '\0';
                  pcVar15[0x381] = '\0';
                  pcVar15[0x382] = '\0';
                  pcVar15[899] = '\0';
                  pcVar15[900] = '\0';
                  pcVar15[0x385] = '\0';
                  pcVar15[0x386] = '\0';
                  pcVar15[0x387] = '\0';
                  fn_16748__custom_panic(pcVar12,*(undefined8 *)(pcVar15 + 0x50));
                  fn_2a6a8__sol_memcmp(pcVar12);
                  iVar3 = 0x1a;
                }
                else {
                  pcVar12 = (char *)(ulonglong)uStack_1c4;
                  iVar3 = iStack_1c8;
                }
              }
              else {
                pcVar12 = (char *)(ulonglong)uStack_1bc;
                iVar3 = iStack_1c0;
              }
              iVar13 = (int)pcVar12;
            }
          }
        }
      }
      goto LAB_ram_00009d90;
    }
  }
  iVar13 = (int)pcStack_80;
  iVar3 = 0xb;
LAB_ram_00009d90:
  param_1[1] = iVar13;
  *param_1 = iVar3;
  return;
}
