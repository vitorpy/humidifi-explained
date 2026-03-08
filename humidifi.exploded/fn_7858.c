/* Function: fn_7858
 * Address:  0x7978
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_7858 @ 0x7978 ---- */

void fn_7858(undefined8 *param_1,char param_2,longlong *param_3,longlong param_4,
                     longlong *param_5)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((((*param_5 != 0x77c2575f37eddd1b) || (param_5[1] != 0x2d6e7a2be59cf048)) ||
      (param_5[2] != 0x7ea41dd6046c6fc4)) || (bVar1 = false, param_5[3] != 0x31797eed4f7e7455)) {
    bVar1 = true;
  }
  if ((!bVar1) || (param_2 == '\0')) {
    *(undefined4 *)param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 1) = 0x1ced;
    *param_1 = 1;
    return;
  }
  if (param_3 != (longlong *)0x0) {
    lVar2 = *param_3;
    if (((*(ulonglong *)(lVar2 + 8) != (*(ulonglong *)(param_4 + 0x388) ^ 0xfb5ce87aae443c38)) ||
        (*(ulonglong *)(lVar2 + 0x10) != (*(ulonglong *)(param_4 + 0x390) ^ 0x4a2178451bac3c7))) ||
       ((*(ulonglong *)(lVar2 + 0x18) != (*(ulonglong *)(param_4 + 0x398) ^ 0x4a1178751b9c3c6) ||
        (bVar1 = false,
        *(ulonglong *)(lVar2 + 0x20) != (*(ulonglong *)(param_4 + 0x3a0) ^ 0x4a0178651b8c3c5))))) {
      bVar1 = true;
    }
    if ((!bVar1) && (*(char *)(lVar2 + 2) == '\0')) {
      uVar3 = 0;
      goto LAB_ram_00007bb0;
    }
  }
  uVar3 = *(ulonglong *)(param_4 + 0x3a8) ^ 0xcf44133cb352d91c;
LAB_ram_00007bb0:
  param_1[1] = uVar3;
  *(undefined4 *)param_1 = 0;
  return;
}
