/* Function: fn_9208
 * Address:  0x9328
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_9208 @ 0x9328 ---- */

void fn_9208(void)

{
  undefined4 uVar1;
  undefined8 *unaff_R7;
  char *unaff_R8;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined4 *puStack_190;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_127;
  undefined8 uStack_11f;
  undefined8 uStack_117;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  fn_9208();
  uStack_130 = 0x12;
  uStack_12f = *unaff_R7;
  uStack_127 = unaff_R7[1];
  uStack_11f = unaff_R7[2];
  uStack_117 = unaff_R7[3];
  if (((*unaff_R8 == -1) && ((*pbStack_1a8 & 0x88) == 0x88)) && ((*pbStack_1a0 & 0x88) == 0x88)) {
    puStack_10 = &uStack_130;
    puStack_20 = &stack0xfffffffffffffef8;
    puStack_28 = &DAT_ram_00031a00;
    uStack_8 = 0x21;
    uStack_18 = 3;
    fn_95e8(&puStack_28,&stack0xffffffffffffff30,3,8,0);
    uVar1 = 0x1a;
  }
  else {
    uVar1 = 0xb;
  }
  *puStack_190 = uVar1;
  return;
}
