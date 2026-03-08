/* Function: fn_12ec0__custom_panic
 * Address:  0x12fe0
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_12ec0__custom_panic @ 0x12fe0 ---- */

ulonglong fn_12ec0__custom_panic(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  char *pcVar12;
  longlong lVar13;
  char *pcVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  uint auStack_3b0 [6];
  char acStack_398 [16];
  undefined4 uStack_388;
  char acStack_375 [40];
  undefined1 auStack_34d [809];
  char acStack_24 [34];
  char cStack_2;
  char cStack_1;
  
  fn_13160__sol_memcpy(auStack_3b0,param_1);
  if ((ulonglong)auStack_3b0[0] != 0) {
    lVar8 = 0;
    uVar4 = 0;
    do {
      if (acStack_375[lVar8] == '\x17') {
        cStack_1 = acStack_398[lVar8 + 1];
        cStack_2 = acStack_398[lVar8];
        if (0xf < (uVar4 & 0xffffffff)) {
          puVar3 = (uint *)&DAT_ram_00031b64;
          plVar5 = (longlong *)0x2b;
          uVar7 = 0x70;
          uVar11 = 0xb0;
          uVar4 = fn_2dfe8__custom_panic(&DAT_ram_00031b64,0x2b,&cStack_2);
          bVar1 = *(byte *)((longlong)plVar5 + 0x14);
          if (1 < bVar1) {
            if (bVar1 != 2) {
              *puVar3 = 0;
              return uVar4;
            }
            uVar10 = plVar5[1];
            bVar2 = 0x15 < uVar10;
            if (bVar2) {
              lVar8 = *plVar5;
              uVar7 = *(undefined1 *)(lVar8 + 0x15);
              uVar11 = *(undefined1 *)(lVar8 + 0xc);
              uVar10 = *(ulonglong *)(lVar8 + 0xd);
            }
            *(undefined1 *)((longlong)puVar3 + 0x3b) = uVar11;
            *(undefined1 *)((longlong)puVar3 + 0x19) = uVar7;
            *(ulonglong *)(puVar3 + 4) = uVar10;
            *puVar3 = (uint)bVar2;
            *(undefined1 *)((longlong)puVar3 + 0x1a) = 0;
            *(undefined1 *)(puVar3 + 6) = 1;
            puVar3[2] = 1;
            puVar3[3] = 0;
            return uVar4;
          }
          if ((bVar1 == 0) || (uVar4 = plVar5[1], 0x3b < uVar4)) {
            uVar4 = fn_13340();
            return uVar4;
          }
          uVar10 = (ulonglong)*(uint *)(plVar5 + 2);
          if (uVar10 != 0) {
            lVar8 = *plVar5;
            uVar6 = 0;
            uVar16 = 0x16;
            puVar15 = auStack_34d;
            goto LAB_ram_00013328;
          }
          uVar9 = 0;
          goto LAB_ram_00013430;
        }
        lVar13 = (uVar4 & 0xffffffff) * 2;
        acStack_24[lVar13 + 1] = cStack_1;
        acStack_24[lVar13] = cStack_2;
        uVar4 = uVar4 + 1;
      }
      lVar8 = lVar8 + 0x38;
    } while ((ulonglong)auStack_3b0[0] * 0x38 != lVar8);
    uVar4 = uVar4 & 0xffffffff;
    if (uVar4 < 2) {
      return 0;
    }
    pcVar12 = acStack_24 + 3;
    uVar10 = 0;
    do {
      uVar9 = uVar10 + 1;
      if (uVar4 <= uVar9) {
        return 0;
      }
      if (acStack_24[uVar10 * 2] == '\x01') {
        pcVar14 = pcVar12;
        uVar16 = uVar9;
        do {
          if ((pcVar14[-1] == '\x01') && (acStack_24[uVar10 * 2 + 1] != *pcVar14)) {
            return (ulonglong)(1 < uVar4);
          }
          pcVar14 = pcVar14 + 2;
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar4);
      }
      pcVar12 = pcVar12 + 2;
      uVar10 = uVar9;
    } while (uVar9 < uVar4);
  }
  return 0;
  while( true ) {
    lVar13 = lVar8 + uVar16;
    uVar17 = *(undefined8 *)(lVar13 + -9);
    uVar7 = *(undefined1 *)(lVar13 + -1);
    *puVar15 = *(undefined1 *)(lVar13 + -10);
    puVar15[-0x22] = uVar7;
    *(undefined8 *)(puVar15 + -0x2b) = uVar17;
    uVar16 = uVar16 + 0xb;
    puVar15[-0x21] = 0;
    puVar15[-0x23] = 1;
    *(undefined8 *)(puVar15 + -0x33) = 1;
    puVar15 = puVar15 + 0x38;
    uVar6 = uVar6 + 1;
    uVar9 = uVar10;
    if (uVar10 <= uVar6) break;
LAB_ram_00013328:
    uVar9 = uVar6;
    if ((uVar16 == 0xc6) || (uVar4 < uVar16)) break;
  }
LAB_ram_00013430:
  uStack_388 = (undefined4)uVar9;
  uVar4 = fn_2fe08__sol_memcpy();
  return uVar4;
}
