/* Function: fn_144e8
 * Address:  0x14608
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_144e8 @ 0x14608 ---- */

/* WARNING: Type propagation algorithm not settling */

void fn_144e8(undefined4 *param_1,longlong *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *unaff_R6;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  byte bStack_398;
  undefined1 uStack_380;
  undefined4 *puStack_340;
  undefined8 uStack_338;
  undefined1 auStack_330 [4];
  undefined1 auStack_32c [5];
  undefined8 uStack_327;
  undefined1 auStack_31f [7];
  longlong alStack_318 [46];
  undefined1 auStack_1a8 [4];
  undefined1 auStack_1a4 [4];
  char cStack_1a0;
  undefined8 uStack_19f;
  undefined1 auStack_197 [7];
  longlong alStack_190 [47];
  undefined8 uStack_18;
  
  if (param_3 < (undefined4 *)0x8) goto LAB_ram_00014af8;
  lVar6 = *param_2;
  if (lVar6 < 0x24f3f41552b88a9d) {
    if (lVar6 < -0x162701836cac672f) {
      uVar13 = 2;
      if (lVar6 == -0x7e6329becc64df3f) {
LAB_ram_00014ac0:
        puVar11 = (undefined4 *)0x1;
        puVar18 = (undefined4 *)0x0;
        lVar6 = 0x13;
        if (param_3 < (undefined4 *)0x20) goto LAB_ram_00014af8;
      }
      else {
        if (lVar6 != -0x55956088af70861a) goto LAB_ram_00014af8;
        puVar18 = (undefined4 *)0x1;
        lVar6 = 0xb;
        uVar13 = 3;
        puVar11 = (undefined4 *)0x1;
        if (param_3 < (undefined4 *)0x18) goto LAB_ram_00014af8;
      }
      goto LAB_ram_00014b48;
    }
    if (lVar6 == -0x162701836cac672f) {
      uVar13 = 7;
    }
    else {
      uVar13 = 6;
      if (lVar6 == 0x14afc431ccfa64bb) goto LAB_ram_00014840;
      if (lVar6 != 0x18fabbd8cae56035) goto LAB_ram_00014af8;
      uVar13 = 9;
    }
    if (param_3 < (undefined4 *)0x23) goto LAB_ram_00014af8;
    lVar6 = 9;
    uVar8 = 1;
    bStack_398 = *(byte *)(param_2 + 1);
    unaff_R6 = (undefined4 *)(ulonglong)bStack_398;
LAB_ram_00014890:
    puVar18 = (undefined4 *)(lVar6 + 0x1a);
    if (puVar18 <= param_3) {
      puVar9 = (undefined8 *)((longlong)param_2 + lVar6);
      uVar2 = *(undefined2 *)((longlong)puVar9 + 0x14);
      uVar3 = *(undefined2 *)((longlong)puVar9 + 0x12);
      uVar4 = *(undefined2 *)(puVar9 + 2);
      uVar12 = puVar9[1];
      uVar7 = *puVar9;
      uVar1 = *(uint *)((longlong)puVar9 + 0x16);
      if ((ulonglong)uVar1 == 0) {
        uVar16 = 0;
      }
      else {
        uVar17 = 0;
        unaff_R6 = (undefined4 *)((longlong)auStack_1a8 + 1);
        uVar16 = 0;
        do {
          fn_142e0(auStack_1a8,param_2,param_3,puVar18);
          if (auStack_1a8[0] == '\a') goto LAB_ram_00014d88;
          uStack_18 = CONCAT53(_auStack_1a4,auStack_1a8._1_3_);
          if (uVar17 < 0x10) {
            uVar14 = (ulonglong)uVar16;
            if (0xf < uVar14) goto LAB_ram_000152d0;
            auStack_32c[uVar14 * 0x18 + 4] = auStack_1a8[0];
            (&uStack_327)[uVar14 * 3] = uStack_18;
            *(ulonglong *)((longlong)alStack_318 + uVar14 * 0x18 + -7) =
                 CONCAT17(uStack_19f._7_1_,(undefined7)uStack_19f);
            alStack_318[uVar14 * 3] = CONCAT71(auStack_197,uStack_19f._7_1_);
            uVar16 = uVar16 + 1;
          }
          uVar17 = uVar17 + 1;
          puVar18 = (undefined4 *)((longlong)puVar18 + alStack_190[0]);
        } while (uVar17 < uVar1);
      }
      auStack_330 = (undefined1  [4])uVar16;
      fn_2fe08__sol_memcpy(auStack_1a4 + 2,auStack_330,0x188);
      *(byte *)((longlong)param_1 + 9) = bStack_398;
      *(undefined1 *)(param_1 + 2) = uVar8;
      *(undefined2 *)((longlong)param_1 + 6) = uVar2;
      *(undefined2 *)(param_1 + 1) = uVar3;
      *(undefined2 *)((longlong)param_1 + 2) = uVar4;
      *(undefined1 *)((longlong)param_1 + 1) = uVar13;
      *(undefined1 *)param_1 = 1;
      fn_2fe08__sol_memcpy((undefined1 *)((longlong)param_1 + 10),auStack_1a8,0x18e);
      *(undefined8 *)(param_1 + 0x68) = uVar12;
      *(undefined8 *)(param_1 + 0x66) = uVar7;
      return;
    }
    fn_2f320__custom_panic(puVar18,param_3,&DAT_ram_00032938);
    puVar10 = param_3;
    puVar18 = param_1;
LAB_ram_000150d8:
    fn_2f328__custom_panic();
LAB_ram_000150f0:
    param_3 = (undefined4 *)&DAT_ram_00032878;
    fn_2f328__custom_panic();
LAB_ram_00015108:
    puVar11 = (undefined4 *)&DAT_ram_000328d8;
    fn_2f320__custom_panic(puVar10,param_3,&DAT_ram_000328d8);
    puVar10 = param_3;
    param_3 = puVar11;
LAB_ram_00015130:
    fn_2f320__custom_panic(puVar10,param_3,&DAT_ram_00032878);
    puVar10 = param_3;
LAB_ram_00015158:
    puVar11 = unaff_R6;
    fn_2f328__custom_panic(puVar10,unaff_R6,&DAT_ram_000328f0);
    puVar10 = puVar11;
LAB_ram_00015180:
    param_3 = (undefined4 *)&DAT_ram_00032890;
    fn_2f328__custom_panic(puVar10,puVar18,&DAT_ram_00032890);
LAB_ram_000151a8:
    puVar11 = (undefined4 *)&DAT_ram_000328f0;
    fn_2f320__custom_panic(unaff_R6,param_3,&DAT_ram_000328f0);
    param_3 = puVar11;
LAB_ram_000151d0:
    fn_2f320__custom_panic(puVar18,param_3,&DAT_ram_00032890);
LAB_ram_000151f8:
    param_3 = (undefined4 *)&DAT_ram_000328a8;
    fn_2f328__custom_panic(puVar18,unaff_R6);
  }
  else {
    if (lVar6 < 0x3e457d9aa869d1b0) {
      if (lVar6 == 0x24f3f41552b88a9d) {
        uVar13 = 8;
LAB_ram_00014840:
        if (param_3 < (undefined4 *)0x22) goto LAB_ram_00014af8;
        lVar6 = 8;
        uVar8 = 0;
        goto LAB_ram_00014890;
      }
      uVar13 = 0;
      if (lVar6 != 0x2aade37a97cb17e5) goto LAB_ram_00014af8;
    }
    else {
      if (lVar6 == 0x3e457d9aa869d1b0) {
        uVar13 = 5;
        goto LAB_ram_00014ac0;
      }
      if (lVar6 == 0x680e5da774475696) {
        puVar11 = (undefined4 *)0x0;
        lVar6 = 0xb;
        uVar13 = 1;
        puVar18 = (undefined4 *)0x1;
        if (param_3 < (undefined4 *)0x17) goto LAB_ram_00014af8;
        goto LAB_ram_00014b48;
      }
      if (lVar6 != 0x5ced2b7b97ef33d0) goto LAB_ram_00014af8;
      uVar13 = 4;
    }
    puVar18 = (undefined4 *)0x0;
    lVar6 = 0x13;
    puVar11 = (undefined4 *)0x0;
    if (param_3 < (undefined4 *)0x1f) {
LAB_ram_00014af8:
      *(undefined1 *)param_1 = 2;
      return;
    }
LAB_ram_00014b48:
    if (puVar11 == (undefined4 *)0x0) {
      uVar17 = 8;
    }
    else {
      uVar17 = 9;
      uStack_380 = (undefined1)param_2[1];
    }
    uVar14 = uVar17 | 4;
    uVar1 = *(uint *)((longlong)param_2 + uVar17);
    if ((ulonglong)uVar1 == 0) {
      uVar16 = 0;
      unaff_R6 = puVar11;
    }
    else {
      uVar17 = 0;
      unaff_R6 = (undefined4 *)((longlong)auStack_330 + 1);
      uVar16 = 0;
      do {
        fn_14100(auStack_330,param_2,param_3,uVar14);
        if (auStack_330[0] == '\a') goto LAB_ram_00014d88;
        uStack_18 = CONCAT53(auStack_32c,auStack_330._1_3_);
        if (uVar17 < 0x10) {
          uVar15 = (ulonglong)uVar16;
          if (0xf < uVar15) goto LAB_ram_00015248;
          (&cStack_1a0)[uVar15 * 0x18] = auStack_330[0];
          (&uStack_19f)[uVar15 * 3] = uStack_18;
          *(ulonglong *)((longlong)alStack_190 + uVar15 * 0x18 + -7) =
               CONCAT17(uStack_327._7_1_,(undefined7)uStack_327);
          alStack_190[uVar15 * 3] = CONCAT71(auStack_31f,uStack_327._7_1_);
          uVar16 = uVar16 + 1;
        }
        uVar17 = uVar17 + 1;
        uVar14 = alStack_318[0] + uVar14;
      } while (uVar17 < uVar1);
    }
    if (param_3 < (undefined4 *)(uVar14 + lVar6)) {
LAB_ram_00014d88:
      *(undefined1 *)param_1 = 2;
      return;
    }
    puVar10 = (undefined4 *)(uVar14 + 8);
    auStack_1a8 = (undefined1  [4])uVar16;
    if (puVar18 != (undefined4 *)0x0) {
      if (0xfffffffffffffff7 < uVar14) goto LAB_ram_000150d8;
      if (param_3 < puVar10) goto LAB_ram_00015108;
      unaff_R6 = (undefined4 *)(uVar14 + 10);
      if (unaff_R6 < puVar10) goto LAB_ram_00015158;
      if (unaff_R6 <= param_3) {
        if (unaff_R6 < param_3) {
          uStack_338 = *(undefined8 *)((longlong)param_2 + uVar14);
          uVar7 = 0;
          puVar18 = puVar10;
          puStack_340 = param_3;
LAB_ram_00014fd8:
          uVar8 = *(undefined1 *)((longlong)param_2 + (longlong)unaff_R6);
          uVar2 = *(undefined2 *)((longlong)param_2 + (longlong)puVar18);
          fn_2fe08__sol_memcpy(param_1 + 2,auStack_1a8,0x188);
          *(undefined4 **)(param_1 + 0x68) = puStack_340;
          *(undefined8 *)(param_1 + 0x66) = uVar7;
          *(undefined8 *)(param_1 + 100) = uStack_338;
          *(undefined1 *)((longlong)param_1 + 7) = uStack_380;
          *(char *)((longlong)param_1 + 6) = (char)puVar11;
          *(undefined2 *)(param_1 + 1) = uVar2;
          *(undefined1 *)((longlong)param_1 + 2) = uVar13;
          *(undefined1 *)((longlong)param_1 + 1) = uVar8;
          *(undefined1 *)param_1 = 0;
          return;
        }
        goto LAB_ram_00015358;
      }
      goto LAB_ram_000151a8;
    }
    if (0xfffffffffffffff7 < uVar14) goto LAB_ram_000150f0;
    if (param_3 < puVar10) goto LAB_ram_00015130;
    puVar18 = (undefined4 *)(uVar14 + 0x10);
    if (puVar18 < puVar10) goto LAB_ram_00015180;
    if (param_3 < puVar18) goto LAB_ram_000151d0;
    unaff_R6 = (undefined4 *)(uVar14 + 0x12);
    if (unaff_R6 < puVar18) goto LAB_ram_000151f8;
    if (unaff_R6 <= param_3) {
      if (param_3 <= unaff_R6) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(unaff_R6,param_3,&DAT_ram_000328c0);
      }
      puStack_340 = *(undefined4 **)((longlong)param_2 + uVar14);
      uStack_338 = *(undefined8 *)((longlong)param_2 + (longlong)puVar10);
      uVar7 = 1;
      goto LAB_ram_00014fd8;
    }
  }
  fn_2f320__custom_panic(unaff_R6,param_3,&DAT_ram_000328a8);
  auStack_330[0] = (char)param_3;
LAB_ram_00015248:
  auStack_330._1_3_ = (undefined3)uStack_18;
  auStack_32c = SUB85((ulonglong)uStack_18 >> 0x18,0);
  cVar5 = '+';
  fn_2dfe8__custom_panic(&DAT_ram_00031b64,0x2b,auStack_330,&DAT_ram_00032530,&DAT_ram_00032920);
  auStack_1a8[0] = cVar5;
LAB_ram_000152d0:
  auStack_1a8._1_3_ = (undefined3)uStack_18;
  _auStack_1a4 = (undefined5)((ulonglong)uStack_18 >> 0x18);
  param_3 = (undefined4 *)auStack_1a8;
  fn_2dfe8__custom_panic(&DAT_ram_00031b64,0x2b,param_3,&DAT_ram_00032590,&DAT_ram_00032950);
LAB_ram_00015358:
                    /* WARNING: Subroutine does not return */
  fn_2df20__custom_panic(unaff_R6,param_3,&DAT_ram_00032908);
}
