/* Function: entrypoint
 * Address:  0x2f08
 * Source:   humidifi_decompiled_renamed.c
 */

/* ---- entrypoint @ 0x2f08 ---- */

/* Receives raw transaction data as argument.
   Generally the entrypoint! macro takes care of deserializing this data and
   calls the user-supplied process_instruction on it.
   Function calls are usually in this order:
   - entrypoint::deserialize()
   - instruction_data.as_slice()
   - process_instruction()
   Function signatures for deserialize/process_instruction can be found under
   the SOLANA category in the DataType manager. They need to be applied
   manually via right click, edit, copy the signature and paste it into
   function signature.
    */

ulonglong entrypoint(u64 *__return_storage_ptr__,u8 *transaction_data)

{
  byte bVar1;
  bool bVar2;
  u64 *puVar3;
  int iVar4;
  ulonglong in_R0;
  u64 *puVar5;
  u64 **ppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  u64 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uStack_888;
  uint uStack_884;
  uint uStack_880;
  uint uStack_87c;
  uint uStack_878;
  uint uStack_874;
  uint uStack_870;
  uint uStack_86c;
  uint uStack_868;
  uint uStack_864;
  uint uStack_860;
  uint uStack_85c;
  uint uStack_858;
  uint uStack_854;
  uint uStack_850;
  uint uStack_84c;
  uint uStack_848;
  uint uStack_844;
  uint uStack_840;
  uint uStack_83c;
  uint uStack_838;
  uint uStack_834;
  u64 *apuStack_830 [2];
  longlong lStack_820;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined *puStack_30;
  u64 uStack_28;
  u64 uStack_20;
  u64 uStack_18;
  undefined8 uStack_10;
  
  if ((*__return_storage_ptr__ == 3) &&
     (*(char *)((longlong)__return_storage_ptr__ + 0x2f29) == '\x01')) {
    if ((__return_storage_ptr__[0x5e6] != __return_storage_ptr__[0x4c]) ||
       (((__return_storage_ptr__[0x5e7] != __return_storage_ptr__[0x4d] ||
         (__return_storage_ptr__[0x5e8] != __return_storage_ptr__[0x4e])) ||
        (__return_storage_ptr__[0x5e9] != __return_storage_ptr__[0x4f])))) {
      return 0xabad1dea;
    }
    if ((__return_storage_ptr__[0x1006] ^ 0x6e9de2b30b19f9ea) <=
        (__return_storage_ptr__[0x57] ^ 0x6e9de2b30b19f9ea)) {
      return 0xdead;
    }
    if (__return_storage_ptr__[0xafc] <= (__return_storage_ptr__[0x1008] ^ 0x6edde0930b59ebea)) {
      __return_storage_ptr__[0x59] = __return_storage_ptr__[0xafc] ^ 0x6e9de2b30b19f1ea;
      __return_storage_ptr__[0x54] = __return_storage_ptr__[0x1003];
      __return_storage_ptr__[0x55] = __return_storage_ptr__[0x1004];
      __return_storage_ptr__[0x56] = __return_storage_ptr__[0x1005];
      __return_storage_ptr__[0x57] = __return_storage_ptr__[0x1006];
      __return_storage_ptr__[0x58] = __return_storage_ptr__[0x1007];
      __return_storage_ptr__[0x65] = __return_storage_ptr__[0x1009];
      __return_storage_ptr__[0x70] = __return_storage_ptr__[0x100a];
      return in_R0;
    }
    return 0xdeadc0de;
  }
  puVar5 = __return_storage_ptr__ + 1;
  uVar14 = *__return_storage_ptr__;
  if (uVar14 != 0) {
    apuStack_830[0] = puVar5;
    puVar5 = (u64 *)((longlong)__return_storage_ptr__ + __return_storage_ptr__[0xb] + 0x286f &
                    0xfffffffffffffff8);
    if (uVar14 == 2) {
      apuStack_830[1] = puVar5;
      if ((ulonglong)(byte)*puVar5 == 0xff) goto LAB_ram_00003658;
      apuStack_830[1] = apuStack_830[(byte)*puVar5];
      puVar5 = puVar5 + 1;
    }
    else if (uVar14 != 1) {
      ppuVar6 = apuStack_830;
      uVar8 = uVar14;
      if (5 < uVar14) {
        ppuVar6 = apuStack_830;
        do {
          while ((ulonglong)(byte)*puVar5 != 0xff) {
            ppuVar6[1] = apuStack_830[(byte)*puVar5];
            puVar5 = puVar5 + 1;
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 != 0xff) goto LAB_ram_00003260;
LAB_ram_00003330:
            ppuVar6[2] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 == 0xff) goto LAB_ram_00003368;
LAB_ram_000032a8:
            ppuVar6[3] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 == 0xff) goto LAB_ram_00003180;
LAB_ram_000033a0:
            ppuVar6[4] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar11 = (ulonglong)(byte)*puVar5;
            if (uVar11 == 0xff) goto LAB_ram_000033f0;
LAB_ram_000031c0:
            ppuVar6 = ppuVar6 + 5;
            *ppuVar6 = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar8 = uVar8 - 5;
            if (uVar8 < 6) goto LAB_ram_00003428;
          }
          ppuVar6[1] = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 == 0xff) goto LAB_ram_00003330;
LAB_ram_00003260:
          ppuVar6[2] = apuStack_830[uVar11];
          puVar5 = puVar5 + 1;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 != 0xff) goto LAB_ram_000032a8;
