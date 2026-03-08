/* Function: fn_13988__custom_panic
 * Address:  0x13aa8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_13988__custom_panic @ 0x13aa8 ---- */

void fn_13988__custom_panic(undefined1 *param_1,byte *param_2,undefined *param_3,undefined *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  
  if (param_3 <= param_4) goto LAB_ram_00013d08;
  uVar2 = 1;
  bVar1 = param_2[(longlong)param_4];
  uVar8 = (ulonglong)bVar1;
  if (uVar8 < 0x4f) {
    if (uVar8 < 10) {
      if (uVar8 < 8) {
        puVar9 = (undefined *)0x1;
        if ((1L << uVar8 & 0x89U) != 0) goto LAB_ram_00013cd0;
      }
      else {
        puVar9 = (undefined *)0x1;
      }
      goto LAB_ram_00013ce0;
    }
    uVar6 = uVar8 - 10;
    if (uVar6 < 0x3e) {
      if ((1L << uVar6 & 0x200405050210201U) != 0) goto LAB_ram_00013cd0;
      if ((1L << uVar6 & 0x2000002000000000U) != 0) {
LAB_ram_00013c40:
        puVar9 = (undefined *)0x2;
        goto LAB_ram_00013ce0;
      }
      if (uVar6 != 0x1f) goto LAB_ram_00013b58;
    }
    else {
LAB_ram_00013b58:
      if (uVar8 != 0x4b) {
        puVar9 = (undefined *)0x1;
        if (uVar8 == 0x4d) goto LAB_ram_00013cd0;
        goto LAB_ram_00013ce0;
      }
    }
    puVar9 = (undefined *)0x4;
  }
  else if (uVar8 < 0x66) {
    if (uVar8 < 0x57) {
      if (uVar8 - 0x51 < 2) goto LAB_ram_00013ca0;
      if (uVar8 == 0x4f) goto LAB_ram_00013cd0;
      puVar9 = (undefined *)0x1;
      if (uVar8 == 0x56) goto LAB_ram_00013c40;
    }
    else if (uVar8 < 99) {
      if (uVar8 == 0x57) {
LAB_ram_00013c00:
        puVar9 = (undefined *)0x9;
      }
      else if ((uVar8 == 0x58) || (puVar9 = (undefined *)0x1, uVar8 == 0x60)) goto LAB_ram_00013cd0;
    }
    else {
      puVar9 = (undefined *)0x1;
      if (uVar8 - 99 < 2) {
LAB_ram_00013cd0:
        uVar2 = 0;
        puVar9 = (undefined *)0x0;
      }
    }
  }
  else {
    uVar6 = uVar8 - 0x69;
    if (uVar6 < 0xe) {
      if ((1L << uVar6 & 0x189U) != 0) goto LAB_ram_00013cd0;
      if (uVar6 == 6) {
        fn_13fa8__custom_panic();
        return;
      }
      if (uVar6 == 0xd) goto LAB_ram_00013c00;
    }
    if (uVar8 == 0x66) goto LAB_ram_00013cd0;
    puVar9 = (undefined *)0x1;
    if (uVar8 != 0x67) goto LAB_ram_00013ce0;
LAB_ram_00013ca0:
    puVar9 = (undefined *)0x8;
  }
LAB_ram_00013ce0:
  puVar7 = param_4 + 1;
  if (param_3 < puVar9 + (longlong)puVar7) {
LAB_ram_00013d08:
    *param_1 = 7;
    return;
  }
  if (puVar9 < (undefined *)0x2) {
    if (puVar9 == (undefined *)0x0) {
      uVar4 = 0;
      goto LAB_ram_00013ee8;
    }
    if (puVar9 == (undefined *)0x1) {
      if (puVar7 < param_3) {
        param_2 = (byte *)(ulonglong)param_2[(longlong)puVar7];
        uVar4 = 1;
        uVar2 = (uint)(param_2 != (byte *)0x0);
        goto LAB_ram_00013ee8;
      }
      goto LAB_ram_00014050;
    }
LAB_ram_00013eb8:
    if (uVar2 != 0) {
      if (param_3 <= puVar7) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(puVar7,param_3,&DAT_ram_000327b8);
      }
      param_2 = param_2 + (longlong)puVar7;
      param_4 = (undefined *)(ulonglong)*param_2;
    }
    uVar4 = 6;
    puVar7 = puVar9;
LAB_ram_00013ee8:
    *(undefined **)(param_1 + 8) = puVar7;
    *(int *)(param_1 + 4) = (int)param_2;
    param_1[3] = (char)param_4;
    param_1[2] = (char)uVar2;
    param_1[1] = bVar1;
    *param_1 = uVar4;
    *(undefined **)(param_1 + 0x10) = puVar9 + 1;
    return;
  }
  if (puVar9 == (undefined *)0x2) {
    puVar3 = param_4 + 3;
    if (param_4 < (undefined *)0xfffffffffffffffd) {
      puVar5 = param_3;
      if (puVar3 <= param_3) {
        param_2 = param_2 + (longlong)puVar7;
        uVar4 = 2;
        param_4 = (undefined *)(ulonglong)param_2[1];
        uVar2 = (uint)*param_2;
        goto LAB_ram_00013ee8;
      }
    }
    else {
      puVar3 = (undefined *)fn_2f328__custom_panic(puVar7,puVar3,&DAT_ram_00032758);
LAB_ram_00013f88:
      puVar3 = (undefined *)fn_2f328__custom_panic(puVar7,puVar3,&DAT_ram_00032770);
LAB_ram_00013fb0:
      puVar5 = &DAT_ram_00032788;
      puVar3 = (undefined *)fn_2f328__custom_panic(puVar7,puVar3,&DAT_ram_00032788);
    }
    param_3 = &DAT_ram_00032758;
    puVar3 = (undefined *)fn_2f320__custom_panic(puVar3,puVar5,&DAT_ram_00032758);
LAB_ram_00014000:
    puVar5 = &DAT_ram_00032770;
    puVar3 = (undefined *)fn_2f320__custom_panic(puVar3,param_3,&DAT_ram_00032770);
  }
  else {
    if (puVar9 == (undefined *)0x4) {
      puVar3 = param_4 + 5;
      if ((undefined *)0xfffffffffffffffa < param_4) goto LAB_ram_00013f88;
      if (puVar3 <= param_3) {
        uVar4 = 3;
        uVar2 = *(uint *)(param_2 + (longlong)puVar7);
        param_2 = (byte *)(ulonglong)(uVar2 >> 0x10);
        param_4 = (undefined *)(ulonglong)(uVar2 >> 8);
        goto LAB_ram_00013ee8;
      }
      goto LAB_ram_00014000;
    }
    if (puVar9 != (undefined *)0x9) goto LAB_ram_00013eb8;
    puVar3 = param_4 + 9;
    if ((undefined *)0xfffffffffffffff6 < param_4) goto LAB_ram_00013fb0;
    puVar5 = param_3;
    if (puVar3 <= param_3) {
      if (param_3 <= puVar3) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(puVar3,param_3,&DAT_ram_000327a0);
      }
      uVar2 = (uint)(param_2[(longlong)puVar3] != 0);
      param_2 = param_2 + (longlong)puVar7;
      uVar4 = 4;
      puVar7 = *(undefined **)param_2;
      goto LAB_ram_00013ee8;
    }
  }
  param_3 = &DAT_ram_00032788;
  fn_2f320__custom_panic(puVar3,puVar5,&DAT_ram_00032788);
LAB_ram_00014050:
                    /* WARNING: Subroutine does not return */
  fn_2df20__custom_panic(puVar7,param_3,&DAT_ram_00032740);
}
