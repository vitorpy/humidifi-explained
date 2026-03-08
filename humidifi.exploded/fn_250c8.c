/* Function: fn_250c8
 * Address:  0x251e8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_250c8 @ 0x251e8 ---- */

void fn_250c8(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  bool bVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar3 = (ushort *)*param_2;
  uVar5 = (ulonglong)*(ushort *)((longlong)puVar3 + param_2[1] + -2);
  uVar4 = 0;
  uVar6 = 0;
  if (uVar5 < *puVar3) {
    puVar3 = (ushort *)((longlong)puVar3 + (ulonglong)puVar3[uVar5 + 1]);
    uVar1 = *puVar3;
    if ((((*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 2) != 0x4873bce2144ae3b5) ||
         (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 10) != -0x2911a2500a1ef197)) ||
        (*(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x12) != 0x60b8aa6da3403855)) ||
       (bVar2 = false,
       *(longlong *)((longlong)puVar3 + (ulonglong)uVar1 * 0x21 + 0x1a) != 0x103cc0bd736050b0)) {
      bVar2 = true;
    }
    uVar4 = 0;
    if (!bVar2) {
      fn_2c1e8(&uStack_18,0x3e8000000000000,0,0x3e8000000000000);
      uVar4 = uStack_18;
      uVar6 = uStack_10;
    }
  }
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar6;
  *param_1 = 0;
  return;
}