LAB_ram_00003368:
          ppuVar6[3] = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 != 0xff) goto LAB_ram_000033a0;
LAB_ram_00003180:
          ppuVar6[4] = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar11 = (ulonglong)(byte)*puVar5;
          if (uVar11 != 0xff) goto LAB_ram_000031c0;
LAB_ram_000033f0:
          ppuVar6 = ppuVar6 + 5;
          *ppuVar6 = puVar5;
          puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8)
          ;
          uVar8 = uVar8 - 5;
        } while (5 < uVar8);
      }
LAB_ram_00003428:
      if (uVar8 < 4) {
        if (uVar8 == 3) {
          if ((ulonglong)(byte)*puVar5 == 0xff) {
            ppuVar6[1] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            bVar1 = (byte)*puVar5;
          }
          else {
            ppuVar6[1] = apuStack_830[(byte)*puVar5];
            puVar5 = puVar5 + 1;
            bVar1 = (byte)*puVar5;
          }
          if ((ulonglong)bVar1 == 0xff) {
            ppuVar6[2] = puVar5;
            goto LAB_ram_00003658;
          }
          ppuVar6[2] = apuStack_830[bVar1];
          puVar5 = puVar5 + 1;
        }
        else if (1 < uVar8) {
          if ((ulonglong)(byte)*puVar5 == 0xff) {
            ppuVar6[1] = puVar5;
            goto LAB_ram_00003658;
          }
          ppuVar6[1] = apuStack_830[(byte)*puVar5];
          puVar5 = puVar5 + 1;
        }
      }
      else {
        uVar11 = (ulonglong)(byte)*puVar5;
        if (uVar8 == 5) {
          if (uVar11 == 0xff) {
            ppuVar6[1] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 == 0xff) goto LAB_ram_00004aa0;
LAB_ram_00003490:
            ppuVar6[2] = apuStack_830[uVar8];
            puVar5 = puVar5 + 1;
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 != 0xff) goto LAB_ram_000034d8;
LAB_ram_00004ad8:
            ppuVar6[3] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            bVar1 = (byte)*puVar5;
          }
          else {
            ppuVar6[1] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 != 0xff) goto LAB_ram_00003490;
LAB_ram_00004aa0:
            ppuVar6[2] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 == 0xff) goto LAB_ram_00004ad8;
LAB_ram_000034d8:
            ppuVar6[3] = apuStack_830[uVar8];
            puVar5 = puVar5 + 1;
            bVar1 = (byte)*puVar5;
          }
          if ((ulonglong)bVar1 != 0xff) {
            ppuVar6[4] = apuStack_830[bVar1];
            puVar5 = puVar5 + 1;
            goto LAB_ram_00003678;
          }
          ppuVar6[4] = puVar5;
        }
        else {
          if (uVar11 == 0xff) {
            ppuVar6[1] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 == 0xff) goto LAB_ram_00004ba0;
LAB_ram_00003eb0:
            ppuVar6[2] = apuStack_830[uVar8];
            puVar5 = puVar5 + 1;
            bVar1 = (byte)*puVar5;
          }
          else {
            ppuVar6[1] = apuStack_830[uVar11];
            puVar5 = puVar5 + 1;
            uVar8 = (ulonglong)(byte)*puVar5;
            if (uVar8 != 0xff) goto LAB_ram_00003eb0;
LAB_ram_00004ba0:
            ppuVar6[2] = puVar5;
            puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) &
                            0xfffffffffffffff8);
            bVar1 = (byte)*puVar5;
          }
          if ((ulonglong)bVar1 != 0xff) {
            ppuVar6[3] = apuStack_830[bVar1];
            puVar5 = puVar5 + 1;
            goto LAB_ram_00003678;
          }
          ppuVar6[3] = puVar5;
        }
LAB_ram_00003658:
        puVar5 = (u64 *)((ulonglong)((longlong)puVar5 + puVar5[10] + 0x2867) & 0xfffffffffffffff8);
      }
    }
  }
