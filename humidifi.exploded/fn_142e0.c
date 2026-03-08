/* Function: fn_142e0
 * Address:  0x14400
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_142e0 @ 0x14400 ---- */

void fn_142e0(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4)

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
  if (cStack_28 == '\a') {
LAB_ram_00014498:
    *(undefined1 *)param_1 = 7;
    return;
  }
  uStack_8 = uStack_20;
  uVar3 = lStack_18 + param_4;
  if (param_3 < uVar3 + 4) goto LAB_ram_00014498;
  uVar4 = uVar3 + 2;
  if (uVar3 < 0xfffffffffffffffe) {
    if (uVar4 <= param_3) {
      uVar5 = uVar4;
      if (uVar4 < param_3) {
        uVar5 = uVar3 + 3;
        if (uVar5 < param_3) {
          uVar1 = *(undefined1 *)(param_2 + uVar5);
          uVar2 = *(undefined1 *)(param_2 + uVar4);
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + uVar3);
          *(undefined1 *)((longlong)param_1 + 0x12) = uVar2;
          *(undefined1 *)((longlong)param_1 + 0x13) = uVar1;
          param_1[3] = lStack_18 + 4;
          param_1[1] = uStack_20;
          *param_1 = CONCAT71(uStack_27,cStack_28);
          return;
        }
                    /* WARNING: Subroutine does not return */
        fn_2df20__custom_panic(uVar5,param_3,&DAT_ram_00032860);
      }
      goto LAB_ram_000145b8;
    }
  }
  else {
    fn_2f328__custom_panic(uVar3,uVar4,&DAT_ram_00032830);
  }
  uVar5 = param_3;
  fn_2f320__custom_panic(uVar4,param_3,&DAT_ram_00032830);
LAB_ram_000145b8:
                    /* WARNING: Subroutine does not return */
  fn_2df20__custom_panic(uVar5,param_3,&DAT_ram_00032848);
}
