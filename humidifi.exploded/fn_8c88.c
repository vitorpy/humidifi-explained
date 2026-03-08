/* Function: fn_8c88
 * Address:  0x8da8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_8c88 @ 0x8da8 ---- */

void fn_8c88(void)

{
  int iVar1;
  int *unaff_R8;
  int iStack_150;
  int iStack_14c;
  
  fn_8c88();
  iVar1 = 8;
  fn_2b5e0__sol_invoke_signed_c(&iStack_150,&stack0xffffffffffffff68,8,0);
  if (iStack_150 == 0x1a) {
    iStack_150 = 0x1a;
    iStack_14c = iVar1;
  }
  unaff_R8[1] = iStack_14c;
  *unaff_R8 = iStack_150;
  return;
}
