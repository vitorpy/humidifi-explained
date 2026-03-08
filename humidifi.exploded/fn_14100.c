/* Function: fn_14100
 * Address:  0x14220
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_14100 @ 0x14220 ---- */

void fn_14100(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cStack_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  longlong lStack_18;
  undefined8 uStack_8;
  
  fn_13988__custom_panic(&cStack_28);
  if (cStack_28 != '\a') {
    uStack_8 = uStack_20;
    uVar3 = lStack_18 + param_4;
    if (uVar3 + 3 <= param_3) {
      if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar3,param_3,&DAT_ram_000327e8);
      }
      uVar4 = uVar3 + 1;
      if (uVar4 < param_3) {
        uVar5 = uVar3 + 2;
        if (uVar5 < param_3) {
          uVar1 = *(undefined1 *)(param_2 + uVar5);
          uVar2 = *(undefined1 *)(param_2 + uVar4);
          *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + uVar3);
          *(undefined1 *)((longlong)param_1 + 0x11) = uVar2;
          *(undefined1 *)((longlong)param_1 + 0x12) = uVar1;
          param_1[3] = lStack_18 + 3;
          param_1[1] = uStack_20;
          *param_1 = CONCAT71(uStack_27,cStack_28);
          return;
        }
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar5,param_3,&DAT_ram_00032818);
      }
                    /* WARNING: Subroutine does not return */
      fn_2df20__custom_panic(uVar4,param_3,&DAT_ram_00032800);
    }
  }
  *(undefined1 *)param_1 = 7;
  return;
}