LAB_ram_00003678:
  uVar8 = 0xbadc0de;
  uVar12 = *puVar5;
  if (uVar12 == 0) goto LAB_ram_00007720;
  puVar18 = puVar5 + 1;
  uVar16 = uVar12 - 1;
  uVar11 = ((ulonglong)*(byte *)((longlong)puVar18 + uVar16) ^ uVar16 >> 3 ^ 0x3a) & 0xff;
  if (0x17 < uVar11) {
    uVar11 = 0x18;
  }
  pbVar9 = (byte *)((longlong)puVar18 + uVar12);
  if (uVar11 < 0xd) {
    if (uVar11 < 6) {
      if (uVar11 < 3) {
        if (uVar11 == 0) {
          if (((*(longlong *)pbVar9 != -0x16a608d8d48b0286) ||
              (*(longlong *)(pbVar9 + 8) != 0x7a819dd33c7070c6)) ||
             ((*(longlong *)(pbVar9 + 0x10) != 0x6dd2523bce0a93a0 ||
              (bVar2 = false, *(longlong *)(pbVar9 + 0x18) != -0x2c4478dc22ab5fac)))) {
            bVar2 = true;
          }
          uVar8 = 0xdefaced;
          if (bVar2) goto LAB_ram_00007720;
          fn_1cd8__sol_memcpy(puVar18,uVar16);
          fn_9700(&uStack_888,apuStack_830,uVar14,puVar18,uVar16);
          uVar8 = (ulonglong)uStack_884;
          uVar17 = uStack_888;
        }
        else {
          if (uVar11 != 2) goto LAB_ram_00007888;
          uVar8 = uVar16 & 0xfffffffffffffff8;
          uVar11 = 0;
          if (uVar8 != 0) {
            lVar7 = -uVar8;
            puVar13 = puVar18;
            do {
              *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
              uVar11 = uVar11 + 0x1000100010001;
              puVar13 = puVar13 + 1;
              lVar7 = lVar7 + 8;
            } while (lVar7 != 0);
          }
          puStack_30 = (undefined *)0x0;
          fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
          puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
          fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
          fn_7ab8(&uStack_880,apuStack_830,uVar14,puVar18,uVar16);
          uVar8 = (ulonglong)uStack_87c;
          uVar17 = uStack_880;
        }
      }
      else if (uVar11 == 3) {
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_8068__sol_memcmp(&uStack_878,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_874;
        uVar17 = uStack_878;
      }
      else if (uVar11 == 4) {
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        uVar8 = 0xbadc0de;
        uVar17 = 0;
        if (8 < uVar14) {
          if (uVar16 != 0x18) goto LAB_ram_000071d0;
          if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
          puStack_30 = (undefined *)0x0;
          fn_db48(&uStack_870,apuStack_830,uVar14,uStack_800);
          uVar8 = (ulonglong)uStack_86c;
          uVar17 = uStack_870;
        }
      }
      else {
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_11c18(&uStack_868,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_864;
        uVar17 = uStack_868;
      }
    }
    else if (uVar11 < 9) {
      if (uVar11 == 6) {
        uVar17 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        puVar3 = apuStack_830[1];
        puVar5 = apuStack_830[0];
        uVar8 = 0xbadc0de;
        if (uVar14 == 2) {
          fn_52a8(apuStack_830[1] + 5,&DAT_ram_00031900,0x20,&puStack_30);
          iVar4 = (int)puStack_30;
          uStack_18 = puVar3[0x4e];
          uStack_20 = puVar3[0x4d];
          uStack_28 = puVar3[0x4c];
          puStack_30 = (undefined *)puVar3[0x4b];
          if (puVar3[0xe2] < 5) {
            uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
            puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
            uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
            uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
          }
          uVar14 = (longlong)puStack_30 << 0x38 | ((ulonglong)puStack_30 & 0xff00) << 0x28 |
                   ((ulonglong)puStack_30 & 0xff0000) << 0x18 |
                   ((ulonglong)puStack_30 & 0xff000000) << 8 |
                   (ulonglong)puStack_30 >> 8 & 0xff000000 |
                   (ulonglong)puStack_30 >> 0x18 & 0xff0000 | (ulonglong)puStack_30 >> 0x28 & 0xff00
                   | (ulonglong)puStack_30 >> 0x38;
          uVar8 = puVar5[1];
          uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                  (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                  uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
          if (uVar14 == uVar8) {
            uVar14 = uStack_28 << 0x38 | (uStack_28 & 0xff00) << 0x28 |
                     (uStack_28 & 0xff0000) << 0x18 | (uStack_28 & 0xff000000) << 8 |
                     uStack_28 >> 8 & 0xff000000 | uStack_28 >> 0x18 & 0xff0000 |
                     uStack_28 >> 0x28 & 0xff00 | uStack_28 >> 0x38;
            uVar8 = puVar5[2];
            uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                    uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
            if (uVar14 != uVar8) goto LAB_ram_00005578;
            uVar14 = uStack_20 << 0x38 | (uStack_20 & 0xff00) << 0x28 |
                     (uStack_20 & 0xff0000) << 0x18 | (uStack_20 & 0xff000000) << 8 |
                     uStack_20 >> 8 & 0xff000000 | uStack_20 >> 0x18 & 0xff0000 |
                     uStack_20 >> 0x28 & 0xff00 | uStack_20 >> 0x38;
            uVar8 = puVar5[3];
            uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                    uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
            if (uVar14 != uVar8) goto LAB_ram_00005578;
            iVar10 = 0;
            uVar14 = uStack_18 << 0x38 | (uStack_18 & 0xff00) << 0x28 |
                     (uStack_18 & 0xff0000) << 0x18 | (uStack_18 & 0xff000000) << 8 |
                     uStack_18 >> 8 & 0xff000000 | uStack_18 >> 0x18 & 0xff0000 |
                     uStack_18 >> 0x28 & 0xff00 | uStack_18 >> 0x38;
            uVar8 = puVar5[4];
            uVar8 = uVar8 << 0x38 | (uVar8 & 0xff00) << 0x28 | (uVar8 & 0xff0000) << 0x18 |
                    (uVar8 & 0xff000000) << 8 | uVar8 >> 8 & 0xff000000 | uVar8 >> 0x18 & 0xff0000 |
                    uVar8 >> 0x28 & 0xff00 | uVar8 >> 0x38;
            if (uVar14 != uVar8) goto LAB_ram_00005578;
          }
          else {
LAB_ram_00005578:
            iVar10 = -1;
            if (uVar8 <= uVar14) {
              iVar10 = 1;
            }
          }
          uVar8 = 0xabad1dea;
          if ((*(byte *)((longlong)puVar5 + 1) != 0) && (iVar10 == 0 && iVar4 == 0)) {
            puVar3[0x56] = 0x6e9de2b30b19f9ea;
            goto LAB_ram_00007068;
          }
        }
      }
      else {
        if (uVar11 != 7) {
          fn_1cd8__sol_memcpy(puVar18,uVar16);
          puStack_30 = &DAT_ram_000329c0;
          uStack_10 = 0;
          uStack_28 = 1;
          uStack_18 = 0;
          uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
          fn_2de88__custom_panic(&puStack_30,&DAT_ram_000329e8);
        }
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_124a8__custom_panic(&uStack_860,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_85c;
        uVar17 = uStack_860;
      }
    }
    else if (uVar11 < 0xb) {
      if (uVar11 == 9) {
        uVar11 = 0;
        uVar8 = uVar16 & 0xfffffffffffffff8;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        fn_12a18(&uStack_858,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_854;
        uVar17 = uStack_858;
      }
      else {
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        uVar8 = 0xbadc0de;
        if ((uVar14 != 3) || (uVar16 != 0x40)) goto LAB_ram_00007448;
        uVar14 = *(ulonglong *)(lStack_820 + 0x58);
        uStack_18 = apuStack_830[1][0x4e];
        uStack_20 = apuStack_830[1][0x4d];
        uStack_28 = apuStack_830[1][0x4c];
        puStack_30 = (undefined *)apuStack_830[1][0x4b];
        uVar17 = 0;
        if (apuStack_830[1][0xe2] < 5) {
          uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
          puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
          uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
          uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
        }
        if ((((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2]))
            || (uStack_20 != apuStack_830[0][3])) ||
           (bVar2 = false, uStack_18 != apuStack_830[0][4])) {
          bVar2 = true;
        }
        uVar8 = 0xabad1dea;
        if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
          uVar11 = puVar5[4];
          if (uVar11 < (apuStack_830[1][0x56] ^ 0x6e9de2b30b19f9ea)) goto LAB_ram_00007410;
          uVar8 = 0xdeadc0de;
          if (uVar14 <= puVar5[6]) {
            uVar16 = puVar5[1];
            apuStack_830[1][0x54] = puVar5[2] ^ 0x46a912eb23798bd9;
            apuStack_830[1][0x53] = uVar16 ^ 0xb957ed15dc877426;
            uVar16 = puVar5[3];
            apuStack_830[1][0x56] = uVar11 ^ 0x6e9de2b30b19f9ea;
            apuStack_830[1][0x55] = uVar16 ^ 0x6e9de2b30b19f9ea;
            uVar11 = puVar5[5];
            apuStack_830[1][0x58] = uVar14 ^ 0x6e9de2b30b19f1ea;
            apuStack_830[1][0x57] = uVar11 ^ 0x6e9de2b30b19f1ea;
            apuStack_830[1][100] = puVar5[7] ^ 0xd3198133b7c1776c;
            apuStack_830[1][0x6f] = puVar5[8] ^ 0x504156a22548f8dd;
            goto LAB_ram_00007068;
          }
        }
      }
    }
    else {
      if (uVar11 != 0xb) {
        fn_1cd8__sol_memcpy(puVar18,uVar16);
        puStack_30 = &DAT_ram_000329c0;
        uStack_10 = 0;
        uStack_28 = 1;
        uStack_18 = 0;
        uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_30,&DAT_ram_00032a00);
      }
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      if (uVar14 != 2) goto LAB_ram_00007448;
      if (uVar16 != 8) goto LAB_ram_000071d0;
      uVar17 = 0;
      if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
      uStack_18 = apuStack_830[1][0x4e];
      uStack_20 = apuStack_830[1][0x4d];
      uStack_28 = apuStack_830[1][0x4c];
      puStack_30 = (undefined *)apuStack_830[1][0x4b];
      if (apuStack_830[1][0xe2] < 5) {
        uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
        puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
        uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
        uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
      }
      if ((((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2])) ||
          (uStack_20 != apuStack_830[0][3])) || (bVar2 = false, uStack_18 != apuStack_830[0][4])) {
        bVar2 = true;
      }
      uVar8 = 0xabad1dea;
      if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
        apuStack_830[1][0x6f] = *puVar18 ^ 0x504156a22548f8dd;
        uVar8 = 0xbad4;
        if (apuStack_830[1][0xe2] == 2) {
          apuStack_830[1][0xe2] = 4;
          goto LAB_ram_00007068;
        }
      }
    }
  }
  else if (uVar11 < 0x13) {
    if (uVar11 < 0x10) {
      if (uVar11 == 0xd) {
        uVar17 = 0;
        if ((uVar14 == 3) && (uVar16 == 0x40)) {
          uVar14 = *(ulonglong *)(lStack_820 + 0x58);
          uStack_18 = apuStack_830[1][0x4e];
          uStack_20 = apuStack_830[1][0x4d];
          uStack_28 = apuStack_830[1][0x4c];
          puStack_30 = (undefined *)apuStack_830[1][0x4b];
          if (apuStack_830[1][0xe2] < 5) {
            uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
            puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
            uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
            uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
          }
          if (((puStack_30 != (undefined *)__return_storage_ptr__[2]) ||
              (uStack_28 != __return_storage_ptr__[3])) ||
             ((uStack_20 != __return_storage_ptr__[4] ||
              (bVar2 = false, uStack_18 != __return_storage_ptr__[5])))) {
            bVar2 = true;
          }
          uVar8 = 0xabad1dea;
          if ((*(char *)((longlong)__return_storage_ptr__ + 9) != '\0') && (!bVar2)) {
            uVar11 = puVar5[4];
            if ((uVar11 ^ 0x6e9de2b30b19f9ea) < (apuStack_830[1][0x56] ^ 0x6e9de2b30b19f9ea)) {
LAB_ram_00007410:
              uVar17 = 0;
              uVar8 = 0xdead;
            }
            else {
              uVar8 = puVar5[6];
              puVar5[6] = uVar8 ^ 0x6edde0930b59ebea;
              if (uVar14 <= (uVar8 ^ 0x6edde0930b59ebea)) {
                uVar12 = puVar5[1];
                uVar8 = puVar5[2];
                apuStack_830[1][0x54] = uVar8;
                apuStack_830[1][0x53] = uVar12;
                uVar12 = puVar5[3];
                apuStack_830[1][0x56] = uVar11;
                apuStack_830[1][0x55] = uVar12;
                apuStack_830[1][0x57] = puVar5[5];
                apuStack_830[1][100] = puVar5[7];
                uVar12 = puVar5[8];
                apuStack_830[1][0x58] = uVar14 ^ 0x6e9de2b30b19f1ea;
                apuStack_830[1][0x6f] = uVar12;
                goto LAB_ram_00007068;
              }
              uVar8 = 0xdeadc0de;
            }
          }
        }
      }
      else if (uVar11 == 0xe) {
        if ((((*(longlong *)pbVar9 != -0x16a608d8d48b0286) ||
             (*(longlong *)(pbVar9 + 8) != 0x7a819dd33c7070c6)) ||
            (*(longlong *)(pbVar9 + 0x10) != 0x6dd2523bce0a93a0)) ||
           (bVar2 = false, *(longlong *)(pbVar9 + 0x18) != -0x2c4478dc22ab5fac)) {
          bVar2 = true;
        }
        uVar8 = 0xdefaced;
        if (bVar2) goto LAB_ram_00007720;
        fn_1cd8__sol_memcpy(puVar18,uVar16);
        fn_a740(&uStack_850,apuStack_830,uVar14,puVar18,uVar16);
        uVar8 = (ulonglong)uStack_84c;
        uVar17 = uStack_850;
      }
      else {
        uVar8 = uVar16 & 0xfffffffffffffff8;
        uVar11 = 0;
        if (uVar8 != 0) {
          lVar7 = -uVar8;
          puVar13 = puVar18;
          do {
            *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
            uVar11 = uVar11 + 0x1000100010001;
            puVar13 = puVar13 + 1;
            lVar7 = lVar7 + 8;
          } while (lVar7 != 0);
        }
        puStack_30 = (undefined *)0x0;
        fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
        puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
        fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
        uVar8 = 0xbadc0de1;
        if (uVar14 < 0xc) goto LAB_ram_00007448;
        uVar8 = 0xbadc0ded;
        uVar17 = 0;
        if (uVar16 == 0x18) {
          if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
          fn_f8d0(&uStack_848,apuStack_830,uVar14,puVar5[1]);
          uVar8 = (ulonglong)uStack_844;
          uVar17 = uStack_848;
        }
      }
    }
    else if (uVar11 == 0x10) {
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      uVar17 = 0;
      if (9 < uVar14) {
        if (uVar16 != 0x18) goto LAB_ram_000071d0;
        if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
        uStack_20 = 3;
        uStack_28 = 3;
        if (*(byte *)((longlong)puVar5 + 0x1a) != 1) {
          uStack_20 = 0;
          uStack_28 = (u64)*(byte *)((longlong)puVar5 + 0x19);
        }
        uStack_18 = (u64)*(byte *)((longlong)puVar5 + 0x1a);
        puStack_30 = (undefined *)0x1;
        fn_db48(&uStack_840,apuStack_830,uVar14,uStack_7f8);
        uVar8 = (ulonglong)uStack_83c;
        uVar17 = uStack_840;
      }
    }
    else {
      if (uVar11 != 0x12) {
        fn_2deb8__custom_panic("internal error: entered unreachable code",0x28,&DAT_ram_00032a18);
LAB_ram_00007888:
        fn_1cd8__sol_memcpy(puVar18,uVar16);
        puStack_30 = &DAT_ram_000329c0;
        uStack_10 = 0;
        uStack_28 = 1;
        uStack_18 = 0;
        uStack_20 = 8;
                    /* WARNING: Subroutine does not return */
        fn_2de88__custom_panic(&puStack_30,&DAT_ram_000329d0);
      }
      uVar17 = 0;
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      if (uVar14 == 2) {
        uStack_18 = apuStack_830[1][0x4e];
        uStack_20 = apuStack_830[1][0x4d];
        uStack_28 = apuStack_830[1][0x4c];
        puStack_30 = (undefined *)apuStack_830[1][0x4b];
        if (apuStack_830[1][0xe2] < 5) {
          uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
          puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
          uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
          uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
        }
        if (((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2]))
           || ((uStack_20 != apuStack_830[0][3] || (bVar2 = false, uStack_18 != apuStack_830[0][4]))
              )) {
          bVar2 = true;
        }
        uVar8 = 0xabad1dea;
        if (((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) &&
           (uVar8 = 0xbad4, apuStack_830[1][0xe2] == 4)) {
          apuStack_830[1][0x4b] = apuStack_830[1][0x4b] ^ 0xfb5ce87aae443c38;
          apuStack_830[1][0x4c] = apuStack_830[1][0x4c] ^ 0x4a2178451bac3c7;
          apuStack_830[1][0x4d] = apuStack_830[1][0x4d] ^ 0x4a1178751b9c3c6;
          apuStack_830[1][0x4e] = apuStack_830[1][0x4e] ^ 0x4a0178651b8c3c5;
          apuStack_830[1][0xe2] = 5;
          goto LAB_ram_00007068;
        }
      }
    }
  }
  else if (uVar11 < 0x16) {
    if (uVar11 == 0x13) {
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      uVar8 = 0xbadc0de;
      if (uVar14 == 2) {
        if (uVar16 != 0x10) {
LAB_ram_000071d0:
                    /* WARNING: Subroutine does not return */
          fn_1090__custom_panic(&DAT_ram_00031bdf,10,2);
        }
        uVar17 = 0;
        if (((ulonglong)puVar18 & 7) != 0) {
LAB_ram_000071f8:
                    /* WARNING: Subroutine does not return */
          fn_1090__custom_panic(&DAT_ram_00031bdf,10,0);
        }
        uStack_18 = apuStack_830[1][0x4e];
        uStack_20 = apuStack_830[1][0x4d];
        uStack_28 = apuStack_830[1][0x4c];
        puStack_30 = (undefined *)apuStack_830[1][0x4b];
        if (apuStack_830[1][0xe2] < 5) {
          uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
          puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
          uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
          uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
        }
        if (((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2]))
           || ((uStack_20 != apuStack_830[0][3] || (bVar2 = false, uStack_18 != apuStack_830[0][4]))
              )) {
          bVar2 = true;
        }
        uVar8 = 0xabad1dea;
        if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
          apuStack_830[1][0x70] = puVar5[1] ^ 0x35f72d643d3464eb;
          apuStack_830[1][0x71] = puVar5[2] ^ 0x9578e14d1d0d9c4e;
          uVar8 = 0xbad4;
          if (apuStack_830[1][0xe2] == 5) {
            apuStack_830[1][0xe2] = 6;
            goto LAB_ram_00007068;
          }
        }
      }
      else {
LAB_ram_00007448:
        uVar17 = 0;
      }
    }
    else if (uVar11 == 0x14) {
      uVar11 = 0;
      uVar8 = uVar16 & 0xfffffffffffffff8;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      fn_113b8__custom_panic(&uStack_838,apuStack_830,uVar14,puVar18,uVar16);
      uVar8 = (ulonglong)uStack_834;
      uVar17 = uStack_838;
    }
    else {
      uVar8 = uVar16 & 0xfffffffffffffff8;
      uVar11 = 0;
      if (uVar8 != 0) {
        lVar7 = -uVar8;
        puVar13 = puVar18;
        do {
          *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
          uVar11 = uVar11 + 0x1000100010001;
          puVar13 = puVar13 + 1;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      puStack_30 = (undefined *)0x0;
      fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
      puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
      fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
      puVar3 = apuStack_830[1];
      uVar8 = 0xbadc0de;
      if (uVar14 != 2) goto LAB_ram_00007448;
      if (uVar16 != 0x50) goto LAB_ram_000071d0;
      uVar17 = 0;
      if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
      uStack_18 = apuStack_830[1][0x4e];
      uStack_20 = apuStack_830[1][0x4d];
      uStack_28 = apuStack_830[1][0x4c];
      puStack_30 = (undefined *)apuStack_830[1][0x4b];
      uVar14 = apuStack_830[1][0xe2];
      if (uVar14 < 5) {
        uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
        puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
        uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
        uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
      }
      if ((((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2])) ||
          (uStack_20 != apuStack_830[0][3])) || (bVar2 = false, uStack_18 != apuStack_830[0][4])) {
        bVar2 = true;
      }
      uVar8 = 0xabad1dea;
      if ((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) {
        uVar8 = 0xbadc0df1;
        if (puVar5[2] < 0x7a121) {
          if ((((puVar5[1] < puVar5[3]) || (puVar5[2] < puVar5[4])) ||
              ((puVar5[3] < puVar5[5] ||
               (((puVar5[4] < puVar5[6] || (puVar5[5] < puVar5[7])) || (puVar5[6] < puVar5[8]))))))
             || ((puVar5[7] < puVar5[9] || (puVar5[8] < puVar5[10])))) {
            uVar8 = 0xbadc0df0;
          }
          else if (puVar5[10] == 0) {
            fn_2fe08__sol_memcpy(apuStack_830[1] + 0x72,puVar18,0x50);
            uVar8 = puVar3[0x73] ^ 0x9aa8843b60a9bf;
            puVar3[0x72] = puVar3[0x72] ^ 0xff64577ac49fae40;
            puVar3[0x73] = uVar8;
            puVar3[0x74] = puVar3[0x74] ^ 0x99a8873b61a9be;
            puVar3[0x75] = puVar3[0x75] ^ 0x98a8863b62a9bd;
            puVar3[0x76] = puVar3[0x76] ^ 0x9fa8813b63a9bc;
            puVar3[0x77] = puVar3[0x77] ^ 0x9ea8803b64a9bb;
            puVar3[0x78] = puVar3[0x78] ^ 0x9da8833b65a9ba;
            puVar3[0x79] = puVar3[0x79] ^ 0x9ca8823b66a9b9;
            puVar3[0x7a] = puVar3[0x7a] ^ 0x93a88d3b67a9b8;
            puVar3[0x7b] = puVar3[0x7b] ^ 0x92a88c3b68a9b7;
            if (uVar14 == 6) {
              puVar3[0xe2] = 7;
            }
            else if (uVar14 < 6) {
              uVar8 = 0xbad4;
              goto LAB_ram_00007448;
            }
            goto LAB_ram_00007068;
          }
        }
      }
    }
  }
  else if (uVar11 == 0x16) {
    uVar8 = uVar16 & 0xfffffffffffffff8;
    uVar11 = 0;
    if (uVar8 != 0) {
      lVar7 = -uVar8;
      puVar13 = puVar18;
      do {
        *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
        uVar11 = uVar11 + 0x1000100010001;
        puVar13 = puVar13 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    puStack_30 = (undefined *)0x0;
    fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
    puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
    fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
    uVar8 = 0xbadc0de;
    if (uVar14 != 2) goto LAB_ram_00007448;
    if (uVar16 != 0x30) goto LAB_ram_000071d0;
    uVar17 = 0;
    if (((ulonglong)puVar18 & 7) != 0) goto LAB_ram_000071f8;
    uStack_18 = apuStack_830[1][0x4e];
    uStack_20 = apuStack_830[1][0x4d];
    uStack_28 = apuStack_830[1][0x4c];
    puStack_30 = (undefined *)apuStack_830[1][0x4b];
    uVar14 = apuStack_830[1][0xe2];
    if (uVar14 < 5) {
      uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
      puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
      uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
      uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
    }
    if (((puStack_30 != (undefined *)apuStack_830[0][1]) || (uStack_28 != apuStack_830[0][2])) ||
       ((uStack_20 != apuStack_830[0][3] || (bVar2 = false, uStack_18 != apuStack_830[0][4])))) {
      bVar2 = true;
    }
    uVar8 = 0xabad1dea;
    if (((*(byte *)((longlong)apuStack_830[0] + 1) != 0) && (!bVar2)) &&
       (uVar8 = 0xbad4, 6 < uVar14)) {
      if ((((*puVar18 != 0) || (puVar5[2] != 0)) || (puVar5[3] != 0)) || (puVar5[4] != 0)) {
        uVar11 = puVar5[3];
        apuStack_830[1][0x7e] = uVar11;
        uVar16 = puVar5[2];
        apuStack_830[1][0x7d] = uVar16;
        uVar8 = *puVar18;
        apuStack_830[1][0x7c] = uVar8;
        uVar8 = uVar8 ^ 0xfb5ce87aae443c38;
        uVar15 = puVar5[4];
        apuStack_830[1][0x7c] = uVar8;
        apuStack_830[1][0x7d] = uVar16 ^ 0x4a2178451bac3c7;
        apuStack_830[1][0x7e] = uVar11 ^ 0x4a1178751b9c3c6;
        apuStack_830[1][0x7f] = uVar15;
        apuStack_830[1][0x7f] = uVar15 ^ 0x4a0178651b8c3c5;
        apuStack_830[1][0x80] = puVar5[5] ^ 0xcf44133cb352d91c;
        if ((byte)puVar5[6] != 0) {
          pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x289);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          *(byte *)(apuStack_830[1] + 0x51) = 2;
          pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x28c);
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          apuStack_830[1][0x51] = apuStack_830[1][0x51] ^ 0xf539f2cf9513d4a1;
        }
        if (uVar14 == 7) {
          apuStack_830[1][0xe2] = 8;
        }
        goto LAB_ram_00007068;
      }
LAB_ram_00007190:
      uVar17 = 0;
      uVar8 = 0xbadc0df2;
    }
  }
  else {
    if (uVar11 != 0x17) goto LAB_ram_00007720;
    uVar8 = uVar16 & 0xfffffffffffffff8;
    uVar11 = 0;
    if (uVar8 != 0) {
      lVar7 = -uVar8;
      puVar13 = puVar18;
      do {
        *puVar13 = uVar11 ^ *puVar13 ^ 0xc3ebbae2ff2fff3a;
        uVar11 = uVar11 + 0x1000100010001;
        puVar13 = puVar13 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    puStack_30 = (undefined *)0x0;
    fn_2fe08__sol_memcpy(&puStack_30,(byte *)((longlong)puVar18 + uVar8),uVar16 & 7);
    puStack_30 = (undefined *)(uVar11 ^ (ulonglong)puStack_30 ^ 0xc3ebbae2ff2fff3a);
    fn_2fe08__sol_memcpy((byte *)((longlong)puVar18 + uVar8),&puStack_30,uVar16 & 7);
    uVar8 = 0xbadc0de;
    if (uVar14 != 2) goto LAB_ram_00007448;
    if (uVar16 != 8) goto LAB_ram_000071d0;
    uStack_18 = apuStack_830[1][0x4e];
    uStack_20 = apuStack_830[1][0x4d];
    uStack_28 = apuStack_830[1][0x4c];
    puStack_30 = (undefined *)apuStack_830[1][0x4b];
    uVar17 = 0;
    if (apuStack_830[1][0xe2] < 5) {
      uStack_28 = uStack_28 ^ 0x4a2178451bac3c7;
      puStack_30 = (undefined *)((ulonglong)puStack_30 ^ 0xfb5ce87aae443c38);
      uStack_20 = uStack_20 ^ 0x4a1178751b9c3c6;
      uStack_18 = uStack_18 ^ 0x4a0178651b8c3c5;
    }
    if (((puStack_30 != (undefined *)__return_storage_ptr__[2]) ||
        (uStack_28 != __return_storage_ptr__[3])) ||
       ((uStack_20 != __return_storage_ptr__[4] ||
        (bVar2 = false, uStack_18 != __return_storage_ptr__[5])))) {
      bVar2 = true;
    }
    uVar8 = 0xabad1dea;
    if ((*(char *)((longlong)__return_storage_ptr__ + 9) == '\0') || (bVar2)) goto LAB_ram_00007450;
    bVar1 = (byte)*puVar18;
    if (1 < bVar1) {
      uVar8 = 0xbadc0de9;
      if ((bVar1 != 2) || (uVar8 = 0xbad4, apuStack_830[1][0xe2] < 8)) goto LAB_ram_00007450;
      uVar8 = apuStack_830[1][0x7d] ^ 0x4a2178451bac3c7;
      if ((apuStack_830[1][0x7c] == 0xfb5ce87aae443c38) &&
         (((uVar8 == 0 && (apuStack_830[1][0x7e] == 0x4a1178751b9c3c6)) &&
          (apuStack_830[1][0x7f] == 0x4a0178651b8c3c5)))) goto LAB_ram_00007190;
    }
    *(byte *)(apuStack_830[1] + 0x51) = bVar1;
    pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x289);
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9 = (byte *)((longlong)apuStack_830[1] + 0x28c);
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    apuStack_830[1][0x51] = apuStack_830[1][0x51] ^ 0xf539f2cf9513d4a1;
LAB_ram_00007068:
    uVar17 = 0x1a;
  }
LAB_ram_00007450:
  if (0xc < uVar17) {
    if (0x13 < uVar17) {
      if (uVar17 < 0x17) {
        if (uVar17 == 0x14) {
          return 0x1500000000;
        }
        if (uVar17 == 0x15) {
          return 0x1600000000;
        }
        return 0x1700000000;
      }
      if (0x18 < uVar17) {
        if (uVar17 != 0x19) {
          return 0;
        }
        return 0x1a00000000;
      }
      if (uVar17 == 0x17) {
        return 0x1800000000;
      }
      return 0x1900000000;
    }
    if (uVar17 < 0x10) {
      if (uVar17 == 0xd) {
        return 0xe00000000;
      }
      if (uVar17 == 0xe) {
        return 0xf00000000;
      }
      return 0x1000000000;
    }
    if (0x11 < uVar17) {
      if (uVar17 == 0x12) {
        return 0x1300000000;
      }
      return 0x1400000000;
    }
    if (uVar17 == 0x10) {
      return 0x1100000000;
    }
    return 0x1200000000;
  }
  if (5 < uVar17) {
    if (uVar17 < 9) {
      if (uVar17 == 6) {
        return 0x700000000;
      }
      if (uVar17 == 7) {
        return 0x800000000;
      }
      return 0x900000000;
    }
    if (10 < uVar17) {
      if (uVar17 == 0xb) {
        return 0xc00000000;
      }
      return 0xd00000000;
    }
    if (uVar17 == 9) {
      return 0xa00000000;
    }
    return 0xb00000000;
  }
  if (2 < uVar17) {
    if (uVar17 == 3) {
      return 0x400000000;
    }
    if (uVar17 == 4) {
      return 0x500000000;
    }
    return 0x600000000;
  }
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      return 0x200000000;
    }
    return 0x300000000;
  }
  if ((uVar8 & 0xffffffff) == 0) {
    return 0x100000000;
  }
LAB_ram_00007720:
  return uVar8 & 0xffffffff;
}
