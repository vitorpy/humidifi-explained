/* Function: fn_52a8
 * Address:  0x53c8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_52a8 @ 0x53c8 ---- */

/* WARNING: Removing unreachable block (ram,0x000077c8) */

undefined8 fn_52a8(void)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong unaff_R6;
  longlong unaff_R7;
  uint unaff_R9W;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)uStack_30;
  fn_52a8();
  uStack_18 = *(ulonglong *)(unaff_R6 + 0x270);
  uStack_20 = *(ulonglong *)(unaff_R6 + 0x268);
  uStack_28 = *(ulonglong *)(unaff_R6 + 0x260);
  uStack_30 = *(ulonglong *)(unaff_R6 + 600);
  if (*(ulonglong *)(unaff_R6 + 0x710) < 5) {
    uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
    uStack_30 = uStack_30 ^ 0xfb5ce87aae443c38;
    uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
    uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
  }
  uVar3 = uStack_30 << 0x38 | (uStack_30 & 0xff00) << 0x28 | (uStack_30 & 0xff0000) << 0x18 |
          (uStack_30 & 0xff000000) << 8 | uStack_30 >> 8 & 0xff000000 | uStack_30 >> 0x18 & 0xff0000
          | uStack_30 >> 0x28 & 0xff00 | uStack_30 >> 0x38;
  uVar5 = *(ulonglong *)(unaff_R7 + 8);
  uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
          (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
          uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
  if (uVar3 == uVar5) {
    uVar3 = uStack_28 << 0x38 | (uStack_28 & 0xff00) << 0x28 | (uStack_28 & 0xff0000) << 0x18 |
            (uStack_28 & 0xff000000) << 8 | uStack_28 >> 8 & 0xff000000 |
            uStack_28 >> 0x18 & 0xff0000 | uStack_28 >> 0x28 & 0xff00 | uStack_28 >> 0x38;
    uVar5 = *(ulonglong *)(unaff_R7 + 0x10);
    uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
            (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
            uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
    if (uVar3 == uVar5) {
      uVar3 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 | (uStack_20 & 0xff0000) << 0x18 |
              (uStack_20 & 0xff000000) << 8 | uStack_20 >> 8 & 0xff000000 |
              uStack_20 >> 0x18 & 0xff0000 | uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
      uVar5 = *(ulonglong *)(unaff_R7 + 0x18);
      uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
              (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
              uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
      if (uVar3 == uVar5) {
        iVar4 = 0;
        uVar3 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 | (uStack_18 & 0xff0000) << 0x18 |
                (uStack_18 & 0xff000000) << 8 | uStack_18 >> 8 & 0xff000000 |
                uStack_18 >> 0x18 & 0xff0000 | uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
        uVar5 = *(ulonglong *)(unaff_R7 + 0x20);
        uVar5 = uVar5 << 0x38 | (uVar5 & 0xff00) << 0x28 | (uVar5 & 0xff0000) << 0x18 |
                (uVar5 & 0xff000000) << 8 | uVar5 >> 8 & 0xff000000 | uVar5 >> 0x18 & 0xff0000 |
                uVar5 >> 0x28 & 0xff00 | uVar5 >> 0x38;
        if (uVar3 == uVar5) goto LAB_ram_00005590;
      }
    }
  }
  iVar4 = -1;
  if (uVar5 <= uVar3) {
    iVar4 = 1;
  }
LAB_ram_00005590:
  if ((*(char *)(unaff_R7 + 1) != '\0') && (iVar4 == 0 && iVar1 == 0)) {
    *(undefined8 *)(unaff_R6 + 0x2b0) = 0x6e9de2b30b19f9ea;
    unaff_R9W = 0x1a;
  }
  if (unaff_R9W < 0xd) {
    if (unaff_R9W < 6) {
      if (unaff_R9W < 3) {
        if (unaff_R9W == 0) {
          uVar2 = 0xabad1dea;
        }
        else if (unaff_R9W == 1) {
          uVar2 = 0x200000000;
        }
        else {
          uVar2 = 0x300000000;
        }
      }
      else if (unaff_R9W == 3) {
        uVar2 = 0x400000000;
      }
      else if (unaff_R9W == 4) {
        uVar2 = 0x500000000;
      }
      else {
        uVar2 = 0x600000000;
      }
    }
    else if (unaff_R9W < 9) {
      if (unaff_R9W == 6) {
        uVar2 = 0x700000000;
      }
      else if (unaff_R9W == 7) {
        uVar2 = 0x800000000;
      }
      else {
        uVar2 = 0x900000000;
      }
    }
    else if (unaff_R9W < 0xb) {
      if (unaff_R9W == 9) {
        uVar2 = 0xa00000000;
      }
      else {
        uVar2 = 0xb00000000;
      }
    }
    else if (unaff_R9W == 0xb) {
      uVar2 = 0xc00000000;
    }
    else {
      uVar2 = 0xd00000000;
    }
  }
  else if (unaff_R9W < 0x14) {
    if (unaff_R9W < 0x10) {
      if (unaff_R9W == 0xd) {
        uVar2 = 0xe00000000;
      }
      else if (unaff_R9W == 0xe) {
        uVar2 = 0xf00000000;
      }
      else {
        uVar2 = 0x1000000000;
      }
    }
    else if (unaff_R9W < 0x12) {
      if (unaff_R9W == 0x10) {
        uVar2 = 0x1100000000;
      }
      else {
        uVar2 = 0x1200000000;
      }
    }
    else if (unaff_R9W == 0x12) {
      uVar2 = 0x1300000000;
    }
    else {
      uVar2 = 0x1400000000;
    }
  }
  else if (unaff_R9W < 0x17) {
    if (unaff_R9W == 0x14) {
      uVar2 = 0x1500000000;
    }
    else if (unaff_R9W == 0x15) {
      uVar2 = 0x1600000000;
    }
    else {
      uVar2 = 0x1700000000;
    }
  }
  else if (unaff_R9W < 0x19) {
    if (unaff_R9W == 0x17) {
      uVar2 = 0x1800000000;
    }
    else {
      uVar2 = 0x1900000000;
    }
  }
  else {
    uVar2 = 0;
    if (unaff_R9W == 0x19) {
      uVar2 = 0x1a00000000;
    }
  }
  return uVar2;
}
