/* Function: fn_13fa8__custom_panic
 * Address:  0x140c8
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- fn_13fa8__custom_panic @ 0x140c8 ---- */

void fn_13fa8__custom_panic(undefined1 *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cStack_28;
  undefined7 uStack_27;
  undefined8 uStack_20;
  longlong lStack_18;
  undefined8 uStack_8;
  
  puVar5 = (undefined8 *)(param_4 + 5);
  if (puVar5 <= param_3) {
    puVar3 = (undefined8 *)(param_4 + 1);
    if (puVar5 < puVar3) {
      puVar7 = &DAT_ram_000327d0;
      fn_2f328__custom_panic();
      fn_13988__custom_panic(&cStack_28);
      if (cStack_28 != '\a') {
        uStack_8 = uStack_20;
        puVar4 = (undefined *)(lStack_18 + param_4);
        if (puVar4 + 3 <= puVar7) {
          if (puVar7 <= puVar4) {
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(puVar4,puVar7,&DAT_ram_000327e8);
          }
          puVar6 = puVar4 + 1;
          if (puVar6 < puVar7) {
            puVar8 = puVar4 + 2;
            if (puVar8 < puVar7) {
              uVar1 = *(undefined *)((longlong)puVar5 + (longlong)puVar8);
              uVar2 = *(undefined *)((longlong)puVar5 + (longlong)puVar6);
              *(undefined *)(puVar3 + 2) = *(undefined *)((longlong)puVar5 + (longlong)puVar4);
              *(undefined1 *)((longlong)puVar3 + 0x11) = uVar2;
              *(undefined1 *)((longlong)puVar3 + 0x12) = uVar1;
              puVar3[3] = lStack_18 + 3;
              puVar3[1] = uStack_20;
              *puVar3 = CONCAT71(uStack_27,cStack_28);
              return;
            }
                    /* WARNING: Subroutine does not return */
            fn_2df20__custom_panic(puVar8,puVar7,&DAT_ram_00032818);
          }
                    /* WARNING: Subroutine does not return */
          fn_2df20__custom_panic(puVar6,puVar7,&DAT_ram_00032800);
        }
      }
      *(undefined1 *)puVar3 = 7;
      return;
    }
    if ((ulonglong)*(uint *)(param_2 + (longlong)puVar3) != 0) {
      uVar9 = 0;
      do {
        if (param_3 <= puVar5) goto LAB_ram_000141c0;
        lVar10 = 10;
        if ((ulonglong)*(byte *)(param_2 + (longlong)puVar5) < 3) {
          lVar10 = *(longlong *)
                    (&DAT_ram_000321b8 + (ulonglong)*(byte *)(param_2 + (longlong)puVar5) * 8);
        }
        uVar9 = uVar9 + 1;
        puVar5 = (undefined8 *)(lVar10 + (longlong)puVar5);
      } while (uVar9 < *(uint *)(param_2 + (longlong)puVar3));
    }
    if (puVar5 <= param_3) {
      *(longlong *)(param_1 + 0x10) = (longlong)puVar5 - param_4;
      *(longlong *)(param_1 + 8) = ((longlong)puVar5 - param_4) + -1;
      *param_1 = 5;
      return;
    }
  }
LAB_ram_000141c0:
  *param_1 = 7;
  return;
}
