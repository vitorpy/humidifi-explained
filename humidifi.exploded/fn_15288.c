/* Function: fn_15288
 * Address:  0x153a8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_15288 @ 0x153a8 ---- */

bool fn_15288(char *param_1,char param_2)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  
  if (*param_1 == '\0') {
    lVar4 = (ulonglong)*(uint *)(param_1 + 8) * 0x18;
    pcVar2 = param_1 + -6;
    do {
      pcVar3 = pcVar2;
      if (lVar4 == 0) {
        return (bool)2;
      }
      cVar5 = 'o';
      bVar1 = pcVar3[0x16];
      if (bVar1 != 5) {
        cVar5 = pcVar3[0x17];
      }
      lVar4 = lVar4 + -0x18;
      pcVar2 = pcVar3 + 0x18;
    } while (cVar5 != param_2);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        return (bool)2;
      }
      if (bVar1 == 1) {
LAB_ram_00015500:
        return (bool)*pcVar2;
      }
    }
    else {
      if (4 < bVar1) {
        if (bVar1 == 5) {
          return (bool)2;
        }
        if (*pcVar2 != '\x01') {
          return (bool)2;
        }
        cVar5 = pcVar3[0x19];
        goto code_r0x000155a0;
      }
      if (bVar1 != 3) goto LAB_ram_00015500;
    }
    cVar5 = *pcVar2;
  }
  else {
    lVar4 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x18;
    do {
      pcVar2 = param_1;
      if (lVar4 == 0) {
        return (bool)2;
      }
      cVar5 = 'o';
      bVar1 = pcVar2[0x18];
      if (bVar1 != 5) {
        cVar5 = pcVar2[0x19];
      }
      lVar4 = lVar4 + -0x18;
      param_1 = pcVar2 + 0x18;
    } while (cVar5 != param_2);
    if (bVar1 < 3) {
      if (bVar1 == 0) {
        return (bool)2;
      }
      if (bVar1 == 1) {
LAB_ram_000154d8:
        return (bool)pcVar2[0x1a];
      }
    }
    else {
      if (4 < bVar1) {
        if (bVar1 == 5) {
          return (bool)2;
        }
        if (pcVar2[0x1a] != '\x01') {
          return (bool)2;
        }
        cVar5 = pcVar2[0x1b];
        goto code_r0x000155a0;
      }
      if (bVar1 != 3) goto LAB_ram_000154d8;
    }
    cVar5 = pcVar2[0x1a];
  }
code_r0x000155a0:
  return cVar5 != '\0';
}
