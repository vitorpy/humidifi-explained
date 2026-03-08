.globl entrypoint
mov64 r3, r2
ldxdw r2, [r1+8]
ldxdw r1, [r1+0]
call fn_2f0b0
exit

fn_0028:  ; → → → → custom_panic
  jsle r5, -1, jmp_0128
  mov64 r0, 0
  mov64 r7, 1
  mov64 r6, 1
  jge r2, r4, jmp_00b0
  jge r3, r5, jmp_00c0

jmp_0058:
  jne r3, r5, jmp_00d0

jmp_0060:
  jeq r6, 0, jmp_00e0

jmp_0068:
  mov64 r4, r3
  jeq r6, 0, jmp_00f8

jmp_0078:
  mov64 r5, 0
  jsge r3, 0, jmp_0110

jmp_0088:
  jslt r3, 0, jmp_0098

jmp_0090:
  mov64 r0, r4

jmp_0098:
  stxdw [r1+8], r0
  stxdw [r1+0], r5
  exit

jmp_00b0:
  mov64 r6, 0
  jlt r3, r5, jmp_0058

jmp_00c0:
  mov64 r7, 0
  jeq r3, r5, jmp_0060

jmp_00d0:
  mov64 r6, r7
  jne r6, 0, jmp_0068

jmp_00e0:
  mov64 r2, r4
  mov64 r4, r3
  jne r6, 0, jmp_0078

jmp_00f8:
  mov64 r4, r5
  mov64 r5, 0
  jslt r3, 0, jmp_0088

jmp_0110:
  mov64 r5, r2
  jsge r3, 0, jmp_0090
  ja jmp_0098

jmp_0128:
  lddw r1, str_0190
  mov64 r2, 28
  lddw r3, 206008
  call fn_2deb8  ; → → → custom_panic

fn_0158:
  mov64 r0, 26
  ldxdw r7, [r1+72]
  ldxdw r2, [r1+80]
  stxdw [r10-16], r2
  jge r7, r2, jmp_0480
  mov64 r3, r7
  mul64 r3, 56
  ldxdw r4, [r1+56]
  add64 r4, r3
  ldxdw r3, [r1+32]
  mov64 r5, r7
  add64 r5, r3
  mov64 r3, r5
  lsh64 r3, 3
  ldxdw r0, [r1+0]
  add64 r0, r3
  lsh64 r5, 4
  stxdw [r10-24], r1
  ldxdw r3, [r1+16]
  add64 r5, r3
  add64 r5, 8
  ja jmp_02b0

jmp_0208:
  ldxdw r1, [r6+80]
  mov64 r7, r6
  add64 r7, 40
  stxdw [r4+32], r7
  mov64 r7, r6
  add64 r7, 88
  stxdw [r4+24], r7
  stxdw [r4+16], r1
  add64 r6, 72
  stxdw [r4+8], r6
  stxdw [r4+0], r2
  stxb [r4+50], r9
  stxb [r4+49], r3
  stxb [r4+48], r8
  add64 r5, 16
  add64 r0, 8
  stdw [r4+40], 0
  add64 r4, 56
  ldxdw r7, [r10-8]
  ldxdw r1, [r10-16]
  jge r7, r1, jmp_0460

jmp_02b0:
  ldxdw r3, [r0+0]
  ldxdw r6, [r3+0]
  mov64 r2, r6
  add64 r2, 8
  ldxdw r3, [r5-8]
  ldxdw r8, [r3+0]
  ldxdw r9, [r6+8]
  jne r9, r8, jmp_0340
  ldxdw r8, [r3+8]
  ldxdw r9, [r2+8]
  jne r9, r8, jmp_0340
  ldxdw r8, [r3+16]
  ldxdw r9, [r2+16]
  jne r9, r8, jmp_0340
  mov64 r8, 0
  ldxdw r3, [r3+24]
  ldxdw r9, [r2+24]
  jeq r9, r3, jmp_0348

jmp_0340:
  mov64 r8, 1

jmp_0348:
  add64 r7, 1
  jne r8, 0, jmp_0440
  ldxb r8, [r5+0]
  mov64 r3, 0
  jne r8, 0, jmp_0378
  mov64 r3, 119

jmp_0378:
  ldxb r8, [r6+0]
  or64 r3, r8
  and64 r3, 255
  jne r3, 255, jmp_0450
  ldxb r3, [r6+1]
  mov64 r9, 1
  mov64 r8, 1
  jeq r3, 0, jmp_03f0
  ldxb r1, [r6+2]
  mov64 r3, 1
  jeq r1, 0, jmp_0410

jmp_03d0:
  stxdw [r10-8], r7
  ldxb r1, [r6+3]
  jne r1, 0, jmp_0208
  ja jmp_0430

jmp_03f0:
  mov64 r8, 0
  ldxb r1, [r6+2]
  mov64 r3, 1
  jne r1, 0, jmp_03d0

jmp_0410:
  mov64 r3, 0
  stxdw [r10-8], r7
  ldxb r1, [r6+3]
  jne r1, 0, jmp_0208

jmp_0430:
  mov64 r9, 0
  ja jmp_0208

jmp_0440:
  mov64 r0, 1
  ja jmp_0470

jmp_0450:
  mov64 r0, 11
  ja jmp_0470

jmp_0460:
  mov64 r0, 26
  ldxdw r7, [r10-16]

jmp_0470:
  ldxdw r1, [r10-24]
  stxdw [r1+72], r7

jmp_0480:
  exit

fn_0488:
  mov64 r9, r5
  mov64 r6, r4
  stxdw [r10-88], r3
  mov64 r8, r2
  stxdw [r10-72], r1
  mov64 r7, r3
  arsh64 r7, 63
  mov64 r5, r6
  arsh64 r5, 63
  mov64 r1, r10
  add64 r1, -64
  mov64 r2, r3
  mov64 r3, r7
  stxdw [r10-80], r5
  call fn_30150
  mov64 r1, r10
  add64 r1, -48
  mov64 r2, r6
  mov64 r3, 0
  mov64 r4, r8
  mov64 r5, 0
  call fn_30150
  mov64 r2, r9
  arsh64 r9, 63
  mov64 r4, r8
  mov64 r6, r4
  arsh64 r6, 63
  mov64 r1, r10
  add64 r1, -16
  mov64 r8, r2
  mov64 r3, r9
  mov64 r5, r6
  call fn_30150
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r8
  mov64 r3, r9
  ldxdw r9, [r10-88]
  mov64 r4, r9
  mov64 r5, r7
  call fn_30150
  and64 r6, r8
  ldxdw r3, [r10-8]
  add64 r3, r6
  ldxdw r1, [r10-40]
  ldxdw r2, [r10-64]
  mov64 r4, r2
  add64 r4, r1
  ldxdw r6, [r10-16]
  mov64 r1, r6
  add64 r1, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r1, r6, jmp_0640
  mov64 r0, 0

jmp_0640:
  add64 r3, r0
  mov64 r0, 1
  jlt r4, r2, jmp_0660
  mov64 r0, 0

jmp_0660:
  ldxdw r2, [r10-80]
  and64 r2, r9
  ldxdw r4, [r10-56]
  add64 r4, r2
  add64 r4, r0
  ldxdw r2, [r10-32]
  mov64 r6, r4
  add64 r6, r2
  mov64 r2, r6
  add64 r2, r3
  mov64 r0, 1
  jlt r2, r6, jmp_06c8
  mov64 r0, 0

jmp_06c8:
  jlt r6, r4, jmp_06d8
  mov64 r5, 0

jmp_06d8:
  arsh64 r4, 63
  ldxdw r6, [r10-24]
  add64 r4, r6
  add64 r4, r5
  arsh64 r3, 63
  add64 r4, r3
  add64 r4, r0
  mov64 r3, r4
  lsh64 r3, 16
  mov64 r5, r2
  rsh64 r5, 48
  or64 r5, r3
  arsh64 r4, 48
  lsh64 r2, 16
  mov64 r3, r2
  arsh64 r3, 63
  xor64 r4, r3
  xor64 r5, r3
  or64 r5, r4
  ldxdw r0, [r10-72]
  mov64 r3, 0
  jne r5, 0, jmp_07d8
  ldxdw r3, [r10-48]
  rsh64 r3, 48
  mov64 r4, r1
  lsh64 r4, 16
  or64 r4, r3
  rsh64 r1, 48
  or64 r2, r1
  stxdw [r0+8], r4
  stxdw [r0+16], r2
  mov64 r3, 1

jmp_07d8:
  stxdw [r0+0], r3
  exit

fn_07e8:  ; → → → custom_panic
  mov64 r0, r4
  or64 r0, r5
  jeq r0, 0, jmp_0828
  stxdw [r10-4096], r5
  stdw [r10-4088], 48
  mov64 r5, r10
  call fn_2c1e8
  exit

jmp_0828:
  lddw r1, 206032
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  lddw r2, 206048
  call fn_2de88  ; → → custom_panic

fn_0888:  ; → → → → custom_panic
  mov64 r7, r3
  mov64 r6, r2
  jslt r7, 0, jmp_0f00
  mov64 r2, r6
  or64 r2, r7
  jeq r2, 0, jmp_0a30
  stxdw [r10-48], r1
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r2, 1085102592571150095
  lddw r1, 72340172838076673
  jne r7, 0, jmp_0a48
  mov64 r0, r6
  rsh64 r0, 1
  mov64 r5, r6
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56
  add64 r4, 64
  ja jmp_0b60

jmp_0a30:
  mov64 r5, 0
  mov64 r4, 0
  ja jmp_0ee8

jmp_0a48:
  mov64 r0, r7
  rsh64 r0, 1
  mov64 r5, r7
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56

jmp_0b60:
  xor64 r4, -1
  and64 r4, 126
  mov64 r1, r10
  add64 r1, -16
  mov64 r9, 0
  mov64 r2, 1
  mov64 r3, 0
  call fn_30108
  ldxdw r1, [r10-8]
  ldxdw r2, [r10-16]
  mov64 r3, 0
  ja jmp_0c30

jmp_0bc0:
  sub64 r7, r6
  ldxdw r3, [r10-40]
  add64 r4, r3
  ldxdw r6, [r10-24]
  sub64 r6, r0
  rsh64 r2, 2
  mov64 r3, r1
  lsh64 r3, 62
  or64 r2, r3
  rsh64 r1, 2
  and64 r8, 1
  mov64 r9, r5
  mov64 r3, r4
  jeq r8, 0, jmp_0eb8

jmp_0c30:
  mov64 r5, r2
  add64 r5, r9
  mov64 r4, 1
  jlt r5, r2, jmp_0c58
  mov64 r4, 0

jmp_0c58:
  stxdw [r10-24], r6
  mov64 r0, r1
  add64 r0, r3
  add64 r0, r4
  mov64 r4, 1
  jge r7, r0, jmp_0db8
  mov64 r6, 1
  ldxdw r8, [r10-24]
  jge r8, r5, jmp_0dd8

jmp_0ca0:
  jne r7, r0, jmp_0de8

jmp_0ca8:
  mov64 r4, 0
  jeq r6, 0, jmp_0e00

jmp_0cb8:
  mov64 r8, 0
  jeq r6, 0, jmp_0e18

jmp_0cc8:
  stxdw [r10-32], r8
  mov64 r0, 0
  jeq r6, 0, jmp_0e38

jmp_0ce0:
  mov64 r8, 0
  jne r6, 0, jmp_0cf8

jmp_0cf0:
  mov64 r8, r2

jmp_0cf8:
  rsh64 r9, 1
  mov64 r5, r3
  lsh64 r5, 63
  or64 r9, r5
  mov64 r5, r8
  add64 r5, r9
  mov64 r6, 1
  jge r5, r8, jmp_0e58
  stxdw [r10-40], r6
  mov64 r6, 1
  ldxdw r8, [r10-24]
  jge r8, r0, jmp_0e80

jmp_0d58:
  mov64 r8, 1
  jle r2, 3, jmp_0e98

jmp_0d68:
  mov64 r9, 1
  jne r1, 0, jmp_0d80

jmp_0d78:
  mov64 r9, 0

jmp_0d80:
  rsh64 r3, 1
  add64 r4, r3
  ldxdw r3, [r10-32]
  sub64 r7, r3
  jeq r1, 0, jmp_0bc0
  mov64 r8, r9
  ja jmp_0bc0

jmp_0db8:
  mov64 r4, 0
  mov64 r6, 1
  ldxdw r8, [r10-24]
  jlt r8, r5, jmp_0ca0

jmp_0dd8:
  mov64 r6, 0
  jeq r7, r0, jmp_0ca8

jmp_0de8:
  mov64 r6, r4
  mov64 r4, 0
  jne r6, 0, jmp_0cb8

jmp_0e00:
  mov64 r4, r1
  mov64 r8, 0
  jne r6, 0, jmp_0cc8

jmp_0e18:
  mov64 r8, r0
  stxdw [r10-32], r8
  mov64 r0, 0
  jne r6, 0, jmp_0ce0

jmp_0e38:
  mov64 r0, r5
  mov64 r8, 0
  jeq r6, 0, jmp_0cf0
  ja jmp_0cf8

jmp_0e58:
  mov64 r6, 0
  stxdw [r10-40], r6
  mov64 r6, 1
  ldxdw r8, [r10-24]
  jlt r8, r0, jmp_0d58

jmp_0e80:
  mov64 r6, 0
  mov64 r8, 1
  jgt r2, 3, jmp_0d68

jmp_0e98:
  mov64 r8, 0
  mov64 r9, 1
  jeq r1, 0, jmp_0d78
  ja jmp_0d80

jmp_0eb8:
  lsh64 r4, 24
  mov64 r1, r5
  rsh64 r1, 40
  or64 r4, r1
  lsh64 r5, 24
  ldxdw r1, [r10-48]

jmp_0ee8:
  stxdw [r1+0], r5
  stxdw [r1+8], r4
  exit

jmp_0f00:
  lddw r1, str_029f
  mov64 r2, 44
  lddw r3, 206072
  call fn_2deb8  ; → → → custom_panic
  lddw r1, 206112
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -16
  stxdw [r10-48], r1
  lddw r1, 288
  stxdw [r10-8], r1
  lddw r1, 206096
  stxdw [r10-16], r1
  stdw [r10-32], 0
  stdw [r10-56], 1
  stdw [r10-40], 1
  ldxdw r4, [r2+40]
  ldxdw r1, [r2+32]
  mov64 r3, r10
  add64 r3, -64
  mov64 r2, r4
  call fn_2e0d0
  exit
  lddw r1, 206112
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -16
  stxdw [r10-48], r1
  lddw r1, 288
  stxdw [r10-8], r1
  lddw r1, 206096
  stxdw [r10-16], r1
  stdw [r10-32], 0
  stdw [r10-56], 1
  stdw [r10-40], 1
  ldxdw r4, [r2+40]
  ldxdw r1, [r2+32]
  mov64 r3, r10
  add64 r3, -64
  mov64 r2, r4
  call fn_2e0d0
  exit

fn_1090:  ; → → → custom_panic
  stxdw [r10-96], r2
  stxdw [r10-104], r1
  stxb [r10-81], r3
  lddw r1, 206256
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-64], r1
  lddw r1, 187752
  stxdw [r10-8], r1
  mov64 r1, r10
  add64 r1, -81
  stxdw [r10-16], r1
  lddw r1, 288
  stxdw [r10-24], r1
  mov64 r1, r10
  add64 r1, -104
  stxdw [r10-32], r1
  stdw [r10-48], 0
  stdw [r10-72], 2
  stdw [r10-56], 2
  mov64 r1, r10
  add64 r1, -80
  lddw r2, 206288
  call fn_2de88  ; → → custom_panic

fn_1178:
  mov64 r5, r4
  stxdw [r10-168], r1
  ldxdw r4, [r3+8]
  ldxdw r1, [r3+0]
  ldxdw r3, [r2+8]
  stxdw [r10-176], r3
  ldxdw r7, [r2+0]
  mov64 r2, r5
  lsh64 r2, 32
  rsh64 r2, 32
  stdw [r10-8], 0
  stdw [r10-16], 0
  stdw [r10-24], 0
  stdw [r10-32], 0
  jgt r2, 255, jmp_13b0
  mov64 r9, r5
  and64 r9, 63
  mov64 r0, r2
  rsh64 r0, 6
  mov64 r6, r4
  mov64 r4, r7
  lsh64 r4, r9
  mov64 r8, r0
  lsh64 r8, 3
  mov64 r3, r10
  add64 r3, -32
  add64 r3, r8
  stxdw [r3+0], r4
  mov64 r4, r6
  jge r2, 192, jmp_13b0
  ldxdw r3, [r10-176]
  lsh64 r3, r9
  mov64 r4, r10
  add64 r4, -32
  add64 r8, r4
  stxdw [r8+8], r3
  mov64 r4, r5
  lsh64 r4, 32
  rsh64 r4, 32
  jgt r4, 127, jmp_1308
  mov64 r3, r0
  lsh64 r3, 3
  stxdw [r10-184], r1
  mov64 r1, r10
  add64 r1, -32
  add64 r1, r3
  stdw [r1+16], 0
  ldxdw r1, [r10-184]
  jgt r4, 63, jmp_1308
  stdw [r10-8], 0

jmp_1308:
  mov64 r4, r6
  jeq r9, 0, jmp_13b0
  add64 r8, 8
  neg64 r2
  and64 r2, 63
  rsh64 r7, r2
  ldxdw r3, [r8+0]
  add64 r3, r7
  stxdw [r8+0], r3
  lsh64 r5, 32
  rsh64 r5, 32
  jgt r5, 127, jmp_13b0
  ldxdw r5, [r10-176]
  rsh64 r5, r2
  lsh64 r0, 3
  mov64 r2, r10
  add64 r2, -32
  add64 r2, r0
  ldxdw r3, [r2+16]
  add64 r3, r5
  stxdw [r2+16], r3

jmp_13b0:
  stxdw [r10-152], r4
  stxdw [r10-160], r1
  stdw [r10-136], 0
  stdw [r10-144], 0
  mov64 r1, r10
  add64 r1, -128
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, r10
  add64 r3, -160
  call fn_28b70  ; → sol_log_
  ldxdw r4, [r10-72]
  ldxdw r5, [r10-80]
  ldxdw r0, [r10-88]
  ldxdw r7, [r10-96]
  ldxdw r2, [r10-120]
  ldxdw r1, [r10-128]
  ldxdw r3, [r10-112]
  ldxdw r8, [r10-104]
  stxdw [r10-56], r8
  stxdw [r10-64], r3
  stdw [r10-48], 0
  stdw [r10-40], 0
  stdw [r10-104], 0
  stdw [r10-112], 0
  stdw [r10-120], 0
  stdw [r10-128], 0
  jne r3, 0, jmp_14e0
  ldxdw r3, [r10-120]
  ldxdw r8, [r10-56]
  jne r8, r3, jmp_14e0
  ldxdw r3, [r10-112]
  ldxdw r8, [r10-48]
  jne r8, r3, jmp_14e0
  mov64 r3, 0
  ldxdw r8, [r10-104]
  ldxdw r9, [r10-40]
  jeq r9, r8, jmp_14e8

jmp_14e0:
  mov64 r3, 1

jmp_14e8:
  jne r7, 0, jmp_1508
  jne r0, 0, jmp_1508
  jne r5, 0, jmp_1508
  jeq r4, 0, jmp_1560

jmp_1508:
  add64 r1, 1
  mov64 r4, 1
  jeq r1, 0, jmp_1528
  mov64 r4, 0

jmp_1528:
  and64 r4, 1
  jeq r4, 0, jmp_1560
  add64 r2, 1
  mov64 r4, 1
  jeq r2, 0, jmp_1558
  mov64 r4, 0

jmp_1558:
  jeq r4, 1, jmp_1588

jmp_1560:
  ldxdw r4, [r10-168]
  stxb [r4+16], r3
  stxdw [r4+8], r2
  stxdw [r4+0], r1
  exit

jmp_1588:
  lddw r1, 207432
  stxdw [r10-128], r1
  stdw [r10-96], 0
  stdw [r10-120], 1
  stdw [r10-104], 0
  stdw [r10-112], 8
  mov64 r1, r10
  add64 r1, -128
  lddw r2, 207408
  call fn_2de88  ; → → custom_panic

fn_15e8:  ; → → sol_log_
  mov64 r7, r4
  mov64 r6, r1
  mov64 r1, r3
  or64 r1, r7
  jeq r1, 0, jmp_1868
  mov64 r0, r3
  mov64 r1, 1
  mov64 r5, 1
  jeq r0, 0, jmp_1878
  ldxdw r4, [r2+0]
  jeq r4, 0, jmp_1890

jmp_1640:
  neg64 r3
  jsge r7, 0, jmp_18a8

jmp_1650:
  mov64 r0, r7
  jsge r7, 0, jmp_1670

jmp_1660:
  add64 r0, r5
  neg64 r0

jmp_1670:
  ldxdw r8, [r2+8]
  stxdw [r10-160], r3
  mov64 r2, r4
  neg64 r2
  jslt r8, 0, jmp_16a0
  mov64 r2, r4

jmp_16a0:
  mov64 r3, r2
  lsh64 r3, 48
  stxdw [r10-32], r3
  stxdw [r10-152], r0
  mov64 r3, r8
  jsge r8, 0, jmp_16e0
  add64 r3, r1
  neg64 r3

jmp_16e0:
  mov64 r1, r3
  rsh64 r1, 16
  stxdw [r10-16], r1
  rsh64 r2, 16
  lsh64 r3, 48
  or64 r3, r2
  stxdw [r10-24], r3
  stdw [r10-8], 0
  stdw [r10-144], 0
  stdw [r10-136], 0
  mov64 r1, r10
  add64 r1, -96
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, r10
  add64 r3, -160
  call fn_28b70  ; → sol_log_
  ldxdw r2, [r10-88]
  ldxdw r1, [r10-96]
  ldxdw r3, [r10-80]
  ldxdw r4, [r10-72]
  stxdw [r10-120], r4
  stxdw [r10-128], r3
  stdw [r10-112], 0
  stdw [r10-104], 0
  stdw [r10-72], 0
  stdw [r10-80], 0
  stdw [r10-88], 0
  stdw [r10-96], 0
  ldxdw r3, [r10-96]
  ldxdw r4, [r10-128]
  jne r4, r3, jmp_1830
  ldxdw r3, [r10-88]
  ldxdw r4, [r10-120]
  jne r4, r3, jmp_1830
  ldxdw r3, [r10-80]
  ldxdw r4, [r10-112]
  jne r4, r3, jmp_1830
  mov64 r4, 0
  ldxdw r3, [r10-72]
  ldxdw r5, [r10-104]
  jeq r5, r3, jmp_1838

jmp_1830:
  mov64 r4, 1

jmp_1838:
  mov64 r3, 0
  jne r4, 0, jmp_19c8
  xor64 r8, r7
  jslt r8, 0, jmp_18c8
  jsge r2, 0, jmp_19b0
  ja jmp_19c8

jmp_1868:
  mov64 r3, 0
  ja jmp_19c8

jmp_1878:
  mov64 r5, 0
  ldxdw r4, [r2+0]
  jne r4, 0, jmp_1640

jmp_1890:
  mov64 r1, 0
  neg64 r3
  jslt r7, 0, jmp_1650

jmp_18a8:
  mov64 r3, r0
  mov64 r0, r7
  jslt r7, 0, jmp_1660
  ja jmp_1670

jmp_18c8:
  mov64 r5, 1
  mov64 r4, 1
  jeq r1, 0, jmp_1918
  lddw r0, -9223372036854775808
  jle r2, r0, jmp_1938

jmp_18f8:
  jne r2, r0, jmp_1948

jmp_1900:
  and64 r4, 1
  jeq r4, 0, jmp_1960
  ja jmp_19c8

jmp_1918:
  mov64 r4, 0
  lddw r0, -9223372036854775808
  jgt r2, r0, jmp_18f8

jmp_1938:
  mov64 r5, 0
  jeq r2, r0, jmp_1900

jmp_1948:
  mov64 r4, r5
  and64 r4, 1
  jne r4, 0, jmp_19c8

jmp_1960:
  neg64 r1
  mov64 r3, 1
  jgt r1, 0, jmp_1980
  mov64 r3, 0

jmp_1980:
  mov64 r4, r2
  xor64 r4, -1
  jne r3, 0, jmp_19a8
  neg64 r2
  mov64 r4, r2

jmp_19a8:
  mov64 r2, r4

jmp_19b0:
  stxdw [r6+8], r1
  stxdw [r6+16], r2
  mov64 r3, 1

jmp_19c8:
  stxdw [r6+0], r3
  exit

fn_19d8:
  mov64 r7, r4
  mov64 r6, r1
  mov64 r1, r3
  or64 r1, r7
  jeq r1, 0, jmp_1b40
  ldxdw r9, [r2+8]
  ldxdw r2, [r2+0]
  mov64 r1, r2
  neg64 r1
  jslt r9, 0, jmp_1a30
  mov64 r1, r2

jmp_1a30:
  stxdw [r10-32], r1
  mov64 r8, 0
  mov64 r1, 1
  mov64 r4, 1
  jeq r2, 0, jmp_1b50
  mov64 r2, r9
  jslt r9, 0, jmp_1b68

jmp_1a68:
  stxdw [r10-24], r2
  mov64 r2, r3
  neg64 r2
  jsge r7, 0, jmp_1b98

jmp_1a88:
  jeq r3, 0, jmp_1ba8

jmp_1a90:
  mov64 r3, r7
  jsge r7, 0, jmp_1ab0

jmp_1aa0:
  add64 r3, r1
  neg64 r3

jmp_1ab0:
  stxdw [r10-8], r3
  stxdw [r10-16], r2
  mov64 r1, r10
  add64 r1, -56
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, r10
  add64 r3, -16
  mov64 r4, 48
  call fn_1178
  ldxb r1, [r10-40]
  jeq r1, 1, jmp_1cc8
  ldxdw r2, [r10-48]
  ldxdw r1, [r10-56]
  xor64 r9, r7
  jslt r9, 0, jmp_1bc8
  jsge r2, 0, jmp_1cb0
  ja jmp_1cc8

jmp_1b40:
  mov64 r8, 0
  ja jmp_1cc8

jmp_1b50:
  mov64 r4, 0
  mov64 r2, r9
  jsge r9, 0, jmp_1a68

jmp_1b68:
  add64 r2, r4
  neg64 r2
  stxdw [r10-24], r2
  mov64 r2, r3
  neg64 r2
  jslt r7, 0, jmp_1a88

jmp_1b98:
  mov64 r2, r3
  jne r3, 0, jmp_1a90

jmp_1ba8:
  mov64 r1, 0
  mov64 r3, r7
  jslt r7, 0, jmp_1aa0
  ja jmp_1ab0

jmp_1bc8:
  mov64 r4, 1
  mov64 r3, 1
  jeq r1, 0, jmp_1c18
  lddw r5, -9223372036854775808
  jle r2, r5, jmp_1c38

jmp_1bf8:
  jne r2, r5, jmp_1c48

jmp_1c00:
  and64 r3, 1
  jeq r3, 0, jmp_1c60
  ja jmp_1cc8

jmp_1c18:
  mov64 r3, 0
  lddw r5, -9223372036854775808
  jgt r2, r5, jmp_1bf8

jmp_1c38:
  mov64 r4, 0
  jeq r2, r5, jmp_1c00

jmp_1c48:
  mov64 r3, r4
  and64 r3, 1
  jne r3, 0, jmp_1cc8

jmp_1c60:
  neg64 r1
  mov64 r3, 1
  jgt r1, 0, jmp_1c80
  mov64 r3, 0

jmp_1c80:
  mov64 r4, r2
  xor64 r4, -1
  jne r3, 0, jmp_1ca8
  neg64 r2
  mov64 r4, r2

jmp_1ca8:
  mov64 r2, r4

jmp_1cb0:
  stxdw [r6+8], r1
  stxdw [r6+16], r2
  mov64 r8, 1

jmp_1cc8:
  stxdw [r6+0], r8
  exit

fn_1cd8:  ; → → sol_memcpy_
  mov64 r6, r2
  mov64 r9, 0
  and64 r2, -8
  jeq r2, 0, jmp_1d78
  mov64 r3, r2
  neg64 r3
  lddw r4, -4329161132679889094
  lddw r5, 281479271743489
  mov64 r0, r1

jmp_1d30:
  ldxdw r7, [r0+0]
  mov64 r8, r9
  xor64 r8, r7
  xor64 r8, r4
  stxdw [r0+0], r8
  add64 r9, r5
  add64 r0, 8
  add64 r3, 8
  jne r3, 0, jmp_1d30

jmp_1d78:
  add64 r1, r2
  stdw [r10-8], 0
  and64 r6, 7
  mov64 r7, r10
  add64 r7, -8
  mov64 r8, r1
  mov64 r1, r7
  mov64 r2, r8
  mov64 r3, r6
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-8]
  xor64 r9, r1
  lddw r1, -4329161132679889094
  xor64 r9, r1
  stxdw [r10-8], r9
  mov64 r1, r8
  mov64 r2, r7
  mov64 r3, r6
  call fn_2fe08  ; → sol_memcpy_
  exit

fn_1e20:
  ldxdw r2, [r1+56]
  lddw r3, -1203209269184106356
  xor64 r2, r3
  ldxdw r3, [r1+48]
  lddw r4, -1203490748455718771
  xor64 r3, r4
  ldxdw r4, [r1+40]
  lddw r5, -1202646327820750706
  xor64 r4, r5
  ldxdw r5, [r1+32]
  lddw r0, -1202927807092363121
  xor64 r5, r0
  ldxdw r0, [r1+24]
  lddw r6, -1204335151910817656
  xor64 r0, r6
  ldxdw r6, [r1+16]
  lddw r7, -1204616631182430071
  xor64 r6, r7
  ldxdw r7, [r1+8]
  lddw r8, -1203772210547462006
  xor64 r7, r8
  ldxdw r8, [r1+0]
  lddw r9, -1204053689819074421
  xor64 r8, r9
  stxdw [r1+0], r8
  stxdw [r1+8], r7
  stxdw [r1+16], r6
  stxdw [r1+24], r0
  stxdw [r1+32], r5
  stxdw [r1+40], r4
  stxdw [r1+48], r3
  stxdw [r1+56], r2
  ldxdw r2, [r1+64]
  lddw r3, -1206305523991973757
  xor64 r2, r3
  stxdw [r1+64], r2
  ldxdw r2, [r1+72]
  lddw r3, -1206024044720361342
  xor64 r2, r3
  stxdw [r1+72], r2
  ldxdw r2, [r1+80]
  lddw r3, -1206868465355329407
  xor64 r2, r3
  stxdw [r1+80], r2
  lddw r2, -1206586986083716992
  ldxdw r3, [r1+88]
  xor64 r3, r2
  stxdw [r1+88], r3
  lddw r2, -1205179641265262457
  ldxdw r3, [r1+96]
  xor64 r3, r2
  stxdw [r1+96], r3
  lddw r2, -1204898161993650042
  ldxdw r3, [r1+104]
  xor64 r3, r2
  stxdw [r1+104], r3
  lddw r2, -1205742582628618107
  ldxdw r3, [r1+112]
  xor64 r3, r2
  stxdw [r1+112], r3
  lddw r2, -1205461103357005692
  ldxdw r3, [r1+120]
  xor64 r3, r2
  stxdw [r1+120], r3
  lddw r2, -1199550021473275749
  ldxdw r3, [r1+128]
  xor64 r3, r2
  stxdw [r1+128], r3
  lddw r2, -1199268542201663334
  ldxdw r3, [r1+136]
  xor64 r3, r2
  stxdw [r1+136], r3
  lddw r2, -1200112962836631399
  ldxdw r3, [r1+144]
  xor64 r3, r2
  stxdw [r1+144], r3
  lddw r2, -1199831483565018984
  ldxdw r3, [r1+152]
  xor64 r3, r2
  stxdw [r1+152], r3
  lddw r2, -1198424138746564449
  ldxdw r3, [r1+160]
  xor64 r3, r2
  stxdw [r1+160], r3
  lddw r2, -1198142659474952034
  ldxdw r3, [r1+168]
  xor64 r3, r2
  stxdw [r1+168], r3
  lddw r2, -1198987080109920099
  ldxdw r3, [r1+176]
  xor64 r3, r2
  stxdw [r1+176], r3
  lddw r2, -1198705600838307684
  ldxdw r3, [r1+184]
  xor64 r3, r2
  stxdw [r1+184], r3
  lddw r2, -1201801855646175085
  ldxdw r3, [r1+192]
  xor64 r3, r2
  stxdw [r1+192], r3
  lddw r2, -1201520376374562670
  ldxdw r3, [r1+200]
  xor64 r3, r2
  stxdw [r1+200], r3
  lddw r2, -1202364797009530735
  ldxdw r3, [r1+208]
  xor64 r3, r2
  stxdw [r1+208], r3
  lddw r2, -1202083317737918320
  ldxdw r3, [r1+216]
  xor64 r3, r2
  stxdw [r1+216], r3
  lddw r2, -1200675972919463785
  ldxdw r3, [r1+224]
  xor64 r3, r2
  stxdw [r1+224], r3
  lddw r2, -1200394493647851370
  ldxdw r3, [r1+232]
  xor64 r3, r2
  stxdw [r1+232], r3
  lddw r2, -1201238914282819435
  ldxdw r3, [r1+240]
  xor64 r3, r2
  stxdw [r1+240], r3
  lddw r2, -1200957435011207020
  ldxdw r3, [r1+248]
  xor64 r3, r2
  stxdw [r1+248], r3
  exit

fn_2328:
  ldxdw r2, [r1+56]
  lddw r3, -7626442179814794710
  xor64 r2, r3
  ldxdw r3, [r1+48]
  lddw r4, -7626723650496603607
  xor64 r3, r4
  ldxdw r4, [r1+40]
  lddw r5, -7625879238451176920
  xor64 r4, r5
  ldxdw r5, [r1+32]
  lddw r0, -7626160709132985809
  xor64 r5, r0
  ldxdw r0, [r1+24]
  lddw r6, -7625316297088083410
  xor64 r0, r6
  ldxdw r6, [r1+16]
  lddw r7, -7625597767769892307
  xor64 r6, r7
  ldxdw r7, [r1+8]
  lddw r8, -7624753355724465620
  xor64 r7, r8
  ldxdw r8, [r1+0]
  lddw r9, 7625034826406274515
  xor64 r8, r9
  stxdw [r1+0], r8
  stxdw [r1+8], r7
  stxdw [r1+16], r6
  stxdw [r1+24], r0
  stxdw [r1+32], r5
  stxdw [r1+40], r4
  stxdw [r1+48], r3
  stxdw [r1+56], r2
  ldxdw r2, [r1+64]
  lddw r3, -7627286660579173845
  xor64 r2, r3
  stxdw [r1+64], r2
  ldxdw r2, [r1+72]
  lddw r3, -7627005189897364956
  xor64 r2, r3
  stxdw [r1+72], r2
  ldxdw r2, [r1+80]
  lddw r3, -7627849601942791643
  xor64 r2, r3
  stxdw [r1+80], r2
  lddw r2, -7627568131260982746
  ldxdw r3, [r1+88]
  xor64 r3, r2
  stxdw [r1+88], r3
  lddw r2, -7628412543305885145
  ldxdw r3, [r1+96]
  xor64 r3, r2
  stxdw [r1+96], r3
  lddw r2, -7628131072624076256
  ldxdw r3, [r1+104]
  xor64 r3, r2
  stxdw [r1+104], r3
  lddw r2, -7628975484669502943
  ldxdw r3, [r1+112]
  xor64 r3, r2
  stxdw [r1+112], r3
  lddw r2, -7628694013987694046
  ldxdw r3, [r1+120]
  xor64 r3, r2
  stxdw [r1+120], r3
  lddw r2, -7620531295499429341
  ldxdw r3, [r1+128]
  xor64 r3, r2
  stxdw [r1+128], r3
  lddw r2, -7620249824817620420
  ldxdw r3, [r1+136]
  xor64 r3, r2
  stxdw [r1+136], r3
  exit

fn_2600:
  ldxdw r2, [r1+56]
  lddw r3, -988564940244374269
  xor64 r2, r3
  ldxdw r3, [r1+48]
  lddw r4, -988846410925921024
  xor64 r3, r4
  ldxdw r4, [r1+40]
  lddw r5, -989127881607729919
  xor64 r4, r5
  ldxdw r5, [r1+32]
  lddw r0, -989409352289800954
  xor64 r5, r0
  ldxdw r0, [r1+24]
  lddw r6, -989690857331348217
  xor64 r0, r6
  ldxdw r6, [r1+16]
  lddw r7, -989972328012894972
  xor64 r6, r7
  ldxdw r7, [r1+8]
  lddw r8, -990253798694703867
  xor64 r7, r8
  ldxdw r8, [r1+0]
  lddw r9, 990535269376402170
  xor64 r8, r9
  stxdw [r1+0], r8
  stxdw [r1+8], r7
  stxdw [r1+16], r6
  stxdw [r1+24], r0
  stxdw [r1+32], r5
  stxdw [r1+40], r4
  stxdw [r1+48], r3
  stxdw [r1+56], r2
  ldxdw r2, [r1+64]
  lddw r3, -988283503922303742
  xor64 r2, r3
  stxdw [r1+64], r2
  ldxdw r2, [r1+72]
  lddw r3, -988002033240232691
  xor64 r2, r3
  stxdw [r1+72], r2
  exit

fn_2798:
  ldxdw r2, [r1+56]
  lddw r3, 5175880792817800198
  xor64 r2, r3
  ldxdw r3, [r1+48]
  lddw r4, 5176162272089543685
  xor64 r3, r4
  ldxdw r4, [r1+40]
  lddw r5, 5176443751361287172
  xor64 r4, r5
  ldxdw r5, [r1+32]
  lddw r0, 5176725230633030659
  xor64 r5, r0
  ldxdw r0, [r1+24]
  lddw r6, 5174754910090564610
  xor64 r0, r6
  ldxdw r6, [r1+16]
  lddw r7, 5175036389362308097
  xor64 r6, r7
  ldxdw r7, [r1+8]
  lddw r8, 5175317868634051584
  xor64 r7, r8
  ldxdw r8, [r1+0]
  lddw r9, -5175599347905795073
  xor64 r8, r9
  stxdw [r1+0], r8
  stxdw [r1+8], r7
  stxdw [r1+16], r6
  stxdw [r1+24], r0
  stxdw [r1+32], r5
  stxdw [r1+40], r4
  stxdw [r1+48], r3
  stxdw [r1+56], r2
  ldxdw r2, [r1+64]
  lddw r3, 5177851113359217671
  xor64 r2, r3
  stxdw [r1+64], r2
  ldxdw r2, [r1+72]
  lddw r3, 5177569634087474184
  xor64 r2, r3
  stxdw [r1+72], r2
  exit

fn_2930:  ; → sol_memcmp_
  ldxdw r2, [r1+56]
  lddw r3, 4682417408174196671
  xor64 r2, r3
  ldxdw r3, [r1+48]
  lddw r4, 4682135928902584252
  xor64 r3, r4
  ldxdw r4, [r1+40]
  lddw r5, 4681854449630971837
  xor64 r4, r5
  ldxdw r5, [r1+32]
  lddw r0, 4681572970359359418
  xor64 r5, r0
  ldxdw r0, [r1+24]
  lddw r6, 4683543325260646331
  xor64 r0, r6
  ldxdw r6, [r1+16]
  lddw r7, 4683261845989033912
  xor64 r6, r7
  ldxdw r7, [r1+8]
  lddw r8, 4682980366717421497
  xor64 r7, r8
  ldxdw r8, [r1+0]
  lddw r9, -4682698887445809082
  xor64 r8, r9
  stxdw [r1+0], r8
  stxdw [r1+8], r7
  stxdw [r1+16], r6
  stxdw [r1+24], r0
  stxdw [r1+32], r5
  stxdw [r1+40], r4
  stxdw [r1+48], r3
  stxdw [r1+56], r2
  ldxdw r2, [r1+64]
  lddw r3, 4680447121992386494
  xor64 r2, r3
  stxdw [r1+64], r2
  ldxdw r2, [r1+72]
  lddw r3, 4680728601263998897
  xor64 r2, r3
  stxdw [r1+72], r2
  ldxdw r2, [r1+80]
  lddw r3, 4681010080535611312
  xor64 r2, r3
  stxdw [r1+80], r2
  lddw r2, 4681291559807223731
  ldxdw r3, [r1+88]
  xor64 r3, r2
  stxdw [r1+88], r3
  lddw r2, 4679321204905936818
  ldxdw r3, [r1+96]
  xor64 r3, r2
  stxdw [r1+96], r3
  lddw r2, 4679602684177549237
  ldxdw r3, [r1+104]
  xor64 r3, r2
  stxdw [r1+104], r3
  lddw r2, 4679884163449161652
  ldxdw r3, [r1+112]
  xor64 r3, r2
  stxdw [r1+112], r3
  lddw r2, 4680165642720774071
  ldxdw r3, [r1+120]
  xor64 r3, r2
  stxdw [r1+120], r3
  lddw r2, 4678195219097913270
  ldxdw r3, [r1+128]
  xor64 r3, r2
  stxdw [r1+128], r3
  lddw r2, 4678476698369525673
  ldxdw r3, [r1+136]
  xor64 r3, r2
  stxdw [r1+136], r3
  lddw r2, 4678758177641138088
  ldxdw r3, [r1+144]
  xor64 r3, r2
  stxdw [r1+144], r3
  lddw r2, 4679039656912750507
  ldxdw r3, [r1+152]
  xor64 r3, r2
  stxdw [r1+152], r3
  lddw r2, 4677069302011463594
  ldxdw r3, [r1+160]
  xor64 r3, r2
  stxdw [r1+160], r3
  lddw r2, 4677350781283076013
  ldxdw r3, [r1+168]
  xor64 r3, r2
  stxdw [r1+168], r3
  lddw r2, 4677632260554688428
  ldxdw r3, [r1+176]
  xor64 r3, r2
  stxdw [r1+176], r3
  lddw r2, 4677913739826300847
  ldxdw r3, [r1+184]
  xor64 r3, r2
  stxdw [r1+184], r3
  lddw r2, 4675943453644490670
  ldxdw r3, [r1+192]
  xor64 r3, r2
  stxdw [r1+192], r3
  lddw r2, 4676224932916103073
  ldxdw r3, [r1+200]
  xor64 r3, r2
  stxdw [r1+200], r3
  lddw r2, 4676506412187715488
  ldxdw r3, [r1+208]
  xor64 r3, r2
  stxdw [r1+208], r3
  lddw r2, 4676787891459327907
  ldxdw r3, [r1+216]
  xor64 r3, r2
  stxdw [r1+216], r3
  lddw r2, 4674817536558040994
  ldxdw r3, [r1+224]
  xor64 r3, r2
  stxdw [r1+224], r3
  lddw r2, 4675099015829653413
  ldxdw r3, [r1+232]
  xor64 r3, r2
  stxdw [r1+232], r3
  exit

entrypoint:
  mov64 r4, r1
  add64 r4, 32784
  ldxdw r6, [r1+0]
  jne r6, 3, jmp_2fc0
  ldxb r7, [r1+12073]
  jne r7, 1, jmp_2fc0
  ldxdw r7, [r1+12080]
  ldxdw r8, [r1+608]
  jne r7, r8, jmp_2fa8
  ldxdw r7, [r1+12088]
  ldxdw r8, [r1+616]
  jne r7, r8, jmp_2fa8
  ldxdw r7, [r1+12096]
  ldxdw r8, [r1+624]
  jne r7, r8, jmp_2fa8
  ldxdw r7, [r1+12104]
  ldxdw r8, [r1+632]
  jne r7, r8, jmp_2fa8
  ldxdw r8, [r1+696]
  lddw r5, 7970776174128921066
  ldxdw r7, [r4+32]
  xor64 r8, r5
  xor64 r7, r5
  jge r8, r7, jmp_2f90
  ldxdw r8, [r4+48]
  lddw r5, 7988788236180384746
  ldxdw r7, [r1+22496]
  xor64 r8, r5
  jgt r7, r8, jmp_2f78
  lddw r5, 7970776174128919018
  xor64 r7, r5
  stxdw [r1+712], r7
  ldxdw r7, [r4+8]
  stxdw [r1+672], r7
  ldxdw r7, [r4+16]
  stxdw [r1+680], r7
  ldxdw r7, [r4+24]
  stxdw [r1+688], r7
  ldxdw r7, [r4+32]
  stxdw [r1+696], r7
  ldxdw r7, [r4+40]
  stxdw [r1+704], r7
  ldxdw r7, [r4+56]
  stxdw [r1+808], r7
  ldxdw r7, [r4+64]
  stxdw [r1+896], r7
  exit

jmp_2f78:
  lddw r0, 3735929054
  exit

jmp_2f90:
  lddw r0, 57005
  exit

jmp_2fa8:
  lddw r0, 2880249322
  exit

jmp_2fc0:
  mov64 r2, r1
  add64 r2, 8
  mov64 r8, r1
  ldxdw r6, [r1+0]
  jeq r6, 0, jmp_7088
  stxdw [r10-2096], r2
  ldxdw r2, [r8+88]
  add64 r1, r2
  add64 r1, 10351
  and64 r1, -8
  jeq r6, 2, jmp_3440
  jeq r6, 1, jmp_3558
  mov64 r2, r10
  add64 r2, -2096
  mov64 r3, r6
  jlt r6, 6, jmp_3308
  mov64 r2, r10
  add64 r2, -2096
  mov64 r3, r6
  ja jmp_30e8

jmp_3060:
  stxdw [r2+32], r1
  ldxdw r4, [r1+80]
  add64 r1, r4
  add64 r1, 10343
  and64 r1, -8
  add64 r2, 40
  ldxb r4, [r1+0]
  jeq r4, 255, jmp_32d0

jmp_30a0:
  lsh64 r4, 3
  mov64 r5, r10
  add64 r5, -2096
  add64 r5, r4
  ldxdw r4, [r5+0]
  stxdw [r2+0], r4
  add64 r1, 8
  add64 r3, -5
  jle r3, 5, jmp_3308

jmp_30e8:
  ldxb r4, [r1+0]
  jeq r4, 255, jmp_31d8
  lsh64 r4, 3
  mov64 r5, r10
  add64 r5, -2096
  add64 r5, r4
  ldxdw r4, [r5+0]
  stxdw [r2+8], r4
  add64 r1, 8
  ldxb r4, [r1+0]
  jeq r4, 255, jmp_3210

jmp_3140:
  lsh64 r4, 3
  mov64 r5, r10
  add64 r5, -2096
  add64 r5, r4
  ldxdw r4, [r5+0]
  stxdw [r2+16], r4
  add64 r1, 8
  ldxb r4, [r1+0]
  jeq r4, 255, jmp_3248

jmp_3188:
  lsh64 r4, 3
  mov64 r5, r10
  add64 r5, -2096
  add64 r5, r4
  ldxdw r4, [r5+0]
  stxdw [r2+24], r4
  add64 r1, 8
  ldxb r4, [r1+0]
  jne r4, 255, jmp_3280
  ja jmp_3060

jmp_31d8:
  stxdw [r2+8], r1
  ldxdw r4, [r1+80]
  add64 r1, r4
  add64 r1, 10343
  and64 r1, -8
  ldxb r4, [r1+0]
  jne r4, 255, jmp_3140

jmp_3210:
  stxdw [r2+16], r1
  ldxdw r4, [r1+80]
  add64 r1, r4
  add64 r1, 10343
  and64 r1, -8
  ldxb r4, [r1+0]
  jne r4, 255, jmp_3188

jmp_3248:
  stxdw [r2+24], r1
  ldxdw r4, [r1+80]
  add64 r1, r4
  add64 r1, 10343
  and64 r1, -8
  ldxb r4, [r1+0]
  jeq r4, 255, jmp_3060

jmp_3280:
  lsh64 r4, 3
  mov64 r5, r10
  add64 r5, -2096
  add64 r5, r4
  ldxdw r4, [r5+0]
  stxdw [r2+32], r4
  add64 r1, 8
  add64 r2, 40
  ldxb r4, [r1+0]
  jne r4, 255, jmp_30a0

jmp_32d0:
  stxdw [r2+0], r1
  ldxdw r4, [r1+80]
  add64 r1, r4
  add64 r1, 10343
  and64 r1, -8
  add64 r3, -5
  jgt r3, 5, jmp_30e8

jmp_3308:
  jle r3, 3, jmp_3490
  ldxb r4, [r1+0]
  jne r3, 5, jmp_3d40
  jeq r4, 255, jmp_4948
  lsh64 r4, 3
  mov64 r3, r10
  add64 r3, -2096
  add64 r3, r4
  ldxdw r3, [r3+0]
  stxdw [r2+8], r3
  add64 r1, 8
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_4980

jmp_3370:
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+16], r3
  add64 r1, 8
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_49b8

jmp_33b8:
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+24], r3
  add64 r1, 8
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_49f0

jmp_3400:
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+32], r3
  add64 r1, 8
  ja jmp_3558

jmp_3440:
  ldxb r2, [r1+0]
  jeq r2, 255, jmp_3530
  lsh64 r2, 3
  mov64 r3, r10
  add64 r3, -2096
  add64 r3, r2
  ldxdw r2, [r3+0]
  stxdw [r10-2088], r2
  add64 r1, 8
  ja jmp_3558

jmp_3490:
  jne r3, 3, jmp_3e18
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_4a00
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+8], r3
  add64 r1, 8
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_4a38

jmp_34f0:
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+16], r3
  add64 r1, 8
  ja jmp_3558

jmp_3530:
  stxdw [r10-2088], r1

jmp_3538:
  ldxdw r2, [r1+80]
  add64 r1, r2
  add64 r1, 10343
  and64 r1, -8

jmp_3558:
  mov64 r0, 195936478
  ldxdw r4, [r1+0]
  jeq r4, 0, jmp_7600
  mov64 r9, r1
  add64 r9, 8
  mov64 r7, r4
  add64 r7, -1
  mov64 r2, r9
  add64 r2, r7
  ldxb r2, [r2+0]
  mov64 r3, r7
  rsh64 r3, 3
  xor64 r2, r3
  xor64 r2, 58
  and64 r2, 255
  jlt r2, 24, jmp_35e0
  mov64 r2, 24

jmp_35e0:
  mov64 r3, r9
  add64 r3, r4
  jsle r2, 12, jmp_37c8
  jsle r2, 18, jmp_3998
  jsgt r2, 21, jmp_3e70
  stxdw [r10-2192], r6
  stxdw [r10-2200], r9
  jeq r2, 19, jmp_54c8
  jne r2, 20, jmp_6420
  mov64 r1, r7
  mov64 r6, 0
  and64 r1, -8
  jeq r1, 0, jmp_36c8
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_3680:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_3680

jmp_36c8:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2104
  mov64 r2, r10
  add64 r2, -2096
  ldxdw r3, [r10-2192]
  ldxdw r4, [r10-2200]
  mov64 r5, r7
  call fn_113b8  ; → → → → custom_panic
  ldxw r0, [r10-2100]
  ldxw r9, [r10-2104]
  ja jmp_7330

jmp_37c8:
  jsle r2, 5, jmp_3ac0
  stxdw [r10-2192], r6
  jsle r2, 8, jmp_4200
  jsgt r2, 10, jmp_4ac8
  jne r2, 9, jmp_6ac0
  mov64 r1, r7
  mov64 r6, 0
  and64 r1, -8
  jeq r1, 0, jmp_3890
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_3848:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_3848

jmp_3890:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  stxdw [r10-2200], r9
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2136
  mov64 r2, r10
  add64 r2, -2096
  ldxdw r3, [r10-2192]
  ldxdw r4, [r10-2200]
  mov64 r5, r7
  call fn_12a18
  ldxw r0, [r10-2132]
  ldxw r9, [r10-2136]
  ja jmp_7330

jmp_3998:
  jsgt r2, 15, jmp_43b8
  jeq r2, 13, jmp_4e48
  jne r2, 14, jmp_61d0
  ldxdw r1, [r3+0]
  lddw r2, -1632001642340221574
  jne r1, r2, jmp_3a38
  ldxdw r1, [r3+8]
  lddw r2, 8827510275200544966
  jne r1, r2, jmp_3a38
  ldxdw r1, [r3+16]
  lddw r2, 7913477912056730528
  jne r1, r2, jmp_3a38
  mov64 r1, 0
  ldxdw r2, [r3+24]
  lddw r3, -3189807322954948524
  jeq r2, r3, jmp_3a40

jmp_3a38:
  mov64 r1, 1

jmp_3a40:
  mov64 r0, 233811181
  jne r1, 0, jmp_7600
  mov64 r1, r9
  mov64 r2, r7
  call fn_1cd8  ; → → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2128
  mov64 r2, r10
  add64 r2, -2096
  mov64 r3, r6
  mov64 r4, r9
  mov64 r5, r7
  call fn_a740
  ldxw r0, [r10-2124]
  ldxw r9, [r10-2128]
  ja jmp_7330

jmp_3ac0:
  jsle r2, 2, jmp_4790
  stxdw [r10-2192], r6
  stxdw [r10-2200], r9
  jeq r2, 3, jmp_6030
  jne r2, 4, jmp_6920
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_3b90
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_3b48:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_3b48

jmp_3b90:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2216], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2216]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  mov64 r9, 0
  ldxdw r3, [r10-2192]
  jlt r3, 9, jmp_7330
  jne r7, 24, jmp_70b0
  ldxdw r2, [r10-2200]
  and64 r2, 7
  ldxdw r1, [r10-2208]
  jne r2, 0, jmp_70d8
  ldxdw r2, [r1+8]
  ldxdw r6, [r1+16]
  ldxb r1, [r1+24]
  stdw [r10-48], 0
  ldxdw r4, [r10-2048]
  ldxdw r5, [r10-2032]
  mov64 r0, r10
  add64 r0, -48
  stxdw [r10-4056], r0
  stxdw [r10-4064], r1
  stxdw [r10-4072], r6
  stxdw [r10-4080], r2
  stxdw [r10-4096], r5
  stdw [r10-4048], 9
  stdw [r10-4088], 0
  mov64 r1, r10
  add64 r1, -2160
  mov64 r2, r10
  add64 r2, -2096
  mov64 r5, r10
  call fn_db48
  ldxw r0, [r10-2156]
  ldxw r9, [r10-2160]
  ja jmp_7330

jmp_3d40:
  jeq r4, 255, jmp_4a48
  lsh64 r4, 3
  mov64 r3, r10
  add64 r3, -2096
  add64 r3, r4
  ldxdw r3, [r3+0]
  stxdw [r2+8], r3
  add64 r1, 8
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_4a80

jmp_3d90:
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+16], r3
  add64 r1, 8
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_4ab8

jmp_3dd8:
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+24], r3
  add64 r1, 8
  ja jmp_3558

jmp_3e18:
  jle r3, 1, jmp_3558
  ldxb r3, [r1+0]
  jeq r3, 255, jmp_6f50
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -2096
  add64 r4, r3
  ldxdw r3, [r4+0]
  stxdw [r2+8], r3
  add64 r1, 8
  ja jmp_3558

jmp_3e70:
  jeq r2, 22, jmp_5868
  jne r2, 23, jmp_7600
  stxdw [r10-2216], r8
  stxdw [r10-2192], r6
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_3f30
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_3ee8:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_3ee8

jmp_3f30:
  stxdw [r10-2200], r9
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7328
  jne r7, 8, jmp_70b0
  ldxdw r6, [r10-2216]
  ldxb r3, [r6+9]
  ldxdw r1, [r10-2088]
  ldxdw r2, [r1+624]
  stxdw [r10-24], r2
  ldxdw r2, [r1+616]
  stxdw [r10-32], r2
  ldxdw r2, [r1+608]
  stxdw [r10-40], r2
  ldxdw r2, [r1+600]
  stxdw [r10-48], r2
  ldxdw r2, [r1+1808]
  mov64 r9, 0
  jgt r2, 4, jmp_4110
  lddw r4, 333855179453154247
  ldxdw r5, [r10-40]
  xor64 r5, r4
  lddw r4, -334136658724897736
  ldxdw r0, [r10-48]
  xor64 r0, r4
  stxdw [r10-48], r0
  stxdw [r10-40], r5
  lddw r4, 333573717361279942
  ldxdw r5, [r10-32]
  xor64 r5, r4
  stxdw [r10-32], r5
  lddw r4, 333292238089536453
  ldxdw r5, [r10-24]
  xor64 r5, r4
  stxdw [r10-24], r5

jmp_4110:
  ldxdw r4, [r6+16]
  ldxdw r5, [r10-48]
  jne r5, r4, jmp_4178
  ldxdw r4, [r6+24]
  ldxdw r5, [r10-40]
  jne r5, r4, jmp_4178
  ldxdw r4, [r6+32]
  ldxdw r5, [r10-32]
  jne r5, r4, jmp_4178
  mov64 r4, 0
  ldxdw r5, [r6+40]
  ldxdw r0, [r10-24]
  jeq r0, r5, jmp_4180

jmp_4178:
  mov64 r4, 1

jmp_4180:
  lddw r0, 2880249322
  jeq r3, 0, jmp_7330
  jne r4, 0, jmp_7330
  ldxdw r3, [r10-2200]
  ldxb r3, [r3+0]
  jge r3, 2, jmp_6f60

jmp_41b8:
  stxb [r1+648], r3
  stw [r1+649], 0
  stw [r1+652], 0
  ldxdw r2, [r1+648]
  lddw r3, -776322487371443039
  xor64 r2, r3
  stxdw [r1+648], r2
  ja jmp_6f40

jmp_4200:
  stxdw [r10-2200], r9
  jeq r2, 6, jmp_5100
  jne r2, 7, jmp_76c0
  mov64 r1, r7
  mov64 r6, 0
  and64 r1, -8
  jeq r1, 0, jmp_42b8
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_4270:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_4270

jmp_42b8:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2144
  mov64 r2, r10
  add64 r2, -2096
  ldxdw r3, [r10-2192]
  ldxdw r4, [r10-2200]
  mov64 r5, r7
  call fn_124a8  ; → → → → custom_panic
  ldxw r0, [r10-2140]
  ldxw r9, [r10-2144]
  ja jmp_7330

jmp_43b8:
  stxdw [r10-2192], r6
  stxdw [r10-2200], r9
  jeq r2, 16, jmp_5d70
  jne r2, 18, jmp_7738
  mov64 r9, 0
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_4480
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  ldxdw r5, [r10-2200]

jmp_4438:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_4438

jmp_4480:
  ldxdw r8, [r10-2200]
  add64 r8, r1
  stdw [r10-48], 0
  and64 r7, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2200], r1
  mov64 r2, r8
  mov64 r3, r7
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2200]
  mov64 r3, r7
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7330
  ldxdw r4, [r10-2096]
  ldxb r2, [r4+1]
  ldxdw r1, [r10-2088]
  ldxdw r3, [r1+624]
  stxdw [r10-24], r3
  ldxdw r3, [r1+616]
  stxdw [r10-32], r3
  ldxdw r3, [r1+608]
  stxdw [r10-40], r3
  ldxdw r3, [r1+600]
  stxdw [r10-48], r3
  ldxdw r3, [r1+1808]
  jgt r3, 4, jmp_4640
  lddw r5, 333855179453154247
  ldxdw r0, [r10-40]
  xor64 r0, r5
  lddw r5, -334136658724897736
  ldxdw r6, [r10-48]
  xor64 r6, r5
  stxdw [r10-48], r6
  stxdw [r10-40], r0
  lddw r5, 333573717361279942
  ldxdw r0, [r10-32]
  xor64 r0, r5
  stxdw [r10-32], r0
  lddw r5, 333292238089536453
  ldxdw r0, [r10-24]
  xor64 r0, r5
  stxdw [r10-24], r0

jmp_4640:
  ldxdw r5, [r4+8]
  ldxdw r0, [r10-48]
  jne r0, r5, jmp_46a8
  ldxdw r5, [r4+16]
  ldxdw r0, [r10-40]
  jne r0, r5, jmp_46a8
  ldxdw r5, [r4+24]
  ldxdw r0, [r10-32]
  jne r0, r5, jmp_46a8
  mov64 r5, 0
  ldxdw r4, [r4+32]
  ldxdw r0, [r10-24]
  jeq r0, r4, jmp_46b0

jmp_46a8:
  mov64 r5, 1

jmp_46b0:
  lddw r0, 2880249322
  jeq r2, 0, jmp_7330
  jne r5, 0, jmp_7330
  mov64 r0, 47828
  jne r3, 4, jmp_7330
  ldxdw r2, [r1+616]
  lddw r3, 333573717361279942
  xor64 r2, r3
  ldxdw r3, [r1+608]
  lddw r4, 333855179453154247
  xor64 r3, r4
  ldxdw r4, [r1+600]
  lddw r5, -334136658724897736
  xor64 r4, r5
  stxdw [r1+600], r4
  stxdw [r1+608], r3
  stxdw [r1+616], r2
  ldxdw r2, [r1+624]
  lddw r3, 333292238089536453
  xor64 r2, r3
  stxdw [r1+624], r2
  stdw [r1+1808], 5
  ja jmp_6f40

jmp_4790:
  jeq r2, 0, jmp_6810
  jne r2, 2, jmp_7768
  mov64 r1, r7
  and64 r1, -8
  stxdw [r10-2192], r6
  mov64 r6, 0
  jeq r1, 0, jmp_4848
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_4800:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_4800

jmp_4848:
  stxdw [r10-2200], r9
  add64 r9, r1
  stdw [r10-48], 0
  mov64 r8, r7
  and64 r8, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r9
  mov64 r3, r8
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r9
  ldxdw r2, [r10-2208]
  mov64 r3, r8
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2176
  mov64 r2, r10
  add64 r2, -2096
  ldxdw r3, [r10-2192]
  ldxdw r4, [r10-2200]
  mov64 r5, r7
  call fn_7ab8
  ldxw r0, [r10-2172]
  ldxw r9, [r10-2176]
  ja jmp_7330

jmp_4948:
  stxdw [r2+8], r1
  ldxdw r3, [r1+80]
  add64 r1, r3
  add64 r1, 10343
  and64 r1, -8
  ldxb r3, [r1+0]
  jne r3, 255, jmp_3370

jmp_4980:
  stxdw [r2+16], r1
  ldxdw r3, [r1+80]
  add64 r1, r3
  add64 r1, 10343
  and64 r1, -8
  ldxb r3, [r1+0]
  jne r3, 255, jmp_33b8

jmp_49b8:
  stxdw [r2+24], r1
  ldxdw r3, [r1+80]
  add64 r1, r3
  add64 r1, 10343
  and64 r1, -8
  ldxb r3, [r1+0]
  jne r3, 255, jmp_3400

jmp_49f0:
  stxdw [r2+32], r1
  ja jmp_3538

jmp_4a00:
  stxdw [r2+8], r1
  ldxdw r3, [r1+80]
  add64 r1, r3
  add64 r1, 10343
  and64 r1, -8
  ldxb r3, [r1+0]
  jne r3, 255, jmp_34f0

jmp_4a38:
  stxdw [r2+16], r1
  ja jmp_3538

jmp_4a48:
  stxdw [r2+8], r1
  ldxdw r3, [r1+80]
  add64 r1, r3
  add64 r1, 10343
  and64 r1, -8
  ldxb r3, [r1+0]
  jne r3, 255, jmp_3d90

jmp_4a80:
  stxdw [r2+16], r1
  ldxdw r3, [r1+80]
  add64 r1, r3
  add64 r1, 10343
  and64 r1, -8
  ldxb r3, [r1+0]
  jne r3, 255, jmp_3dd8

jmp_4ab8:
  stxdw [r2+24], r1
  ja jmp_3538

jmp_4ac8:
  jne r2, 11, jmp_77e0
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_4b70
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_4b28:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_4b28

jmp_4b70:
  stxdw [r10-2200], r9
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7328
  jne r7, 8, jmp_70b0
  ldxdw r1, [r10-2200]
  and64 r1, 7
  mov64 r9, 0
  jne r1, 0, jmp_70d8
  ldxdw r4, [r10-2096]
  ldxb r3, [r4+1]
  ldxdw r1, [r10-2088]
  ldxdw r2, [r1+624]
  stxdw [r10-24], r2
  ldxdw r2, [r1+616]
  stxdw [r10-32], r2
  ldxdw r2, [r1+608]
  stxdw [r10-40], r2
  ldxdw r2, [r1+600]
  stxdw [r10-48], r2
  ldxdw r2, [r1+1808]
  jgt r2, 4, jmp_4d68
  lddw r5, 333855179453154247
  ldxdw r0, [r10-40]
  xor64 r0, r5
  lddw r5, -334136658724897736
  ldxdw r6, [r10-48]
  xor64 r6, r5
  stxdw [r10-48], r6
  stxdw [r10-40], r0
  lddw r5, 333573717361279942
  ldxdw r0, [r10-32]
  xor64 r0, r5
  stxdw [r10-32], r0
  lddw r5, 333292238089536453
  ldxdw r0, [r10-24]
  xor64 r0, r5
  stxdw [r10-24], r0

jmp_4d68:
  ldxdw r5, [r4+8]
  ldxdw r0, [r10-48]
  jne r0, r5, jmp_4dd0
  ldxdw r5, [r4+16]
  ldxdw r0, [r10-40]
  jne r0, r5, jmp_4dd0
  ldxdw r5, [r4+24]
  ldxdw r0, [r10-32]
  jne r0, r5, jmp_4dd0
  mov64 r5, 0
  ldxdw r4, [r4+32]
  ldxdw r0, [r10-24]
  jeq r0, r4, jmp_4dd8

jmp_4dd0:
  mov64 r5, 1

jmp_4dd8:
  lddw r0, 2880249322
  jeq r3, 0, jmp_7330
  jne r5, 0, jmp_7330
  ldxdw r3, [r10-2200]
  ldxdw r3, [r3+0]
  lddw r4, 5782998650930657501
  xor64 r3, r4
  stxdw [r1+888], r3
  mov64 r0, 47828
  jne r2, 2, jmp_7330
  stdw [r1+1808], 4
  ja jmp_6f40

jmp_4e48:
  mov64 r9, 0
  jne r6, 3, jmp_7330
  jne r7, 64, jmp_7330
  ldxb r4, [r8+9]
  ldxdw r2, [r10-2080]
  ldxdw r2, [r2+88]
  ldxdw r3, [r10-2088]
  ldxdw r5, [r3+624]
  stxdw [r10-24], r5
  ldxdw r5, [r3+616]
  stxdw [r10-32], r5
  ldxdw r5, [r3+608]
  stxdw [r10-40], r5
  ldxdw r5, [r3+600]
  stxdw [r10-48], r5
  ldxdw r5, [r3+1808]
  jgt r5, 4, jmp_4f70
  lddw r5, 333855179453154247
  ldxdw r0, [r10-40]
  xor64 r0, r5
  lddw r5, -334136658724897736
  ldxdw r6, [r10-48]
  xor64 r6, r5
  stxdw [r10-48], r6
  stxdw [r10-40], r0
  lddw r5, 333573717361279942
  ldxdw r0, [r10-32]
  xor64 r0, r5
  stxdw [r10-32], r0
  lddw r5, 333292238089536453
  ldxdw r0, [r10-24]
  xor64 r0, r5
  stxdw [r10-24], r0

jmp_4f70:
  ldxdw r5, [r8+16]
  ldxdw r0, [r10-48]
  jne r0, r5, jmp_4fd8
  ldxdw r5, [r8+24]
  ldxdw r0, [r10-40]
  jne r0, r5, jmp_4fd8
  ldxdw r5, [r8+32]
  ldxdw r0, [r10-32]
  jne r0, r5, jmp_4fd8
  mov64 r5, 0
  ldxdw r0, [r8+40]
  ldxdw r6, [r10-24]
  jeq r6, r0, jmp_4fe0

jmp_4fd8:
  mov64 r5, 1

jmp_4fe0:
  lddw r0, 2880249322
  jeq r4, 0, jmp_7330
  jne r5, 0, jmp_7330
  ldxdw r5, [r3+688]
  lddw r0, 7970776174128921066
  xor64 r5, r0
  ldxdw r4, [r1+32]
  mov64 r6, r4
  xor64 r6, r0
  jgt r5, r6, jmp_72f0
  ldxdw r5, [r1+48]
  lddw r0, 7988788236180384746
  xor64 r5, r0
  stxdw [r1+48], r5
  jlt r5, r2, jmp_7300
  ldxdw r5, [r1+8]
  ldxdw r0, [r1+16]
  stxdw [r3+672], r0
  stxdw [r3+664], r5
  ldxdw r5, [r1+24]
  stxdw [r3+688], r4
  stxdw [r3+680], r5
  ldxdw r4, [r1+40]
  stxdw [r3+696], r4
  lddw r4, 7970776174128919018
  xor64 r2, r4
  ldxdw r4, [r1+56]
  stxdw [r3+800], r4
  ldxdw r1, [r1+64]
  stxdw [r3+704], r2
  stxdw [r3+888], r1
  ja jmp_6f40

jmp_5100:
  mov64 r9, 0
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_51a8
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  ldxdw r5, [r10-2200]

jmp_5160:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_5160

jmp_51a8:
  ldxdw r8, [r10-2200]
  add64 r8, r1
  stdw [r10-48], 0
  and64 r7, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2200], r1
  mov64 r2, r8
  mov64 r3, r7
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2200]
  mov64 r3, r7
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7330
  ldxdw r7, [r10-2096]
  ldxdw r6, [r10-2088]
  mov64 r1, r6
  add64 r1, 40
  mov64 r4, r10
  add64 r4, -48
  lddw r2, data_0010
  mov64 r3, 32
  call sol_memcmp_
  ldxw r1, [r10-48]
  ldxb r2, [r7+1]
  ldxdw r3, [r6+624]
  stxdw [r10-24], r3
  ldxdw r3, [r6+616]
  stxdw [r10-32], r3
  ldxdw r3, [r6+608]
  stxdw [r10-40], r3
  ldxdw r3, [r6+600]
  stxdw [r10-48], r3
  ldxdw r3, [r6+1808]
  jgt r3, 4, jmp_53b0
  lddw r3, 333855179453154247
  ldxdw r4, [r10-40]
  xor64 r4, r3
  lddw r3, -334136658724897736
  ldxdw r5, [r10-48]
  xor64 r5, r3
  stxdw [r10-48], r5
  stxdw [r10-40], r4
  lddw r3, 333573717361279942
  ldxdw r4, [r10-32]
  xor64 r4, r3
  stxdw [r10-32], r4
  lddw r3, 333292238089536453
  ldxdw r4, [r10-24]
  xor64 r4, r3
  stxdw [r10-24], r4

jmp_53b0:
  ldxdw r3, [r10-48]
  be64 r3
  ldxdw r5, [r7+8]
  be64 r5
  jne r3, r5, jmp_5458
  ldxdw r3, [r10-40]
  be64 r3
  ldxdw r5, [r7+16]
  be64 r5
  jne r3, r5, jmp_5458
  ldxdw r3, [r10-32]
  be64 r3
  ldxdw r5, [r7+24]
  be64 r5
  jne r3, r5, jmp_5458
  mov64 r4, 0
  ldxdw r3, [r10-24]
  be64 r3
  ldxdw r5, [r7+32]
  be64 r5
  jeq r3, r5, jmp_5470

jmp_5458:
  mov64 r4, -1
  jlt r3, r5, jmp_5470
  mov64 r4, 1

jmp_5470:
  lddw r0, 2880249322
  jeq r2, 0, jmp_7330
  or64 r4, r1
  lsh64 r4, 32
  rsh64 r4, 32
  jne r4, 0, jmp_7330
  lddw r1, 7970776174128921066
  stxdw [r6+688], r1
  ja jmp_6f40

jmp_54c8:
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_5570
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_5528:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_5528

jmp_5570:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2216], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2216]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7328
  ldxdw r2, [r10-2208]
  jne r7, 16, jmp_70b0
  ldxdw r1, [r10-2200]
  and64 r1, 7
  mov64 r9, 0
  jne r1, 0, jmp_70d8
  ldxdw r5, [r10-2096]
  ldxb r4, [r5+1]
  ldxdw r1, [r10-2088]
  ldxdw r3, [r1+624]
  stxdw [r10-24], r3
  ldxdw r3, [r1+616]
  stxdw [r10-32], r3
  ldxdw r3, [r1+608]
  stxdw [r10-40], r3
  ldxdw r3, [r1+600]
  stxdw [r10-48], r3
  ldxdw r3, [r1+1808]
  jgt r3, 4, jmp_5768
  lddw r0, 333855179453154247
  ldxdw r6, [r10-40]
  xor64 r6, r0
  lddw r0, -334136658724897736
  ldxdw r7, [r10-48]
  xor64 r7, r0
  stxdw [r10-48], r7
  stxdw [r10-40], r6
  lddw r0, 333573717361279942
  ldxdw r6, [r10-32]
  xor64 r6, r0
  stxdw [r10-32], r6
  lddw r0, 333292238089536453
  ldxdw r6, [r10-24]
  xor64 r6, r0
  stxdw [r10-24], r6

jmp_5768:
  ldxdw r0, [r5+8]
  ldxdw r6, [r10-48]
  jne r6, r0, jmp_57d0
  ldxdw r0, [r5+16]
  ldxdw r6, [r10-40]
  jne r6, r0, jmp_57d0
  ldxdw r0, [r5+24]
  ldxdw r6, [r10-32]
  jne r6, r0, jmp_57d0
  mov64 r6, 0
  ldxdw r5, [r5+32]
  ldxdw r0, [r10-24]
  jeq r0, r5, jmp_57d8

jmp_57d0:
  mov64 r6, 1

jmp_57d8:
  lddw r0, 2880249322
  jeq r4, 0, jmp_7330
  jne r6, 0, jmp_7330
  ldxdw r4, [r2+8]
  lddw r5, 3888626711804536043
  xor64 r4, r5
  stxdw [r1+896], r4
  ldxdw r2, [r2+16]
  lddw r4, -7676137843536847794
  xor64 r2, r4
  stxdw [r1+904], r2
  mov64 r0, 47828
  jne r3, 5, jmp_7330
  stdw [r1+1808], 6
  ja jmp_6f40

jmp_5868:
  stxdw [r10-2192], r6
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_5918
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_58d0:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_58d0

jmp_5918:
  stxdw [r10-2200], r9
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2216], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2216]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7328
  jne r7, 48, jmp_70b0
  ldxdw r1, [r10-2200]
  and64 r1, 7
  ldxdw r2, [r10-2208]
  mov64 r9, 0
  jne r1, 0, jmp_70d8
  ldxdw r5, [r10-2096]
  ldxb r4, [r5+1]
  ldxdw r1, [r10-2088]
  ldxdw r3, [r1+624]
  stxdw [r10-24], r3
  ldxdw r3, [r1+616]
  stxdw [r10-32], r3
  ldxdw r3, [r1+608]
  stxdw [r10-40], r3
  ldxdw r3, [r1+600]
  stxdw [r10-48], r3
  ldxdw r3, [r1+1808]
  jgt r3, 4, jmp_5b18
  lddw r0, 333855179453154247
  ldxdw r6, [r10-40]
  xor64 r6, r0
  lddw r0, -334136658724897736
  ldxdw r7, [r10-48]
  xor64 r7, r0
  stxdw [r10-48], r7
  stxdw [r10-40], r6
  lddw r0, 333573717361279942
  ldxdw r6, [r10-32]
  xor64 r6, r0
  stxdw [r10-32], r6
  lddw r0, 333292238089536453
  ldxdw r6, [r10-24]
  xor64 r6, r0
  stxdw [r10-24], r6

jmp_5b18:
  ldxdw r0, [r5+8]
  ldxdw r6, [r10-48]
  jne r6, r0, jmp_5b80
  ldxdw r0, [r5+16]
  ldxdw r6, [r10-40]
  jne r6, r0, jmp_5b80
  ldxdw r0, [r5+24]
  ldxdw r6, [r10-32]
  jne r6, r0, jmp_5b80
  mov64 r6, 0
  ldxdw r5, [r5+32]
  ldxdw r0, [r10-24]
  jeq r0, r5, jmp_5b88

jmp_5b80:
  mov64 r6, 1

jmp_5b88:
  lddw r0, 2880249322
  jeq r4, 0, jmp_7330
  jne r6, 0, jmp_7330
  mov64 r0, 47828
  jlt r3, 7, jmp_7330
  ldxdw r5, [r10-2200]
  ldxdw r4, [r5+0]
  jne r4, 0, jmp_5c00
  ldxdw r4, [r5+8]
  jne r4, 0, jmp_5c00
  ldxdw r4, [r5+16]
  jne r4, 0, jmp_5c00
  ldxdw r4, [r5+24]
  jeq r4, 0, jmp_7098

jmp_5c00:
  mov64 r4, 1
  jeq r4, 0, jmp_7070

jmp_5c10:
  ldxdw r7, [r10-2200]
  ldxdw r4, [r7+16]
  stxdw [r1+1008], r4
  lddw r5, 333573717361279942
  xor64 r4, r5
  ldxdw r5, [r7+8]
  stxdw [r1+1000], r5
  lddw r0, 333855179453154247
  xor64 r5, r0
  ldxdw r0, [r7+0]
  stxdw [r1+992], r0
  lddw r6, -334136658724897736
  xor64 r0, r6
  ldxdw r6, [r7+24]
  stxdw [r1+992], r0
  stxdw [r1+1000], r5
  stxdw [r1+1008], r4
  stxdw [r1+1016], r6
  lddw r4, 333292238089536453
  xor64 r6, r4
  stxdw [r1+1016], r6
  ldxdw r4, [r2+40]
  lddw r5, -3511660658014627556
  xor64 r4, r5
  stxdw [r1+1024], r4
  ldxb r2, [r2+48]
  jeq r2, 0, jmp_5d50
  stw [r1+649], 0
  stb [r1+648], 2
  stw [r1+652], 0
  ldxdw r2, [r1+648]
  lddw r4, -776322487371443039
  xor64 r2, r4
  stxdw [r1+648], r2

jmp_5d50:
  mov64 r9, 26
  jne r3, 7, jmp_6f48
  stdw [r1+1808], 8
  ja jmp_6f48

jmp_5d70:
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_5e18
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_5dd0:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_5dd0

jmp_5e18:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2216], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2216]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  mov64 r9, 0
  ldxdw r3, [r10-2192]
  jlt r3, 10, jmp_7330
  jne r7, 24, jmp_70b0
  ldxdw r1, [r10-2200]
  and64 r1, 7
  ldxdw r2, [r10-2208]
  jne r1, 0, jmp_70d8
  mov64 r1, r10
  add64 r1, -2048
  mov64 r7, 3
  ldxb r4, [r2+26]
  mov64 r5, 3
  jeq r4, 1, jmp_5f48
  mov64 r7, 0
  ldxb r5, [r2+25]

jmp_5f48:
  ldxdw r0, [r2+8]
  ldxdw r6, [r2+16]
  ldxb r2, [r2+24]
  stxb [r10-24], r4
  stxdw [r10-32], r7
  stxdw [r10-40], r5
  stw [r10-23], 0
  stw [r10-20], 0
  stdw [r10-48], 1
  ldxdw r4, [r10-2040]
  ldxdw r7, [r10-2024]
  mov64 r5, r10
  add64 r5, -48
  stxdw [r10-4056], r5
  stxdw [r10-4064], r2
  stxdw [r10-4072], r6
  stxdw [r10-4080], r0
  stxdw [r10-4088], r1
  stxdw [r10-4096], r7
  stdw [r10-4048], 10
  mov64 r1, r10
  add64 r1, -2112
  mov64 r2, r10
  add64 r2, -2096
  mov64 r5, r10
  call fn_db48
  ldxw r0, [r10-2108]
  ldxw r9, [r10-2112]
  ja jmp_7330

jmp_6030:
  mov64 r1, r7
  mov64 r6, 0
  and64 r1, -8
  jeq r1, 0, jmp_60d0
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_6088:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_6088

jmp_60d0:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2168
  mov64 r2, r10
  add64 r2, -2096
  ldxdw r3, [r10-2192]
  ldxdw r4, [r10-2200]
  mov64 r5, r7
  call fn_8068  ; → → sol_memcmp_
  ldxw r0, [r10-2164]
  ldxw r9, [r10-2168]
  ja jmp_7330

jmp_61d0:
  stxdw [r10-2192], r6
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_6280
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_6238:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_6238

jmp_6280:
  stxdw [r10-2200], r9
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2216], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2216]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  lddw r0, 3134983649
  ldxdw r3, [r10-2192]
  jlt r3, 12, jmp_7328
  lddw r0, 3134983661
  mov64 r9, 0
  jne r7, 24, jmp_7330
  ldxdw r1, [r10-2200]
  and64 r1, 7
  jne r1, 0, jmp_70d8
  ldxdw r1, [r10-2208]
  ldxdw r4, [r1+8]
  ldxdw r2, [r1+16]
  ldxb r1, [r1+24]
  stxdw [r10-4088], r1
  stxdw [r10-4096], r2
  stdw [r10-4056], 12
  stdw [r10-4064], 0
  stdw [r10-4072], 0
  stdw [r10-4080], 0
  mov64 r1, r10
  add64 r1, -2120
  mov64 r2, r10
  add64 r2, -2096
  mov64 r5, r10
  call fn_f8d0
  ldxw r0, [r10-2116]
  ldxw r9, [r10-2120]
  ja jmp_7330

jmp_6420:
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_64c8
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_6480:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_6480

jmp_64c8:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2216], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2216]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 2, jmp_7328
  jne r7, 80, jmp_70b0
  ldxdw r2, [r10-2200]
  and64 r2, 7
  ldxdw r1, [r10-2208]
  mov64 r9, 0
  jne r2, 0, jmp_70d8
  ldxdw r3, [r10-2096]
  ldxb r2, [r3+1]
  ldxdw r6, [r10-2088]
  ldxdw r4, [r6+624]
  stxdw [r10-24], r4
  ldxdw r4, [r6+616]
  stxdw [r10-32], r4
  ldxdw r4, [r6+608]
  stxdw [r10-40], r4
  ldxdw r4, [r6+600]
  stxdw [r10-48], r4
  ldxdw r7, [r6+1808]
  jgt r7, 4, jmp_66c0
  lddw r4, 333855179453154247
  ldxdw r5, [r10-40]
  xor64 r5, r4
  lddw r4, -334136658724897736
  ldxdw r0, [r10-48]
  xor64 r0, r4
  stxdw [r10-48], r0
  stxdw [r10-40], r5
  lddw r4, 333573717361279942
  ldxdw r5, [r10-32]
  xor64 r5, r4
  stxdw [r10-32], r5
  lddw r4, 333292238089536453
  ldxdw r5, [r10-24]
  xor64 r5, r4
  stxdw [r10-24], r5

jmp_66c0:
  ldxdw r4, [r3+8]
  ldxdw r5, [r10-48]
  jne r5, r4, jmp_6728
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-40]
  jne r5, r4, jmp_6728
  ldxdw r4, [r3+24]
  ldxdw r5, [r10-32]
  jne r5, r4, jmp_6728
  mov64 r4, 0
  ldxdw r3, [r3+32]
  ldxdw r5, [r10-24]
  jeq r5, r3, jmp_6730

jmp_6728:
  mov64 r4, 1

jmp_6730:
  lddw r0, 2880249322
  jeq r2, 0, jmp_7330
  jne r4, 0, jmp_7330
  lddw r0, 3134983665
  ldxdw r2, [r1+16]
  jgt r2, 500000, jmp_7330
  ldxdw r3, [r1+24]
  ldxdw r4, [r1+8]
  jgt r3, r4, jmp_67f8
  ldxdw r4, [r1+32]
  jgt r4, r2, jmp_67f8
  ldxdw r2, [r1+40]
  jgt r2, r3, jmp_67f8
  ldxdw r3, [r1+48]
  jgt r3, r4, jmp_67f8
  ldxdw r4, [r1+56]
  jgt r4, r2, jmp_67f8
  ldxdw r2, [r1+64]
  jgt r2, r3, jmp_67f8
  ldxdw r3, [r1+72]
  jgt r3, r4, jmp_67f8
  ldxdw r1, [r1+80]
  jle r1, r2, jmp_7118

jmp_67f8:
  lddw r0, 3134983664
  ja jmp_7330

jmp_6810:
  ldxdw r1, [r3+0]
  lddw r2, -1632001642340221574
  jne r1, r2, jmp_6898
  ldxdw r1, [r3+8]
  lddw r2, 8827510275200544966
  jne r1, r2, jmp_6898
  ldxdw r1, [r3+16]
  lddw r2, 7913477912056730528
  jne r1, r2, jmp_6898
  mov64 r1, 0
  ldxdw r2, [r3+24]
  lddw r3, -3189807322954948524
  jeq r2, r3, jmp_68a0

jmp_6898:
  mov64 r1, 1

jmp_68a0:
  mov64 r0, 233811181
  jne r1, 0, jmp_7600
  mov64 r1, r9
  mov64 r2, r7
  call fn_1cd8  ; → → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2184
  mov64 r2, r10
  add64 r2, -2096
  mov64 r3, r6
  mov64 r4, r9
  mov64 r5, r7
  call fn_9700
  ldxw r0, [r10-2180]
  ldxw r9, [r10-2184]
  ja jmp_7330

jmp_6920:
  mov64 r1, r7
  mov64 r6, 0
  and64 r1, -8
  jeq r1, 0, jmp_69c0
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_6978:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_6978

jmp_69c0:
  mov64 r8, r9
  add64 r8, r1
  stdw [r10-48], 0
  mov64 r9, r7
  and64 r9, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2208], r1
  mov64 r2, r8
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r8
  ldxdw r2, [r10-2208]
  mov64 r3, r9
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r10
  add64 r1, -2152
  mov64 r2, r10
  add64 r2, -2096
  ldxdw r3, [r10-2192]
  ldxdw r4, [r10-2200]
  mov64 r5, r7
  call fn_11c18
  ldxw r0, [r10-2148]
  ldxw r9, [r10-2152]
  ja jmp_7330

jmp_6ac0:
  stxdw [r10-2208], r1
  mov64 r1, r7
  and64 r1, -8
  mov64 r6, 0
  jeq r1, 0, jmp_6b68
  mov64 r2, r1
  neg64 r2
  lddw r3, -4329161132679889094
  lddw r4, 281479271743489
  mov64 r5, r9

jmp_6b20:
  ldxdw r0, [r5+0]
  mov64 r8, r6
  xor64 r8, r0
  xor64 r8, r3
  stxdw [r5+0], r8
  add64 r6, r4
  add64 r5, 8
  add64 r2, 8
  jne r2, 0, jmp_6b20

jmp_6b68:
  add64 r9, r1
  stdw [r10-48], 0
  mov64 r8, r7
  and64 r8, 7
  mov64 r1, r10
  add64 r1, -48
  stxdw [r10-2200], r1
  mov64 r2, r9
  mov64 r3, r8
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-48]
  xor64 r6, r1
  lddw r1, -4329161132679889094
  xor64 r6, r1
  stxdw [r10-48], r6
  mov64 r1, r9
  ldxdw r2, [r10-2200]
  mov64 r3, r8
  call fn_2fe08  ; → sol_memcpy_
  mov64 r0, 195936478
  ldxdw r1, [r10-2192]
  jne r1, 3, jmp_7328
  jne r7, 64, jmp_7328
  ldxdw r1, [r10-2080]
  ldxdw r2, [r1+88]
  ldxdw r4, [r10-2096]
  ldxb r3, [r4+1]
  ldxdw r1, [r10-2088]
  ldxdw r5, [r1+624]
  stxdw [r10-24], r5
  ldxdw r5, [r1+616]
  stxdw [r10-32], r5
  ldxdw r5, [r1+608]
  stxdw [r10-40], r5
  ldxdw r5, [r1+600]
  stxdw [r10-48], r5
  ldxdw r5, [r1+1808]
  mov64 r9, 0
  jgt r5, 4, jmp_6d48
  lddw r5, 333855179453154247
  ldxdw r0, [r10-40]
  xor64 r0, r5
  lddw r5, -334136658724897736
  ldxdw r6, [r10-48]
  xor64 r6, r5
  stxdw [r10-48], r6
  stxdw [r10-40], r0
  lddw r5, 333573717361279942
  ldxdw r0, [r10-32]
  xor64 r0, r5
  stxdw [r10-32], r0
  lddw r5, 333292238089536453
  ldxdw r0, [r10-24]
  xor64 r0, r5
  stxdw [r10-24], r0

jmp_6d48:
  ldxdw r5, [r4+8]
  ldxdw r0, [r10-48]
  ldxdw r6, [r10-2208]
  jne r0, r5, jmp_6db8
  ldxdw r5, [r4+16]
  ldxdw r0, [r10-40]
  jne r0, r5, jmp_6db8
  ldxdw r5, [r4+24]
  ldxdw r0, [r10-32]
  jne r0, r5, jmp_6db8
  mov64 r5, 0
  ldxdw r4, [r4+32]
  ldxdw r0, [r10-24]
  jeq r0, r4, jmp_6dc0

jmp_6db8:
  mov64 r5, 1

jmp_6dc0:
  lddw r0, 2880249322
  jeq r3, 0, jmp_7330
  jne r5, 0, jmp_7330
  ldxdw r4, [r1+688]
  lddw r3, 7970776174128921066
  xor64 r4, r3
  ldxdw r3, [r6+32]
  jgt r4, r3, jmp_72f0
  lddw r0, 3735929054
  ldxdw r4, [r6+48]
  jlt r4, r2, jmp_7330
  ldxdw r4, [r6+16]
  lddw r5, 5091621654840839129
  xor64 r4, r5
  ldxdw r5, [r6+8]
  stxdw [r1+672], r4
  lddw r4, -5091340175569095642
  xor64 r5, r4
  stxdw [r1+664], r5
  lddw r4, 7970776174128921066
  xor64 r3, r4
  ldxdw r5, [r6+24]
  stxdw [r1+688], r3
  xor64 r5, r4
  stxdw [r1+680], r5
  lddw r3, 7970776174128919018
  xor64 r2, r3
  ldxdw r4, [r6+40]
  stxdw [r1+704], r2
  xor64 r4, r3
  stxdw [r1+696], r4
  lddw r2, -3235412798162765972
  ldxdw r3, [r6+56]
  xor64 r3, r2
  stxdw [r1+800], r3
  ldxdw r2, [r6+64]
  lddw r3, 5782998650930657501
  xor64 r2, r3
  stxdw [r1+888], r2

jmp_6f40:
  mov64 r9, 26

jmp_6f48:
  ja jmp_7330

jmp_6f50:
  stxdw [r2+8], r1
  ja jmp_3538

jmp_6f60:
  lddw r0, 3134983657
  jne r3, 2, jmp_7330
  mov64 r0, 47828
  jlt r2, 8, jmp_7330
  ldxdw r2, [r1+1008]
  lddw r4, 333573717361279942
  xor64 r2, r4
  ldxdw r4, [r1+1016]
  lddw r5, 333292238089536453
  xor64 r4, r5
  ldxdw r5, [r1+992]
  ldxdw r0, [r1+1000]
  stxdw [r10-24], r4
  stxdw [r10-32], r2
  lddw r2, 333855179453154247
  xor64 r0, r2
  stxdw [r10-40], r0
  lddw r2, -334136658724897736
  xor64 r5, r2
  stxdw [r10-48], r5
  jne r5, 0, jmp_7060
  ldxdw r2, [r10-40]
  jne r2, 0, jmp_7060
  ldxdw r2, [r10-32]
  jne r2, 0, jmp_7060
  ldxdw r2, [r10-24]
  jeq r2, 0, jmp_7100

jmp_7060:
  mov64 r2, 1
  jne r2, 0, jmp_41b8

jmp_7070:
  lddw r0, 3134983666
  ja jmp_7330

jmp_7088:
  mov64 r1, r2
  ja jmp_3558

jmp_7098:
  mov64 r4, 0
  jne r4, 0, jmp_5c10
  ja jmp_7070

jmp_70b0:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_70d8:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_7100:
  mov64 r2, 0
  jne r2, 0, jmp_41b8
  ja jmp_7070

jmp_7118:
  jne r1, 0, jmp_7330
  mov64 r1, r6
  add64 r1, 912
  ldxdw r2, [r10-2200]
  mov64 r3, 80
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r6+960]
  lddw r2, 44376852934273466
  xor64 r1, r2
  ldxdw r2, [r6+952]
  lddw r3, 44658315026016699
  xor64 r2, r3
  ldxdw r3, [r6+944]
  lddw r4, 44939794297629116
  xor64 r3, r4
  ldxdw r4, [r6+936]
  lddw r5, 42969490935425469
  xor64 r4, r5
  ldxdw r5, [r6+928]
  lddw r0, 43250970207037886
  xor64 r5, r0
  ldxdw r0, [r6+920]
  lddw r8, 43532432298781119
  xor64 r0, r8
  ldxdw r8, [r6+912]
  lddw r9, -43813911570436544
  xor64 r8, r9
  stxdw [r6+912], r8
  stxdw [r6+920], r0
  stxdw [r6+928], r5
  stxdw [r6+936], r4
  stxdw [r6+944], r3
  stxdw [r6+952], r2
  stxdw [r6+960], r1
  ldxdw r1, [r6+968]
  lddw r2, 44095373662661049
  xor64 r1, r2
  stxdw [r6+968], r1
  ldxdw r1, [r6+976]
  lddw r2, 41562146116970936
  xor64 r1, r2
  stxdw [r6+976], r1
  ldxdw r1, [r6+984]
  lddw r2, 41280666845358519
  xor64 r1, r2
  stxdw [r6+984], r1
  jne r7, 6, jmp_7318
  stdw [r6+1808], 7
  ja jmp_6f40

jmp_72f0:
  mov64 r0, 57005
  ja jmp_7330

jmp_7300:
  lddw r0, 3735929054
  ja jmp_7330

jmp_7318:
  jgt r7, 5, jmp_6f40
  mov64 r0, 47828

jmp_7328:
  mov64 r9, 0

jmp_7330:
  lsh64 r9, 32
  rsh64 r9, 32
  jsle r9, 12, jmp_7380
  jsgt r9, 19, jmp_73b8
  jsle r9, 15, jmp_7418
  jsgt r9, 17, jmp_74b8
  jne r9, 16, jmp_7598
  lddw r0, 73014444032
  ja jmp_7610

jmp_7380:
  jsle r9, 5, jmp_73e8
  jsle r9, 8, jmp_7468
  jsgt r9, 10, jmp_7500
  jne r9, 9, jmp_7648
  lddw r0, 42949672960
  ja jmp_7610

jmp_73b8:
  jsle r9, 22, jmp_7440
  jsgt r9, 24, jmp_74d8
  jne r9, 23, jmp_75b0
  lddw r0, 103079215104
  ja jmp_7610

jmp_73e8:
  jsgt r9, 2, jmp_7490
  jeq r9, 0, jmp_75e0
  jne r9, 1, jmp_7678
  lddw r0, 8589934592
  ja jmp_7610

jmp_7418:
  jeq r9, 13, jmp_7520
  jne r9, 14, jmp_7568
  lddw r0, 64424509440
  ja jmp_7610

jmp_7440:
  jeq r9, 20, jmp_7538
  jne r9, 21, jmp_7580
  lddw r0, 94489280512
  ja jmp_7610

jmp_7468:
  jeq r9, 6, jmp_7550
  jne r9, 7, jmp_7630
  lddw r0, 34359738368
  ja jmp_7610

jmp_7490:
  jeq r9, 3, jmp_7618
  jne r9, 4, jmp_7690
  lddw r0, 21474836480
  ja jmp_7610

jmp_74b8:
  jne r9, 18, jmp_75c8
  lddw r0, 81604378624
  ja jmp_7610

jmp_74d8:
  mov64 r0, 0
  jne r9, 25, jmp_7610
  lddw r0, 111669149696
  ja jmp_7610

jmp_7500:
  jne r9, 11, jmp_7660
  lddw r0, 51539607552
  ja jmp_7610

jmp_7520:
  lddw r0, 60129542144
  ja jmp_7610

jmp_7538:
  lddw r0, 90194313216
  ja jmp_7610

jmp_7550:
  lddw r0, 30064771072
  ja jmp_7610

jmp_7568:
  lddw r0, 68719476736
  ja jmp_7610

jmp_7580:
  lddw r0, 98784247808
  ja jmp_7610

jmp_7598:
  lddw r0, 77309411328
  ja jmp_7610

jmp_75b0:
  lddw r0, 107374182400
  ja jmp_7610

jmp_75c8:
  lddw r0, 85899345920
  ja jmp_7610

jmp_75e0:
  mov64 r1, r0
  lsh64 r1, 32
  rsh64 r1, 32
  jeq r1, 0, jmp_76a8

jmp_7600:
  lsh64 r0, 32
  rsh64 r0, 32

jmp_7610:
  exit

jmp_7618:
  lddw r0, 17179869184
  ja jmp_7610

jmp_7630:
  lddw r0, 38654705664
  ja jmp_7610

jmp_7648:
  lddw r0, 47244640256
  ja jmp_7610

jmp_7660:
  lddw r0, 55834574848
  ja jmp_7610

jmp_7678:
  lddw r0, 12884901888
  ja jmp_7610

jmp_7690:
  lddw r0, 25769803776
  ja jmp_7610

jmp_76a8:
  lddw r0, 4294967296
  ja jmp_7610

jmp_76c0:
  mov64 r1, r9
  mov64 r2, r7
  call fn_1cd8  ; → → sol_memcpy_
  lddw r1, 207296
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  lddw r2, 207336
  call fn_2de88  ; → → custom_panic

jmp_7738:
  lddw r1, data_01fc
  mov64 r2, 40
  lddw r3, 207384
  call fn_2deb8  ; → → → custom_panic

jmp_7768:
  mov64 r1, r9
  mov64 r2, r7
  call fn_1cd8  ; → → sol_memcpy_
  lddw r1, 207296
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  lddw r2, 207312
  call fn_2de88  ; → → custom_panic

jmp_77e0:
  mov64 r1, r9
  mov64 r2, r7
  call fn_1cd8  ; → → sol_memcpy_
  lddw r1, 207296
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  lddw r2, 207360
  call fn_2de88  ; → → custom_panic

fn_7858:
  ldxdw r0, [r5+0]
  lddw r6, 8629555902467136795
  jne r0, r6, jmp_78e0
  ldxdw r0, [r5+8]
  lddw r6, 3273688308099379272
  jne r0, r6, jmp_78e0
  ldxdw r0, [r5+16]
  lddw r6, 9125451549993889732
  jne r0, r6, jmp_78e0
  mov64 r0, 0
  ldxdw r5, [r5+24]
  lddw r6, 3565020137746494549
  jeq r5, r6, jmp_78e8

jmp_78e0:
  mov64 r0, 1

jmp_78e8:
  jeq r0, 0, jmp_7920
  and64 r2, 255
  jeq r2, 0, jmp_7920
  jne r2, 1, jmp_7938
  stw [r1+8], 7405
  stdw [r1+0], 1
  ja jmp_7aa0

jmp_7920:
  stw [r1+0], 0
  stdw [r1+8], 0
  ja jmp_7aa0

jmp_7938:
  ldxdw r2, [r4+920]
  lddw r5, 333573717361279942
  xor64 r2, r5
  ldxdw r5, [r4+928]
  lddw r0, 333292238089536453
  xor64 r5, r0
  ldxdw r0, [r4+904]
  ldxdw r6, [r4+912]
  stxdw [r10-8], r5
  stxdw [r10-16], r2
  lddw r2, 333855179453154247
  xor64 r6, r2
  stxdw [r10-24], r6
  lddw r2, -334136658724897736
  xor64 r0, r2
  stxdw [r10-32], r0
  jeq r3, 0, jmp_7a70
  ldxdw r2, [r3+0]
  ldxdw r3, [r2+8]
  ldxdw r5, [r10-32]
  jne r3, r5, jmp_7a50
  ldxdw r3, [r2+16]
  ldxdw r5, [r10-24]
  jne r3, r5, jmp_7a50
  ldxdw r3, [r2+24]
  ldxdw r5, [r10-16]
  jne r3, r5, jmp_7a50
  mov64 r3, 0
  ldxdw r5, [r2+32]
  ldxdw r0, [r10-8]
  jeq r5, r0, jmp_7a58

jmp_7a50:
  mov64 r3, 1

jmp_7a58:
  jne r3, 0, jmp_7a70
  ldxb r2, [r2+2]
  jeq r2, 0, jmp_7aa8

jmp_7a70:
  ldxdw r2, [r4+936]
  lddw r3, -3511660658014627556
  xor64 r2, r3

jmp_7a90:
  stxdw [r1+8], r2
  stw [r1+0], 0

jmp_7aa0:
  exit

jmp_7aa8:
  mov64 r2, 0
  ja jmp_7a90

fn_7ab8:
  mov64 r0, 0
  mov64 r7, 195936478
  jne r3, 2, jmp_8000
  ldxdw r6, [r2+8]
  ldxdw r3, [r2+0]
  ldxb r2, [r3+1]
  ldxdw r7, [r6+624]
  stxdw [r10-8], r7
  ldxdw r7, [r6+616]
  stxdw [r10-16], r7
  ldxdw r7, [r6+608]
  stxdw [r10-24], r7
  ldxdw r7, [r6+600]
  stxdw [r10-32], r7
  ldxdw r7, [r6+1808]
  jgt r7, 4, jmp_7bd8
  lddw r7, 333855179453154247
  ldxdw r8, [r10-24]
  xor64 r8, r7
  lddw r7, -334136658724897736
  ldxdw r9, [r10-32]
  xor64 r9, r7
  stxdw [r10-32], r9
  stxdw [r10-24], r8
  lddw r7, 333573717361279942
  ldxdw r8, [r10-16]
  xor64 r8, r7
  stxdw [r10-16], r8
  lddw r7, 333292238089536453
  ldxdw r8, [r10-8]
  xor64 r8, r7
  stxdw [r10-8], r8

jmp_7bd8:
  ldxdw r7, [r3+8]
  ldxdw r8, [r10-32]
  jne r8, r7, jmp_7c40
  ldxdw r7, [r3+16]
  ldxdw r8, [r10-24]
  jne r8, r7, jmp_7c40
  ldxdw r7, [r3+24]
  ldxdw r8, [r10-16]
  jne r8, r7, jmp_7c40
  mov64 r8, 0
  ldxdw r3, [r3+32]
  ldxdw r7, [r10-8]
  jeq r7, r3, jmp_7c48

jmp_7c40:
  mov64 r8, 1

jmp_7c48:
  lddw r7, 2880249322
  jeq r2, 0, jmp_8000
  jne r8, 0, jmp_8000
  jne r5, 144, jmp_8018
  mov64 r2, r4
  and64 r2, 7
  jne r2, 0, jmp_8040
  mov64 r7, 47825
  ldxdw r2, [r4+24]
  ldxdw r3, [r4+16]
  jsgt r3, r2, jmp_8000
  ldxdw r3, [r4+64]
  jslt r3, r2, jmp_8000
  ldxdw r5, [r4+72]
  jsgt r3, r5, jmp_8000
  ldxdw r2, [r4+112]
  jslt r2, r5, jmp_8000
  ldxdw r3, [r4+120]
  jsgt r2, r3, jmp_8000
  mov64 r2, r6
  add64 r2, 88
  mov64 r7, r1
  mov64 r1, r2
  mov64 r2, r4
  mov64 r3, 144
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r7
  ldxdw r2, [r6+136]
  lddw r3, -7626723650496603607
  xor64 r2, r3
  ldxdw r3, [r6+128]
  lddw r4, -7625879238451176920
  xor64 r3, r4
  ldxdw r4, [r6+120]
  lddw r5, -7626160709132985809
  xor64 r4, r5
  ldxdw r5, [r6+112]
  lddw r0, -7625316297088083410
  xor64 r5, r0
  ldxdw r0, [r6+104]
  lddw r7, -7625597767769892307
  xor64 r0, r7
  ldxdw r7, [r6+96]
  lddw r8, -7624753355724465620
  xor64 r7, r8
  ldxdw r8, [r6+88]
  lddw r9, 7625034826406274515
  xor64 r8, r9
  stxdw [r6+88], r8
  stxdw [r6+96], r7
  stxdw [r6+104], r0
  stxdw [r6+112], r5
  stxdw [r6+120], r4
  stxdw [r6+128], r3
  stxdw [r6+136], r2
  ldxdw r2, [r6+144]
  lddw r3, -7626442179814794710
  xor64 r2, r3
  stxdw [r6+144], r2
  ldxdw r2, [r6+152]
  lddw r3, -7627286660579173845
  xor64 r2, r3
  stxdw [r6+152], r2
  ldxdw r2, [r6+160]
  lddw r3, -7627005189897364956
  xor64 r2, r3
  stxdw [r6+160], r2
  lddw r2, -7627849601942791643
  ldxdw r3, [r6+168]
  xor64 r3, r2
  stxdw [r6+168], r3
  lddw r2, -7627568131260982746
  ldxdw r3, [r6+176]
  xor64 r3, r2
  stxdw [r6+176], r3
  lddw r2, -7628412543305885145
  ldxdw r3, [r6+184]
  xor64 r3, r2
  stxdw [r6+184], r3
  lddw r2, -7628131072624076256
  ldxdw r3, [r6+192]
  xor64 r3, r2
  stxdw [r6+192], r3
  lddw r2, -7628975484669502943
  ldxdw r3, [r6+200]
  xor64 r3, r2
  stxdw [r6+200], r3
  lddw r2, -7628694013987694046
  ldxdw r3, [r6+208]
  xor64 r3, r2
  stxdw [r6+208], r3
  lddw r2, -7620531295499429341
  ldxdw r3, [r6+216]
  xor64 r3, r2
  stxdw [r6+216], r3
  lddw r2, -7620249824817620420
  ldxdw r3, [r6+224]
  xor64 r3, r2
  stxdw [r6+224], r3
  mov64 r0, 26

jmp_8000:
  stxw [r1+4], r7
  stxw [r1+0], r0
  exit

jmp_8018:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_8040:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

fn_8068:  ; → → sol_memcmp_
  mov64 r0, 0
  mov64 r7, 195936478
  jne r3, 2, jmp_8350
  ldxdw r6, [r2+8]
  ldxdw r3, [r2+0]
  ldxb r2, [r3+1]
  ldxdw r7, [r6+624]
  stxdw [r10-8], r7
  ldxdw r7, [r6+616]
  stxdw [r10-16], r7
  ldxdw r7, [r6+608]
  stxdw [r10-24], r7
  ldxdw r7, [r6+600]
  stxdw [r10-32], r7
  ldxdw r7, [r6+1808]
  jgt r7, 4, jmp_8188
  lddw r7, 333855179453154247
  ldxdw r8, [r10-24]
  xor64 r8, r7
  lddw r7, -334136658724897736
  ldxdw r9, [r10-32]
  xor64 r9, r7
  stxdw [r10-32], r9
  stxdw [r10-24], r8
  lddw r7, 333573717361279942
  ldxdw r8, [r10-16]
  xor64 r8, r7
  stxdw [r10-16], r8
  lddw r7, 333292238089536453
  ldxdw r8, [r10-8]
  xor64 r8, r7
  stxdw [r10-8], r8

jmp_8188:
  ldxdw r7, [r3+8]
  ldxdw r8, [r10-32]
  jne r8, r7, jmp_81f0
  ldxdw r7, [r3+16]
  ldxdw r8, [r10-24]
  jne r8, r7, jmp_81f0
  ldxdw r7, [r3+24]
  ldxdw r8, [r10-16]
  jne r8, r7, jmp_81f0
  mov64 r8, 0
  ldxdw r3, [r3+32]
  ldxdw r7, [r10-8]
  jeq r7, r3, jmp_81f8

jmp_81f0:
  mov64 r8, 1

jmp_81f8:
  lddw r7, 2880249322
  jeq r2, 0, jmp_8350
  jne r8, 0, jmp_8350
  jne r5, 240, jmp_8458
  mov64 r2, r4
  and64 r2, 7
  jne r2, 0, jmp_8480
  ldxdw r5, [r4+24]
  ldxdw r2, [r4+16]
  mov64 r7, r2
  or64 r7, r5
  ldxdw r3, [r4+48]
  jeq r7, 0, jmp_82a8
  lddw r7, 281474976710656
  jge r5, r7, jmp_84a8
  rsh64 r2, 48
  lsh64 r5, 16
  or64 r2, r5
  mov64 r7, 47826
  jlt r3, r2, jmp_8350

jmp_82a8:
  mov64 r7, 47826
  ldxdw r2, [r4+56]
  jgt r3, r2, jmp_8350
  ldxdw r8, [r4+104]
  ldxdw r9, [r4+96]
  mov64 r5, r9
  or64 r5, r8
  ldxdw r3, [r4+128]
  jeq r5, 0, jmp_8328
  lddw r5, 281474976710655
  jgt r8, r5, jmp_84a8
  rsh64 r9, 48
  lsh64 r8, 16
  or64 r9, r8
  mov64 r0, r9

jmp_8328:
  jlt r3, r2, jmp_8348
  jlt r3, r0, jmp_8348
  ldxdw r2, [r4+136]
  jle r3, r2, jmp_8368

jmp_8348:
  mov64 r0, 0

jmp_8350:
  stxw [r1+4], r7
  stxw [r1+0], r0
  exit

jmp_8368:
  ldxdw r8, [r4+184]
  ldxdw r5, [r4+176]
  mov64 r0, r5
  or64 r0, r8
  ldxdw r3, [r4+208]
  mov64 r9, 0
  jeq r0, 0, jmp_83d8
  lddw r0, 281474976710655
  jgt r8, r0, jmp_84a8
  rsh64 r5, 48
  lsh64 r8, 16
  or64 r5, r8
  mov64 r9, r5

jmp_83d8:
  mov64 r0, 0
  jlt r3, r2, jmp_8350
  jlt r3, r9, jmp_8350
  ldxdw r2, [r4+216]
  jgt r3, r2, jmp_8350
  add64 r6, 232
  mov64 r7, r1
  mov64 r1, r6
  mov64 r2, r4
  mov64 r3, 240
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r6
  call fn_2930  ; → sol_memcmp_
  mov64 r1, r7
  mov64 r0, 26
  ja jmp_8350

jmp_8458:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_8480:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_84a8:
  lddw r1, 207256
  call fn_2de60  ; → → → → custom_panic

fn_84c0:  ; → → sol_try_find_program_address
  mov64 r6, r1
  stxdw [r10-56], r4
  stxdw [r10-72], r3
  stxdw [r10-88], r2
  lddw r1, str_06c2
  stxdw [r10-104], r1
  stdw [r10-48], 32
  stdw [r10-64], 32
  stdw [r10-80], 32
  stdw [r10-96], 6
  mov64 r1, r10
  add64 r1, -33
  mov64 r2, r10
  add64 r2, -104
  mov64 r3, 4
  mov64 r4, r5
  call fn_2dd00  ; → sol_try_find_program_address
  ldxdw r1, [r10-9]
  stxdw [r6+24], r1
  ldxdw r1, [r10-17]
  stxdw [r6+16], r1
  ldxdw r1, [r10-25]
  stxdw [r6+8], r1
  ldxdw r1, [r10-33]
  stxdw [r6+0], r1
  ldxb r1, [r10-1]
  stxb [r6+32], r1
  exit

fn_85a8:  ; → → sol_try_find_program_address
  mov64 r6, r1
  stxdw [r10-88], r3
  lddw r1, data_0090
  stxdw [r10-104], r1
  stxdw [r10-120], r2
  stdw [r10-80], 32
  stdw [r10-96], 32
  stdw [r10-112], 32
  lddw r1, -3189807322954948524
  stxdw [r10-8], r1
  lddw r1, 7913477912056730528
  stxdw [r10-16], r1
  lddw r1, 8827510275200544966
  stxdw [r10-24], r1
  lddw r1, -1632001642340221574
  stxdw [r10-32], r1
  mov64 r1, r10
  add64 r1, -65
  mov64 r2, r10
  add64 r2, -120
  mov64 r4, r10
  add64 r4, -32
  mov64 r3, 3
  call fn_2dd00  ; → sol_try_find_program_address
  ldxdw r1, [r10-41]
  stxdw [r6+24], r1
  ldxdw r1, [r10-49]
  stxdw [r6+16], r1
  ldxdw r1, [r10-57]
  stxdw [r6+8], r1
  ldxdw r1, [r10-65]
  stxdw [r6+0], r1
  ldxb r1, [r10-33]
  stxb [r6+32], r1
  exit

fn_86e8:  ; → → sol_try_find_program_address
  mov64 r6, r1
  stxdw [r10-88], r3
  lddw r1, data_0110
  stxdw [r10-104], r1
  stxdw [r10-120], r2
  stdw [r10-80], 32
  stdw [r10-96], 32
  stdw [r10-112], 32
  lddw r1, -3189807322954948524
  stxdw [r10-8], r1
  lddw r1, 7913477912056730528
  stxdw [r10-16], r1
  lddw r1, 8827510275200544966
  stxdw [r10-24], r1
  lddw r1, -1632001642340221574
  stxdw [r10-32], r1
  mov64 r1, r10
  add64 r1, -65
  mov64 r2, r10
  add64 r2, -120
  mov64 r4, r10
  add64 r4, -32
  mov64 r3, 3
  call fn_2dd00  ; → sol_try_find_program_address
  ldxdw r1, [r10-41]
  stxdw [r6+24], r1
  ldxdw r1, [r10-49]
  stxdw [r6+16], r1
  ldxdw r1, [r10-57]
  stxdw [r6+8], r1
  ldxdw r1, [r10-65]
  stxdw [r6+0], r1
  ldxb r1, [r10-33]
  stxb [r6+32], r1
  exit

fn_8828:  ; → sol_invoke_signed_c
  ldxdw r0, [r5-4088]
  stxb [r10-321], r0
  ldxdw r6, [r4+0]
  ldxdw r8, [r5-4096]
  ldxdw r4, [r8+0]
  mov64 r5, r10
  add64 r5, -321
  stxdw [r10-272], r5
  lddw r5, data_0090
  stxdw [r10-304], r5
  add64 r4, 8
  stxdw [r10-288], r4
  add64 r6, 8
  stxdw [r10-320], r6
  stdw [r10-264], 1
  stdw [r10-280], 32
  stdw [r10-296], 32
  stdw [r10-312], 32
  mov64 r4, r10
  add64 r4, -320
  stxdw [r10-256], r4
  stdw [r10-248], 4
  ldxdw r0, [r2+0]
  ldxdw r4, [r3+0]
  mov64 r2, r4
  add64 r2, 8
  stxdw [r10-224], r2
  mov64 r9, r0
  add64 r9, 8
  stxdw [r10-240], r9
  sth [r10-216], 257
  sth [r10-232], 257
  lddw r7, -7808848301000303354
  stxdw [r10-184], r7
  lddw r7, -6018520155818964007
  stxdw [r10-176], r7
  lddw r7, -7982811346925931492
  stxdw [r10-168], r7
  lddw r7, -6268729762421306310
  stxdw [r10-160], r7
  stdw [r10-192], 165
  stdw [r10-200], 2039280
  stw [r10-204], 0
  ldxb r7, [r0+0]
  jne r7, 255, jmp_8ab8
  stxdw [r10-344], r3
  stxdw [r10-360], r8
  ldxb r7, [r0+1]
  mov64 r3, 1
  mov64 r5, 1
  jeq r7, 0, jmp_8ad8
  ldxb r8, [r0+2]
  mov64 r7, 1
  jeq r8, 0, jmp_8af8

jmp_8a00:
  stxdw [r10-352], r5
  ldxb r8, [r0+3]
  jne r8, 0, jmp_8a20

jmp_8a18:
  mov64 r3, 0

jmp_8a20:
  ldxdw r8, [r0+80]
  mov64 r5, r0
  add64 r5, 40
  stxdw [r10-120], r5
  mov64 r5, r0
  add64 r5, 88
  stxdw [r10-128], r5
  stxdw [r10-136], r8
  add64 r0, 72
  stxdw [r10-144], r0
  stxdw [r10-152], r9
  stxb [r10-102], r3
  stxb [r10-103], r7
  ldxdw r3, [r10-352]
  stxb [r10-104], r3
  stdw [r10-112], 0
  ldxb r3, [r4+0]
  ldxdw r9, [r10-344]
  jeq r3, 255, jmp_8b20

jmp_8ab8:
  mov64 r2, 11

jmp_8ac0:
  stxw [r1+4], r3
  stxw [r1+0], r2
  exit

jmp_8ad8:
  mov64 r5, 0
  ldxb r8, [r0+2]
  mov64 r7, 1
  jne r8, 0, jmp_8a00

jmp_8af8:
  mov64 r7, 0
  stxdw [r10-352], r5
  ldxb r8, [r0+3]
  jeq r8, 0, jmp_8a18
  ja jmp_8a20

jmp_8b20:
  ldxb r5, [r4+1]
  ldxb r0, [r4+2]
  ldxb r3, [r4+3]
  ldxdw r7, [r4+80]
  mov64 r8, r4
  add64 r8, 40
  stxdw [r10-64], r8
  mov64 r8, r4
  add64 r8, 88
  stxdw [r10-72], r8
  stxdw [r10-80], r7
  add64 r4, 72
  stxdw [r10-88], r4
  stxdw [r10-96], r2
  mov64 r2, 1
  jeq r3, 0, jmp_8d08
  stxb [r10-46], r2
  mov64 r2, 1
  jeq r0, 0, jmp_8d28

jmp_8bb8:
  mov64 r8, r1
  stxb [r10-47], r2
  mov64 r1, 1
  jne r5, 0, jmp_8be0

jmp_8bd8:
  mov64 r1, 0

jmp_8be0:
  stxb [r10-48], r1
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -204
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -240
  stxdw [r10-32], r1
  lddw r1, data_00b0
  stxdw [r10-40], r1
  stdw [r10-8], 52
  stdw [r10-24], 2
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -152
  mov64 r4, r10
  add64 r4, -256
  mov64 r3, 2
  mov64 r5, 1
  call sol_invoke_signed_c
  stxdw [r10-136], r6
  ldxdw r1, [r10-360]
  stxdw [r10-144], r1
  stxdw [r10-152], r9
  mov64 r1, r10
  add64 r1, -336
  mov64 r2, r10
  add64 r2, -152
  mov64 r3, 8
  mov64 r4, 0
  call fn_2b5e0  ; → sol_invoke_signed_c
  ldxw r2, [r10-336]
  jne r2, 26, jmp_8d58
  mov64 r2, 26
  ja jmp_8d60

jmp_8d08:
  mov64 r2, 0
  stxb [r10-46], r2
  mov64 r2, 1
  jne r0, 0, jmp_8bb8

jmp_8d28:
  mov64 r2, 0
  mov64 r8, r1
  stxb [r10-47], r2
  mov64 r1, 1
  jeq r5, 0, jmp_8bd8
  ja jmp_8be0

jmp_8d58:
  ldxw r3, [r10-332]

jmp_8d60:
  mov64 r1, r8
  ja jmp_8ac0

fn_8d70:  ; → sol_invoke_signed_c
  mov64 r6, r3
  stxdw [r10-400], r1
  ldxdw r0, [r5-4088]
  stxb [r10-385], r0
  ldxdw r0, [r4+0]
  ldxdw r4, [r5-4096]
  ldxdw r5, [r4+0]
  mov64 r4, r10
  add64 r4, -385
  stxdw [r10-336], r4
  lddw r4, data_0110
  stxdw [r10-368], r4
  mov64 r9, r5
  add64 r9, 8
  stxdw [r10-352], r9
  mov64 r7, r0
  add64 r7, 8
  stxdw [r10-384], r7
  stdw [r10-328], 1
  stdw [r10-344], 32
  stdw [r10-360], 32
  stdw [r10-376], 32
  mov64 r4, r10
  add64 r4, -384
  stxdw [r10-320], r4
  stdw [r10-312], 4
  ldxdw r3, [r2+0]
  ldxdw r8, [r6+0]
  mov64 r6, r8
  add64 r6, 8
  stxdw [r10-288], r6
  mov64 r1, r3
  add64 r1, 8
  stxdw [r10-304], r1
  sth [r10-280], 257
  sth [r10-296], 257
  lddw r4, -2409577606766207738
  stxdw [r10-244], r4
  lddw r4, -2680366473547005416
  stxdw [r10-236], r4
  lddw r4, 2814109315776649910
  stxdw [r10-228], r4
  lddw r4, -248927404616466946
  stxdw [r10-220], r4
  stdw [r10-252], 200
  stdw [r10-260], 2282880
  stw [r10-264], 0
  ldxb r4, [r3+0]
  jne r4, 255, jmp_9020
  stxdw [r10-424], r5
  stxdw [r10-416], r0
  ldxb r0, [r3+1]
  mov64 r5, 1
  mov64 r2, 1
  jne r0, 0, jmp_9040
  mov64 r2, 0
  ldxb r4, [r3+2]
  mov64 r0, 1
  jeq r4, 0, jmp_9058

jmp_8f70:
  stxdw [r10-408], r2
  ldxb r4, [r3+3]
  jne r4, 0, jmp_8f90

jmp_8f88:
  mov64 r5, 0

jmp_8f90:
  ldxdw r4, [r3+80]
  mov64 r2, r3
  add64 r2, 40
  stxdw [r10-176], r2
  mov64 r2, r3
  add64 r2, 88
  stxdw [r10-184], r2
  stxdw [r10-192], r4
  add64 r3, 72
  stxdw [r10-200], r3
  stxdw [r10-208], r1
  stxb [r10-158], r5
  stxb [r10-159], r0
  ldxdw r1, [r10-408]
  stxb [r10-160], r1
  stdw [r10-168], 0
  ldxb r1, [r8+0]
  jeq r1, 255, jmp_9080

jmp_9020:
  mov64 r2, 11

jmp_9028:
  ldxdw r3, [r10-400]

jmp_9030:
  stxw [r3+0], r2
  exit

jmp_9040:
  ldxb r4, [r3+2]
  mov64 r0, 1
  jne r4, 0, jmp_8f70

jmp_9058:
  mov64 r0, 0
  stxdw [r10-408], r2
  ldxb r4, [r3+3]
  jeq r4, 0, jmp_8f88
  ja jmp_8f90

jmp_9080:
  ldxb r1, [r8+1]
  mov64 r2, 1
  jne r1, 0, jmp_9600
  mov64 r2, 0
  ldxb r1, [r8+2]
  mov64 r3, 1
  jeq r1, 0, jmp_9618

jmp_90b8:
  ldxb r4, [r8+3]
  mov64 r1, 1
  jne r4, 0, jmp_90d8

jmp_90d0:
  mov64 r1, 0

jmp_90d8:
  ldxdw r4, [r8+80]
  stxdw [r10-136], r4
  stxb [r10-102], r1
  stxb [r10-103], r3
  stxb [r10-104], r2
  mov64 r1, r8
  add64 r1, 40
  stxdw [r10-408], r1
  stxdw [r10-120], r1
  mov64 r1, r8
  add64 r1, 88
  stxdw [r10-432], r1
  stxdw [r10-128], r1
  mov64 r1, r8
  add64 r1, 72
  stxdw [r10-440], r1
  stxdw [r10-144], r1
  stxdw [r10-152], r6
  stdw [r10-112], 0
  mov64 r1, r10
  add64 r1, -264
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -304
  stxdw [r10-32], r1
  lddw r1, data_00b0
  stxdw [r10-40], r1
  stdw [r10-8], 52
  stdw [r10-24], 2
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -208
  mov64 r4, r10
  add64 r4, -320
  mov64 r3, 2
  mov64 r5, 1
  call sol_invoke_signed_c
  stb [r10-304], 18
  ldxdw r1, [r7+0]
  stxdw [r10-303], r1
  ldxdw r1, [r7+8]
  stxdw [r10-295], r1
  ldxdw r1, [r7+16]
  stxdw [r10-287], r1
  ldxdw r1, [r7+24]
  stxdw [r10-279], r1
  stxdw [r10-232], r7
  stxdw [r10-248], r9
  stxdw [r10-264], r6
  sth [r10-224], 0
  sth [r10-240], 0
  sth [r10-256], 1
  ldxb r1, [r8+0]
  ldxdw r3, [r10-400]
  ldxdw r0, [r10-416]
  jne r1, 255, jmp_9640
  ldxb r1, [r8+1]
  mov64 r3, 1
  mov64 r2, 1
  jne r1, 0, jmp_9650
  mov64 r2, 0
  ldxb r1, [r8+2]
  mov64 r4, 1
  jeq r1, 0, jmp_9668

jmp_92e8:
  ldxb r1, [r8+3]
  ldxdw r5, [r10-424]
  jne r1, 0, jmp_9308

jmp_9300:
  mov64 r3, 0

jmp_9308:
  ldxdw r1, [r8+80]
  ldxdw r8, [r10-408]
  stxdw [r10-176], r8
  ldxdw r8, [r10-432]
  stxdw [r10-184], r8
  stxdw [r10-192], r1
  ldxdw r1, [r10-440]
  stxdw [r10-200], r1
  stxdw [r10-208], r6
  stxb [r10-158], r3
  stxb [r10-159], r4
  stxb [r10-160], r2
  stdw [r10-168], 0
  ldxb r1, [r5+0]
  and64 r1, 136
  ldxdw r3, [r10-400]
  jne r1, 136, jmp_9640
  ldxdw r6, [r10-424]
  ldxb r1, [r6+1]
  mov64 r3, 1
  mov64 r2, 1
  jne r1, 0, jmp_9690
  mov64 r2, 0
  ldxb r1, [r6+2]
  mov64 r4, 1
  jeq r1, 0, jmp_96a8

jmp_93d8:
  ldxb r1, [r6+3]
  jne r1, 0, jmp_93f0

jmp_93e8:
  mov64 r3, 0

jmp_93f0:
  ldxdw r1, [r6+80]
  mov64 r5, r6
  add64 r5, 40
  stxdw [r10-120], r5
  mov64 r5, r6
  add64 r5, 88
  stxdw [r10-128], r5
  stxdw [r10-136], r1
  add64 r6, 72
  stxdw [r10-144], r6
  stxdw [r10-152], r9
  stxb [r10-102], r3
  stxb [r10-103], r4
  stxb [r10-104], r2
  stdw [r10-112], 0
  ldxb r1, [r0+0]
  and64 r1, 136
  ldxdw r3, [r10-400]
  jne r1, 136, jmp_9640
  ldxb r1, [r0+1]
  ldxb r2, [r0+2]
  ldxb r5, [r0+3]
  ldxdw r3, [r0+80]
  mov64 r4, r0
  add64 r4, 40
  stxdw [r10-64], r4
  mov64 r4, r0
  add64 r4, 88
  stxdw [r10-72], r4
  stxdw [r10-80], r3
  add64 r0, 72
  stxdw [r10-88], r0
  stxdw [r10-96], r7
  mov64 r3, 1
  mov64 r4, 1
  jne r5, 0, jmp_96c8
  mov64 r4, 0
  stxb [r10-46], r4
  mov64 r4, 1
  jeq r2, 0, jmp_96e0

jmp_9530:
  stxb [r10-47], r4
  jne r1, 0, jmp_9548

jmp_9540:
  mov64 r3, 0

jmp_9548:
  stxb [r10-48], r3
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -304
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -264
  stxdw [r10-32], r1
  lddw r1, data_0110
  stxdw [r10-40], r1
  stdw [r10-8], 33
  stdw [r10-24], 3
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -208
  mov64 r3, 3
  mov64 r4, 8
  mov64 r5, 0
  call sol_invoke_signed_c
  mov64 r2, 26
  ja jmp_9028

jmp_9600:
  ldxb r1, [r8+2]
  mov64 r3, 1
  jne r1, 0, jmp_90b8

jmp_9618:
  mov64 r3, 0
  ldxb r4, [r8+3]
  mov64 r1, 1
  jeq r4, 0, jmp_90d0
  ja jmp_90d8

jmp_9640:
  mov64 r2, 11
  ja jmp_9030

jmp_9650:
  ldxb r1, [r8+2]
  mov64 r4, 1
  jne r1, 0, jmp_92e8

jmp_9668:
  mov64 r4, 0
  ldxb r1, [r8+3]
  ldxdw r5, [r10-424]
  jeq r1, 0, jmp_9300
  ja jmp_9308

jmp_9690:
  ldxb r1, [r6+2]
  mov64 r4, 1
  jne r1, 0, jmp_93d8

jmp_96a8:
  mov64 r4, 0
  ldxb r1, [r6+3]
  jeq r1, 0, jmp_93e8
  ja jmp_93f0

jmp_96c8:
  stxb [r10-46], r4
  mov64 r4, 1
  jne r2, 0, jmp_9530

jmp_96e0:
  mov64 r4, 0
  stxb [r10-47], r4
  jeq r1, 0, jmp_9540
  ja jmp_9548

fn_9700:
  mov64 r0, 0
  mov64 r8, 195936478
  jne r3, 8, jmp_9c70
  lddw r8, 2880249322
  ldxdw r6, [r2+0]
  ldxb r3, [r6+1]
  jeq r3, 0, jmp_9c70
  mov64 r3, r6
  add64 r3, 8
  stxdw [r10-464], r3
  ldxdw r3, [r6+8]
  lddw r9, -3652997532540689984
  jne r3, r9, jmp_9808
  ldxdw r3, [r10-464]
  ldxdw r3, [r3+8]
  lddw r9, -1522233205780643167
  jne r3, r9, jmp_9808
  ldxdw r3, [r10-464]
  ldxdw r3, [r3+16]
  lddw r9, -5182480366885473232
  jne r3, r9, jmp_9808
  mov64 r3, 0
  ldxdw r7, [r10-464]
  ldxdw r7, [r7+24]
  stxdw [r10-472], r7
  lddw r9, 4712165472278639764
  ldxdw r7, [r10-472]
  jeq r7, r9, jmp_9810

jmp_9808:
  mov64 r3, 1

jmp_9810:
  jne r3, 0, jmp_9c70
  jne r5, 512, jmp_a6d8
  stxdw [r10-472], r1
  mov64 r1, r4
  and64 r1, 7
  jne r1, 0, jmp_a700
  stxdw [r10-496], r2
  mov64 r8, r2
  add64 r8, 8
  lddw r1, str_06c2
  stxdw [r10-152], r1
  mov64 r1, r4
  add64 r1, 384
  stxdw [r10-480], r1
  stxdw [r10-104], r1
  mov64 r9, r4
  add64 r9, 416
  stxdw [r10-120], r9
  stxdw [r10-512], r4
  add64 r4, 448
  stxdw [r10-488], r4
  stxdw [r10-136], r4
  stdw [r10-96], 32
  stdw [r10-112], 32
  stdw [r10-128], 32
  stdw [r10-144], 6
  mov64 r1, r10
  add64 r1, -400
  mov64 r2, r10
  add64 r2, -152
  mov64 r3, 4
  lddw r4, data_0010
  call fn_2dd00  ; → sol_try_find_program_address
  ldxdw r1, [r10-376]
  stxdw [r10-416], r1
  ldxdw r1, [r10-384]
  stxdw [r10-424], r1
  ldxdw r1, [r10-392]
  stxdw [r10-432], r1
  ldxdw r1, [r10-400]
  stxdw [r10-440], r1
  ldxb r2, [r10-368]
  stxb [r10-401], r2
  stxdw [r10-504], r8
  ldxdw r8, [r8+0]
  mov64 r2, r8
  add64 r2, 8
  ldxdw r3, [r8+8]
  jne r1, r3, jmp_99f8
  ldxdw r1, [r2+8]
  ldxdw r3, [r10-432]
  jne r3, r1, jmp_99f8
  ldxdw r1, [r2+16]
  ldxdw r3, [r10-424]
  jne r3, r1, jmp_99f8
  mov64 r3, 0
  ldxdw r1, [r2+24]
  ldxdw r4, [r10-416]
  jeq r4, r1, jmp_9a00

jmp_99f8:
  mov64 r3, 1

jmp_9a00:
  ldxdw r1, [r10-472]
  jeq r3, 0, jmp_9a28
  mov64 r0, 0
  mov64 r8, 195951310
  ja jmp_9c70

jmp_9a28:
  mov64 r3, r10
  add64 r3, -401
  stxdw [r10-336], r3
  ldxdw r3, [r10-480]
  stxdw [r10-352], r3
  stxdw [r10-368], r9
  ldxdw r3, [r10-488]
  stxdw [r10-384], r3
  lddw r3, str_06c2
  stxdw [r10-400], r3
  stdw [r10-328], 1
  stdw [r10-344], 32
  stdw [r10-360], 32
  stdw [r10-376], 32
  stdw [r10-392], 6
  mov64 r3, r10
  add64 r3, -400
  stxdw [r10-320], r3
  stdw [r10-312], 5
  stxdw [r10-224], r2
  ldxdw r3, [r10-464]
  stxdw [r10-240], r3
  sth [r10-216], 257
  sth [r10-232], 257
  lddw r3, -1632001642340221574
  stxdw [r10-184], r3
  lddw r3, 8827510275200544966
  stxdw [r10-176], r3
  lddw r3, 7913477912056730528
  stxdw [r10-168], r3
  lddw r3, -3189807322954948524
  stxdw [r10-160], r3
  stdw [r10-192], 1728
  stdw [r10-200], 12917760
  stw [r10-204], 0
  ldxb r3, [r6+0]
  jne r3, 255, jmp_9c68
  ldxb r5, [r6+1]
  mov64 r4, 1
  mov64 r3, 1
  jeq r5, 0, jmp_9c88
  ldxb r0, [r6+2]
  mov64 r5, 1
  jeq r0, 0, jmp_9ca8

jmp_9bb0:
  stxdw [r10-520], r8
  ldxb r0, [r6+3]
  jne r0, 0, jmp_9bd0

jmp_9bc8:
  mov64 r4, 0

jmp_9bd0:
  ldxdw r0, [r6+80]
  mov64 r8, r6
  add64 r8, 40
  stxdw [r10-120], r8
  mov64 r8, r6
  add64 r8, 88
  stxdw [r10-128], r8
  stxdw [r10-136], r0
  add64 r6, 72
  stxdw [r10-144], r6
  ldxdw r0, [r10-464]
  stxdw [r10-152], r0
  stxb [r10-102], r4
  stxb [r10-103], r5
  stxb [r10-104], r3
  stdw [r10-112], 0
  ldxdw r6, [r10-520]
  ldxb r3, [r6+0]
  jeq r3, 255, jmp_9cd0

jmp_9c68:
  mov64 r0, 11

jmp_9c70:
  stxw [r1+4], r8
  stxw [r1+0], r0
  exit

jmp_9c88:
  mov64 r3, 0
  ldxb r0, [r6+2]
  mov64 r5, 1
  jne r0, 0, jmp_9bb0

jmp_9ca8:
  mov64 r5, 0
  stxdw [r10-520], r8
  ldxb r0, [r6+3]
  jeq r0, 0, jmp_9bc8
  ja jmp_9bd0

jmp_9cd0:
  ldxb r1, [r6+1]
  ldxb r3, [r6+2]
  ldxb r4, [r6+3]
  ldxdw r5, [r6+80]
  mov64 r0, r6
  add64 r0, 40
  stxdw [r10-64], r0
  stxdw [r10-80], r5
  mov64 r5, r6
  add64 r5, 72
  stxdw [r10-88], r5
  stxdw [r10-96], r2
  mov64 r2, 1
  jne r4, 0, jmp_9d48
  mov64 r2, 0

jmp_9d48:
  stxb [r10-46], r2
  mov64 r2, 1
  ldxdw r4, [r10-496]
  jne r3, 0, jmp_9d70
  mov64 r2, 0

jmp_9d70:
  add64 r4, 32
  stxdw [r10-464], r4
  stxb [r10-47], r2
  mov64 r2, 1
  jne r1, 0, jmp_9da0
  mov64 r2, 0

jmp_9da0:
  stxb [r10-48], r2
  add64 r6, 88
  stxdw [r10-536], r6
  stxdw [r10-72], r6
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -204
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -240
  stxdw [r10-32], r1
  lddw r1, data_00b0
  stxdw [r10-40], r1
  stdw [r10-8], 52
  stdw [r10-24], 2
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -152
  mov64 r4, r10
  add64 r4, -320
  mov64 r3, 2
  mov64 r5, 1
  call sol_invoke_signed_c
  stxdw [r10-120], r9
  lddw r1, data_0090
  stxdw [r10-136], r1
  mov64 r8, r10
  add64 r8, -440
  stxdw [r10-152], r8
  stdw [r10-112], 32
  stdw [r10-128], 32
  stdw [r10-144], 32
  lddw r1, -3189807322954948524
  stxdw [r10-16], r1
  lddw r1, 7913477912056730528
  stxdw [r10-24], r1
  lddw r6, 8827510275200544966
  stxdw [r10-32], r6
  lddw r7, -1632001642340221574
  stxdw [r10-40], r7
  mov64 r1, r10
  add64 r1, -204
  mov64 r2, r10
  add64 r2, -152
  mov64 r4, r10
  add64 r4, -40
  mov64 r3, 3
  call fn_2dd00  ; → sol_try_find_program_address
  ldxdw r1, [r10-180]
  stxdw [r10-280], r1
  ldxdw r1, [r10-188]
  stxdw [r10-288], r1
  ldxdw r1, [r10-196]
  stxdw [r10-296], r1
  ldxdw r1, [r10-204]
  stxdw [r10-304], r1
  ldxb r1, [r10-172]
  stxdw [r10-528], r1
  ldxdw r1, [r10-480]
  stxdw [r10-120], r1
  lddw r1, data_0090
  stxdw [r10-136], r1
  stxdw [r10-152], r8
  stdw [r10-112], 32
  stdw [r10-128], 32
  stdw [r10-144], 32
  lddw r1, -3189807322954948524
  stxdw [r10-16], r1
  lddw r1, 7913477912056730528
  stxdw [r10-24], r1
  stxdw [r10-32], r6
  stxdw [r10-40], r7
  mov64 r1, r10
  add64 r1, -204
  mov64 r2, r10
  add64 r2, -152
  mov64 r4, r10
  add64 r4, -40
  mov64 r3, 3
  call fn_2dd00  ; → sol_try_find_program_address
  ldxdw r1, [r10-180]
  stxdw [r10-248], r1
  ldxdw r1, [r10-188]
  stxdw [r10-256], r1
  ldxdw r1, [r10-196]
  stxdw [r10-264], r1
  ldxdw r1, [r10-204]
  stxdw [r10-272], r1
  ldxdw r2, [r9+0]
  ldxdw r1, [r10-464]
  ldxdw r1, [r1+0]
  ldxdw r3, [r1+8]
  jne r2, r3, jmp_a128
  ldxdw r2, [r1+16]
  ldxdw r3, [r9+8]
  jne r3, r2, jmp_a128
  ldxdw r2, [r1+24]
  ldxdw r3, [r9+16]
  jne r3, r2, jmp_a128
  mov64 r3, 0
  ldxdw r1, [r1+32]
  ldxdw r2, [r9+24]
  jeq r2, r1, jmp_a130

jmp_a128:
  mov64 r3, 1

jmp_a130:
  mov64 r0, 0
  lddw r8, 2880249322
  ldxdw r1, [r10-472]
  ldxdw r2, [r10-496]
  jne r3, 0, jmp_9c70
  mov64 r7, r2
  add64 r7, 40
  ldxdw r3, [r10-480]
  ldxdw r4, [r3+0]
  ldxdw r3, [r7+0]
  ldxdw r5, [r3+8]
  jne r4, r5, jmp_a200
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-480]
  ldxdw r5, [r5+8]
  jne r5, r4, jmp_a200
  ldxdw r4, [r3+24]
  ldxdw r5, [r10-480]
  ldxdw r5, [r5+16]
  jne r5, r4, jmp_a200
  mov64 r4, 0
  ldxdw r3, [r3+32]
  ldxdw r5, [r10-480]
  ldxdw r5, [r5+24]
  jeq r5, r3, jmp_a208

jmp_a200:
  mov64 r4, 1

jmp_a208:
  jne r4, 0, jmp_9c70
  mov64 r3, r2
  add64 r3, 16
  ldxdw r4, [r3+0]
  ldxdw r5, [r4+8]
  ldxdw r6, [r10-304]
  jne r6, r5, jmp_a290
  ldxdw r5, [r4+16]
  ldxdw r6, [r10-296]
  jne r6, r5, jmp_a290
  ldxdw r5, [r4+24]
  ldxdw r6, [r10-288]
  jne r6, r5, jmp_a290
  mov64 r5, 0
  ldxdw r4, [r4+32]
  ldxdw r6, [r10-280]
  jeq r6, r4, jmp_a298

jmp_a290:
  mov64 r5, 1

jmp_a298:
  lddw r8, 3135220963
  jne r5, 0, jmp_9c70
  mov64 r4, r2
  add64 r4, 24
  stxdw [r10-544], r4
  ldxdw r4, [r4+0]
  ldxdw r5, [r4+8]
  ldxdw r6, [r10-272]
  jne r6, r5, jmp_a338
  ldxdw r5, [r4+16]
  ldxdw r6, [r10-264]
  jne r6, r5, jmp_a338
  ldxdw r5, [r4+24]
  ldxdw r6, [r10-256]
  jne r6, r5, jmp_a338
  mov64 r5, 0
  ldxdw r4, [r4+32]
  ldxdw r6, [r10-248]
  jeq r6, r4, jmp_a340

jmp_a338:
  mov64 r5, 1

jmp_a340:
  jne r5, 0, jmp_9c70
  ldxb r6, [r10-172]
  ldxdw r1, [r10-528]
  stxdw [r10-4088], r1
  ldxdw r1, [r10-464]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -448
  mov64 r5, r10
  ldxdw r8, [r10-504]
  mov64 r4, r8
  call fn_8828  ; → sol_invoke_signed_c
  ldxw r0, [r10-448]
  jne r0, 26, jmp_a6c8
  stxdw [r10-4088], r6
  stxdw [r10-4096], r7
  mov64 r1, r10
  add64 r1, -456
  mov64 r5, r10
  ldxdw r2, [r10-496]
  ldxdw r3, [r10-544]
  mov64 r4, r8
  call fn_8828  ; → sol_invoke_signed_c
  ldxw r0, [r10-456]
  jne r0, 26, jmp_a728
  ldxdw r7, [r10-520]
  ldxdw r2, [r7+80]
  ldxdw r8, [r10-536]
  mov64 r1, r8
  call fn_16748  ; → → → → custom_panic
  ldxdw r6, [r10-512]
  mov64 r2, r6
  add64 r2, 240
  mov64 r1, r8
  mov64 r3, 144
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r7
  add64 r1, 232
  mov64 r2, r6
  mov64 r3, 240
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r2, [r10-488]
  ldxdw r1, [r2+24]
  stxdw [r7+624], r1
  ldxdw r1, [r2+16]
  stxdw [r7+616], r1
  ldxdw r1, [r2+8]
  stxdw [r7+608], r1
  ldxdw r1, [r2+0]
  stxdw [r7+600], r1
  ldxdw r1, [r9+24]
  stxdw [r7+528], r1
  ldxdw r1, [r9+16]
  stxdw [r7+520], r1
  ldxdw r1, [r9+8]
  stxdw [r7+512], r1
  ldxdw r1, [r9+0]
  stxdw [r7+504], r1
  ldxdw r2, [r10-480]
  ldxdw r1, [r2+0]
  stxdw [r7+472], r1
  ldxdw r1, [r2+8]
  stxdw [r7+480], r1
  ldxdw r1, [r2+16]
  stxdw [r7+488], r1
  ldxdw r1, [r2+24]
  stxdw [r7+496], r1
  ldxdw r1, [r10-304]
  stxdw [r7+568], r1
  ldxdw r1, [r10-296]
  stxdw [r7+576], r1
  ldxdw r1, [r10-288]
  stxdw [r7+584], r1
  ldxdw r1, [r10-280]
  stxdw [r7+592], r1
  ldxdw r1, [r10-272]
  stxdw [r7+536], r1
  ldxdw r1, [r10-264]
  stxdw [r7+544], r1
  ldxdw r1, [r10-256]
  stxdw [r7+552], r1
  ldxdw r1, [r10-248]
  stxdw [r7+560], r1
  ldxb r1, [r10-401]
  stxb [r7+656], r1
  stw [r7+657], 0
  stw [r7+660], 0
  ldxb r1, [r6+496]
  stxb [r7+648], r1
  stw [r7+649], 0
  stw [r7+652], 0
  ldxdw r1, [r6+480]
  ldxdw r2, [r6+488]
  stxdw [r7+640], r2
  stxdw [r7+632], r1
  stdw [r7+808], 0
  stdw [r7+816], 0
  stdw [r7+824], 0
  stdw [r7+832], 0
  stdw [r7+840], 0
  stdw [r7+848], 0
  stdw [r7+856], 0
  stdw [r7+864], 0
  stdw [r7+872], 0
  stdw [r7+880], 0
  stdw [r7+896], 0
  ldxdw r2, [r7+80]
  mov64 r1, r8
  call fn_16748  ; → → → → custom_panic
  mov64 r1, r8
  call fn_2a6a8  ; → → sol_memcmp_
  mov64 r0, 26
  ja jmp_a730

jmp_a6c8:
  ldxw r8, [r10-444]
  ja jmp_a730

jmp_a6d8:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_a700:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_a728:
  ldxw r8, [r10-452]

jmp_a730:
  ldxdw r1, [r10-472]
  ja jmp_9c70

fn_a740:
  mov64 r0, 0
  lddw r7, 3134983649
  jlt r3, 10, jmp_b648
  lddw r7, 2880249322
  ldxdw r8, [r2+0]
  ldxb r3, [r8+1]
  jeq r3, 0, jmp_b648
  ldxdw r3, [r8+8]
  add64 r8, 8
  lddw r6, -3652997532540689984
  jne r3, r6, jmp_a818
  ldxdw r3, [r8+8]
  lddw r6, -1522233205780643167
  jne r3, r6, jmp_a818
  ldxdw r3, [r8+16]
  lddw r6, -5182480366885473232
  jne r3, r6, jmp_a818
  mov64 r3, 0
  ldxdw r6, [r8+24]
  lddw r9, 4712165472278639764
  jeq r6, r9, jmp_a820

jmp_a818:
  mov64 r3, 1

jmp_a820:
  jne r3, 0, jmp_b648
  jne r5, 672, jmp_b660
  mov64 r6, r2
  stxdw [r10-1176], r1
  mov64 r1, r4
  and64 r1, 7
  jne r1, 0, jmp_b688
  mov64 r1, r10
  add64 r1, -1120
  mov64 r2, r4
  mov64 r3, 672
  call fn_2fe08  ; → sol_memcpy_
  mov64 r2, r6
  ldxdw r4, [r2+56]
  ldxdw r1, [r4+8]
  lddw r3, -7808848301000303354
  jne r1, r3, jmp_a918
  ldxdw r1, [r4+16]
  lddw r3, -6018520155818964007
  jne r1, r3, jmp_a918
  ldxdw r1, [r4+24]
  lddw r3, -7982811346925931492
  jne r1, r3, jmp_a918
  mov64 r5, 0
  ldxdw r1, [r4+32]
  lddw r3, -6268729762421306310
  jeq r1, r3, jmp_a920

jmp_a918:
  mov64 r5, 1

jmp_a920:
  ldxdw r3, [r2+64]
  ldxdw r1, [r10-1176]
  jeq r5, 0, jmp_a9d0
  ldxdw r5, [r4+8]
  lddw r0, -2409577606766207738
  jne r5, r0, jmp_a9c0
  ldxdw r5, [r4+16]
  lddw r0, -2680366473547005416
  jne r5, r0, jmp_a9c0
  ldxdw r5, [r4+24]
  lddw r0, 2814109315776649910
  jne r5, r0, jmp_a9c0
  mov64 r5, 0
  ldxdw r4, [r4+32]
  lddw r0, -248927404616466946
  jeq r4, r0, jmp_a9c8

jmp_a9c0:
  mov64 r5, 1

jmp_a9c8:
  jne r5, 0, jmp_ab00

jmp_a9d0:
  ldxdw r4, [r3+8]
  lddw r5, -7808848301000303354
  jne r4, r5, jmp_aa58
  ldxdw r4, [r3+16]
  lddw r5, -6018520155818964007
  jne r4, r5, jmp_aa58
  ldxdw r4, [r3+24]
  lddw r5, -7982811346925931492
  jne r4, r5, jmp_aa58
  mov64 r4, 0
  ldxdw r5, [r3+32]
  lddw r0, -6268729762421306310
  jeq r5, r0, jmp_aa60

jmp_aa58:
  mov64 r4, 1

jmp_aa60:
  jeq r4, 0, jmp_ab28
  ldxdw r4, [r3+8]
  lddw r5, -2409577606766207738
  jne r4, r5, jmp_aaf0
  ldxdw r4, [r3+16]
  lddw r5, -2680366473547005416
  jne r4, r5, jmp_aaf0
  ldxdw r4, [r3+24]
  lddw r5, 2814109315776649910
  jne r4, r5, jmp_aaf0
  mov64 r4, 0
  ldxdw r3, [r3+32]
  lddw r5, -248927404616466946
  jeq r3, r5, jmp_ab20

jmp_aaf0:
  mov64 r4, 1
  jeq r4, 0, jmp_ab28

jmp_ab00:
  mov64 r0, 0
  lddw r7, 3134983651
  ja jmp_b648

jmp_ab20:
  jne r4, 0, jmp_ab00

jmp_ab28:
  mov64 r9, r2
  add64 r9, 16
  ldxdw r0, [r9+0]
  ldxdw r3, [r0+8]
  ldxdw r4, [r10-624]
  jne r3, r4, jmp_aba8
  ldxdw r3, [r0+16]
  ldxdw r4, [r10-616]
  jne r3, r4, jmp_aba8
  ldxdw r3, [r0+24]
  ldxdw r4, [r10-608]
  jne r3, r4, jmp_aba8
  mov64 r3, 0
  ldxdw r4, [r0+32]
  ldxdw r5, [r10-600]
  jeq r4, r5, jmp_abb0

jmp_aba8:
  mov64 r3, 1

jmp_abb0:
  stxdw [r10-1184], r0
  mov64 r0, 0
  lddw r7, 3134983652
  jne r3, 0, jmp_b648
  mov64 r3, r2
  add64 r3, 24
  stxdw [r10-1200], r3
  ldxdw r3, [r3+0]
  stxdw [r10-1192], r3
  ldxdw r3, [r3+8]
  ldxdw r4, [r10-656]
  jne r3, r4, jmp_ac80
  ldxdw r3, [r10-1192]
  ldxdw r3, [r3+16]
  ldxdw r4, [r10-648]
  jne r3, r4, jmp_ac80
  ldxdw r3, [r10-1192]
  ldxdw r3, [r3+24]
  ldxdw r4, [r10-640]
  jne r3, r4, jmp_ac80
  mov64 r3, 0
  ldxdw r4, [r10-1192]
  ldxdw r4, [r4+32]
  ldxdw r5, [r10-632]
  jeq r4, r5, jmp_ac88

jmp_ac80:
  mov64 r3, 1

jmp_ac88:
  jne r3, 0, jmp_b648
  mov64 r3, r2
  add64 r3, 32
  stxdw [r10-1216], r3
  ldxdw r7, [r3+0]
  ldxdw r3, [r7+8]
  ldxdw r4, [r10-560]
  jne r3, r4, jmp_ad18
  ldxdw r3, [r7+16]
  ldxdw r4, [r10-552]
  jne r3, r4, jmp_ad18
  ldxdw r3, [r7+24]
  ldxdw r4, [r10-544]
  jne r3, r4, jmp_ad18
  mov64 r3, 0
  ldxdw r4, [r7+32]
  ldxdw r5, [r10-536]
  jeq r4, r5, jmp_ad20

jmp_ad18:
  mov64 r3, 1

jmp_ad20:
  stxdw [r10-1208], r7
  lddw r7, 3134983653
  jne r3, 0, jmp_b648
  mov64 r3, r2
  add64 r3, 40
  stxdw [r10-1232], r3
  ldxdw r3, [r3+0]
  stxdw [r10-1224], r3
  ldxdw r3, [r3+8]
  ldxdw r4, [r10-592]
  jne r3, r4, jmp_ade8
  ldxdw r3, [r10-1224]
  ldxdw r3, [r3+16]
  ldxdw r4, [r10-584]
  jne r3, r4, jmp_ade8
  ldxdw r3, [r10-1224]
  ldxdw r3, [r3+24]
  ldxdw r4, [r10-576]
  jne r3, r4, jmp_ade8
  mov64 r3, 0
  ldxdw r4, [r10-1224]
  ldxdw r4, [r4+32]
  ldxdw r5, [r10-568]
  jeq r4, r5, jmp_adf0

jmp_ade8:
  mov64 r3, 1

jmp_adf0:
  jne r3, 0, jmp_b648
  mov64 r7, r2
  add64 r7, 8
  mov64 r3, r10
  add64 r3, -624
  mov64 r4, r10
  add64 r4, -656
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r10
  add64 r2, -528
  stxdw [r10-1264], r2
  stxdw [r10-1240], r3
  stxdw [r10-1248], r4
  lddw r5, data_0010
  call fn_84c0  ; → → sol_try_find_program_address
  ldxdw r1, [r10-184]
  stxdw [r10-424], r1
  ldxdw r1, [r10-192]
  stxdw [r10-432], r1
  ldxdw r1, [r10-200]
  stxdw [r10-440], r1
  ldxdw r2, [r10-208]
  stxdw [r10-448], r2
  ldxb r1, [r10-176]
  stxb [r10-409], r1
  stxdw [r10-1256], r7
  ldxdw r7, [r7+0]
  mov64 r1, r7
  add64 r1, 8
  ldxdw r3, [r7+8]
  jne r2, r3, jmp_af48
  ldxdw r2, [r1+8]
  ldxdw r3, [r10-440]
  jne r3, r2, jmp_af48
  ldxdw r2, [r1+16]
  ldxdw r3, [r10-432]
  jne r3, r2, jmp_af48
  mov64 r2, 0
  ldxdw r3, [r1+24]
  ldxdw r4, [r10-424]
  jeq r4, r3, jmp_af50

jmp_af48:
  mov64 r2, 1

jmp_af50:
  jeq r2, 0, jmp_af78
  mov64 r0, 0
  lddw r7, 3134983655
  ja jmp_b640

jmp_af78:
  mov64 r2, r10
  add64 r2, -409
  stxdw [r10-344], r2
  ldxdw r2, [r10-1248]
  stxdw [r10-360], r2
  ldxdw r2, [r10-1240]
  stxdw [r10-376], r2
  ldxdw r2, [r10-1264]
  stxdw [r10-392], r2
  lddw r2, str_06c2
  stxdw [r10-408], r2
  stdw [r10-336], 1
  stdw [r10-352], 32
  stdw [r10-368], 32
  stdw [r10-384], 32
  stdw [r10-400], 6
  mov64 r2, r10
  add64 r2, -408
  stxdw [r10-328], r2
  stdw [r10-320], 5
  stxdw [r10-296], r1
  stxdw [r10-312], r8
  sth [r10-288], 257
  sth [r10-304], 257
  lddw r1, -1632001642340221574
  stxdw [r10-260], r1
  lddw r1, 8827510275200544966
  stxdw [r10-252], r1
  lddw r1, 7913477912056730528
  stxdw [r10-244], r1
  lddw r1, -3189807322954948524
  stxdw [r10-236], r1
  stdw [r10-268], 1728
  stdw [r10-276], 12917760
  stw [r10-280], 0
  ldxdw r1, [r10-1256]
  stxdw [r10-216], r1
  stxdw [r10-224], r6
  mov64 r1, r10
  add64 r1, -96
  stxdw [r10-32], r1
  mov64 r1, r10
  add64 r1, -208
  stxdw [r10-40], r1
  mov64 r1, r10
  add64 r1, -280
  stxdw [r10-72], r1
  mov64 r1, r10
  add64 r1, -312
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -208
  stxdw [r10-88], r1
  mov64 r1, r10
  add64 r1, -224
  stxdw [r10-96], r1
  stdw [r10-8], 2
  stdw [r10-16], 2
  stdw [r10-24], 0
  stdw [r10-48], 2
  stdw [r10-56], 2
  stdw [r10-64], 0
  mov64 r1, r10
  add64 r1, -96
  call fn_0158
  mov64 r1, r0
  lsh64 r1, 32
  rsh64 r1, 32
  jne r1, 26, jmp_b340
  mov64 r1, r10
  add64 r1, -280
  stxdw [r10-72], r1
  mov64 r1, r10
  add64 r1, -312
  stxdw [r10-88], r1
  lddw r1, data_00b0
  stxdw [r10-96], r1
  stdw [r10-64], 52
  stdw [r10-80], 2
  mov64 r1, r10
  add64 r1, -96
  mov64 r2, r10
  add64 r2, -208
  mov64 r4, r10
  add64 r4, -328
  mov64 r3, 2
  mov64 r5, 1
  call sol_invoke_signed_c
  ldxdw r3, [r10-1184]
  ldxdw r1, [r3+40]
  lddw r2, -2409577606766207738
  jne r1, r2, jmp_b2f8
  ldxdw r1, [r3+48]
  lddw r2, -2680366473547005416
  jne r1, r2, jmp_b2f8
  ldxdw r1, [r3+56]
  lddw r2, 2814109315776649910
  jne r1, r2, jmp_b2f8
  mov64 r1, 0
  ldxdw r2, [r3+64]
  lddw r3, -248927404616466946
  jeq r2, r3, jmp_b300

jmp_b2f8:
  mov64 r1, 1

jmp_b300:
  jeq r1, 0, jmp_b348
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r10
  add64 r2, -448
  ldxdw r3, [r10-1240]
  call fn_85a8  ; → → sol_try_find_program_address
  ja jmp_b378

jmp_b340:
  ja jmp_b640

jmp_b348:
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r10
  add64 r2, -448
  ldxdw r3, [r10-1240]
  call fn_86e8  ; → → sol_try_find_program_address

jmp_b378:
  ldxdw r1, [r10-184]
  stxdw [r10-256], r1
  ldxdw r1, [r10-192]
  stxdw [r10-264], r1
  ldxdw r1, [r10-200]
  stxdw [r10-272], r1
  ldxdw r1, [r10-208]
  stxdw [r10-280], r1
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+40]
  lddw r2, -2409577606766207738
  jne r1, r2, jmp_b460
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+48]
  lddw r2, -2680366473547005416
  jne r1, r2, jmp_b460
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+56]
  lddw r2, 2814109315776649910
  jne r1, r2, jmp_b460
  mov64 r1, 0
  ldxdw r2, [r10-1192]
  ldxdw r2, [r2+64]
  lddw r3, -248927404616466946
  jeq r2, r3, jmp_b468

jmp_b460:
  mov64 r1, 1

jmp_b468:
  ldxb r8, [r10-176]
  jeq r1, 0, jmp_b4b0
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r10
  add64 r2, -448
  ldxdw r3, [r10-1248]
  call fn_85a8  ; → → sol_try_find_program_address
  ja jmp_b4e0

jmp_b4b0:
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r10
  add64 r2, -448
  ldxdw r3, [r10-1248]
  call fn_86e8  ; → → sol_try_find_program_address

jmp_b4e0:
  stxdw [r10-1272], r7
  ldxdw r1, [r10-184]
  stxdw [r10-72], r1
  ldxdw r1, [r10-192]
  stxdw [r10-80], r1
  ldxdw r1, [r10-200]
  stxdw [r10-88], r1
  ldxdw r1, [r10-208]
  stxdw [r10-96], r1
  ldxdw r3, [r10-1208]
  ldxdw r1, [r3+8]
  ldxdw r2, [r10-280]
  jne r2, r1, jmp_b598
  ldxdw r1, [r3+16]
  ldxdw r2, [r10-272]
  jne r2, r1, jmp_b598
  ldxdw r1, [r3+24]
  ldxdw r2, [r10-264]
  jne r2, r1, jmp_b598
  mov64 r1, 0
  ldxdw r2, [r3+32]
  ldxdw r3, [r10-256]
  jeq r3, r2, jmp_b5a0

jmp_b598:
  mov64 r1, 1

jmp_b5a0:
  lddw r7, 3134983656
  jne r1, 0, jmp_b638
  ldxdw r3, [r10-1224]
  ldxdw r1, [r3+8]
  ldxdw r2, [r10-96]
  jne r2, r1, jmp_b628
  ldxdw r1, [r3+16]
  ldxdw r2, [r10-88]
  jne r2, r1, jmp_b628
  ldxdw r1, [r3+24]
  ldxdw r2, [r10-80]
  jne r2, r1, jmp_b628
  mov64 r1, 0
  ldxdw r2, [r3+32]
  ldxdw r3, [r10-72]
  jeq r3, r2, jmp_b630

jmp_b628:
  mov64 r1, 1

jmp_b630:
  jeq r1, 0, jmp_b6b0

jmp_b638:
  mov64 r0, 0

jmp_b640:
  ldxdw r1, [r10-1176]

jmp_b648:
  stxw [r1+4], r7
  stxw [r1+0], r0
  exit

jmp_b660:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_b688:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_b6b0:
  ldxdw r1, [r10-1184]
  ldxdw r1, [r1+40]
  lddw r2, -7808848301000303354
  jne r1, r2, jmp_b758
  ldxdw r1, [r10-1184]
  ldxdw r1, [r1+48]
  lddw r2, -6018520155818964007
  jne r1, r2, jmp_b758
  ldxdw r1, [r10-1184]
  ldxdw r1, [r1+56]
  lddw r2, -7982811346925931492
  jne r1, r2, jmp_b758
  mov64 r1, 0
  ldxdw r2, [r10-1184]
  ldxdw r2, [r2+64]
  lddw r3, -6268729762421306310
  jeq r2, r3, jmp_b760

jmp_b758:
  mov64 r1, 1

jmp_b760:
  ldxb r2, [r10-176]
  stxdw [r10-1208], r2
  jeq r1, 0, jmp_b8a8
  ldxdw r1, [r10-1184]
  ldxdw r1, [r1+40]
  lddw r2, -2409577606766207738
  jne r1, r2, jmp_b820
  ldxdw r1, [r10-1184]
  ldxdw r1, [r1+48]
  lddw r2, -2680366473547005416
  jne r1, r2, jmp_b820
  ldxdw r1, [r10-1184]
  ldxdw r1, [r1+56]
  lddw r2, 2814109315776649910
  jne r1, r2, jmp_b820
  mov64 r1, 0
  ldxdw r2, [r10-1184]
  ldxdw r2, [r2+64]
  lddw r3, -248927404616466946
  jeq r2, r3, jmp_b828

jmp_b820:
  mov64 r1, 1

jmp_b828:
  lddw r7, 3134983651
  jne r1, 0, jmp_b638
  stxdw [r10-4088], r8
  stxdw [r10-4096], r9
  mov64 r1, r10
  add64 r1, -1128
  mov64 r5, r10
  mov64 r2, r6
  ldxdw r3, [r10-1216]
  ldxdw r4, [r10-1256]
  call fn_8d70  ; → sol_invoke_signed_c
  ldxw r0, [r10-1128]
  ldxdw r1, [r10-1176]
  jne r0, 26, jmp_b648
  ja jmp_b908

jmp_b8a8:
  stxdw [r10-4088], r8
  stxdw [r10-4096], r9
  mov64 r1, r10
  add64 r1, -1136
  mov64 r5, r10
  mov64 r2, r6
  ldxdw r3, [r10-1216]
  ldxdw r4, [r10-1256]
  call fn_8828  ; → sol_invoke_signed_c
  ldxw r0, [r10-1136]
  ldxdw r1, [r10-1176]
  jne r0, 26, jmp_bb00

jmp_b908:
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+40]
  lddw r2, -7808848301000303354
  jne r1, r2, jmp_b9b0
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+48]
  lddw r2, -6018520155818964007
  jne r1, r2, jmp_b9b0
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+56]
  lddw r2, -7982811346925931492
  jne r1, r2, jmp_b9b0
  mov64 r1, 0
  ldxdw r2, [r10-1192]
  ldxdw r2, [r2+64]
  lddw r3, -6268729762421306310
  jeq r2, r3, jmp_b9b8

jmp_b9b0:
  mov64 r1, 1

jmp_b9b8:
  jeq r1, 0, jmp_bb10
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+40]
  lddw r2, -2409577606766207738
  jne r1, r2, jmp_ba68
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+48]
  lddw r2, -2680366473547005416
  jne r1, r2, jmp_ba68
  ldxdw r1, [r10-1192]
  ldxdw r1, [r1+56]
  lddw r2, 2814109315776649910
  jne r1, r2, jmp_ba68
  mov64 r1, 0
  ldxdw r2, [r10-1192]
  ldxdw r2, [r2+64]
  lddw r3, -248927404616466946
  jeq r2, r3, jmp_ba70

jmp_ba68:
  mov64 r1, 1

jmp_ba70:
  lddw r7, 3134983651
  jne r1, 0, jmp_b638
  ldxdw r1, [r10-1208]
  stxdw [r10-4088], r1
  ldxdw r1, [r10-1200]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -1144
  mov64 r5, r10
  mov64 r2, r6
  ldxdw r3, [r10-1232]
  ldxdw r4, [r10-1256]
  call fn_8d70  ; → sol_invoke_signed_c
  ldxw r0, [r10-1144]
  ldxdw r1, [r10-1176]
  jne r0, 26, jmp_b648
  ja jmp_bb80

jmp_bb00:
  ldxw r7, [r10-1132]
  ja jmp_b648

jmp_bb10:
  ldxdw r1, [r10-1208]
  stxdw [r10-4088], r1
  ldxdw r1, [r10-1200]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -1152
  mov64 r5, r10
  mov64 r2, r6
  ldxdw r3, [r10-1232]
  ldxdw r4, [r10-1256]
  call fn_8828  ; → sol_invoke_signed_c
  ldxw r0, [r10-1152]
  ldxdw r1, [r10-1176]
  jne r0, 26, jmp_c0f0

jmp_bb80:
  lddw r7, 3134983657
  ldxb r8, [r10-462]
  jgt r8, 2, jmp_b638
  lddw r7, 3134983658
  ldxdw r1, [r10-856]
  ldxdw r2, [r10-864]
  jsgt r2, r1, jmp_b638
  ldxdw r2, [r10-816]
  jslt r2, r1, jmp_b638
  ldxdw r1, [r10-808]
  jsgt r2, r1, jmp_b638
  ldxdw r2, [r10-768]
  jslt r2, r1, jmp_b638
  ldxdw r1, [r10-760]
  jsgt r2, r1, jmp_b638
  mov64 r1, r10
  add64 r1, -1160
  mov64 r2, r10
  add64 r2, -1120
  call fn_167c8  ; → → → → → custom_panic
  lddw r7, 3134983659
  ldxw r1, [r10-1160]
  jne r1, 26, jmp_b638
  mov64 r1, r10
  add64 r1, -1168
  mov64 r2, r10
  add64 r2, -736
  stxdw [r10-1184], r2
  call fn_16518
  lddw r7, 3134983660
  ldxw r2, [r10-1168]
  mov64 r0, 0
  ldxdw r1, [r10-1176]
  jne r2, 26, jmp_b648
  mov64 r1, r10
  add64 r1, -560
  stxdw [r10-1192], r1
  mov64 r6, r10
  add64 r6, -592
  mov64 r1, r10
  add64 r1, -880
  stxdw [r10-1200], r1
  ldxdw r9, [r10-1272]
  ldxdw r2, [r9+80]
  mov64 r7, r9
  add64 r7, 88
  mov64 r1, r7
  call fn_16748  ; → → → → custom_panic
  mov64 r1, r7
  ldxdw r2, [r10-1200]
  mov64 r3, 144
  call fn_2fe28  ; → sol_memmove_
  mov64 r1, r9
  add64 r1, 232
  mov64 r2, r10
  add64 r2, -1120
  mov64 r3, 240
  call fn_2fe28  ; → sol_memmove_
  ldxdw r4, [r10-1248]
  ldxdw r1, [r4+8]
  ldxdw r2, [r4+16]
  ldxdw r3, [r4+24]
  ldxdw r4, [r4+0]
  stxdw [r9+472], r4
  stxdw [r9+496], r3
  stxdw [r9+488], r2
  stxdw [r9+480], r1
  ldxdw r4, [r10-1240]
  ldxdw r1, [r4+0]
  ldxdw r2, [r4+8]
  ldxdw r3, [r4+16]
  ldxdw r4, [r4+24]
  stxdw [r9+528], r4
  stxdw [r9+520], r3
  stxdw [r9+512], r2
  stxdw [r9+504], r1
  ldxdw r1, [r6+0]
  ldxdw r2, [r6+8]
  ldxdw r3, [r6+16]
  ldxdw r4, [r6+24]
  stxdw [r9+560], r4
  stxdw [r9+552], r3
  stxdw [r9+544], r2
  stxdw [r9+536], r1
  ldxdw r4, [r10-1192]
  ldxdw r1, [r4+0]
  ldxdw r2, [r4+8]
  ldxdw r3, [r4+16]
  ldxdw r4, [r4+24]
  stxdw [r9+592], r4
  stxdw [r9+584], r3
  stxdw [r9+576], r2
  stxdw [r9+568], r1
  ldxdw r4, [r10-1264]
  ldxdw r1, [r4+0]
  ldxdw r2, [r4+8]
  ldxdw r3, [r4+16]
  ldxdw r4, [r4+24]
  stxdw [r9+624], r4
  stxdw [r9+616], r3
  stxdw [r9+608], r2
  stxdw [r9+600], r1
  ldxdw r1, [r10-488]
  ldxdw r2, [r10-496]
  stxdw [r9+632], r2
  stxdw [r9+640], r1
  stxb [r9+648], r8
  stw [r9+652], 0
  stw [r9+649], 0
  ldxb r1, [r10-409]
  stxb [r9+656], r1
  stdw [r9+784], 0
  stdw [r9+776], 0
  stdw [r9+768], 0
  stdw [r9+760], 0
  stdw [r9+752], 0
  stdw [r9+744], 0
  stdw [r9+736], 0
  stdw [r9+728], 0
  stdw [r9+720], 0
  stdw [r9+712], 0
  stdw [r9+704], 0
  stdw [r9+696], 0
  stdw [r9+688], 0
  stdw [r9+680], 0
  stdw [r9+672], 0
  stdw [r9+664], 0
  stw [r9+660], 0
  stw [r9+657], 0
  ldxdw r1, [r10-480]
  stxdw [r9+800], r1
  ldxh r1, [r10-464]
  stxh [r9+792], r1
  stw [r9+794], 0
  sth [r9+798], 0
  mov64 r1, r9
  add64 r1, 808
  ldxdw r2, [r10-1184]
  mov64 r3, 80
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-472]
  stxdw [r9+888], r1
  stdw [r9+1024], 0
  stdw [r9+1016], 0
  stdw [r9+1008], 0
  stdw [r9+1000], 0
  stdw [r9+992], 0
  stdw [r9+984], 0
  stdw [r9+976], 0
  stdw [r9+968], 0
  stdw [r9+960], 0
  stdw [r9+952], 0
  stdw [r9+944], 0
  stdw [r9+936], 0
  stdw [r9+928], 0
  stdw [r9+920], 0
  stdw [r9+912], 0
  stdw [r9+904], 0
  stdw [r9+896], 0
  mov64 r1, r9
  add64 r1, 1032
  mov64 r2, 0
  mov64 r3, 776
  call fn_2fe48  ; → sol_memset_
  stdw [r9+1808], 4
  mov64 r1, r7
  call fn_2a6a8  ; → → sol_memcmp_
  ldxdw r1, [r10-1176]
  mov64 r0, 26
  ja jmp_b648

jmp_c0f0:
  ldxw r7, [r10-1148]
  ja jmp_b648

fn_c100:  ; → sol_invoke_signed_c
  mov64 r0, 0
  ldxdw r6, [r4+0]
  ldxdw r7, [r6+80]
  jlt r7, 44, jmp_cac8
  jeq r7, 44, jmp_cc98
  ldxdw r4, [r5-4072]
  stxdw [r10-360], r4
  ldxdw r4, [r5-4080]
  stxdw [r10-368], r4
  ldxdw r4, [r5-4088]
  ldxdw r5, [r5-4096]
  ldxb r0, [r6+132]
  stxb [r10-329], r0
  stxdw [r10-337], r5
  stb [r10-338], 12
  ldxdw r0, [r1+0]
  ldxdw r2, [r2+0]
  ldxdw r1, [r3+0]
  mov64 r8, r6
  add64 r8, 8
  stxdw [r10-312], r8
  mov64 r9, r1
  add64 r9, 8
  stxdw [r10-280], r9
  stxdw [r10-352], r2
  mov64 r3, r2
  add64 r3, 8
  stxdw [r10-296], r3
  mov64 r2, r0
  add64 r2, 8
  stxdw [r10-328], r2
  sth [r10-272], 256
  sth [r10-288], 1
  sth [r10-304], 0
  sth [r10-320], 1
  jeq r4, 0, jmp_c660
  stxdw [r10-376], r9
  ldxb r4, [r0+0]
  jne r4, 255, jmp_cac0
  stxdw [r10-384], r1
  ldxb r4, [r0+1]
  mov64 r5, 1
  mov64 r1, 1
  jeq r4, 0, jmp_cad0
  ldxb r9, [r0+2]
  mov64 r4, 1
  jeq r9, 0, jmp_caf0

jmp_c278:
  stxdw [r10-392], r1
  ldxb r9, [r0+3]
  jne r9, 0, jmp_c298

jmp_c290:
  mov64 r5, 0

jmp_c298:
  ldxdw r9, [r0+80]
  mov64 r1, r0
  add64 r1, 40
  stxdw [r10-232], r1
  mov64 r1, r0
  add64 r1, 88
  stxdw [r10-240], r1
  stxdw [r10-248], r9
  add64 r0, 72
  stxdw [r10-256], r0
  stxdw [r10-264], r2
  stxb [r10-214], r5
  stxb [r10-215], r4
  ldxdw r1, [r10-392]
  stxb [r10-216], r1
  stdw [r10-224], 0
  ldxb r1, [r6+0]
  and64 r1, 136
  ldxdw r9, [r10-384]
  jne r1, 136, jmp_cac0
  ldxb r2, [r6+1]
  mov64 r4, 1
  mov64 r1, 1
  jeq r2, 0, jmp_cb18
  ldxb r2, [r6+2]
  mov64 r5, 1
  jeq r2, 0, jmp_cb38

jmp_c370:
  ldxb r2, [r6+3]
  jne r2, 0, jmp_c388

jmp_c380:
  mov64 r4, 0

jmp_c388:
  mov64 r2, r6
  add64 r2, 40
  stxdw [r10-176], r2
  mov64 r2, r6
  add64 r2, 88
  stxdw [r10-184], r2
  stxdw [r10-192], r7
  add64 r6, 72
  stxdw [r10-200], r6
  stxdw [r10-208], r8
  stxb [r10-158], r4
  stxb [r10-159], r5
  stxb [r10-160], r1
  stdw [r10-168], 0
  ldxdw r1, [r10-352]
  ldxb r1, [r1+0]
  jne r1, 255, jmp_cac0
  ldxdw r6, [r10-352]
  ldxb r2, [r6+1]
  mov64 r4, 1
  mov64 r1, 1
  jeq r2, 0, jmp_cb98
  ldxb r2, [r6+2]
  mov64 r5, 1
  jeq r2, 0, jmp_cbb8

jmp_c450:
  ldxb r2, [r6+3]
  jne r2, 0, jmp_c468

jmp_c460:
  mov64 r4, 0

jmp_c468:
  ldxdw r2, [r6+80]
  mov64 r0, r6
  add64 r0, 40
  stxdw [r10-120], r0
  mov64 r0, r6
  add64 r0, 88
  stxdw [r10-128], r0
  stxdw [r10-136], r2
  add64 r6, 72
  stxdw [r10-144], r6
  stxdw [r10-152], r3
  stxb [r10-102], r4
  stxb [r10-103], r5
  stxb [r10-104], r1
  stdw [r10-112], 0
  ldxb r1, [r9+0]
  and64 r1, 136
  jne r1, 136, jmp_cac0
  ldxb r2, [r9+1]
  mov64 r3, 1
  mov64 r1, 1
  jeq r2, 0, jmp_cc18
  ldxb r2, [r9+2]
  mov64 r4, 1
  jeq r2, 0, jmp_cc38

jmp_c530:
  ldxb r2, [r9+3]
  jne r2, 0, jmp_c548

jmp_c540:
  mov64 r3, 0

jmp_c548:
  ldxdw r2, [r9+80]
  mov64 r5, r9
  add64 r5, 40
  stxdw [r10-64], r5
  mov64 r5, r9
  add64 r5, 88
  stxdw [r10-72], r5
  stxdw [r10-80], r2
  add64 r9, 72
  stxdw [r10-88], r9
  ldxdw r2, [r10-376]
  stxdw [r10-96], r2
  stxb [r10-46], r3
  stxb [r10-47], r4
  stxb [r10-48], r1
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -338
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -328
  stxdw [r10-32], r1
  lddw r1, data_0110
  stxdw [r10-40], r1
  stdw [r10-8], 10
  stdw [r10-24], 4
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -264
  mov64 r3, 4
  ldxdw r4, [r10-368]
  ldxdw r5, [r10-360]
  ja jmp_caa8

jmp_c660:
  ldxb r4, [r0+0]
  jne r4, 255, jmp_cac0
  ldxb r4, [r0+1]
  mov64 r5, 1
  jne r4, 0, jmp_c690
  mov64 r5, 0

jmp_c690:
  stxdw [r10-360], r5
  ldxb r5, [r0+2]
  mov64 r4, 1
  jne r5, 0, jmp_c6b8
  mov64 r4, 0

jmp_c6b8:
  stxdw [r10-376], r9
  stxdw [r10-384], r1
  ldxb r5, [r0+3]
  mov64 r1, 1
  jne r5, 0, jmp_c6e8
  mov64 r1, 0

jmp_c6e8:
  ldxdw r5, [r0+80]
  mov64 r9, r0
  add64 r9, 40
  stxdw [r10-232], r9
  mov64 r9, r0
  add64 r9, 88
  stxdw [r10-240], r9
  stxdw [r10-248], r5
  add64 r0, 72
  stxdw [r10-256], r0
  stxdw [r10-264], r2
  stxb [r10-214], r1
  stxb [r10-215], r4
  ldxdw r1, [r10-360]
  stxb [r10-216], r1
  stdw [r10-224], 0
  ldxb r1, [r6+0]
  and64 r1, 136
  ldxdw r2, [r10-384]
  ldxdw r9, [r10-376]
  jne r1, 136, jmp_cac0
  ldxb r5, [r6+1]
  mov64 r4, 1
  mov64 r1, 1
  jeq r5, 0, jmp_cb58
  ldxb r0, [r6+2]
  mov64 r5, 1
  jeq r0, 0, jmp_cb78

jmp_c7c8:
  ldxb r0, [r6+3]
  jne r0, 0, jmp_c7e0

jmp_c7d8:
  mov64 r4, 0

jmp_c7e0:
  mov64 r0, r6
  add64 r0, 40
  stxdw [r10-176], r0
  mov64 r0, r6
  add64 r0, 88
  stxdw [r10-184], r0
  stxdw [r10-192], r7
  add64 r6, 72
  stxdw [r10-200], r6
  stxdw [r10-208], r8
  stxb [r10-158], r4
  stxb [r10-159], r5
  stxb [r10-160], r1
  stdw [r10-168], 0
  ldxdw r1, [r10-352]
  ldxb r1, [r1+0]
  jne r1, 255, jmp_cac0
  ldxdw r7, [r10-352]
  ldxb r5, [r7+1]
  mov64 r4, 1
  mov64 r1, 1
  jeq r5, 0, jmp_cbd8
  ldxb r0, [r7+2]
  mov64 r5, 1
  jeq r0, 0, jmp_cbf8

jmp_c8a8:
  ldxb r0, [r7+3]
  jne r0, 0, jmp_c8c0

jmp_c8b8:
  mov64 r4, 0

jmp_c8c0:
  ldxdw r0, [r7+80]
  mov64 r6, r7
  add64 r6, 40
  stxdw [r10-120], r6
  mov64 r6, r7
  add64 r6, 88
  stxdw [r10-128], r6
  stxdw [r10-136], r0
  add64 r7, 72
  stxdw [r10-144], r7
  stxdw [r10-152], r3
  stxb [r10-102], r4
  stxb [r10-103], r5
  stxb [r10-104], r1
  stdw [r10-112], 0
  ldxb r1, [r2+0]
  and64 r1, 136
  jne r1, 136, jmp_cac0
  ldxb r1, [r2+1]
  ldxb r3, [r2+2]
  ldxb r5, [r2+3]
  ldxdw r4, [r2+80]
  mov64 r0, r2
  add64 r0, 40
  stxdw [r10-64], r0
  mov64 r0, r2
  add64 r0, 88
  stxdw [r10-72], r0
  stxdw [r10-80], r4
  add64 r2, 72
  stxdw [r10-88], r2
  stxdw [r10-96], r9
  mov64 r2, 1
  mov64 r4, 1
  jeq r5, 0, jmp_cc58
  stxb [r10-46], r4
  mov64 r4, 1
  jeq r3, 0, jmp_cc78

jmp_c9f0:
  stxb [r10-47], r4
  jne r1, 0, jmp_ca08

jmp_ca00:
  mov64 r2, 0

jmp_ca08:
  stxb [r10-48], r2
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -338
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -328
  stxdw [r10-32], r1
  lddw r1, data_0110
  stxdw [r10-40], r1
  stdw [r10-8], 10
  stdw [r10-24], 4
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -264
  mov64 r3, 4
  mov64 r4, 8
  mov64 r5, 0

jmp_caa8:
  call sol_invoke_signed_c
  mov64 r0, 26
  ja jmp_cac8

jmp_cac0:
  mov64 r0, 11

jmp_cac8:
  exit

jmp_cad0:
  mov64 r1, 0
  ldxb r9, [r0+2]
  mov64 r4, 1
  jne r9, 0, jmp_c278

jmp_caf0:
  mov64 r4, 0
  stxdw [r10-392], r1
  ldxb r9, [r0+3]
  jeq r9, 0, jmp_c290
  ja jmp_c298

jmp_cb18:
  mov64 r1, 0
  ldxb r2, [r6+2]
  mov64 r5, 1
  jne r2, 0, jmp_c370

jmp_cb38:
  mov64 r5, 0
  ldxb r2, [r6+3]
  jeq r2, 0, jmp_c380
  ja jmp_c388

jmp_cb58:
  mov64 r1, 0
  ldxb r0, [r6+2]
  mov64 r5, 1
  jne r0, 0, jmp_c7c8

jmp_cb78:
  mov64 r5, 0
  ldxb r0, [r6+3]
  jeq r0, 0, jmp_c7d8
  ja jmp_c7e0

jmp_cb98:
  mov64 r1, 0
  ldxb r2, [r6+2]
  mov64 r5, 1
  jne r2, 0, jmp_c450

jmp_cbb8:
  mov64 r5, 0
  ldxb r2, [r6+3]
  jeq r2, 0, jmp_c460
  ja jmp_c468

jmp_cbd8:
  mov64 r1, 0
  ldxb r0, [r7+2]
  mov64 r5, 1
  jne r0, 0, jmp_c8a8

jmp_cbf8:
  mov64 r5, 0
  ldxb r0, [r7+3]
  jeq r0, 0, jmp_c8b8
  ja jmp_c8c0

jmp_cc18:
  mov64 r1, 0
  ldxb r2, [r9+2]
  mov64 r4, 1
  jne r2, 0, jmp_c530

jmp_cc38:
  mov64 r4, 0
  ldxb r2, [r9+3]
  jeq r2, 0, jmp_c540
  ja jmp_c548

jmp_cc58:
  mov64 r4, 0
  stxb [r10-46], r4
  mov64 r4, 1
  jne r3, 0, jmp_c9f0

jmp_cc78:
  mov64 r4, 0
  stxb [r10-47], r4
  jeq r1, 0, jmp_ca00
  ja jmp_ca08

jmp_cc98:
  mov64 r1, 44
  mov64 r2, 44
  lddw r3, 206376
  call fn_2df20  ; → → → custom_panic

fn_ccc0:  ; → → sol_invoke_signed_c
  mov64 r6, r1
  ldxdw r1, [r2+0]
  ldxdw r0, [r1+40]
  lddw r7, -7808848301000303354
  jne r0, r7, jmp_cd58
  ldxdw r0, [r1+48]
  lddw r7, -6018520155818964007
  jne r0, r7, jmp_cd58
  ldxdw r0, [r1+56]
  lddw r7, -7982811346925931492
  jne r0, r7, jmp_cd58
  mov64 r0, 0
  ldxdw r7, [r1+64]
  lddw r8, -6268729762421306310
  jeq r7, r8, jmp_cd60

jmp_cd58:
  mov64 r0, 1

jmp_cd60:
  ldxdw r7, [r5-4088]
  jeq r0, 0, jmp_ce28
  ldxdw r0, [r1+40]
  lddw r8, -2409577606766207738
  jne r0, r8, jmp_cdf8
  ldxdw r0, [r1+48]
  lddw r8, -2680366473547005416
  jne r0, r8, jmp_cdf8
  ldxdw r0, [r1+56]
  lddw r8, 2814109315776649910
  jne r0, r8, jmp_cdf8
  mov64 r0, 0
  ldxdw r1, [r1+64]
  lddw r8, -248927404616466946
  jeq r1, r8, jmp_ce00

jmp_cdf8:
  mov64 r0, 1

jmp_ce00:
  jeq r0, 0, jmp_ce98
  mov64 r0, 0
  lddw r1, 3134983651
  ja jmp_cf00

jmp_ce28:
  stxdw [r10-8], r7
  stxdw [r10-16], r4
  stxdw [r10-24], r3
  stxdw [r10-32], r2
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, 8
  mov64 r4, 0
  call fn_2bcf8  ; → sol_invoke_signed_c
  ldxw r1, [r10-36]
  ldxw r0, [r10-40]
  ja jmp_cf00

jmp_ce98:
  ldxdw r0, [r5-4096]
  stxdw [r10-4096], r7
  stdw [r10-4072], 0
  stdw [r10-4080], 8
  stdw [r10-4088], 0
  mov64 r5, r10
  mov64 r1, r2
  mov64 r2, r3
  mov64 r3, r4
  mov64 r4, r0
  call fn_c100  ; → sol_invoke_signed_c
  lddw r1, 3134983663

jmp_cf00:
  stxw [r6+4], r1
  stxw [r6+0], r0
  exit

fn_cf18:  ; → sol_invoke_signed_c
  stxdw [r10-392], r4
  stxdw [r10-384], r1
  ldxdw r1, [r5-4072]
  stxb [r10-362], r1
  ldxdw r1, [r2+0]
  mov64 r0, r1
  add64 r0, 40
  ldxdw r6, [r1+40]
  lddw r7, -7808848301000303354
  jne r6, r7, jmp_cfd8
  ldxdw r6, [r0+8]
  lddw r7, -6018520155818964007
  jne r6, r7, jmp_cfd8
  ldxdw r6, [r0+16]
  lddw r7, -7982811346925931492
  jne r6, r7, jmp_cfd8
  mov64 r8, 0
  ldxdw r6, [r0+24]
  lddw r7, -6268729762421306310
  jeq r6, r7, jmp_cfe0

jmp_cfd8:
  mov64 r8, 1

jmp_cfe0:
  ldxdw r7, [r5-4064]
  ldxdw r6, [r5-4080]
  ldxdw r9, [r5-4088]
  ldxdw r4, [r5-4096]
  jeq r8, 0, jmp_d0d0
  ldxdw r2, [r0+0]
  lddw r8, -2409577606766207738
  jne r2, r8, jmp_d0a0
  ldxdw r2, [r0+8]
  lddw r8, -2680366473547005416
  jne r2, r8, jmp_d0a0
  ldxdw r2, [r0+16]
  lddw r8, 2814109315776649910
  jne r2, r8, jmp_d0a0
  mov64 r2, 0
  ldxdw r5, [r0+24]
  stxdw [r10-400], r5
  lddw r8, -248927404616466946
  ldxdw r5, [r10-400]
  jeq r5, r8, jmp_d0a8

jmp_d0a0:
  mov64 r2, 1

jmp_d0a8:
  jeq r2, 0, jmp_d1e8
  mov64 r1, 0
  lddw r2, 3134983651
  ja jmp_d658

jmp_d0d0:
  stxdw [r10-280], r7
  ldxdw r1, [r10-392]
  stxdw [r10-288], r1
  stxdw [r10-296], r3
  stxdw [r10-304], r2
  mov64 r1, r10
  add64 r1, -362
  stxdw [r10-144], r1
  stxdw [r10-160], r6
  stxdw [r10-176], r9
  stxdw [r10-192], r4
  lddw r1, str_06c2
  stxdw [r10-208], r1
  stdw [r10-136], 1
  stdw [r10-152], 32
  stdw [r10-168], 32
  stdw [r10-184], 32
  stdw [r10-200], 6
  mov64 r1, r10
  add64 r1, -208
  stxdw [r10-352], r1
  stdw [r10-344], 5
  mov64 r1, r10
  add64 r1, -376
  mov64 r2, r10
  add64 r2, -304
  mov64 r3, r10
  add64 r3, -352
  mov64 r4, 1
  call fn_2bcf8  ; → sol_invoke_signed_c
  ldxw r1, [r10-376]
  jne r1, 26, jmp_d650

jmp_d1d8:
  mov64 r1, 26
  ja jmp_d658

jmp_d1e8:
  stxdw [r10-360], r7
  stb [r10-361], 3
  ldxdw r5, [r3+0]
  ldxdw r2, [r10-392]
  ldxdw r3, [r2+0]
  mov64 r7, r1
  add64 r7, 8
  stxdw [r10-352], r7
  stxdw [r10-392], r3
  add64 r3, 8
  stxdw [r10-320], r3
  mov64 r8, r5
  add64 r8, 8
  stxdw [r10-336], r8
  sth [r10-312], 256
  sth [r10-328], 1
  sth [r10-344], 1
  mov64 r2, r10
  add64 r2, -362
  stxdw [r10-240], r2
  stxdw [r10-256], r6
  stxdw [r10-272], r9
  stxdw [r10-288], r4
  lddw r2, str_06c2
  stxdw [r10-304], r2
  stdw [r10-232], 1
  stdw [r10-248], 32
  stdw [r10-264], 32
  stdw [r10-280], 32
  stdw [r10-296], 6
  mov64 r2, r10
  add64 r2, -304
  stxdw [r10-224], r2
  stdw [r10-216], 5
  ldxb r2, [r1+0]
  jne r2, 255, jmp_d640
  mov64 r4, r5
  ldxb r2, [r1+1]
  mov64 r5, 1
  mov64 r6, 1
  jeq r2, 0, jmp_d678
  ldxb r2, [r1+2]
  mov64 r9, 1
  jeq r2, 0, jmp_d698

jmp_d350:
  ldxb r2, [r1+3]
  jne r2, 0, jmp_d368

jmp_d360:
  mov64 r5, 0

jmp_d368:
  ldxdw r2, [r1+80]
  stxdw [r10-176], r0
  mov64 r0, r1
  add64 r0, 88
  stxdw [r10-184], r0
  stxdw [r10-192], r2
  add64 r1, 72
  stxdw [r10-200], r1
  stxdw [r10-208], r7
  stxb [r10-158], r5
  stxb [r10-159], r9
  stxb [r10-160], r6
  stdw [r10-168], 0
  ldxb r1, [r4+0]
  jne r1, 255, jmp_d640
  ldxb r2, [r4+1]
  mov64 r0, 1
  mov64 r1, 1
  jeq r2, 0, jmp_d6b8
  ldxb r2, [r4+2]
  mov64 r6, 1
  jeq r2, 0, jmp_d6d8

jmp_d418:
  ldxb r2, [r4+3]
  jne r2, 0, jmp_d430

jmp_d428:
  mov64 r0, 0

jmp_d430:
  ldxdw r2, [r4+80]
  mov64 r5, r4
  add64 r5, 40
  stxdw [r10-120], r5
  mov64 r5, r4
  add64 r5, 88
  stxdw [r10-128], r5
  stxdw [r10-136], r2
  add64 r4, 72
  stxdw [r10-144], r4
  stxdw [r10-152], r8
  stxb [r10-102], r0
  stxb [r10-103], r6
  stxb [r10-104], r1
  stdw [r10-112], 0
  ldxdw r1, [r10-392]
  ldxb r1, [r1+0]
  and64 r1, 136
  jne r1, 136, jmp_d640
  ldxdw r6, [r10-392]
  ldxb r1, [r6+1]
  ldxb r4, [r6+2]
  ldxb r5, [r6+3]
  ldxdw r2, [r6+80]
  mov64 r0, r6
  add64 r0, 40
  stxdw [r10-64], r0
  mov64 r0, r6
  add64 r0, 88
  stxdw [r10-72], r0
  stxdw [r10-80], r2
  add64 r6, 72
  stxdw [r10-88], r6
  stxdw [r10-96], r3
  mov64 r2, 1
  jeq r5, 0, jmp_d6f8
  stxb [r10-46], r2
  mov64 r2, 1
  jeq r4, 0, jmp_d718

jmp_d568:
  stxb [r10-47], r2
  mov64 r2, 1
  jne r1, 0, jmp_d588

jmp_d580:
  mov64 r2, 0

jmp_d588:
  stxb [r10-48], r2
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -361
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -352
  stxdw [r10-32], r1
  lddw r1, data_0110
  stxdw [r10-40], r1
  stdw [r10-8], 9
  stdw [r10-24], 3
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -208
  mov64 r4, r10
  add64 r4, -224
  mov64 r3, 3
  mov64 r5, 1
  call sol_invoke_signed_c
  ja jmp_d1d8

jmp_d640:
  mov64 r1, 11
  ja jmp_d658

jmp_d650:
  ldxw r2, [r10-372]

jmp_d658:
  ldxdw r3, [r10-384]
  stxw [r3+4], r2
  stxw [r3+0], r1
  exit

jmp_d678:
  mov64 r6, 0
  ldxb r2, [r1+2]
  mov64 r9, 1
  jne r2, 0, jmp_d350

jmp_d698:
  mov64 r9, 0
  ldxb r2, [r1+3]
  jeq r2, 0, jmp_d360
  ja jmp_d368

jmp_d6b8:
  mov64 r1, 0
  ldxb r2, [r4+2]
  mov64 r6, 1
  jne r2, 0, jmp_d418

jmp_d6d8:
  mov64 r6, 0
  ldxb r2, [r4+3]
  jeq r2, 0, jmp_d428
  ja jmp_d430

jmp_d6f8:
  mov64 r2, 0
  stxb [r10-46], r2
  mov64 r2, 1
  jne r4, 0, jmp_d568

jmp_d718:
  mov64 r2, 0
  stxb [r10-47], r2
  mov64 r2, 1
  jeq r1, 0, jmp_d580
  ja jmp_d588

fn_d740:  ; → → sol_invoke_signed_c
  stxdw [r10-152], r4
  stxdw [r10-160], r3
  mov64 r6, r1
  ldxdw r3, [r5-4056]
  ldxdw r7, [r5-4064]
  stxb [r10-129], r7
  ldxdw r0, [r2+0]
  ldxdw r1, [r0+40]
  lddw r4, -7808848301000303354
  jne r1, r4, jmp_d800
  ldxdw r1, [r0+48]
  lddw r4, -6018520155818964007
  jne r1, r4, jmp_d800
  ldxdw r1, [r0+56]
  lddw r4, -7982811346925931492
  jne r1, r4, jmp_d800
  mov64 r4, 0
  ldxdw r1, [r0+64]
  lddw r8, -6268729762421306310
  jeq r1, r8, jmp_d808

jmp_d800:
  mov64 r4, 1

jmp_d808:
  ldxdw r1, [r5-4072]
  ldxdw r9, [r5-4080]
  ldxdw r8, [r5-4088]
  jeq r4, 0, jmp_d8e8
  stxdw [r10-168], r3
  ldxdw r4, [r0+40]
  lddw r3, -2409577606766207738
  jne r4, r3, jmp_d8b8
  ldxdw r3, [r0+48]
  lddw r4, -2680366473547005416
  jne r3, r4, jmp_d8b8
  ldxdw r3, [r0+56]
  lddw r4, 2814109315776649910
  jne r3, r4, jmp_d8b8
  mov64 r4, 0
  ldxdw r3, [r0+64]
  lddw r0, -248927404616466946
  jeq r3, r0, jmp_d8c0

jmp_d8b8:
  mov64 r4, 1

jmp_d8c0:
  jeq r4, 0, jmp_da08
  mov64 r0, 0
  lddw r1, 3134983651
  ja jmp_db30

jmp_d8e8:
  stxdw [r10-104], r3
  ldxdw r3, [r10-152]
  stxdw [r10-112], r3
  ldxdw r3, [r10-160]
  stxdw [r10-120], r3
  stxdw [r10-128], r2
  mov64 r2, r10
  add64 r2, -129
  stxdw [r10-16], r2
  stxdw [r10-32], r1
  stxdw [r10-48], r9
  stxdw [r10-64], r8
  lddw r1, str_06c2
  stxdw [r10-80], r1
  stdw [r10-8], 1
  stdw [r10-24], 32
  stdw [r10-40], 32
  stdw [r10-56], 32
  stdw [r10-72], 6
  mov64 r1, r10
  add64 r1, -80
  stxdw [r10-96], r1
  stdw [r10-88], 5
  mov64 r1, r10
  add64 r1, -144
  mov64 r2, r10
  add64 r2, -128
  mov64 r3, r10
  add64 r3, -96
  mov64 r4, 1
  call fn_2bcf8  ; → sol_invoke_signed_c
  ldxw r0, [r10-144]
  jne r0, 26, jmp_db28
  mov64 r0, 26
  ja jmp_db30

jmp_da08:
  ldxdw r0, [r5-4096]
  stxb [r10-96], r7
  mov64 r3, r10
  add64 r3, -96
  stxdw [r10-16], r3
  stxdw [r10-32], r1
  stxdw [r10-48], r9
  stxdw [r10-64], r8
  lddw r1, str_06c2
  stxdw [r10-80], r1
  stdw [r10-8], 1
  stdw [r10-24], 32
  stdw [r10-40], 32
  stdw [r10-56], 32
  stdw [r10-72], 6
  mov64 r1, r10
  add64 r1, -80
  stxdw [r10-128], r1
  stdw [r10-120], 5
  mov64 r1, r10
  add64 r1, -128
  stxdw [r10-4080], r1
  ldxdw r1, [r10-168]
  stxdw [r10-4096], r1
  stdw [r10-4072], 1
  stdw [r10-4088], 1
  mov64 r5, r10
  mov64 r1, r2
  ldxdw r2, [r10-160]
  ldxdw r3, [r10-152]
  mov64 r4, r0
  call fn_c100  ; → sol_invoke_signed_c
  lddw r1, 3134983663
  ja jmp_db30

jmp_db28:
  ldxw r1, [r10-140]

jmp_db30:
  stxw [r6+4], r1
  stxw [r6+0], r0
  exit

fn_db48:
  mov64 r6, 0
  mov64 r8, 195936478
  ldxdw r0, [r5-4048]
  ldxdw r7, [r5-4064]
  stxdw [r10-432], r7
  ldxdw r7, [r5-4072]
  ldxdw r9, [r5-4080]
  stxdw [r10-424], r9
  ldxdw r9, [r5-4096]
  stxdw [r10-416], r9
  ldxdw r9, [r5-4056]
  stxdw [r10-440], r9
  ldxdw r9, [r9+0]
  ldxdw r5, [r5-4088]
  jne r5, 0, jmp_dbc8
  jne r9, 0, jmp_e850

jmp_dbc8:
  stxdw [r10-456], r5
  stxdw [r10-448], r9
  ldxdw r5, [r4+8]
  lddw r8, -3930297668494579962
  jne r5, r8, jmp_dc50
  ldxdw r5, [r4+16]
  lddw r8, -5305770971630447064
  jne r5, r8, jmp_dc50
  ldxdw r5, [r4+24]
  lddw r8, 6660062555789614731
  jne r5, r8, jmp_dc50
  mov64 r5, 0
  ldxdw r8, [r4+32]
  jeq r8, 559633779, jmp_dc58

jmp_dc50:
  mov64 r5, 1

jmp_dc58:
  lddw r8, 2880249322
  jne r5, 0, jmp_e850
  stxdw [r10-472], r7
  mov64 r5, r2
  add64 r5, 8
  stxdw [r10-480], r5
  ldxdw r5, [r5+0]
  stxdw [r10-464], r5
  ldxdw r5, [r5+40]
  lddw r7, -1632001642340221574
  jne r5, r7, jmp_dd50
  ldxdw r5, [r10-464]
  ldxdw r5, [r5+48]
  lddw r7, 8827510275200544966
  jne r5, r7, jmp_dd50
  ldxdw r5, [r10-464]
  ldxdw r5, [r5+56]
  lddw r7, 7913477912056730528
  jne r5, r7, jmp_dd50
  mov64 r5, 0
  ldxdw r7, [r10-464]
  ldxdw r7, [r7+64]
  stxdw [r10-488], r7
  lddw r7, -3189807322954948524
  ldxdw r9, [r10-488]
  jeq r9, r7, jmp_dd58

jmp_dd50:
  mov64 r5, 1

jmp_dd58:
  jne r5, 0, jmp_e850
  ldxdw r5, [r10-416]
  ldxdw r5, [r5+8]
  lddw r7, 7408838205410486022
  jne r5, r7, jmp_de08
  ldxdw r5, [r10-416]
  ldxdw r5, [r5+16]
  lddw r7, -4556801331350414795
  jne r5, r7, jmp_de08
  ldxdw r5, [r10-416]
  ldxdw r5, [r5+24]
  lddw r7, -6524213783030258495
  jne r5, r7, jmp_de08
  mov64 r5, 0
  ldxdw r7, [r10-416]
  ldxdw r9, [r7+32]
  lddw r7, 35966925531
  jeq r9, r7, jmp_de10

jmp_de08:
  mov64 r5, 1

jmp_de10:
  ldxdw r9, [r10-464]
  jne r5, 0, jmp_e850
  ldxdw r5, [r9+80]
  jne r5, 1728, jmp_e880
  mov64 r5, r9
  add64 r5, 88
  stxdw [r10-488], r5
  and64 r5, 7
  jne r5, 0, jmp_e8a8
  lddw r8, 3134983650
  ldxdw r5, [r9+648]
  xor64 r5, -95
  mov64 r7, r5
  and64 r7, 255
  jgt r7, 2, jmp_e850
  stxdw [r10-496], r1
  jlt r0, r3, jmp_deb0
  mov64 r3, 0
  ja jmp_dec8

jmp_deb0:
  lsh64 r0, 3
  mov64 r3, r2
  add64 r3, r0

jmp_dec8:
  ldxdw r7, [r4+88]
  ldxdw r6, [r9+688]
  stxdw [r10-504], r2
  ldxdw r8, [r2+0]
  add64 r8, 8
  mov64 r1, r10
  add64 r1, -256
  mov64 r2, r5
  ldxdw r4, [r10-488]
  mov64 r5, r8
  call fn_7858
  ldxw r1, [r10-256]
  jeq r1, 0, jmp_df50

jmp_df30:
  ldxw r8, [r10-248]
  ldxw r6, [r10-252]

jmp_df40:
  ldxdw r1, [r10-496]
  ja jmp_e850

jmp_df50:
  stxdw [r10-536], r6
  ldxdw r1, [r10-504]
  mov64 r6, r1
  add64 r6, 24
  mov64 r5, r1
  add64 r5, 16
  ldxdw r1, [r10-248]
  stxdw [r10-520], r1
  ldxdw r1, [r9+584]
  lddw r2, 333573717361279942
  xor64 r1, r2
  ldxdw r2, [r9+592]
  lddw r3, 333292238089536453
  xor64 r2, r3
  ldxdw r3, [r9+568]
  ldxdw r4, [r9+576]
  stxdw [r10-232], r2
  stxdw [r10-240], r1
  lddw r1, 333855179453154247
  xor64 r4, r1
  stxdw [r10-248], r4
  lddw r1, -334136658724897736
  xor64 r3, r1
  stxdw [r10-256], r3
  be64 r3
  stxdw [r10-528], r5
  ldxdw r5, [r5+0]
  ldxdw r4, [r5+8]
  be64 r4
  ldxdw r1, [r10-496]
  jne r3, r4, jmp_e0e8
  ldxdw r3, [r10-248]
  be64 r3
  ldxdw r4, [r5+16]
  be64 r4
  jne r3, r4, jmp_e0e8
  ldxdw r3, [r10-240]
  be64 r3
  ldxdw r4, [r5+24]
  be64 r4
  jne r3, r4, jmp_e0e8
  mov64 r2, 0
  ldxdw r3, [r10-232]
  be64 r3
  ldxdw r4, [r5+32]
  be64 r4
  jeq r3, r4, jmp_e100

jmp_e0e8:
  mov64 r2, -1
  jlt r3, r4, jmp_e100
  mov64 r2, 1

jmp_e100:
  stxdw [r10-512], r5
  ldxdw r4, [r9+552]
  lddw r3, 333573717361279942
  xor64 r4, r3
  ldxdw r5, [r9+560]
  lddw r3, 333292238089536453
  xor64 r5, r3
  ldxdw r3, [r9+536]
  ldxdw r0, [r9+544]
  stxdw [r10-232], r5
  stxdw [r10-240], r4
  lddw r4, 333855179453154247
  xor64 r0, r4
  stxdw [r10-248], r0
  lddw r4, -334136658724897736
  xor64 r3, r4
  stxdw [r10-256], r3
  be64 r3
  ldxdw r0, [r6+0]
  ldxdw r4, [r0+8]
  be64 r4
  jne r3, r4, jmp_e250
  ldxdw r3, [r10-248]
  be64 r3
  ldxdw r4, [r0+16]
  be64 r4
  jne r3, r4, jmp_e250
  ldxdw r3, [r10-240]
  be64 r3
  ldxdw r4, [r0+24]
  be64 r4
  jne r3, r4, jmp_e250
  mov64 r5, 0
  ldxdw r3, [r10-232]
  be64 r3
  ldxdw r4, [r0+32]
  be64 r4
  jeq r3, r4, jmp_e268

jmp_e250:
  mov64 r5, -1
  jlt r3, r4, jmp_e268
  mov64 r5, 1

jmp_e268:
  or64 r5, r2
  lsh64 r5, 32
  rsh64 r5, 32
  jeq r5, 0, jmp_e2a8
  mov64 r6, 0
  lddw r8, 3135220963
  ja jmp_e850

jmp_e2a8:
  stxdw [r10-552], r6
  ldxdw r4, [r9+704]
  lddw r2, 7970776174128919018
  xor64 r4, r2
  mov64 r5, r7
  mov64 r3, r5
  mov64 r7, r4
  sub64 r3, r4
  mov64 r6, 0
  mov64 r4, 1
  jle r3, r5, jmp_e348
  stxdw [r10-544], r8
  mov64 r5, 0
  jeq r4, 0, jmp_e368

jmp_e320:
  ldxdw r3, [r9+696]
  xor64 r3, r2
  mov64 r8, 1027565
  jle r5, r3, jmp_e390
  ja jmp_e850

jmp_e348:
  mov64 r4, 0
  stxdw [r10-544], r8
  mov64 r5, 0
  jne r4, 0, jmp_e320

jmp_e368:
  mov64 r5, r3
  ldxdw r3, [r9+696]
  xor64 r3, r2
  mov64 r8, 1027565
  jgt r5, r3, jmp_e850

jmp_e390:
  stxdw [r10-568], r5
  stxdw [r10-560], r0
  mov64 r1, r10
  add64 r1, -256
  call sol_get_last_restart_slot
  jeq r0, 0, jmp_e450
  lddw r1, -4294967296
  mov64 r2, r0
  add64 r2, r1
  mov64 r1, r2
  rsh64 r1, 32
  lsh64 r2, 32
  or64 r2, r1
  ldxdw r1, [r10-496]
  jge r2, 26, jmp_e848
  mov64 r3, r2
  lsh64 r3, 2
  lddw r4, data_0860
  add64 r4, r3
  ldxw r8, [r4+0]
  mov64 r6, r2
  ja jmp_e850

jmp_e450:
  ldxdw r2, [r10-256]
  ldxdw r1, [r10-496]
  jle r7, r2, jmp_e850
  mov64 r8, r9
  add64 r8, 8
  ldxdw r6, [r10-544]
  mov64 r1, r6
  mov64 r2, r8
  mov64 r3, r7
  call fn_12770  ; → sol_sha256
  mov64 r3, 1
  ldxdw r1, [r10-424]
  jeq r0, r1, jmp_e4f8
  mov64 r1, r6
  mov64 r2, r8
  mov64 r3, r7
  call fn_128c0  ; → sol_sha256
  mov64 r3, 1
  ldxdw r1, [r10-424]
  jeq r0, r1, jmp_e4f8
  mov64 r3, 0

jmp_e4f8:
  mov64 r6, 0
  ldxdw r2, [r10-432]
  and64 r2, 255
  mov64 r4, 0
  ldxdw r1, [r10-496]
  ldxdw r5, [r10-512]
  jeq r2, 0, jmp_e540
  jne r2, 1, jmp_e868
  mov64 r4, 1

jmp_e540:
  stxdw [r10-424], r8
  mov64 r8, 11644386
  ldxdw r2, [r5+80]
  jlt r2, 72, jmp_e850
  stxdw [r10-576], r4
  stxdw [r10-584], r3
  ldxdw r2, [r10-560]
  ldxdw r2, [r2+80]
  jlt r2, 72, jmp_e850
  ldxdw r1, [r10-440]
  ldxdw r2, [r1+16]
  mov64 r1, r2
  lsh64 r1, 48
  ldxdw r3, [r10-448]
  jne r3, 0, jmp_e5c0
  mov64 r1, 0

jmp_e5c0:
  ldxdw r3, [r10-512]
  ldxdw r3, [r3+152]
  stxdw [r10-512], r3
  rsh64 r2, 16
  ldxdw r3, [r10-448]
  jne r3, 0, jmp_e5f8
  mov64 r2, 0

jmp_e5f8:
  ldxdw r3, [r10-560]
  ldxdw r3, [r3+152]
  ldxdw r5, [r10-424]
  ldxdw r4, [r5+24]
  stxdw [r10-328], r4
  ldxdw r4, [r5+16]
  stxdw [r10-336], r4
  ldxdw r4, [r5+8]
  stxdw [r10-344], r4
  ldxdw r4, [r5+0]
  stxdw [r10-352], r4
  ldxdw r5, [r10-416]
  ldxdw r4, [r5+80]
  ldxdw r0, [r10-520]
  stxdw [r10-4016], r0
  stxdw [r10-4024], r2
  stxdw [r10-4032], r1
  ldxdw r1, [r10-568]
  stxdw [r10-4048], r1
  stxdw [r10-4056], r4
  add64 r5, 88
  stxdw [r10-4064], r5
  mov64 r1, r10
  add64 r1, -352
  stxdw [r10-4072], r1
  ldxdw r1, [r10-584]
  and64 r1, 1
  stxdw [r10-4080], r1
  ldxdw r1, [r10-488]
  stxdw [r10-4088], r1
  ldxdw r1, [r10-576]
  stxdw [r10-4096], r1
  stdw [r10-4040], 0
  mov64 r1, r10
  add64 r1, -256
  mov64 r5, r10
  ldxdw r2, [r10-472]
  stxdw [r10-416], r3
  ldxdw r4, [r10-512]
  call fn_25ee0
  ldxw r1, [r10-256]
  jeq r1, 1, jmp_df30
  ldxdw r3, [r10-504]
  mov64 r2, r3
  add64 r2, 40
  add64 r3, 32
  ldxdw r1, [r10-208]
  stxdw [r10-640], r1
  ldxdw r1, [r10-216]
  stxdw [r10-632], r1
  ldxdw r1, [r10-224]
  stxdw [r10-624], r1
  ldxdw r1, [r10-232]
  stxdw [r10-616], r1
  ldxdw r1, [r10-240]
  stxdw [r10-608], r1
  ldxdw r1, [r10-248]
  stxdw [r10-600], r1
  ldxdw r1, [r10-200]
  stxdw [r10-488], r1
  ldxdw r1, [r10-576]
  jeq r1, 0, jmp_e8d0
  ldxdw r1, [r10-456]
  jeq r1, 0, jmp_ebc8
  mov64 r5, 528
  mov64 r0, 520
  mov64 r1, 512
  mov64 r4, 504
  ldxdw r6, [r10-528]
  stxdw [r10-520], r6
  stxdw [r10-560], r3
  stxdw [r10-568], r2
  ldxdw r2, [r10-552]
  ja jmp_e928

jmp_e848:
  mov64 r8, r0

jmp_e850:
  stxw [r1+4], r8
  stxw [r1+0], r6
  exit

jmp_e868:
  lddw r8, 3134918669
  ja jmp_e850

jmp_e880:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_e8a8:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_e8d0:
  ldxdw r1, [r10-456]
  jeq r1, 0, jmp_ebf8
  mov64 r5, 496
  mov64 r0, 488
  mov64 r1, 480
  mov64 r4, 472
  ldxdw r6, [r10-552]
  stxdw [r10-520], r6
  stxdw [r10-560], r2
  stxdw [r10-568], r3
  ldxdw r2, [r10-528]

jmp_e928:
  stxdw [r10-592], r2
  ldxdw r7, [r10-464]
  mov64 r2, r7
  add64 r2, r0
  ldxdw r0, [r2+0]
  lddw r2, 333573717361279942
  xor64 r0, r2
  mov64 r3, r7
  add64 r3, r5
  ldxdw r5, [r3+0]
  lddw r3, 333292238089536453
  xor64 r5, r3
  mov64 r6, r7
  add64 r6, r4
  ldxdw r6, [r6+0]
  mov64 r4, r7
  add64 r4, r1
  ldxdw r4, [r4+0]
  stxdw [r10-360], r5
  stxdw [r10-368], r0
  lddw r1, 333855179453154247
  xor64 r4, r1
  stxdw [r10-376], r4
  lddw r4, -334136658724897736
  xor64 r6, r4
  stxdw [r10-384], r6
  ldxdw r5, [r7+1808]
  jge r5, 5, jmp_ea98
  ldxdw r0, [r10-464]
  ldxdw r5, [r0+616]
  xor64 r5, r2
  ldxdw r2, [r0+624]
  xor64 r2, r3
  ldxdw r3, [r0+600]
  ldxdw r0, [r0+608]
  stxdw [r10-232], r2
  stxdw [r10-240], r5
  xor64 r0, r1
  stxdw [r10-248], r0
  xor64 r3, r4
  stxdw [r10-256], r3
  ja jmp_eae8

jmp_ea98:
  ldxdw r1, [r10-464]
  add64 r1, 600
  ldxdw r2, [r1+24]
  stxdw [r10-232], r2
  ldxdw r2, [r1+16]
  stxdw [r10-240], r2
  ldxdw r2, [r1+8]
  stxdw [r10-248], r2
  ldxdw r1, [r1+0]
  stxdw [r10-256], r1

jmp_eae8:
  mov64 r1, r10
  add64 r1, -352
  mov64 r2, r10
  add64 r2, -256
  mov64 r3, r10
  add64 r3, -384
  call fn_28a20  ; → sol_try_find_program_address
  ldxdw r1, [r10-456]
  ldxdw r1, [r1+0]
  ldxdw r2, [r1+8]
  ldxdw r3, [r10-352]
  jne r2, r3, jmp_eb98
  ldxdw r2, [r1+16]
  ldxdw r3, [r10-344]
  jne r2, r3, jmp_eb98
  ldxdw r2, [r1+24]
  ldxdw r3, [r10-336]
  jne r2, r3, jmp_eb98
  mov64 r2, 0
  ldxdw r1, [r1+32]
  ldxdw r3, [r10-328]
  jeq r1, r3, jmp_eba0

jmp_eb98:
  mov64 r2, 1

jmp_eba0:
  jeq r2, 0, jmp_ec28
  mov64 r6, 0
  lddw r8, 3134983656
  ja jmp_df40

jmp_ebc8:
  ldxdw r1, [r10-552]
  stxdw [r10-592], r1
  stxdw [r10-568], r2
  stxdw [r10-560], r3
  ldxdw r1, [r10-528]
  ja jmp_ec20

jmp_ebf8:
  ldxdw r1, [r10-528]
  stxdw [r10-592], r1
  stxdw [r10-568], r3
  stxdw [r10-560], r2
  ldxdw r1, [r10-552]

jmp_ec20:
  stxdw [r10-520], r1

jmp_ec28:
  mov64 r1, 0
  stxdw [r10-528], r1
  ldxdw r1, [r10-488]
  ldxdw r2, [r10-448]
  jeq r2, 0, jmp_ec88
  ldxdw r1, [r10-440]
  ldxdw r2, [r1+8]
  ldxdw r1, [r10-488]
  mul64 r2, r1
  div64 r2, 10000
  stxdw [r10-528], r2
  sub64 r1, r2

jmp_ec88:
  ldxdw r2, [r10-464]
  mov64 r8, r2
  add64 r8, 600
  ldxdw r2, [r2+1808]
  jge r2, 5, jmp_ed60
  ldxdw r5, [r10-464]
  ldxdw r2, [r5+616]
  lddw r3, 333573717361279942
  xor64 r2, r3
  ldxdw r3, [r5+624]
  lddw r4, 333292238089536453
  xor64 r3, r4
  ldxdw r4, [r5+600]
  ldxdw r5, [r5+608]
  stxdw [r10-360], r3
  stxdw [r10-368], r2
  lddw r2, 333855179453154247
  xor64 r5, r2
  stxdw [r10-376], r5
  lddw r2, -334136658724897736
  xor64 r4, r2
  stxdw [r10-384], r4
  ja jmp_eda0

jmp_ed60:
  ldxdw r2, [r8+24]
  stxdw [r10-360], r2
  ldxdw r2, [r8+16]
  stxdw [r10-368], r2
  ldxdw r2, [r8+8]
  stxdw [r10-376], r2
  ldxdw r2, [r8+0]
  stxdw [r10-384], r2

jmp_eda0:
  ldxdw r9, [r10-464]
  ldxdw r3, [r9+528]
  lddw r2, 333292238089536453
  xor64 r3, r2
  ldxdw r4, [r9+504]
  ldxdw r5, [r9+512]
  ldxdw r0, [r9+520]
  stxdw [r10-328], r3
  lddw r3, 333573717361279942
  xor64 r0, r3
  stxdw [r10-336], r0
  lddw r0, 333855179453154247
  xor64 r5, r0
  stxdw [r10-344], r5
  lddw r5, -334136658724897736
  xor64 r4, r5
  stxdw [r10-352], r4
  ldxdw r4, [r9+496]
  xor64 r4, r2
  ldxdw r2, [r9+472]
  ldxdw r6, [r9+480]
  ldxdw r7, [r9+488]
  stxdw [r10-232], r4
  xor64 r7, r3
  stxdw [r10-240], r7
  xor64 r6, r0
  stxdw [r10-248], r6
  xor64 r2, r5
  stxdw [r10-256], r2
  ldxdw r2, [r9+656]
  stxdw [r10-4064], r1
  xor64 r2, 98
  stxdw [r10-4072], r2
  mov64 r1, r10
  add64 r1, -256
  stxdw [r10-4080], r1
  mov64 r1, r10
  add64 r1, -352
  stxdw [r10-4088], r1
  mov64 r1, r10
  add64 r1, -384
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -392
  mov64 r5, r10
  ldxdw r2, [r10-520]
  ldxdw r3, [r10-560]
  ldxdw r4, [r10-480]
  call fn_cf18  ; → sol_invoke_signed_c
  ldxw r6, [r10-392]
  jne r6, 26, jmp_f040
  ldxdw r1, [r10-528]
  jeq r1, 0, jmp_f268
  ldxdw r1, [r10-456]
  jeq r1, 0, jmp_f050
  ldxdw r1, [r10-464]
  ldxdw r1, [r1+1808]
  jge r1, 5, jmp_f068
  ldxdw r4, [r10-464]
  ldxdw r1, [r4+616]
  lddw r2, 333573717361279942
  xor64 r1, r2
  ldxdw r2, [r4+624]
  lddw r3, 333292238089536453
  xor64 r2, r3
  ldxdw r3, [r4+600]
  ldxdw r4, [r4+608]
  stxdw [r10-360], r2
  stxdw [r10-368], r1
  lddw r1, 333855179453154247
  xor64 r4, r1
  stxdw [r10-376], r4
  lddw r1, -334136658724897736
  xor64 r3, r1
  stxdw [r10-384], r3
  ja jmp_f0a8

jmp_f040:
  ldxw r8, [r10-388]
  ja jmp_df40

jmp_f050:
  mov64 r6, 0
  mov64 r8, 195936478
  ja jmp_df40

jmp_f068:
  ldxdw r1, [r8+24]
  stxdw [r10-360], r1
  ldxdw r1, [r8+16]
  stxdw [r10-368], r1
  ldxdw r1, [r8+8]
  stxdw [r10-376], r1
  ldxdw r1, [r8+0]
  stxdw [r10-384], r1

jmp_f0a8:
  ldxdw r7, [r10-464]
  ldxdw r2, [r7+528]
  lddw r1, 333292238089536453
  xor64 r2, r1
  ldxdw r3, [r7+504]
  ldxdw r4, [r7+512]
  ldxdw r5, [r7+520]
  stxdw [r10-328], r2
  lddw r2, 333573717361279942
  xor64 r5, r2
  stxdw [r10-336], r5
  lddw r5, 333855179453154247
  xor64 r4, r5
  stxdw [r10-344], r4
  lddw r4, -334136658724897736
  xor64 r3, r4
  stxdw [r10-352], r3
  ldxdw r3, [r7+496]
  xor64 r3, r1
  ldxdw r1, [r7+472]
  ldxdw r0, [r7+480]
  ldxdw r6, [r7+488]
  stxdw [r10-232], r3
  xor64 r6, r2
  stxdw [r10-240], r6
  xor64 r0, r5
  stxdw [r10-248], r0
  xor64 r1, r4
  stxdw [r10-256], r1
  ldxdw r1, [r7+656]
  ldxdw r2, [r10-528]
  stxdw [r10-4064], r2
  xor64 r1, 98
  stxdw [r10-4072], r1
  mov64 r1, r10
  add64 r1, -256
  stxdw [r10-4080], r1
  mov64 r1, r10
  add64 r1, -352
  stxdw [r10-4088], r1
  mov64 r1, r10
  add64 r1, -384
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -400
  mov64 r5, r10
  ldxdw r2, [r10-520]
  ldxdw r3, [r10-456]
  ldxdw r4, [r10-480]
  call fn_cf18  ; → sol_invoke_signed_c
  ldxw r6, [r10-400]
  jne r6, 26, jmp_f8c0

jmp_f268:
  ldxdw r1, [r10-472]
  stxdw [r10-232], r1
  ldxdw r1, [r10-504]
  stxdw [r10-240], r1
  ldxdw r1, [r10-592]
  stxdw [r10-248], r1
  ldxdw r1, [r10-568]
  stxdw [r10-256], r1
  mov64 r1, r10
  add64 r1, -408
  mov64 r2, r10
  add64 r2, -256
  mov64 r3, 8
  mov64 r4, 0
  call fn_2bcf8  ; → sol_invoke_signed_c
  ldxw r6, [r10-408]
  jne r6, 26, jmp_f8b0
  ldxdw r1, [r10-488]
  stxdw [r10-456], r1
  ldxdw r1, [r10-576]
  jne r1, 0, jmp_f320
  ldxdw r1, [r10-472]
  stxdw [r10-456], r1

jmp_f320:
  ldxdw r1, [r10-576]
  jne r1, 0, jmp_f340
  ldxdw r1, [r10-488]
  stxdw [r10-472], r1

jmp_f340:
  ldxdw r4, [r10-544]
  ldxdw r1, [r4+24]
  stxdw [r10-296], r1
  ldxdw r1, [r4+16]
  stxdw [r10-304], r1
  ldxdw r1, [r4+8]
  stxdw [r10-312], r1
  ldxdw r1, [r4+0]
  stxdw [r10-320], r1
  ldxdw r2, [r10-424]
  ldxdw r1, [r2+0]
  stxdw [r10-288], r1
  ldxdw r1, [r2+8]
  stxdw [r10-280], r1
  ldxdw r1, [r2+16]
  stxdw [r10-272], r1
  ldxdw r1, [r2+24]
  stxdw [r10-264], r1
  ldxdw r1, [r10-440]
  ldxb r2, [r1+24]
  stxdw [r10-480], r2
  ldxdw r1, [r1+8]
  stxdw [r10-440], r1
  ldxdw r5, [r10-464]
  ldxdw r1, [r5+528]
  stxdw [r10-528], r1
  ldxdw r1, [r5+496]
  stxdw [r10-488], r1
  ldxdw r1, [r5+520]
  stxdw [r10-552], r1
  ldxdw r1, [r5+488]
  stxdw [r10-504], r1
  ldxdw r1, [r5+512]
  stxdw [r10-568], r1
  ldxdw r1, [r5+480]
  stxdw [r10-520], r1
  ldxdw r6, [r5+504]
  ldxdw r1, [r5+472]
  stxdw [r10-424], r1
  ldxdw r8, [r5+888]
  ldxdw r7, [r5+800]
  ldxdw r0, [r5+664]
  ldxdw r9, [r5+672]
  ldxdw r1, [r4+0]
  ldxdw r2, [r4+8]
  ldxdw r3, [r4+16]
  ldxdw r4, [r4+24]
  stxdw [r5+736], r4
  stxdw [r5+728], r3
  stxdw [r5+720], r2
  stxdw [r5+712], r1
  stxdw [r10-560], r9
  stxdw [r5+752], r9
  stxdw [r10-544], r0
  stxdw [r5+744], r0
  ldxdw r1, [r10-432]
  stxb [r5+776], r1
  ldxdw r1, [r10-472]
  stxdw [r5+768], r1
  ldxdw r1, [r10-456]
  stxdw [r5+760], r1
  stdw [r5+777], 0
  stdw [r5+784], 0
  add64 r5, 712
  mov64 r1, r5
  call fn_2600
  mov64 r1, r10
  add64 r1, -256
  mov64 r2, r10
  add64 r2, -320
  stxdw [r10-464], r1
  mov64 r3, 64
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-448]
  jne r1, 0, jmp_f5a8
  mov64 r1, 0
  stxdw [r10-440], r1

jmp_f5a8:
  ldxdw r1, [r10-536]
  lddw r2, 7970776174128921066
  xor64 r1, r2
  stxdw [r10-536], r1
  ldxdw r1, [r10-448]
  jne r1, 0, jmp_f5f0
  mov64 r1, 0
  stxdw [r10-480], r1

jmp_f5f0:
  lddw r1, -3235412798162765972
  xor64 r7, r1
  lddw r1, 5782998650930657501
  xor64 r8, r1
  lddw r1, -334136658724897736
  ldxdw r2, [r10-424]
  xor64 r2, r1
  stxdw [r10-424], r2
  mov64 r5, r6
  xor64 r5, r1
  lddw r1, 333855179453154247
  ldxdw r4, [r10-520]
  xor64 r4, r1
  ldxdw r6, [r10-568]
  xor64 r6, r1
  lddw r1, 333573717361279942
  ldxdw r3, [r10-504]
  xor64 r3, r1
  ldxdw r9, [r10-552]
  xor64 r9, r1
  lddw r1, 333292238089536453
  ldxdw r2, [r10-488]
  xor64 r2, r1
  ldxdw r0, [r10-528]
  xor64 r0, r1
  ldxdw r1, [r10-640]
  stxdw [r10-72], r1
  ldxdw r1, [r10-632]
  stxdw [r10-80], r1
  ldxdw r1, [r10-624]
  stxdw [r10-88], r1
  ldxdw r1, [r10-616]
  stxdw [r10-96], r1
  ldxdw r1, [r10-608]
  stxdw [r10-104], r1
  ldxdw r1, [r10-600]
  stxdw [r10-112], r1
  ldxdw r1, [r10-560]
  stxdw [r10-120], r1
  ldxdw r1, [r10-544]
  stxdw [r10-128], r1
  ldxdw r1, [r10-480]
  stxb [r10-5], r1
  ldxdw r1, [r10-440]
  stxb [r10-6], r1
  ldxdw r1, [r10-584]
  and64 r1, 1
  stxb [r10-7], r1
  ldxdw r1, [r10-432]
  stxb [r10-8], r1
  stxdw [r10-16], r8
  stxdw [r10-24], r7
  ldxdw r1, [r10-536]
  stxdw [r10-32], r1
  ldxdw r1, [r10-472]
  stxdw [r10-40], r1
  ldxdw r1, [r10-456]
  stxdw [r10-48], r1
  ldxdw r1, [r10-416]
  stxdw [r10-56], r1
  ldxdw r1, [r10-512]
  stxdw [r10-64], r1
  stxdw [r10-136], r0
  stxdw [r10-144], r9
  stxdw [r10-152], r6
  stxdw [r10-160], r5
  stxdw [r10-168], r2
  stxdw [r10-176], r3
  stxdw [r10-184], r4
  ldxdw r1, [r10-424]
  stxdw [r10-192], r1
  ldxdw r6, [r10-464]
  mov64 r1, r6
  call fn_1e20
  stxdw [r10-352], r6
  stdw [r10-344], 256
  mov64 r1, r10
  add64 r1, -352
  mov64 r2, 1
  call fn_2de38  ; sol_log_data
  mov64 r6, 26
  ja jmp_df40

jmp_f8b0:
  ldxw r8, [r10-404]
  ja jmp_df40

jmp_f8c0:
  ldxw r8, [r10-396]
  ja jmp_df40

fn_f8d0:
  ldxdw r8, [r2+72]
  ldxdw r6, [r8+8]
  lddw r0, 7408838205410486022
  jne r6, r0, jmp_f960
  ldxdw r6, [r8+16]
  lddw r0, -4556801331350414795
  jne r6, r0, jmp_f960
  ldxdw r6, [r8+24]
  lddw r0, -6524213783030258495
  jne r6, r0, jmp_f960
  mov64 r7, 0
  ldxdw r0, [r8+32]
  lddw r6, 35966925531
  jeq r0, r6, jmp_f968

jmp_f960:
  mov64 r7, 1

jmp_f968:
  mov64 r9, 0
  lddw r6, 2880249322
  jne r7, 0, jmp_113a0
  stxdw [r10-408], r4
  ldxdw r4, [r2+48]
  ldxdw r0, [r4+8]
  lddw r7, -3930297668494579962
  jne r0, r7, jmp_fa10
  ldxdw r0, [r4+16]
  lddw r7, -5305770971630447064
  jne r0, r7, jmp_fa10
  ldxdw r0, [r4+24]
  lddw r7, 6660062555789614731
  jne r0, r7, jmp_fa10
  mov64 r0, 0
  ldxdw r7, [r4+32]
  jeq r7, 559633779, jmp_fa18

jmp_fa10:
  mov64 r0, 1

jmp_fa18:
  jne r0, 0, jmp_113a0
  stxdw [r10-424], r8
  mov64 r0, r2
  add64 r0, 8
  stxdw [r10-432], r0
  ldxdw r0, [r0+0]
  stxdw [r10-416], r0
  ldxdw r0, [r0+40]
  lddw r7, -1632001642340221574
  jne r0, r7, jmp_fb00
  ldxdw r0, [r10-416]
  ldxdw r0, [r0+48]
  lddw r7, 8827510275200544966
  jne r0, r7, jmp_fb00
  ldxdw r0, [r10-416]
  ldxdw r0, [r0+56]
  lddw r7, 7913477912056730528
  jne r0, r7, jmp_fb00
  mov64 r0, 0
  ldxdw r7, [r10-416]
  ldxdw r7, [r7+64]
  stxdw [r10-440], r7
  lddw r7, -3189807322954948524
  ldxdw r8, [r10-440]
  jeq r8, r7, jmp_fb08

jmp_fb00:
  mov64 r0, 1

jmp_fb08:
  jne r0, 0, jmp_113a0
  ldxdw r7, [r10-416]
  ldxdw r0, [r7+80]
  jne r0, 1728, jmp_10970
  mov64 r0, r7
  add64 r0, 88
  stxdw [r10-448], r0
  and64 r0, 7
  jne r0, 0, jmp_10998
  lddw r6, 3134983650
  ldxdw r0, [r7+648]
  xor64 r0, -95
  stxdw [r10-440], r0
  and64 r0, 255
  jge r0, 3, jmp_113a0
  ldxdw r9, [r2+0]
  ldxdw r0, [r9+8]
  add64 r9, 8
  lddw r6, 8629555902467136795
  jne r0, r6, jmp_fc20
  ldxdw r0, [r9+8]
  lddw r6, 3273688308099379272
  jne r0, r6, jmp_fc20
  ldxdw r0, [r9+16]
  lddw r6, 9125451549993889732
  jne r0, r6, jmp_fc20
  mov64 r0, 0
  ldxdw r6, [r9+24]
  lddw r7, 3565020137746494549
  jeq r6, r7, jmp_fc28

jmp_fc20:
  mov64 r0, 1

jmp_fc28:
  stxdw [r10-480], r9
  ldxdw r7, [r10-416]
  ldxdw r9, [r7+688]
  ldxdw r6, [r5-4064]
  stxdw [r10-504], r6
  ldxdw r6, [r5-4072]
  stxdw [r10-496], r6
  ldxdw r6, [r5-4080]
  stxdw [r10-488], r6
  ldxdw r6, [r5-4088]
  stxdw [r10-472], r6
  ldxdw r6, [r5-4096]
  ldxdw r4, [r4+88]
  jeq r0, 0, jmp_fcd0
  ldxdw r0, [r10-440]
  and64 r0, 255
  jeq r0, 0, jmp_fcf8
  jne r0, 1, jmp_fd18
  mov64 r9, 0
  mov64 r6, 7405
  ja jmp_113a0

jmp_fcd0:
  stxdw [r10-464], r4
  stxdw [r10-512], r6
  mov64 r3, 0
  stxdw [r10-440], r3
  ja jmp_fec8

jmp_fcf8:
  stxdw [r10-464], r4
  stxdw [r10-440], r0
  stxdw [r10-512], r6
  ja jmp_fec8

jmp_fd18:
  stxdw [r10-512], r6
  stxdw [r10-528], r9
  ldxdw r5, [r5-4056]
  ldxdw r0, [r7+1008]
  lddw r6, 333573717361279942
  xor64 r0, r6
  ldxdw r6, [r7+1016]
  mov64 r9, r7
  lddw r7, 333292238089536453
  xor64 r6, r7
  ldxdw r7, [r9+992]
  ldxdw r9, [r9+1000]
  stxdw [r10-232], r6
  stxdw [r10-240], r0
  lddw r0, 333855179453154247
  xor64 r9, r0
  stxdw [r10-248], r9
  lddw r0, -334136658724897736
  xor64 r7, r0
  stxdw [r10-256], r7
  jge r5, r3, jmp_fe88
  lsh64 r5, 3
  mov64 r3, r2
  add64 r3, r5
  ldxdw r3, [r3+0]
  ldxdw r5, [r3+8]
  ldxdw r0, [r10-256]
  jne r5, r0, jmp_fe68
  ldxdw r5, [r3+16]
  ldxdw r0, [r10-248]
  jne r5, r0, jmp_fe68
  ldxdw r5, [r3+24]
  ldxdw r0, [r10-240]
  jne r5, r0, jmp_fe68
  mov64 r5, 0
  ldxdw r0, [r3+32]
  ldxdw r6, [r10-232]
  jeq r0, r6, jmp_fe70

jmp_fe68:
  mov64 r5, 1

jmp_fe70:
  jne r5, 0, jmp_fe88
  ldxb r3, [r3+2]
  jeq r3, 0, jmp_104c8

jmp_fe88:
  ldxdw r7, [r10-416]
  ldxdw r5, [r7+1024]
  lddw r3, -3511660658014627556
  xor64 r5, r3

jmp_feb0:
  ldxdw r9, [r10-528]
  stxdw [r10-464], r4
  stxdw [r10-440], r5

jmp_fec8:
  mov64 r3, r2
  add64 r3, 24
  stxdw [r10-456], r3
  mov64 r4, r2
  add64 r4, 16
  ldxdw r3, [r7+584]
  lddw r5, 333573717361279942
  xor64 r3, r5
  ldxdw r0, [r7+592]
  lddw r5, 333292238089536453
  xor64 r0, r5
  ldxdw r5, [r7+568]
  ldxdw r6, [r7+576]
  stxdw [r10-232], r0
  stxdw [r10-240], r3
  lddw r3, 333855179453154247
  xor64 r6, r3
  stxdw [r10-248], r6
  lddw r3, -334136658724897736
  xor64 r5, r3
  stxdw [r10-256], r5
  be64 r5
  stxdw [r10-520], r4
  ldxdw r4, [r4+0]
  ldxdw r0, [r4+8]
  be64 r0
  jne r5, r0, jmp_10040
  ldxdw r5, [r10-248]
  be64 r5
  ldxdw r0, [r4+16]
  be64 r0
  jne r5, r0, jmp_10040
  ldxdw r5, [r10-240]
  be64 r5
  ldxdw r0, [r4+24]
  be64 r0
  jne r5, r0, jmp_10040
  mov64 r3, 0
  ldxdw r5, [r10-232]
  be64 r5
  ldxdw r0, [r4+32]
  be64 r0
  jeq r5, r0, jmp_10058

jmp_10040:
  mov64 r3, -1
  jlt r5, r0, jmp_10058
  mov64 r3, 1

jmp_10058:
  ldxdw r0, [r7+552]
  lddw r5, 333573717361279942
  xor64 r0, r5
  ldxdw r6, [r7+560]
  lddw r5, 333292238089536453
  xor64 r6, r5
  ldxdw r5, [r7+536]
  ldxdw r7, [r7+544]
  stxdw [r10-232], r6
  stxdw [r10-240], r0
  lddw r0, 333855179453154247
  xor64 r7, r0
  stxdw [r10-248], r7
  lddw r0, -334136658724897736
  xor64 r5, r0
  stxdw [r10-256], r5
  be64 r5
  ldxdw r0, [r10-456]
  ldxdw r7, [r0+0]
  ldxdw r0, [r7+8]
  be64 r0
  jne r5, r0, jmp_101a8
  ldxdw r5, [r10-248]
  be64 r5
  ldxdw r0, [r7+16]
  be64 r0
  jne r5, r0, jmp_101a8
  ldxdw r5, [r10-240]
  be64 r5
  ldxdw r0, [r7+24]
  be64 r0
  jne r5, r0, jmp_101a8
  mov64 r6, 0
  ldxdw r5, [r10-232]
  be64 r5
  ldxdw r0, [r7+32]
  be64 r0
  jeq r5, r0, jmp_101c0

jmp_101a8:
  mov64 r6, -1
  jlt r5, r0, jmp_101c0
  mov64 r6, 1

jmp_101c0:
  or64 r6, r3
  lsh64 r6, 32
  rsh64 r6, 32
  jeq r6, 0, jmp_10200
  mov64 r9, 0
  lddw r6, 3135220963
  ja jmp_113a0

jmp_10200:
  stxdw [r10-552], r7
  stxdw [r10-528], r9
  ldxdw r6, [r10-416]
  ldxdw r0, [r6+704]
  lddw r3, 7970776174128919018
  xor64 r0, r3
  ldxdw r7, [r10-464]
  mov64 r5, r7
  stxdw [r10-536], r0
  sub64 r5, r0
  mov64 r9, 0
  mov64 r0, 1
  jgt r5, r7, jmp_102b8
  mov64 r0, 0
  stxdw [r10-544], r4
  mov64 r7, 0
  jeq r0, 0, jmp_102d0

jmp_10290:
  ldxdw r4, [r6+696]
  xor64 r4, r3
  mov64 r6, 1027565
  jle r7, r4, jmp_102f8
  ja jmp_113a0

jmp_102b8:
  stxdw [r10-544], r4
  mov64 r7, 0
  jne r0, 0, jmp_10290

jmp_102d0:
  mov64 r7, r5
  ldxdw r4, [r6+696]
  xor64 r4, r3
  mov64 r6, 1027565
  jgt r7, r4, jmp_113a0

jmp_102f8:
  stxdw [r10-568], r7
  stxdw [r10-560], r2
  stxdw [r10-464], r1
  mov64 r1, r10
  add64 r1, -256
  call sol_get_last_restart_slot
  jeq r0, 0, jmp_103c0
  lddw r1, -4294967296
  mov64 r2, r0
  add64 r2, r1
  mov64 r1, r2
  rsh64 r1, 32
  lsh64 r2, 32
  or64 r2, r1
  ldxdw r1, [r10-464]
  jge r2, 26, jmp_104b8
  mov64 r3, r2
  lsh64 r3, 2
  lddw r4, data_0860
  add64 r4, r3
  ldxw r6, [r4+0]
  mov64 r9, r2
  ja jmp_113a0

jmp_103c0:
  ldxdw r2, [r10-256]
  ldxdw r1, [r10-464]
  ldxdw r7, [r10-536]
  jle r7, r2, jmp_113a0
  ldxdw r2, [r10-416]
  add64 r2, 8
  ldxdw r6, [r10-480]
  mov64 r1, r6
  stxdw [r10-576], r2
  mov64 r3, r7
  call fn_12770  ; → sol_sha256
  mov64 r4, 1
  ldxdw r9, [r10-408]
  jeq r0, r9, jmp_10468
  mov64 r1, r6
  ldxdw r2, [r10-576]
  mov64 r3, r7
  call fn_128c0  ; → sol_sha256
  mov64 r4, 1
  jeq r0, r9, jmp_10468
  mov64 r4, 0

jmp_10468:
  mov64 r9, 0
  ldxdw r3, [r10-472]
  and64 r3, 255
  ldxdw r1, [r10-464]
  jeq r3, 0, jmp_104e0
  ldxdw r2, [r10-560]
  jne r3, 1, jmp_10780
  stxdw [r10-408], r4
  mov64 r6, 1
  ja jmp_104f8

jmp_104b8:
  mov64 r6, r0
  ja jmp_113a0

jmp_104c8:
  mov64 r5, 0
  ldxdw r7, [r10-416]
  ja jmp_feb0

jmp_104e0:
  stxdw [r10-408], r4
  mov64 r6, 0
  ldxdw r2, [r10-560]

jmp_104f8:
  ldxdw r3, [r2+56]
  ldxdw r4, [r3+8]
  lddw r5, -7808848301000303354
  jne r4, r5, jmp_10588
  ldxdw r4, [r3+16]
  lddw r5, -6018520155818964007
  jne r4, r5, jmp_10588
  ldxdw r4, [r3+24]
  lddw r5, -7982811346925931492
  jne r4, r5, jmp_10588
  mov64 r4, 0
  ldxdw r5, [r3+32]
  lddw r0, -6268729762421306310
  jeq r5, r0, jmp_10590

jmp_10588:
  mov64 r4, 1

jmp_10590:
  ldxdw r2, [r2+64]
  jeq r4, 0, jmp_10638
  ldxdw r4, [r3+8]
  lddw r5, -2409577606766207738
  jne r4, r5, jmp_10628
  ldxdw r4, [r3+16]
  lddw r5, -2680366473547005416
  jne r4, r5, jmp_10628
  ldxdw r4, [r3+24]
  lddw r5, 2814109315776649910
  jne r4, r5, jmp_10628
  mov64 r4, 0
  ldxdw r3, [r3+32]
  lddw r5, -248927404616466946
  jeq r3, r5, jmp_10630

jmp_10628:
  mov64 r4, 1

jmp_10630:
  jne r4, 0, jmp_10768

jmp_10638:
  ldxdw r3, [r2+8]
  lddw r4, -7808848301000303354
  jne r3, r4, jmp_106c0
  ldxdw r3, [r2+16]
  lddw r4, -6018520155818964007
  jne r3, r4, jmp_106c0
  ldxdw r3, [r2+24]
  lddw r4, -7982811346925931492
  jne r3, r4, jmp_106c0
  mov64 r3, 0
  ldxdw r4, [r2+32]
  lddw r5, -6268729762421306310
  jeq r4, r5, jmp_106c8

jmp_106c0:
  mov64 r3, 1

jmp_106c8:
  jeq r3, 0, jmp_10798
  ldxdw r3, [r2+8]
  lddw r4, -2409577606766207738
  jne r3, r4, jmp_10758
  ldxdw r3, [r2+16]
  lddw r4, -2680366473547005416
  jne r3, r4, jmp_10758
  ldxdw r3, [r2+24]
  lddw r4, 2814109315776649910
  jne r3, r4, jmp_10758
  mov64 r3, 0
  ldxdw r2, [r2+32]
  lddw r4, -248927404616466946
  jeq r2, r4, jmp_10760

jmp_10758:
  mov64 r3, 1

jmp_10760:
  jeq r3, 0, jmp_10798

jmp_10768:
  lddw r6, 3134983651
  ja jmp_113a0

jmp_10780:
  lddw r6, 3134918669
  ja jmp_113a0

jmp_10798:
  stxdw [r10-536], r6
  mov64 r6, 11644386
  ldxdw r2, [r10-544]
  ldxdw r2, [r2+80]
  jlt r2, 72, jmp_113a0
  ldxdw r2, [r10-552]
  ldxdw r2, [r2+80]
  jlt r2, 72, jmp_113a0
  ldxdw r1, [r10-544]
  ldxdw r4, [r1+152]
  ldxdw r1, [r10-552]
  ldxdw r3, [r1+152]
  ldxdw r2, [r10-576]
  ldxdw r1, [r2+24]
  stxdw [r10-328], r1
  ldxdw r1, [r2+16]
  stxdw [r10-336], r1
  ldxdw r1, [r2+8]
  stxdw [r10-344], r1
  ldxdw r1, [r2+0]
  stxdw [r10-352], r1
  ldxdw r5, [r10-424]
  ldxdw r1, [r5+80]
  ldxdw r2, [r10-440]
  stxdw [r10-4016], r2
  ldxdw r2, [r10-504]
  stxdw [r10-4024], r2
  ldxdw r2, [r10-496]
  stxdw [r10-4032], r2
  ldxdw r2, [r10-488]
  stxdw [r10-4040], r2
  ldxdw r2, [r10-568]
  stxdw [r10-4048], r2
  stxdw [r10-4056], r1
  add64 r5, 88
  stxdw [r10-4064], r5
  mov64 r1, r10
  add64 r1, -352
  stxdw [r10-4072], r1
  ldxdw r1, [r10-408]
  and64 r1, 1
  stxdw [r10-4080], r1
  ldxdw r1, [r10-448]
  stxdw [r10-4088], r1
  ldxdw r1, [r10-536]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -256
  mov64 r5, r10
  ldxdw r2, [r10-512]
  stxdw [r10-440], r3
  stxdw [r10-448], r4
  call fn_25ee0
  ldxw r1, [r10-256]
  jne r1, 1, jmp_109c0
  ldxw r6, [r10-248]
  ldxw r9, [r10-252]
  ldxdw r1, [r10-464]
  ja jmp_113a0

jmp_10970:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_10998:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_109c0:
  ldxdw r4, [r10-560]
  mov64 r7, r4
  add64 r7, 88
  mov64 r1, r4
  add64 r1, 80
  stxdw [r10-544], r1
  mov64 r8, r4
  add64 r8, 40
  add64 r4, 32
  ldxdw r1, [r10-536]
  jeq r1, 0, jmp_10a48
  ldxdw r1, [r10-544]
  stxdw [r10-504], r1
  ldxdw r1, [r10-520]
  stxdw [r10-488], r1
  stxdw [r10-496], r4
  ja jmp_10a80

jmp_10a48:
  stxdw [r10-504], r7
  ldxdw r1, [r10-456]
  stxdw [r10-488], r1
  stxdw [r10-496], r8
  mov64 r8, r4
  ldxdw r1, [r10-520]
  stxdw [r10-456], r1

jmp_10a80:
  ldxdw r1, [r10-200]
  stxdw [r10-424], r1
  ldxdw r1, [r10-416]
  ldxdw r4, [r1+1808]
  jge r4, 5, jmp_10b58
  ldxdw r1, [r10-416]
  ldxdw r4, [r1+616]
  lddw r5, 333573717361279942
  xor64 r4, r5
  ldxdw r5, [r1+624]
  lddw r0, 333292238089536453
  xor64 r5, r0
  ldxdw r0, [r1+600]
  ldxdw r9, [r1+608]
  stxdw [r10-360], r5
  stxdw [r10-368], r4
  lddw r4, 333855179453154247
  xor64 r9, r4
  stxdw [r10-376], r9
  lddw r4, -334136658724897736
  xor64 r0, r4
  stxdw [r10-384], r0
  ja jmp_10ba8

jmp_10b58:
  ldxdw r4, [r10-416]
  add64 r4, 600
  ldxdw r5, [r4+24]
  stxdw [r10-360], r5
  ldxdw r5, [r4+16]
  stxdw [r10-368], r5
  ldxdw r5, [r4+8]
  stxdw [r10-376], r5
  ldxdw r4, [r4+0]
  stxdw [r10-384], r4

jmp_10ba8:
  ldxdw r1, [r10-208]
  stxdw [r10-600], r1
  ldxdw r1, [r10-216]
  stxdw [r10-592], r1
  ldxdw r1, [r10-224]
  stxdw [r10-584], r1
  ldxdw r1, [r10-232]
  stxdw [r10-568], r1
  ldxdw r1, [r10-240]
  stxdw [r10-552], r1
  ldxdw r1, [r10-248]
  stxdw [r10-520], r1
  ldxdw r6, [r10-416]
  ldxdw r5, [r6+528]
  lddw r4, 333292238089536453
  xor64 r5, r4
  ldxdw r0, [r6+504]
  ldxdw r9, [r6+512]
  ldxdw r1, [r6+520]
  stxdw [r10-328], r5
  lddw r5, 333573717361279942
  xor64 r1, r5
  stxdw [r10-336], r1
  lddw r1, 333855179453154247
  xor64 r9, r1
  stxdw [r10-344], r9
  lddw r9, -334136658724897736
  xor64 r0, r9
  stxdw [r10-352], r0
  ldxdw r0, [r6+496]
  xor64 r0, r4
  ldxdw r4, [r6+472]
  ldxdw r2, [r6+480]
  ldxdw r3, [r6+488]
  stxdw [r10-232], r0
  xor64 r3, r5
  stxdw [r10-240], r3
  xor64 r2, r1
  stxdw [r10-248], r2
  xor64 r4, r9
  stxdw [r10-256], r4
  ldxdw r1, [r6+656]
  ldxdw r2, [r10-424]
  stxdw [r10-4056], r2
  xor64 r1, 98
  stxdw [r10-4064], r1
  mov64 r1, r10
  add64 r1, -256
  stxdw [r10-4072], r1
  mov64 r1, r10
  add64 r1, -352
  stxdw [r10-4080], r1
  mov64 r1, r10
  add64 r1, -384
  stxdw [r10-4088], r1
  ldxdw r1, [r10-504]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -392
  mov64 r5, r10
  ldxdw r2, [r10-488]
  ldxdw r3, [r10-496]
  ldxdw r4, [r10-432]
  call fn_d740  ; → → sol_invoke_signed_c
  ldxw r9, [r10-392]
  jne r9, 26, jmp_11378
  ldxdw r1, [r10-536]
  jne r1, 0, jmp_10df0
  ldxdw r7, [r10-544]

jmp_10df0:
  ldxdw r1, [r10-512]
  stxdw [r10-4088], r1
  stxdw [r10-4096], r7
  mov64 r1, r10
  add64 r1, -400
  mov64 r5, r10
  mov64 r2, r8
  ldxdw r3, [r10-456]
  ldxdw r4, [r10-560]
  call fn_ccc0  ; → → sol_invoke_signed_c
  ldxw r9, [r10-400]
  jne r9, 26, jmp_11390
  lddw r1, 7970776174128921066
  ldxdw r2, [r10-424]
  stxdw [r10-432], r2
  ldxdw r2, [r10-536]
  jne r2, 0, jmp_10e90
  ldxdw r2, [r10-512]
  stxdw [r10-432], r2

jmp_10e90:
  ldxdw r2, [r10-528]
  xor64 r2, r1
  stxdw [r10-528], r2
  ldxdw r1, [r10-536]
  jne r1, 0, jmp_10ec8
  ldxdw r1, [r10-424]
  stxdw [r10-512], r1

jmp_10ec8:
  ldxdw r4, [r10-480]
  ldxdw r1, [r4+24]
  stxdw [r10-296], r1
  ldxdw r1, [r4+16]
  stxdw [r10-304], r1
  ldxdw r1, [r4+8]
  stxdw [r10-312], r1
  ldxdw r1, [r4+0]
  stxdw [r10-320], r1
  ldxdw r2, [r10-576]
  ldxdw r1, [r2+0]
  stxdw [r10-288], r1
  ldxdw r1, [r2+8]
  stxdw [r10-280], r1
  ldxdw r1, [r2+16]
  stxdw [r10-272], r1
  ldxdw r1, [r2+24]
  stxdw [r10-264], r1
  ldxdw r5, [r4+0]
  ldxdw r2, [r4+8]
  ldxdw r3, [r4+16]
  ldxdw r4, [r4+24]
  ldxdw r1, [r10-416]
  ldxdw r0, [r1+472]
  stxdw [r10-424], r0
  ldxdw r0, [r1+480]
  stxdw [r10-456], r0
  ldxdw r0, [r1+488]
  stxdw [r10-480], r0
  ldxdw r0, [r1+504]
  stxdw [r10-488], r0
  ldxdw r0, [r1+512]
  stxdw [r10-496], r0
  ldxdw r0, [r1+520]
  stxdw [r10-504], r0
  ldxdw r0, [r1+496]
  stxdw [r10-536], r0
  ldxdw r9, [r1+528]
  ldxdw r6, [r1+888]
  ldxdw r8, [r1+800]
  ldxdw r0, [r1+664]
  stxdw [r10-544], r0
  ldxdw r7, [r1+672]
  stxdw [r10-560], r7
  stxdw [r1+736], r4
  stxdw [r1+728], r3
  stxdw [r1+720], r2
  stxdw [r1+712], r5
  stxdw [r1+752], r7
  stxdw [r1+744], r0
  ldxdw r2, [r10-472]
  stxb [r1+776], r2
  ldxdw r2, [r10-512]
  stxdw [r1+768], r2
  ldxdw r2, [r10-432]
  stxdw [r1+760], r2
  stdw [r1+777], 0
  stdw [r1+784], 0
  add64 r1, 712
  call fn_2600
  mov64 r1, r10
  add64 r1, -256
  stxdw [r10-416], r1
  mov64 r2, r10
  add64 r2, -320
  mov64 r3, 64
  call fn_2fe08  ; → sol_memcpy_
  lddw r1, -3235412798162765972
  xor64 r8, r1
  lddw r1, 5782998650930657501
  xor64 r6, r1
  lddw r1, 333292238089536453
  xor64 r9, r1
  ldxdw r7, [r10-536]
  xor64 r7, r1
  ldxdw r1, [r10-600]
  stxdw [r10-72], r1
  ldxdw r1, [r10-592]
  stxdw [r10-80], r1
  ldxdw r1, [r10-584]
  stxdw [r10-88], r1
  ldxdw r1, [r10-568]
  stxdw [r10-96], r1
  ldxdw r1, [r10-552]
  stxdw [r10-104], r1
  ldxdw r1, [r10-520]
  stxdw [r10-112], r1
  ldxdw r1, [r10-560]
  stxdw [r10-120], r1
  ldxdw r1, [r10-544]
  stxdw [r10-128], r1
  ldxdw r1, [r10-408]
  and64 r1, 1
  stxb [r10-7], r1
  ldxdw r1, [r10-472]
  stxb [r10-8], r1
  stxdw [r10-16], r6
  stxdw [r10-24], r8
  ldxdw r1, [r10-528]
  stxdw [r10-32], r1
  ldxdw r1, [r10-512]
  stxdw [r10-40], r1
  ldxdw r1, [r10-432]
  stxdw [r10-48], r1
  ldxdw r1, [r10-440]
  stxdw [r10-56], r1
  ldxdw r1, [r10-448]
  stxdw [r10-64], r1
  stxdw [r10-136], r9
  lddw r1, 333573717361279942
  ldxdw r2, [r10-504]
  xor64 r2, r1
  stxdw [r10-144], r2
  lddw r2, 333855179453154247
  ldxdw r3, [r10-496]
  xor64 r3, r2
  stxdw [r10-152], r3
  lddw r3, -334136658724897736
  ldxdw r4, [r10-488]
  xor64 r4, r3
  stxdw [r10-160], r4
  stxdw [r10-168], r7
  ldxdw r4, [r10-480]
  xor64 r4, r1
  stxdw [r10-176], r4
  ldxdw r1, [r10-456]
  xor64 r1, r2
  stxdw [r10-184], r1
  ldxdw r1, [r10-424]
  xor64 r1, r3
  stxdw [r10-192], r1
  sth [r10-6], 0
  ldxdw r6, [r10-416]
  mov64 r1, r6
  call fn_1e20
  stxdw [r10-352], r6
  stdw [r10-344], 256
  mov64 r1, r10
  add64 r1, -352
  mov64 r2, 1
  call fn_2de38  ; sol_log_data
  mov64 r9, 26
  ldxdw r1, [r10-464]
  ja jmp_113a0

jmp_11378:
  ldxw r6, [r10-388]
  ldxdw r1, [r10-464]
  ja jmp_113a0

jmp_11390:
  ldxw r6, [r10-396]
  ldxdw r1, [r10-464]

jmp_113a0:
  stxw [r1+4], r6
  stxw [r1+0], r9
  exit

fn_113b8:  ; → → → → custom_panic
  stxdw [r10-136], r4
  stxdw [r10-128], r2
  stxdw [r10-120], r1
  mov64 r0, 0
  lddw r4, 3134983649
  stxdw [r10-144], r3
  jlt r3, 13, jmp_11b58
  lddw r4, 3134983661
  jne r5, 24, jmp_11b58
  ldxdw r2, [r10-128]
  ldxdw r6, [r2+8]
  ldxdw r5, [r6+80]
  jle r5, 1727, jmp_11bf0
  mov64 r4, r6
  add64 r4, 88
  and64 r4, 7
  jne r4, 0, jmp_11bc8
  ldxdw r1, [r6+960]
  lddw r4, 44376852934273466
  xor64 r1, r4
  stxdw [r10-152], r1
  ldxdw r0, [r6+968]
  lddw r4, 44095373662661049
  xor64 r0, r4
  ldxdw r8, [r6+976]
  lddw r4, 41562146116970936
  xor64 r8, r4
  ldxdw r7, [r6+920]
  lddw r4, 43532432298781119
  xor64 r7, r4
  ldxdw r9, [r6+928]
  lddw r4, 43250970207037886
  xor64 r9, r4
  ldxdw r4, [r6+936]
  lddw r5, 42969490935425469
  xor64 r4, r5
  ldxdw r5, [r6+944]
  lddw r2, 44939794297629116
  xor64 r5, r2
  ldxdw r2, [r6+952]
  lddw r3, 44658315026016699
  xor64 r2, r3
  ldxdw r3, [r6+984]
  lddw r1, 41280666845358519
  xor64 r3, r1
  ldxdw r1, [r6+912]
  stxdw [r10-32], r3
  stxdw [r10-40], r8
  stxdw [r10-48], r0
  ldxdw r3, [r10-152]
  stxdw [r10-56], r3
  stxdw [r10-64], r2
  stxdw [r10-72], r5
  stxdw [r10-80], r4
  stxdw [r10-88], r9
  stxdw [r10-96], r7
  lddw r2, -43813911570436544
  mov64 r3, r1
  xor64 r3, r2
  stxdw [r10-104], r3
  mov64 r0, 1
  mov64 r7, 1
  jeq r1, r2, jmp_11648
  ldxdw r1, [r6+1808]
  jle r1, 6, jmp_11660

jmp_11620:
  ldxdw r2, [r10-128]
  ldxdw r6, [r2+96]
  ldxdw r1, [r6+40]
  jne r1, 0, jmp_116b8
  ja jmp_11688

jmp_11648:
  mov64 r7, 0
  ldxdw r1, [r6+1808]
  jgt r1, 6, jmp_11620

jmp_11660:
  mov64 r0, 0
  ldxdw r2, [r10-128]
  ldxdw r6, [r2+96]
  ldxdw r1, [r6+40]
  jne r1, 0, jmp_116b8

jmp_11688:
  ldxdw r1, [r6+48]
  jne r1, 0, jmp_116b8
  ldxdw r1, [r6+56]
  jne r1, 0, jmp_116b8
  ldxdw r1, [r6+64]
  jeq r1, 0, jmp_11a60

jmp_116b8:
  mov64 r4, 1
  jeq r4, 0, jmp_11a70

jmp_116c8:
  ldxdw r1, [r6+40]
  lddw r2, 1606428434101926410
  jne r1, r2, jmp_11750
  ldxdw r1, [r6+48]
  lddw r2, -3915670891564426916
  jne r1, r2, jmp_11750
  ldxdw r1, [r6+56]
  lddw r2, 9152063625839970655
  jne r1, r2, jmp_11750
  mov64 r4, 0
  ldxdw r1, [r6+64]
  lddw r2, -6657631385443218243
  jeq r1, r2, jmp_11758

jmp_11750:
  mov64 r4, 1

jmp_11758:
  jne r4, 0, jmp_11850
  ldxdw r1, [r6+80]
  jlt r1, 88, jmp_11850
  mov64 r3, r6
  add64 r3, 88
  mov64 r1, r3
  and64 r1, 7
  jne r1, 0, jmp_11bc8
  ldxb r1, [r3+0]
  jne r1, 2, jmp_11850
  ldxdw r2, [r10-128]
  ldxdw r5, [r2+72]
  ldxdw r1, [r5+8]
  lddw r2, 7408838205410486022
  jne r1, r2, jmp_11840
  ldxdw r1, [r5+16]
  lddw r2, -4556801331350414795
  jne r1, r2, jmp_11840
  ldxdw r1, [r5+24]
  lddw r2, -6524213783030258495
  jne r1, r2, jmp_11840
  mov64 r4, 0
  ldxdw r1, [r5+32]
  lddw r2, 35966925531
  jeq r1, r2, jmp_11848

jmp_11840:
  mov64 r4, 1

jmp_11848:
  jeq r4, 0, jmp_11870

jmp_11850:
  mov64 r0, 0
  lddw r4, 2880249322
  ja jmp_11b58

jmp_11870:
  ldxh r1, [r5+88]
  stxdw [r10-160], r1
  jeq r1, 0, jmp_11a70
  and64 r0, r7
  mov64 r1, r5
  add64 r1, 90
  stxdw [r10-152], r1
  add64 r5, 88
  mov64 r9, 0
  stxdw [r10-168], r5
  ja jmp_118e8

jmp_118c8:
  add64 r9, 1
  ldxdw r5, [r10-168]
  ldxdw r1, [r10-160]
  jge r9, r1, jmp_11a70

jmp_118e8:
  mov64 r1, r9
  lsh64 r1, 1
  ldxdw r2, [r10-152]
  add64 r2, r1
  ldxh r4, [r2+0]
  mov64 r1, r5
  add64 r1, r4
  ldxh r7, [r1+0]
  jeq r7, 0, jmp_118c8
  ldxdw r8, [r10-152]
  add64 r8, r4
  mov64 r5, 0
  ja jmp_11968

jmp_11950:
  add64 r8, 33
  add64 r5, 1
  jge r5, r7, jmp_118c8

jmp_11968:
  ldxb r1, [r8+0]
  and64 r1, 1
  jeq r1, 0, jmp_11950
  ldxdw r1, [r6+100]
  ldxdw r2, [r8+1]
  jne r2, r1, jmp_119e8
  ldxdw r1, [r6+108]
  ldxdw r2, [r8+9]
  jne r2, r1, jmp_119e8
  ldxdw r1, [r6+116]
  ldxdw r2, [r8+17]
  jne r2, r1, jmp_119e8
  mov64 r4, 0
  ldxdw r1, [r6+124]
  ldxdw r2, [r8+25]
  jeq r2, r1, jmp_119f0

jmp_119e8:
  mov64 r4, 1

jmp_119f0:
  jne r4, 0, jmp_11950
  ldxdw r4, [r10-136]
  ldxdw r2, [r10-128]
  ldxdw r2, [r10-144]
  ldxdw r1, [r10-120]
  and64 r0, 1
  jeq r0, 0, jmp_11b78
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r3
  mov64 r3, r10
  add64 r3, -104
  mov64 r4, 5
  ja jmp_11ba0

jmp_11a60:
  mov64 r4, 0
  jne r4, 0, jmp_116c8

jmp_11a70:
  stdw [r10-8], 0
  stdw [r10-16], 0
  stdw [r10-24], 1
  ldxdw r1, [r10-120]
  ldxdw r1, [r10-136]
  and64 r1, 7
  jne r1, 0, jmp_11bc8

jmp_11aa8:
  ldxdw r1, [r10-136]
  ldxdw r0, [r1+0]
  ldxdw r2, [r1+8]
  ldxb r1, [r1+16]
  ldxdw r3, [r10-24]
  ldxdw r4, [r10-16]
  ldxdw r5, [r10-8]
  stxdw [r10-4064], r5
  stxdw [r10-4072], r4
  stxdw [r10-4080], r3
  stxdw [r10-4088], r1
  stxdw [r10-4096], r2
  stdw [r10-4056], 13
  mov64 r1, r10
  add64 r1, -112
  mov64 r5, r10
  ldxdw r2, [r10-128]
  ldxdw r3, [r10-144]
  mov64 r4, r0
  call fn_f8d0
  ldxw r4, [r10-108]
  ldxw r0, [r10-112]

jmp_11b58:
  ldxdw r1, [r10-120]
  stxw [r1+4], r4
  stxw [r1+0], r0
  exit

jmp_11b78:
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r3
  mov64 r3, 8
  mov64 r4, 0

jmp_11ba0:
  call fn_2b330
  ldxdw r1, [r10-120]
  ldxdw r1, [r10-136]
  and64 r1, 7
  jeq r1, 0, jmp_11aa8

jmp_11bc8:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

jmp_11bf0:
  mov64 r1, 1728
  mov64 r2, r5
  lddw r3, 206400
  call fn_2f320  ; → → → → custom_panic

fn_11c18:
  mov64 r8, r4
  mov64 r9, r1
  mov64 r6, 0
  mov64 r4, 195936478
  jne r3, 7, jmp_12440
  jne r5, 24, jmp_12458
  mov64 r1, r8
  and64 r1, 7
  jne r1, 0, jmp_12480
  ldxdw r6, [r2+0]
  stxdw [r10-160], r2
  ldxdw r7, [r2+8]
  mov64 r1, r7
  add64 r1, 40
  mov64 r4, r10
  add64 r4, -32
  lddw r2, data_0010
  mov64 r3, 32
  call sol_memcmp_
  ldxw r1, [r10-32]
  ldxb r2, [r6+1]
  ldxdw r3, [r7+624]
  stxdw [r10-8], r3
  ldxdw r3, [r7+616]
  stxdw [r10-16], r3
  ldxdw r3, [r7+608]
  stxdw [r10-24], r3
  ldxdw r3, [r7+600]
  stxdw [r10-32], r3
  add64 r6, 8
  stxdw [r10-152], r6
  ldxdw r3, [r7+1808]
  jgt r3, 4, jmp_11dc8
  lddw r3, 333855179453154247
  ldxdw r4, [r10-24]
  xor64 r4, r3
  lddw r3, -334136658724897736
  ldxdw r5, [r10-32]
  xor64 r5, r3
  stxdw [r10-32], r5
  stxdw [r10-24], r4
  lddw r3, 333573717361279942
  ldxdw r4, [r10-16]
  xor64 r4, r3
  stxdw [r10-16], r4
  lddw r3, 333292238089536453
  ldxdw r4, [r10-8]
  xor64 r4, r3
  stxdw [r10-8], r4

jmp_11dc8:
  ldxdw r3, [r10-32]
  be64 r3
  ldxdw r4, [r10-152]
  ldxdw r4, [r4+0]
  be64 r4
  ldxdw r0, [r10-160]
  mov64 r6, 0
  jne r3, r4, jmp_11ea0
  ldxdw r3, [r10-24]
  be64 r3
  ldxdw r4, [r10-152]
  ldxdw r4, [r4+8]
  be64 r4
  jne r3, r4, jmp_11ea0
  ldxdw r3, [r10-16]
  be64 r3
  ldxdw r4, [r10-152]
  ldxdw r4, [r4+16]
  be64 r4
  jne r3, r4, jmp_11ea0
  mov64 r5, 0
  ldxdw r3, [r10-8]
  be64 r3
  ldxdw r4, [r10-152]
  ldxdw r4, [r4+24]
  be64 r4
  jeq r3, r4, jmp_11eb8

jmp_11ea0:
  mov64 r5, -1
  jlt r3, r4, jmp_11eb8
  mov64 r5, 1

jmp_11eb8:
  lddw r4, 2880249322
  jeq r2, 0, jmp_12440
  or64 r5, r1
  lsh64 r5, 32
  rsh64 r5, 32
  jne r5, 0, jmp_12440
  stxdw [r10-176], r8
  stxdw [r10-168], r9
  mov64 r2, r0
  add64 r2, 16
  ldxdw r4, [r7+592]
  lddw r3, 333292238089536453
  xor64 r4, r3
  ldxdw r1, [r7+568]
  ldxdw r5, [r7+576]
  ldxdw r0, [r7+584]
  stxdw [r10-104], r4
  lddw r4, 333573717361279942
  xor64 r0, r4
  stxdw [r10-112], r0
  lddw r0, 333855179453154247
  xor64 r5, r0
  stxdw [r10-120], r5
  lddw r5, -334136658724897736
  xor64 r1, r5
  stxdw [r10-128], r1
  ldxdw r6, [r7+560]
  xor64 r6, r3
  ldxdw r3, [r7+536]
  ldxdw r8, [r7+544]
  ldxdw r9, [r7+552]
  stxdw [r10-72], r6
  xor64 r9, r4
  stxdw [r10-80], r9
  xor64 r8, r0
  stxdw [r10-88], r8
  xor64 r3, r5
  stxdw [r10-96], r3
  ldxdw r3, [r2+0]
  ldxdw r4, [r3+8]
  jne r1, r4, jmp_12078
  ldxdw r1, [r3+16]
  ldxdw r4, [r10-120]
  jne r4, r1, jmp_12078
  ldxdw r1, [r3+24]
  ldxdw r4, [r10-112]
  jne r4, r1, jmp_12078
  mov64 r1, 0
  ldxdw r3, [r3+32]
  ldxdw r4, [r10-104]
  jeq r4, r3, jmp_12080

jmp_12078:
  mov64 r1, 1

jmp_12080:
  mov64 r6, 0
  lddw r4, 3135220963
  jeq r1, 0, jmp_120b0
  ldxdw r9, [r10-168]
  ja jmp_12440

jmp_120b0:
  ldxdw r0, [r10-160]
  mov64 r8, r0
  add64 r8, 32
  ldxdw r1, [r8+0]
  ldxdw r3, [r1+8]
  ldxdw r5, [r10-96]
  ldxdw r9, [r10-168]
  jne r5, r3, jmp_12140
  ldxdw r3, [r1+16]
  ldxdw r5, [r10-88]
  jne r5, r3, jmp_12140
  ldxdw r3, [r1+24]
  ldxdw r5, [r10-80]
  jne r5, r3, jmp_12140
  mov64 r3, 0
  ldxdw r1, [r1+32]
  ldxdw r5, [r10-72]
  jeq r5, r1, jmp_12148

jmp_12140:
  mov64 r3, 1

jmp_12148:
  jne r3, 0, jmp_12440
  stxdw [r10-192], r8
  mov64 r1, r0
  add64 r1, 8
  stxdw [r10-184], r1
  ldxdw r3, [r7+528]
  lddw r1, 333292238089536453
  xor64 r3, r1
  ldxdw r4, [r7+504]
  ldxdw r5, [r7+512]
  ldxdw r0, [r7+520]
  stxdw [r10-40], r3
  lddw r3, 333573717361279942
  xor64 r0, r3
  stxdw [r10-48], r0
  lddw r0, 333855179453154247
  xor64 r5, r0
  stxdw [r10-56], r5
  lddw r5, -334136658724897736
  xor64 r4, r5
  stxdw [r10-64], r4
  ldxdw r4, [r7+496]
  xor64 r4, r1
  ldxdw r1, [r7+472]
  ldxdw r6, [r7+480]
  ldxdw r8, [r7+488]
  stxdw [r10-8], r4
  xor64 r8, r3
  stxdw [r10-16], r8
  xor64 r6, r0
  stxdw [r10-24], r6
  xor64 r1, r5
  stxdw [r10-32], r1
  ldxdw r5, [r7+656]
  xor64 r5, 98
  ldxdw r8, [r10-176]
  ldxdw r1, [r8+0]
  jeq r1, 0, jmp_12340
  ldxdw r3, [r10-160]
  add64 r3, 24
  stxdw [r10-4064], r1
  stxdw [r10-4072], r5
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-4080], r1
  mov64 r1, r10
  add64 r1, -64
  stxdw [r10-4088], r1
  ldxdw r1, [r10-152]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -136
  mov64 r6, r5
  mov64 r5, r10
  ldxdw r4, [r10-184]
  call fn_cf18  ; → sol_invoke_signed_c
  mov64 r5, r6
  ldxw r6, [r10-136]
  jne r6, 26, jmp_12428

jmp_12340:
  ldxdw r4, [r10-184]
  ldxdw r1, [r8+8]
  jeq r1, 0, jmp_123f0
  ldxdw r3, [r10-160]
  add64 r3, 40
  stxdw [r10-4064], r1
  stxdw [r10-4072], r5
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-4080], r1
  mov64 r1, r10
  add64 r1, -64
  stxdw [r10-4088], r1
  ldxdw r1, [r10-152]
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -144
  mov64 r5, r10
  ldxdw r2, [r10-192]
  call fn_cf18  ; → sol_invoke_signed_c
  ldxw r6, [r10-144]
  jne r6, 26, jmp_12438

jmp_123f0:
  ldxdw r1, [r8+16]
  lddw r2, 7970776174128921066
  xor64 r1, r2
  stxdw [r7+680], r1
  mov64 r6, 26
  ja jmp_12440

jmp_12428:
  ldxw r4, [r10-132]
  ja jmp_12440

jmp_12438:
  ldxw r4, [r10-140]

jmp_12440:
  stxw [r9+4], r4
  stxw [r9+0], r6
  exit

jmp_12458:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_12480:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

fn_124a8:  ; → → → → custom_panic
  mov64 r0, 0
  mov64 r7, 195936478
  jne r3, 2, jmp_12708
  ldxdw r3, [r2+8]
  ldxdw r7, [r2+0]
  ldxb r6, [r7+1]
  ldxdw r2, [r3+624]
  stxdw [r10-8], r2
  ldxdw r2, [r3+616]
  stxdw [r10-16], r2
  ldxdw r2, [r3+608]
  stxdw [r10-24], r2
  ldxdw r2, [r3+600]
  stxdw [r10-32], r2
  ldxdw r2, [r3+1808]
  jgt r2, 4, jmp_125f8
  lddw r8, 333855179453154247
  ldxdw r9, [r10-24]
  xor64 r9, r8
  ldxdw r8, [r10-32]
  stxdw [r10-40], r5
  mov64 r5, r2
  mov64 r2, r6
  lddw r6, -334136658724897736
  xor64 r8, r6
  mov64 r6, r2
  mov64 r2, r5
  ldxdw r5, [r10-40]
  stxdw [r10-32], r8
  stxdw [r10-24], r9
  lddw r8, 333573717361279942
  ldxdw r9, [r10-16]
  xor64 r9, r8
  stxdw [r10-16], r9
  lddw r8, 333292238089536453
  ldxdw r9, [r10-8]
  xor64 r9, r8
  stxdw [r10-8], r9

jmp_125f8:
  ldxdw r8, [r7+8]
  ldxdw r9, [r10-32]
  jne r9, r8, jmp_12660
  ldxdw r8, [r7+16]
  ldxdw r9, [r10-24]
  jne r9, r8, jmp_12660
  ldxdw r8, [r7+24]
  ldxdw r9, [r10-16]
  jne r9, r8, jmp_12660
  mov64 r8, 0
  ldxdw r7, [r7+32]
  ldxdw r9, [r10-8]
  jeq r9, r7, jmp_12668

jmp_12660:
  mov64 r8, 1

jmp_12668:
  lddw r7, 2880249322
  jeq r6, 0, jmp_12708
  jne r8, 0, jmp_12708
  jne r5, 8, jmp_12720
  mov64 r5, r4
  and64 r5, 1
  jne r5, 0, jmp_12748
  ldxh r4, [r4+0]
  stxh [r3+792], r4
  stw [r3+794], 0
  sth [r3+798], 0
  ldxdw r4, [r3+792]
  lddw r5, -1342259337616234485
  xor64 r4, r5
  stxdw [r3+792], r4
  mov64 r0, 26
  jne r2, 0, jmp_12708
  stdw [r3+1808], 1

jmp_12708:
  stxw [r1+4], r7
  stxw [r1+0], r0
  exit

jmp_12720:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_12748:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

fn_12770:  ; → sol_sha256
  lddw r4, 3071294817079872047
  stxdw [r10-128], r4
  lddw r4, -7030862169901158755
  stxdw [r10-136], r4
  lddw r4, 7807863581771144299
  stxdw [r10-144], r4
  lddw r4, 6494065649803541119
  stxdw [r10-152], r4
  ldxdw r4, [r1+0]
  stxdw [r10-120], r4
  ldxdw r4, [r1+8]
  stxdw [r10-112], r4
  ldxdw r4, [r1+16]
  stxdw [r10-104], r4
  ldxdw r1, [r1+24]
  stxdw [r10-96], r1
  ldxdw r1, [r2+0]
  stxdw [r10-88], r1
  ldxdw r1, [r2+8]
  stxdw [r10-80], r1
  ldxdw r1, [r2+16]
  stxdw [r10-72], r1
  ldxdw r1, [r2+24]
  stxdw [r10-64], r1
  rsh64 r3, 7
  stxdw [r10-56], r3
  mov64 r1, r10
  add64 r1, -152
  stxdw [r10-16], r1
  stdw [r10-8], 104
  mov64 r1, r10
  add64 r1, -16
  mov64 r3, r10
  add64 r3, -48
  mov64 r2, 1
  call sol_sha256
  ldxdw r0, [r10-48]
  exit

fn_128c0:  ; → sol_sha256
  lddw r4, 3071294817079872047
  stxdw [r10-128], r4
  lddw r4, -7030862169901158755
  stxdw [r10-136], r4
  lddw r4, 7807863581771144299
  stxdw [r10-144], r4
  lddw r4, 6494065649803541119
  stxdw [r10-152], r4
  ldxdw r4, [r1+0]
  stxdw [r10-120], r4
  ldxdw r4, [r1+8]
  stxdw [r10-112], r4
  ldxdw r4, [r1+16]
  stxdw [r10-104], r4
  ldxdw r1, [r1+24]
  stxdw [r10-96], r1
  ldxdw r1, [r2+0]
  stxdw [r10-88], r1
  ldxdw r1, [r2+8]
  stxdw [r10-80], r1
  ldxdw r1, [r2+16]
  stxdw [r10-72], r1
  ldxdw r1, [r2+24]
  stxdw [r10-64], r1
  rsh64 r3, 6
  add64 r3, -1
  stxdw [r10-56], r3
  mov64 r1, r10
  add64 r1, -152
  stxdw [r10-16], r1
  stdw [r10-8], 104
  mov64 r1, r10
  add64 r1, -16
  mov64 r3, r10
  add64 r3, -48
  mov64 r2, 1
  call sol_sha256
  ldxdw r0, [r10-48]
  exit

fn_12a18:
  mov64 r6, r1
  mov64 r1, 0
  mov64 r0, 195936478
  jne r3, 2, jmp_12e58
  ldxdw r7, [r2+8]
  ldxdw r0, [r2+0]
  ldxb r3, [r0+1]
  ldxdw r2, [r7+624]
  stxdw [r10-8], r2
  ldxdw r2, [r7+616]
  stxdw [r10-16], r2
  ldxdw r2, [r7+608]
  stxdw [r10-24], r2
  ldxdw r2, [r7+600]
  stxdw [r10-32], r2
  ldxdw r2, [r7+1808]
  jgt r2, 4, jmp_12b80
  lddw r8, 333855179453154247
  ldxdw r9, [r10-24]
  xor64 r9, r8
  ldxdw r8, [r10-32]
  stxdw [r10-48], r4
  mov64 r4, r5
  mov64 r5, r6
  mov64 r6, r3
  lddw r3, -334136658724897736
  xor64 r8, r3
  mov64 r3, r6
  mov64 r6, r5
  mov64 r5, r4
  ldxdw r4, [r10-48]
  stxdw [r10-32], r8
  stxdw [r10-24], r9
  lddw r8, 333573717361279942
  ldxdw r9, [r10-16]
  xor64 r9, r8
  stxdw [r10-16], r9
  lddw r8, 333292238089536453
  ldxdw r9, [r10-8]
  xor64 r9, r8
  stxdw [r10-8], r9

jmp_12b80:
  ldxdw r8, [r0+8]
  ldxdw r9, [r10-32]
  jne r9, r8, jmp_12be8
  ldxdw r8, [r0+16]
  ldxdw r9, [r10-24]
  jne r9, r8, jmp_12be8
  ldxdw r8, [r0+24]
  ldxdw r9, [r10-16]
  jne r9, r8, jmp_12be8
  mov64 r8, 0
  ldxdw r0, [r0+32]
  ldxdw r9, [r10-8]
  jeq r9, r0, jmp_12bf0

jmp_12be8:
  mov64 r8, 1

jmp_12bf0:
  lddw r0, 2880249322
  jeq r3, 0, jmp_12e58
  jne r8, 0, jmp_12e58
  jeq r2, 1, jmp_12c30
  mov64 r0, 47828
  jeq r2, 0, jmp_12e58
  ja jmp_12c38

jmp_12c30:
  stdw [r7+1808], 2

jmp_12c38:
  jne r5, 80, jmp_12e70
  mov64 r1, r4
  and64 r1, 3
  jne r1, 0, jmp_12e98
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r4
  mov64 r8, r4
  call fn_16518
  mov64 r2, r8
  mov64 r0, 47827
  ldxw r1, [r10-40]
  jne r1, 26, jmp_12e58
  mov64 r1, r7
  add64 r1, 808
  mov64 r3, 80
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r7+856]
  lddw r2, 5176162272089543685
  xor64 r1, r2
  ldxdw r2, [r7+848]
  lddw r3, 5176443751361287172
  xor64 r2, r3
  ldxdw r3, [r7+840]
  lddw r4, 5176725230633030659
  xor64 r3, r4
  ldxdw r4, [r7+832]
  lddw r5, 5174754910090564610
  xor64 r4, r5
  ldxdw r5, [r7+824]
  lddw r0, 5175036389362308097
  xor64 r5, r0
  ldxdw r0, [r7+816]
  lddw r8, 5175317868634051584
  xor64 r0, r8
  ldxdw r8, [r7+808]
  lddw r9, -5175599347905795073
  xor64 r8, r9
  stxdw [r7+808], r8
  stxdw [r7+816], r0
  stxdw [r7+824], r5
  stxdw [r7+832], r4
  stxdw [r7+840], r3
  stxdw [r7+848], r2
  stxdw [r7+856], r1
  ldxdw r1, [r7+864]
  lddw r2, 5175880792817800198
  xor64 r1, r2
  stxdw [r7+864], r1
  ldxdw r1, [r7+872]
  lddw r2, 5177851113359217671
  xor64 r1, r2
  stxdw [r7+872], r1
  ldxdw r1, [r7+880]
  lddw r2, 5177569634087474184
  xor64 r1, r2
  stxdw [r7+880], r1
  mov64 r1, 26

jmp_12e58:
  stxw [r6+4], r0
  stxw [r6+0], r1
  exit

jmp_12e70:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_12e98:
  lddw r1, str_02ef
  mov64 r2, 10
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

fn_12ec0:  ; → → → → custom_panic
  mov64 r2, r1
  mov64 r1, r10
  add64 r1, -944
  call fn_13160  ; → → sol_memcpy_
  ldxw r3, [r10-944]
  jeq r3, 0, jmp_130e8
  mov64 r1, r10
  add64 r1, -36
  mul64 r3, 56
  mov64 r4, 0
  mov64 r2, 0
  ja jmp_12f30

jmp_12f20:
  add64 r4, 56
  jeq r3, r4, jmp_12fd8

jmp_12f30:
  mov64 r5, r10
  add64 r5, -944
  add64 r5, r4
  ldxb r5, [r5+59]
  jne r5, 23, jmp_12f20
  mov64 r5, r10
  add64 r5, -944
  add64 r5, r4
  ldxb r0, [r5+25]
  ldxb r5, [r5+24]
  mov64 r6, r2
  lsh64 r6, 32
  rsh64 r6, 32
  jge r6, 16, jmp_13100
  lsh64 r6, 1
  mov64 r7, r1
  add64 r7, r6
  stxb [r7+1], r0
  stxb [r7+0], r5
  add64 r2, 1
  ja jmp_12f20

jmp_12fd8:
  lsh64 r2, 32
  rsh64 r2, 32
  mov64 r0, 0
  mov64 r3, 1
  jgt r2, 1, jmp_13008
  mov64 r3, 0

jmp_13008:
  jlt r2, 2, jmp_130f0
  mov64 r4, 0
  mov64 r5, r10
  add64 r5, -33
  ja jmp_13040

jmp_13030:
  add64 r5, 2
  jge r4, r2, jmp_130e8

jmp_13040:
  mov64 r0, r4
  add64 r4, 1
  jge r4, r2, jmp_130e8
  lsh64 r0, 1
  mov64 r6, r1
  add64 r6, r0
  ldxb r0, [r6+0]
  jne r0, 1, jmp_13030
  ldxb r0, [r6+1]
  mov64 r6, r5
  mov64 r7, r4
  ja jmp_130b8

jmp_130a0:
  add64 r6, 2
  add64 r7, 1
  jge r7, r2, jmp_13030

jmp_130b8:
  ldxb r8, [r6-1]
  jne r8, 1, jmp_130a0
  ldxb r8, [r6+0]
  jeq r0, r8, jmp_130a0
  mov64 r0, r3
  ja jmp_130f0

jmp_130e8:
  mov64 r0, 0

jmp_130f0:
  and64 r0, 1
  exit

jmp_13100:
  stxb [r10-1], r0
  stxb [r10-2], r5
  mov64 r3, r10
  add64 r3, -2
  lddw r1, str_0274
  mov64 r2, 43
  lddw r4, 206192
  lddw r5, 206512
  call fn_2dfe8  ; → → → custom_panic

fn_13160:  ; → → sol_memcpy_
  ldxb r3, [r2+20]
  jsgt r3, 1, jmp_13198
  jeq r3, 0, jmp_13188
  ldxdw r3, [r2+8]
  jle r3, 59, jmp_131d0

jmp_13188:
  call fn_13340
  ja jmp_13338

jmp_13198:
  jne r3, 2, jmp_131c0
  ldxdw r3, [r2+8]
  jge r3, 22, jmp_132a0
  mov64 r2, 0
  ja jmp_132c8

jmp_131c0:
  stw [r1+0], 0
  ja jmp_13338

jmp_131d0:
  ldxw r4, [r2+16]
  jeq r4, 0, jmp_13308
  ldxdw r5, [r2+0]
  mov64 r2, 0
  mov64 r0, 22
  mov64 r6, r10
  add64 r6, -845

jmp_13208:
  jeq r0, 198, jmp_13310
  jgt r0, r3, jmp_13310
  mov64 r7, r5
  add64 r7, r0
  ldxdw r8, [r7-9]
  ldxb r9, [r7-1]
  ldxb r7, [r7-10]
  stxb [r6+0], r7
  stxb [r6-34], r9
  stxdw [r6-43], r8
  add64 r0, 11
  stb [r6-33], 0
  stb [r6-35], 1
  stdw [r6-51], 1
  add64 r6, 56
  add64 r2, 1
  jlt r2, r4, jmp_13208
  mov64 r2, r4
  ja jmp_13310

jmp_132a0:
  ldxdw r3, [r2+0]
  mov64 r2, 1
  ldxb r4, [r3+21]
  ldxb r5, [r3+12]
  ldxdw r3, [r3+13]

jmp_132c8:
  stxb [r1+59], r5
  stxb [r1+25], r4
  stxdw [r1+16], r3
  stxw [r1+0], r2
  stb [r1+26], 0
  stb [r1+24], 1
  stdw [r1+8], 1
  ja jmp_13338

jmp_13308:
  mov64 r2, 0

jmp_13310:
  stxw [r10-904], r2
  mov64 r2, r10
  add64 r2, -904
  mov64 r3, 904
  call fn_2fe08  ; → sol_memcpy_

jmp_13338:
  exit

fn_13340:
  mov64 r3, r2
  stxdw [r10-912], r1
  mov64 r1, 0
  ldxdw r2, [r3+8]
  ldxdw r5, [r3+0]
  ldxw r3, [r3+16]
  mov64 r0, 0
  jeq r3, 0, jmp_13448
  mov64 r4, 45
  mov64 r7, r10
  add64 r7, -845

jmp_13398:
  jgt r4, r2, jmp_13448
  jeq r4, 573, jmp_13448
  mov64 r8, r5
  add64 r8, r4
  ldxb r9, [r8-33]
  stb [r7-33], 1
  stb [r7-35], 0
  stdw [r7-51], 0
  ldxdw r6, [r8-32]
  stxdw [r7-32], r6
  ldxdw r6, [r8-24]
  stxdw [r7-24], r6
  ldxdw r6, [r8-16]
  stxdw [r7-16], r6
  ldxdw r6, [r8-8]
  stxdw [r7-8], r6
  stxb [r7+0], r9
  add64 r4, 33
  add64 r7, 56
  add64 r0, 1
  jlt r0, r3, jmp_13398
  mov64 r0, r3

jmp_13448:
  mov64 r3, r2
  add64 r3, -4
  mov64 r4, 1
  jle r3, r2, jmp_13488
  jeq r4, 0, jmp_13498

jmp_13470:
  stxw [r10-904], r0
  jge r1, 13, jmp_134b0
  ja jmp_13628

jmp_13488:
  mov64 r4, 0
  jne r4, 0, jmp_13470

jmp_13498:
  mov64 r1, r3
  stxw [r10-904], r0
  jlt r1, 13, jmp_13628

jmp_134b0:
  mov64 r4, 0
  mov64 r7, r5
  add64 r7, 15
  lddw r8, 34360791063
  ja jmp_13538

jmp_134e0:
  mov64 r9, 1
  lsh64 r9, r4
  and64 r9, r8
  jeq r9, 0, jmp_13618

jmp_13500:
  mov64 r4, r3
  add64 r4, 16
  jlt r4, r2, jmp_13898

jmp_13518:
  mov64 r4, r3
  add64 r4, 1
  add64 r3, 13
  jge r3, r1, jmp_13628

jmp_13538:
  mov64 r3, r4
  add64 r4, 12
  jge r4, r2, jmp_138e0
  mov64 r4, r7
  add64 r4, r3
  ldxb r4, [r4-3]
  jne r4, 0, jmp_13518
  mov64 r4, r3
  add64 r4, 13
  jge r4, r2, jmp_13900
  mov64 r4, r7
  add64 r4, r3
  ldxb r4, [r4-2]
  jne r4, 0, jmp_13518
  mov64 r4, r3
  add64 r4, 14
  jge r4, r2, jmp_13948
  mov64 r4, r7
  add64 r4, r3
  ldxb r4, [r4-1]
  jne r4, 0, jmp_13518
  mov64 r4, r3
  add64 r4, 15
  jge r4, r2, jmp_13968
  mov64 r4, r7
  add64 r4, r3
  ldxb r4, [r4+0]
  jle r4, 35, jmp_134e0

jmp_13618:
  jeq r4, 129, jmp_13500
  ja jmp_13518

jmp_13628:
  jlt r2, 4, jmp_13868
  mov64 r3, -4
  add64 r5, 4

jmp_13640:
  ldxw r4, [r5-4]
  jeq r4, 120, jmp_13688
  add64 r5, 1
  add64 r3, -1
  mov64 r4, r2
  add64 r4, r3
  add64 r4, 5
  jge r4, 5, jmp_13640
  ja jmp_13868

jmp_13688:
  neg64 r3
  jge r3, r2, jmp_13868
  mov64 r7, 0
  mov64 r6, 1
  mov64 r4, 1
  jne r2, r3, jmp_136c0

jmp_136b8:
  mov64 r4, 0

jmp_136c0:
  sub64 r2, r3
  mov64 r8, r0
  lsh64 r8, 32
  rsh64 r8, 32
  jne r8, 0, jmp_136f0
  mov64 r6, 0

jmp_136f0:
  jlt r2, 9, jmp_137f8
  lsh64 r0, 32
  rsh64 r0, 32
  jeq r0, 0, jmp_137f8
  mov64 r3, 0
  mov64 r9, r10
  add64 r9, -879
  mov64 r0, 0

jmp_13730:
  and64 r4, 1
  jeq r4, 0, jmp_13928
  mov64 r1, r3
  add64 r1, 9
  mov64 r6, 1
  mov64 r4, 1
  jlt r1, r2, jmp_13770
  mov64 r4, 0

jmp_13770:
  add64 r0, 1
  jlt r0, r8, jmp_13788
  mov64 r6, 0

jmp_13788:
  mov64 r1, r5
  add64 r1, r3
  ldxb r1, [r1+0]
  and64 r1, 1
  stxb [r9+0], r1
  stb [r9-1], 1
  mov64 r7, r3
  add64 r7, 9
  add64 r3, 18
  jgt r3, r2, jmp_13800
  add64 r9, 56
  mov64 r3, r7
  jlt r0, r8, jmp_13730
  ja jmp_13800

jmp_137f8:
  mov64 r0, 0

jmp_13800:
  and64 r4, 1
  jeq r4, 0, jmp_13868
  and64 r6, 1
  jeq r6, 0, jmp_13868
  mov64 r1, r10
  add64 r1, -896
  mul64 r0, 56
  add64 r1, r0
  add64 r5, r7
  ldxb r2, [r5+0]
  and64 r2, 1
  stxb [r1+17], r2
  stb [r1+16], 1

jmp_13868:
  mov64 r2, r10
  add64 r2, -904
  ldxdw r1, [r10-912]
  mov64 r3, 904
  call fn_2fe08  ; → sol_memcpy_
  exit

jmp_13898:
  add64 r3, 15
  mov64 r4, r3
  add64 r4, r5
  mov64 r5, r4
  mov64 r7, 0
  mov64 r6, 1
  mov64 r4, 1
  jeq r2, r3, jmp_136b8
  ja jmp_136c0

jmp_138e0:
  mov64 r1, r4
  lddw r3, 206560
  call fn_2df20  ; → → → custom_panic

jmp_13900:
  add64 r3, 13
  mov64 r1, r3
  lddw r3, 206584
  call fn_2df20  ; → → → custom_panic

jmp_13928:
  mov64 r1, r3
  lddw r3, 206536
  call fn_2df20  ; → → → custom_panic

jmp_13948:
  mov64 r1, r4
  lddw r3, 206608
  call fn_2df20  ; → → → custom_panic

jmp_13968:
  mov64 r1, r4
  lddw r3, 206632
  call fn_2df20  ; → → → custom_panic

fn_13988:  ; → → → → custom_panic
  jge r4, r3, jmp_13be8
  mov64 r5, r2
  add64 r5, r4
  mov64 r0, 1
  ldxb r6, [r5+0]
  jsgt r6, 78, jmp_13a58
  jsle r6, 9, jmp_13b30
  mov64 r5, r6
  add64 r5, -10
  jgt r5, 61, jmp_13a38
  mov64 r7, 1
  lsh64 r7, r5
  lddw r8, 144185901761757697
  mov64 r9, r7
  and64 r9, r8
  jne r9, 0, jmp_13bb0
  lddw r8, 2305843146652647424
  and64 r7, r8
  jne r7, 0, jmp_13b20
  jeq r5, 31, jmp_13e10

jmp_13a38:
  jeq r6, 75, jmp_13e10
  mov64 r7, 1
  jeq r6, 77, jmp_13bb0
  ja jmp_13bc0

jmp_13a58:
  jsgt r6, 101, jmp_13a98
  jsle r6, 86, jmp_13af0
  jsgt r6, 98, jmp_13b90
  jeq r6, 87, jmp_13ae0
  jeq r6, 88, jmp_13bb0
  mov64 r7, 1
  jeq r6, 96, jmp_13bb0
  ja jmp_13bc0

jmp_13a98:
  mov64 r5, r6
  add64 r5, -105
  jgt r5, 13, jmp_13b68
  mov64 r7, 1
  lsh64 r7, r5
  and64 r7, 393
  jne r7, 0, jmp_13bb0
  jeq r5, 6, jmp_13e20
  jne r5, 13, jmp_13b68

jmp_13ae0:
  mov64 r7, 9
  ja jmp_13bc0

jmp_13af0:
  mov64 r5, r6
  add64 r5, -81
  jlt r5, 2, jmp_13b80
  jeq r6, 79, jmp_13bb0
  mov64 r7, 1
  jne r6, 86, jmp_13bc0

jmp_13b20:
  mov64 r7, 2
  ja jmp_13bc0

jmp_13b30:
  jgt r6, 7, jmp_13e30
  mov64 r5, 1
  lsh64 r5, r6
  and64 r5, 137
  mov64 r7, 1
  jne r5, 0, jmp_13bb0
  ja jmp_13bc0

jmp_13b68:
  jeq r6, 102, jmp_13bb0
  mov64 r7, 1
  jne r6, 103, jmp_13bc0

jmp_13b80:
  mov64 r7, 8
  ja jmp_13bc0

jmp_13b90:
  mov64 r5, r6
  add64 r5, -99
  mov64 r7, 1
  jge r5, 2, jmp_13bc0

jmp_13bb0:
  mov64 r0, 0
  mov64 r7, 0

jmp_13bc0:
  mov64 r5, r4
  add64 r5, 1
  mov64 r8, r7
  add64 r8, r5
  jle r8, r3, jmp_13bf8

jmp_13be8:
  stb [r1+0], 7
  ja jmp_13e08

jmp_13bf8:
  jsle r7, 1, jmp_13c90
  jeq r7, 2, jmp_13ce0
  jeq r7, 4, jmp_13d28
  jne r7, 9, jmp_13d98
  mov64 r0, r4
  add64 r0, 9
  jgt r4, -10, jmp_13e90
  jgt r0, r3, jmp_13f08
  jge r0, r3, jmp_13f58
  mov64 r3, r2
  add64 r3, r0
  ldxb r3, [r3+0]
  mov64 r0, 1
  jne r3, 0, jmp_13c70
  mov64 r0, 0

jmp_13c70:
  add64 r2, r5
  mov64 r3, 4
  ldxdw r5, [r2+0]
  ja jmp_13dc8

jmp_13c90:
  jeq r7, 0, jmp_13d88
  jne r7, 1, jmp_13d98
  jge r5, r3, jmp_13f30
  add64 r2, r5
  ldxb r2, [r2+0]
  mov64 r3, 1
  mov64 r0, 1
  jne r2, 0, jmp_13cd8
  mov64 r0, 0

jmp_13cd8:
  ja jmp_13dc8

jmp_13ce0:
  mov64 r0, r4
  add64 r0, 3
  jgt r4, -4, jmp_13e40
  jgt r0, r3, jmp_13eb8
  add64 r2, r5
  mov64 r3, 2
  ldxb r4, [r2+1]
  ldxb r0, [r2+0]
  ja jmp_13d80

jmp_13d28:
  mov64 r0, r4
  add64 r0, 5
  jgt r4, -6, jmp_13e68
  jgt r0, r3, jmp_13ee0
  add64 r2, r5
  mov64 r3, 3
  ldxw r0, [r2+0]
  mov64 r2, r0
  rsh64 r2, 16
  mov64 r4, r0
  rsh64 r4, 8

jmp_13d80:
  ja jmp_13dc8

jmp_13d88:
  mov64 r3, 0
  ja jmp_13dc8

jmp_13d98:
  jeq r0, 0, jmp_13db8
  jge r5, r3, jmp_13f80
  add64 r2, r5
  ldxb r4, [r2+0]

jmp_13db8:
  mov64 r3, 6
  mov64 r5, r7

jmp_13dc8:
  stxdw [r1+8], r5
  stxw [r1+4], r2
  stxb [r1+3], r4
  stxb [r1+2], r0
  stxb [r1+1], r6
  stxb [r1+0], r3
  add64 r7, 1
  stxdw [r1+16], r7

jmp_13e08:
  exit

jmp_13e10:
  mov64 r7, 4
  ja jmp_13bc0

jmp_13e20:
  call fn_13fa8  ; → → → → → custom_panic
  ja jmp_13e08

jmp_13e30:
  mov64 r7, 1
  ja jmp_13bc0

jmp_13e40:
  mov64 r1, r5
  mov64 r2, r0
  lddw r3, 206680
  call fn_2f328  ; → → → → custom_panic

jmp_13e68:
  mov64 r1, r5
  mov64 r2, r0
  lddw r3, 206704
  call fn_2f328  ; → → → → custom_panic

jmp_13e90:
  mov64 r1, r5
  mov64 r2, r0
  lddw r3, 206728
  call fn_2f328  ; → → → → custom_panic

jmp_13eb8:
  mov64 r1, r0
  mov64 r2, r3
  lddw r3, 206680
  call fn_2f320  ; → → → → custom_panic

jmp_13ee0:
  mov64 r1, r0
  mov64 r2, r3
  lddw r3, 206704
  call fn_2f320  ; → → → → custom_panic

jmp_13f08:
  mov64 r1, r0
  mov64 r2, r3
  lddw r3, 206728
  call fn_2f320  ; → → → → custom_panic

jmp_13f30:
  mov64 r1, r5
  mov64 r2, r3
  lddw r3, 206656
  call fn_2df20  ; → → → custom_panic

jmp_13f58:
  mov64 r1, r0
  mov64 r2, r3
  lddw r3, 206752
  call fn_2df20  ; → → → custom_panic

jmp_13f80:
  mov64 r1, r5
  mov64 r2, r3
  lddw r3, 206776
  call fn_2df20  ; → → → custom_panic

fn_13fa8:  ; → → → → → custom_panic
  mov64 r5, r2
  mov64 r2, r4
  add64 r2, 5
  jgt r2, r3, jmp_140a0
  mov64 r0, r4
  add64 r0, 1
  jlt r2, r0, jmp_140e0
  mov64 r6, r5
  add64 r6, r0
  ldxw r0, [r6+0]
  jeq r0, 0, jmp_14090
  mov64 r6, 0
  ja jmp_14030

jmp_14010:
  add64 r6, 1
  add64 r7, r2
  mov64 r2, r7
  jge r6, r0, jmp_14098

jmp_14030:
  jge r2, r3, jmp_140a0
  mov64 r8, r5
  add64 r8, r2
  mov64 r7, 10
  ldxb r8, [r8+0]
  jgt r8, 2, jmp_14010
  lsh64 r8, 3
  lddw r7, data_08c8
  add64 r7, r8
  ldxdw r7, [r7+0]
  ja jmp_14010

jmp_14090:
  mov64 r7, r2

jmp_14098:
  jle r7, r3, jmp_140b0

jmp_140a0:
  stb [r1+0], 7

jmp_140a8:
  exit

jmp_140b0:
  sub64 r7, r4
  stxdw [r1+16], r7
  add64 r7, -1
  stxdw [r1+8], r7
  stb [r1+0], 5
  ja jmp_140a8

jmp_140e0:
  mov64 r1, r0
  lddw r3, 206800
  call fn_2f328  ; → → → → custom_panic

fn_14100:
  mov64 r9, r4
  mov64 r7, r3
  mov64 r8, r2
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -40
  call fn_13988  ; → → → → custom_panic
  ldxb r1, [r10-40]
  jeq r1, 7, jmp_14198
  ldxdw r1, [r10-32]
  stxdw [r10-8], r1
  ldxdw r1, [r10-40]
  stxdw [r10-16], r1
  ldxdw r4, [r10-24]
  mov64 r1, r4
  add64 r1, r9
  mov64 r2, r1
  add64 r2, 3
  jle r2, r7, jmp_141a8

jmp_14198:
  stb [r6+0], 7
  ja jmp_14268

jmp_141a8:
  jge r1, r7, jmp_14270
  mov64 r2, r1
  add64 r2, 1
  jge r2, r7, jmp_14290
  mov64 r3, r1
  add64 r3, 2
  jge r3, r7, jmp_142b8
  mov64 r5, r8
  add64 r5, r1
  ldxb r1, [r5+0]
  mov64 r5, r8
  add64 r5, r2
  add64 r8, r3
  ldxb r2, [r8+0]
  ldxb r3, [r5+0]
  ldxdw r5, [r10-16]
  ldxdw r0, [r10-8]
  stxb [r6+16], r1
  stxb [r6+17], r3
  stxb [r6+18], r2
  add64 r4, 3
  stxdw [r6+24], r4
  stxdw [r6+8], r0
  stxdw [r6+0], r5

jmp_14268:
  exit

jmp_14270:
  mov64 r2, r7
  lddw r3, 206824
  call fn_2df20  ; → → → custom_panic

jmp_14290:
  mov64 r1, r2
  mov64 r2, r7
  lddw r3, 206848
  call fn_2df20  ; → → → custom_panic

jmp_142b8:
  mov64 r1, r3
  mov64 r2, r7
  lddw r3, 206872
  call fn_2df20  ; → → → custom_panic

fn_142e0:
  mov64 r9, r4
  mov64 r7, r3
  mov64 r8, r2
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -40
  call fn_13988  ; → → → → custom_panic
  ldxb r1, [r10-40]
  jeq r1, 7, jmp_14378
  ldxdw r1, [r10-32]
  stxdw [r10-8], r1
  ldxdw r1, [r10-40]
  stxdw [r10-16], r1
  ldxdw r4, [r10-24]
  mov64 r1, r4
  add64 r1, r9
  mov64 r2, r1
  add64 r2, 4
  jle r2, r7, jmp_14388

jmp_14378:
  stb [r6+0], 7
  ja jmp_14450

jmp_14388:
  mov64 r2, r1
  add64 r2, 2
  jgt r1, -3, jmp_14458
  jgt r2, r7, jmp_14470
  jge r2, r7, jmp_14498
  mov64 r3, r1
  add64 r3, 3
  jge r3, r7, jmp_144c0
  mov64 r5, r8
  add64 r5, r1
  ldxh r1, [r5+0]
  mov64 r5, r8
  add64 r5, r2
  add64 r8, r3
  ldxb r2, [r8+0]
  ldxb r3, [r5+0]
  ldxdw r5, [r10-16]
  ldxdw r0, [r10-8]
  stxh [r6+16], r1
  stxb [r6+18], r3
  stxb [r6+19], r2
  add64 r4, 4
  stxdw [r6+24], r4
  stxdw [r6+8], r0
  stxdw [r6+0], r5

jmp_14450:
  exit

jmp_14458:
  lddw r3, 206896
  call fn_2f328  ; → → → → custom_panic

jmp_14470:
  mov64 r1, r2
  mov64 r2, r7
  lddw r3, 206896
  call fn_2f320  ; → → → → custom_panic

jmp_14498:
  mov64 r1, r2
  mov64 r2, r7
  lddw r3, 206920
  call fn_2df20  ; → → → custom_panic

jmp_144c0:
  mov64 r1, r3
  mov64 r2, r7
  lddw r3, 206944
  call fn_2df20  ; → → → custom_panic

fn_144e8:
  mov64 r0, r2
  mov64 r4, r1
  jle r3, 7, jmp_149d8
  ldxdw r1, [r0+0]
  lddw r2, 2662740177125411484
  stxdw [r10-824], r0
  stxdw [r10-832], r3
  jsgt r1, r2, jmp_145b0
  lddw r2, -1596246256901711664
  jsle r1, r2, jmp_14620
  lddw r2, -1596246256901711663
  jeq r1, r2, jmp_14740
  mov64 r5, 6
  lddw r2, 1490625719854326971
  jeq r1, r2, jmp_14720
  lddw r2, 1799957540879294517
  jne r1, r2, jmp_149d8
  mov64 r5, 9
  jge r3, 35, jmp_14750
  ja jmp_149d8

jmp_145b0:
  lddw r2, 4487130706948510127
  jsle r1, r2, jmp_146a0
  lddw r2, 4487130706948510128
  jeq r1, r2, jmp_14998
  lddw r2, 7498033403410208406
  jeq r1, r2, jmp_149e8
  lddw r2, 6696056030799803344
  jne r1, r2, jmp_149d8
  mov64 r5, 4
  ja jmp_146d8

jmp_14620:
  mov64 r5, 2
  lddw r2, -9107168770922962751
  jeq r1, r2, jmp_149a0
  lddw r2, -6166941404928968218
  jne r1, r2, jmp_149d8
  mov64 r7, 1
  mov64 r8, 11
  mov64 r1, 13
  mov64 r5, 3
  mov64 r6, 1
  mov64 r2, r8
  add64 r2, r1
  jgt r2, r3, jmp_149d8
  ja jmp_14a28

jmp_146a0:
  lddw r2, 2662740177125411485
  jeq r1, r2, jmp_14718
  mov64 r5, 0
  lddw r2, 3075364236236101605
  jne r1, r2, jmp_149d8

jmp_146d8:
  mov64 r7, 0
  mov64 r8, 19
  mov64 r1, 12
  mov64 r6, 0
  mov64 r2, r8
  add64 r2, r1
  jgt r2, r3, jmp_149d8
  ja jmp_14a28

jmp_14718:
  mov64 r5, 8

jmp_14720:
  jle r3, 33, jmp_149d8
  mov64 r1, 8
  mov64 r2, 0
  ja jmp_14770

jmp_14740:
  mov64 r5, 7
  jlt r3, 35, jmp_149d8

jmp_14750:
  mov64 r1, 9
  mov64 r2, 1
  ldxb r6, [r0+8]
  stxdw [r10-920], r6

jmp_14770:
  mov64 r9, r1
  add64 r9, 26
  jgt r9, r3, jmp_14f90
  stxdw [r10-872], r2
  stxdw [r10-856], r4
  mov64 r2, r0
  add64 r2, r1
  ldxh r1, [r2+20]
  stxdw [r10-912], r1
  ldxh r1, [r2+18]
  stxdw [r10-904], r1
  ldxh r1, [r2+16]
  stxdw [r10-896], r1
  ldxdw r4, [r2+8]
  ldxdw r1, [r2+0]
  ldxw r2, [r2+22]
  stxdw [r10-840], r2
  stxdw [r10-864], r5
  stxdw [r10-880], r1
  stxdw [r10-888], r4
  jeq r2, 0, jmp_14d10
  mov64 r1, r10
  add64 r1, -808
  stxdw [r10-848], r1
  mov64 r8, 0
  mov64 r6, r10
  add64 r6, -423
  mov64 r7, 0
  ja jmp_14890

jmp_14858:
  ldxdw r0, [r10-824]
  ldxdw r3, [r10-832]

jmp_14868:
  add64 r8, 1
  add64 r1, r9
  mov64 r9, r1
  ldxdw r1, [r10-840]
  jge r8, r1, jmp_14d18

jmp_14890:
  mov64 r1, r10
  add64 r1, -424
  mov64 r2, r0
  mov64 r4, r9
  call fn_142e0
  ldxb r2, [r10-424]
  jeq r2, 7, jmp_14c68
  ldxdw r1, [r6+15]
  stxdw [r10-9], r1
  ldxdw r1, [r6+8]
  stxdw [r10-16], r1
  ldxdw r1, [r6+0]
  stxdw [r10-24], r1
  ldxdw r1, [r10-400]
  jge r8, 16, jmp_14858
  mov64 r5, r7
  lsh64 r5, 32
  rsh64 r5, 32
  ldxdw r0, [r10-824]
  ldxdw r3, [r10-832]
  jge r5, 16, jmp_151b0
  mul64 r5, 24
  ldxdw r4, [r10-848]
  add64 r4, r5
  stxb [r4+0], r2
  ldxdw r2, [r10-24]
  stxdw [r4+1], r2
  ldxdw r2, [r10-16]
  stxdw [r4+9], r2
  ldxdw r2, [r10-9]
  stxdw [r4+16], r2
  add64 r7, 1
  ja jmp_14868

jmp_14998:
  mov64 r5, 5

jmp_149a0:
  mov64 r6, 1
  mov64 r7, 0
  mov64 r8, 19
  mov64 r1, 13
  mov64 r2, r8
  add64 r2, r1
  jle r2, r3, jmp_14a28

jmp_149d8:
  stb [r4+0], 2

jmp_149e0:
  exit

jmp_149e8:
  mov64 r6, 0
  mov64 r8, 11
  mov64 r1, 12
  mov64 r5, 1
  mov64 r7, 1
  mov64 r2, r8
  add64 r2, r1
  jgt r2, r3, jmp_149d8

jmp_14a28:
  jeq r6, 0, jmp_14a50
  mov64 r1, 9
  ldxb r2, [r0+8]
  stxdw [r10-896], r2
  ja jmp_14a58

jmp_14a50:
  mov64 r1, 8

jmp_14a58:
  stxdw [r10-864], r8
  stxdw [r10-872], r7
  stxdw [r10-888], r6
  stxdw [r10-880], r5
  stxdw [r10-856], r4
  mov64 r2, r0
  add64 r2, r1
  or64 r1, 4
  ldxw r2, [r2+0]
  stxdw [r10-840], r2
  jeq r2, 0, jmp_14c38
  mov64 r2, r10
  add64 r2, -416
  stxdw [r10-848], r2
  mov64 r8, 0
  mov64 r6, r10
  add64 r6, -815
  mov64 r9, r1
  mov64 r7, 0
  ja jmp_14b30

jmp_14af8:
  ldxdw r0, [r10-824]
  ldxdw r3, [r10-832]

jmp_14b08:
  add64 r8, 1
  add64 r1, r9
  mov64 r9, r1
  ldxdw r2, [r10-840]
  jge r8, r2, jmp_14c40

jmp_14b30:
  mov64 r1, r10
  add64 r1, -816
  mov64 r2, r0
  mov64 r4, r9
  call fn_14100
  ldxb r2, [r10-816]
  jeq r2, 7, jmp_14c68
  ldxdw r1, [r6+15]
  stxdw [r10-9], r1
  ldxdw r1, [r6+8]
  stxdw [r10-16], r1
  ldxdw r1, [r6+0]
  stxdw [r10-24], r1
  ldxdw r1, [r10-792]
  jge r8, 16, jmp_14af8
  mov64 r5, r7
  lsh64 r5, 32
  rsh64 r5, 32
  ldxdw r0, [r10-824]
  ldxdw r3, [r10-832]
  jge r5, 16, jmp_15128
  mul64 r5, 24
  ldxdw r4, [r10-848]
  add64 r4, r5
  stxb [r4+0], r2
  ldxdw r2, [r10-24]
  stxdw [r4+1], r2
  ldxdw r2, [r10-16]
  stxdw [r4+9], r2
  ldxdw r2, [r10-9]
  stxdw [r4+16], r2
  add64 r7, 1
  ja jmp_14b08

jmp_14c38:
  mov64 r7, 0

jmp_14c40:
  stxw [r10-424], r7
  mov64 r2, r1
  ldxdw r4, [r10-864]
  add64 r2, r4
  jle r2, r3, jmp_14c80

jmp_14c68:
  ldxdw r1, [r10-856]
  stb [r1+0], 2
  ja jmp_149e0

jmp_14c80:
  mov64 r2, r1
  add64 r2, 8
  ldxdw r4, [r10-872]
  jeq r4, 0, jmp_14e18
  jgt r1, -9, jmp_14fb8
  jgt r2, r3, jmp_14fe8
  mov64 r6, r1
  add64 r6, 10
  jlt r6, r2, jmp_15038
  jgt r6, r3, jmp_15088
  jge r6, r3, jmp_15238
  mov64 r4, r0
  add64 r4, r1
  ldxdw r1, [r4+0]
  stxdw [r10-824], r1
  mov64 r8, 0
  mov64 r4, r2
  ja jmp_14eb8

jmp_14d10:
  mov64 r7, 0

jmp_14d18:
  stxw [r10-816], r7
  mov64 r1, r10
  add64 r1, -418
  mov64 r2, r10
  add64 r2, -816
  mov64 r3, 392
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r6, [r10-856]
  ldxdw r1, [r10-920]
  stxb [r6+9], r1
  ldxdw r1, [r10-872]
  stxb [r6+8], r1
  ldxdw r1, [r10-912]
  stxh [r6+6], r1
  ldxdw r1, [r10-904]
  stxh [r6+4], r1
  ldxdw r1, [r10-896]
  stxh [r6+2], r1
  ldxdw r1, [r10-864]
  stxb [r6+1], r1
  stb [r6+0], 1
  mov64 r1, r6
  add64 r1, 10
  mov64 r2, r10
  add64 r2, -424
  mov64 r3, 398
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-888]
  stxdw [r6+416], r1
  ldxdw r1, [r10-880]
  stxdw [r6+408], r1
  ja jmp_149e0

jmp_14e18:
  jgt r1, -9, jmp_14fd0
  jgt r2, r3, jmp_15010
  mov64 r4, r1
  add64 r4, 16
  jlt r4, r2, jmp_15060
  jgt r4, r3, jmp_150b0
  mov64 r6, r1
  add64 r6, 18
  jlt r6, r4, jmp_150d8
  jgt r6, r3, jmp_15100
  jge r6, r3, jmp_15260
  mov64 r5, r0
  add64 r5, r1
  ldxdw r1, [r5+0]
  stxdw [r10-832], r1
  mov64 r1, r0
  add64 r1, r2
  ldxdw r1, [r1+0]
  stxdw [r10-824], r1
  mov64 r8, 1

jmp_14eb8:
  mov64 r1, r0
  add64 r1, r4
  add64 r0, r6
  ldxb r9, [r0+0]
  ldxh r7, [r1+0]
  ldxdw r6, [r10-856]
  mov64 r1, r6
  add64 r1, 8
  mov64 r2, r10
  add64 r2, -424
  mov64 r3, 392
  call fn_2fe08  ; → sol_memcpy_
  ldxdw r1, [r10-832]
  stxdw [r6+416], r1
  stxdw [r6+408], r8
  ldxdw r1, [r10-824]
  stxdw [r6+400], r1
  ldxdw r1, [r10-896]
  stxb [r6+7], r1
  ldxdw r1, [r10-888]
  stxb [r6+6], r1
  stxh [r6+4], r7
  ldxdw r1, [r10-880]
  stxb [r6+2], r1
  stxb [r6+1], r9
  stb [r6+0], 0
  ja jmp_149e0

jmp_14f90:
  mov64 r1, r9
  mov64 r2, r3
  lddw r3, 207160
  call fn_2f320  ; → → → → custom_panic

jmp_14fb8:
  lddw r3, 207064
  call fn_2f328  ; → → → → custom_panic

jmp_14fd0:
  lddw r3, 206968
  call fn_2f328  ; → → → → custom_panic

jmp_14fe8:
  mov64 r1, r2
  mov64 r2, r3
  lddw r3, 207064
  call fn_2f320  ; → → → → custom_panic

jmp_15010:
  mov64 r1, r2
  mov64 r2, r3
  lddw r3, 206968
  call fn_2f320  ; → → → → custom_panic

jmp_15038:
  mov64 r1, r2
  mov64 r2, r6
  lddw r3, 207088
  call fn_2f328  ; → → → → custom_panic

jmp_15060:
  mov64 r1, r2
  mov64 r2, r4
  lddw r3, 206992
  call fn_2f328  ; → → → → custom_panic

jmp_15088:
  mov64 r1, r6
  mov64 r2, r3
  lddw r3, 207088
  call fn_2f320  ; → → → → custom_panic

jmp_150b0:
  mov64 r1, r4
  mov64 r2, r3
  lddw r3, 206992
  call fn_2f320  ; → → → → custom_panic

jmp_150d8:
  mov64 r1, r4
  mov64 r2, r6
  lddw r3, 207016
  call fn_2f328  ; → → → → custom_panic

jmp_15100:
  mov64 r1, r6
  mov64 r2, r3
  lddw r3, 207016
  call fn_2f320  ; → → → → custom_panic

jmp_15128:
  stxb [r10-816], r2
  ldxdw r1, [r10-24]
  stxdw [r10-815], r1
  ldxdw r1, [r10-16]
  stxdw [r10-807], r1
  ldxdw r1, [r10-9]
  stxdw [r10-800], r1
  mov64 r3, r10
  add64 r3, -816
  lddw r1, str_0274
  mov64 r2, 43
  lddw r4, 206128
  lddw r5, 207136
  call fn_2dfe8  ; → → → custom_panic

jmp_151b0:
  stxb [r10-424], r2
  ldxdw r1, [r10-24]
  stxdw [r10-423], r1
  ldxdw r1, [r10-16]
  stxdw [r10-415], r1
  ldxdw r1, [r10-9]
  stxdw [r10-408], r1
  mov64 r3, r10
  add64 r3, -424
  lddw r1, str_0274
  mov64 r2, 43
  lddw r4, 206224
  lddw r5, 207184
  call fn_2dfe8  ; → → → custom_panic

jmp_15238:
  mov64 r1, r6
  mov64 r2, r3
  lddw r3, 207112
  call fn_2df20  ; → → → custom_panic

jmp_15260:
  mov64 r1, r6
  mov64 r2, r3
  lddw r3, 207040
  call fn_2df20  ; → → → custom_panic

fn_15288:
  ldxb r3, [r1+0]
  jeq r3, 0, jmp_15318
  ldxw r4, [r1+16]
  mul64 r4, 24
  mov64 r0, 2
  ja jmp_152e8

jmp_152b8:
  add64 r4, -24
  add64 r1, 24
  mov64 r6, r2
  and64 r6, 255
  and64 r5, 255
  jeq r5, r6, jmp_153a0

jmp_152e8:
  jeq r4, 0, jmp_154c0
  mov64 r5, 111
  ldxb r3, [r1+24]
  jeq r3, 5, jmp_152b8
  ldxb r5, [r1+25]
  ja jmp_152b8

jmp_15318:
  ldxw r3, [r1+8]
  add64 r1, -6
  mul64 r3, 24
  mov64 r0, 2
  ja jmp_15370

jmp_15340:
  add64 r3, -24
  add64 r1, 24
  mov64 r6, r2
  and64 r6, 255
  and64 r5, 255
  jeq r5, r6, jmp_153c8

jmp_15370:
  jeq r3, 0, jmp_154c0
  mov64 r5, 111
  ldxb r4, [r1+22]
  jeq r4, 5, jmp_15340
  ldxb r5, [r1+23]
  ja jmp_15340

jmp_153a0:
  jsle r3, 2, jmp_153f0
  jsgt r3, 4, jmp_15458
  jeq r3, 3, jmp_15400

jmp_153b8:
  ldxb r0, [r1+2]
  ja jmp_154c0

jmp_153c8:
  jsle r4, 2, jmp_15420
  jsgt r4, 4, jmp_15490
  jeq r4, 3, jmp_15430

jmp_153e0:
  ldxb r0, [r1+0]
  ja jmp_154c0

jmp_153f0:
  jeq r3, 0, jmp_154c0
  jeq r3, 1, jmp_153b8

jmp_15400:
  ldxb r1, [r1+2]
  mov64 r0, 1
  jeq r1, 0, jmp_15448
  ja jmp_154c0

jmp_15420:
  jeq r4, 0, jmp_154c0
  jeq r4, 1, jmp_153e0

jmp_15430:
  ldxb r1, [r1+0]
  mov64 r0, 1
  jne r1, 0, jmp_154c0

jmp_15448:
  mov64 r0, 0
  ja jmp_154c0

jmp_15458:
  jeq r3, 5, jmp_154c0
  ldxb r2, [r1+2]
  jne r2, 1, jmp_154c0
  ldxb r1, [r1+3]
  mov64 r0, 1
  jeq r1, 0, jmp_15448
  ja jmp_154c0

jmp_15490:
  jeq r4, 5, jmp_154c0
  ldxb r2, [r1+0]
  jne r2, 1, jmp_154c0
  ldxb r1, [r1+1]
  mov64 r0, 1
  jeq r1, 0, jmp_15448

jmp_154c0:
  exit

fn_154c8:  ; → → → → custom_panic
  ldxb r2, [r1+0]
  jeq r2, 0, jmp_15858
  ldxw r2, [r1+16]
  jeq r2, 0, jmp_15f60
  ldxb r3, [r1+42]
  ldxb r4, [r1+43]
  stxb [r10-87], r4
  stxb [r10-88], r3
  mov64 r3, 1
  jeq r2, 1, jmp_15b78
  ldxb r3, [r1+66]
  ldxb r4, [r1+67]
  stxb [r10-85], r4
  stxb [r10-86], r3
  mov64 r3, 2
  jeq r2, 2, jmp_15b78
  ldxb r3, [r1+90]
  ldxb r4, [r1+91]
  stxb [r10-83], r4
  stxb [r10-84], r3
  mov64 r3, 3
  jeq r2, 3, jmp_15b78
  ldxb r3, [r1+114]
  ldxb r4, [r1+115]
  stxb [r10-81], r4
  stxb [r10-82], r3
  mov64 r3, 4
  jeq r2, 4, jmp_15b78
  ldxb r3, [r1+138]
  ldxb r4, [r1+139]
  stxb [r10-79], r4
  stxb [r10-80], r3
  mov64 r3, 5
  jeq r2, 5, jmp_15b78
  ldxb r3, [r1+162]
  ldxb r4, [r1+163]
  stxb [r10-77], r4
  stxb [r10-78], r3
  mov64 r3, 6
  jeq r2, 6, jmp_15b78
  ldxb r3, [r1+186]
  ldxb r4, [r1+187]
  stxb [r10-75], r4
  stxb [r10-76], r3
  mov64 r3, 7
  jeq r2, 7, jmp_15b78
  ldxb r3, [r1+210]
  ldxb r4, [r1+211]
  stxb [r10-73], r4
  stxb [r10-74], r3
  mov64 r3, 8
  jeq r2, 8, jmp_15b78
  ldxb r3, [r1+234]
  ldxb r4, [r1+235]
  stxb [r10-71], r4
  stxb [r10-72], r3
  mov64 r3, 9
  jeq r2, 9, jmp_15b78
  ldxb r3, [r1+258]
  ldxb r4, [r1+259]
  stxb [r10-69], r4
  stxb [r10-70], r3
  mov64 r3, 10
  jeq r2, 10, jmp_15b78
  ldxb r3, [r1+282]
  ldxb r4, [r1+283]
  stxb [r10-67], r4
  stxb [r10-68], r3
  mov64 r3, 11
  jeq r2, 11, jmp_15b78
  ldxb r3, [r1+306]
  ldxb r4, [r1+307]
  stxb [r10-65], r4
  stxb [r10-66], r3
  mov64 r3, 12
  jeq r2, 12, jmp_15b78
  ldxb r3, [r1+330]
  ldxb r4, [r1+331]
  stxb [r10-63], r4
  stxb [r10-64], r3
  mov64 r3, 13
  jeq r2, 13, jmp_15b78
  ldxb r3, [r1+354]
  ldxb r4, [r1+355]
  stxb [r10-61], r4
  stxb [r10-62], r3
  mov64 r3, 14
  jeq r2, 14, jmp_15b78
  ldxb r3, [r1+378]
  ldxb r4, [r1+379]
  stxb [r10-59], r4
  stxb [r10-60], r3
  mov64 r3, 15
  jeq r2, 15, jmp_15b78
  ldxb r3, [r1+402]
  ldxb r4, [r1+403]
  stxb [r10-57], r4
  stxb [r10-58], r3
  mov64 r3, 16
  jeq r2, 16, jmp_15b78
  ldxb r2, [r1+426]
  ldxb r1, [r1+427]
  stxb [r10-55], r1
  stxb [r10-56], r2
  mov64 r3, r10
  add64 r3, -56
  lddw r1, str_0274
  mov64 r2, 43
  lddw r4, 206160
  lddw r5, 207232
  call fn_2dfe8  ; → → → custom_panic

jmp_15858:
  ldxw r2, [r1+8]
  jeq r2, 0, jmp_15f60
  mul64 r2, 24
  add64 r2, 16
  ldxb r3, [r1+33]
  ldxb r4, [r1+34]
  stxb [r10-87], r4
  stxb [r10-88], r3
  mov64 r3, 1
  jeq r2, 40, jmp_15b78
  ldxb r3, [r1+57]
  ldxb r4, [r1+58]
  stxb [r10-85], r4
  stxb [r10-86], r3
  mov64 r3, 2
  jeq r2, 64, jmp_15b78
  ldxb r3, [r1+81]
  ldxb r4, [r1+82]
  stxb [r10-83], r4
  stxb [r10-84], r3
  mov64 r3, 3
  jeq r2, 88, jmp_15b78
  ldxb r3, [r1+105]
  ldxb r4, [r1+106]
  stxb [r10-81], r4
  stxb [r10-82], r3
  mov64 r3, 4
  jeq r2, 112, jmp_15b78
  ldxb r3, [r1+129]
  ldxb r4, [r1+130]
  stxb [r10-79], r4
  stxb [r10-80], r3
  mov64 r3, 5
  jeq r2, 136, jmp_15b78
  ldxb r3, [r1+153]
  ldxb r4, [r1+154]
  stxb [r10-77], r4
  stxb [r10-78], r3
  mov64 r3, 6
  jeq r2, 160, jmp_15b78
  ldxb r3, [r1+177]
  ldxb r4, [r1+178]
  stxb [r10-75], r4
  stxb [r10-76], r3
  mov64 r3, 7
  jeq r2, 184, jmp_15b78
  ldxb r3, [r1+201]
  ldxb r4, [r1+202]
  stxb [r10-73], r4
  stxb [r10-74], r3
  mov64 r3, 8
  jeq r2, 208, jmp_15b78
  ldxb r3, [r1+225]
  ldxb r4, [r1+226]
  stxb [r10-71], r4
  stxb [r10-72], r3
  mov64 r3, 9
  jeq r2, 232, jmp_15b78
  ldxb r3, [r1+249]
  ldxb r4, [r1+250]
  stxb [r10-69], r4
  stxb [r10-70], r3
  mov64 r3, 10
  jeq r2, 256, jmp_15b78
  ldxb r3, [r1+273]
  ldxb r4, [r1+274]
  stxb [r10-67], r4
  stxb [r10-68], r3
  mov64 r3, 11
  jeq r2, 280, jmp_15b78
  ldxb r3, [r1+297]
  ldxb r4, [r1+298]
  stxb [r10-65], r4
  stxb [r10-66], r3
  mov64 r3, 12
  jeq r2, 304, jmp_15b78
  ldxb r3, [r1+321]
  ldxb r4, [r1+322]
  stxb [r10-63], r4
  stxb [r10-64], r3
  mov64 r3, 13
  jeq r2, 328, jmp_15b78
  ldxb r3, [r1+345]
  ldxb r4, [r1+346]
  stxb [r10-61], r4
  stxb [r10-62], r3
  mov64 r3, 14
  jeq r2, 352, jmp_15b78
  ldxb r3, [r1+369]
  ldxb r4, [r1+370]
  stxb [r10-59], r4
  stxb [r10-60], r3
  mov64 r3, 15
  jeq r2, 376, jmp_15b78
  ldxb r3, [r1+393]
  ldxb r4, [r1+394]
  stxb [r10-57], r4
  stxb [r10-58], r3
  mov64 r3, 16
  jne r2, 400, jmp_15f70

jmp_15b78:
  mov64 r1, r10
  add64 r1, -88
  mov64 r2, r10
  add64 r2, -87
  stxdw [r10-128], r2
  stxw [r10-92], r3
  lsh64 r3, 1
  mov64 r2, r10
  add64 r2, -88
  stxdw [r10-152], r2
  add64 r2, r3
  stxdw [r10-160], r2
  mov64 r6, r10
  add64 r6, -16
  mov64 r8, r10
  add64 r8, -52
  stxdw [r10-144], r1
  mov64 r0, r1
  ja jmp_15c30

jmp_15c10:
  ldxdw r0, [r10-136]
  add64 r0, 2
  ldxdw r1, [r10-160]
  jeq r0, r1, jmp_15f60

jmp_15c30:
  ldxw r2, [r10-92]
  ldxb r7, [r0+0]
  jeq r2, 0, jmp_15d00
  lsh64 r2, 1
  ldxdw r1, [r10-152]
  add64 r1, r2
  mov64 r9, 0
  ldxdw r2, [r10-144]
  ja jmp_15c88

jmp_15c78:
  add64 r2, 2
  jeq r2, r1, jmp_15d08

jmp_15c88:
  mov64 r4, r7
  ldxb r3, [r2+0]
  jne r3, r4, jmp_15c78
  ldxb r3, [r2+1]
  mov64 r5, r3
  jeq r5, r4, jmp_15f50
  mov64 r4, r9
  lsh64 r4, 32
  rsh64 r4, 32
  jgt r4, 31, jmp_15c78
  mov64 r5, r8
  add64 r5, r4
  stxb [r5+0], r3
  add64 r9, 1
  ja jmp_15c78

jmp_15d00:
  mov64 r9, 0

jmp_15d08:
  stxdw [r10-120], r7
  stxdw [r10-136], r0
  stw [r10-20], 0
  ja jmp_15d30

jmp_15d28:
  stxw [r10-56], r9

jmp_15d30:
  mov64 r1, r9
  lsh64 r1, 32
  rsh64 r1, 32
  jeq r1, 0, jmp_15c10
  ldxw r4, [r10-20]
  lsh64 r9, 32
  rsh64 r9, 32
  add64 r9, -1
  stxw [r10-56], r9
  mov64 r1, r8
  add64 r1, r9
  ldxb r7, [r1+0]
  ldxdw r1, [r10-120]
  jeq r7, r1, jmp_15f50
  jgt r4, 15, jmp_15e00
  jeq r4, 0, jmp_15e68
  mov64 r1, 0

jmp_15db8:
  mov64 r2, r6
  add64 r2, r1
  ldxb r2, [r2+0]
  jeq r2, r7, jmp_15d30
  add64 r1, 1
  jlt r1, r4, jmp_15db8
  mov64 r1, r4
  jle r1, 15, jmp_15e70
  ja jmp_15e50

jmp_15e00:
  mov64 r1, r10
  add64 r1, -112
  mov64 r2, r7
  mov64 r3, r6
  call fn_2f0e0
  ldxdw r1, [r10-112]
  jeq r1, 1, jmp_15d30
  ldxw r4, [r10-20]
  mov64 r1, r4
  jle r1, 15, jmp_15e70

jmp_15e50:
  ldxw r1, [r10-92]
  jne r1, 0, jmp_15ec0
  ja jmp_15d28

jmp_15e68:
  mov64 r4, 0

jmp_15e70:
  mov64 r1, r4
  lsh64 r1, 32
  rsh64 r1, 32
  mov64 r2, r6
  add64 r2, r1
  stxb [r2+0], r7
  add64 r4, 1
  stxw [r10-20], r4
  ldxw r1, [r10-92]
  jeq r1, 0, jmp_15d28

jmp_15ec0:
  lsh64 r1, 1
  ldxdw r2, [r10-128]
  ja jmp_15ef0

jmp_15ed8:
  add64 r2, 2
  add64 r1, -2
  jeq r1, 0, jmp_15d28

jmp_15ef0:
  ldxb r3, [r2-1]
  jne r3, r7, jmp_15ed8
  mov64 r3, r9
  lsh64 r3, 32
  rsh64 r3, 32
  jge r3, 32, jmp_15ed8
  mov64 r4, r8
  add64 r4, r3
  ldxb r3, [r2+0]
  stxb [r4+0], r3
  add64 r9, 1
  ja jmp_15ed8

jmp_15f50:
  mov64 r0, 1
  ja jmp_15f68

jmp_15f60:
  mov64 r0, 0

jmp_15f68:
  exit

jmp_15f70:
  ldxb r2, [r1+417]
  ldxb r1, [r1+418]
  stxb [r10-55], r1
  stxb [r10-56], r2
  mov64 r3, r10
  add64 r3, -56
  lddw r1, str_0274
  mov64 r2, 43
  lddw r4, 206160
  lddw r5, 207208
  call fn_2dfe8  ; → → → custom_panic

fn_15fe0:
  mov64 r0, 13
  jge r3, 8, jmp_15ff8

jmp_15ff0:
  exit

jmp_15ff8:
  ldxdw r3, [r1+0]
  lddw r4, 7980433456693082372
  jne r3, r4, jmp_16080
  ldxdw r3, [r1+8]
  lddw r4, 510429368607405294
  jne r3, r4, jmp_16080
  ldxdw r3, [r1+16]
  lddw r4, 5876903548418175485
  jne r3, r4, jmp_16080
  mov64 r3, 0
  ldxdw r4, [r1+24]
  lddw r5, -8136953021443755774
  jeq r4, r5, jmp_16088

jmp_16080:
  mov64 r3, 1

jmp_16088:
  ldxdw r2, [r2+0]
  jeq r3, 0, jmp_162b8
  ldxdw r3, [r1+0]
  lddw r4, 5220724072241619893
  jne r3, r4, jmp_16120
  ldxdw r3, [r1+8]
  lddw r4, -2959324894810010007
  jne r3, r4, jmp_16120
  ldxdw r3, [r1+16]
  lddw r4, 6969507811222894677
  jne r3, r4, jmp_16120
  mov64 r3, 0
  ldxdw r4, [r1+24]
  lddw r5, 1170021923126530224
  jeq r4, r5, jmp_16128

jmp_16120:
  mov64 r3, 1

jmp_16128:
  jeq r3, 0, jmp_16340
  ldxdw r3, [r1+0]
  lddw r4, -4967779272591890170
  jne r3, r4, jmp_161b8
  ldxdw r3, [r1+8]
  lddw r4, 7966950530949584949
  jne r3, r4, jmp_161b8
  ldxdw r3, [r1+16]
  lddw r4, 3039776121969245976
  jne r3, r4, jmp_161b8
  mov64 r3, 0
  ldxdw r4, [r1+24]
  lddw r5, -3113807682611379106
  jeq r4, r5, jmp_161c0

jmp_161b8:
  mov64 r3, 1

jmp_161c0:
  jeq r3, 0, jmp_16408
  ldxdw r3, [r1+0]
  lddw r4, 1399876914085531989
  jne r3, r4, jmp_16250
  ldxdw r3, [r1+8]
  lddw r4, 3750823436284799567
  jne r3, r4, jmp_16250
  ldxdw r3, [r1+16]
  lddw r4, -3070781618096322690
  jne r3, r4, jmp_16250
  mov64 r3, 0
  ldxdw r1, [r1+24]
  lddw r4, 7606355701935812049
  jeq r1, r4, jmp_16258

jmp_16250:
  mov64 r3, 1

jmp_16258:
  jne r3, 0, jmp_15ff0
  lddw r1, 1869282797518629599
  jeq r2, r1, jmp_162a8
  lddw r1, 4390054230670756283
  jeq r2, r1, jmp_162a8
  lddw r1, 3827866739129264554
  jne r2, r1, jmp_15ff0

jmp_162a8:
  mov64 r0, 12
  ja jmp_15ff0

jmp_162b8:
  lddw r1, 2662740177125411484
  jsgt r2, r1, jmp_16398
  lddw r1, -1596246256901711664
  jsle r2, r1, jmp_16430
  lddw r1, -1596246256901711663
  jeq r2, r1, jmp_164d8
  lddw r1, 1490625719854326971
  jeq r2, r1, jmp_164f8
  lddw r1, 1799957540879294517
  jne r2, r1, jmp_164a8
  mov64 r0, 9
  ja jmp_15ff0

jmp_16340:
  lddw r1, -8621195995516023999
  jeq r2, r1, jmp_16388
  lddw r1, 7315988490902613160
  jeq r2, r1, jmp_16388
  lddw r1, -3997096532596832520
  jne r2, r1, jmp_15ff0

jmp_16388:
  mov64 r0, 10
  ja jmp_15ff0

jmp_16398:
  lddw r1, 4487130706948510127
  jsle r2, r1, jmp_16470
  lddw r1, 4487130706948510128
  jeq r2, r1, jmp_164e8
  lddw r1, 6696056030799803344
  jeq r2, r1, jmp_16508
  lddw r1, 7498033403410208406
  jne r2, r1, jmp_164a8
  mov64 r0, 1
  ja jmp_15ff0

jmp_16408:
  lddw r1, -8718944392421549063
  jne r2, r1, jmp_15ff0
  mov64 r0, 11
  ja jmp_15ff0

jmp_16430:
  lddw r1, -9107168770922962751
  jeq r2, r1, jmp_164b8
  lddw r1, -6166941404928968218
  jne r2, r1, jmp_164a8
  mov64 r0, 3
  ja jmp_15ff0

jmp_16470:
  lddw r1, 2662740177125411485
  jeq r2, r1, jmp_164c8
  mov64 r0, 0
  lddw r1, 3075364236236101605
  jeq r2, r1, jmp_15ff0

jmp_164a8:
  mov64 r0, 13
  ja jmp_15ff0

jmp_164b8:
  mov64 r0, 2
  ja jmp_15ff0

jmp_164c8:
  mov64 r0, 8
  ja jmp_15ff0

jmp_164d8:
  mov64 r0, 7
  ja jmp_15ff0

jmp_164e8:
  mov64 r0, 5
  ja jmp_15ff0

jmp_164f8:
  mov64 r0, 6
  ja jmp_15ff0

jmp_16508:
  mov64 r0, 4
  ja jmp_15ff0

fn_16518:
  mov64 r3, 0
  ldxw r5, [r2+0]
  jge r5, 50001, jmp_165d0
  ldxw r4, [r2+8]
  jne r4, r5, jmp_16560

jmp_16540:
  mov64 r3, 26
  jeq r5, 50000, jmp_165d0

jmp_16550:
  mov64 r3, 0
  ja jmp_165d0

jmp_16560:
  jgt r4, 50000, jmp_165d0
  jle r4, r5, jmp_165d0
  ldxw r5, [r2+4]
  ldxw r0, [r2+12]
  jlt r0, r5, jmp_165d0
  ldxw r5, [r2+16]
  jne r5, r4, jmp_165b0

jmp_16598:
  mov64 r3, 26
  jne r4, 50000, jmp_16550
  ja jmp_165d0

jmp_165b0:
  jgt r5, 50000, jmp_165d0
  jle r5, r4, jmp_165d0
  ldxw r6, [r2+20]
  jge r6, r0, jmp_165e8

jmp_165d0:
  stxw [r1+0], r3
  stw [r1+4], 47827
  exit

jmp_165e8:
  ldxw r4, [r2+24]
  jeq r4, r5, jmp_16540
  jgt r4, 50000, jmp_165d0
  jle r4, r5, jmp_165d0
  ldxw r0, [r2+28]
  jlt r0, r6, jmp_165d0
  ldxw r5, [r2+32]
  jeq r5, r4, jmp_16598
  jgt r5, 50000, jmp_165d0
  jle r5, r4, jmp_165d0
  ldxw r6, [r2+36]
  jlt r6, r0, jmp_165d0
  ldxw r4, [r2+40]
  jeq r4, r5, jmp_16540
  jgt r4, 50000, jmp_165d0
  jle r4, r5, jmp_165d0
  ldxw r0, [r2+44]
  jlt r0, r6, jmp_165d0
  ldxw r5, [r2+48]
  jeq r5, r4, jmp_16598
  jgt r5, 50000, jmp_165d0
  jle r5, r4, jmp_165d0
  ldxw r6, [r2+52]
  jlt r6, r0, jmp_165d0
  ldxw r4, [r2+56]
  jeq r4, r5, jmp_16540
  jgt r4, 50000, jmp_165d0
  jle r4, r5, jmp_165d0
  ldxw r0, [r2+60]
  jlt r0, r6, jmp_165d0
  ldxw r5, [r2+64]
  jeq r5, r4, jmp_16598
  jgt r5, 50000, jmp_165d0
  jle r5, r4, jmp_165d0
  ldxw r4, [r2+68]
  jlt r4, r0, jmp_165d0
  ldxw r0, [r2+72]
  jeq r0, r5, jmp_16540
  jgt r0, 50000, jmp_165d0
  jle r0, r5, jmp_165d0
  ldxw r2, [r2+76]
  jlt r2, r4, jmp_165d0
  mov64 r3, 26
  ja jmp_165d0

fn_16748:  ; → → → → custom_panic
  jne r2, 1728, jmp_16778
  mov64 r2, r1
  and64 r2, 7
  jne r2, 0, jmp_167a0
  mov64 r0, r1
  exit

jmp_16778:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 2
  call fn_1090  ; → → → custom_panic

jmp_167a0:
  lddw r1, data_02f9
  mov64 r2, 14
  mov64 r3, 0
  call fn_1090  ; → → → custom_panic

fn_167c8:  ; → → → → → custom_panic
  ldxdw r3, [r2+24]
  ldxdw r4, [r2+16]
  mov64 r0, r4
  or64 r0, r3
  ldxdw r5, [r2+48]
  jeq r0, 0, jmp_16838
  lddw r0, 281474976710655
  jgt r3, r0, jmp_16998
  rsh64 r4, 48
  lsh64 r3, 16
  or64 r4, r3
  mov64 r3, 0
  jlt r5, r4, jmp_16850

jmp_16838:
  mov64 r3, 0
  ldxdw r4, [r2+56]
  jle r5, r4, jmp_16868

jmp_16850:
  stxw [r1+0], r3
  stw [r1+4], 47826
  exit

jmp_16868:
  ldxdw r6, [r2+104]
  ldxdw r0, [r2+96]
  mov64 r8, r0
  or64 r8, r6
  ldxdw r5, [r2+128]
  mov64 r7, 0
  jeq r8, 0, jmp_168d8
  lddw r7, 281474976710655
  jgt r6, r7, jmp_16998
  rsh64 r0, 48
  lsh64 r6, 16
  or64 r0, r6
  mov64 r7, r0

jmp_168d8:
  jlt r5, r4, jmp_16850
  jlt r5, r7, jmp_16850
  ldxdw r4, [r2+136]
  jgt r5, r4, jmp_16850
  ldxdw r6, [r2+184]
  ldxdw r0, [r2+176]
  mov64 r8, r0
  or64 r8, r6
  ldxdw r5, [r2+208]
  mov64 r7, 0
  jeq r8, 0, jmp_16968
  lddw r7, 281474976710655
  jgt r6, r7, jmp_16998
  rsh64 r0, 48
  lsh64 r6, 16
  or64 r0, r6
  mov64 r7, r0

jmp_16968:
  jlt r5, r4, jmp_16850
  jlt r5, r7, jmp_16850
  ldxdw r2, [r2+216]
  jgt r5, r2, jmp_16850
  mov64 r3, 26
  ja jmp_16850

jmp_16998:
  lddw r1, 207256
  call fn_2de60  ; → → → → custom_panic

fn_169b0:
  ldxdw r3, [r2+16]
  jsgt r3, r1, jmp_169e0
  ldxdw r3, [r2+24]
  jslt r3, r1, jmp_169e0
  mov64 r0, r2
  ja jmp_16a48

jmp_169e0:
  ldxdw r3, [r2+64]
  jsgt r3, r1, jmp_16a10
  ldxdw r3, [r2+72]
  mov64 r0, r2
  add64 r0, 48
  jsge r3, r1, jmp_16a48

jmp_16a10:
  ldxdw r3, [r2+112]
  jsgt r3, r1, jmp_16a40
  ldxdw r3, [r2+120]
  add64 r2, 96
  mov64 r0, r2
  jsge r3, r1, jmp_16a48

jmp_16a40:
  mov64 r0, 0

jmp_16a48:
  exit

fn_16a50:
  ldxdw r3, [r2+48]
  jgt r3, r1, jmp_16a80
  ldxdw r3, [r2+56]
  jlt r3, r1, jmp_16a80
  mov64 r0, r2
  ja jmp_16ae8

jmp_16a80:
  ldxdw r3, [r2+128]
  jgt r3, r1, jmp_16ab0
  ldxdw r3, [r2+136]
  mov64 r0, r2
  add64 r0, 80
  jge r3, r1, jmp_16ae8

jmp_16ab0:
  ldxdw r3, [r2+208]
  jgt r3, r1, jmp_16ae0
  ldxdw r3, [r2+216]
  add64 r2, 160
  mov64 r0, r2
  jge r3, r1, jmp_16ae8

jmp_16ae0:
  mov64 r0, 0

jmp_16ae8:
  exit

fn_16af0:  ; → → → sol_log_
  mov64 r6, r5
  stxdw [r10-144], r4
  stxdw [r10-168], r3
  stxdw [r10-160], r2
  mov64 r8, r1
  mov64 r9, r2
  arsh64 r9, 63
  ldxdw r7, [r6-4096]
  mov64 r5, r7
  arsh64 r5, 63
  mov64 r1, r10
  add64 r1, -104
  mov64 r3, r9
  mov64 r4, r7
  stxdw [r10-152], r5
  call fn_30150
  mov64 r1, r10
  add64 r1, -88
  mov64 r2, r7
  mov64 r3, 0
  mov64 r7, r8
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  mov64 r4, r7
  arsh64 r8, 63
  stxdw [r10-176], r6
  ldxdw r6, [r6-4088]
  mov64 r7, r6
  arsh64 r7, 63
  mov64 r1, r10
  add64 r1, -56
  mov64 r2, r6
  mov64 r3, r7
  mov64 r5, r8
  call fn_30150
  mov64 r1, r10
  add64 r1, -72
  mov64 r2, r6
  mov64 r3, r7
  ldxdw r7, [r10-160]
  mov64 r4, r7
  mov64 r5, r9
  call fn_30150
  and64 r8, r6
  ldxdw r2, [r10-48]
  add64 r2, r8
  ldxdw r3, [r10-80]
  ldxdw r1, [r10-104]
  mov64 r4, r1
  add64 r4, r3
  ldxdw r6, [r10-56]
  mov64 r3, r6
  add64 r3, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r3, r6, jmp_16cc0
  mov64 r0, 0

jmp_16cc0:
  add64 r2, r0
  mov64 r0, 1
  jlt r4, r1, jmp_16ce0
  mov64 r0, 0

jmp_16ce0:
  ldxdw r1, [r10-152]
  and64 r1, r7
  ldxdw r4, [r10-96]
  add64 r4, r1
  add64 r4, r0
  ldxdw r1, [r10-72]
  mov64 r6, r4
  add64 r6, r1
  mov64 r1, r6
  add64 r1, r2
  mov64 r0, 1
  mov64 r9, 0
  ldxdw r7, [r10-144]
  jlt r1, r6, jmp_16d58
  mov64 r0, 0

jmp_16d58:
  jlt r6, r4, jmp_16d68
  mov64 r5, 0

jmp_16d68:
  arsh64 r4, 63
  ldxdw r6, [r10-64]
  add64 r4, r6
  add64 r4, r5
  arsh64 r2, 63
  add64 r4, r2
  add64 r4, r0
  mov64 r2, r4
  lsh64 r2, 16
  mov64 r5, r1
  rsh64 r5, 48
  or64 r5, r2
  arsh64 r4, 48
  lsh64 r1, 16
  mov64 r2, r1
  arsh64 r2, 63
  xor64 r4, r2
  xor64 r5, r2
  or64 r5, r4
  mov64 r0, 156
  jne r5, 0, jmp_17470
  ldxdw r4, [r10-88]
  rsh64 r4, 48
  mov64 r2, r3
  lsh64 r2, 16
  or64 r2, r4
  rsh64 r3, 48
  or64 r1, r3
  ldxdw r3, [r10-176]
  ldxdw r3, [r3-4080]
  jeq r3, -1, jmp_16ec8
  jne r3, 1, jmp_16f38
  mov64 r0, 0
  mov64 r4, 1
  mov64 r3, 1
  ldxdw r5, [r10-168]
  jlt r2, r5, jmp_16ea8
  mov64 r3, 0
  jslt r1, r7, jmp_16f10
  ja jmp_16eb0

jmp_16ea8:
  jslt r1, r7, jmp_16f10

jmp_16eb0:
  mov64 r4, 0
  jne r1, r7, jmp_16f18
  ja jmp_16f20

jmp_16ec8:
  mov64 r0, 0
  mov64 r4, 1
  mov64 r3, 1
  ldxdw r5, [r10-168]
  jgt r2, r5, jmp_16f08
  mov64 r3, 0
  jsgt r1, r7, jmp_16f10
  ja jmp_16eb0

jmp_16f08:
  jsle r1, r7, jmp_16eb0

jmp_16f10:
  jeq r1, r7, jmp_16f20

jmp_16f18:
  mov64 r3, r4

jmp_16f20:
  mov64 r9, 26
  and64 r3, 1
  jne r3, 0, jmp_17470

jmp_16f38:
  mov64 r5, r2
  ldxdw r3, [r10-168]
  add64 r5, r3
  mov64 r9, 0
  mov64 r3, 1
  jlt r5, r2, jmp_16f70
  mov64 r3, 0

jmp_16f70:
  mov64 r6, r1
  add64 r6, r7
  add64 r6, r3
  mov64 r3, r1
  xor64 r3, r7
  mov64 r4, r1
  xor64 r4, r6
  xor64 r3, -1
  and64 r3, r4
  mov64 r0, 178
  jslt r3, 0, jmp_17470
  mov64 r3, r5
  rsh64 r3, 15
  mov64 r0, r6
  lsh64 r0, 49
  or64 r0, r3
  rsh64 r0, 48
  mov64 r4, r6
  lsh64 r4, 1
  and64 r4, -65536
  or64 r4, r0
  mov64 r0, r4
  xor64 r0, r6
  jslt r0, 0, jmp_170a0
  mov64 r6, 1
  ldxdw r0, [r10-168]
  jlt r2, r0, jmp_17050
  mov64 r6, 0

jmp_17050:
  mov64 r0, r1
  sub64 r0, r7
  sub64 r0, r6
  mov64 r6, r1
  xor64 r6, r7
  xor64 r1, r0
  and64 r6, r1
  jsge r6, 0, jmp_170b0
  mov64 r0, 182
  ja jmp_17470

jmp_170a0:
  mov64 r0, 180
  ja jmp_17470

jmp_170b0:
  lsh64 r5, 1
  ldxdw r1, [r10-168]
  sub64 r2, r1
  mov64 r1, 1
  jne r2, 0, jmp_170e0
  mov64 r1, 0

jmp_170e0:
  and64 r5, 65534
  lsh64 r3, 16
  mov64 r6, r2
  neg64 r6
  jslt r0, 0, jmp_17110
  mov64 r6, r2

jmp_17110:
  or64 r3, r5
  stxdw [r10-16], r6
  jsge r0, 0, jmp_17138
  add64 r0, r1
  neg64 r0

jmp_17138:
  stxdw [r10-8], r0
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -16
  call fn_15e8  ; → → sol_log_
  mov64 r0, 185
  ldxdw r1, [r10-40]
  jeq r1, 0, jmp_17470
  ldxdw r7, [r10-24]
  ldxdw r8, [r10-32]
  mov64 r6, r7
  arsh64 r6, 63
  mov64 r1, r10
  add64 r1, -120
  mov64 r2, r7
  mov64 r3, r6
  lddw r4, -8745990476353503232
  mov64 r5, -1
  call fn_30150
  mov64 r1, r10
  add64 r1, -136
  mov64 r2, r8
  mov64 r3, 0
  lddw r4, -8745990476353503232
  mov64 r5, 0
  call fn_30150
  mov64 r1, r8
  rsh64 r1, 63
  mov64 r3, r8
  arsh64 r3, 63
  add64 r3, r1
  ldxdw r1, [r10-128]
  ldxdw r2, [r10-120]
  mov64 r4, r2
  add64 r4, r1
  mov64 r1, r8
  add64 r1, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r1, r8, jmp_17298
  mov64 r0, 0

jmp_17298:
  add64 r3, r0
  mov64 r0, 1
  jlt r4, r2, jmp_172b8
  mov64 r0, 0

jmp_172b8:
  ldxdw r4, [r10-112]
  add64 r4, r7
  add64 r4, r0
  mov64 r8, r4
  add64 r8, r7
  mov64 r2, r8
  add64 r2, r3
  mov64 r0, 1
  jlt r2, r8, jmp_17308
  mov64 r0, 0

jmp_17308:
  jlt r8, r4, jmp_17318
  mov64 r5, 0

jmp_17318:
  arsh64 r4, 63
  add64 r4, r6
  add64 r4, r5
  arsh64 r3, 63
  add64 r4, r3
  add64 r4, r0
  mov64 r3, r4
  lsh64 r3, 16
  mov64 r5, r2
  rsh64 r5, 48
  or64 r5, r3
  arsh64 r4, 48
  lsh64 r2, 16
  mov64 r3, r2
  arsh64 r3, 63
  xor64 r4, r3
  xor64 r5, r3
  or64 r5, r4
  mov64 r0, 188
  jne r5, 0, jmp_17470
  lddw r3, -9007199254740992
  ldxdw r4, [r10-136]
  and64 r4, r3
  rsh64 r4, 48
  mov64 r0, r1
  lsh64 r0, 16
  or64 r0, r4
  rsh64 r1, 48
  or64 r2, r1
  mov64 r1, r0
  or64 r1, r2
  mov64 r9, 26
  jeq r1, 0, jmp_17448
  jle r2, 65535, jmp_17458
  mov64 r9, 0
  mov64 r0, 190
  ja jmp_17470

jmp_17448:
  mov64 r0, 0
  ja jmp_17470

jmp_17458:
  rsh64 r0, 48
  lsh64 r2, 16
  or64 r0, r2

jmp_17470:
  lsh64 r0, 32
  or64 r0, r9
  exit

fn_17488:  ; → → → sol_log_
  mov64 r6, r1
  mov64 r1, r2
  lsh64 r1, 32
  rsh64 r1, 32
  jgt r1, 50000, jmp_174f0
  mov64 r5, 0
  ldxw r4, [r3+0]
  jgt r4, r1, jmp_175f8
  ldxw r8, [r3+8]
  jne r8, r4, jmp_17500
  mov64 r5, r3
  ldxw r5, [r5+4]
  ja jmp_175f8

jmp_174f0:
  stw [r6+8], 49
  ja jmp_176c0

jmp_17500:
  mov64 r0, 8
  mov64 r1, r2
  lsh64 r1, 32
  rsh64 r1, 32
  jle r8, r1, jmp_17540
  mov64 r7, r8
  mov64 r8, r3
  ja jmp_175b0

jmp_17540:
  mov64 r5, r3
  add64 r5, 8
  ldxw r4, [r3+16]
  jne r4, r8, jmp_17570

jmp_17560:
  ldxw r5, [r5+4]
  ja jmp_175f8

jmp_17570:
  mov64 r0, 16
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jle r4, r7, jmp_176d0

jmp_17598:
  mov64 r7, r4
  mov64 r4, r8

jmp_175a8:
  mov64 r8, r5

jmp_175b0:
  add64 r3, r0
  sub64 r1, r4
  ldxw r2, [r3+4]
  ldxw r5, [r8+4]
  sub64 r2, r5
  mul64 r2, r1
  sub64 r7, r4
  div64 r2, r7
  add64 r5, r2

jmp_175f8:
  mov64 r1, r5
  lsh64 r1, 48
  stxdw [r10-16], r1
  lddw r1, 4294901760
  and64 r5, r1
  rsh64 r5, 16
  stxdw [r10-8], r5
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -16
  lddw r3, 2814749767106560
  mov64 r4, 0
  call fn_15e8  ; → → sol_log_
  ldxdw r1, [r10-40]
  jeq r1, 0, jmp_176b8
  ldxdw r1, [r10-32]
  ldxdw r2, [r10-24]
  stxdw [r6+16], r2
  stxdw [r6+8], r1
  stw [r6+0], 0
  ja jmp_176c8

jmp_176b8:
  stw [r6+8], 202

jmp_176c0:
  stdw [r6+0], 1

jmp_176c8:
  exit

jmp_176d0:
  mov64 r5, r3
  add64 r5, 16
  ldxw r8, [r3+24]
  jeq r8, r4, jmp_17560
  mov64 r0, 24
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jle r8, r7, jmp_17728

jmp_17718:
  mov64 r7, r8
  ja jmp_175a8

jmp_17728:
  mov64 r5, r3
  add64 r5, 24
  ldxw r4, [r3+32]
  jeq r4, r8, jmp_17560
  mov64 r0, 32
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jgt r4, r7, jmp_17598
  mov64 r5, r3
  add64 r5, 32
  ldxw r8, [r3+40]
  jeq r8, r4, jmp_17560
  mov64 r0, 40
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jgt r8, r7, jmp_17718
  mov64 r5, r3
  add64 r5, 40
  ldxw r4, [r3+48]
  jeq r4, r8, jmp_17560
  mov64 r0, 48
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jgt r4, r7, jmp_17598
  mov64 r5, r3
  add64 r5, 48
  ldxw r8, [r3+56]
  jeq r8, r4, jmp_17560
  mov64 r0, 56
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jgt r8, r7, jmp_17718
  mov64 r5, r3
  add64 r5, 56
  ldxw r4, [r3+64]
  jeq r4, r8, jmp_17560
  mov64 r0, 64
  mov64 r7, r2
  lsh64 r7, 32
  rsh64 r7, 32
  jgt r4, r7, jmp_17598
  mov64 r8, r3
  add64 r8, 64
  ldxw r7, [r3+72]
  jne r7, r4, jmp_178c8
  mov64 r5, r8
  ldxw r5, [r5+4]
  ja jmp_175f8

jmp_178c8:
  mov64 r5, r3
  add64 r5, 72
  mov64 r0, 72
  lsh64 r2, 32
  rsh64 r2, 32
  jle r7, r2, jmp_17560
  ja jmp_175b0

fn_17900:  ; → → → → sol_log_
  mov64 r7, r5
  mov64 r0, r2
  mov64 r6, r1
  stxdw [r10-4096], r4
  ldxdw r1, [r7-4080]
  stxdw [r10-4080], r1
  ldxdw r1, [r7-4096]
  stxdw [r10-4088], r1
  arsh64 r2, 63
  lsh64 r2, 48
  mov64 r1, r0
  rsh64 r1, 16
  or64 r2, r1
  mov64 r4, r3
  arsh64 r4, 63
  lsh64 r4, 48
  mov64 r1, r3
  rsh64 r1, 16
  or64 r4, r1
  lsh64 r0, 48
  lsh64 r3, 48
  mov64 r5, r10
  mov64 r1, r0
  call fn_16af0  ; → → → sol_log_
  mov64 r2, r0
  rsh64 r2, 32
  mov64 r1, r0
  lsh64 r1, 32
  rsh64 r1, 32
  jne r1, 26, jmp_17a10
  ldxdw r3, [r7-4088]
  mov64 r1, r6
  call fn_17488  ; → → → sol_log_
  ja jmp_17a28

jmp_17a10:
  stxw [r6+8], r2
  stxw [r6+4], r0
  stw [r6+0], 1

jmp_17a28:
  exit

fn_17a30:
  stxdw [r10-448], r4
  mov64 r6, r3
  mov64 r8, r1
  mov64 r1, r2
  lsh64 r1, 48
  stxdw [r10-16], r1
  mov64 r1, r2
  rsh64 r1, 16
  arsh64 r2, 63
  lsh64 r2, 48
  or64 r2, r1
  stxdw [r10-8], r2
  ldxdw r9, [r5-4096]
  stxdw [r10-440], r5
  ldxdw r7, [r5-4088]
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r10
  add64 r2, -16
  mov64 r3, r9
  mov64 r4, r7
  call fn_15e8  ; → → sol_log_
  ldxdw r1, [r10-80]
  jne r1, 1, jmp_17cc0
  stxdw [r10-456], r8
  mov64 r1, r9
  or64 r1, r7
  mov64 r5, r7
  jeq r1, 0, jmp_17f50
  mov64 r7, r6
  arsh64 r7, 63
  lsh64 r7, 48
  mov64 r1, r6
  rsh64 r1, 16
  or64 r7, r1
  lsh64 r6, 48
  mov64 r2, r6
  neg64 r2
  jsge r7, 0, jmp_17cd8
  mov64 r1, 1
  mov64 r4, 1
  jeq r6, 0, jmp_17cf8

jmp_17b80:
  mov64 r3, r7
  jsge r7, 0, jmp_17ba0

jmp_17b90:
  add64 r3, r4
  neg64 r3

jmp_17ba0:
  ldxdw r4, [r10-440]
  ldxdw r4, [r4-4080]
  stxdw [r10-488], r4
  ldxdw r4, [r10-64]
  stxdw [r10-480], r4
  ldxdw r4, [r10-72]
  stxdw [r10-440], r4
  stxdw [r10-32], r2
  stxdw [r10-24], r3
  jeq r9, 0, jmp_17d18
  mov64 r6, r9
  neg64 r6
  jsge r5, 0, jmp_17d38

jmp_17c08:
  mov64 r8, r5
  mov64 r9, r5
  jsge r5, 0, jmp_17c30

jmp_17c20:
  add64 r9, r1
  neg64 r9

jmp_17c30:
  stxdw [r10-8], r9
  stxdw [r10-16], r6
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, r10
  add64 r3, -16
  mov64 r4, 48
  call fn_1178
  ldxb r1, [r10-64]
  jne r1, 0, jmp_17f50
  ldxdw r4, [r10-72]
  ldxdw r5, [r10-80]
  xor64 r7, r8
  jslt r7, 0, jmp_17d60
  jsge r4, 0, jmp_17e48
  ja jmp_17f50

jmp_17cc0:
  lddw r1, 584115552256
  ja jmp_17f68

jmp_17cd8:
  mov64 r2, r6
  mov64 r1, 1
  mov64 r4, 1
  jne r6, 0, jmp_17b80

jmp_17cf8:
  mov64 r4, 0
  mov64 r3, r7
  jslt r7, 0, jmp_17b90
  ja jmp_17ba0

jmp_17d18:
  mov64 r1, 0
  mov64 r6, r9
  neg64 r6
  jslt r5, 0, jmp_17c08

jmp_17d38:
  mov64 r6, r9
  mov64 r8, r5
  mov64 r9, r5
  jslt r5, 0, jmp_17c20
  ja jmp_17c30

jmp_17d60:
  mov64 r2, 1
  mov64 r1, 1
  jeq r5, 0, jmp_17db0
  lddw r3, -9223372036854775808
  jle r4, r3, jmp_17dd0

jmp_17d90:
  jne r4, r3, jmp_17de0

jmp_17d98:
  and64 r1, 1
  jeq r1, 0, jmp_17df8
  ja jmp_17f50

jmp_17db0:
  mov64 r1, 0
  lddw r3, -9223372036854775808
  jgt r4, r3, jmp_17d90

jmp_17dd0:
  mov64 r2, 0
  jeq r4, r3, jmp_17d98

jmp_17de0:
  mov64 r1, r2
  and64 r1, 1
  jne r1, 0, jmp_17f50

jmp_17df8:
  neg64 r5
  mov64 r1, 1
  jgt r5, 0, jmp_17e18
  mov64 r1, 0

jmp_17e18:
  mov64 r2, r4
  xor64 r2, -1
  jne r1, 0, jmp_17e40
  neg64 r4
  mov64 r2, r4

jmp_17e40:
  mov64 r4, r2

jmp_17e48:
  ldxdw r2, [r10-448]
  mov64 r7, r2
  arsh64 r7, 63
  lsh64 r7, 48
  mov64 r1, r2
  rsh64 r1, 16
  or64 r7, r1
  lsh64 r2, 48
  mov64 r1, r2
  neg64 r1
  jsge r7, 0, jmp_17f88
  stxdw [r10-32], r1
  mov64 r1, 1
  jeq r2, 0, jmp_17fa8

jmp_17eb8:
  stxdw [r10-464], r4
  stxdw [r10-448], r5
  mov64 r2, r7
  jsge r7, 0, jmp_17ee8

jmp_17ed8:
  add64 r2, r1
  neg64 r2

jmp_17ee8:
  stxdw [r10-24], r2
  stxdw [r10-8], r9
  stxdw [r10-16], r6
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, r10
  add64 r3, -16
  mov64 r4, 48
  call fn_1178
  ldxb r1, [r10-64]
  jeq r1, 0, jmp_17fd8

jmp_17f50:
  lddw r1, 627065225216
  ldxdw r8, [r10-456]

jmp_17f68:
  stxdw [r8+4], r1

jmp_17f70:
  mov64 r1, 1

jmp_17f78:
  stxw [r8+0], r1
  exit

jmp_17f88:
  mov64 r1, r2
  stxdw [r10-32], r1
  mov64 r1, 1
  jne r2, 0, jmp_17eb8

jmp_17fa8:
  mov64 r1, 0
  stxdw [r10-464], r4
  stxdw [r10-448], r5
  mov64 r2, r7
  jslt r7, 0, jmp_17ed8
  ja jmp_17ee8

jmp_17fd8:
  ldxdw r5, [r10-72]
  ldxdw r0, [r10-80]
  xor64 r7, r8
  jslt r7, 0, jmp_18008
  jsge r5, 0, jmp_180f0
  ja jmp_17f50

jmp_18008:
  mov64 r2, 1
  mov64 r1, 1
  jeq r0, 0, jmp_18058
  lddw r3, -9223372036854775808
  jle r5, r3, jmp_18078

jmp_18038:
  jne r5, r3, jmp_18088

jmp_18040:
  and64 r1, 1
  jne r1, 0, jmp_17f50
  ja jmp_180a0

jmp_18058:
  mov64 r1, 0
  lddw r3, -9223372036854775808
  jgt r5, r3, jmp_18038

jmp_18078:
  mov64 r2, 0
  jeq r5, r3, jmp_18040

jmp_18088:
  mov64 r1, r2
  and64 r1, 1
  jne r1, 0, jmp_17f50

jmp_180a0:
  neg64 r0
  mov64 r1, 1
  jgt r0, 0, jmp_180c0
  mov64 r1, 0

jmp_180c0:
  mov64 r2, r5
  xor64 r2, -1
  jne r1, 0, jmp_180e8
  neg64 r5
  mov64 r2, r5

jmp_180e8:
  mov64 r5, r2

jmp_180f0:
  ldxdw r1, [r10-488]
  ldxb r2, [r1+32]
  jge r2, 4, jmp_1ae40
  stxdw [r10-520], r5
  ldxdw r7, [r10-440]
  stxdw [r10-528], r0
  jsgt r2, 1, jmp_182d0
  ldxdw r8, [r10-480]
  jne r2, 0, jmp_18478
  jslt r8, 0, jmp_1ae10
  mov64 r1, r7
  or64 r1, r8
  jeq r1, 0, jmp_18758
  stxdw [r10-536], r2
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r2, 1085102592571150095
  lddw r1, 72340172838076673
  jne r8, 0, jmp_18790
  mov64 r0, r7
  rsh64 r0, 1
  mov64 r5, r7
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56
  add64 r4, 64
  ja jmp_188a8

jmp_182d0:
  ldxdw r8, [r10-480]
  jne r2, 2, jmp_18490
  jslt r8, 0, jmp_1ae10
  mov64 r1, r7
  or64 r1, r8
  stxdw [r10-536], r2
  jeq r1, 0, jmp_18778
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r2, 1085102592571150095
  lddw r1, 72340172838076673
  jne r8, 0, jmp_18c38
  mov64 r0, r7
  rsh64 r0, 1
  mov64 r5, r7
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56
  add64 r4, 64
  ja jmp_18d50

jmp_18478:
  mov64 r4, r7
  stxdw [r10-512], r8
  ja jmp_19620

jmp_18490:
  mov64 r6, r7
  arsh64 r6, 63
  mov64 r9, r7
  mov64 r7, r8
  arsh64 r7, 63
  mov64 r1, r10
  add64 r1, -128
  mov64 r2, r8
  mov64 r3, r7
  mov64 r4, r9
  mov64 r5, r6
  call fn_30150
  mov64 r1, r10
  add64 r1, -112
  mov64 r2, r9
  mov64 r3, 0
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -96
  mov64 r2, r8
  mov64 r3, r7
  mov64 r4, r8
  mov64 r5, r7
  call fn_30150
  and64 r6, r8
  ldxdw r1, [r10-120]
  ldxdw r2, [r10-104]
  ldxdw r5, [r10-128]
  mov64 r3, r5
  add64 r3, r2
  mov64 r2, 1
  mov64 r4, 1
  jlt r3, r5, jmp_185b0
  mov64 r4, 0

jmp_185b0:
  add64 r1, r6
  mov64 r0, r3
  add64 r0, r5
  mov64 r5, 1
  mov64 r6, r0
  jlt r0, r3, jmp_185e8
  mov64 r5, 0

jmp_185e8:
  mov64 r3, r1
  add64 r3, r5
  add64 r1, r4
  ldxdw r4, [r10-96]
  mov64 r5, r1
  add64 r5, r4
  mov64 r0, r5
  add64 r0, r3
  mov64 r4, 1
  mov64 r7, r0
  jlt r0, r5, jmp_18648
  mov64 r4, 0

jmp_18648:
  jlt r5, r1, jmp_18658
  mov64 r2, 0

jmp_18658:
  arsh64 r1, 63
  ldxdw r5, [r10-88]
  add64 r1, r5
  add64 r1, r2
  arsh64 r3, 63
  add64 r1, r3
  add64 r1, r4
  mov64 r2, r1
  lsh64 r2, 16
  mov64 r4, r7
  mov64 r3, r4
  rsh64 r3, 48
  or64 r3, r2
  arsh64 r1, 48
  lsh64 r4, 16
  mov64 r2, r4
  arsh64 r2, 63
  xor64 r1, r2
  xor64 r3, r2
  or64 r3, r1
  jne r3, 0, jmp_1aea0
  mov64 r2, r6
  mov64 r1, r2
  rsh64 r1, 48
  or64 r4, r1
  stxdw [r10-512], r4
  lsh64 r2, 16
  ldxdw r1, [r10-112]
  rsh64 r1, 48
  or64 r2, r1
  stxdw [r10-472], r2
  ja jmp_197f0

jmp_18758:
  mov64 r4, 0
  mov64 r1, 0
  stxdw [r10-512], r1
  ja jmp_19480

jmp_18778:
  mov64 r4, 0
  mov64 r6, 0
  ja jmp_19128

jmp_18790:
  mov64 r0, r8
  rsh64 r0, 1
  mov64 r5, r8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56

jmp_188a8:
  xor64 r4, -1
  and64 r4, 126
  mov64 r1, r10
  add64 r1, -224
  mov64 r6, 0
  mov64 r2, 1
  mov64 r3, 0
  call fn_30108
  ldxdw r1, [r10-216]
  ldxdw r2, [r10-224]
  mov64 r3, 0
  ja jmp_18978

jmp_18908:
  sub64 r8, r7
  add64 r9, r6
  ldxdw r7, [r10-440]
  sub64 r7, r4
  rsh64 r2, 2
  mov64 r3, r1
  lsh64 r3, 62
  or64 r2, r3
  rsh64 r1, 2
  and64 r0, 1
  ldxdw r4, [r10-472]
  mov64 r6, r4
  mov64 r3, r9
  jeq r0, 0, jmp_18bf0

jmp_18978:
  mov64 r0, r2
  add64 r0, r6
  mov64 r5, 1
  jlt r0, r2, jmp_189a0
  mov64 r5, 0

jmp_189a0:
  stxdw [r10-440], r7
  mov64 r4, r1
  add64 r4, r3
  add64 r4, r5
  mov64 r5, 1
  jge r8, r4, jmp_18b00
  mov64 r7, 1
  ldxdw r9, [r10-440]
  jge r9, r0, jmp_18b20

jmp_189e8:
  jne r8, r4, jmp_18b30

jmp_189f0:
  mov64 r9, 0
  jeq r7, 0, jmp_18b48

jmp_18a00:
  mov64 r5, 0
  jeq r7, 0, jmp_18b60

jmp_18a10:
  mov64 r4, 0
  jeq r7, 0, jmp_18b78

jmp_18a20:
  mov64 r0, 0
  jne r7, 0, jmp_18a38

jmp_18a30:
  mov64 r0, r2

jmp_18a38:
  stxdw [r10-480], r5
  rsh64 r6, 1
  mov64 r7, r3
  lsh64 r7, 63
  or64 r6, r7
  mov64 r7, r0
  add64 r7, r6
  mov64 r6, 1
  stxdw [r10-472], r7
  jge r7, r0, jmp_18b98
  mov64 r7, 1
  ldxdw r5, [r10-440]
  jge r5, r4, jmp_18bb8

jmp_18aa0:
  mov64 r0, 1
  jle r2, 3, jmp_18bd0

jmp_18ab0:
  mov64 r5, 1
  jne r1, 0, jmp_18ac8

jmp_18ac0:
  mov64 r5, 0

jmp_18ac8:
  rsh64 r3, 1
  add64 r9, r3
  ldxdw r3, [r10-480]
  sub64 r8, r3
  jeq r1, 0, jmp_18908
  mov64 r0, r5
  ja jmp_18908

jmp_18b00:
  mov64 r5, 0
  mov64 r7, 1
  ldxdw r9, [r10-440]
  jlt r9, r0, jmp_189e8

jmp_18b20:
  mov64 r7, 0
  jeq r8, r4, jmp_189f0

jmp_18b30:
  mov64 r7, r5
  mov64 r9, 0
  jne r7, 0, jmp_18a00

jmp_18b48:
  mov64 r9, r1
  mov64 r5, 0
  jne r7, 0, jmp_18a10

jmp_18b60:
  mov64 r5, r4
  mov64 r4, 0
  jne r7, 0, jmp_18a20

jmp_18b78:
  mov64 r4, r0
  mov64 r0, 0
  jeq r7, 0, jmp_18a30
  ja jmp_18a38

jmp_18b98:
  mov64 r6, 0
  mov64 r7, 1
  ldxdw r5, [r10-440]
  jlt r5, r4, jmp_18aa0

jmp_18bb8:
  mov64 r7, 0
  mov64 r0, 1
  jgt r2, 3, jmp_18ab0

jmp_18bd0:
  mov64 r0, 0
  mov64 r5, 1
  jeq r1, 0, jmp_18ac0
  ja jmp_18ac8

jmp_18bf0:
  lsh64 r9, 24
  mov64 r1, r4
  rsh64 r1, 40
  or64 r9, r1
  stxdw [r10-512], r9
  lsh64 r4, 24
  ldxdw r5, [r10-520]
  ldxdw r0, [r10-528]
  ja jmp_19468

jmp_18c38:
  mov64 r0, r8
  rsh64 r0, 1
  mov64 r5, r8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56

jmp_18d50:
  xor64 r4, -1
  and64 r4, 126
  mov64 r1, r10
  add64 r1, -144
  mov64 r9, 0
  mov64 r2, 1
  mov64 r3, 0
  call fn_30108
  ldxdw r1, [r10-136]
  ldxdw r2, [r10-144]
  mov64 r5, 0
  stxdw [r10-472], r7
  mov64 r3, r8
  ja jmp_18e40

jmp_18dc0:
  sub64 r3, r9
  ldxdw r4, [r10-512]
  add64 r6, r4
  ldxdw r4, [r10-472]
  sub64 r4, r0
  stxdw [r10-472], r4
  rsh64 r2, 2
  mov64 r5, r1
  lsh64 r5, 62
  or64 r2, r5
  rsh64 r1, 2
  and64 r8, 1
  ldxdw r4, [r10-496]
  mov64 r9, r4
  mov64 r5, r6
  jeq r8, 0, jmp_190f0

jmp_18e40:
  mov64 r7, r2
  add64 r7, r9
  mov64 r6, 1
  jlt r7, r2, jmp_18e68
  mov64 r6, 0

jmp_18e68:
  mov64 r0, r1
  add64 r0, r5
  add64 r0, r6
  mov64 r6, 1
  jge r3, r0, jmp_18fb8
  mov64 r8, 1
  ldxdw r4, [r10-472]
  jge r4, r7, jmp_18fd8

jmp_18ea8:
  jne r3, r0, jmp_18fe8

jmp_18eb0:
  mov64 r6, 0
  jeq r8, 0, jmp_19000

jmp_18ec0:
  mov64 r4, 0
  jeq r8, 0, jmp_19018

jmp_18ed0:
  mov64 r0, 0
  jeq r8, 0, jmp_19030

jmp_18ee0:
  stxdw [r10-504], r4
  mov64 r7, 0
  jne r8, 0, jmp_18f00

jmp_18ef8:
  mov64 r7, r2

jmp_18f00:
  rsh64 r9, 1
  mov64 r8, r5
  lsh64 r8, 63
  or64 r9, r8
  mov64 r4, r7
  add64 r4, r9
  mov64 r8, 1
  stxdw [r10-496], r4
  jge r4, r7, jmp_19058
  stxdw [r10-512], r8
  mov64 r9, 1
  ldxdw r4, [r10-472]
  jge r4, r0, jmp_19080

jmp_18f68:
  mov64 r8, 1
  jle r2, 3, jmp_19098

jmp_18f78:
  mov64 r7, 1
  ldxdw r4, [r10-504]
  jeq r1, 0, jmp_190b8

jmp_18f90:
  rsh64 r5, 1
  add64 r6, r5
  sub64 r3, r4
  jeq r1, 0, jmp_18dc0
  ja jmp_190e0

jmp_18fb8:
  mov64 r6, 0
  mov64 r8, 1
  ldxdw r4, [r10-472]
  jlt r4, r7, jmp_18ea8

jmp_18fd8:
  mov64 r8, 0
  jeq r3, r0, jmp_18eb0

jmp_18fe8:
  mov64 r8, r6
  mov64 r6, 0
  jne r8, 0, jmp_18ec0

jmp_19000:
  mov64 r6, r1
  mov64 r4, 0
  jne r8, 0, jmp_18ed0

jmp_19018:
  mov64 r4, r0
  mov64 r0, 0
  jne r8, 0, jmp_18ee0

jmp_19030:
  mov64 r0, r7
  stxdw [r10-504], r4
  mov64 r7, 0
  jeq r8, 0, jmp_18ef8
  ja jmp_18f00

jmp_19058:
  mov64 r8, 0
  stxdw [r10-512], r8
  mov64 r9, 1
  ldxdw r4, [r10-472]
  jlt r4, r0, jmp_18f68

jmp_19080:
  mov64 r9, 0
  mov64 r8, 1
  jgt r2, 3, jmp_18f78

jmp_19098:
  mov64 r8, 0
  mov64 r7, 1
  ldxdw r4, [r10-504]
  jne r1, 0, jmp_18f90

jmp_190b8:
  mov64 r7, 0
  rsh64 r5, 1
  add64 r6, r5
  sub64 r3, r4
  jeq r1, 0, jmp_18dc0

jmp_190e0:
  mov64 r8, r7
  ja jmp_18dc0

jmp_190f0:
  lsh64 r6, 24
  mov64 r1, r4
  rsh64 r1, 40
  or64 r6, r1
  lsh64 r4, 24
  ldxdw r8, [r10-480]
  ldxdw r7, [r10-440]

jmp_19128:
  mov64 r5, r4
  arsh64 r5, 63
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r8
  mov64 r3, 0
  stxdw [r10-440], r5
  mov64 r9, r4
  call fn_30150
  and64 r9, -16777216
  mov64 r1, r10
  add64 r1, -192
  mov64 r2, r9
  mov64 r3, 0
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  mov64 r4, r7
  arsh64 r7, 63
  mov64 r9, r6
  arsh64 r9, 63
  mov64 r1, r10
  add64 r1, -160
  mov64 r2, r6
  mov64 r3, r9
  mov64 r5, r7
  call fn_30150
  mov64 r1, r10
  add64 r1, -176
  mov64 r2, r6
  mov64 r3, r9
  mov64 r4, r8
  mov64 r5, 0
  call fn_30150
  and64 r7, r6
  ldxdw r1, [r10-152]
  add64 r1, r7
  ldxdw r3, [r10-184]
  ldxdw r2, [r10-208]
  mov64 r4, r2
  add64 r4, r3
  ldxdw r0, [r10-160]
  mov64 r6, r0
  add64 r6, r4
  mov64 r3, 1
  mov64 r5, 1
  mov64 r7, r6
  jlt r6, r0, jmp_192b0
  mov64 r5, 0

jmp_192b0:
  add64 r1, r5
  mov64 r5, 1
  jlt r4, r2, jmp_192d0
  mov64 r5, 0

jmp_192d0:
  ldxdw r2, [r10-440]
  and64 r8, r2
  lddw r2, 9223372036854775807
  and64 r8, r2
  ldxdw r2, [r10-200]
  add64 r2, r8
  add64 r2, r5
  ldxdw r4, [r10-176]
  mov64 r5, r2
  add64 r5, r4
  mov64 r6, r5
  add64 r6, r1
  mov64 r4, 1
  ldxdw r0, [r10-528]
  mov64 r8, r6
  jlt r6, r5, jmp_19360
  mov64 r4, 0

jmp_19360:
  jlt r5, r2, jmp_19370
  mov64 r3, 0

jmp_19370:
  arsh64 r2, 63
  ldxdw r5, [r10-168]
  add64 r2, r5
  add64 r2, r3
  arsh64 r1, 63
  add64 r2, r1
  add64 r2, r4
  mov64 r1, r2
  lsh64 r1, 16
  mov64 r5, r8
  mov64 r3, r5
  rsh64 r3, 48
  or64 r3, r1
  arsh64 r2, 48
  lsh64 r5, 16
  mov64 r1, r5
  arsh64 r1, 63
  xor64 r2, r1
  xor64 r3, r1
  or64 r3, r2
  jne r3, 0, jmp_1aeb8
  mov64 r4, r7
  mov64 r1, r4
  rsh64 r1, 48
  or64 r5, r1
  stxdw [r10-512], r5
  lsh64 r4, 16
  ldxdw r1, [r10-192]
  rsh64 r1, 48
  or64 r4, r1
  ldxdw r5, [r10-520]

jmp_19468:
  ldxdw r1, [r10-536]
  jsgt r1, 1, jmp_19638
  jne r1, 0, jmp_19620

jmp_19480:
  ldxdw r6, [r10-464]
  jslt r6, 0, jmp_1ae10
  ldxdw r1, [r10-448]
  or64 r1, r6
  jeq r1, 0, jmp_19a80
  stxdw [r10-472], r4
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r2, 1085102592571150095
  lddw r1, 72340172838076673
  jne r6, 0, jmp_19a98
  ldxdw r5, [r10-448]
  mov64 r0, r5
  rsh64 r0, 1
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56
  add64 r4, 64
  ja jmp_19bb0

jmp_19620:
  ldxdw r7, [r10-448]
  ldxdw r2, [r10-464]
  ja jmp_1a740

jmp_19638:
  stxdw [r10-472], r4
  jne r1, 2, jmp_197f0
  ldxdw r2, [r10-464]
  ldxdw r9, [r10-448]
  jslt r2, 0, jmp_1ae10
  mov64 r1, r9
  or64 r1, r2
  jeq r1, 0, jmp_19f40
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r7, 1085102592571150095
  lddw r1, 72340172838076673
  jne r2, 0, jmp_19f58
  mov64 r0, r9
  rsh64 r0, 1
  mov64 r6, r2
  mov64 r5, r9
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r7
  mul64 r4, r1
  rsh64 r4, 56
  add64 r4, 64
  ja jmp_1a078

jmp_197f0:
  ldxdw r9, [r10-464]
  ldxdw r8, [r10-448]
  mov64 r6, r8
  arsh64 r6, 63
  mov64 r7, r9
  arsh64 r7, 63
  mov64 r1, r10
  add64 r1, -272
  mov64 r2, r9
  mov64 r3, r7
  mov64 r4, r8
  mov64 r5, r6
  call fn_30150
  mov64 r1, r10
  add64 r1, -256
  mov64 r2, r8
  mov64 r3, 0
  mov64 r4, r8
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -240
  mov64 r2, r9
  mov64 r3, r7
  mov64 r4, r9
  mov64 r5, r7
  call fn_30150
  and64 r6, r9
  ldxdw r3, [r10-264]
  ldxdw r2, [r10-248]
  ldxdw r1, [r10-272]
  mov64 r5, r1
  add64 r5, r2
  mov64 r4, 1
  mov64 r2, 1
  jlt r5, r1, jmp_19918
  mov64 r2, 0

jmp_19918:
  add64 r3, r6
  mov64 r7, r5
  add64 r7, r1
  mov64 r1, 1
  jlt r7, r5, jmp_19948
  mov64 r1, 0

jmp_19948:
  mov64 r5, r3
  add64 r5, r1
  add64 r3, r2
  ldxdw r2, [r10-240]
  mov64 r1, r3
  add64 r1, r2
  mov64 r2, r1
  add64 r2, r5
  mov64 r0, 1
  jlt r2, r1, jmp_199a0
  mov64 r0, 0

jmp_199a0:
  jlt r1, r3, jmp_199b0
  mov64 r4, 0

jmp_199b0:
  arsh64 r3, 63
  ldxdw r1, [r10-232]
  add64 r3, r1
  add64 r3, r4
  arsh64 r5, 63
  add64 r3, r5
  add64 r3, r0
  mov64 r1, r3
  lsh64 r1, 16
  mov64 r4, r2
  rsh64 r4, 48
  or64 r4, r1
  arsh64 r3, 48
  lsh64 r2, 16
  mov64 r1, r2
  arsh64 r1, 63
  xor64 r3, r1
  xor64 r4, r1
  or64 r4, r3
  jne r4, 0, jmp_1aea0
  mov64 r1, r7
  rsh64 r1, 48
  or64 r2, r1
  lsh64 r7, 16
  ldxdw r1, [r10-256]
  ja jmp_1a718

jmp_19a80:
  mov64 r7, 0
  mov64 r2, 0
  ja jmp_1a740

jmp_19a98:
  mov64 r0, r6
  rsh64 r0, 1
  mov64 r5, r6
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56

jmp_19bb0:
  xor64 r4, -1
  and64 r4, 126
  mov64 r1, r10
  add64 r1, -368
  mov64 r6, 0
  mov64 r2, 1
  mov64 r3, 0
  call fn_30108
  ldxdw r3, [r10-360]
  ldxdw r4, [r10-368]
  mov64 r5, 0
  ja jmp_19c90

jmp_19c10:
  sub64 r5, r9
  stxdw [r10-464], r5
  add64 r2, r6
  ldxdw r1, [r10-448]
  sub64 r1, r0
  stxdw [r10-448], r1
  rsh64 r4, 2
  mov64 r1, r3
  lsh64 r1, 62
  or64 r4, r1
  rsh64 r3, 2
  and64 r8, 1
  ldxdw r7, [r10-440]
  mov64 r6, r7
  mov64 r5, r2
  jeq r8, 0, jmp_19f10

jmp_19c90:
  mov64 r1, r4
  add64 r1, r6
  mov64 r2, 1
  jlt r1, r4, jmp_19cb8
  mov64 r2, 0

jmp_19cb8:
  mov64 r0, r3
  add64 r0, r5
  add64 r0, r2
  mov64 r2, 1
  ldxdw r7, [r10-464]
  jge r7, r0, jmp_19e18
  mov64 r8, 1
  ldxdw r7, [r10-448]
  jge r7, r1, jmp_19e38

jmp_19d00:
  ldxdw r7, [r10-464]
  jne r7, r0, jmp_19e50

jmp_19d10:
  mov64 r2, 0
  jeq r8, 0, jmp_19e68

jmp_19d20:
  mov64 r7, 0
  jeq r8, 0, jmp_19e80

jmp_19d30:
  mov64 r0, 0
  jeq r8, 0, jmp_19e98

jmp_19d40:
  mov64 r9, 0
  jne r8, 0, jmp_19d58

jmp_19d50:
  mov64 r9, r4

jmp_19d58:
  rsh64 r6, 1
  mov64 r1, r5
  lsh64 r1, 63
  or64 r6, r1
  mov64 r1, r9
  add64 r1, r6
  mov64 r6, 1
  stxdw [r10-440], r1
  jge r1, r9, jmp_19eb8
  mov64 r9, 1
  ldxdw r1, [r10-448]
  jge r1, r0, jmp_19ed8

jmp_19db8:
  mov64 r8, 1
  jle r4, 3, jmp_19ef0

jmp_19dc8:
  mov64 r1, 1
  jne r3, 0, jmp_19de0

jmp_19dd8:
  mov64 r1, 0

jmp_19de0:
  rsh64 r5, 1
  add64 r2, r5
  ldxdw r5, [r10-464]
  sub64 r5, r7
  jeq r3, 0, jmp_19c10
  mov64 r8, r1
  ja jmp_19c10

jmp_19e18:
  mov64 r2, 0
  mov64 r8, 1
  ldxdw r7, [r10-448]
  jlt r7, r1, jmp_19d00

jmp_19e38:
  mov64 r8, 0
  ldxdw r7, [r10-464]
  jeq r7, r0, jmp_19d10

jmp_19e50:
  mov64 r8, r2
  mov64 r2, 0
  jne r8, 0, jmp_19d20

jmp_19e68:
  mov64 r2, r3
  mov64 r7, 0
  jne r8, 0, jmp_19d30

jmp_19e80:
  mov64 r7, r0
  mov64 r0, 0
  jne r8, 0, jmp_19d40

jmp_19e98:
  mov64 r0, r1
  mov64 r9, 0
  jeq r8, 0, jmp_19d50
  ja jmp_19d58

jmp_19eb8:
  mov64 r6, 0
  mov64 r9, 1
  ldxdw r1, [r10-448]
  jlt r1, r0, jmp_19db8

jmp_19ed8:
  mov64 r9, 0
  mov64 r8, 1
  jgt r4, 3, jmp_19dc8

jmp_19ef0:
  mov64 r8, 0
  mov64 r1, 1
  jeq r3, 0, jmp_19dd8
  ja jmp_19de0

jmp_19f10:
  lsh64 r2, 24
  mov64 r1, r7
  rsh64 r1, 40
  or64 r2, r1
  lsh64 r7, 24
  ja jmp_1a728

jmp_19f40:
  mov64 r7, 0
  mov64 r6, 0
  ja jmp_1a410

jmp_19f58:
  mov64 r0, r2
  rsh64 r0, 1
  mov64 r6, r2
  mov64 r5, r6
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r7
  mul64 r4, r1
  rsh64 r4, 56

jmp_1a078:
  xor64 r4, -1
  and64 r4, 126
  mov64 r1, r10
  add64 r1, -288
  mov64 r8, 0
  mov64 r2, 1
  mov64 r3, 0
  call fn_30108
  ldxdw r1, [r10-280]
  ldxdw r2, [r10-288]
  mov64 r5, 0
  mov64 r3, r9
  mov64 r4, r6
  ja jmp_1a158

jmp_1a0e8:
  sub64 r4, r8
  ldxdw r5, [r10-504]
  add64 r6, r5
  sub64 r3, r0
  rsh64 r2, 2
  mov64 r5, r1
  lsh64 r5, 62
  or64 r2, r5
  rsh64 r1, 2
  and64 r9, 1
  ldxdw r7, [r10-480]
  mov64 r8, r7
  mov64 r5, r6
  jeq r9, 0, jmp_1a3e0

jmp_1a158:
  mov64 r7, r2
  add64 r7, r8
  mov64 r6, 1
  jlt r7, r2, jmp_1a180
  mov64 r6, 0

jmp_1a180:
  mov64 r0, r1
  add64 r0, r5
  add64 r0, r6
  mov64 r6, 1
  jge r4, r0, jmp_1a2e0
  mov64 r9, 1
  jge r3, r7, jmp_1a2f8

jmp_1a1b8:
  jne r4, r0, jmp_1a308

jmp_1a1c0:
  stxdw [r10-496], r3
  mov64 r6, 0
  jeq r9, 0, jmp_1a328

jmp_1a1d8:
  mov64 r3, 0
  stxdw [r10-440], r3
  jeq r9, 0, jmp_1a348

jmp_1a1f0:
  mov64 r0, 0
  ldxdw r3, [r10-496]
  jeq r9, 0, jmp_1a368

jmp_1a208:
  mov64 r7, 0
  jne r9, 0, jmp_1a220

jmp_1a218:
  mov64 r7, r2

jmp_1a220:
  rsh64 r8, 1
  mov64 r9, r5
  lsh64 r9, 63
  or64 r8, r9
  mov64 r9, r7
  add64 r9, r8
  mov64 r8, 1
  stxdw [r10-480], r9
  jge r9, r7, jmp_1a388
  stxdw [r10-504], r8
  mov64 r8, 1
  jge r3, r0, jmp_1a3a8

jmp_1a280:
  mov64 r9, 1
  jle r2, 3, jmp_1a3c0

jmp_1a290:
  mov64 r7, 1
  jne r1, 0, jmp_1a2a8

jmp_1a2a0:
  mov64 r7, 0

jmp_1a2a8:
  rsh64 r5, 1
  add64 r6, r5
  ldxdw r5, [r10-440]
  sub64 r4, r5
  jeq r1, 0, jmp_1a0e8
  mov64 r9, r7
  ja jmp_1a0e8

jmp_1a2e0:
  mov64 r6, 0
  mov64 r9, 1
  jlt r3, r7, jmp_1a1b8

jmp_1a2f8:
  mov64 r9, 0
  jeq r4, r0, jmp_1a1c0

jmp_1a308:
  mov64 r9, r6
  stxdw [r10-496], r3
  mov64 r6, 0
  jne r9, 0, jmp_1a1d8

jmp_1a328:
  mov64 r6, r1
  mov64 r3, 0
  stxdw [r10-440], r3
  jne r9, 0, jmp_1a1f0

jmp_1a348:
  stxdw [r10-440], r0
  mov64 r0, 0
  ldxdw r3, [r10-496]
  jne r9, 0, jmp_1a208

jmp_1a368:
  mov64 r0, r7
  mov64 r7, 0
  jeq r9, 0, jmp_1a218
  ja jmp_1a220

jmp_1a388:
  mov64 r8, 0
  stxdw [r10-504], r8
  mov64 r8, 1
  jlt r3, r0, jmp_1a280

jmp_1a3a8:
  mov64 r8, 0
  mov64 r9, 1
  jgt r2, 3, jmp_1a290

jmp_1a3c0:
  mov64 r9, 0
  mov64 r7, 1
  jeq r1, 0, jmp_1a2a0
  ja jmp_1a2a8

jmp_1a3e0:
  lsh64 r6, 24
  mov64 r1, r7
  rsh64 r1, 40
  or64 r6, r1
  lsh64 r7, 24
  ldxdw r2, [r10-464]

jmp_1a410:
  mov64 r5, r7
  arsh64 r5, 63
  mov64 r1, r10
  add64 r1, -352
  mov64 r3, 0
  mov64 r4, r7
  stxdw [r10-440], r5
  call fn_30150
  and64 r7, -16777216
  mov64 r1, r10
  add64 r1, -336
  mov64 r2, r7
  mov64 r3, 0
  ldxdw r9, [r10-448]
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r7, r9
  arsh64 r7, 63
  mov64 r8, r6
  arsh64 r8, 63
  mov64 r1, r10
  add64 r1, -304
  mov64 r2, r6
  mov64 r3, r8
  mov64 r4, r9
  mov64 r5, r7
  call fn_30150
  mov64 r1, r10
  add64 r1, -320
  mov64 r2, r6
  mov64 r3, r8
  ldxdw r4, [r10-464]
  mov64 r5, 0
  call fn_30150
  and64 r7, r6
  ldxdw r3, [r10-296]
  add64 r3, r7
  ldxdw r1, [r10-328]
  ldxdw r2, [r10-352]
  mov64 r4, r2
  add64 r4, r1
  ldxdw r0, [r10-304]
  mov64 r7, r0
  add64 r7, r4
  mov64 r5, 1
  mov64 r1, 1
  jlt r7, r0, jmp_1a598
  mov64 r1, 0

jmp_1a598:
  add64 r3, r1
  mov64 r1, 1
  jlt r4, r2, jmp_1a5b8
  mov64 r1, 0

jmp_1a5b8:
  ldxdw r0, [r10-464]
  ldxdw r2, [r10-440]
  and64 r0, r2
  lddw r2, 9223372036854775807
  and64 r0, r2
  ldxdw r4, [r10-344]
  add64 r4, r0
  add64 r4, r1
  ldxdw r2, [r10-320]
  mov64 r1, r4
  add64 r1, r2
  mov64 r2, r1
  add64 r2, r3
  mov64 r0, 1
  jlt r2, r1, jmp_1a640
  mov64 r0, 0

jmp_1a640:
  jlt r1, r4, jmp_1a650
  mov64 r5, 0

jmp_1a650:
  arsh64 r4, 63
  ldxdw r1, [r10-312]
  add64 r4, r1
  add64 r4, r5
  arsh64 r3, 63
  add64 r4, r3
  add64 r4, r0
  mov64 r1, r4
  lsh64 r1, 16
  mov64 r3, r2
  rsh64 r3, 48
  or64 r3, r1
  arsh64 r4, 48
  lsh64 r2, 16
  mov64 r1, r2
  arsh64 r1, 63
  xor64 r4, r1
  xor64 r3, r1
  or64 r3, r4
  jne r3, 0, jmp_1aeb8
  mov64 r1, r7
  rsh64 r1, 48
  or64 r2, r1
  lsh64 r7, 16
  ldxdw r1, [r10-336]

jmp_1a718:
  rsh64 r1, 48
  or64 r7, r1

jmp_1a728:
  ldxdw r5, [r10-520]
  ldxdw r0, [r10-528]
  ldxdw r4, [r10-472]

jmp_1a740:
  mov64 r1, 1
  jlt r7, r4, jmp_1a758
  mov64 r1, 0

jmp_1a758:
  mov64 r8, r2
  ldxdw r3, [r10-512]
  sub64 r8, r3
  sub64 r8, r1
  mov64 r1, r2
  xor64 r1, r3
  xor64 r2, r8
  and64 r1, r2
  mov64 r6, 241
  jslt r1, 0, jmp_1a8c0
  mov64 r1, r0
  or64 r1, r5
  mov64 r6, 244
  jeq r1, 0, jmp_1a8c0
  sub64 r7, r4
  mov64 r3, r7
  neg64 r3
  jsge r8, 0, jmp_1a8e0
  mov64 r2, 1
  mov64 r4, 1
  jeq r7, 0, jmp_1a900

jmp_1a800:
  mov64 r1, r8
  jslt r8, 0, jmp_1a918

jmp_1a810:
  stxdw [r10-32], r3
  stxdw [r10-24], r1
  jeq r0, 0, jmp_1a940

jmp_1a828:
  mov64 r1, r0
  neg64 r1
  jsge r5, 0, jmp_1a960

jmp_1a840:
  mov64 r3, r5
  jsge r5, 0, jmp_1a860

jmp_1a850:
  add64 r3, r2
  neg64 r3

jmp_1a860:
  stxdw [r10-8], r3
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r10
  add64 r2, -32
  mov64 r3, r10
  add64 r3, -16
  mov64 r4, 48
  call fn_1178
  ldxb r1, [r10-64]
  jeq r1, 0, jmp_1a980

jmp_1a8c0:
  ldxdw r8, [r10-456]
  stxw [r8+8], r6
  stw [r8+4], 0
  ja jmp_17f70

jmp_1a8e0:
  mov64 r3, r7
  mov64 r2, 1
  mov64 r4, 1
  jne r7, 0, jmp_1a800

jmp_1a900:
  mov64 r4, 0
  mov64 r1, r8
  jsge r8, 0, jmp_1a810

jmp_1a918:
  add64 r1, r4
  neg64 r1
  stxdw [r10-32], r3
  stxdw [r10-24], r1
  jne r0, 0, jmp_1a828

jmp_1a940:
  mov64 r2, 0
  mov64 r1, r0
  neg64 r1
  jslt r5, 0, jmp_1a840

jmp_1a960:
  mov64 r1, r0
  mov64 r3, r5
  jslt r5, 0, jmp_1a850
  ja jmp_1a860

jmp_1a980:
  ldxdw r4, [r10-72]
  ldxdw r7, [r10-80]
  ldxdw r1, [r10-520]
  xor64 r8, r1
  jslt r8, 0, jmp_1a9b8
  jsge r4, 0, jmp_1aaa0
  ja jmp_1a8c0

jmp_1a9b8:
  mov64 r2, 1
  mov64 r1, 1
  jeq r7, 0, jmp_1aa08
  lddw r3, -9223372036854775808
  jle r4, r3, jmp_1aa28

jmp_1a9e8:
  jne r4, r3, jmp_1aa38

jmp_1a9f0:
  and64 r1, 1
  jne r1, 0, jmp_1a8c0
  ja jmp_1aa50

jmp_1aa08:
  mov64 r1, 0
  lddw r3, -9223372036854775808
  jgt r4, r3, jmp_1a9e8

jmp_1aa28:
  mov64 r2, 0
  jeq r4, r3, jmp_1a9f0

jmp_1aa38:
  mov64 r1, r2
  and64 r1, 1
  jne r1, 0, jmp_1a8c0

jmp_1aa50:
  neg64 r7
  mov64 r1, 1
  jgt r7, 0, jmp_1aa70
  mov64 r1, 0

jmp_1aa70:
  mov64 r2, r4
  xor64 r2, -1
  jne r1, 0, jmp_1aa98
  neg64 r4
  mov64 r2, r4

jmp_1aa98:
  mov64 r4, r2

jmp_1aaa0:
  mov64 r5, r7
  arsh64 r5, 63
  ldxdw r6, [r10-488]
  ldxdw r2, [r6+8]
  stxdw [r10-440], r2
  mov64 r9, r2
  arsh64 r9, 63
  mov64 r1, r10
  add64 r1, -432
  mov64 r3, r9
  mov64 r8, r4
  mov64 r4, r7
  stxdw [r10-448], r5
  call fn_30150
  ldxdw r6, [r6+0]
  mov64 r1, r10
  add64 r1, -416
  mov64 r2, r6
  mov64 r3, 0
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  mov64 r2, r8
  stxdw [r10-464], r2
  arsh64 r8, 63
  mov64 r7, r6
  arsh64 r7, 63
  mov64 r1, r10
  add64 r1, -384
  mov64 r3, r8
  mov64 r4, r6
  mov64 r5, r7
  call fn_30150
  mov64 r1, r10
  add64 r1, -400
  ldxdw r2, [r10-440]
  mov64 r3, r9
  ldxdw r6, [r10-464]
  mov64 r4, r6
  mov64 r5, r8
  call fn_30150
  and64 r7, r6
  ldxdw r3, [r10-376]
  add64 r3, r7
  ldxdw r1, [r10-408]
  ldxdw r2, [r10-432]
  mov64 r4, r2
  add64 r4, r1
  ldxdw r6, [r10-384]
  mov64 r1, r6
  add64 r1, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r1, r6, jmp_1ac58
  mov64 r0, 0

jmp_1ac58:
  add64 r3, r0
  mov64 r0, 1
  jlt r4, r2, jmp_1ac78
  mov64 r0, 0

jmp_1ac78:
  ldxdw r2, [r10-448]
  ldxdw r4, [r10-440]
  and64 r2, r4
  ldxdw r4, [r10-424]
  add64 r4, r2
  add64 r4, r0
  ldxdw r2, [r10-400]
  mov64 r6, r4
  add64 r6, r2
  mov64 r2, r6
  add64 r2, r3
  mov64 r0, 1
  ldxdw r8, [r10-456]
  jlt r2, r6, jmp_1acf0
  mov64 r0, 0

jmp_1acf0:
  jlt r6, r4, jmp_1ad00
  mov64 r5, 0

jmp_1ad00:
  arsh64 r4, 63
  ldxdw r6, [r10-392]
  add64 r4, r6
  add64 r4, r5
  arsh64 r3, 63
  add64 r4, r3
  add64 r4, r0
  mov64 r3, r4
  lsh64 r3, 16
  mov64 r5, r2
  rsh64 r5, 48
  or64 r5, r3
  arsh64 r4, 48
  lsh64 r2, 16
  mov64 r3, r2
  arsh64 r3, 63
  xor64 r4, r3
  xor64 r5, r3
  or64 r5, r4
  jne r5, 0, jmp_1adf8
  mov64 r3, r1
  rsh64 r3, 48
  or64 r2, r3
  lsh64 r1, 16
  ldxdw r3, [r10-416]
  rsh64 r3, 48
  or64 r1, r3
  stxdw [r8+8], r1
  stxdw [r8+16], r2
  mov64 r1, 0
  ja jmp_17f78

jmp_1adf8:
  lddw r1, 1065151889408
  ja jmp_17f68

jmp_1ae10:
  lddw r1, str_029f
  mov64 r2, 44
  lddw r3, 206072
  call fn_2deb8  ; → → → custom_panic

jmp_1ae40:
  lddw r1, 206424
  stxdw [r10-80], r1
  stdw [r10-48], 0
  stdw [r10-72], 1
  stdw [r10-56], 0
  stdw [r10-64], 8
  mov64 r1, r10
  add64 r1, -80
  lddw r2, 206440
  call fn_2de88  ; → → custom_panic

jmp_1aea0:
  lddw r1, 206488
  call fn_2de60  ; → → → → custom_panic

jmp_1aeb8:
  lddw r1, 206464
  call fn_2de60  ; → → → → custom_panic

fn_1aed0:
  mov64 r9, r5
  mov64 r8, r1
  mov64 r1, r2
  lsh64 r1, 48
  stxdw [r10-64], r1
  mov64 r1, r2
  rsh64 r1, 16
  arsh64 r2, 63
  lsh64 r2, 48
  or64 r2, r1
  stxdw [r10-56], r2
  mov64 r1, r10
  add64 r1, -48
  mov64 r2, r10
  add64 r2, -64
  call fn_15e8  ; → → sol_log_
  ldxdw r1, [r10-48]
  jeq r1, 0, jmp_1aff8
  ldxdw r2, [r10-32]
  ldxdw r4, [r10-40]
  ldxdw r1, [r9+16]
  mov64 r3, 1
  stxdw [r10-360], r4
  jlt r4, r1, jmp_1af98
  mov64 r3, 0

jmp_1af98:
  ldxdw r4, [r9+24]
  mov64 r6, r2
  sub64 r6, r4
  sub64 r6, r3
  mov64 r3, r2
  xor64 r3, r4
  xor64 r2, r6
  and64 r3, r2
  jsge r3, 0, jmp_1b028
  lddw r1, 1133871366144
  ja jmp_1b008

jmp_1aff8:
  lddw r1, 584115552256

jmp_1b008:
  stxdw [r8+4], r1
  mov64 r1, 1

jmp_1b018:
  stxw [r8+0], r1
  exit

jmp_1b028:
  jslt r6, 0, jmp_1b228
  ldxb r2, [r9+64]
  jge r2, 4, jmp_1c5b0
  ldxdw r3, [r10-360]
  sub64 r3, r1
  stxdw [r10-360], r3
  ldxdw r1, [r9+8]
  stxdw [r10-392], r1
  ldxdw r7, [r9+0]
  jsgt r2, 1, jmp_1b240
  stxdw [r10-400], r8
  stxdw [r10-408], r9
  jne r2, 0, jmp_1b5f8
  ldxdw r1, [r10-360]
  or64 r1, r6
  stxdw [r10-416], r7
  jeq r1, 0, jmp_1bd20
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r2, 1085102592571150095
  lddw r1, 72340172838076673
  stxdw [r10-368], r6
  jne r6, 0, jmp_1bd38
  ldxdw r5, [r10-360]
  mov64 r0, r5
  rsh64 r0, 1
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r4
  sub64 r5, r0
  mov64 r4, r5
  and64 r4, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r4, r5
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56
  add64 r4, 64
  ja jmp_1be48

jmp_1b228:
  lddw r1, 1151051235328
  ja jmp_1b008

jmp_1b240:
  stxdw [r10-368], r6
  jne r2, 2, jmp_1b920
  ldxdw r6, [r10-360]
  mov64 r5, r6
  arsh64 r5, 63
  ldxdw r2, [r10-392]
  mov64 r3, r2
  arsh64 r3, 63
  stxdw [r10-384], r3
  mov64 r1, r10
  add64 r1, -192
  mov64 r4, r6
  stxdw [r10-376], r5
  call fn_30150
  mov64 r1, r10
  add64 r1, -176
  mov64 r2, r7
  mov64 r3, 0
  mov64 r4, r6
  mov64 r5, 0
  call fn_30150
  mov64 r6, r7
  arsh64 r6, 63
  mov64 r1, r10
  add64 r1, -144
  mov64 r4, r7
  ldxdw r7, [r10-368]
  mov64 r2, r7
  mov64 r3, 0
  mov64 r5, r6
  call fn_30150
  mov64 r1, r10
  add64 r1, -160
  ldxdw r2, [r10-392]
  ldxdw r3, [r10-384]
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  and64 r7, r6
  lddw r1, 9223372036854775807
  and64 r7, r1
  ldxdw r1, [r10-136]
  add64 r1, r7
  ldxdw r3, [r10-168]
  ldxdw r2, [r10-192]
  mov64 r4, r2
  add64 r4, r3
  ldxdw r0, [r10-144]
  mov64 r7, r0
  add64 r7, r4
  mov64 r3, 1
  mov64 r5, 1
  jlt r7, r0, jmp_1b3f8
  mov64 r5, 0

jmp_1b3f8:
  add64 r1, r5
  mov64 r5, 1
  jlt r4, r2, jmp_1b418
  mov64 r5, 0

jmp_1b418:
  ldxdw r2, [r10-392]
  ldxdw r4, [r10-376]
  and64 r4, r2
  ldxdw r2, [r10-184]
  add64 r2, r4
  add64 r2, r5
  ldxdw r4, [r10-160]
  mov64 r5, r2
  add64 r5, r4
  mov64 r6, r5
  add64 r6, r1
  mov64 r4, 1
  jlt r6, r5, jmp_1b488
  mov64 r4, 0

jmp_1b488:
  jlt r5, r2, jmp_1b498
  mov64 r3, 0

jmp_1b498:
  arsh64 r2, 63
  ldxdw r5, [r10-152]
  add64 r2, r5
  add64 r2, r3
  arsh64 r1, 63
  add64 r2, r1
  add64 r2, r4
  mov64 r1, r2
  lsh64 r1, 16
  mov64 r3, r6
  rsh64 r3, 48
  or64 r3, r1
  arsh64 r2, 48
  lsh64 r6, 16
  mov64 r1, r6
  arsh64 r1, 63
  xor64 r2, r1
  xor64 r3, r1
  or64 r3, r2
  jne r3, 0, jmp_1bcd8
  mov64 r1, r7
  rsh64 r1, 48
  or64 r6, r1
  lsh64 r7, 16
  ldxdw r1, [r10-176]
  rsh64 r1, 48
  or64 r7, r1
  mov64 r1, r10
  add64 r1, -208
  ldxdw r2, [r10-360]
  ldxdw r3, [r10-368]
  call fn_0888  ; → → → → custom_panic
  ldxdw r5, [r10-200]
  ldxdw r4, [r10-208]
  mov64 r1, r10
  add64 r1, -48
  mov64 r2, r7
  mov64 r3, r6
  call fn_0488
  ldxdw r1, [r10-48]
  jne r1, 0, jmp_1bc80
  lddw r1, 1245540515840
  ja jmp_1b008

jmp_1b5f8:
  ldxdw r9, [r10-360]
  mov64 r5, r9
  arsh64 r5, 63
  ldxdw r2, [r10-392]
  mov64 r8, r7
  mov64 r7, r2
  arsh64 r7, 63
  mov64 r1, r10
  add64 r1, -272
  mov64 r3, r7
  mov64 r4, r9
  stxdw [r10-376], r5
  call fn_30150
  mov64 r1, r10
  add64 r1, -256
  mov64 r2, r8
  mov64 r3, 0
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r9, r8
  arsh64 r9, 63
  mov64 r1, r10
  add64 r1, -224
  mov64 r2, r6
  mov64 r3, 0
  mov64 r4, r8
  mov64 r5, r9
  call fn_30150
  mov64 r1, r10
  add64 r1, -240
  ldxdw r2, [r10-392]
  mov64 r3, r7
  mov64 r4, r6
  mov64 r5, 0
  call fn_30150
  and64 r6, r9
  lddw r1, 9223372036854775807
  and64 r6, r1
  ldxdw r3, [r10-216]
  add64 r3, r6
  ldxdw r1, [r10-248]
  ldxdw r2, [r10-272]
  mov64 r4, r2
  add64 r4, r1
  ldxdw r7, [r10-224]
  mov64 r1, r7
  add64 r1, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r1, r7, jmp_1b7a0
  mov64 r0, 0

jmp_1b7a0:
  add64 r3, r0
  mov64 r0, 1
  ldxdw r8, [r10-400]
  jlt r4, r2, jmp_1b7c8
  mov64 r0, 0

jmp_1b7c8:
  ldxdw r2, [r10-392]
  ldxdw r6, [r10-376]
  and64 r6, r2
  ldxdw r4, [r10-264]
  add64 r4, r6
  add64 r4, r0
  ldxdw r2, [r10-240]
  mov64 r6, r4
  add64 r6, r2
  mov64 r2, r6
  add64 r2, r3
  mov64 r0, 1
  ldxdw r7, [r10-408]
  jlt r2, r6, jmp_1b840
  mov64 r0, 0

jmp_1b840:
  jlt r6, r4, jmp_1b850
  mov64 r5, 0

jmp_1b850:
  arsh64 r4, 63
  ldxdw r6, [r10-232]
  add64 r4, r6
  add64 r4, r5
  arsh64 r3, 63
  add64 r4, r3
  add64 r4, r0
  mov64 r3, r4
  lsh64 r3, 16
  mov64 r5, r2
  rsh64 r5, 48
  or64 r5, r3
  arsh64 r4, 48
  lsh64 r2, 16
  mov64 r3, r2
  arsh64 r3, 63
  xor64 r4, r3
  xor64 r5, r3
  or64 r5, r4
  jne r5, 0, jmp_1bcf0
  mov64 r3, r1
  rsh64 r3, 48
  or64 r2, r3
  lsh64 r1, 16
  ldxdw r3, [r10-256]
  ja jmp_1c508

jmp_1b920:
  ldxdw r6, [r10-360]
  mov64 r5, r6
  arsh64 r5, 63
  ldxdw r2, [r10-392]
  mov64 r3, r2
  arsh64 r3, 63
  stxdw [r10-384], r3
  mov64 r1, r10
  add64 r1, -128
  mov64 r4, r6
  stxdw [r10-376], r5
  call fn_30150
  mov64 r1, r10
  add64 r1, -112
  mov64 r2, r7
  mov64 r3, 0
  mov64 r4, r6
  mov64 r5, 0
  call fn_30150
  mov64 r4, r7
  mov64 r6, r4
  arsh64 r6, 63
  mov64 r1, r10
  add64 r1, -80
  ldxdw r7, [r10-368]
  mov64 r2, r7
  mov64 r3, 0
  mov64 r5, r6
  call fn_30150
  mov64 r1, r10
  add64 r1, -96
  ldxdw r2, [r10-392]
  ldxdw r3, [r10-384]
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  mov64 r2, r7
  and64 r2, r6
  lddw r1, 9223372036854775807
  and64 r2, r1
  ldxdw r1, [r10-72]
  add64 r1, r2
  ldxdw r2, [r10-104]
  ldxdw r3, [r10-128]
  mov64 r4, r3
  add64 r4, r2
  ldxdw r6, [r10-80]
  mov64 r2, r6
  add64 r2, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r2, r6, jmp_1bad0
  mov64 r0, 0

jmp_1bad0:
  add64 r1, r0
  mov64 r0, 1
  jlt r4, r3, jmp_1baf0
  mov64 r0, 0

jmp_1baf0:
  ldxdw r3, [r10-392]
  ldxdw r6, [r10-376]
  and64 r6, r3
  ldxdw r4, [r10-120]
  add64 r4, r6
  add64 r4, r0
  ldxdw r3, [r10-96]
  mov64 r6, r4
  add64 r6, r3
  mov64 r3, r6
  add64 r3, r1
  mov64 r0, 1
  jlt r3, r6, jmp_1bb60
  mov64 r0, 0

jmp_1bb60:
  jlt r6, r4, jmp_1bb70
  mov64 r5, 0

jmp_1bb70:
  arsh64 r4, 63
  ldxdw r6, [r10-88]
  add64 r4, r6
  add64 r4, r5
  arsh64 r1, 63
  add64 r4, r1
  add64 r4, r0
  mov64 r1, r4
  lsh64 r1, 16
  mov64 r5, r3
  rsh64 r5, 48
  or64 r5, r1
  arsh64 r4, 48
  lsh64 r3, 16
  mov64 r1, r3
  arsh64 r1, 63
  xor64 r4, r1
  xor64 r5, r1
  or64 r5, r4
  jne r5, 0, jmp_1bd08
  mov64 r1, r2
  rsh64 r1, 48
  or64 r3, r1
  lsh64 r2, 16
  ldxdw r1, [r10-112]
  rsh64 r1, 48
  or64 r2, r1
  mov64 r1, r10
  add64 r1, -48
  ldxdw r4, [r10-360]
  mov64 r5, r7
  call fn_0488
  ldxdw r1, [r10-48]
  jeq r1, 0, jmp_1c598

jmp_1bc80:
  ldxdw r2, [r10-32]
  ldxdw r1, [r10-40]
  ldxdw r5, [r9+32]
  mov64 r3, r5
  add64 r3, r1
  mov64 r1, 0
  mov64 r4, 1
  jlt r3, r5, jmp_1bcc8
  mov64 r4, 0

jmp_1bcc8:
  ldxdw r5, [r9+40]
  ja jmp_1c558

jmp_1bcd8:
  lddw r1, 1228360646656
  ja jmp_1b008

jmp_1bcf0:
  lddw r1, 1202590842880
  ja jmp_1b008

jmp_1bd08:
  lddw r1, 1275605286912
  ja jmp_1b008

jmp_1bd20:
  mov64 r9, 0
  mov64 r7, 0
  ja jmp_1c1f0

jmp_1bd38:
  mov64 r0, r6
  rsh64 r0, 1
  or64 r6, r0
  mov64 r0, r6
  rsh64 r0, 2
  or64 r6, r0
  mov64 r0, r6
  rsh64 r0, 4
  or64 r6, r0
  mov64 r0, r6
  rsh64 r0, 8
  or64 r6, r0
  mov64 r0, r6
  rsh64 r0, 16
  or64 r6, r0
  mov64 r0, r6
  rsh64 r0, 32
  or64 r6, r0
  xor64 r6, -1
  mov64 r0, r6
  rsh64 r0, 1
  and64 r0, r4
  sub64 r6, r0
  mov64 r4, r6
  and64 r4, r3
  rsh64 r6, 2
  and64 r6, r3
  add64 r4, r6
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  and64 r4, r2
  mul64 r4, r1
  rsh64 r4, 56

jmp_1be48:
  xor64 r4, -1
  and64 r4, 126
  mov64 r1, r10
  add64 r1, -288
  mov64 r6, 0
  mov64 r2, 1
  mov64 r3, 0
  call fn_30108
  ldxdw r1, [r10-280]
  ldxdw r2, [r10-288]
  mov64 r3, 0
  ja jmp_1bf30

jmp_1bea8:
  ldxdw r3, [r10-368]
  sub64 r3, r8
  stxdw [r10-368], r3
  ldxdw r3, [r10-384]
  add64 r7, r3
  ldxdw r3, [r10-360]
  sub64 r3, r4
  stxdw [r10-360], r3
  rsh64 r2, 2
  mov64 r3, r1
  lsh64 r3, 62
  or64 r2, r3
  rsh64 r1, 2
  and64 r0, 1
  mov64 r6, r9
  mov64 r3, r7
  jeq r0, 0, jmp_1c1c8

jmp_1bf30:
  mov64 r0, r2
  add64 r0, r6
  mov64 r5, 1
  jlt r0, r2, jmp_1bf58
  mov64 r5, 0

jmp_1bf58:
  mov64 r4, r1
  add64 r4, r3
  add64 r4, r5
  mov64 r5, 1
  ldxdw r7, [r10-368]
  jge r7, r4, jmp_1c0c8
  mov64 r8, 1
  ldxdw r9, [r10-360]
  jge r9, r0, jmp_1c0e8

jmp_1bfa0:
  jne r7, r4, jmp_1c0f8

jmp_1bfa8:
  mov64 r7, 0
  jeq r8, 0, jmp_1c110

jmp_1bfb8:
  mov64 r5, 0
  jeq r8, 0, jmp_1c128

jmp_1bfc8:
  mov64 r4, 0
  jeq r8, 0, jmp_1c140

jmp_1bfd8:
  stxdw [r10-376], r5
  mov64 r0, 0
  jne r8, 0, jmp_1bff8

jmp_1bff0:
  mov64 r0, r2

jmp_1bff8:
  rsh64 r6, 1
  mov64 r5, r3
  lsh64 r5, 63
  or64 r6, r5
  mov64 r9, r0
  add64 r9, r6
  mov64 r5, 1
  jge r9, r0, jmp_1c168
  stxdw [r10-384], r5
  mov64 r8, 1
  ldxdw r5, [r10-360]
  jge r5, r4, jmp_1c190

jmp_1c058:
  mov64 r0, 1
  jle r2, 3, jmp_1c1a8

jmp_1c068:
  mov64 r5, 1
  jne r1, 0, jmp_1c080

jmp_1c078:
  mov64 r5, 0

jmp_1c080:
  rsh64 r3, 1
  add64 r7, r3
  ldxdw r3, [r10-368]
  ldxdw r6, [r10-376]
  sub64 r3, r6
  stxdw [r10-368], r3
  jeq r1, 0, jmp_1bea8
  mov64 r0, r5
  ja jmp_1bea8

jmp_1c0c8:
  mov64 r5, 0
  mov64 r8, 1
  ldxdw r9, [r10-360]
  jlt r9, r0, jmp_1bfa0

jmp_1c0e8:
  mov64 r8, 0
  jeq r7, r4, jmp_1bfa8

jmp_1c0f8:
  mov64 r8, r5
  mov64 r7, 0
  jne r8, 0, jmp_1bfb8

jmp_1c110:
  mov64 r7, r1
  mov64 r5, 0
  jne r8, 0, jmp_1bfc8

jmp_1c128:
  mov64 r5, r4
  mov64 r4, 0
  jne r8, 0, jmp_1bfd8

jmp_1c140:
  mov64 r4, r0
  stxdw [r10-376], r5
  mov64 r0, 0
  jeq r8, 0, jmp_1bff0
  ja jmp_1bff8

jmp_1c168:
  mov64 r5, 0
  stxdw [r10-384], r5
  mov64 r8, 1
  ldxdw r5, [r10-360]
  jlt r5, r4, jmp_1c058

jmp_1c190:
  mov64 r8, 0
  mov64 r0, 1
  jgt r2, 3, jmp_1c068

jmp_1c1a8:
  mov64 r0, 0
  mov64 r5, 1
  jeq r1, 0, jmp_1c078
  ja jmp_1c080

jmp_1c1c8:
  lsh64 r7, 24
  mov64 r1, r9
  rsh64 r1, 40
  or64 r7, r1
  lsh64 r9, 24

jmp_1c1f0:
  mov64 r5, r9
  arsh64 r5, 63
  ldxdw r2, [r10-392]
  mov64 r3, r2
  arsh64 r3, 63
  stxdw [r10-368], r3
  mov64 r1, r10
  add64 r1, -352
  mov64 r4, r9
  stxdw [r10-360], r5
  call fn_30150
  and64 r9, -16777216
  mov64 r1, r10
  add64 r1, -336
  mov64 r2, r9
  mov64 r3, 0
  ldxdw r9, [r10-416]
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r6, r9
  arsh64 r6, 63
  mov64 r8, r7
  arsh64 r8, 63
  mov64 r1, r10
  add64 r1, -304
  mov64 r2, r7
  mov64 r3, r8
  mov64 r4, r9
  mov64 r5, r6
  call fn_30150
  mov64 r1, r10
  add64 r1, -320
  mov64 r2, r7
  mov64 r3, r8
  ldxdw r4, [r10-392]
  ldxdw r5, [r10-368]
  call fn_30150
  and64 r6, r7
  ldxdw r3, [r10-296]
  add64 r3, r6
  ldxdw r1, [r10-328]
  ldxdw r2, [r10-352]
  mov64 r4, r2
  add64 r4, r1
  ldxdw r6, [r10-304]
  mov64 r1, r6
  add64 r1, r4
  mov64 r5, 1
  mov64 r0, 1
  jlt r1, r6, jmp_1c390
  mov64 r0, 0

jmp_1c390:
  add64 r3, r0
  mov64 r0, 1
  ldxdw r8, [r10-400]
  ldxdw r7, [r10-408]
  jlt r4, r2, jmp_1c3c0
  mov64 r0, 0

jmp_1c3c0:
  ldxdw r2, [r10-392]
  ldxdw r6, [r10-360]
  and64 r6, r2
  ldxdw r4, [r10-344]
  add64 r4, r6
  add64 r4, r0
  ldxdw r2, [r10-320]
  mov64 r6, r4
  add64 r6, r2
  mov64 r2, r6
  add64 r2, r3
  mov64 r0, 1
  jlt r2, r6, jmp_1c430
  mov64 r0, 0

jmp_1c430:
  jlt r6, r4, jmp_1c440
  mov64 r5, 0

jmp_1c440:
  arsh64 r4, 63
  ldxdw r6, [r10-312]
  add64 r4, r6
  add64 r4, r5
  arsh64 r3, 63
  add64 r4, r3
  add64 r4, r0
  mov64 r3, r4
  lsh64 r3, 16
  mov64 r5, r2
  rsh64 r5, 48
  or64 r5, r3
  arsh64 r4, 48
  lsh64 r2, 16
  mov64 r3, r2
  arsh64 r3, 63
  xor64 r4, r3
  xor64 r5, r3
  or64 r5, r4
  jne r5, 0, jmp_1c580
  mov64 r3, r1
  rsh64 r3, 48
  or64 r2, r3
  lsh64 r1, 16
  ldxdw r3, [r10-336]

jmp_1c508:
  rsh64 r3, 48
  or64 r1, r3
  ldxdw r5, [r7+32]
  mov64 r3, r5
  add64 r3, r1
  mov64 r1, 0
  mov64 r4, 1
  jlt r3, r5, jmp_1c550
  mov64 r4, 0

jmp_1c550:
  ldxdw r5, [r7+40]

jmp_1c558:
  stxdw [r8+8], r3
  add64 r5, r2
  add64 r5, r4
  stxdw [r8+16], r5
  ja jmp_1b018

jmp_1c580:
  lddw r1, 1181116006400
  ja jmp_1b008

jmp_1c598:
  lddw r1, 1288490188800
  ja jmp_1b008

jmp_1c5b0:
  lddw r1, 206424
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  lddw r2, 206440
  call fn_2de88  ; → → custom_panic

fn_1c610:  ; → sol_log_
  mov64 r7, r5
  mov64 r8, r4
  mov64 r6, r1
  stxdw [r10-32], r3
  stxdw [r10-40], r2
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  call fn_231b8
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  stxdw [r10-48], r8
  ldxdw r8, [r7-4080]
  ldxdw r9, [r7-4088]
  ldxdw r7, [r7-4096]
  ldxdw r1, [r10-8]
  stxdw [r10-56], r1
  ldxdw r1, [r10-16]
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  call fn_23b48
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  stxdw [r10-72], r8
  ldxdw r1, [r10-8]
  stxdw [r10-88], r1
  ldxdw r1, [r10-16]
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  ldxdw r8, [r10-48]
  mov64 r3, r8
  call fn_1d720
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  ldxdw r1, [r10-8]
  stxdw [r10-104], r1
  ldxdw r1, [r10-16]
  stxdw [r10-96], r1
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  mov64 r3, r8
  call fn_1f4f0
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  ldxdw r1, [r10-8]
  stxdw [r10-120], r1
  ldxdw r1, [r10-16]
  stxdw [r10-112], r1
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  mov64 r3, r8
  mov64 r4, r7
  mov64 r5, r9
  call fn_20d70
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  ldxdw r9, [r10-8]
  ldxdw r7, [r10-16]
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  mov64 r3, r8
  call fn_22288
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  stxdw [r10-128], r7
  ldxdw r7, [r10-8]
  ldxdw r8, [r10-16]
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  call fn_1f270
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  stxdw [r10-136], r9
  stxdw [r10-152], r8
  stxdw [r10-144], r7
  ldxdw r9, [r10-8]
  ldxdw r7, [r10-16]
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  ldxdw r3, [r10-72]
  call fn_256f0
  ldxw r1, [r10-24]
  jeq r1, 0, jmp_1c960

jmp_1c930:
  ldxw r1, [r10-16]
  ldxw r0, [r10-20]

jmp_1c940:
  stxw [r6+8], r1
  stxw [r6+4], r0
  stw [r6+0], 1

jmp_1c958:
  exit

jmp_1c960:
  mov64 r2, 1
  ldxdw r0, [r10-64]
  ldxdw r1, [r10-80]
  jgt r0, r1, jmp_1c988
  mov64 r2, 0

jmp_1c988:
  mov64 r3, 1
  ldxdw r8, [r10-56]
  mov64 r1, r9
  stxdw [r10-72], r7
  ldxdw r5, [r10-120]
  ldxdw r4, [r10-88]
  jsle r8, r4, jmp_1cc20
  ldxdw r7, [r10-144]
  ldxdw r9, [r10-104]
  jne r8, r4, jmp_1cc40

jmp_1c9d8:
  jeq r2, 0, jmp_1cc50

jmp_1c9e0:
  jeq r2, 0, jmp_1cc60

jmp_1c9e8:
  mov64 r3, 1
  jsle r8, r9, jmp_1cc78

jmp_1c9f8:
  mov64 r2, 1
  ldxdw r4, [r10-96]
  jle r0, r4, jmp_1cc98

jmp_1ca10:
  jne r8, r9, jmp_1cca8

jmp_1ca18:
  jeq r2, 0, jmp_1ccb8

jmp_1ca20:
  jeq r2, 0, jmp_1ccc8

jmp_1ca28:
  mov64 r3, 1
  jsle r8, r5, jmp_1cce0

jmp_1ca38:
  mov64 r2, 1
  ldxdw r9, [r10-112]
  jle r0, r9, jmp_1cd00

jmp_1ca50:
  jne r8, r5, jmp_1cd10

jmp_1ca58:
  jeq r2, 0, jmp_1cd20

jmp_1ca60:
  jeq r2, 0, jmp_1cd30

jmp_1ca68:
  mov64 r3, 1
  ldxdw r2, [r10-136]
  jsle r8, r2, jmp_1cd50

jmp_1ca80:
  mov64 r2, 1
  ldxdw r5, [r10-128]
  jle r0, r5, jmp_1cd70

jmp_1ca98:
  ldxdw r5, [r10-136]
  jne r8, r5, jmp_1cd88

jmp_1caa8:
  jeq r2, 0, jmp_1cd98

jmp_1cab0:
  ldxdw r5, [r10-152]
  jeq r2, 0, jmp_1cdb0

jmp_1cac0:
  mov64 r3, 1
  jsle r8, r7, jmp_1cdc8

jmp_1cad0:
  mov64 r2, 1
  jle r0, r5, jmp_1cde0

jmp_1cae0:
  jne r8, r7, jmp_1cdf0

jmp_1cae8:
  jeq r2, 0, jmp_1ce00

jmp_1caf0:
  jeq r2, 0, jmp_1ce10

jmp_1caf8:
  mov64 r3, 1
  jsle r8, r1, jmp_1ce28

jmp_1cb08:
  mov64 r2, 1
  ldxdw r5, [r10-72]
  jle r0, r5, jmp_1ce48

jmp_1cb20:
  jne r8, r1, jmp_1ce58

jmp_1cb28:
  jeq r2, 0, jmp_1ce68

jmp_1cb30:
  jeq r2, 0, jmp_1ce78

jmp_1cb38:
  ldxdw r2, [r10-16]
  ldxdw r3, [r10-8]
  mov64 r5, 1
  jsle r8, r3, jmp_1cea0

jmp_1cb58:
  mov64 r4, 1
  mov64 r1, 1
  jle r0, r2, jmp_1cec0

jmp_1cb70:
  jne r8, r3, jmp_1ced0

jmp_1cb78:
  jeq r4, 0, jmp_1cee0

jmp_1cb80:
  jeq r4, 0, jmp_1cef0

jmp_1cb88:
  lddw r3, 281474976710655
  mov64 r2, 1
  jle r0, r3, jmp_1cf18

jmp_1cba8:
  mov64 r4, 1
  jsle r8, 0, jmp_1cf30

jmp_1cbb8:
  jne r8, 0, jmp_1cf40

jmp_1cbc0:
  mov64 r4, r0
  and64 r4, r3
  mov64 r3, 1
  jeq r4, 0, jmp_1cf68

jmp_1cbe0:
  lddw r4, 281474976710656
  jge r0, r4, jmp_1cf88

jmp_1cbf8:
  jne r8, 0, jmp_1cf98

jmp_1cc00:
  mov64 r9, r0
  and64 r2, 1
  jeq r2, 0, jmp_1cfb8
  ja jmp_1d098

jmp_1cc20:
  mov64 r3, 0
  ldxdw r7, [r10-144]
  ldxdw r9, [r10-104]
  jeq r8, r4, jmp_1c9d8

jmp_1cc40:
  mov64 r2, r3
  jne r2, 0, jmp_1c9e0

jmp_1cc50:
  ldxdw r0, [r10-80]
  jne r2, 0, jmp_1c9e8

jmp_1cc60:
  mov64 r8, r4
  mov64 r3, 1
  jsgt r8, r9, jmp_1c9f8

jmp_1cc78:
  mov64 r3, 0
  mov64 r2, 1
  ldxdw r4, [r10-96]
  jgt r0, r4, jmp_1ca10

jmp_1cc98:
  mov64 r2, 0
  jeq r8, r9, jmp_1ca18

jmp_1cca8:
  mov64 r2, r3
  jne r2, 0, jmp_1ca20

jmp_1ccb8:
  ldxdw r0, [r10-96]
  jne r2, 0, jmp_1ca28

jmp_1ccc8:
  mov64 r8, r9
  mov64 r3, 1
  jsgt r8, r5, jmp_1ca38

jmp_1cce0:
  mov64 r3, 0
  mov64 r2, 1
  ldxdw r9, [r10-112]
  jgt r0, r9, jmp_1ca50

jmp_1cd00:
  mov64 r2, 0
  jeq r8, r5, jmp_1ca58

jmp_1cd10:
  mov64 r2, r3
  jne r2, 0, jmp_1ca60

jmp_1cd20:
  ldxdw r0, [r10-112]
  jne r2, 0, jmp_1ca68

jmp_1cd30:
  mov64 r8, r5
  mov64 r3, 1
  ldxdw r2, [r10-136]
  jsgt r8, r2, jmp_1ca80

jmp_1cd50:
  mov64 r3, 0
  mov64 r2, 1
  ldxdw r5, [r10-128]
  jgt r0, r5, jmp_1ca98

jmp_1cd70:
  mov64 r2, 0
  ldxdw r5, [r10-136]
  jeq r8, r5, jmp_1caa8

jmp_1cd88:
  mov64 r2, r3
  jne r2, 0, jmp_1cab0

jmp_1cd98:
  ldxdw r0, [r10-128]
  ldxdw r5, [r10-152]
  jne r2, 0, jmp_1cac0

jmp_1cdb0:
  ldxdw r8, [r10-136]
  mov64 r3, 1
  jsgt r8, r7, jmp_1cad0

jmp_1cdc8:
  mov64 r3, 0
  mov64 r2, 1
  jgt r0, r5, jmp_1cae0

jmp_1cde0:
  mov64 r2, 0
  jeq r8, r7, jmp_1cae8

jmp_1cdf0:
  mov64 r2, r3
  jne r2, 0, jmp_1caf0

jmp_1ce00:
  mov64 r0, r5
  jne r2, 0, jmp_1caf8

jmp_1ce10:
  mov64 r8, r7
  mov64 r3, 1
  jsgt r8, r1, jmp_1cb08

jmp_1ce28:
  mov64 r3, 0
  mov64 r2, 1
  ldxdw r5, [r10-72]
  jgt r0, r5, jmp_1cb20

jmp_1ce48:
  mov64 r2, 0
  jeq r8, r1, jmp_1cb28

jmp_1ce58:
  mov64 r2, r3
  jne r2, 0, jmp_1cb30

jmp_1ce68:
  mov64 r0, r5
  jne r2, 0, jmp_1cb38

jmp_1ce78:
  mov64 r8, r1
  ldxdw r2, [r10-16]
  ldxdw r3, [r10-8]
  mov64 r5, 1
  jsgt r8, r3, jmp_1cb58

jmp_1cea0:
  mov64 r5, 0
  mov64 r4, 1
  mov64 r1, 1
  jgt r0, r2, jmp_1cb70

jmp_1cec0:
  mov64 r4, 0
  jeq r8, r3, jmp_1cb78

jmp_1ced0:
  mov64 r4, r5
  jne r4, 0, jmp_1cb80

jmp_1cee0:
  mov64 r8, r3
  jne r4, 0, jmp_1cb88

jmp_1cef0:
  mov64 r0, r2
  lddw r3, 281474976710655
  mov64 r2, 1
  jgt r0, r3, jmp_1cba8

jmp_1cf18:
  mov64 r2, 0
  mov64 r4, 1
  jsgt r8, 0, jmp_1cbb8

jmp_1cf30:
  mov64 r4, 0
  jeq r8, 0, jmp_1cbc0

jmp_1cf40:
  mov64 r2, r4
  mov64 r4, r0
  and64 r4, r3
  mov64 r3, 1
  jne r4, 0, jmp_1cbe0

jmp_1cf68:
  mov64 r3, 0
  lddw r4, 281474976710656
  jlt r0, r4, jmp_1cbf8

jmp_1cf88:
  mov64 r1, 0
  jeq r8, 0, jmp_1cc00

jmp_1cf98:
  mov64 r1, 0
  mov64 r9, r0
  and64 r2, 1
  jne r2, 0, jmp_1d098

jmp_1cfb8:
  and64 r1, r3
  and64 r1, 1
  jne r1, 0, jmp_1d098
  mov64 r1, r10
  add64 r1, -40
  lddw r2, data_00d0
  call fn_1d4e0
  mov64 r1, r0
  rsh64 r1, 32
  mov64 r2, r0
  lsh64 r2, 32
  rsh64 r2, 32
  jne r2, 26, jmp_1c940
  and64 r1, 1
  jeq r1, 0, jmp_1d358

jmp_1d038:
  mov64 r1, r10
  add64 r1, -24
  lddw r2, 309622474381721600
  mov64 r3, 0
  lddw r4, 281474976710656000
  mov64 r5, 0
  call fn_07e8  ; → → → custom_panic
  ldxdw r8, [r10-16]
  ldxdw r9, [r10-24]
  ja jmp_1d1b8

jmp_1d098:
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  call fn_24768
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  stxdw [r10-56], r8
  ldxdw r7, [r10-8]
  ldxdw r8, [r10-16]
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  ldxdw r3, [r10-48]
  call fn_25288
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  mov64 r3, r8
  add64 r3, r9
  mov64 r1, 1
  mov64 r2, 1
  jlt r3, r8, jmp_1d158
  mov64 r2, 0

jmp_1d158:
  ldxdw r4, [r10-16]
  mov64 r9, r3
  add64 r9, r4
  jlt r9, r3, jmp_1d180
  mov64 r1, 0

jmp_1d180:
  ldxdw r3, [r10-56]
  add64 r7, r3
  add64 r7, r2
  ldxdw r2, [r10-8]
  add64 r7, r2
  add64 r7, r1
  mov64 r8, r7

jmp_1d1b8:
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  call fn_24c18
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  stxdw [r10-56], r8
  ldxdw r7, [r10-8]
  ldxdw r8, [r10-16]
  mov64 r1, r10
  add64 r1, -24
  mov64 r2, r10
  add64 r2, -40
  call fn_250c8
  ldxw r1, [r10-24]
  jne r1, 0, jmp_1c930
  ldxdw r1, [r10-56]
  add64 r7, r1
  mov64 r2, r8
  add64 r2, r9
  mov64 r1, 1
  mov64 r3, 1
  jlt r2, r8, jmp_1d280
  mov64 r3, 0

jmp_1d280:
  add64 r7, r3
  ldxdw r3, [r10-8]
  add64 r7, r3
  ldxdw r3, [r10-16]
  mov64 r8, r2
  add64 r8, r3
  mov64 r3, 1
  jge r8, r2, jmp_1d3c8
  add64 r7, r3
  mov64 r3, 1
  jsle r7, 0, jmp_1d3e8

jmp_1d2d8:
  lddw r4, 281474976710655
  mov64 r2, 1
  jle r8, r4, jmp_1d410

jmp_1d2f8:
  jne r7, 0, jmp_1d420

jmp_1d300:
  mov64 r5, r8
  and64 r5, r4
  mov64 r3, 1
  jeq r5, 0, jmp_1d448

jmp_1d320:
  lddw r4, 281474976710656
  jge r8, r4, jmp_1d468

jmp_1d338:
  jne r7, 0, jmp_1d478

jmp_1d340:
  and64 r2, 1
  jeq r2, 0, jmp_1d490
  ja jmp_1d4a8

jmp_1d358:
  mov64 r1, r10
  add64 r1, -40
  lddw r2, data_0170
  call fn_1d4e0
  mov64 r1, r0
  rsh64 r1, 32
  mov64 r2, r0
  lsh64 r2, 32
  rsh64 r2, 32
  jne r2, 26, jmp_1c940
  and64 r1, 1
  jne r1, 0, jmp_1d038
  ja jmp_1d1b8

jmp_1d3c8:
  mov64 r3, 0
  add64 r7, r3
  mov64 r3, 1
  jsgt r7, 0, jmp_1d2d8

jmp_1d3e8:
  mov64 r3, 0
  lddw r4, 281474976710655
  mov64 r2, 1
  jgt r8, r4, jmp_1d2f8

jmp_1d410:
  mov64 r2, 0
  jeq r7, 0, jmp_1d300

jmp_1d420:
  mov64 r2, r3
  mov64 r5, r8
  and64 r5, r4
  mov64 r3, 1
  jne r5, 0, jmp_1d320

jmp_1d448:
  mov64 r3, 0
  lddw r4, 281474976710656
  jlt r8, r4, jmp_1d338

jmp_1d468:
  mov64 r1, 0
  jeq r7, 0, jmp_1d340

jmp_1d478:
  mov64 r1, 0
  and64 r2, 1
  jne r2, 0, jmp_1d4a8

jmp_1d490:
  and64 r1, r3
  and64 r1, 1
  jeq r1, 0, jmp_1d4c0

jmp_1d4a8:
  mov64 r1, 1
  mov64 r2, 0
  call sol_log_

jmp_1d4c0:
  stxdw [r6+8], r8
  stxdw [r6+16], r7
  stw [r6+0], 0
  ja jmp_1c958

fn_1d4e0:
  mov64 r0, 26
  ldxdw r3, [r1+0]
  ldxh r4, [r3+0]
  jeq r4, 0, jmp_1d708
  mov64 r5, r3
  add64 r5, 2
  stxdw [r10-16], r5
  ldxdw r1, [r1+8]
  mov64 r5, r3
  add64 r5, r1
  ldxh r1, [r5-2]
  stxdw [r10-8], r1
  mov64 r6, 0
  ja jmp_1d560

jmp_1d550:
  add64 r6, 1
  jge r6, r4, jmp_1d710

jmp_1d560:
  ldxdw r1, [r10-8]
  jeq r6, r1, jmp_1d550
  mov64 r5, r6
  lsh64 r5, 1
  ldxdw r7, [r10-16]
  add64 r7, r5
  ldxh r5, [r7+0]
  mov64 r7, r3
  add64 r7, r5
  ldxh r8, [r7+0]
  mov64 r5, r8
  mul64 r5, 33
  mov64 r9, r7
  add64 r9, r5
  ldxdw r5, [r9+2]
  ldxdw r0, [r2+0]
  jne r5, r0, jmp_1d638
  ldxdw r5, [r2+8]
  ldxdw r0, [r9+10]
  jne r0, r5, jmp_1d638
  ldxdw r5, [r2+16]
  ldxdw r0, [r9+18]
  jne r0, r5, jmp_1d638
  mov64 r5, 0
  ldxdw r0, [r2+24]
  ldxdw r9, [r9+26]
  jeq r9, r0, jmp_1d640

jmp_1d638:
  mov64 r5, 1

jmp_1d640:
  jeq r5, 0, jmp_1d6f8
  jeq r8, 0, jmp_1d550
  add64 r7, 3
  mov64 r9, 0

jmp_1d660:
  ldxdw r5, [r2+0]
  ldxdw r0, [r7+0]
  jne r0, r5, jmp_1d6c8
  ldxdw r5, [r2+8]
  ldxdw r0, [r7+8]
  jne r0, r5, jmp_1d6c8
  ldxdw r5, [r2+16]
  ldxdw r0, [r7+16]
  jne r0, r5, jmp_1d6c8
  mov64 r5, 0
  ldxdw r0, [r2+24]
  ldxdw r1, [r7+24]
  jeq r1, r0, jmp_1d6d0

jmp_1d6c8:
  mov64 r5, 1

jmp_1d6d0:
  jeq r5, 0, jmp_1d6f8
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_1d660
  ja jmp_1d550

jmp_1d6f8:
  lddw r0, 4294967322

jmp_1d708:
  exit

jmp_1d710:
  mov64 r0, 26
  ja jmp_1d708

fn_1d720:
  ldxdw r4, [r3+0]
  lddw r5, 7305039657759228123
  jne r4, r5, jmp_1d7a8
  ldxdw r4, [r3+8]
  lddw r5, -1601594878811822020
  jne r4, r5, jmp_1d7a8
  ldxdw r4, [r3+16]
  lddw r5, 1185619410891342939
  jne r4, r5, jmp_1d7a8
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 1742348105703426221
  jeq r5, r0, jmp_1d7b0

jmp_1d7a8:
  mov64 r4, 1

jmp_1d7b0:
  jeq r4, 0, jmp_1dac0
  ldxdw r4, [r3+0]
  lddw r5, -8235920495016551595
  jne r4, r5, jmp_1d840
  ldxdw r4, [r3+8]
  lddw r5, -5610469781006571872
  jne r4, r5, jmp_1d840
  ldxdw r4, [r3+16]
  lddw r5, 1727238378208721238
  jne r4, r5, jmp_1d840
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, -2911232226977275405
  jeq r5, r0, jmp_1d848

jmp_1d840:
  mov64 r4, 1

jmp_1d848:
  jeq r4, 0, jmp_1dac0
  ldxdw r4, [r3+0]
  lddw r5, -6591346611322462573
  jne r4, r5, jmp_1d8d8
  ldxdw r4, [r3+8]
  lddw r5, -3176709652405844609
  jne r4, r5, jmp_1d8d8
  ldxdw r4, [r3+16]
  lddw r5, 922090967597802374
  jne r4, r5, jmp_1d8d8
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 4226674759310673442
  jeq r5, r0, jmp_1d8e0

jmp_1d8d8:
  mov64 r4, 1

jmp_1d8e0:
  jeq r4, 0, jmp_1dac0
  ldxdw r4, [r3+0]
  lddw r5, 7874173867890827188
  jne r4, r5, jmp_1d970
  ldxdw r4, [r3+8]
  lddw r5, -1132585581382452828
  jne r4, r5, jmp_1d970
  ldxdw r4, [r3+16]
  lddw r5, -5312803544834949273
  jne r4, r5, jmp_1d970
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 5281251073679862249
  jeq r5, r0, jmp_1d978

jmp_1d970:
  mov64 r4, 1

jmp_1d978:
  jeq r4, 0, jmp_1dac0
  ldxdw r4, [r3+0]
  lddw r5, 6930720940887442178
  jne r4, r5, jmp_1da08
  ldxdw r4, [r3+8]
  lddw r5, -3469502795165426639
  jne r4, r5, jmp_1da08
  ldxdw r4, [r3+16]
  lddw r5, 6890132529701084737
  jne r4, r5, jmp_1da08
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 8372344075948972898
  jeq r5, r0, jmp_1da10

jmp_1da08:
  mov64 r4, 1

jmp_1da10:
  jeq r4, 0, jmp_1dac0
  ldxdw r4, [r3+0]
  lddw r5, -6522345590340665565
  jne r4, r5, jmp_1daa0
  ldxdw r4, [r3+8]
  lddw r5, 7587880836806149101
  jne r4, r5, jmp_1daa0
  ldxdw r4, [r3+16]
  lddw r5, -6517954304790411265
  jne r4, r5, jmp_1daa0
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 540062615221672785
  jeq r5, r0, jmp_1daa8

jmp_1daa0:
  mov64 r4, 1

jmp_1daa8:
  mov64 r5, 0
  mov64 r6, 0
  jne r4, 0, jmp_1e508

jmp_1dac0:
  mov64 r5, 0
  ldxdw r4, [r2+8]
  ldxdw r2, [r2+0]
  mov64 r0, r2
  add64 r0, r4
  ldxh r0, [r0-2]
  ldxh r4, [r2+0]
  mov64 r6, 0
  jle r4, r0, jmp_1e508
  lsh64 r0, 1
  mov64 r5, r2
  add64 r5, r0
  ldxh r0, [r5+2]
  mov64 r5, r2
  add64 r5, r0
  ldxh r0, [r5+0]
  mul64 r0, 33
  add64 r5, r0
  ldxdw r0, [r5+2]
  lddw r6, 5220724072241619893
  jne r0, r6, jmp_1dbd8
  ldxdw r0, [r5+10]
  lddw r6, -2959324894810010007
  jne r0, r6, jmp_1dbd8
  ldxdw r0, [r5+18]
  lddw r6, 6969507811222894677
  jne r0, r6, jmp_1dbd8
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, 1170021923126530224
  jeq r6, r7, jmp_1dbe0

jmp_1dbd8:
  mov64 r0, 1

jmp_1dbe0:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -2198765913588964427
  jne r0, r6, jmp_1dc70
  ldxdw r0, [r5+10]
  lddw r6, -5905105312569969003
  jne r0, r6, jmp_1dc70
  ldxdw r0, [r5+18]
  lddw r6, 684904381118562216
  jne r0, r6, jmp_1dc70
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, 4678717296310286314
  jeq r6, r7, jmp_1dc78

jmp_1dc70:
  mov64 r0, 1

jmp_1dc78:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, 7980433456693082372
  jne r0, r6, jmp_1dd08
  ldxdw r0, [r5+10]
  lddw r6, 510429368607405294
  jne r0, r6, jmp_1dd08
  ldxdw r0, [r5+18]
  lddw r6, 5876903548418175485
  jne r0, r6, jmp_1dd08
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -8136953021443755774
  jeq r6, r7, jmp_1dd10

jmp_1dd08:
  mov64 r0, 1

jmp_1dd10:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, 8168280107505291781
  jne r0, r6, jmp_1dda0
  ldxdw r0, [r5+10]
  lddw r6, -4592847231699258499
  jne r0, r6, jmp_1dda0
  ldxdw r0, [r5+18]
  lddw r6, -1258827676327456798
  jne r0, r6, jmp_1dda0
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -5085587352091431873
  jeq r6, r7, jmp_1dda8

jmp_1dda0:
  mov64 r0, 1

jmp_1dda8:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -4280153130667228406
  jne r0, r6, jmp_1de38
  ldxdw r0, [r5+10]
  lddw r6, 8480720561057976597
  jne r0, r6, jmp_1de38
  ldxdw r0, [r5+18]
  lddw r6, 7461006668826005640
  jne r0, r6, jmp_1de38
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -1412322337336563229
  jeq r6, r7, jmp_1de40

jmp_1de38:
  mov64 r0, 1

jmp_1de40:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, 1399876914085531989
  jne r0, r6, jmp_1ded0
  ldxdw r0, [r5+10]
  lddw r6, 3750823436284799567
  jne r0, r6, jmp_1ded0
  ldxdw r0, [r5+18]
  lddw r6, -3070781618096322690
  jne r0, r6, jmp_1ded0
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, 7606355701935812049
  jeq r6, r7, jmp_1ded8

jmp_1ded0:
  mov64 r0, 1

jmp_1ded8:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -1632001642340221574
  jne r0, r6, jmp_1df68
  ldxdw r0, [r5+10]
  lddw r6, 8827510275200544966
  jne r0, r6, jmp_1df68
  ldxdw r0, [r5+18]
  lddw r6, 7913477912056730528
  jne r0, r6, jmp_1df68
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -3189807322954948524
  jeq r6, r7, jmp_1df70

jmp_1df68:
  mov64 r0, 1

jmp_1df70:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -4967779272591890170
  jne r0, r6, jmp_1e000
  ldxdw r0, [r5+10]
  lddw r6, 7966950530949584949
  jne r0, r6, jmp_1e000
  ldxdw r0, [r5+18]
  lddw r6, 3039776121969245976
  jne r0, r6, jmp_1e000
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -3113807682611379106
  jeq r6, r7, jmp_1e008

jmp_1e000:
  mov64 r0, 1

jmp_1e008:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -5747981566769578293
  jne r0, r6, jmp_1e098
  ldxdw r0, [r5+10]
  lddw r6, 5020578267535386987
  jne r0, r6, jmp_1e098
  ldxdw r0, [r5+18]
  lddw r6, 6428496260637191791
  jne r0, r6, jmp_1e098
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, 4811983434563935851
  jeq r6, r7, jmp_1e0a0

jmp_1e098:
  mov64 r0, 1

jmp_1e0a0:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -2103798496248350451
  jne r0, r6, jmp_1e130
  ldxdw r0, [r5+10]
  lddw r6, 7460384090950721156
  jne r0, r6, jmp_1e130
  ldxdw r0, [r5+18]
  lddw r6, 6225909620063481131
  jne r0, r6, jmp_1e130
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, 6091967181996833443
  jeq r6, r7, jmp_1e138

jmp_1e130:
  mov64 r0, 1

jmp_1e138:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -7794643231621059372
  jne r0, r6, jmp_1e1c8
  ldxdw r0, [r5+10]
  lddw r6, 1690746628767058523
  jne r0, r6, jmp_1e1c8
  ldxdw r0, [r5+18]
  lddw r6, 7999319151635705803
  jne r0, r6, jmp_1e1c8
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -6852716169369644997
  jeq r6, r7, jmp_1e1d0

jmp_1e1c8:
  mov64 r0, 1

jmp_1e1d0:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -1995264692610322277
  jne r0, r6, jmp_1e260
  ldxdw r0, [r5+10]
  lddw r6, 7247355053740244306
  jne r0, r6, jmp_1e260
  ldxdw r0, [r5+18]
  lddw r6, 2750605575308327169
  jne r0, r6, jmp_1e260
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, 6620906231919047251
  jeq r6, r7, jmp_1e268

jmp_1e260:
  mov64 r0, 1

jmp_1e268:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -553784691457834484
  jne r0, r6, jmp_1e2f8
  ldxdw r0, [r5+10]
  lddw r6, 3307855567893720341
  jne r0, r6, jmp_1e2f8
  ldxdw r0, [r5+18]
  lddw r6, 7759680424013031670
  jne r0, r6, jmp_1e2f8
  mov64 r0, 0
  ldxdw r6, [r5+26]
  lddw r7, -3974045808917541545
  jeq r6, r7, jmp_1e300

jmp_1e2f8:
  mov64 r0, 1

jmp_1e300:
  jeq r0, 0, jmp_1e4f8
  ldxdw r0, [r5+2]
  lddw r6, -3975646754120086780
  jne r0, r6, jmp_1e390
  ldxdw r0, [r5+10]
  lddw r6, 8278757209229882069
  jne r0, r6, jmp_1e390
  ldxdw r0, [r5+18]
  lddw r6, 4820819358789892100
  jne r0, r6, jmp_1e390
  mov64 r0, 0
  ldxdw r5, [r5+26]
  lddw r6, -4222439958873533581
  jeq r5, r6, jmp_1e398

jmp_1e390:
  mov64 r0, 1

jmp_1e398:
  jeq r0, 0, jmp_1e4f8
  lddw r5, 1742348105703426221
  stxdw [r10-40], r5
  lddw r5, 1185619410891342939
  stxdw [r10-48], r5
  lddw r5, -1601594878811822020
  stxdw [r10-56], r5
  lddw r5, 7305039657759228123
  stxdw [r10-64], r5
  ldxdw r0, [r3+0]
  jne r0, r5, jmp_1e460
  ldxdw r5, [r3+8]
  ldxdw r0, [r10-56]
  jne r0, r5, jmp_1e460
  ldxdw r5, [r3+16]
  ldxdw r0, [r10-48]
  jne r0, r5, jmp_1e460
  mov64 r0, 0
  ldxdw r5, [r3+24]
  ldxdw r6, [r10-40]
  jeq r6, r5, jmp_1e468

jmp_1e460:
  mov64 r0, 1

jmp_1e468:
  mov64 r5, r2
  add64 r5, 2
  stxdw [r10-72], r5
  jeq r0, 0, jmp_1e630
  lddw r0, 1742348105703426221
  stxdw [r10-8], r0
  lddw r0, 1185619410891342939
  stxdw [r10-16], r0
  lddw r0, -1601594878811822020
  stxdw [r10-24], r0
  lddw r0, 7305039657759228123
  stxdw [r10-32], r0
  mov64 r6, 0
  ja jmp_1e540

jmp_1e4f8:
  mov64 r5, 0
  mov64 r6, 0

jmp_1e508:
  stxdw [r1+8], r5
  stxdw [r1+16], r6
  stw [r1+0], 0
  exit

jmp_1e528:
  ldxdw r6, [r10-80]
  add64 r6, 1
  jge r6, r4, jmp_1e630

jmp_1e540:
  stxdw [r10-80], r6
  lsh64 r6, 1
  ldxdw r7, [r10-72]
  add64 r7, r6
  ldxh r7, [r7+0]
  mov64 r6, r2
  add64 r6, r7
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_1e528
  add64 r6, 3
  mov64 r8, 0

jmp_1e598:
  ldxdw r9, [r6+0]
  ldxdw r5, [r10-32]
  jne r9, r5, jmp_1e600
  ldxdw r5, [r6+8]
  ldxdw r9, [r10-24]
  jne r5, r9, jmp_1e600
  ldxdw r5, [r6+16]
  ldxdw r9, [r10-16]
  jne r5, r9, jmp_1e600
  mov64 r9, 0
  ldxdw r5, [r6+24]
  ldxdw r0, [r10-8]
  jeq r5, r0, jmp_1e608

jmp_1e600:
  mov64 r9, 1

jmp_1e608:
  jeq r9, 0, jmp_1f1c8
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_1e598
  ja jmp_1e528

jmp_1e630:
  lddw r5, -2911232226977275405
  stxdw [r10-40], r5
  lddw r5, 1727238378208721238
  stxdw [r10-48], r5
  lddw r5, -5610469781006571872
  stxdw [r10-56], r5
  lddw r5, -8235920495016551595
  stxdw [r10-64], r5
  ldxdw r0, [r3+0]
  jne r0, r5, jmp_1e6f0
  ldxdw r5, [r3+8]
  ldxdw r0, [r10-56]
  jne r0, r5, jmp_1e6f0
  ldxdw r5, [r3+16]
  ldxdw r0, [r10-48]
  jne r0, r5, jmp_1e6f0
  mov64 r0, 0
  ldxdw r5, [r3+24]
  ldxdw r6, [r10-40]
  jeq r6, r5, jmp_1e6f8

jmp_1e6f0:
  mov64 r0, 1

jmp_1e6f8:
  jeq r0, 0, jmp_1e878
  lddw r5, -2911232226977275405
  stxdw [r10-8], r5
  lddw r5, 1727238378208721238
  stxdw [r10-16], r5
  lddw r5, -5610469781006571872
  stxdw [r10-24], r5
  lddw r5, -8235920495016551595
  stxdw [r10-32], r5
  mov64 r5, 0
  ja jmp_1e788

jmp_1e770:
  ldxdw r5, [r10-80]
  add64 r5, 1
  jge r5, r4, jmp_1e878

jmp_1e788:
  stxdw [r10-80], r5
  lsh64 r5, 1
  ldxdw r6, [r10-72]
  add64 r6, r5
  ldxh r5, [r6+0]
  mov64 r6, r2
  add64 r6, r5
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_1e770
  add64 r6, 3
  mov64 r8, 0

jmp_1e7e0:
  ldxdw r5, [r6+0]
  ldxdw r9, [r10-32]
  jne r5, r9, jmp_1e848
  ldxdw r5, [r6+8]
  ldxdw r9, [r10-24]
  jne r5, r9, jmp_1e848
  ldxdw r5, [r6+16]
  ldxdw r9, [r10-16]
  jne r5, r9, jmp_1e848
  mov64 r9, 0
  ldxdw r5, [r6+24]
  ldxdw r0, [r10-8]
  jeq r5, r0, jmp_1e850

jmp_1e848:
  mov64 r9, 1

jmp_1e850:
  jeq r9, 0, jmp_1f1c8
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_1e7e0
  ja jmp_1e770

jmp_1e878:
  stxdw [r10-88], r1
  lddw r1, 4226674759310673442
  stxdw [r10-40], r1
  lddw r1, 922090967597802374
  stxdw [r10-48], r1
  lddw r1, -3176709652405844609
  stxdw [r10-56], r1
  lddw r1, -6591346611322462573
  stxdw [r10-64], r1
  ldxdw r5, [r3+0]
  jne r5, r1, jmp_1e940
  ldxdw r1, [r3+8]
  ldxdw r5, [r10-56]
  jne r5, r1, jmp_1e940
  ldxdw r1, [r3+16]
  ldxdw r5, [r10-48]
  jne r5, r1, jmp_1e940
  mov64 r1, 0
  ldxdw r5, [r3+24]
  ldxdw r0, [r10-40]
  jeq r0, r5, jmp_1e948

jmp_1e940:
  mov64 r1, 1

jmp_1e948:
  jeq r1, 0, jmp_1ead0
  lddw r1, 4226674759310673442
  stxdw [r10-8], r1
  lddw r1, 922090967597802374
  stxdw [r10-16], r1
  lddw r1, -3176709652405844609
  stxdw [r10-24], r1
  lddw r1, -6591346611322462573
  stxdw [r10-32], r1
  mov64 r5, 0
  ldxdw r1, [r10-88]
  ja jmp_1e9e0

jmp_1e9c8:
  ldxdw r5, [r10-80]
  add64 r5, 1
  jge r5, r4, jmp_1ead0

jmp_1e9e0:
  stxdw [r10-80], r5
  lsh64 r5, 1
  ldxdw r0, [r10-72]
  add64 r0, r5
  ldxh r5, [r0+0]
  mov64 r7, r2
  add64 r7, r5
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_1e9c8
  add64 r7, 3
  mov64 r9, 0

jmp_1ea38:
  ldxdw r5, [r7+0]
  ldxdw r0, [r10-32]
  jne r5, r0, jmp_1eaa0
  ldxdw r5, [r7+8]
  ldxdw r0, [r10-24]
  jne r5, r0, jmp_1eaa0
  ldxdw r5, [r7+16]
  ldxdw r0, [r10-16]
  jne r5, r0, jmp_1eaa0
  mov64 r0, 0
  ldxdw r5, [r7+24]
  ldxdw r6, [r10-8]
  jeq r5, r6, jmp_1eaa8

jmp_1eaa0:
  mov64 r0, 1

jmp_1eaa8:
  jeq r0, 0, jmp_1f1c8
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_1ea38
  ja jmp_1e9c8

jmp_1ead0:
  lddw r1, 5281251073679862249
  stxdw [r10-40], r1
  lddw r1, -5312803544834949273
  stxdw [r10-48], r1
  lddw r1, -1132585581382452828
  stxdw [r10-56], r1
  lddw r1, 7874173867890827188
  stxdw [r10-64], r1
  ldxdw r5, [r3+0]
  jne r5, r1, jmp_1eb90
  ldxdw r1, [r3+8]
  ldxdw r5, [r10-56]
  jne r5, r1, jmp_1eb90
  ldxdw r1, [r3+16]
  ldxdw r5, [r10-48]
  jne r5, r1, jmp_1eb90
  mov64 r1, 0
  ldxdw r5, [r3+24]
  ldxdw r0, [r10-40]
  jeq r0, r5, jmp_1eb98

jmp_1eb90:
  mov64 r1, 1

jmp_1eb98:
  jeq r1, 0, jmp_1ed20
  lddw r1, 5281251073679862249
  stxdw [r10-8], r1
  lddw r1, -5312803544834949273
  stxdw [r10-16], r1
  lddw r1, -1132585581382452828
  stxdw [r10-24], r1
  lddw r1, 7874173867890827188
  stxdw [r10-32], r1
  mov64 r5, 0
  ldxdw r1, [r10-88]
  ja jmp_1ec30

jmp_1ec18:
  ldxdw r5, [r10-80]
  add64 r5, 1
  jge r5, r4, jmp_1ed20

jmp_1ec30:
  stxdw [r10-80], r5
  lsh64 r5, 1
  ldxdw r0, [r10-72]
  add64 r0, r5
  ldxh r5, [r0+0]
  mov64 r7, r2
  add64 r7, r5
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_1ec18
  add64 r7, 3
  mov64 r9, 0

jmp_1ec88:
  ldxdw r5, [r7+0]
  ldxdw r0, [r10-32]
  jne r5, r0, jmp_1ecf0
  ldxdw r5, [r7+8]
  ldxdw r0, [r10-24]
  jne r5, r0, jmp_1ecf0
  ldxdw r5, [r7+16]
  ldxdw r0, [r10-16]
  jne r5, r0, jmp_1ecf0
  mov64 r0, 0
  ldxdw r5, [r7+24]
  ldxdw r6, [r10-8]
  jeq r5, r6, jmp_1ecf8

jmp_1ecf0:
  mov64 r0, 1

jmp_1ecf8:
  jeq r0, 0, jmp_1f1c8
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_1ec88
  ja jmp_1ec18

jmp_1ed20:
  lddw r1, 8372344075948972898
  stxdw [r10-40], r1
  lddw r1, 6890132529701084737
  stxdw [r10-48], r1
  lddw r1, -3469502795165426639
  stxdw [r10-56], r1
  lddw r1, 6930720940887442178
  stxdw [r10-64], r1
  ldxdw r5, [r3+0]
  jne r5, r1, jmp_1ede0
  ldxdw r1, [r3+8]
  ldxdw r5, [r10-56]
  jne r5, r1, jmp_1ede0
  ldxdw r1, [r3+16]
  ldxdw r5, [r10-48]
  jne r5, r1, jmp_1ede0
  mov64 r1, 0
  ldxdw r5, [r3+24]
  ldxdw r0, [r10-40]
  jeq r0, r5, jmp_1ede8

jmp_1ede0:
  mov64 r1, 1

jmp_1ede8:
  jeq r1, 0, jmp_1ef80
  lddw r1, 8372344075948972898
  stxdw [r10-8], r1
  lddw r1, 6890132529701084737
  stxdw [r10-16], r1
  lddw r1, -3469502795165426639
  stxdw [r10-24], r1
  lddw r1, 6930720940887442178
  stxdw [r10-32], r1
  mov64 r1, 0
  stxdw [r10-80], r1
  ja jmp_1ee88

jmp_1ee68:
  ldxdw r1, [r10-80]
  add64 r1, 1
  stxdw [r10-80], r1
  jge r1, r4, jmp_1ef80

jmp_1ee88:
  ldxdw r1, [r10-80]
  lsh64 r1, 1
  ldxdw r5, [r10-72]
  add64 r5, r1
  ldxh r1, [r5+0]
  mov64 r7, r2
  add64 r7, r1
  ldxh r8, [r7+0]
  ldxdw r1, [r10-88]
  jeq r8, 0, jmp_1ee68
  add64 r7, 3
  mov64 r9, 0

jmp_1eee8:
  ldxdw r5, [r7+0]
  ldxdw r0, [r10-32]
  jne r5, r0, jmp_1ef50
  ldxdw r5, [r7+8]
  ldxdw r0, [r10-24]
  jne r5, r0, jmp_1ef50
  ldxdw r5, [r7+16]
  ldxdw r0, [r10-16]
  jne r5, r0, jmp_1ef50
  mov64 r0, 0
  ldxdw r5, [r7+24]
  ldxdw r6, [r10-8]
  jeq r5, r6, jmp_1ef58

jmp_1ef50:
  mov64 r0, 1

jmp_1ef58:
  jeq r0, 0, jmp_1f1c8
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_1eee8
  ja jmp_1ee68

jmp_1ef80:
  lddw r1, 540062615221672785
  stxdw [r10-40], r1
  lddw r1, -6517954304790411265
  stxdw [r10-48], r1
  lddw r1, 7587880836806149101
  stxdw [r10-56], r1
  lddw r1, -6522345590340665565
  stxdw [r10-64], r1
  ldxdw r5, [r3+0]
  jne r5, r1, jmp_1f040
  ldxdw r1, [r3+8]
  ldxdw r5, [r10-56]
  jne r5, r1, jmp_1f040
  ldxdw r1, [r3+16]
  ldxdw r5, [r10-48]
  jne r5, r1, jmp_1f040
  mov64 r1, 0
  ldxdw r3, [r3+24]
  ldxdw r5, [r10-40]
  jeq r5, r3, jmp_1f048

jmp_1f040:
  mov64 r1, 1

jmp_1f048:
  jeq r1, 0, jmp_1f250
  lddw r1, 540062615221672785
  stxdw [r10-8], r1
  lddw r1, -6517954304790411265
  stxdw [r10-16], r1
  lddw r1, 7587880836806149101
  stxdw [r10-24], r1
  lddw r1, -6522345590340665565
  stxdw [r10-32], r1
  mov64 r3, 0
  ja jmp_1f0d0

jmp_1f0c0:
  add64 r3, 1
  jge r3, r4, jmp_1f250

jmp_1f0d0:
  mov64 r1, r3
  lsh64 r1, 1
  ldxdw r5, [r10-72]
  add64 r5, r1
  ldxh r1, [r5+0]
  mov64 r6, r2
  add64 r6, r1
  ldxh r7, [r6+0]
  ldxdw r1, [r10-88]
  jeq r7, 0, jmp_1f0c0
  add64 r6, 3
  mov64 r8, 0

jmp_1f130:
  ldxdw r5, [r6+0]
  ldxdw r0, [r10-32]
  jne r5, r0, jmp_1f198
  ldxdw r5, [r6+8]
  ldxdw r0, [r10-24]
  jne r5, r0, jmp_1f198
  ldxdw r5, [r6+16]
  ldxdw r0, [r10-16]
  jne r5, r0, jmp_1f198
  mov64 r0, 0
  ldxdw r5, [r6+24]
  ldxdw r9, [r10-8]
  jeq r5, r9, jmp_1f1a0

jmp_1f198:
  mov64 r0, 1

jmp_1f1a0:
  jeq r0, 0, jmp_1f1c8
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_1f130
  ja jmp_1f0c0

jmp_1f1c8:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r2, r10
  add64 r2, -32
  mov64 r5, r10
  mov64 r6, r1
  mov64 r1, r2
  lddw r2, 56294995342131200
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  mov64 r1, r6
  ldxdw r6, [r10-24]
  ldxdw r5, [r10-32]
  ja jmp_1e508

jmp_1f250:
  mov64 r5, 0
  mov64 r6, 0
  ldxdw r1, [r10-88]
  ja jmp_1e508

fn_1f270:
  ldxdw r7, [r2+0]
  ldxh r2, [r7+0]
  stxdw [r10-40], r2
  jeq r2, 0, jmp_1f448
  stxdw [r10-56], r1
  mov64 r8, r7
  add64 r8, 2
  mov64 r2, 0
  mov64 r9, 0
  stxdw [r10-48], r7
  ja jmp_1f310

jmp_1f2c8:
  mov64 r1, 1
  ldxdw r2, [r10-32]
  jne r2, 0, jmp_1f460

jmp_1f2e0:
  add64 r8, 2
  add64 r9, 1
  mov64 r2, r1
  ldxdw r7, [r10-48]
  ldxdw r1, [r10-40]
  jge r9, r1, jmp_1f430

jmp_1f310:
  stxdw [r10-32], r2
  ldxh r1, [r8+0]
  add64 r7, r1
  ldxh r1, [r7+0]
  mul64 r1, 33
  add64 r7, r1
  ldxh r3, [r7+34]
  mov64 r6, r7
  add64 r6, 2
  mov64 r2, r7
  add64 r2, 36
  mov64 r1, r6
  call fn_15fe0
  ldxdw r1, [r7+2]
  lddw r2, -553784691457834484
  jne r1, r2, jmp_1f400
  ldxdw r1, [r6+8]
  lddw r2, 3307855567893720341
  jne r1, r2, jmp_1f400
  ldxdw r1, [r6+16]
  lddw r2, 7759680424013031670
  jne r1, r2, jmp_1f400
  mov64 r1, 0
  ldxdw r2, [r6+24]
  lddw r3, -3974045808917541545
  jeq r2, r3, jmp_1f408

jmp_1f400:
  mov64 r1, 1

jmp_1f408:
  jeq r1, 0, jmp_1f2c8
  and64 r0, 255
  jne r0, 13, jmp_1f2c8
  ldxdw r1, [r10-32]
  ja jmp_1f2e0

jmp_1f430:
  mov64 r3, 0
  mov64 r2, 0
  ja jmp_1f4c8

jmp_1f448:
  mov64 r3, 0
  mov64 r2, 0
  ja jmp_1f4d0

jmp_1f460:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r1, r10
  add64 r1, -24
  mov64 r5, r10
  lddw r2, 56294995342131200
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r2, [r10-16]
  ldxdw r3, [r10-24]

jmp_1f4c8:
  ldxdw r1, [r10-56]

jmp_1f4d0:
  stxdw [r1+8], r3
  stxdw [r1+16], r2
  stw [r1+0], 0
  exit

fn_1f4f0:
  mov64 r7, r1
  ldxdw r4, [r3+0]
  lddw r5, 7305039657759228123
  jne r4, r5, jmp_1f580
  ldxdw r4, [r3+8]
  lddw r5, -1601594878811822020
  jne r4, r5, jmp_1f580
  ldxdw r4, [r3+16]
  lddw r5, 1185619410891342939
  jne r4, r5, jmp_1f580
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 1742348105703426221
  jeq r5, r0, jmp_1f588

jmp_1f580:
  mov64 r4, 1

jmp_1f588:
  jeq r4, 0, jmp_1f898
  ldxdw r4, [r3+0]
  lddw r5, -8235920495016551595
  jne r4, r5, jmp_1f618
  ldxdw r4, [r3+8]
  lddw r5, -5610469781006571872
  jne r4, r5, jmp_1f618
  ldxdw r4, [r3+16]
  lddw r5, 1727238378208721238
  jne r4, r5, jmp_1f618
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, -2911232226977275405
  jeq r5, r0, jmp_1f620

jmp_1f618:
  mov64 r4, 1

jmp_1f620:
  jeq r4, 0, jmp_1f898
  ldxdw r4, [r3+0]
  lddw r5, -6591346611322462573
  jne r4, r5, jmp_1f6b0
  ldxdw r4, [r3+8]
  lddw r5, -3176709652405844609
  jne r4, r5, jmp_1f6b0
  ldxdw r4, [r3+16]
  lddw r5, 922090967597802374
  jne r4, r5, jmp_1f6b0
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 4226674759310673442
  jeq r5, r0, jmp_1f6b8

jmp_1f6b0:
  mov64 r4, 1

jmp_1f6b8:
  jeq r4, 0, jmp_1f898
  ldxdw r4, [r3+0]
  lddw r5, 7874173867890827188
  jne r4, r5, jmp_1f748
  ldxdw r4, [r3+8]
  lddw r5, -1132585581382452828
  jne r4, r5, jmp_1f748
  ldxdw r4, [r3+16]
  lddw r5, -5312803544834949273
  jne r4, r5, jmp_1f748
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 5281251073679862249
  jeq r5, r0, jmp_1f750

jmp_1f748:
  mov64 r4, 1

jmp_1f750:
  jeq r4, 0, jmp_1f898
  ldxdw r4, [r3+0]
  lddw r5, 6930720940887442178
  jne r4, r5, jmp_1f7e0
  ldxdw r4, [r3+8]
  lddw r5, -3469502795165426639
  jne r4, r5, jmp_1f7e0
  ldxdw r4, [r3+16]
  lddw r5, 6890132529701084737
  jne r4, r5, jmp_1f7e0
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 8372344075948972898
  jeq r5, r0, jmp_1f7e8

jmp_1f7e0:
  mov64 r4, 1

jmp_1f7e8:
  jeq r4, 0, jmp_1f898
  ldxdw r4, [r3+0]
  lddw r5, -6522345590340665565
  jne r4, r5, jmp_1f878
  ldxdw r4, [r3+8]
  lddw r5, 7587880836806149101
  jne r4, r5, jmp_1f878
  ldxdw r4, [r3+16]
  lddw r5, -6517954304790411265
  jne r4, r5, jmp_1f878
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 540062615221672785
  jeq r5, r0, jmp_1f880

jmp_1f878:
  mov64 r4, 1

jmp_1f880:
  mov64 r6, 0
  mov64 r8, 0
  jne r4, 0, jmp_20d30

jmp_1f898:
  mov64 r6, 0
  ldxdw r5, [r2+8]
  ldxdw r1, [r2+0]
  mov64 r2, r1
  add64 r2, r5
  ldxh r2, [r2-2]
  ldxh r4, [r1+0]
  mov64 r8, 0
  stxdw [r10-888], r4
  jle r4, r2, jmp_20d30
  lsh64 r2, 1
  mov64 r5, r1
  add64 r5, r2
  ldxh r5, [r5+2]
  mov64 r2, r1
  add64 r2, r5
  ldxh r5, [r2+0]
  mul64 r5, 33
  add64 r2, r5
  ldxdw r5, [r2+2]
  lddw r0, 7980433456693082372
  jne r5, r0, jmp_1f9b8
  ldxdw r5, [r2+10]
  lddw r0, 510429368607405294
  jne r5, r0, jmp_1f9b8
  ldxdw r5, [r2+18]
  lddw r0, 5876903548418175485
  jne r5, r0, jmp_1f9b8
  mov64 r0, 0
  ldxdw r5, [r2+26]
  lddw r6, -8136953021443755774
  jeq r5, r6, jmp_1f9c0

jmp_1f9b8:
  mov64 r0, 1

jmp_1f9c0:
  jeq r0, 0, jmp_1fb98
  ldxdw r5, [r2+2]
  lddw r0, 5220724072241619893
  jne r5, r0, jmp_1fa50
  ldxdw r5, [r2+10]
  lddw r0, -2959324894810010007
  jne r5, r0, jmp_1fa50
  ldxdw r5, [r2+18]
  lddw r0, 6969507811222894677
  jne r5, r0, jmp_1fa50
  mov64 r0, 0
  ldxdw r5, [r2+26]
  lddw r6, 1170021923126530224
  jeq r5, r6, jmp_1fa58

jmp_1fa50:
  mov64 r0, 1

jmp_1fa58:
  jeq r0, 0, jmp_1fb98
  ldxdw r5, [r2+2]
  lddw r0, -4967779272591890170
  jne r5, r0, jmp_1fae8
  ldxdw r5, [r2+10]
  lddw r0, 7966950530949584949
  jne r5, r0, jmp_1fae8
  ldxdw r5, [r2+18]
  lddw r0, 3039776121969245976
  jne r5, r0, jmp_1fae8
  mov64 r0, 0
  ldxdw r5, [r2+26]
  lddw r6, -3113807682611379106
  jeq r5, r6, jmp_1faf0

jmp_1fae8:
  mov64 r0, 1

jmp_1faf0:
  jeq r0, 0, jmp_1fb98
  ldxdw r5, [r2+2]
  lddw r0, 1399876914085531989
  jne r5, r0, jmp_1fb80
  ldxdw r5, [r2+10]
  lddw r0, 3750823436284799567
  jne r5, r0, jmp_1fb80
  ldxdw r5, [r2+18]
  lddw r0, -3070781618096322690
  jne r5, r0, jmp_1fb80
  mov64 r0, 0
  ldxdw r5, [r2+26]
  lddw r6, 7606355701935812049
  jeq r5, r6, jmp_1fb88

jmp_1fb80:
  mov64 r0, 1

jmp_1fb88:
  mov64 r6, 0
  jne r0, 0, jmp_20d30

jmp_1fb98:
  lddw r5, 1742348105703426221
  stxdw [r10-856], r5
  lddw r5, 1185619410891342939
  stxdw [r10-864], r5
  lddw r5, -1601594878811822020
  stxdw [r10-872], r5
  lddw r5, 7305039657759228123
  stxdw [r10-880], r5
  ldxdw r0, [r3+0]
  jne r0, r5, jmp_1fc58
  ldxdw r5, [r3+8]
  ldxdw r0, [r10-872]
  jne r0, r5, jmp_1fc58
  ldxdw r5, [r3+16]
  ldxdw r0, [r10-864]
  jne r0, r5, jmp_1fc58
  mov64 r6, 0
  ldxdw r5, [r3+24]
  ldxdw r0, [r10-856]
  jeq r0, r5, jmp_1fc60

jmp_1fc58:
  mov64 r6, 1

jmp_1fc60:
  mov64 r4, r1
  add64 r4, 2
  stxdw [r10-896], r4
  stxdw [r10-904], r7
  jeq r6, 0, jmp_1fe08
  lddw r5, 1742348105703426221
  stxdw [r10-400], r5
  lddw r5, 1185619410891342939
  stxdw [r10-408], r5
  lddw r5, -1601594878811822020
  stxdw [r10-416], r5
  lddw r5, 7305039657759228123
  stxdw [r10-424], r5
  mov64 r6, 0
  ja jmp_1fd10

jmp_1fcf8:
  add64 r6, 1
  ldxdw r4, [r10-888]
  jge r6, r4, jmp_1fe00

jmp_1fd10:
  mov64 r5, r6
  lsh64 r5, 1
  ldxdw r7, [r10-896]
  add64 r7, r5
  ldxh r5, [r7+0]
  mov64 r7, r1
  add64 r7, r5
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_1fcf8
  add64 r7, 3
  mov64 r9, 0

jmp_1fd68:
  ldxdw r5, [r7+0]
  ldxdw r0, [r10-424]
  jne r5, r0, jmp_1fdd0
  ldxdw r5, [r7+8]
  ldxdw r0, [r10-416]
  jne r5, r0, jmp_1fdd0
  ldxdw r5, [r7+16]
  ldxdw r0, [r10-408]
  jne r5, r0, jmp_1fdd0
  mov64 r5, 0
  ldxdw r0, [r7+24]
  ldxdw r4, [r10-400]
  jeq r0, r4, jmp_1fdd8

jmp_1fdd0:
  mov64 r5, 1

jmp_1fdd8:
  jeq r5, 0, jmp_20990
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_1fd68
  ja jmp_1fcf8

jmp_1fe00:
  ldxdw r7, [r10-904]

jmp_1fe08:
  lddw r4, -2911232226977275405
  stxdw [r10-856], r4
  lddw r4, 1727238378208721238
  stxdw [r10-864], r4
  lddw r4, -5610469781006571872
  stxdw [r10-872], r4
  lddw r4, -8235920495016551595
  stxdw [r10-880], r4
  ldxdw r5, [r3+0]
  jne r5, r4, jmp_1fec8
  ldxdw r4, [r3+8]
  ldxdw r5, [r10-872]
  jne r5, r4, jmp_1fec8
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-864]
  jne r5, r4, jmp_1fec8
  mov64 r5, 0
  ldxdw r4, [r3+24]
  ldxdw r0, [r10-856]
  jeq r0, r4, jmp_1fed0

jmp_1fec8:
  mov64 r5, 1

jmp_1fed0:
  jeq r5, 0, jmp_20058
  lddw r4, -2911232226977275405
  stxdw [r10-400], r4
  lddw r4, 1727238378208721238
  stxdw [r10-408], r4
  lddw r4, -5610469781006571872
  stxdw [r10-416], r4
  lddw r4, -8235920495016551595
  stxdw [r10-424], r4
  mov64 r6, 0
  ja jmp_1ff60

jmp_1ff48:
  add64 r6, 1
  ldxdw r4, [r10-888]
  jge r6, r4, jmp_20050

jmp_1ff60:
  mov64 r4, r6
  lsh64 r4, 1
  ldxdw r5, [r10-896]
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r7, r1
  add64 r7, r4
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_1ff48
  add64 r7, 3
  mov64 r9, 0

jmp_1ffb8:
  ldxdw r4, [r7+0]
  ldxdw r5, [r10-424]
  jne r4, r5, jmp_20020
  ldxdw r4, [r7+8]
  ldxdw r5, [r10-416]
  jne r4, r5, jmp_20020
  ldxdw r4, [r7+16]
  ldxdw r5, [r10-408]
  jne r4, r5, jmp_20020
  mov64 r5, 0
  ldxdw r4, [r7+24]
  ldxdw r0, [r10-400]
  jeq r4, r0, jmp_20028

jmp_20020:
  mov64 r5, 1

jmp_20028:
  jeq r5, 0, jmp_20990
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_1ffb8
  ja jmp_1ff48

jmp_20050:
  ldxdw r7, [r10-904]

jmp_20058:
  lddw r4, 4226674759310673442
  stxdw [r10-856], r4
  lddw r4, 922090967597802374
  stxdw [r10-864], r4
  lddw r4, -3176709652405844609
  stxdw [r10-872], r4
  lddw r4, -6591346611322462573
  stxdw [r10-880], r4
  ldxdw r5, [r3+0]
  jne r5, r4, jmp_20118
  ldxdw r4, [r3+8]
  ldxdw r5, [r10-872]
  jne r5, r4, jmp_20118
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-864]
  jne r5, r4, jmp_20118
  mov64 r5, 0
  ldxdw r4, [r3+24]
  ldxdw r0, [r10-856]
  jeq r0, r4, jmp_20120

jmp_20118:
  mov64 r5, 1

jmp_20120:
  jeq r5, 0, jmp_202a8
  lddw r4, 4226674759310673442
  stxdw [r10-400], r4
  lddw r4, 922090967597802374
  stxdw [r10-408], r4
  lddw r4, -3176709652405844609
  stxdw [r10-416], r4
  lddw r4, -6591346611322462573
  stxdw [r10-424], r4
  mov64 r6, 0
  ja jmp_201b0

jmp_20198:
  add64 r6, 1
  ldxdw r4, [r10-888]
  jge r6, r4, jmp_202a0

jmp_201b0:
  mov64 r4, r6
  lsh64 r4, 1
  ldxdw r5, [r10-896]
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r7, r1
  add64 r7, r4
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_20198
  add64 r7, 3
  mov64 r9, 0

jmp_20208:
  ldxdw r4, [r7+0]
  ldxdw r5, [r10-424]
  jne r4, r5, jmp_20270
  ldxdw r4, [r7+8]
  ldxdw r5, [r10-416]
  jne r4, r5, jmp_20270
  ldxdw r4, [r7+16]
  ldxdw r5, [r10-408]
  jne r4, r5, jmp_20270
  mov64 r5, 0
  ldxdw r4, [r7+24]
  ldxdw r0, [r10-400]
  jeq r4, r0, jmp_20278

jmp_20270:
  mov64 r5, 1

jmp_20278:
  jeq r5, 0, jmp_20990
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_20208
  ja jmp_20198

jmp_202a0:
  ldxdw r7, [r10-904]

jmp_202a8:
  lddw r4, 5281251073679862249
  stxdw [r10-856], r4
  lddw r4, -5312803544834949273
  stxdw [r10-864], r4
  lddw r4, -1132585581382452828
  stxdw [r10-872], r4
  lddw r4, 7874173867890827188
  stxdw [r10-880], r4
  ldxdw r5, [r3+0]
  jne r5, r4, jmp_20368
  ldxdw r4, [r3+8]
  ldxdw r5, [r10-872]
  jne r5, r4, jmp_20368
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-864]
  jne r5, r4, jmp_20368
  mov64 r5, 0
  ldxdw r4, [r3+24]
  ldxdw r0, [r10-856]
  jeq r0, r4, jmp_20370

jmp_20368:
  mov64 r5, 1

jmp_20370:
  jeq r5, 0, jmp_204f8
  lddw r4, 5281251073679862249
  stxdw [r10-400], r4
  lddw r4, -5312803544834949273
  stxdw [r10-408], r4
  lddw r4, -1132585581382452828
  stxdw [r10-416], r4
  lddw r4, 7874173867890827188
  stxdw [r10-424], r4
  mov64 r6, 0
  ja jmp_20400

jmp_203e8:
  add64 r6, 1
  ldxdw r4, [r10-888]
  jge r6, r4, jmp_204f0

jmp_20400:
  mov64 r4, r6
  lsh64 r4, 1
  ldxdw r5, [r10-896]
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r7, r1
  add64 r7, r4
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_203e8
  add64 r7, 3
  mov64 r9, 0

jmp_20458:
  ldxdw r4, [r7+0]
  ldxdw r5, [r10-424]
  jne r4, r5, jmp_204c0
  ldxdw r4, [r7+8]
  ldxdw r5, [r10-416]
  jne r4, r5, jmp_204c0
  ldxdw r4, [r7+16]
  ldxdw r5, [r10-408]
  jne r4, r5, jmp_204c0
  mov64 r5, 0
  ldxdw r4, [r7+24]
  ldxdw r0, [r10-400]
  jeq r4, r0, jmp_204c8

jmp_204c0:
  mov64 r5, 1

jmp_204c8:
  jeq r5, 0, jmp_20990
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_20458
  ja jmp_203e8

jmp_204f0:
  ldxdw r7, [r10-904]

jmp_204f8:
  lddw r4, 8372344075948972898
  stxdw [r10-856], r4
  lddw r4, 6890132529701084737
  stxdw [r10-864], r4
  lddw r4, -3469502795165426639
  stxdw [r10-872], r4
  lddw r4, 6930720940887442178
  stxdw [r10-880], r4
  ldxdw r5, [r3+0]
  jne r5, r4, jmp_205b8
  ldxdw r4, [r3+8]
  ldxdw r5, [r10-872]
  jne r5, r4, jmp_205b8
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-864]
  jne r5, r4, jmp_205b8
  mov64 r5, 0
  ldxdw r4, [r3+24]
  ldxdw r0, [r10-856]
  jeq r0, r4, jmp_205c0

jmp_205b8:
  mov64 r5, 1

jmp_205c0:
  jeq r5, 0, jmp_20748
  lddw r4, 8372344075948972898
  stxdw [r10-400], r4
  lddw r4, 6890132529701084737
  stxdw [r10-408], r4
  lddw r4, -3469502795165426639
  stxdw [r10-416], r4
  lddw r4, 6930720940887442178
  stxdw [r10-424], r4
  mov64 r6, 0
  ja jmp_20650

jmp_20638:
  add64 r6, 1
  ldxdw r4, [r10-888]
  jge r6, r4, jmp_20740

jmp_20650:
  mov64 r4, r6
  lsh64 r4, 1
  ldxdw r5, [r10-896]
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r7, r1
  add64 r7, r4
  ldxh r8, [r7+0]
  jeq r8, 0, jmp_20638
  add64 r7, 3
  mov64 r9, 0

jmp_206a8:
  ldxdw r4, [r7+0]
  ldxdw r5, [r10-424]
  jne r4, r5, jmp_20710
  ldxdw r4, [r7+8]
  ldxdw r5, [r10-416]
  jne r4, r5, jmp_20710
  ldxdw r4, [r7+16]
  ldxdw r5, [r10-408]
  jne r4, r5, jmp_20710
  mov64 r5, 0
  ldxdw r4, [r7+24]
  ldxdw r0, [r10-400]
  jeq r4, r0, jmp_20718

jmp_20710:
  mov64 r5, 1

jmp_20718:
  jeq r5, 0, jmp_20990
  add64 r7, 33
  add64 r9, 1
  jlt r9, r8, jmp_206a8
  ja jmp_20638

jmp_20740:
  ldxdw r7, [r10-904]

jmp_20748:
  lddw r4, 540062615221672785
  stxdw [r10-856], r4
  lddw r4, -6517954304790411265
  stxdw [r10-864], r4
  lddw r4, 7587880836806149101
  stxdw [r10-872], r4
  lddw r4, -6522345590340665565
  stxdw [r10-880], r4
  ldxdw r5, [r3+0]
  jne r5, r4, jmp_20808
  ldxdw r4, [r3+8]
  ldxdw r5, [r10-872]
  jne r5, r4, jmp_20808
  ldxdw r4, [r3+16]
  ldxdw r5, [r10-864]
  jne r5, r4, jmp_20808
  mov64 r5, 0
  ldxdw r3, [r3+24]
  ldxdw r4, [r10-856]
  jeq r4, r3, jmp_20810

jmp_20808:
  mov64 r5, 1

jmp_20810:
  jeq r5, 0, jmp_20b98
  lddw r3, 540062615221672785
  stxdw [r10-400], r3
  lddw r3, -6517954304790411265
  stxdw [r10-408], r3
  lddw r3, 7587880836806149101
  stxdw [r10-416], r3
  lddw r3, -6522345590340665565
  stxdw [r10-424], r3
  mov64 r3, 0
  ja jmp_208a0

jmp_20888:
  add64 r3, 1
  ldxdw r4, [r10-888]
  jge r3, r4, jmp_20d50

jmp_208a0:
  mov64 r4, r3
  lsh64 r4, 1
  ldxdw r5, [r10-896]
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r6, r1
  add64 r6, r4
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_20888
  add64 r6, 3
  mov64 r8, 0

jmp_208f8:
  ldxdw r4, [r6+0]
  ldxdw r5, [r10-424]
  jne r4, r5, jmp_20960
  ldxdw r4, [r6+8]
  ldxdw r5, [r10-416]
  jne r4, r5, jmp_20960
  ldxdw r4, [r6+16]
  ldxdw r5, [r10-408]
  jne r4, r5, jmp_20960
  mov64 r5, 0
  ldxdw r4, [r6+24]
  ldxdw r0, [r10-400]
  jeq r4, r0, jmp_20968

jmp_20960:
  mov64 r5, 1

jmp_20968:
  jeq r5, 0, jmp_20990
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_208f8
  ja jmp_20888

jmp_20990:
  ldxdw r1, [r2+2]
  lddw r3, 7980433456693082372
  ldxdw r7, [r10-904]
  jne r1, r3, jmp_20a20
  ldxdw r1, [r2+10]
  lddw r3, 510429368607405294
  jne r1, r3, jmp_20a20
  ldxdw r1, [r2+18]
  lddw r3, 5876903548418175485
  jne r1, r3, jmp_20a20
  mov64 r3, 0
  ldxdw r1, [r2+26]
  lddw r4, -8136953021443755774
  jeq r1, r4, jmp_20a28

jmp_20a20:
  mov64 r3, 1

jmp_20a28:
  jeq r3, 0, jmp_20b60
  ldxdw r1, [r2+2]
  lddw r3, 5220724072241619893
  jne r1, r3, jmp_20ab8
  ldxdw r1, [r2+10]
  lddw r3, -2959324894810010007
  jne r1, r3, jmp_20ab8
  ldxdw r1, [r2+18]
  lddw r3, 6969507811222894677
  jne r1, r3, jmp_20ab8
  mov64 r3, 0
  ldxdw r1, [r2+26]
  lddw r4, 1170021923126530224
  jeq r1, r4, jmp_20ac0

jmp_20ab8:
  mov64 r3, 1

jmp_20ac0:
  mov64 r6, 0
  mov64 r8, 0
  jne r3, 0, jmp_20d30
  ldxh r3, [r2+34]
  jlt r3, 12, jmp_20d30
  mov64 r4, r2
  add64 r4, 36
  ldxdw r5, [r4+0]
  lddw r1, -8621195995516023999
  mov64 r0, 0
  jeq r5, r1, jmp_20c80
  lddw r1, 7315988490902613160
  jeq r5, r1, jmp_20c78
  lddw r1, -3997096532596832520
  jne r5, r1, jmp_20d30
  mov64 r0, 1
  ja jmp_20c80

jmp_20b60:
  ldxh r3, [r2+34]
  add64 r2, 36
  mov64 r1, r10
  add64 r1, -848
  call fn_144e8
  ldxb r1, [r10-848]
  jne r1, 2, jmp_20bb0

jmp_20b98:
  mov64 r6, 0
  mov64 r8, 0
  ja jmp_20d30

jmp_20bb0:
  mov64 r6, r10
  add64 r6, -424
  mov64 r2, r10
  add64 r2, -848
  mov64 r1, r6
  mov64 r3, 424
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r6
  call fn_154c8  ; → → → → custom_panic
  ldxb r1, [r10-424]
  jeq r1, 0, jmp_20c30
  ldxw r1, [r10-408]
  jeq r1, 0, jmp_20c58
  mov64 r2, r10
  add64 r2, -408
  ja jmp_20c50

jmp_20c30:
  ldxw r1, [r10-416]
  jeq r1, 0, jmp_20c58
  mov64 r2, r10
  add64 r2, -416

jmp_20c50:
  stw [r2+0], 0

jmp_20c58:
  mov64 r6, 0
  mov64 r8, 0
  jne r0, 0, jmp_20cd0
  ja jmp_20d30

jmp_20c78:
  mov64 r0, 2

jmp_20c80:
  ldxw r1, [r2+44]
  stxb [r10-404], r0
  stxw [r10-408], r1
  stxdw [r10-416], r3
  stxdw [r10-424], r4
  mov64 r2, r10
  add64 r2, -424
  mov64 r1, r2
  call fn_12ec0  ; → → → → custom_panic
  jeq r0, 0, jmp_20d30

jmp_20cd0:
  mov64 r2, r10
  add64 r2, -424
  mov64 r1, r2
  lddw r2, 56294995342131200
  mov64 r3, 0
  lddw r4, 281474976710656000
  mov64 r5, 0
  call fn_07e8  ; → → → custom_panic
  ldxdw r8, [r10-416]
  ldxdw r6, [r10-424]

jmp_20d30:
  stxdw [r7+8], r6
  stxdw [r7+16], r8
  stw [r7+0], 0
  exit

jmp_20d50:
  mov64 r6, 0
  mov64 r8, 0
  ldxdw r7, [r10-904]
  ja jmp_20d30

fn_20d70:
  mov64 r8, r5
  mov64 r6, r4
  mov64 r9, r1
  ldxdw r1, [r3+0]
  lddw r4, 7305039657759228123
  jne r1, r4, jmp_20e10
  ldxdw r1, [r3+8]
  lddw r4, -1601594878811822020
  jne r1, r4, jmp_20e10
  ldxdw r1, [r3+16]
  lddw r4, 1185619410891342939
  jne r1, r4, jmp_20e10
  mov64 r1, 0
  ldxdw r4, [r3+24]
  lddw r5, 1742348105703426221
  jeq r4, r5, jmp_20e18

jmp_20e10:
  mov64 r1, 1

jmp_20e18:
  jeq r1, 0, jmp_21128
  ldxdw r1, [r3+0]
  lddw r4, -8235920495016551595
  jne r1, r4, jmp_20ea8
  ldxdw r1, [r3+8]
  lddw r4, -5610469781006571872
  jne r1, r4, jmp_20ea8
  ldxdw r1, [r3+16]
  lddw r4, 1727238378208721238
  jne r1, r4, jmp_20ea8
  mov64 r1, 0
  ldxdw r4, [r3+24]
  lddw r5, -2911232226977275405
  jeq r4, r5, jmp_20eb0

jmp_20ea8:
  mov64 r1, 1

jmp_20eb0:
  jeq r1, 0, jmp_21128
  ldxdw r1, [r3+0]
  lddw r4, -6591346611322462573
  jne r1, r4, jmp_20f40
  ldxdw r1, [r3+8]
  lddw r4, -3176709652405844609
  jne r1, r4, jmp_20f40
  ldxdw r1, [r3+16]
  lddw r4, 922090967597802374
  jne r1, r4, jmp_20f40
  mov64 r1, 0
  ldxdw r4, [r3+24]
  lddw r5, 4226674759310673442
  jeq r4, r5, jmp_20f48

jmp_20f40:
  mov64 r1, 1

jmp_20f48:
  jeq r1, 0, jmp_21128
  ldxdw r1, [r3+0]
  lddw r4, 7874173867890827188
  jne r1, r4, jmp_20fd8
  ldxdw r1, [r3+8]
  lddw r4, -1132585581382452828
  jne r1, r4, jmp_20fd8
  ldxdw r1, [r3+16]
  lddw r4, -5312803544834949273
  jne r1, r4, jmp_20fd8
  mov64 r1, 0
  ldxdw r4, [r3+24]
  lddw r5, 5281251073679862249
  jeq r4, r5, jmp_20fe0

jmp_20fd8:
  mov64 r1, 1

jmp_20fe0:
  jeq r1, 0, jmp_21128
  ldxdw r1, [r3+0]
  lddw r4, 6930720940887442178
  jne r1, r4, jmp_21070
  ldxdw r1, [r3+8]
  lddw r4, -3469502795165426639
  jne r1, r4, jmp_21070
  ldxdw r1, [r3+16]
  lddw r4, 6890132529701084737
  jne r1, r4, jmp_21070
  mov64 r1, 0
  ldxdw r4, [r3+24]
  lddw r5, 8372344075948972898
  jeq r4, r5, jmp_21078

jmp_21070:
  mov64 r1, 1

jmp_21078:
  jeq r1, 0, jmp_21128
  ldxdw r1, [r3+0]
  lddw r4, -6522345590340665565
  jne r1, r4, jmp_21108
  ldxdw r1, [r3+8]
  lddw r4, 7587880836806149101
  jne r1, r4, jmp_21108
  ldxdw r1, [r3+16]
  lddw r4, -6517954304790411265
  jne r1, r4, jmp_21108
  mov64 r1, 0
  ldxdw r3, [r3+24]
  lddw r4, 540062615221672785
  jeq r3, r4, jmp_21110

jmp_21108:
  mov64 r1, 1

jmp_21110:
  mov64 r4, 0
  mov64 r5, 0
  jne r1, 0, jmp_22268

jmp_21128:
  mov64 r4, 0
  ldxdw r1, [r2+8]
  ldxdw r0, [r2+0]
  mov64 r2, r0
  add64 r2, r1
  ldxh r1, [r2-2]
  ldxh r2, [r0+0]
  mov64 r5, 0
  jle r2, r1, jmp_22268
  stxdw [r10-1400], r6
  lsh64 r1, 1
  mov64 r2, r0
  add64 r2, r1
  ldxh r1, [r2+2]
  add64 r0, r1
  ldxh r6, [r0+0]
  mov64 r1, r6
  mul64 r1, 33
  mov64 r3, r0
  add64 r3, r1
  ldxdw r1, [r3+2]
  lddw r2, 7980433456693082372
  jne r1, r2, jmp_21250
  ldxdw r1, [r3+10]
  lddw r2, 510429368607405294
  jne r1, r2, jmp_21250
  ldxdw r1, [r3+18]
  lddw r2, 5876903548418175485
  jne r1, r2, jmp_21250
  mov64 r1, 0
  ldxdw r2, [r3+26]
  lddw r4, -8136953021443755774
  jeq r2, r4, jmp_21258

jmp_21250:
  mov64 r1, 1

jmp_21258:
  ldxh r4, [r3+34]
  mov64 r2, r3
  add64 r2, 36
  jeq r1, 0, jmp_213a8
  mov64 r6, r4
  ldxdw r1, [r3+2]
  lddw r4, 5220724072241619893
  jne r1, r4, jmp_21308
  ldxdw r1, [r3+10]
  lddw r4, -2959324894810010007
  jne r1, r4, jmp_21308
  ldxdw r1, [r3+18]
  lddw r4, 6969507811222894677
  jne r1, r4, jmp_21308
  mov64 r1, 0
  ldxdw r4, [r3+26]
  lddw r5, 1170021923126530224
  jeq r4, r5, jmp_21310

jmp_21308:
  mov64 r1, 1

jmp_21310:
  mov64 r4, 0
  mov64 r5, 0
  jne r1, 0, jmp_22268
  mov64 r0, 2
  mov64 r7, r6
  jlt r7, 12, jmp_219e8
  mov64 r6, 0
  ldxdw r1, [r2+0]
  lddw r5, -8621195995516023999
  jeq r1, r5, jmp_21858
  lddw r4, 7315988490902613160
  jeq r1, r4, jmp_21850
  lddw r4, -3997096532596832520
  jne r1, r4, jmp_219e8
  mov64 r4, 1
  ja jmp_21858

jmp_213a8:
  jeq r6, 0, jmp_216e0
  stxdw [r10-1424], r4
  stxdw [r10-1416], r8
  stxdw [r10-1408], r9
  mov64 r1, 0
  mov64 r7, 0
  mov64 r4, 0
  ja jmp_21428

jmp_213e8:
  xor64 r3, 1
  and64 r3, r7
  mov64 r7, r3

jmp_21400:
  add64 r0, 33
  add64 r4, 1
  mov64 r3, r5
  mov64 r8, r1
  jge r4, r6, jmp_21708

jmp_21428:
  ldxdw r3, [r0+3]
  lddw r8, 5769792955646358175
  jne r3, r8, jmp_214b0
  ldxdw r3, [r0+11]
  lddw r8, 7477079442397043648
  jne r3, r8, jmp_214b0
  ldxdw r3, [r0+19]
  lddw r8, 2061640192076490765
  jne r3, r8, jmp_214b0
  mov64 r3, 0
  ldxdw r8, [r0+27]
  lddw r9, 6340740417868103156
  jeq r8, r9, jmp_214b8

jmp_214b0:
  mov64 r3, 1

jmp_214b8:
  jeq r3, 0, jmp_21640
  ldxdw r3, [r0+3]
  lddw r8, -7634913317402432290
  jne r3, r8, jmp_21548
  ldxdw r3, [r0+11]
  lddw r8, 1541517542141935270
  jne r3, r8, jmp_21548
  ldxdw r3, [r0+19]
  lddw r8, -6388793203058920780
  jne r3, r8, jmp_21548
  mov64 r3, 0
  ldxdw r8, [r0+27]
  lddw r9, -4516039911682744073
  jeq r8, r9, jmp_21550

jmp_21548:
  mov64 r3, 1

jmp_21550:
  jeq r3, 0, jmp_21678
  ldxdw r3, [r0+3]
  lddw r8, 8089692895902856269
  jne r3, r8, jmp_215e0
  ldxdw r3, [r0+11]
  lddw r8, 7431223320363587047
  jne r3, r8, jmp_215e0
  ldxdw r3, [r0+19]
  lddw r8, 1549916771026719801
  jne r3, r8, jmp_215e0
  mov64 r3, 0
  ldxdw r8, [r0+27]
  lddw r9, -2737867518491144122
  jeq r8, r9, jmp_215e8

jmp_215e0:
  mov64 r3, 1

jmp_215e8:
  mov64 r9, r1
  and64 r9, r5
  jeq r3, 0, jmp_216b0
  mov64 r3, r9
  and64 r3, r7
  and64 r3, 1
  jne r3, 0, jmp_216f0
  xor64 r9, 1
  and64 r9, r7
  mov64 r7, r9
  ja jmp_21400

jmp_21640:
  mov64 r3, r5
  and64 r3, r7
  mov64 r1, 1
  and64 r3, 1
  jne r3, 0, jmp_216f0
  mov64 r3, r5
  ja jmp_213e8

jmp_21678:
  mov64 r3, r1
  and64 r3, r7
  mov64 r5, 1
  and64 r3, 1
  jne r3, 0, jmp_216f0
  mov64 r3, r1
  ja jmp_213e8

jmp_216b0:
  mov64 r7, 1
  and64 r9, 1
  mov64 r3, 1
  mov64 r8, 1
  jeq r9, 0, jmp_21400
  ja jmp_21708

jmp_216e0:
  mov64 r4, 0
  ja jmp_22268

jmp_216f0:
  mov64 r7, 1
  mov64 r3, 1
  mov64 r8, 1

jmp_21708:
  mov64 r4, 0
  and64 r8, 1
  jeq r8, 0, jmp_21978
  and64 r3, 1
  ldxdw r9, [r10-1408]
  jeq r3, 0, jmp_21990
  and64 r7, 1
  mov64 r5, 0
  ldxdw r1, [r10-1416]
  ldxdw r8, [r10-1400]
  jeq r7, 0, jmp_22268
  mov64 r7, r9
  mov64 r9, r1
  mov64 r1, r10
  add64 r1, -1328
  ldxdw r3, [r10-1424]
  call fn_144e8
  ldxb r1, [r10-1328]
  jne r1, 2, jmp_217c0
  mov64 r4, 0
  mov64 r5, 0
  mov64 r9, r7
  ja jmp_22268

jmp_217c0:
  mov64 r6, r10
  add64 r6, -424
  mov64 r2, r10
  add64 r2, -1328
  mov64 r1, r6
  mov64 r3, 424
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r6
  mov64 r2, 117
  call fn_15288
  ldxb r1, [r10-424]
  jeq r1, 0, jmp_219a0
  ldxw r1, [r10-408]
  mov64 r2, r9
  jeq r1, 0, jmp_219d0
  mov64 r1, r10
  add64 r1, -408
  ja jmp_219c8

jmp_21850:
  mov64 r4, 2

jmp_21858:
  ldxdw r1, [r10-1400]
  ldxw r1, [r3+44]
  stxb [r10-404], r4
  stxw [r10-408], r1
  stxdw [r10-416], r7
  stxdw [r10-424], r2
  mov64 r1, r10
  add64 r1, -1328
  mov64 r2, r10
  add64 r2, -424
  call fn_13160  ; → → sol_memcpy_
  mov64 r1, r10
  add64 r1, -1320
  ldxw r2, [r10-1328]
  mul64 r2, 56

jmp_218d0:
  jeq r2, r6, jmp_21968
  add64 r6, 56
  ldxb r3, [r1+51]
  add64 r1, 56
  jne r3, 40, jmp_218d0
  mov64 r1, r10
  add64 r1, -1328
  add64 r1, r6
  mov64 r0, 2
  ldxb r1, [r1-32]
  jne r1, 1, jmp_219e8
  mov64 r1, r10
  add64 r1, -1328
  add64 r1, r6
  ldxb r1, [r1-31]
  mov64 r0, 1
  jne r1, 0, jmp_219e8
  mov64 r0, 0
  ja jmp_219e8

jmp_21968:
  mov64 r0, 2
  ja jmp_219e8

jmp_21978:
  mov64 r5, 0
  ldxdw r9, [r10-1408]
  ja jmp_22268

jmp_21990:
  mov64 r5, 0
  ja jmp_22268

jmp_219a0:
  ldxw r1, [r10-416]
  mov64 r2, r9
  jeq r1, 0, jmp_219d0
  mov64 r1, r10
  add64 r1, -416

jmp_219c8:
  stw [r1+0], 0

jmp_219d0:
  and64 r0, 255
  mov64 r9, r7
  mov64 r8, r2

jmp_219e8:
  mov64 r4, 0
  mov64 r1, r0
  and64 r1, 255
  mov64 r5, 0
  ldxdw r6, [r10-1400]
  jeq r1, 2, jmp_22268
  and64 r0, 1
  jeq r0, 0, jmp_21b08
  lddw r1, 72057594053697688
  stxdw [r10-1368], r1
  lddw r1, 6141761017446253786
  stxdw [r10-1376], r1
  lddw r1, 3873122370134698235
  stxdw [r10-1384], r1
  lddw r1, -8898642279828776186
  stxdw [r10-1392], r1
  lddw r1, 4228277238345956038
  stxdw [r10-1360], r1
  lddw r1, 3563694943227831613
  stxdw [r10-1352], r1
  lddw r1, -1954290853205460047
  stxdw [r10-1344], r1
  lddw r1, 7015815767962855036
  stxdw [r10-1336], r1
  ldxdw r1, [r6+0]
  ldxdw r2, [r10-1360]
  jeq r2, r1, jmp_21be0
  ja jmp_21c30

jmp_21b08:
  lddw r1, 7015815767962855036
  stxdw [r10-1368], r1
  lddw r1, -1954290853205460047
  stxdw [r10-1376], r1
  lddw r1, 3563694943227831613
  stxdw [r10-1384], r1
  lddw r1, 4228277238345956038
  stxdw [r10-1392], r1
  lddw r1, -8898642279828776186
  stxdw [r10-1360], r1
  lddw r1, 3873122370134698235
  stxdw [r10-1352], r1
  lddw r1, 6141761017446253786
  stxdw [r10-1344], r1
  lddw r1, 72057594053697688
  stxdw [r10-1336], r1
  ldxdw r1, [r6+0]
  ldxdw r2, [r10-1360]
  jne r2, r1, jmp_21c30

jmp_21be0:
  ldxdw r1, [r6+8]
  ldxdw r2, [r10-1352]
  jne r2, r1, jmp_21c30
  ldxdw r1, [r6+16]
  ldxdw r2, [r10-1344]
  jne r2, r1, jmp_21c30
  mov64 r1, 0
  ldxdw r2, [r6+24]
  ldxdw r3, [r10-1336]
  jeq r3, r2, jmp_21c38

jmp_21c30:
  mov64 r1, 1

jmp_21c38:
  jeq r1, 0, jmp_21ed8
  lddw r1, 4228277238345956038
  ldxdw r2, [r10-1360]
  jne r2, r1, jmp_21cc8
  lddw r1, 3563694943227831613
  ldxdw r2, [r10-1352]
  jne r2, r1, jmp_21cc8
  lddw r1, -1954290853205460047
  ldxdw r2, [r10-1344]
  jne r2, r1, jmp_21cc8
  mov64 r1, 0
  lddw r2, 7015815767962855036
  ldxdw r3, [r10-1336]
  jeq r3, r2, jmp_21cd0

jmp_21cc8:
  mov64 r1, 1

jmp_21cd0:
  jeq r1, 0, jmp_21d78
  lddw r1, 2860610050820276686
  ldxdw r2, [r10-1360]
  jne r2, r1, jmp_21d60
  lddw r1, 6490905524213890327
  ldxdw r2, [r10-1352]
  jne r2, r1, jmp_21d60
  lddw r1, -4048029374520584641
  ldxdw r2, [r10-1344]
  jne r2, r1, jmp_21d60
  mov64 r1, 0
  lddw r2, 7242386467454098946
  ldxdw r3, [r10-1336]
  jeq r3, r2, jmp_21d68

jmp_21d60:
  mov64 r1, 1

jmp_21d68:
  mov64 r2, 1
  jne r1, 0, jmp_21ee0

jmp_21d78:
  ldxdw r1, [r6+0]
  lddw r2, 4228277238345956038
  jne r1, r2, jmp_21e00
  ldxdw r1, [r6+8]
  lddw r2, 3563694943227831613
  jne r1, r2, jmp_21e00
  ldxdw r1, [r6+16]
  lddw r2, -1954290853205460047
  jne r1, r2, jmp_21e00
  mov64 r1, 0
  ldxdw r2, [r6+24]
  lddw r3, 7015815767962855036
  jeq r2, r3, jmp_21e08

jmp_21e00:
  mov64 r1, 1

jmp_21e08:
  jeq r1, 0, jmp_21f50
  ldxdw r1, [r6+0]
  lddw r2, 2860610050820276686
  jne r1, r2, jmp_21e98
  ldxdw r1, [r6+8]
  lddw r2, 6490905524213890327
  jne r1, r2, jmp_21e98
  ldxdw r1, [r6+16]
  lddw r2, -4048029374520584641
  jne r1, r2, jmp_21e98
  mov64 r1, 0
  ldxdw r2, [r6+24]
  lddw r3, 7242386467454098946
  jeq r2, r3, jmp_21ea0

jmp_21e98:
  mov64 r1, 1

jmp_21ea0:
  mov64 r2, 0
  jeq r1, 0, jmp_21ee0
  mov64 r2, 1
  ldxdw r1, [r8+0]
  ldxdw r3, [r10-1392]
  jeq r3, r1, jmp_21ef8
  ja jmp_21f70

jmp_21ed8:
  mov64 r2, 0

jmp_21ee0:
  ldxdw r1, [r8+0]
  ldxdw r3, [r10-1392]
  jne r3, r1, jmp_21f70

jmp_21ef8:
  ldxdw r1, [r8+8]
  ldxdw r3, [r10-1384]
  jne r3, r1, jmp_21f70
  ldxdw r1, [r8+16]
  ldxdw r3, [r10-1376]
  jne r3, r1, jmp_21f70
  mov64 r1, 0
  ldxdw r3, [r8+24]
  ldxdw r4, [r10-1368]
  jne r4, r3, jmp_21f70
  ja jmp_21f78

jmp_21f50:
  mov64 r2, 0
  ldxdw r1, [r8+0]
  ldxdw r3, [r10-1392]
  jeq r3, r1, jmp_21ef8

jmp_21f70:
  mov64 r1, 1

jmp_21f78:
  jeq r1, 0, jmp_221e8
  lddw r1, 4228277238345956038
  ldxdw r3, [r10-1392]
  jne r3, r1, jmp_22008
  lddw r1, 3563694943227831613
  ldxdw r3, [r10-1384]
  jne r3, r1, jmp_22008
  lddw r1, -1954290853205460047
  ldxdw r3, [r10-1376]
  jne r3, r1, jmp_22008
  mov64 r1, 0
  lddw r3, 7015815767962855036
  ldxdw r4, [r10-1368]
  jeq r4, r3, jmp_22010

jmp_22008:
  mov64 r1, 1

jmp_22010:
  jeq r1, 0, jmp_220b8
  lddw r1, 2860610050820276686
  ldxdw r3, [r10-1392]
  jne r3, r1, jmp_220a0
  lddw r1, 6490905524213890327
  ldxdw r3, [r10-1384]
  jne r3, r1, jmp_220a0
  lddw r1, -4048029374520584641
  ldxdw r3, [r10-1376]
  jne r3, r1, jmp_220a0
  mov64 r1, 0
  lddw r3, 7242386467454098946
  ldxdw r4, [r10-1368]
  jeq r4, r3, jmp_220a8

jmp_220a0:
  mov64 r1, 1

jmp_220a8:
  mov64 r4, 0
  jne r1, 0, jmp_22268

jmp_220b8:
  ldxdw r1, [r8+0]
  lddw r3, 4228277238345956038
  jne r1, r3, jmp_22140
  ldxdw r1, [r8+8]
  lddw r3, 3563694943227831613
  jne r1, r3, jmp_22140
  ldxdw r1, [r8+16]
  lddw r3, -1954290853205460047
  jne r1, r3, jmp_22140
  mov64 r1, 0
  ldxdw r3, [r8+24]
  lddw r4, 7015815767962855036
  jeq r3, r4, jmp_22148

jmp_22140:
  mov64 r1, 1

jmp_22148:
  jeq r1, 0, jmp_221e8
  ldxdw r1, [r8+0]
  lddw r3, 2860610050820276686
  jne r1, r3, jmp_221d8
  ldxdw r1, [r8+8]
  lddw r3, 6490905524213890327
  jne r1, r3, jmp_221d8
  ldxdw r1, [r8+16]
  lddw r3, -4048029374520584641
  jne r1, r3, jmp_221d8
  mov64 r1, 0
  ldxdw r3, [r8+24]
  lddw r4, 7242386467454098946
  jeq r3, r4, jmp_221e0

jmp_221d8:
  mov64 r1, 1

jmp_221e0:
  or64 r2, r1

jmp_221e8:
  mov64 r4, 0
  jne r2, 0, jmp_22268
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r2, r10
  add64 r2, -1328
  mov64 r5, r10
  mov64 r1, r2
  lddw r2, 250512729272483840
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r5, [r10-1320]
  ldxdw r4, [r10-1328]

jmp_22268:
  stxdw [r9+8], r4
  stxdw [r9+16], r5
  stw [r9+0], 0
  exit

fn_22288:
  ldxdw r4, [r3+0]
  lddw r5, 7305039657759228123
  jne r4, r5, jmp_22310
  ldxdw r4, [r3+8]
  lddw r5, -1601594878811822020
  jne r4, r5, jmp_22310
  ldxdw r4, [r3+16]
  lddw r5, 1185619410891342939
  jne r4, r5, jmp_22310
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 1742348105703426221
  jeq r5, r0, jmp_22318

jmp_22310:
  mov64 r4, 1

jmp_22318:
  jeq r4, 0, jmp_22628
  ldxdw r4, [r3+0]
  lddw r5, -8235920495016551595
  jne r4, r5, jmp_223a8
  ldxdw r4, [r3+8]
  lddw r5, -5610469781006571872
  jne r4, r5, jmp_223a8
  ldxdw r4, [r3+16]
  lddw r5, 1727238378208721238
  jne r4, r5, jmp_223a8
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, -2911232226977275405
  jeq r5, r0, jmp_223b0

jmp_223a8:
  mov64 r4, 1

jmp_223b0:
  jeq r4, 0, jmp_22628
  ldxdw r4, [r3+0]
  lddw r5, -6591346611322462573
  jne r4, r5, jmp_22440
  ldxdw r4, [r3+8]
  lddw r5, -3176709652405844609
  jne r4, r5, jmp_22440
  ldxdw r4, [r3+16]
  lddw r5, 922090967597802374
  jne r4, r5, jmp_22440
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 4226674759310673442
  jeq r5, r0, jmp_22448

jmp_22440:
  mov64 r4, 1

jmp_22448:
  jeq r4, 0, jmp_22628
  ldxdw r4, [r3+0]
  lddw r5, 7874173867890827188
  jne r4, r5, jmp_224d8
  ldxdw r4, [r3+8]
  lddw r5, -1132585581382452828
  jne r4, r5, jmp_224d8
  ldxdw r4, [r3+16]
  lddw r5, -5312803544834949273
  jne r4, r5, jmp_224d8
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 5281251073679862249
  jeq r5, r0, jmp_224e0

jmp_224d8:
  mov64 r4, 1

jmp_224e0:
  jeq r4, 0, jmp_22628
  ldxdw r4, [r3+0]
  lddw r5, 6930720940887442178
  jne r4, r5, jmp_22570
  ldxdw r4, [r3+8]
  lddw r5, -3469502795165426639
  jne r4, r5, jmp_22570
  ldxdw r4, [r3+16]
  lddw r5, 6890132529701084737
  jne r4, r5, jmp_22570
  mov64 r4, 0
  ldxdw r5, [r3+24]
  lddw r0, 8372344075948972898
  jeq r5, r0, jmp_22578

jmp_22570:
  mov64 r4, 1

jmp_22578:
  jeq r4, 0, jmp_22628
  ldxdw r4, [r3+0]
  lddw r5, -6522345590340665565
  jne r4, r5, jmp_22608
  ldxdw r4, [r3+8]
  lddw r5, 7587880836806149101
  jne r4, r5, jmp_22608
  ldxdw r4, [r3+16]
  lddw r5, -6517954304790411265
  jne r4, r5, jmp_22608
  mov64 r4, 0
  ldxdw r3, [r3+24]
  lddw r5, 540062615221672785
  jeq r3, r5, jmp_22610

jmp_22608:
  mov64 r4, 1

jmp_22610:
  mov64 r0, 0
  mov64 r9, 0
  jne r4, 0, jmp_22f60

jmp_22628:
  mov64 r0, 0
  ldxdw r3, [r2+8]
  ldxdw r2, [r2+0]
  mov64 r4, r2
  add64 r4, r3
  ldxh r4, [r4-2]
  ldxh r3, [r2+0]
  mov64 r9, 0
  jle r3, r4, jmp_22f60
  lsh64 r4, 1
  mov64 r5, r2
  add64 r5, r4
  ldxh r5, [r5+2]
  mov64 r4, r2
  add64 r4, r5
  ldxh r5, [r4+0]
  mul64 r5, 33
  add64 r4, r5
  ldxdw r5, [r4+2]
  lddw r0, 5220724072241619893
  jne r5, r0, jmp_22740
  ldxdw r5, [r4+10]
  lddw r0, -2959324894810010007
  jne r5, r0, jmp_22740
  ldxdw r5, [r4+18]
  lddw r0, 6969507811222894677
  jne r5, r0, jmp_22740
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, 1170021923126530224
  jeq r0, r6, jmp_22748

jmp_22740:
  mov64 r5, 1

jmp_22748:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -2198765913588964427
  jne r5, r0, jmp_227d8
  ldxdw r5, [r4+10]
  lddw r0, -5905105312569969003
  jne r5, r0, jmp_227d8
  ldxdw r5, [r4+18]
  lddw r0, 684904381118562216
  jne r5, r0, jmp_227d8
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, 4678717296310286314
  jeq r0, r6, jmp_227e0

jmp_227d8:
  mov64 r5, 1

jmp_227e0:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, 7980433456693082372
  jne r5, r0, jmp_22870
  ldxdw r5, [r4+10]
  lddw r0, 510429368607405294
  jne r5, r0, jmp_22870
  ldxdw r5, [r4+18]
  lddw r0, 5876903548418175485
  jne r5, r0, jmp_22870
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -8136953021443755774
  jeq r0, r6, jmp_22878

jmp_22870:
  mov64 r5, 1

jmp_22878:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, 8168280107505291781
  jne r5, r0, jmp_22908
  ldxdw r5, [r4+10]
  lddw r0, -4592847231699258499
  jne r5, r0, jmp_22908
  ldxdw r5, [r4+18]
  lddw r0, -1258827676327456798
  jne r5, r0, jmp_22908
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -5085587352091431873
  jeq r0, r6, jmp_22910

jmp_22908:
  mov64 r5, 1

jmp_22910:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -4280153130667228406
  jne r5, r0, jmp_229a0
  ldxdw r5, [r4+10]
  lddw r0, 8480720561057976597
  jne r5, r0, jmp_229a0
  ldxdw r5, [r4+18]
  lddw r0, 7461006668826005640
  jne r5, r0, jmp_229a0
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -1412322337336563229
  jeq r0, r6, jmp_229a8

jmp_229a0:
  mov64 r5, 1

jmp_229a8:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, 1399876914085531989
  jne r5, r0, jmp_22a38
  ldxdw r5, [r4+10]
  lddw r0, 3750823436284799567
  jne r5, r0, jmp_22a38
  ldxdw r5, [r4+18]
  lddw r0, -3070781618096322690
  jne r5, r0, jmp_22a38
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, 7606355701935812049
  jeq r0, r6, jmp_22a40

jmp_22a38:
  mov64 r5, 1

jmp_22a40:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -1632001642340221574
  jne r5, r0, jmp_22ad0
  ldxdw r5, [r4+10]
  lddw r0, 8827510275200544966
  jne r5, r0, jmp_22ad0
  ldxdw r5, [r4+18]
  lddw r0, 7913477912056730528
  jne r5, r0, jmp_22ad0
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -3189807322954948524
  jeq r0, r6, jmp_22ad8

jmp_22ad0:
  mov64 r5, 1

jmp_22ad8:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -4967779272591890170
  jne r5, r0, jmp_22b68
  ldxdw r5, [r4+10]
  lddw r0, 7966950530949584949
  jne r5, r0, jmp_22b68
  ldxdw r5, [r4+18]
  lddw r0, 3039776121969245976
  jne r5, r0, jmp_22b68
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -3113807682611379106
  jeq r0, r6, jmp_22b70

jmp_22b68:
  mov64 r5, 1

jmp_22b70:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -5747981566769578293
  jne r5, r0, jmp_22c00
  ldxdw r5, [r4+10]
  lddw r0, 5020578267535386987
  jne r5, r0, jmp_22c00
  ldxdw r5, [r4+18]
  lddw r0, 6428496260637191791
  jne r5, r0, jmp_22c00
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, 4811983434563935851
  jeq r0, r6, jmp_22c08

jmp_22c00:
  mov64 r5, 1

jmp_22c08:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -2103798496248350451
  jne r5, r0, jmp_22c98
  ldxdw r5, [r4+10]
  lddw r0, 7460384090950721156
  jne r5, r0, jmp_22c98
  ldxdw r5, [r4+18]
  lddw r0, 6225909620063481131
  jne r5, r0, jmp_22c98
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, 6091967181996833443
  jeq r0, r6, jmp_22ca0

jmp_22c98:
  mov64 r5, 1

jmp_22ca0:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -7794643231621059372
  jne r5, r0, jmp_22d30
  ldxdw r5, [r4+10]
  lddw r0, 1690746628767058523
  jne r5, r0, jmp_22d30
  ldxdw r5, [r4+18]
  lddw r0, 7999319151635705803
  jne r5, r0, jmp_22d30
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -6852716169369644997
  jeq r0, r6, jmp_22d38

jmp_22d30:
  mov64 r5, 1

jmp_22d38:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -1995264692610322277
  jne r5, r0, jmp_22dc8
  ldxdw r5, [r4+10]
  lddw r0, 7247355053740244306
  jne r5, r0, jmp_22dc8
  ldxdw r5, [r4+18]
  lddw r0, 2750605575308327169
  jne r5, r0, jmp_22dc8
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, 6620906231919047251
  jeq r0, r6, jmp_22dd0

jmp_22dc8:
  mov64 r5, 1

jmp_22dd0:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -553784691457834484
  jne r5, r0, jmp_22e60
  ldxdw r5, [r4+10]
  lddw r0, 3307855567893720341
  jne r5, r0, jmp_22e60
  ldxdw r5, [r4+18]
  lddw r0, 7759680424013031670
  jne r5, r0, jmp_22e60
  mov64 r5, 0
  ldxdw r0, [r4+26]
  lddw r6, -3974045808917541545
  jeq r0, r6, jmp_22e68

jmp_22e60:
  mov64 r5, 1

jmp_22e68:
  jeq r5, 0, jmp_22f58
  ldxdw r5, [r4+2]
  lddw r0, -3975646754120086780
  jne r5, r0, jmp_22ef8
  ldxdw r5, [r4+10]
  lddw r0, 8278757209229882069
  jne r5, r0, jmp_22ef8
  ldxdw r5, [r4+18]
  lddw r0, 4820819358789892100
  jne r5, r0, jmp_22ef8
  mov64 r5, 0
  ldxdw r4, [r4+26]
  lddw r0, -4222439958873533581
  jeq r4, r0, jmp_22f00

jmp_22ef8:
  mov64 r5, 1

jmp_22f00:
  jeq r5, 0, jmp_22f58
  mov64 r4, 0
  mov64 r5, r2
  add64 r5, 2
  stxdw [r10-40], r5
  lddw r7, 5769792955646358175
  stxdw [r10-32], r1
  lddw r8, 6340740417868103156
  ja jmp_22fa8

jmp_22f58:
  mov64 r0, 0

jmp_22f60:
  stxdw [r1+8], r0
  stxdw [r1+16], r9
  stw [r1+0], 0
  exit

jmp_22f80:
  mov64 r0, 0
  add64 r4, 1
  mov64 r9, 0
  ldxdw r1, [r10-32]
  jge r4, r3, jmp_22f60

jmp_22fa8:
  mov64 r1, r4
  lsh64 r1, 1
  ldxdw r0, [r10-40]
  add64 r0, r1
  ldxh r0, [r0+0]
  mov64 r1, r2
  add64 r1, r0
  ldxh r0, [r1+0]
  mov64 r6, r0
  mul64 r6, 33
  mov64 r9, r1
  add64 r9, r6
  ldxdw r6, [r9+2]
  jne r6, r7, jmp_23080
  ldxdw r6, [r9+10]
  lddw r5, 7477079442397043648
  jne r6, r5, jmp_23080
  ldxdw r6, [r9+18]
  lddw r5, 2061640192076490765
  jne r6, r5, jmp_23080
  mov64 r6, 0
  ldxdw r9, [r9+26]
  lddw r5, 6340740417868103156
  jeq r9, r5, jmp_23088

jmp_23080:
  mov64 r6, 1

jmp_23088:
  jeq r6, 0, jmp_23140
  jeq r0, 0, jmp_22f80
  add64 r1, 3
  mov64 r9, 0

jmp_230a8:
  ldxdw r6, [r1+0]
  jne r6, r7, jmp_23110
  ldxdw r6, [r1+8]
  lddw r5, 7477079442397043648
  jne r6, r5, jmp_23110
  ldxdw r6, [r1+16]
  lddw r5, 2061640192076490765
  jne r6, r5, jmp_23110
  mov64 r6, 0
  ldxdw r5, [r1+24]
  jeq r5, r8, jmp_23118

jmp_23110:
  mov64 r6, 1

jmp_23118:
  jeq r6, 0, jmp_23140
  add64 r1, 33
  add64 r9, 1
  jlt r9, r0, jmp_230a8
  ja jmp_22f80

jmp_23140:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r1, r10
  add64 r1, -24
  mov64 r5, r10
  lddw r2, 250512729272483840
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r9, [r10-16]
  ldxdw r0, [r10-24]
  ldxdw r1, [r10-32]
  ja jmp_22f60

fn_231b8:
  mov64 r3, 0
  ldxdw r4, [r2+8]
  ldxdw r2, [r2+0]
  mov64 r5, r2
  add64 r5, r4
  ldxh r5, [r5-2]
  ldxh r0, [r2+0]
  mov64 r4, 0
  jle r0, r5, jmp_23b28
  lsh64 r5, 1
  mov64 r3, r2
  add64 r3, r5
  ldxh r3, [r3+2]
  add64 r2, r3
  ldxh r3, [r2+0]
  mul64 r3, 33
  add64 r2, r3
  ldxdw r3, [r2+2]
  lddw r4, 5220724072241619893
  jne r3, r4, jmp_232c8
  ldxdw r3, [r2+10]
  lddw r4, -2959324894810010007
  jne r3, r4, jmp_232c8
  ldxdw r3, [r2+18]
  lddw r4, 6969507811222894677
  jne r3, r4, jmp_232c8
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, 1170021923126530224
  jeq r4, r5, jmp_232d0

jmp_232c8:
  mov64 r3, 1

jmp_232d0:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -2198765913588964427
  jne r3, r4, jmp_23360
  ldxdw r3, [r2+10]
  lddw r4, -5905105312569969003
  jne r3, r4, jmp_23360
  ldxdw r3, [r2+18]
  lddw r4, 684904381118562216
  jne r3, r4, jmp_23360
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, 4678717296310286314
  jeq r4, r5, jmp_23368

jmp_23360:
  mov64 r3, 1

jmp_23368:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, 7980433456693082372
  jne r3, r4, jmp_233f8
  ldxdw r3, [r2+10]
  lddw r4, 510429368607405294
  jne r3, r4, jmp_233f8
  ldxdw r3, [r2+18]
  lddw r4, 5876903548418175485
  jne r3, r4, jmp_233f8
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -8136953021443755774
  jeq r4, r5, jmp_23400

jmp_233f8:
  mov64 r3, 1

jmp_23400:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, 8168280107505291781
  jne r3, r4, jmp_23490
  ldxdw r3, [r2+10]
  lddw r4, -4592847231699258499
  jne r3, r4, jmp_23490
  ldxdw r3, [r2+18]
  lddw r4, -1258827676327456798
  jne r3, r4, jmp_23490
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -5085587352091431873
  jeq r4, r5, jmp_23498

jmp_23490:
  mov64 r3, 1

jmp_23498:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -4280153130667228406
  jne r3, r4, jmp_23528
  ldxdw r3, [r2+10]
  lddw r4, 8480720561057976597
  jne r3, r4, jmp_23528
  ldxdw r3, [r2+18]
  lddw r4, 7461006668826005640
  jne r3, r4, jmp_23528
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -1412322337336563229
  jeq r4, r5, jmp_23530

jmp_23528:
  mov64 r3, 1

jmp_23530:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, 1399876914085531989
  jne r3, r4, jmp_235c0
  ldxdw r3, [r2+10]
  lddw r4, 3750823436284799567
  jne r3, r4, jmp_235c0
  ldxdw r3, [r2+18]
  lddw r4, -3070781618096322690
  jne r3, r4, jmp_235c0
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, 7606355701935812049
  jeq r4, r5, jmp_235c8

jmp_235c0:
  mov64 r3, 1

jmp_235c8:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -1632001642340221574
  jne r3, r4, jmp_23658
  ldxdw r3, [r2+10]
  lddw r4, 8827510275200544966
  jne r3, r4, jmp_23658
  ldxdw r3, [r2+18]
  lddw r4, 7913477912056730528
  jne r3, r4, jmp_23658
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -3189807322954948524
  jeq r4, r5, jmp_23660

jmp_23658:
  mov64 r3, 1

jmp_23660:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -4967779272591890170
  jne r3, r4, jmp_236f0
  ldxdw r3, [r2+10]
  lddw r4, 7966950530949584949
  jne r3, r4, jmp_236f0
  ldxdw r3, [r2+18]
  lddw r4, 3039776121969245976
  jne r3, r4, jmp_236f0
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -3113807682611379106
  jeq r4, r5, jmp_236f8

jmp_236f0:
  mov64 r3, 1

jmp_236f8:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -5747981566769578293
  jne r3, r4, jmp_23788
  ldxdw r3, [r2+10]
  lddw r4, 5020578267535386987
  jne r3, r4, jmp_23788
  ldxdw r3, [r2+18]
  lddw r4, 6428496260637191791
  jne r3, r4, jmp_23788
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, 4811983434563935851
  jeq r4, r5, jmp_23790

jmp_23788:
  mov64 r3, 1

jmp_23790:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -2103798496248350451
  jne r3, r4, jmp_23820
  ldxdw r3, [r2+10]
  lddw r4, 7460384090950721156
  jne r3, r4, jmp_23820
  ldxdw r3, [r2+18]
  lddw r4, 6225909620063481131
  jne r3, r4, jmp_23820
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, 6091967181996833443
  jeq r4, r5, jmp_23828

jmp_23820:
  mov64 r3, 1

jmp_23828:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -7794643231621059372
  jne r3, r4, jmp_238b8
  ldxdw r3, [r2+10]
  lddw r4, 1690746628767058523
  jne r3, r4, jmp_238b8
  ldxdw r3, [r2+18]
  lddw r4, 7999319151635705803
  jne r3, r4, jmp_238b8
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -6852716169369644997
  jeq r4, r5, jmp_238c0

jmp_238b8:
  mov64 r3, 1

jmp_238c0:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -1995264692610322277
  jne r3, r4, jmp_23950
  ldxdw r3, [r2+10]
  lddw r4, 7247355053740244306
  jne r3, r4, jmp_23950
  ldxdw r3, [r2+18]
  lddw r4, 2750605575308327169
  jne r3, r4, jmp_23950
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, 6620906231919047251
  jeq r4, r5, jmp_23958

jmp_23950:
  mov64 r3, 1

jmp_23958:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -553784691457834484
  jne r3, r4, jmp_239e8
  ldxdw r3, [r2+10]
  lddw r4, 3307855567893720341
  jne r3, r4, jmp_239e8
  ldxdw r3, [r2+18]
  lddw r4, 7759680424013031670
  jne r3, r4, jmp_239e8
  mov64 r3, 0
  ldxdw r4, [r2+26]
  lddw r5, -3974045808917541545
  jeq r4, r5, jmp_239f0

jmp_239e8:
  mov64 r3, 1

jmp_239f0:
  jeq r3, 0, jmp_23b18
  ldxdw r3, [r2+2]
  lddw r4, -3975646754120086780
  jne r3, r4, jmp_23a80
  ldxdw r3, [r2+10]
  lddw r4, 8278757209229882069
  jne r3, r4, jmp_23a80
  ldxdw r3, [r2+18]
  lddw r4, 4820819358789892100
  jne r3, r4, jmp_23a80
  mov64 r3, 0
  ldxdw r2, [r2+26]
  lddw r4, -4222439958873533581
  jeq r2, r4, jmp_23a88

jmp_23a80:
  mov64 r3, 1

jmp_23a88:
  jeq r3, 0, jmp_23b18
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r2, r10
  add64 r2, -24
  mov64 r5, r10
  mov64 r6, r1
  mov64 r1, r2
  lddw r2, 56294995342131200
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  mov64 r1, r6
  ldxdw r4, [r10-16]
  ldxdw r3, [r10-24]
  ja jmp_23b28

jmp_23b18:
  mov64 r3, 0
  mov64 r4, 0

jmp_23b28:
  stxdw [r1+8], r3
  stxdw [r1+16], r4
  stw [r1+0], 0
  exit

fn_23b48:
  mov64 r6, r1
  mov64 r3, 0
  ldxdw r1, [r2+8]
  ldxdw r9, [r2+0]
  mov64 r2, r9
  add64 r2, r1
  ldxh r1, [r2-2]
  ldxh r4, [r9+0]
  mov64 r2, 0
  jle r4, r1, jmp_24748
  lsh64 r1, 1
  mov64 r2, r9
  add64 r2, r1
  ldxh r1, [r2+2]
  add64 r9, r1
  ldxh r8, [r9+0]
  mov64 r1, r8
  mul64 r1, 33
  mov64 r7, r9
  add64 r7, r1
  mov64 r1, r7
  add64 r1, 2
  ldxdw r2, [r7+2]
  lddw r3, 7980433456693082372
  jne r2, r3, jmp_23c80
  ldxdw r2, [r1+8]
  lddw r3, 510429368607405294
  jne r2, r3, jmp_23c80
  ldxdw r2, [r1+16]
  lddw r3, 5876903548418175485
  jne r2, r3, jmp_23c80
  mov64 r2, 0
  ldxdw r3, [r1+24]
  lddw r4, -8136953021443755774
  jeq r3, r4, jmp_23c88

jmp_23c80:
  mov64 r2, 1

jmp_23c88:
  jeq r2, 0, jmp_23e68
  ldxdw r2, [r1+0]
  lddw r3, 5220724072241619893
  jne r2, r3, jmp_23d18
  ldxdw r2, [r1+8]
  lddw r3, -2959324894810010007
  jne r2, r3, jmp_23d18
  ldxdw r2, [r1+16]
  lddw r3, 6969507811222894677
  jne r2, r3, jmp_23d18
  mov64 r2, 0
  ldxdw r3, [r1+24]
  lddw r4, 1170021923126530224
  jeq r3, r4, jmp_23d20

jmp_23d18:
  mov64 r2, 1

jmp_23d20:
  jeq r2, 0, jmp_23e68
  ldxdw r2, [r1+0]
  lddw r3, -4967779272591890170
  jne r2, r3, jmp_23db0
  ldxdw r2, [r1+8]
  lddw r3, 7966950530949584949
  jne r2, r3, jmp_23db0
  ldxdw r2, [r1+16]
  lddw r3, 3039776121969245976
  jne r2, r3, jmp_23db0
  mov64 r2, 0
  ldxdw r3, [r1+24]
  lddw r4, -3113807682611379106
  jeq r3, r4, jmp_23db8

jmp_23db0:
  mov64 r2, 1

jmp_23db8:
  jeq r2, 0, jmp_23e68
  ldxdw r2, [r1+0]
  lddw r3, 1399876914085531989
  jne r2, r3, jmp_23e48
  ldxdw r2, [r1+8]
  lddw r3, 3750823436284799567
  jne r2, r3, jmp_23e48
  ldxdw r2, [r1+16]
  lddw r3, -3070781618096322690
  jne r2, r3, jmp_23e48
  mov64 r4, 0
  ldxdw r2, [r1+24]
  lddw r3, 7606355701935812049
  jeq r2, r3, jmp_23e50

jmp_23e48:
  mov64 r4, 1

jmp_23e50:
  mov64 r3, 0
  mov64 r2, 0
  jne r4, 0, jmp_24748

jmp_23e68:
  ldxdw r2, [r1+0]
  lddw r3, 7980433456693082372
  jne r2, r3, jmp_23ef0
  ldxdw r2, [r1+8]
  lddw r3, 510429368607405294
  jne r2, r3, jmp_23ef0
  ldxdw r2, [r1+16]
  lddw r3, 5876903548418175485
  jne r2, r3, jmp_23ef0
  mov64 r2, 0
  ldxdw r3, [r1+24]
  lddw r4, -8136953021443755774
  jeq r3, r4, jmp_23ef8

jmp_23ef0:
  mov64 r2, 1

jmp_23ef8:
  jeq r2, 0, jmp_24028
  ldxdw r2, [r1+0]
  lddw r3, 5220724072241619893
  jne r2, r3, jmp_23f88
  ldxdw r2, [r1+8]
  lddw r3, -2959324894810010007
  jne r2, r3, jmp_23f88
  ldxdw r2, [r1+16]
  lddw r3, 6969507811222894677
  jne r2, r3, jmp_23f88
  mov64 r4, 0
  ldxdw r1, [r1+24]
  lddw r2, 1170021923126530224
  jeq r1, r2, jmp_23f90

jmp_23f88:
  mov64 r4, 1

jmp_23f90:
  mov64 r3, 0
  mov64 r2, 0
  jne r4, 0, jmp_24748
  ldxh r1, [r7+34]
  jlt r1, 12, jmp_24748
  mov64 r2, r7
  add64 r2, 36
  ldxdw r4, [r2+0]
  lddw r5, -8621195995516023999
  jeq r4, r5, jmp_24560
  lddw r5, 7315988490902613160
  jeq r4, r5, jmp_24558
  lddw r5, -3997096532596832520
  jne r4, r5, jmp_24740
  mov64 r3, 1
  ja jmp_24560

jmp_24028:
  ldxh r3, [r7+34]
  add64 r7, 36
  mov64 r2, r7
  stxdw [r10-1336], r3
  call fn_15fe0
  mov64 r1, 0
  and64 r0, 255
  jsgt r0, 6, jmp_24090
  jsgt r0, 3, jmp_240b8
  jlt r0, 2, jmp_241d8
  mov64 r2, 8
  mov64 r3, 7
  ja jmp_24110

jmp_24090:
  jsle r0, 9, jmp_240d8
  mov64 r2, r0
  add64 r2, -10
  jlt r2, 3, jmp_241d8
  ja jmp_24458

jmp_240b8:
  mov64 r2, r0
  add64 r2, -4
  jlt r2, 2, jmp_241d8
  ja jmp_240e8

jmp_240d8:
  jeq r0, 7, jmp_24100
  jne r0, 8, jmp_24100

jmp_240e8:
  mov64 r2, 4
  mov64 r3, 3
  ja jmp_24110

jmp_24100:
  mov64 r2, 7
  mov64 r3, 6

jmp_24110:
  jge r3, r8, jmp_241d8
  jge r2, r8, jmp_241d8
  mul64 r3, 33
  mov64 r1, r9
  add64 r1, r3
  mul64 r2, 33
  mov64 r3, r9
  add64 r3, r2
  ldxdw r2, [r3+3]
  ldxdw r4, [r1+3]
  jne r4, r2, jmp_241b8
  ldxdw r2, [r3+11]
  ldxdw r4, [r1+11]
  jne r4, r2, jmp_241b8
  ldxdw r2, [r3+19]
  ldxdw r4, [r1+19]
  jne r4, r2, jmp_241b8
  mov64 r2, 0
  ldxdw r3, [r3+27]
  ldxdw r1, [r1+27]
  jeq r1, r3, jmp_241c0

jmp_241b8:
  mov64 r2, 1

jmp_241c0:
  mov64 r1, 1
  jeq r2, 0, jmp_241d8
  mov64 r1, 0

jmp_241d8:
  mov64 r2, 0
  jgt r0, 8, jmp_24440
  mov64 r3, 339
  rsh64 r3, r0
  and64 r3, 1
  jeq r3, 0, jmp_24440
  lsh64 r0, 3
  lddw r3, data_0970
  add64 r3, r0
  ldxdw r3, [r3+0]
  jge r3, r8, jmp_24440
  lddw r4, data_0928
  add64 r4, r0
  ldxdw r5, [r4+0]
  jge r5, r8, jmp_24440
  lddw r4, data_08e0
  add64 r4, r0
  ldxdw r0, [r4+0]
  jge r0, r8, jmp_24440
  mul64 r5, 33
  mov64 r4, r9
  add64 r4, r5
  mul64 r0, 33
  mov64 r2, r9
  add64 r2, r0
  ldxdw r5, [r2+3]
  ldxdw r0, [r4+3]
  jne r0, r5, jmp_24320
  ldxdw r5, [r2+11]
  ldxdw r0, [r4+11]
  jne r0, r5, jmp_24320
  ldxdw r5, [r2+19]
  ldxdw r0, [r4+19]
  jne r0, r5, jmp_24320
  mov64 r5, 0
  ldxdw r0, [r2+27]
  ldxdw r8, [r4+27]
  jeq r8, r0, jmp_24328

jmp_24320:
  mov64 r5, 1

jmp_24328:
  jeq r5, 0, jmp_246c8
  mul64 r3, 33
  add64 r9, r3
  ldxdw r3, [r9+3]
  ldxdw r5, [r4+3]
  jne r5, r3, jmp_243a8
  ldxdw r3, [r9+11]
  ldxdw r5, [r4+11]
  jne r5, r3, jmp_243a8
  ldxdw r3, [r9+19]
  ldxdw r5, [r4+19]
  jne r5, r3, jmp_243a8
  mov64 r3, 0
  ldxdw r5, [r9+27]
  ldxdw r4, [r4+27]
  jeq r4, r5, jmp_243b0

jmp_243a8:
  mov64 r3, 1

jmp_243b0:
  jeq r3, 0, jmp_246c8
  ldxdw r3, [r9+3]
  ldxdw r4, [r2+3]
  jne r4, r3, jmp_24420
  ldxdw r3, [r9+11]
  ldxdw r4, [r2+11]
  jne r4, r3, jmp_24420
  ldxdw r3, [r9+19]
  ldxdw r4, [r2+19]
  jne r4, r3, jmp_24420
  mov64 r3, 0
  ldxdw r4, [r9+27]
  ldxdw r2, [r2+27]
  jeq r2, r4, jmp_24428

jmp_24420:
  mov64 r3, 1

jmp_24428:
  mov64 r2, 1
  jeq r3, 0, jmp_24440
  mov64 r2, 0

jmp_24440:
  or64 r1, r2
  and64 r1, 1
  jne r1, 0, jmp_246c8

jmp_24458:
  mov64 r1, r10
  add64 r1, -1328
  mov64 r2, r7
  ldxdw r3, [r10-1336]
  call fn_144e8
  ldxb r1, [r10-1328]
  jeq r1, 2, jmp_24738
  mov64 r7, r10
  add64 r7, -904
  mov64 r2, r10
  add64 r2, -1328
  mov64 r1, r7
  mov64 r3, 424
  call fn_2fe08  ; → sol_memcpy_
  mov64 r1, r7
  call fn_154c8  ; → → → → custom_panic
  ldxb r1, [r10-904]
  jeq r1, 0, jmp_24510
  ldxw r1, [r10-888]
  jeq r1, 0, jmp_24538
  mov64 r1, r10
  add64 r1, -888
  ja jmp_24530

jmp_24510:
  ldxw r1, [r10-896]
  jeq r1, 0, jmp_24538
  mov64 r1, r10
  add64 r1, -896

jmp_24530:
  stw [r1+0], 0

jmp_24538:
  mov64 r3, 0
  mov64 r2, 0
  jne r0, 0, jmp_246c8
  ja jmp_24748

jmp_24558:
  mov64 r3, 2

jmp_24560:
  ldxw r4, [r7+44]
  stxb [r10-1308], r3
  stxw [r10-1312], r4
  stxdw [r10-1320], r1
  stxdw [r10-1328], r2
  mov64 r1, r10
  add64 r1, -904
  mov64 r2, r10
  add64 r2, -1328
  call fn_13160  ; → → sol_memcpy_
  ldxw r1, [r10-904]
  jle r1, 1, jmp_24738
  mov64 r2, 0
  mov64 r5, 1
  mov64 r3, r10
  add64 r3, -824
  mov64 r4, r10
  add64 r4, -896
  stxdw [r10-1336], r4
  ja jmp_24620

jmp_24600:
  add64 r3, 56
  mov64 r5, r2
  add64 r5, 1
  jge r5, r1, jmp_24738

jmp_24620:
  mov64 r0, r2
  mov64 r2, r5
  mul64 r0, 56
  ldxdw r5, [r10-1336]
  add64 r5, r0
  ldxb r0, [r5+51]
  mov64 r7, r3
  mov64 r8, r2
  ja jmp_24680

jmp_24668:
  add64 r8, 1
  add64 r7, 56
  jge r8, r1, jmp_24600

jmp_24680:
  ldxb r9, [r7+35]
  jne r0, r9, jmp_24668
  ldxb r9, [r5+16]
  jne r9, 1, jmp_24668
  ldxb r9, [r7+0]
  jne r9, 1, jmp_24668
  ldxb r9, [r7+1]
  ldxb r4, [r5+17]
  jeq r4, r9, jmp_24668

jmp_246c8:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r1, r10
  add64 r1, -904
  mov64 r5, r10
  lddw r2, 56294995342131200
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r2, [r10-896]
  ldxdw r3, [r10-904]
  ja jmp_24748

jmp_24738:
  mov64 r3, 0

jmp_24740:
  mov64 r2, 0

jmp_24748:
  stxdw [r6+8], r3
  stxdw [r6+16], r2
  stw [r6+0], 0
  exit

fn_24768:
  ldxdw r2, [r2+0]
  ldxh r3, [r2+0]
  stxdw [r10-40], r3
  jeq r3, 0, jmp_24988
  stxdw [r10-48], r1
  mov64 r1, r2
  add64 r1, 2
  stxdw [r10-32], r1
  mov64 r4, 0
  lddw r5, -5787842515412593914
  lddw r0, 2187435002301769203
  mov64 r9, r2
  ja jmp_24800

jmp_247e0:
  add64 r4, 1
  ldxdw r2, [r10-40]
  mov64 r9, r7
  jge r4, r2, jmp_249a0

jmp_24800:
  mov64 r2, r4
  lsh64 r2, 1
  ldxdw r6, [r10-32]
  add64 r6, r2
  ldxh r2, [r6+0]
  mov64 r7, r9
  add64 r9, r2
  ldxh r8, [r9+0]
  mov64 r6, r8
  mul64 r6, 33
  mov64 r2, r9
  add64 r2, r6
  ldxdw r6, [r2+2]
  jne r6, r5, jmp_248c8
  ldxdw r6, [r2+10]
  jne r6, r0, jmp_248c8
  ldxdw r6, [r2+18]
  lddw r1, -8624717032366157080
  jne r6, r1, jmp_248c8
  mov64 r6, 0
  ldxdw r2, [r2+26]
  lddw r1, 786471146256317664
  jeq r2, r1, jmp_248d0

jmp_248c8:
  mov64 r6, 1

jmp_248d0:
  jeq r6, 0, jmp_24b88
  jeq r8, 0, jmp_247e0
  add64 r9, 3
  mov64 r2, 0

jmp_248f0:
  ldxdw r6, [r9+0]
  jne r6, r5, jmp_24958
  ldxdw r6, [r9+8]
  jne r6, r0, jmp_24958
  ldxdw r6, [r9+16]
  lddw r1, -8624717032366157080
  jne r6, r1, jmp_24958
  mov64 r6, 0
  ldxdw r3, [r9+24]
  lddw r1, 786471146256317664
  jeq r3, r1, jmp_24960

jmp_24958:
  mov64 r6, 1

jmp_24960:
  jeq r6, 0, jmp_24b88
  add64 r9, 33
  add64 r2, 1
  jlt r2, r8, jmp_248f0
  ja jmp_247e0

jmp_24988:
  mov64 r2, 0
  mov64 r8, 0
  ja jmp_24bf8

jmp_249a0:
  stxdw [r10-56], r9
  mov64 r4, 0
  lddw r5, 5769792955646358175
  lddw r0, 7477079442397043648
  lddw r7, 2061640192076490765
  ja jmp_24a18

jmp_249e8:
  mov64 r2, 0
  add64 r4, 1
  mov64 r8, 0
  ldxdw r1, [r10-48]
  ldxdw r3, [r10-40]
  jge r4, r3, jmp_24bf8

jmp_24a18:
  mov64 r2, r4
  lsh64 r2, 1
  ldxdw r3, [r10-32]
  add64 r3, r2
  ldxh r2, [r3+0]
  ldxdw r9, [r10-56]
  add64 r9, r2
  ldxh r8, [r9+0]
  mov64 r3, r8
  mul64 r3, 33
  mov64 r2, r9
  add64 r2, r3
  ldxdw r3, [r2+2]
  jne r3, r5, jmp_24ad0
  ldxdw r3, [r2+10]
  jne r3, r0, jmp_24ad0
  ldxdw r3, [r2+18]
  jne r3, r7, jmp_24ad0
  mov64 r6, 0
  ldxdw r2, [r2+26]
  lddw r1, 6340740417868103156
  jeq r2, r1, jmp_24ad8

jmp_24ad0:
  mov64 r6, 1

jmp_24ad8:
  jeq r6, 0, jmp_24b88
  jeq r8, 0, jmp_249e8
  add64 r9, 3
  mov64 r2, 0

jmp_24af8:
  ldxdw r3, [r9+0]
  jne r3, r5, jmp_24b50
  ldxdw r3, [r9+8]
  jne r3, r0, jmp_24b50
  ldxdw r3, [r9+16]
  jne r3, r7, jmp_24b50
  mov64 r6, 0
  ldxdw r3, [r9+24]
  lddw r1, 6340740417868103156
  jeq r3, r1, jmp_24b80

jmp_24b50:
  mov64 r6, 1
  jeq r6, 0, jmp_24b88

jmp_24b60:
  add64 r9, 33
  add64 r2, 1
  jlt r2, r8, jmp_24af8
  ja jmp_249e8

jmp_24b80:
  jne r6, 0, jmp_24b60

jmp_24b88:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r1, r10
  add64 r1, -24
  mov64 r5, r10
  lddw r2, 253327479039590400
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r8, [r10-16]
  ldxdw r2, [r10-24]
  ldxdw r1, [r10-48]

jmp_24bf8:
  stxdw [r1+8], r2
  stxdw [r1+16], r8
  stw [r1+0], 0
  exit

fn_24c18:
  ldxdw r2, [r2+0]
  ldxh r3, [r2+0]
  stxdw [r10-40], r3
  jeq r3, 0, jmp_24e38
  stxdw [r10-48], r1
  mov64 r1, r2
  add64 r1, 2
  stxdw [r10-32], r1
  mov64 r4, 0
  lddw r5, -2237124416580716002
  lddw r0, -1934014560637950935
  mov64 r9, r2
  ja jmp_24cb0

jmp_24c90:
  add64 r4, 1
  ldxdw r2, [r10-40]
  mov64 r9, r7
  jge r4, r2, jmp_24e50

jmp_24cb0:
  mov64 r2, r4
  lsh64 r2, 1
  ldxdw r6, [r10-32]
  add64 r6, r2
  ldxh r2, [r6+0]
  mov64 r7, r9
  add64 r9, r2
  ldxh r8, [r9+0]
  mov64 r6, r8
  mul64 r6, 33
  mov64 r2, r9
  add64 r2, r6
  ldxdw r6, [r2+2]
  jne r6, r5, jmp_24d78
  ldxdw r6, [r2+10]
  jne r6, r0, jmp_24d78
  ldxdw r6, [r2+18]
  lddw r1, 7922628315170946309
  jne r6, r1, jmp_24d78
  mov64 r6, 0
  ldxdw r2, [r2+26]
  lddw r1, -6061674030200270410
  jeq r2, r1, jmp_24d80

jmp_24d78:
  mov64 r6, 1

jmp_24d80:
  jeq r6, 0, jmp_25038
  jeq r8, 0, jmp_24c90
  add64 r9, 3
  mov64 r2, 0

jmp_24da0:
  ldxdw r6, [r9+0]
  jne r6, r5, jmp_24e08
  ldxdw r6, [r9+8]
  jne r6, r0, jmp_24e08
  ldxdw r6, [r9+16]
  lddw r1, 7922628315170946309
  jne r6, r1, jmp_24e08
  mov64 r6, 0
  ldxdw r3, [r9+24]
  lddw r1, -6061674030200270410
  jeq r3, r1, jmp_24e10

jmp_24e08:
  mov64 r6, 1

jmp_24e10:
  jeq r6, 0, jmp_25038
  add64 r9, 33
  add64 r2, 1
  jlt r2, r8, jmp_24da0
  ja jmp_24c90

jmp_24e38:
  mov64 r2, 0
  mov64 r8, 0
  ja jmp_250a8

jmp_24e50:
  stxdw [r10-56], r9
  mov64 r4, 0
  lddw r5, 6381670442715875586
  lddw r0, -2085195264918724590
  lddw r7, 4869203664761973981
  ja jmp_24ec8

jmp_24e98:
  mov64 r2, 0
  add64 r4, 1
  mov64 r8, 0
  ldxdw r1, [r10-48]
  ldxdw r3, [r10-40]
  jge r4, r3, jmp_250a8

jmp_24ec8:
  mov64 r2, r4
  lsh64 r2, 1
  ldxdw r3, [r10-32]
  add64 r3, r2
  ldxh r2, [r3+0]
  ldxdw r9, [r10-56]
  add64 r9, r2
  ldxh r8, [r9+0]
  mov64 r3, r8
  mul64 r3, 33
  mov64 r2, r9
  add64 r2, r3
  ldxdw r3, [r2+2]
  jne r3, r5, jmp_24f80
  ldxdw r3, [r2+10]
  jne r3, r0, jmp_24f80
  ldxdw r3, [r2+18]
  jne r3, r7, jmp_24f80
  mov64 r6, 0
  ldxdw r2, [r2+26]
  lddw r1, 3754781022893419656
  jeq r2, r1, jmp_24f88

jmp_24f80:
  mov64 r6, 1

jmp_24f88:
  jeq r6, 0, jmp_25038
  jeq r8, 0, jmp_24e98
  add64 r9, 3
  mov64 r2, 0

jmp_24fa8:
  ldxdw r3, [r9+0]
  jne r3, r5, jmp_25000
  ldxdw r3, [r9+8]
  jne r3, r0, jmp_25000
  ldxdw r3, [r9+16]
  jne r3, r7, jmp_25000
  mov64 r6, 0
  ldxdw r3, [r9+24]
  lddw r1, 3754781022893419656
  jeq r3, r1, jmp_25030

jmp_25000:
  mov64 r6, 1
  jeq r6, 0, jmp_25038

jmp_25010:
  add64 r9, 33
  add64 r2, 1
  jlt r2, r8, jmp_24fa8
  ja jmp_24e98

jmp_25030:
  jne r6, 0, jmp_25010

jmp_25038:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r1, r10
  add64 r1, -24
  mov64 r5, r10
  lddw r2, 140737488355328000
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r8, [r10-16]
  ldxdw r2, [r10-24]
  ldxdw r1, [r10-48]

jmp_250a8:
  stxdw [r1+8], r2
  stxdw [r1+16], r8
  stw [r1+0], 0
  exit

fn_250c8:
  mov64 r3, 0
  ldxdw r4, [r2+8]
  ldxdw r2, [r2+0]
  mov64 r5, r2
  add64 r5, r4
  ldxh r4, [r5-2]
  ldxh r0, [r2+0]
  mov64 r5, 0
  jle r0, r4, jmp_25268
  lsh64 r4, 1
  mov64 r3, r2
  add64 r3, r4
  ldxh r3, [r3+2]
  add64 r2, r3
  ldxh r3, [r2+0]
  mul64 r3, 33
  add64 r2, r3
  ldxdw r3, [r2+2]
  lddw r4, 5220724072241619893
  jne r3, r4, jmp_251d8
  ldxdw r3, [r2+10]
  lddw r4, -2959324894810010007
  jne r3, r4, jmp_251d8
  ldxdw r3, [r2+18]
  lddw r4, 6969507811222894677
  jne r3, r4, jmp_251d8
  mov64 r4, 0
  ldxdw r2, [r2+26]
  lddw r3, 1170021923126530224
  jeq r2, r3, jmp_251e0

jmp_251d8:
  mov64 r4, 1

jmp_251e0:
  mov64 r3, 0
  jne r4, 0, jmp_25268
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r2, r10
  add64 r2, -24
  mov64 r5, r10
  mov64 r6, r1
  mov64 r1, r2
  lddw r2, 281474976710656000
  lddw r4, 281474976710656000
  call fn_2c1e8
  mov64 r1, r6
  ldxdw r5, [r10-16]
  ldxdw r3, [r10-24]

jmp_25268:
  stxdw [r1+8], r3
  stxdw [r1+16], r5
  stw [r1+0], 0
  exit

fn_25288:
  stxdw [r10-104], r1
  lddw r1, data_0130
  stxdw [r10-72], r1
  lddw r1, data_0150
  stxdw [r10-80], r1
  mov64 r5, 1
  lddw r4, data_0743
  ldxdw r1, [r2+0]
  mov64 r2, r1
  add64 r2, 2
  stxdw [r10-88], r2
  stxdw [r10-112], r3

jmp_25300:
  and64 r5, 1
  jeq r5, 0, jmp_253b8
  jeq r4, 0, jmp_25368
  lddw r2, data_0743
  add64 r2, 160
  jeq r4, r2, jmp_25368
  mov64 r5, 1
  mov64 r2, r4
  add64 r2, 32
  mov64 r0, r4
  mov64 r4, r2
  ja jmp_25418

jmp_25368:
  mov64 r6, r10
  add64 r6, -72
  mov64 r4, 0
  ldxdw r0, [r10-72]
  jeq r0, 0, jmp_253b8
  mov64 r5, 1
  lddw r2, data_0130
  add64 r2, 32
  jne r0, r2, jmp_25400

jmp_253b8:
  mov64 r6, r10
  add64 r6, -80
  ldxdw r0, [r10-80]
  jeq r0, 0, jmp_256d8
  mov64 r5, 0
  lddw r2, data_0150
  add64 r2, 32
  jeq r0, r2, jmp_256d8

jmp_25400:
  mov64 r2, r0
  add64 r2, 32
  stxdw [r6+0], r2

jmp_25418:
  ldxdw r2, [r0+24]
  stxdw [r10-40], r2
  ldxdw r2, [r0+16]
  stxdw [r10-48], r2
  ldxdw r2, [r0+8]
  stxdw [r10-56], r2
  ldxdw r2, [r0+0]
  stxdw [r10-64], r2
  ldxdw r0, [r3+0]
  jne r2, r0, jmp_254b8
  ldxdw r2, [r3+8]
  ldxdw r0, [r10-56]
  jne r0, r2, jmp_254b8
  ldxdw r2, [r3+16]
  ldxdw r0, [r10-48]
  jne r0, r2, jmp_254b8
  mov64 r0, 0
  ldxdw r2, [r3+24]
  ldxdw r6, [r10-40]
  jeq r6, r2, jmp_254c0

jmp_254b8:
  mov64 r0, 1

jmp_254c0:
  jeq r0, 0, jmp_25300
  stxdw [r10-96], r4
  ldxdw r2, [r10-40]
  stxdw [r10-8], r2
  ldxdw r2, [r10-48]
  stxdw [r10-16], r2
  ldxdw r2, [r10-56]
  stxdw [r10-24], r2
  ldxdw r2, [r10-64]
  stxdw [r10-32], r2
  ldxh r0, [r1+0]
  jeq r0, 0, jmp_25630
  mov64 r7, 0
  ja jmp_25540

jmp_25530:
  add64 r7, 1
  jge r7, r0, jmp_25630

jmp_25540:
  mov64 r2, r7
  lsh64 r2, 1
  ldxdw r6, [r10-88]
  add64 r6, r2
  ldxh r2, [r6+0]
  mov64 r8, r1
  add64 r8, r2
  ldxh r9, [r8+0]
  jeq r9, 0, jmp_25530
  add64 r8, 3
  mov64 r6, 0

jmp_25598:
  ldxdw r2, [r8+0]
  ldxdw r3, [r10-32]
  jne r2, r3, jmp_25600
  ldxdw r2, [r8+8]
  ldxdw r3, [r10-24]
  jne r2, r3, jmp_25600
  ldxdw r2, [r8+16]
  ldxdw r3, [r10-16]
  jne r2, r3, jmp_25600
  mov64 r2, 0
  ldxdw r3, [r8+24]
  ldxdw r4, [r10-8]
  jeq r3, r4, jmp_25608

jmp_25600:
  mov64 r2, 1

jmp_25608:
  jeq r2, 0, jmp_25648
  add64 r8, 33
  add64 r6, 1
  jlt r6, r9, jmp_25598
  ja jmp_25530

jmp_25630:
  ldxdw r3, [r10-112]
  ldxdw r4, [r10-96]
  ja jmp_25300

jmp_25648:
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  mov64 r1, r10
  add64 r1, -32
  mov64 r5, r10
  lddw r2, 253327479039590400
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r2, [r10-24]
  ldxdw r1, [r10-32]

jmp_256b0:
  ldxdw r3, [r10-104]
  stxdw [r3+8], r1
  stxdw [r3+16], r2
  stw [r3+0], 0
  exit

jmp_256d8:
  mov64 r1, 0
  mov64 r2, 0
  ja jmp_256b0

fn_256f0:
  ldxdw r2, [r2+0]
  ldxh r4, [r2+0]
  lddw r5, 8620810572370806878
  stxdw [r10-8], r5
  lddw r5, 8694266565838421454
  stxdw [r10-16], r5
  lddw r5, 1915463856607809891
  stxdw [r10-24], r5
  lddw r5, 4236348075947585802
  stxdw [r10-32], r5
  stxdw [r10-40], r4
  jeq r4, 0, jmp_25ea8
  stxdw [r10-48], r1
  stxdw [r10-56], r3
  mov64 r3, r2
  add64 r3, 2
  mov64 r0, 0
  ldxdw r1, [r10-40]
  ja jmp_257b8

jmp_257a8:
  add64 r0, 1
  jge r0, r1, jmp_258a8

jmp_257b8:
  mov64 r6, r0
  lsh64 r6, 1
  mov64 r7, r3
  add64 r7, r6
  ldxh r7, [r7+0]
  mov64 r6, r2
  add64 r6, r7
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_257a8
  add64 r6, 3
  mov64 r8, 0

jmp_25810:
  ldxdw r9, [r6+0]
  ldxdw r4, [r10-32]
  jne r9, r4, jmp_25878
  ldxdw r4, [r6+8]
  ldxdw r9, [r10-24]
  jne r4, r9, jmp_25878
  ldxdw r4, [r6+16]
  ldxdw r9, [r10-16]
  jne r4, r9, jmp_25878
  mov64 r9, 0
  ldxdw r4, [r6+24]
  ldxdw r5, [r10-8]
  jeq r4, r5, jmp_25880

jmp_25878:
  mov64 r9, 1

jmp_25880:
  jeq r9, 0, jmp_25e88
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_25810
  ja jmp_257a8

jmp_258a8:
  lddw r4, 757016980191
  stxdw [r10-8], r4
  lddw r4, 4934308791813643055
  stxdw [r10-16], r4
  lddw r4, -8535150749981322909
  stxdw [r10-24], r4
  lddw r4, 4236348075947585802
  stxdw [r10-32], r4
  mov64 r0, 0
  ja jmp_25928

jmp_25918:
  add64 r0, 1
  jge r0, r1, jmp_25a18

jmp_25928:
  mov64 r4, r0
  lsh64 r4, 1
  mov64 r5, r3
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r6, r2
  add64 r6, r4
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_25918
  add64 r6, 3
  mov64 r8, 0

jmp_25980:
  ldxdw r4, [r6+0]
  ldxdw r5, [r10-32]
  jne r4, r5, jmp_259e8
  ldxdw r4, [r6+8]
  ldxdw r5, [r10-24]
  jne r4, r5, jmp_259e8
  ldxdw r4, [r6+16]
  ldxdw r5, [r10-16]
  jne r4, r5, jmp_259e8
  mov64 r9, 0
  ldxdw r4, [r6+24]
  ldxdw r5, [r10-8]
  jeq r4, r5, jmp_259f0

jmp_259e8:
  mov64 r9, 1

jmp_259f0:
  jeq r9, 0, jmp_25e88
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_25980
  ja jmp_25918

jmp_25a18:
  lddw r4, 4323455920761134079
  stxdw [r10-8], r4
  lddw r4, 7470959052473351630
  stxdw [r10-16], r4
  lddw r4, 1915463856607809891
  stxdw [r10-24], r4
  lddw r4, 4236348075947585802
  stxdw [r10-32], r4
  mov64 r0, 0
  ja jmp_25a98

jmp_25a88:
  add64 r0, 1
  jge r0, r1, jmp_25b88

jmp_25a98:
  mov64 r4, r0
  lsh64 r4, 1
  mov64 r5, r3
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r6, r2
  add64 r6, r4
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_25a88
  add64 r6, 3
  mov64 r8, 0

jmp_25af0:
  ldxdw r4, [r6+0]
  ldxdw r5, [r10-32]
  jne r4, r5, jmp_25b58
  ldxdw r4, [r6+8]
  ldxdw r5, [r10-24]
  jne r4, r5, jmp_25b58
  ldxdw r4, [r6+16]
  ldxdw r5, [r10-16]
  jne r4, r5, jmp_25b58
  mov64 r9, 0
  ldxdw r4, [r6+24]
  ldxdw r5, [r10-8]
  jeq r4, r5, jmp_25b60

jmp_25b58:
  mov64 r9, 1

jmp_25b60:
  jeq r9, 0, jmp_25e88
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_25af0
  ja jmp_25a88

jmp_25b88:
  lddw r4, 4323456193707219453
  stxdw [r10-8], r4
  lddw r4, -687418326586964688
  stxdw [r10-16], r4
  lddw r4, 3876870492656050983
  stxdw [r10-24], r4
  lddw r4, -5157956877484297974
  stxdw [r10-32], r4
  mov64 r0, 0
  ja jmp_25c08

jmp_25bf8:
  add64 r0, 1
  jge r0, r1, jmp_25cf8

jmp_25c08:
  mov64 r4, r0
  lsh64 r4, 1
  mov64 r5, r3
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r6, r2
  add64 r6, r4
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_25bf8
  add64 r6, 3
  mov64 r8, 0

jmp_25c60:
  ldxdw r4, [r6+0]
  ldxdw r5, [r10-32]
  jne r4, r5, jmp_25cc8
  ldxdw r4, [r6+8]
  ldxdw r5, [r10-24]
  jne r4, r5, jmp_25cc8
  ldxdw r4, [r6+16]
  ldxdw r5, [r10-16]
  jne r4, r5, jmp_25cc8
  mov64 r9, 0
  ldxdw r4, [r6+24]
  ldxdw r5, [r10-8]
  jeq r4, r5, jmp_25cd0

jmp_25cc8:
  mov64 r9, 1

jmp_25cd0:
  jeq r9, 0, jmp_25e88
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_25c60
  ja jmp_25bf8

jmp_25cf8:
  stxdw [r10-64], r3
  lddw r4, -3282858224997351641
  stxdw [r10-8], r4
  lddw r4, -7822701232611803698
  stxdw [r10-16], r4
  lddw r4, 1915463856607809891
  stxdw [r10-24], r4
  lddw r4, 4236348075947585802
  stxdw [r10-32], r4
  mov64 r0, 0
  ldxdw r3, [r10-56]
  ldxdw r1, [r10-48]
  ja jmp_25d98

jmp_25d80:
  add64 r0, 1
  ldxdw r4, [r10-40]
  jge r0, r4, jmp_25ea8

jmp_25d98:
  mov64 r4, r0
  lsh64 r4, 1
  ldxdw r5, [r10-64]
  add64 r5, r4
  ldxh r4, [r5+0]
  mov64 r6, r2
  add64 r6, r4
  ldxh r7, [r6+0]
  jeq r7, 0, jmp_25d80
  add64 r6, 3
  mov64 r8, 0

jmp_25df0:
  ldxdw r4, [r6+0]
  ldxdw r5, [r10-32]
  jne r4, r5, jmp_25e58
  ldxdw r4, [r6+8]
  ldxdw r5, [r10-24]
  jne r4, r5, jmp_25e58
  ldxdw r4, [r6+16]
  ldxdw r5, [r10-16]
  jne r4, r5, jmp_25e58
  mov64 r9, 0
  ldxdw r4, [r6+24]
  ldxdw r5, [r10-8]
  jeq r4, r5, jmp_25e60

jmp_25e58:
  mov64 r9, 1

jmp_25e60:
  jeq r9, 0, jmp_25e88
  add64 r6, 33
  add64 r8, 1
  jlt r8, r7, jmp_25df0
  ja jmp_25d80

jmp_25e88:
  mov64 r3, 0
  mov64 r2, 0
  ldxdw r1, [r10-48]
  ja jmp_25ec0

jmp_25ea8:
  mov64 r2, r3
  rsh64 r2, 16
  lsh64 r3, 48

jmp_25ec0:
  stxdw [r1+8], r3
  stxdw [r1+16], r2
  stw [r1+0], 0
  exit

fn_25ee0:
  stxdw [r10-280], r4
  stxdw [r10-288], r3
  stxdw [r10-248], r2
  stxdw [r10-256], r1
  stxdw [r10-272], r5
  ldxdw r7, [r5-4088]
  ldxdw r2, [r7+1720]
  lddw r1, 7970776174128921066
  jgt r2, 3, jmp_25f40
  lddw r1, 7970776174128919018

jmp_25f40:
  stxdw [r10-264], r1
  ldxdw r2, [r7+16]
  lddw r3, -7625597767769892307
  xor64 r2, r3
  ldxdw r3, [r7+8]
  lddw r4, -7624753355724465620
  xor64 r3, r4
  ldxdw r4, [r7+0]
  lddw r5, 7625034826406274515
  xor64 r4, r5
  ldxdw r5, [r7+552]
  lddw r0, 5091621654840767449
  xor64 r5, r0
  ldxdw r0, [r7+544]
  lddw r6, -5091340175569093594
  xor64 r0, r6
  ldxdw r6, [r7+584]
  lddw r9, 5091621654840839129
  xor64 r6, r9
  ldxdw r9, [r7+576]
  lddw r1, -5091340175569095642
  xor64 r9, r1
  stxdw [r7+576], r9
  stxdw [r7+584], r6
  stxdw [r7+544], r0
  stxdw [r7+552], r5
  stxdw [r7+0], r4
  stxdw [r7+8], r3
  stxdw [r7+16], r2
  ldxdw r1, [r7+24]
  lddw r2, -7625316297088083410
  xor64 r1, r2
  stxdw [r7+24], r1
  ldxdw r1, [r7+592]
  ldxdw r2, [r10-264]
  xor64 r1, r2
  stxdw [r7+592], r1
  ldxdw r1, [r7+32]
  lddw r2, -7626160709132985809
  xor64 r1, r2
  stxdw [r7+32], r1
  lddw r1, -7625879238451176920
  ldxdw r2, [r7+40]
  xor64 r2, r1
  stxdw [r7+40], r2
  lddw r1, -7626723650496603607
  ldxdw r2, [r7+48]
  xor64 r2, r1
  stxdw [r7+48], r2
  lddw r1, -7626442179814794710
  ldxdw r2, [r7+56]
  xor64 r2, r1
  stxdw [r7+56], r2
  lddw r1, -7627286660579173845
  ldxdw r2, [r7+64]
  xor64 r2, r1
  stxdw [r7+64], r2
  lddw r1, -7627005189897364956
  ldxdw r2, [r7+72]
  xor64 r2, r1
  stxdw [r7+72], r2
  lddw r1, -7627849601942791643
  ldxdw r2, [r7+80]
  xor64 r2, r1
  stxdw [r7+80], r2
  lddw r1, -7627568131260982746
  ldxdw r2, [r7+88]
  xor64 r2, r1
  stxdw [r7+88], r2
  lddw r1, -7628412543305885145
  ldxdw r2, [r7+96]
  xor64 r2, r1
  stxdw [r7+96], r2
  lddw r1, -7628131072624076256
  ldxdw r2, [r7+104]
  xor64 r2, r1
  stxdw [r7+104], r2
  lddw r1, -7628975484669502943
  ldxdw r2, [r7+112]
  xor64 r2, r1
  stxdw [r7+112], r2
  lddw r1, -7628694013987694046
  ldxdw r2, [r7+120]
  xor64 r2, r1
  stxdw [r7+120], r2
  lddw r1, -7620531295499429341
  ldxdw r2, [r7+128]
  xor64 r2, r1
  stxdw [r7+128], r2
  lddw r1, -7620249824817620420
  ldxdw r2, [r7+136]
  xor64 r2, r1
  stxdw [r7+136], r2
  mov64 r1, r7
  add64 r1, 144
  stxdw [r10-296], r1
  call fn_2930  ; → sol_memcmp_
  lddw r2, 5175880792817800198
  ldxdw r1, [r7+776]
  xor64 r1, r2
  lddw r3, 5176162272089543685
  ldxdw r2, [r7+768]
  xor64 r2, r3
  lddw r4, 5176443751361287172
  ldxdw r3, [r7+760]
  xor64 r3, r4
  lddw r5, 5176725230633030659
  ldxdw r4, [r7+752]
  xor64 r4, r5
  lddw r5, 5174754910090564610
  ldxdw r0, [r7+744]
  xor64 r0, r5
  lddw r5, 5175036389362308097
  ldxdw r6, [r7+736]
  xor64 r6, r5
  lddw r5, 5175317868634051584
  ldxdw r9, [r7+728]
  xor64 r9, r5
  ldxdw r5, [r7+720]
  lddw r8, -5175599347905795073
  xor64 r5, r8
  stxdw [r7+720], r5
  stxdw [r7+728], r9
  stxdw [r7+736], r6
  stxdw [r7+744], r0
  stxdw [r7+752], r4
  stxdw [r7+760], r3
  stxdw [r7+768], r2
  stxdw [r7+776], r1
  lddw r1, 5177851113359217671
  ldxdw r2, [r7+784]
  xor64 r2, r1
  stxdw [r7+784], r2
  lddw r1, 5177569634087474184
  ldxdw r2, [r7+792]
  xor64 r2, r1
  stxdw [r7+792], r2
  lddw r1, -334136658724897736
  ldxdw r2, [r7+416]
  xor64 r2, r1
  stxdw [r7+416], r2
  lddw r2, 333855179453154247
  ldxdw r3, [r7+424]
  xor64 r3, r2
  stxdw [r7+424], r3
  lddw r3, 333573717361279942
  ldxdw r4, [r7+432]
  xor64 r4, r3
  stxdw [r7+432], r4
  lddw r4, 333292238089536453
  ldxdw r5, [r7+440]
  xor64 r5, r4
  stxdw [r7+440], r5
  ldxdw r5, [r7+384]
  xor64 r5, r1
  stxdw [r7+384], r5
  ldxdw r1, [r7+392]
  xor64 r1, r2
  stxdw [r7+392], r1
  ldxdw r1, [r7+400]
  xor64 r1, r3
  stxdw [r7+400], r1
  ldxdw r1, [r7+408]
  xor64 r1, r4
  stxdw [r7+408], r1
  ldxdw r2, [r10-272]
  ldxdw r1, [r2-4024]
  stxdw [r10-352], r1
  ldxdw r1, [r2-4032]
  stxdw [r10-368], r1
  ldxdw r1, [r2-4016]
  stxdw [r10-392], r1
  ldxdw r1, [r2-4040]
  stxdw [r10-360], r1
  ldxdw r1, [r2-4048]
  stxdw [r10-384], r1
  ldxdw r1, [r2-4056]
  stxdw [r10-312], r1
  ldxdw r1, [r2-4064]
  stxdw [r10-328], r1
  ldxdw r1, [r2-4072]
  stxdw [r10-320], r1
  ldxdw r1, [r2-4080]
  stxdw [r10-344], r1
  ldxdw r6, [r2-4096]
  ldxdw r1, [r7+1720]
  jlt r1, 6, jmp_266a0
  ldxdw r3, [r7+816]
  lddw r1, -7676137843536847794
  xor64 r3, r1
  ldxdw r2, [r7+808]
  lddw r1, 3888626711804536043
  xor64 r2, r1
  stxdw [r10-376], r2
  stxdw [r7+808], r2
  stxdw [r10-336], r3
  stxdw [r7+816], r3
  ja jmp_266b8

jmp_266a0:
  mov64 r1, 0
  stxdw [r10-376], r1
  stxdw [r10-336], r1

jmp_266b8:
  mov64 r3, r7
  add64 r3, 384
  mov64 r1, r7
  add64 r1, 416
  mov64 r2, r3
  jne r6, 0, jmp_266f0
  mov64 r2, r1

jmp_266f0:
  jne r6, 0, jmp_26700
  mov64 r1, r3

jmp_26700:
  ldxdw r3, [r2+0]
  stxdw [r10-64], r3
  ldxdw r4, [r2+8]
  stxdw [r10-56], r4
  ldxdw r5, [r2+16]
  stxdw [r10-48], r5
  ldxdw r2, [r2+24]
  stxdw [r10-40], r2
  ldxdw r0, [r1+0]
  stxdw [r10-32], r0
  ldxdw r0, [r1+8]
  stxdw [r10-24], r0
  ldxdw r0, [r1+16]
  stxdw [r10-16], r0
  ldxdw r1, [r1+24]
  stxdw [r10-8], r1
  stxdw [r10-160], r3
  stxdw [r10-152], r4
  stxdw [r10-144], r5
  stxdw [r10-136], r2
  ldxdw r1, [r10-8]
  stxdw [r10-104], r1
  ldxdw r1, [r10-16]
  stxdw [r10-112], r1
  ldxdw r1, [r10-24]
  stxdw [r10-120], r1
  ldxdw r1, [r10-32]
  stxdw [r10-128], r1
  ldxdw r9, [r10-248]
  mov64 r8, r9
  rsh64 r8, 16
  stxdw [r10-88], r8
  lsh64 r9, 48
  stxdw [r10-96], r9
  jeq r6, 0, jmp_26908
  ldxdw r4, [r7+584]
  ldxdw r3, [r7+576]
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r10
  add64 r2, -96
  call fn_15e8  ; → → sol_log_
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_26cf0
  ldxdw r0, [r10-248]
  jslt r0, 0, jmp_26d20
  ldxdw r3, [r10-16]
  ldxdw r2, [r10-24]
  mov64 r4, r2
  or64 r4, r3
  mov64 r1, -1
  stxdw [r10-400], r1
  jeq r4, 0, jmp_26d70
  mov64 r4, 1045
  jslt r3, 0, jmp_26df0
  lddw r5, 281474976710655
  jgt r3, r5, jmp_26d28
  rsh64 r2, 48
  lsh64 r3, 16
  or64 r2, r3
  mov64 r5, r0
  mov64 r0, r2
  jsgt r2, -1, jmp_26e30
  ja jmp_26d28

jmp_26908:
  stxdw [r10-304], r6
  ldxdw r6, [r7+576]
  mov64 r5, r6
  arsh64 r5, 63
  mov64 r1, r10
  add64 r1, -192
  mov64 r2, r8
  mov64 r3, 0
  mov64 r4, r6
  stxdw [r10-400], r5
  call fn_30150
  lddw r1, -281474976710656
  mov64 r4, r9
  and64 r4, r1
  mov64 r1, r10
  add64 r1, -208
  mov64 r2, r6
  mov64 r3, 0
  mov64 r5, 0
  call fn_30150
  mov64 r4, r9
  ldxdw r9, [r7+584]
  stxdw [r10-272], r8
  mov64 r8, r4
  arsh64 r8, 63
  mov64 r6, r9
  arsh64 r6, 63
  mov64 r1, r10
  add64 r1, -224
  mov64 r2, r9
  mov64 r3, r6
  stxdw [r10-264], r4
  mov64 r5, r8
  call fn_30150
  mov64 r1, r10
  add64 r1, -176
  mov64 r2, r9
  mov64 r3, r6
  ldxdw r4, [r10-272]
  mov64 r6, r4
  mov64 r5, 0
  call fn_30150
  and64 r8, r9
  ldxdw r2, [r10-216]
  add64 r2, r8
  ldxdw r4, [r10-200]
  ldxdw r1, [r10-192]
  mov64 r3, r1
  add64 r3, r4
  ldxdw r0, [r10-224]
  mov64 r8, r0
  add64 r8, r3
  mov64 r4, 1
  mov64 r5, 1
  stxdw [r10-408], r8
  jlt r8, r0, jmp_26ad8
  mov64 r5, 0

jmp_26ad8:
  add64 r2, r5
  mov64 r5, 1
  jlt r3, r1, jmp_26af8
  mov64 r5, 0

jmp_26af8:
  mov64 r8, r6
  ldxdw r1, [r10-400]
  and64 r1, r8
  ldxdw r3, [r10-184]
  add64 r3, r1
  add64 r3, r5
  ldxdw r1, [r10-176]
  mov64 r0, r3
  add64 r0, r1
  mov64 r1, r0
  add64 r1, r2
  mov64 r5, 1
  ldxdw r6, [r10-304]
  ldxdw r9, [r10-264]
  jlt r1, r0, jmp_26b78
  mov64 r5, 0

jmp_26b78:
  jlt r0, r3, jmp_26b88
  mov64 r4, 0

jmp_26b88:
  arsh64 r3, 63
  ldxdw r0, [r10-168]
  add64 r3, r0
  add64 r3, r4
  arsh64 r2, 63
  add64 r3, r2
  add64 r3, r5
  mov64 r2, r3
  lsh64 r2, 16
  mov64 r4, r1
  rsh64 r4, 48
  or64 r4, r2
  arsh64 r3, 48
  lsh64 r1, 16
  mov64 r2, r1
  arsh64 r2, 63
  xor64 r3, r2
  xor64 r4, r2
  or64 r4, r3
  jne r4, 0, jmp_26d08
  ldxdw r5, [r10-408]
  mov64 r2, r5
  rsh64 r2, 48
  or64 r1, r2
  lsh64 r5, 16
  ldxdw r2, [r10-208]
  rsh64 r2, 48
  or64 r5, r2
  mov64 r2, r5
  or64 r2, r1
  jeq r2, 0, jmp_26d40
  ldxdw r0, [r10-248]
  mov64 r2, 1056
  jslt r1, 0, jmp_26d88
  lddw r3, 281474976710655
  jgt r1, r3, jmp_26dd8
  rsh64 r5, 48
  lsh64 r1, 16
  or64 r5, r1
  jsle r5, -1, jmp_26dd8
  mov64 r1, 1
  stxdw [r10-400], r1
  jsgt r0, -1, jmp_26e30
  ja jmp_26dd0

jmp_26cf0:
  ldxdw r1, [r10-256]
  stw [r1+8], 1038
  ja jmp_275f8

jmp_26d08:
  ldxdw r1, [r10-256]
  stw [r1+8], 1050
  ja jmp_275f8

jmp_26d20:
  mov64 r4, 1042

jmp_26d28:
  ldxdw r1, [r10-256]
  stxw [r1+8], r4
  ja jmp_275f8

jmp_26d40:
  mov64 r5, 0
  ldxdw r0, [r10-248]
  mov64 r1, 1
  stxdw [r10-400], r1
  jsgt r0, -1, jmp_26e30
  ja jmp_26dd0

jmp_26d70:
  mov64 r5, r0
  mov64 r0, 0
  ja jmp_26e30

jmp_26d88:
  lddw r3, -140737488355328
  jlt r1, r3, jmp_26dd8
  rsh64 r5, 48
  lsh64 r1, 16
  or64 r5, r1
  mov64 r1, 1
  stxdw [r10-400], r1
  jsgt r0, -1, jmp_26e30

jmp_26dd0:
  mov64 r2, 1057

jmp_26dd8:
  ldxdw r1, [r10-256]
  stxw [r1+8], r2
  ja jmp_275f8

jmp_26df0:
  lddw r5, -140737488355328
  jlt r3, r5, jmp_26d28
  rsh64 r2, 48
  lsh64 r3, 16
  or64 r2, r3
  mov64 r5, r0
  mov64 r0, r2

jmp_26e30:
  stxdw [r10-264], r9
  ldxdw r4, [r7+592]
  mov64 r3, 1
  mov64 r2, 1
  jsgt r4, 0, jmp_26e60
  mov64 r2, 0

jmp_26e60:
  ldxdw r1, [r10-280]
  mov64 r9, r1
  sub64 r9, r4
  stxdw [r10-304], r9
  jslt r9, r1, jmp_26e90
  mov64 r3, 0

jmp_26e90:
  xor64 r2, r3
  and64 r2, 1
  jeq r2, 0, jmp_26ec0
  ldxdw r1, [r10-256]
  stw [r1+8], 1063
  ja jmp_275f8

jmp_26ec0:
  mov64 r4, r0
  ldxdw r1, [r10-400]
  mul64 r4, r1
  ldxdw r1, [r10-304]
  mov64 r9, r1
  add64 r9, r4
  mov64 r2, 1
  mov64 r3, 1
  jslt r9, r1, jmp_26f48
  mov64 r3, 0
  jsge r4, 0, jmp_26f50

jmp_26f18:
  xor64 r2, r3
  and64 r2, 1
  jeq r2, 0, jmp_26f70

jmp_26f30:
  ldxdw r1, [r10-256]
  stw [r1+8], 1066
  ja jmp_275f8

jmp_26f48:
  jslt r4, 0, jmp_26f18

jmp_26f50:
  mov64 r2, 0
  xor64 r2, r3
  and64 r2, 1
  jne r2, 0, jmp_26f30

jmp_26f70:
  mov64 r1, r9
  stxdw [r10-248], r0
  stxdw [r10-408], r5
  ldxdw r2, [r10-400]
  mul64 r5, r2
  ldxdw r9, [r10-288]
  mov64 r3, r9
  sub64 r3, r5
  mov64 r2, 1
  mov64 r0, 1
  jslt r3, r9, jmp_27008
  mov64 r0, 0
  jsle r5, 0, jmp_27010

jmp_26fd8:
  xor64 r2, r0
  and64 r2, 1
  jeq r2, 0, jmp_27030

jmp_26ff0:
  ldxdw r1, [r10-256]
  stw [r1+8], 1070
  ja jmp_275f8

jmp_27008:
  jsgt r5, 0, jmp_26fd8

jmp_27010:
  mov64 r2, 0
  xor64 r2, r0
  and64 r2, 1
  jne r2, 0, jmp_26ff0

jmp_27030:
  mov64 r0, 1
  mov64 r5, 1
  jslt r4, 0, jmp_270a0
  mov64 r5, 0
  ldxdw r9, [r10-280]
  mov64 r2, r9
  add64 r2, r4
  jsge r2, r9, jmp_270c0

jmp_27070:
  xor64 r5, r0
  and64 r5, 1
  jeq r5, 0, jmp_270e0

jmp_27088:
  ldxdw r1, [r10-256]
  stw [r1+8], 1073
  ja jmp_275f8

jmp_270a0:
  ldxdw r9, [r10-280]
  mov64 r2, r9
  add64 r2, r4
  jslt r2, r9, jmp_27070

jmp_270c0:
  mov64 r0, 0
  xor64 r5, r0
  and64 r5, 1
  jne r5, 0, jmp_27088

jmp_270e0:
  stxdw [r10-272], r8
  mov64 r0, r7
  add64 r0, 720
  ldxdw r4, [r7+1720]
  mov64 r5, 0
  mov64 r8, 0
  mov64 r9, r1
  jle r4, 1, jmp_271d0
  ldxdw r4, [r7+576]
  ldxdw r5, [r7+584]
  ldxdw r1, [r10-400]
  stxdw [r10-4080], r1
  mov64 r8, r0
  stxdw [r10-4088], r0
  stxdw [r10-4096], r5
  mov64 r1, r10
  add64 r1, -32
  mov64 r5, r10
  call fn_17900  ; → → → → sol_log_
  ldxw r1, [r10-32]
  jeq r1, 0, jmp_271b0

jmp_27188:
  ldxdw r1, [r10-28]
  ldxdw r2, [r10-256]
  stxdw [r2+4], r1
  stw [r2+0], 1
  ja jmp_27600

jmp_271b0:
  ldxdw r1, [r10-16]
  ldxdw r5, [r10-24]
  mov64 r0, r8
  mov64 r8, r1

jmp_271d0:
  stxdw [r10-280], r8
  ldxdw r2, [r10-304]
  mov64 r1, r2
  arsh64 r1, 63
  xor64 r2, r1
  sub64 r2, r1
  mov64 r1, r9
  arsh64 r1, 63
  xor64 r9, r1
  sub64 r9, r1
  mov64 r1, r9
  mov64 r4, r9
  mov64 r9, r2
  sub64 r1, r2
  mov64 r2, 1
  mov64 r3, 1
  mov64 r8, r4
  jslt r1, r4, jmp_272a0
  mov64 r3, 0
  jsle r9, 0, jmp_272a8

jmp_27270:
  xor64 r2, r3
  and64 r2, 1
  jeq r2, 0, jmp_272c8

jmp_27288:
  ldxdw r1, [r10-256]
  stw [r1+8], 1091
  ja jmp_275f8

jmp_272a0:
  jsgt r9, 0, jmp_27270

jmp_272a8:
  mov64 r2, 0
  xor64 r2, r3
  and64 r2, 1
  jne r2, 0, jmp_27288

jmp_272c8:
  stxdw [r10-400], r0
  stxdw [r10-288], r5
  mov64 r2, r7
  call fn_169b0
  jeq r0, 0, jmp_275e8
  ldxdw r1, [r10-408]
  jsle r1, -1, jmp_27608
  stxdw [r10-304], r6
  mov64 r6, r0
  ldxdw r2, [r10-296]
  call fn_16a50
  jeq r0, 0, jmp_27618
  stxdw [r10-416], r0
  ldxdw r1, [r7+544]
  ldxdw r2, [r7+552]
  stxdw [r10-4080], r6
  stxdw [r10-4088], r2
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -32
  mov64 r5, r10
  mov64 r2, r9
  mov64 r3, r8
  ldxdw r6, [r10-248]
  mov64 r4, r6
  call fn_17a30
  ldxw r1, [r10-32]
  jne r1, 0, jmp_27188
  ldxdw r1, [r10-16]
  stxdw [r10-424], r1
  ldxdw r9, [r10-24]
  ldxdw r4, [r7+552]
  ldxdw r3, [r7+544]
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r6
  ldxdw r5, [r10-416]
  call fn_1aed0
  ldxw r1, [r10-32]
  jne r1, 0, jmp_27188
  ldxdw r1, [r10-16]
  stxdw [r10-248], r1
  ldxdw r1, [r10-24]
  stxdw [r10-416], r1
  ldxdw r1, [r10-336]
  stxdw [r10-4080], r1
  mov64 r1, r10
  add64 r1, -128
  stxdw [r10-4088], r1
  mov64 r1, r10
  add64 r1, -160
  stxdw [r10-4096], r1
  mov64 r1, r10
  add64 r1, -32
  mov64 r5, r10
  ldxdw r2, [r10-328]
  ldxdw r3, [r10-312]
  ldxdw r4, [r10-320]
  call fn_1c610  ; → sol_log_
  ldxw r1, [r10-32]
  jne r1, 0, jmp_27188
  ldxdw r2, [r10-288]
  mov64 r1, r2
  add64 r1, r9
  mov64 r3, 1
  jlt r1, r2, jmp_274e0
  mov64 r3, 0

jmp_274e0:
  ldxdw r5, [r10-280]
  mov64 r2, r5
  ldxdw r4, [r10-424]
  add64 r2, r4
  add64 r2, r3
  mov64 r3, r5
  xor64 r3, r4
  mov64 r4, r5
  xor64 r4, r2
  xor64 r3, -1
  and64 r3, r4
  mov64 r5, 1121
  jslt r3, 0, jmp_275d0
  mov64 r4, r1
  ldxdw r3, [r10-416]
  add64 r4, r3
  mov64 r3, 1
  jlt r4, r1, jmp_27578
  mov64 r3, 0

jmp_27578:
  mov64 r1, r2
  ldxdw r5, [r10-248]
  add64 r1, r5
  add64 r1, r3
  mov64 r3, r2
  xor64 r3, r5
  xor64 r2, r1
  xor64 r3, -1
  and64 r3, r2
  mov64 r5, 1123
  jsge r3, 0, jmp_27640

jmp_275d0:
  ldxdw r1, [r10-256]
  stxw [r1+8], r5
  ja jmp_275f8

jmp_275e8:
  ldxdw r1, [r10-256]
  stw [r1+8], 782065

jmp_275f8:
  stdw [r1+0], 1

jmp_27600:
  exit

jmp_27608:
  mov64 r1, 1095
  ja jmp_27620

jmp_27618:
  mov64 r1, 782066

jmp_27620:
  ldxdw r2, [r10-256]
  stxw [r2+8], r1
  stdw [r2+0], 1
  ja jmp_27600

jmp_27640:
  stxdw [r10-328], r9
  ldxdw r2, [r7+1720]
  mov64 r5, 1
  mov64 r0, 1
  jeq r2, 1, jmp_27670
  mov64 r0, 2

jmp_27670:
  mov64 r3, 0
  jeq r2, 0, jmp_27688
  mov64 r3, r0

jmp_27688:
  ldxdw r0, [r10-16]
  stxdw [r10-312], r0
  ldxdw r0, [r10-24]
  stxdw [r10-320], r0
  rsh64 r5, r3
  jne r5, 0, jmp_27768
  ldxdw r5, [r10-344]
  jne r5, 0, jmp_27768
  ldxdw r5, [r7+704]
  xor64 r5, 59403
  lsh64 r5, 48
  mov64 r0, r4
  add64 r0, r5
  mov64 r5, 1
  mov64 r8, r0
  jlt r0, r4, jmp_27710
  mov64 r5, 0

jmp_27710:
  mov64 r0, r1
  add64 r0, r5
  mov64 r4, r1
  mov64 r6, r0
  xor64 r4, r0
  xor64 r1, -1
  and64 r1, r4
  jsge r1, 0, jmp_27780
  ldxdw r1, [r10-256]
  stw [r1+8], 1134
  ja jmp_275f8

jmp_27768:
  mov64 r8, r4
  mov64 r6, r1
  ja jmp_27790

jmp_27780:
  stxdw [r10-80], r8
  stxdw [r10-72], r6

jmp_27790:
  jle r2, 2, jmp_27958
  ldxdw r3, [r7+800]
  lddw r1, 5782998650930657501
  xor64 r3, r1
  mov64 r2, r3
  lsh64 r2, 48
  rsh64 r3, 16
  ldxdw r9, [r7+712]
  mov64 r1, r10
  add64 r1, -32
  lddw r4, 281474976711
  mov64 r5, 0
  call fn_0488
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_27a58
  ldxdw r1, [r10-16]
  stxdw [r10-336], r1
  ldxdw r1, [r10-24]
  stxdw [r10-344], r1
  lddw r1, -3235412798162765972
  xor64 r9, r1
  mov64 r4, r9
  lsh64 r4, 48
  rsh64 r9, 16
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r8
  mov64 r3, r6
  mov64 r5, r9
  call fn_0488
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_27a70
  ldxdw r3, [r10-16]
  ldxdw r2, [r10-24]
  mov64 r1, r10
  add64 r1, -64
  lddw r4, 281474976711
  mov64 r5, 0
  call fn_0488
  ldxdw r1, [r10-64]
  jeq r1, 0, jmp_27aa0
  ldxdw r1, [r10-48]
  ldxdw r4, [r10-56]
  mov64 r2, 1
  mov64 r3, 1
  jgt r4, r8, jmp_27ab8
  mov64 r3, 0
  mov64 r5, 1
  jsle r1, r6, jmp_27ac8

jmp_27938:
  jeq r1, r6, jmp_27ad8

jmp_27940:
  mov64 r3, r5
  jeq r3, 0, jmp_27ae0
  ja jmp_27ae8

jmp_27958:
  and64 r3, 7
  mov64 r1, 6
  rsh64 r1, r3
  and64 r1, 1
  jeq r1, 0, jmp_27b98
  ldxdw r3, [r7+712]
  lddw r1, -3235412798162765972
  xor64 r3, r1
  mov64 r2, r3
  lsh64 r2, 48
  rsh64 r3, 16
  mov64 r1, r10
  add64 r1, -32
  lddw r4, 281474976711
  mov64 r5, 0
  call fn_0488
  ldxdw r1, [r10-32]
  jne r1, 1, jmp_27a88
  ldxdw r5, [r10-16]
  ldxdw r4, [r10-24]
  mov64 r1, r10
  add64 r1, -64
  mov64 r2, r8
  mov64 r3, r6
  call fn_0488
  ldxdw r1, [r10-64]
  jeq r1, 0, jmp_27db0
  ldxdw r6, [r10-48]
  ldxdw r8, [r10-56]
  ja jmp_27b98

jmp_27a58:
  ldxdw r1, [r10-256]
  stw [r1+8], 1153
  ja jmp_275f8

jmp_27a70:
  ldxdw r1, [r10-256]
  stw [r1+8], 1156
  ja jmp_275f8

jmp_27a88:
  ldxdw r1, [r10-256]
  stw [r1+8], 1174
  ja jmp_275f8

jmp_27aa0:
  ldxdw r1, [r10-256]
  stw [r1+8], 1158
  ja jmp_275f8

jmp_27ab8:
  mov64 r5, 1
  jsgt r1, r6, jmp_27938

jmp_27ac8:
  mov64 r5, 0
  jne r1, r6, jmp_27940

jmp_27ad8:
  jne r3, 0, jmp_27ae8

jmp_27ae0:
  mov64 r4, r8

jmp_27ae8:
  mov64 r5, r4
  ldxdw r0, [r10-344]
  add64 r5, r0
  mov64 r8, r5
  jlt r5, r4, jmp_27b18
  mov64 r2, 0

jmp_27b18:
  jne r3, 0, jmp_27b28
  mov64 r1, r6

jmp_27b28:
  mov64 r3, r1
  ldxdw r4, [r10-336]
  add64 r3, r4
  add64 r3, r2
  mov64 r2, r1
  xor64 r2, r4
  mov64 r6, r3
  xor64 r1, r3
  xor64 r2, -1
  and64 r2, r1
  jsge r2, 0, jmp_27b98
  ldxdw r1, [r10-256]
  stw [r1+8], 1166
  ja jmp_275f8

jmp_27b98:
  ldxdw r1, [r10-360]
  and64 r1, 1
  jeq r1, 0, jmp_27c88
  mov64 r2, 1
  lddw r4, 281474976710656
  ldxdw r1, [r10-368]
  jgt r1, r4, jmp_27be0
  mov64 r2, 0

jmp_27be0:
  mov64 r1, 1196
  ldxdw r3, [r10-352]
  mov64 r5, r3
  add64 r5, r2
  neg64 r5
  and64 r3, r5
  jslt r3, 0, jmp_27620
  jslt r5, 0, jmp_280f0
  ldxdw r1, [r10-368]
  sub64 r4, r1
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r8
  mov64 r3, r6
  call fn_0488
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_28100
  ldxdw r9, [r10-16]
  ldxdw r1, [r10-24]
  stxdw [r10-336], r1
  ja jmp_27d28

jmp_27c88:
  ldxdw r1, [r10-352]
  jslt r1, 0, jmp_27da0
  mov64 r2, r8
  ldxdw r1, [r10-368]
  add64 r2, r1
  mov64 r1, 1
  stxdw [r10-336], r2
  jlt r2, r8, jmp_27cd0
  mov64 r1, 0

jmp_27cd0:
  mov64 r9, r6
  ldxdw r3, [r10-352]
  add64 r9, r3
  add64 r9, r1
  mov64 r2, r6
  xor64 r2, r3
  xor64 r6, r9
  xor64 r2, -1
  and64 r2, r6
  mov64 r1, 1188
  jsle r2, -1, jmp_27620

jmp_27d28:
  ldxdw r3, [r10-376]
  mov64 r2, r3
  lsh64 r2, 48
  rsh64 r3, 16
  mov64 r1, r10
  add64 r1, -32
  lddw r4, 281474976710656000
  mov64 r5, 0
  call fn_07e8  ; → → → custom_panic
  ldxb r1, [r10-16]
  jeq r1, 0, jmp_27dc8
  ldxdw r1, [r10-256]
  stw [r1+8], 1208
  ja jmp_275f8

jmp_27da0:
  mov64 r1, 1184
  ja jmp_27620

jmp_27db0:
  ldxdw r1, [r10-256]
  stw [r1+8], 1176
  ja jmp_275f8

jmp_27dc8:
  ldxdw r3, [r10-24]
  ldxdw r2, [r10-32]
  ldxdw r5, [r10-384]
  mov64 r4, r5
  lsh64 r4, 48
  rsh64 r5, 16
  mov64 r1, r10
  add64 r1, -32
  call fn_0488
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_28118
  ldxdw r3, [r10-16]
  ldxdw r2, [r10-24]
  mov64 r1, r10
  add64 r1, -240
  lddw r4, 281474976710656000
  mov64 r5, 0
  call fn_0028  ; → → → → custom_panic
  ldxdw r4, [r10-336]
  mov64 r1, r4
  ldxdw r2, [r10-320]
  add64 r1, r2
  mov64 r3, 1
  jlt r1, r4, jmp_27e98
  mov64 r3, 0

jmp_27e98:
  mov64 r2, r9
  ldxdw r4, [r10-312]
  add64 r2, r4
  add64 r2, r3
  mov64 r3, r9
  xor64 r3, r4
  xor64 r9, r2
  xor64 r3, -1
  and64 r3, r9
  mov64 r4, 1217
  jslt r3, 0, jmp_26d28
  ldxdw r4, [r10-232]
  ldxdw r5, [r10-240]
  mov64 r3, r1
  add64 r3, r5
  mov64 r5, 1
  jlt r3, r1, jmp_27f28
  mov64 r5, 0

jmp_27f28:
  mov64 r1, r2
  add64 r1, r4
  add64 r1, r5
  mov64 r5, r2
  xor64 r5, r4
  xor64 r2, r1
  xor64 r5, -1
  and64 r5, r2
  mov64 r4, 1219
  jslt r5, 0, jmp_26d28
  ldxdw r4, [r10-392]
  lsh64 r4, 48
  mov64 r2, r3
  add64 r2, r4
  mov64 r4, 1
  jlt r2, r3, jmp_27fb0
  mov64 r4, 0

jmp_27fb0:
  ldxdw r0, [r10-392]
  rsh64 r0, 16
  mov64 r3, r1
  add64 r3, r0
  add64 r3, r4
  mov64 r5, r1
  xor64 r5, r0
  xor64 r1, r3
  xor64 r5, -1
  and64 r5, r1
  mov64 r4, 1221
  jslt r5, 0, jmp_26d28
  stxdw [r10-80], r2
  stxdw [r10-72], r3
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r10
  add64 r2, -80
  lddw r3, 2814749767106560000
  mov64 r4, 0
  call fn_19d8
  ldxdw r1, [r10-32]
  jne r1, 1, jmp_28130
  mov64 r1, 1
  mov64 r3, 1
  ldxdw r2, [r10-320]
  jne r2, 0, jmp_28148
  mov64 r3, 0
  ldxdw r2, [r10-312]
  jsle r2, 0, jmp_28158

jmp_280a8:
  ldxdw r2, [r10-312]
  jeq r2, 0, jmp_28170

jmp_280b8:
  mov64 r3, r1
  lddw r1, data_036e
  mov64 r2, 4
  and64 r3, 1
  jne r3, 0, jmp_28198
  ja jmp_285a8

jmp_280f0:
  mov64 r1, 1198
  ja jmp_27620

jmp_28100:
  ldxdw r1, [r10-256]
  stw [r1+8], 1202
  ja jmp_275f8

jmp_28118:
  ldxdw r1, [r10-256]
  stw [r1+8], 1211
  ja jmp_275f8

jmp_28130:
  ldxdw r1, [r10-256]
  stw [r1+8], 1225
  ja jmp_275f8

jmp_28148:
  ldxdw r2, [r10-312]
  jsgt r2, 0, jmp_280a8

jmp_28158:
  mov64 r1, 0
  ldxdw r2, [r10-312]
  jne r2, 0, jmp_280b8

jmp_28170:
  lddw r1, data_036e
  mov64 r2, 4
  and64 r3, 1
  jeq r3, 0, jmp_285a8

jmp_28198:
  ldxdw r6, [r10-16]
  ldxdw r9, [r10-24]
  call sol_log_
  ldxdw r2, [r7+1720]
  lddw r1, 7970776174128919018
  jlt r2, 4, jmp_281e0
  lddw r1, 7970776174128921066

jmp_281e0:
  ldxdw r2, [r7+544]
  lddw r3, -5091340175569093594
  xor64 r2, r3
  stxdw [r7+544], r2
  ldxdw r2, [r7+552]
  lddw r3, 5091621654840767449
  xor64 r2, r3
  stxdw [r7+552], r2
  ldxdw r2, [r7+592]
  xor64 r2, r1
  stxdw [r7+592], r2
  mov64 r1, r7
  call fn_2328
  ldxdw r1, [r10-296]
  call fn_2930  ; → sol_memcmp_
  ldxdw r1, [r10-400]
  call fn_2798
  lddw r2, 333855179453154247
  ldxdw r3, [r7+424]
  xor64 r3, r2
  ldxdw r1, [r7+392]
  xor64 r1, r2
  lddw r2, -334136658724897736
  ldxdw r4, [r7+416]
  xor64 r4, r2
  ldxdw r5, [r7+384]
  xor64 r5, r2
  stxdw [r7+416], r4
  stxdw [r7+424], r3
  lddw r2, 333573717361279942
  ldxdw r3, [r7+432]
  xor64 r3, r2
  stxdw [r7+432], r3
  lddw r3, 333292238089536453
  ldxdw r4, [r7+440]
  xor64 r4, r3
  stxdw [r7+440], r4
  stxdw [r7+384], r5
  stxdw [r7+392], r1
  ldxdw r1, [r7+400]
  xor64 r1, r2
  stxdw [r7+400], r1
  ldxdw r1, [r7+408]
  xor64 r1, r3
  stxdw [r7+408], r1
  ldxdw r1, [r7+1720]
  jle r1, 5, jmp_283d8
  ldxdw r1, [r7+808]
  lddw r2, 3888626711804536043
  xor64 r1, r2
  stxdw [r7+808], r1
  ldxdw r1, [r7+816]
  lddw r2, -7676137843536847794
  xor64 r1, r2
  stxdw [r7+816], r1

jmp_283d8:
  lddw r1, 281474976710656
  mov64 r8, r9
  add64 r8, r1
  mov64 r1, 1
  jlt r8, r9, jmp_28410
  mov64 r1, 0

jmp_28410:
  mov64 r9, r6
  add64 r9, r1
  mov64 r1, r6
  xor64 r1, r9
  xor64 r6, -1
  and64 r6, r1
  jsge r6, 0, jmp_28460
  ldxdw r1, [r10-256]
  stw [r1+8], 1275
  ja jmp_275f8

jmp_28460:
  ldxdw r1, [r10-304]
  jeq r1, 0, jmp_28650
  ldxdw r3, [r7+584]
  ldxdw r2, [r7+576]
  mov64 r1, r10
  add64 r1, -32
  mov64 r4, r8
  mov64 r5, r9
  call fn_0488
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_28928
  ldxdw r4, [r10-16]
  ldxdw r3, [r10-24]
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r10
  add64 r2, -96
  call fn_15e8  ; → → sol_log_
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_28960
  ldxdw r2, [r10-16]
  ldxdw r1, [r10-24]
  ldxdw r3, [r7+576]
  lddw r4, -5091340175569095642
  xor64 r3, r4
  stxdw [r7+576], r3
  ldxdw r3, [r7+584]
  lddw r4, 5091621654840839129
  xor64 r3, r4
  stxdw [r7+584], r3
  mov64 r3, r1
  or64 r3, r2
  jeq r3, 0, jmp_28978
  lddw r3, 281474976710655
  jle r2, r3, jmp_28988
  ldxdw r1, [r10-256]
  stw [r1+8], 1329
  ja jmp_275f8

jmp_285a8:
  lddw r1, 999999999999
  ldxdw r3, [r10-408]
  jle r3, r1, jmp_287c0
  lddw r1, 1000000000000
  ldxdw r2, [r10-408]
  div64 r2, r1
  add64 r2, -1
  mov64 r3, r2
  jge r2, 19, jmp_28940
  mov64 r1, r3
  lsh64 r1, 3
  lddw r2, 207448
  add64 r2, r1
  lsh64 r3, 2
  add64 r3, 4
  ldxdw r1, [r2+0]
  mov64 r2, r3
  ja jmp_28198

jmp_28650:
  ldxdw r5, [r7+584]
  ldxdw r4, [r7+576]
  mov64 r1, r10
  add64 r1, -32
  ldxdw r2, [r10-264]
  ldxdw r3, [r10-272]
  call fn_0488
  mov64 r3, 1284
  ldxdw r1, [r10-32]
  jeq r1, 0, jmp_287a8
  ldxdw r1, [r10-16]
  ldxdw r2, [r10-24]
  stxdw [r10-64], r2
  stxdw [r10-56], r1
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r10
  add64 r2, -64
  mov64 r3, r8
  mov64 r4, r9
  call fn_15e8  ; → → sol_log_
  mov64 r3, 1289
  ldxdw r1, [r10-32]
  jne r1, 1, jmp_287a8
  ldxdw r2, [r10-16]
  ldxdw r1, [r10-24]
  ldxdw r3, [r7+576]
  lddw r4, -5091340175569095642
  xor64 r3, r4
  stxdw [r7+576], r3
  ldxdw r3, [r7+584]
  lddw r4, 5091621654840839129
  xor64 r3, r4
  stxdw [r7+584], r3
  mov64 r3, r1
  or64 r3, r2
  jeq r3, 0, jmp_28978
  mov64 r3, 1299
  lddw r4, 281474976710655
  jle r2, r4, jmp_28988

jmp_287a8:
  ldxdw r1, [r10-256]
  stxw [r1+8], r3
  ja jmp_275f8

jmp_287c0:
  lddw r1, data_037e
  lddw r3, 499999999999
  ldxdw r4, [r10-408]
  jgt r4, r3, jmp_28198
  lddw r1, data_0372
  lddw r3, 249999999999
  ldxdw r4, [r10-408]
  jgt r4, r3, jmp_28198
  lddw r1, data_037a
  lddw r3, 99999999999
  ldxdw r4, [r10-408]
  jgt r4, r3, jmp_28198
  lddw r1, data_038a
  lddw r3, 24999999999
  ldxdw r4, [r10-408]
  jgt r4, r3, jmp_28198
  lddw r1, data_0382
  lddw r3, 9999999999
  ldxdw r4, [r10-408]
  jgt r4, r3, jmp_28198
  lddw r1, data_038e
  ldxdw r3, [r10-408]
  jgt r3, 999999999, jmp_28198
  lddw r1, data_0386
  ldxdw r3, [r10-408]
  jgt r3, 99999999, jmp_28198
  lddw r1, data_0376
  ldxdw r3, [r10-408]
  jgt r3, 24999999, jmp_28198
  lddw r1, data_036e
  ja jmp_28198

jmp_28928:
  ldxdw r1, [r10-256]
  stw [r1+8], 1314
  ja jmp_275f8

jmp_28940:
  lddw r1, data_0656
  mov64 r2, 80
  ja jmp_28198

jmp_28960:
  ldxdw r1, [r10-256]
  stw [r1+8], 1319
  ja jmp_275f8

jmp_28978:
  mov64 r1, 0
  ja jmp_289a0

jmp_28988:
  rsh64 r1, 48
  lsh64 r2, 16
  or64 r1, r2

jmp_289a0:
  ldxdw r2, [r10-256]
  ldxdw r3, [r10-288]
  stxdw [r2+40], r3
  ldxdw r3, [r10-328]
  stxdw [r2+24], r3
  ldxdw r3, [r10-416]
  stxdw [r2+8], r3
  stxdw [r2+56], r1
  ldxdw r1, [r10-280]
  stxdw [r2+48], r1
  ldxdw r1, [r10-424]
  stxdw [r2+32], r1
  ldxdw r1, [r10-248]
  stxdw [r2+16], r1
  stw [r2+0], 0
  ja jmp_27600

fn_28a20:  ; → sol_try_find_program_address
  mov64 r6, r1
  stxdw [r10-72], r3
  lddw r1, data_0090
  stxdw [r10-88], r1
  stxdw [r10-104], r2
  stdw [r10-64], 32
  stdw [r10-80], 32
  stdw [r10-96], 32
  stb [r10-49], 255
  mov64 r1, r10
  add64 r1, -104
  mov64 r4, r10
  add64 r4, -48
  mov64 r5, r10
  add64 r5, -49
  mov64 r2, 3
  lddw r3, data_0050
  call sol_try_find_program_address
  jne r0, 0, jmp_28b10
  ldxdw r1, [r10-24]
  stxdw [r6+24], r1
  ldxdw r1, [r10-32]
  stxdw [r6+16], r1
  ldxdw r1, [r10-40]
  stxdw [r6+8], r1
  ldxdw r1, [r10-48]
  stxdw [r6+0], r1
  exit

jmp_28b10:
  lddw r1, 206312
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  lddw r2, 206328
  call fn_2de88  ; → → custom_panic

fn_28b70:  ; → sol_log_
  mov64 r4, r3
  mov64 r8, -64
  ldxdw r6, [r2+24]
  mov64 r5, r6
  jne r6, 0, jmp_28bc8
  mov64 r8, -128
  ldxdw r5, [r2+16]
  jne r5, 0, jmp_28bc8
  mov64 r8, -192
  ldxdw r5, [r2+8]
  jeq r5, 0, jmp_2a1f0

jmp_28bc8:
  mov64 r3, r5
  rsh64 r3, 1
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 2
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 4
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 8
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 16
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 32
  or64 r5, r3
  xor64 r5, -1
  lddw r3, 6148914691236517205
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r3
  sub64 r5, r0
  lddw r0, 3689348814741910323
  mov64 r3, r5
  and64 r3, r0
  rsh64 r5, 2
  and64 r5, r0
  add64 r3, r5
  mov64 r5, r3
  rsh64 r5, 4
  add64 r3, r5
  lddw r5, 1085102592571150095
  and64 r3, r5
  lddw r5, 72340172838076673
  mul64 r3, r5
  rsh64 r3, 56
  sub64 r8, r3
  add64 r8, 320
  mov64 r7, -64
  ldxdw r5, [r4+24]
  jne r5, 0, jmp_2a380

jmp_28d40:
  mov64 r7, -128
  ldxdw r5, [r4+16]
  jne r5, 0, jmp_2a380
  mov64 r7, -192
  ldxdw r5, [r4+8]
  jne r5, 0, jmp_2a380
  mov64 r9, r6
  mov64 r7, 64
  ldxdw r5, [r4+0]
  mov64 r6, 64
  jeq r5, 0, jmp_28ef0
  mov64 r3, r5
  rsh64 r3, 1
  mov64 r0, r5
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 2
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 4
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 8
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 16
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 32
  or64 r0, r3
  xor64 r0, -1
  lddw r3, 6148914691236517205
  mov64 r6, r0
  rsh64 r6, 1
  and64 r6, r3
  sub64 r0, r6
  lddw r3, 3689348814741910323
  mov64 r6, r0
  and64 r6, r3
  rsh64 r0, 2
  and64 r0, r3
  add64 r6, r0
  mov64 r3, r6
  rsh64 r3, 4
  add64 r6, r3
  lddw r3, 1085102592571150095
  and64 r6, r3
  lddw r3, 72340172838076673
  mul64 r6, r3
  rsh64 r6, 56

jmp_28ef0:
  jeq r5, 0, jmp_2a570
  sub64 r7, r6
  mov64 r6, r9
  jlt r8, r7, jmp_2a4e8

jmp_28f10:
  stxdw [r10-520], r1
  jge r7, 65, jmp_29170
  ldxdw r7, [r4+0]
  jeq r7, 0, jmp_2a648
  ldxdw r9, [r2+16]
  ldxdw r8, [r2+8]
  ldxdw r1, [r2+0]
  stxdw [r10-400], r1
  mov64 r3, r6
  div64 r6, r7
  mov64 r1, r6
  mul64 r1, r7
  sub64 r3, r1
  mov64 r1, r10
  add64 r1, -312
  mov64 r2, r9
  mov64 r4, r7
  mov64 r5, 0
  call fn_31788
  ldxdw r2, [r10-312]
  stxdw [r10-408], r2
  ldxdw r3, [r10-304]
  mov64 r1, r10
  add64 r1, -328
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-328]
  sub64 r9, r1
  mov64 r1, r10
  add64 r1, -344
  mov64 r2, r8
  mov64 r3, r9
  mov64 r4, r7
  mov64 r5, 0
  call fn_31788
  ldxdw r2, [r10-344]
  stxdw [r10-416], r2
  ldxdw r3, [r10-336]
  mov64 r1, r10
  add64 r1, -360
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-360]
  sub64 r8, r1
  mov64 r1, r10
  add64 r1, -376
  ldxdw r9, [r10-400]
  mov64 r2, r9
  mov64 r3, r8
  mov64 r4, r7
  mov64 r5, 0
  call fn_31788
  mov64 r1, r10
  add64 r1, -392
  ldxdw r8, [r10-376]
  ldxdw r3, [r10-368]
  mov64 r2, r8
  mov64 r4, r7
  mov64 r5, 0
  call fn_30150
  ldxdw r2, [r10-520]
  stxdw [r2+24], r6
  ldxdw r1, [r10-408]
  stxdw [r2+16], r1
  ldxdw r1, [r10-416]
  stxdw [r2+8], r1
  stxdw [r2+0], r8
  ldxdw r1, [r10-392]
  sub64 r9, r1
  stxdw [r2+32], r9
  stdw [r2+40], 0
  stdw [r2+48], 0
  stdw [r2+56], 0
  ja jmp_2a548

jmp_29170:
  ldxdw r3, [r4+24]
  stxdw [r10-112], r3
  ldxdw r3, [r4+16]
  stxdw [r10-120], r3
  ldxdw r3, [r4+8]
  stxdw [r10-128], r3
  ldxdw r3, [r4+0]
  stxdw [r10-136], r3
  add64 r7, -1
  rsh64 r7, 6
  mov64 r3, r7
  lsh64 r3, 3
  mov64 r4, r10
  add64 r4, -136
  add64 r4, r3
  stxdw [r10-408], r4
  ldxdw r5, [r4+0]
  jeq r5, 0, jmp_29360
  mov64 r3, r5
  rsh64 r3, 1
  mov64 r0, r5
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 2
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 4
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 8
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 16
  or64 r0, r3
  mov64 r3, r0
  rsh64 r3, 32
  or64 r0, r3
  xor64 r0, -1
  lddw r3, 6148914691236517205
  mov64 r4, r0
  rsh64 r4, 1
  and64 r4, r3
  sub64 r0, r4
  lddw r3, 3689348814741910323
  mov64 r4, r0
  and64 r4, r3
  rsh64 r0, 2
  and64 r0, r3
  add64 r4, r0
  mov64 r3, r4
  rsh64 r3, 4
  add64 r4, r3
  lddw r3, 1085102592571150095
  and64 r4, r3
  lddw r3, 72340172838076673
  mul64 r4, r3
  rsh64 r4, 56
  ja jmp_29368

jmp_29360:
  mov64 r4, 64

jmp_29368:
  stxdw [r10-416], r6
  stxdw [r10-400], r8
  stxdw [r10-512], r4
  stxdw [r10-504], r7
  mov64 r3, 1
  jeq r5, 0, jmp_293a0
  mov64 r3, 0

jmp_293a0:
  lsh64 r3, 3
  ldxdw r4, [r10-112]
  ldxdw r0, [r10-120]
  ldxdw r6, [r10-128]
  ldxdw r9, [r10-136]
  mov64 r8, r10
  add64 r8, -184
  mov64 r7, r8
  add64 r7, r3
  stdw [r10-160], 0
  stdw [r10-168], 0
  stdw [r10-176], 0
  stdw [r10-184], 0
  ldxdw r1, [r10-512]
  and64 r1, 63
  mov64 r3, r9
  lsh64 r3, r1
  stxdw [r7+0], r3
  mov64 r3, 16
  jeq r5, 0, jmp_29448
  mov64 r3, 8

jmp_29448:
  add64 r8, r3
  mov64 r3, r6
  lsh64 r3, r1
  stxdw [r8+0], r3
  mov64 r3, r0
  lsh64 r3, r1
  stxdw [r7+16], r3
  jeq r5, 0, jmp_29498
  lsh64 r4, r1
  stxdw [r10-160], r4

jmp_29498:
  mov64 r3, r1
  ldxdw r1, [r10-400]
  add64 r1, -1
  stxdw [r10-400], r1
  stxdw [r10-528], r3
  jeq r3, 0, jmp_29550
  add64 r7, 16
  ldxdw r3, [r10-512]
  neg64 r3
  and64 r3, 63
  rsh64 r9, r3
  ldxdw r4, [r8+0]
  add64 r4, r9
  stxdw [r8+0], r4
  rsh64 r6, r3
  ldxdw r4, [r7+0]
  add64 r4, r6
  stxdw [r7+0], r4
  jeq r5, 0, jmp_29550
  rsh64 r0, r3
  ldxdw r3, [r10-160]
  add64 r3, r0
  stxdw [r10-160], r3

jmp_29550:
  ldxdw r1, [r10-400]
  rsh64 r1, 6
  stxdw [r10-400], r1
  ldxdw r3, [r10-160]
  stxdw [r10-112], r3
  ldxdw r3, [r10-168]
  stxdw [r10-120], r3
  ldxdw r3, [r10-176]
  stxdw [r10-128], r3
  ldxdw r3, [r10-184]
  stxdw [r10-136], r3
  mov64 r4, 64
  ldxdw r1, [r10-512]
  sub64 r4, r1
  mov64 r5, r4
  rsh64 r5, 6
  lsh64 r5, 3
  mov64 r6, r2
  add64 r6, r5
  ldxdw r3, [r2+0]
  and64 r4, 63
  ldxdw r0, [r6+16]
  mov64 r7, r0
  rsh64 r7, r4
  ldxdw r8, [r6+0]
  rsh64 r8, r4
  ldxdw r6, [r6+8]
  mov64 r9, r6
  rsh64 r9, r4
  jeq r1, 0, jmp_296b0
  add64 r5, r2
  ldxdw r2, [r5+24]
  rsh64 r2, r4
  jeq r4, 0, jmp_296d8
  ldxdw r5, [r10-528]
  ldxdw r1, [r10-416]
  lsh64 r1, r5
  add64 r1, r7
  lsh64 r0, r5
  add64 r0, r9
  lsh64 r6, r5
  add64 r6, r8
  mov64 r7, r1
  ja jmp_296f0

jmp_296b0:
  mov64 r2, 0
  jeq r4, 0, jmp_296d8
  add64 r0, r9
  add64 r6, r8
  ja jmp_296e8

jmp_296d8:
  mov64 r6, r8
  mov64 r0, r9

jmp_296e8:
  ldxdw r5, [r10-528]

jmp_296f0:
  ldxdw r1, [r10-400]
  mov64 r8, r1
  ldxdw r4, [r10-504]
  sub64 r8, r4
  mov64 r9, r4
  add64 r9, 1
  stxdw [r10-448], r9
  lsh64 r3, r5
  stxdw [r10-72], r2
  stxdw [r10-80], r7
  stxdw [r10-88], r0
  stxdw [r10-96], r6
  mov64 r5, r8
  stxdw [r10-104], r3
  lsh64 r1, 3
  mov64 r2, r4
  lsh64 r2, 3
  sub64 r1, r2
  mov64 r3, r10
  add64 r3, -104
  add64 r3, r1
  stxdw [r10-400], r3
  mov64 r1, r10
  add64 r1, -136
  add64 r2, r1
  ldxdw r1, [r10-112]
  stxdw [r10-472], r1
  ldxdw r1, [r10-120]
  stxdw [r10-480], r1
  ldxdw r1, [r10-128]
  stxdw [r10-488], r1
  ldxdw r1, [r10-136]
  stxdw [r10-496], r1
  add64 r4, 2
  stxdw [r10-456], r4
  ldxdw r1, [r2-8]
  stxdw [r10-416], r1
  stdw [r10-40], 0
  stdw [r10-48], 0
  stdw [r10-56], 0
  stdw [r10-64], 0
  ldxdw r1, [r10-408]
  ldxdw r1, [r1+0]
  stxdw [r10-408], r1
  mov64 r6, r5
  stxdw [r10-432], r5

jmp_29860:
  mov64 r9, r6
  ldxdw r1, [r10-448]
  add64 r9, r1
  jge r9, 5, jmp_2a5d0
  mov64 r1, r9
  lsh64 r1, 3
  mov64 r2, r10
  add64 r2, -104
  add64 r2, r1
  mov64 r8, -1
  stxdw [r10-464], r2
  ldxdw r3, [r2+0]
  ldxdw r1, [r10-408]
  stxdw [r10-424], r6
  jge r3, r1, jmp_29b10
  mov64 r1, r6
  ldxdw r2, [r10-504]
  add64 r1, r2
  jge r1, 5, jmp_2a620
  add64 r9, -2
  jgt r9, 4, jmp_2a5d0
  lsh64 r1, 3
  mov64 r2, r10
  add64 r2, -104
  stxdw [r10-440], r2
  add64 r2, r1
  ldxdw r7, [r2+0]
  mov64 r1, r10
  add64 r1, -200
  mov64 r2, r7
  ldxdw r6, [r10-408]
  mov64 r4, r6
  mov64 r5, 0
  call fn_31788
  mov64 r1, r10
  add64 r1, -216
  ldxdw r8, [r10-200]
  ldxdw r3, [r10-192]
  mov64 r2, r8
  mov64 r4, r6
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-216]
  sub64 r7, r1
  lsh64 r9, 3
  ldxdw r1, [r10-440]
  add64 r1, r9
  ldxdw r9, [r1+0]
  ldxdw r6, [r10-424]
  ja jmp_29a10

jmp_299f0:
  add64 r8, -1
  and64 r2, 1
  mov64 r7, r1
  jne r2, 0, jmp_29b10

jmp_29a10:
  mov64 r1, r10
  add64 r1, -232
  mov64 r2, r8
  mov64 r3, 0
  ldxdw r4, [r10-416]
  mov64 r5, 0
  call fn_30150
  mov64 r2, 1
  ldxdw r3, [r10-232]
  mov64 r1, 1
  jge r9, r3, jmp_29aa8
  mov64 r1, 0
  ldxdw r3, [r10-224]
  jle r7, r3, jmp_29ab8

jmp_29a80:
  jeq r7, r3, jmp_29ac8

jmp_29a88:
  mov64 r1, r2
  and64 r1, 1
  jeq r1, 0, jmp_29ad8
  ja jmp_29b10

jmp_29aa8:
  ldxdw r3, [r10-224]
  jgt r7, r3, jmp_29a80

jmp_29ab8:
  mov64 r2, 0
  jne r7, r3, jmp_29a88

jmp_29ac8:
  and64 r1, 1
  jne r1, 0, jmp_29b10

jmp_29ad8:
  mov64 r1, r7
  ldxdw r2, [r10-408]
  add64 r1, r2
  mov64 r2, 1
  jlt r1, r7, jmp_299f0
  mov64 r2, 0
  ja jmp_299f0

jmp_29b10:
  mov64 r1, r10
  add64 r1, -248
  mov64 r2, r8
  mov64 r3, 0
  ldxdw r4, [r10-496]
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -264
  mov64 r2, r8
  mov64 r3, 0
  ldxdw r4, [r10-488]
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -280
  mov64 r2, r8
  mov64 r3, 0
  ldxdw r4, [r10-480]
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -296
  mov64 r2, r8
  mov64 r3, 0
  ldxdw r4, [r10-472]
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-264]
  ldxdw r4, [r10-240]
  mov64 r2, r4
  add64 r2, r1
  mov64 r1, 1
  mov64 r3, 1
  jlt r2, r4, jmp_29c30
  mov64 r3, 0

jmp_29c30:
  ldxdw r5, [r10-256]
  add64 r5, r3
  ldxdw r4, [r10-280]
  mov64 r3, r5
  add64 r3, r4
  mov64 r4, 1
  jlt r3, r5, jmp_29c70
  mov64 r4, 0

jmp_29c70:
  ldxdw r5, [r10-272]
  add64 r5, r4
  ldxdw r0, [r10-296]
  mov64 r4, r5
  add64 r4, r0
  jlt r4, r5, jmp_29ca8
  mov64 r1, 0

jmp_29ca8:
  ldxdw r5, [r10-248]
  stxdw [r10-184], r5
  stxdw [r10-176], r2
  stxdw [r10-168], r3
  stxdw [r10-160], r4
  ldxdw r2, [r10-288]
  add64 r2, r1
  stxdw [r10-152], r2
  ldxdw r1, [r10-432]
  jgt r1, 5, jmp_2a550
  mov64 r1, 5
  mov64 r2, 5
  sub64 r2, r6
  mov64 r3, r2
  ldxdw r4, [r10-456]
  jlt r2, r4, jmp_29d30
  ldxdw r3, [r10-456]

jmp_29d30:
  jeq r6, 5, jmp_2a600
  add64 r6, -1
  stxdw [r10-440], r6
  mov64 r4, 0
  mov64 r5, 0
  mov64 r0, 0
  ja jmp_29d98

jmp_29d68:
  sub64 r1, r7
  stxdw [r6+0], r1
  or64 r0, r9
  add64 r4, 8
  add64 r5, 1
  jge r5, r3, jmp_29e18

jmp_29d98:
  mov64 r1, r10
  add64 r1, -184
  add64 r1, r4
  ldxdw r1, [r1+0]
  mov64 r7, r1
  add64 r7, r0
  mov64 r9, 1
  mov64 r0, 1
  jlt r7, r1, jmp_29de8
  mov64 r0, 0

jmp_29de8:
  ldxdw r6, [r10-400]
  add64 r6, r4
  ldxdw r1, [r6+0]
  jlt r1, r7, jmp_29d68
  mov64 r9, 0
  ja jmp_29d68

jmp_29e18:
  and64 r0, 1
  jeq r0, 0, jmp_29f40
  ldxdw r1, [r10-448]
  jlt r2, r1, jmp_29e40
  ldxdw r2, [r10-448]

jmp_29e40:
  mov64 r3, 0
  mov64 r4, 0
  mov64 r5, 0
  ja jmp_29e88

jmp_29e60:
  stxdw [r6+0], r1
  or64 r5, r0
  add64 r3, 8
  add64 r4, 1
  jge r4, r2, jmp_29f18

jmp_29e88:
  mov64 r1, r10
  add64 r1, -136
  add64 r1, r3
  ldxdw r1, [r1+0]
  mov64 r7, r1
  add64 r7, r5
  mov64 r0, 1
  mov64 r5, 1
  jlt r7, r1, jmp_29ed8
  mov64 r5, 0

jmp_29ed8:
  ldxdw r6, [r10-400]
  add64 r6, r3
  ldxdw r9, [r6+0]
  mov64 r1, r9
  add64 r1, r7
  jlt r1, r9, jmp_29e60
  mov64 r0, 0
  ja jmp_29e60

jmp_29f18:
  ldxdw r2, [r10-464]
  ldxdw r1, [r2+0]
  add64 r1, r5
  stxdw [r2+0], r1
  add64 r8, -1

jmp_29f40:
  ldxdw r5, [r10-432]
  ldxdw r3, [r10-424]
  jge r5, 4, jmp_2a5f8
  mov64 r1, r3
  lsh64 r1, 3
  mov64 r2, r10
  add64 r2, -64
  add64 r2, r1
  stxdw [r2+0], r8
  ldxdw r1, [r10-400]
  add64 r1, -8
  stxdw [r10-400], r1
  ldxdw r6, [r10-440]
  jne r3, 0, jmp_29860
  ldxdw r1, [r10-72]
  stxdw [r10-152], r1
  ldxdw r1, [r10-80]
  stxdw [r10-160], r1
  ldxdw r2, [r10-88]
  stxdw [r10-168], r2
  ldxdw r3, [r10-96]
  stxdw [r10-176], r3
  ldxdw r4, [r10-104]
  stxdw [r10-184], r4
  ldxdw r5, [r10-528]
  rsh64 r4, r5
  stxdw [r10-32], r4
  rsh64 r3, r5
  stxdw [r10-24], r3
  rsh64 r2, r5
  stxdw [r10-16], r2
  rsh64 r1, r5
  stxdw [r10-8], r1
  ldxdw r0, [r10-520]
  ldxdw r6, [r10-512]
  jeq r6, 0, jmp_2a168
  mov64 r1, 1
  neg64 r6
  and64 r6, 63
  ja jmp_2a108

jmp_2a080:
  mov64 r1, 4
  mov64 r3, 3

jmp_2a090:
  mov64 r4, r2
  lsh64 r4, 3
  mov64 r5, r10
  add64 r5, -184
  add64 r5, r4
  ldxdw r4, [r5+0]
  lsh64 r4, r6
  lsh64 r3, 3
  mov64 r5, r10
  add64 r5, -32
  add64 r5, r3
  ldxdw r3, [r5+0]
  or64 r3, r4
  stxdw [r5+0], r3
  jgt r2, 3, jmp_2a168

jmp_2a108:
  mov64 r2, r1
  jgt r2, 3, jmp_2a080
  mov64 r1, r2
  add64 r1, 1
  mov64 r3, r2
  add64 r3, -1
  jle r3, 3, jmp_2a090
  mov64 r1, -1
  mov64 r2, 4
  lddw r3, 206352
  call fn_2df20  ; → → → custom_panic

jmp_2a168:
  ldxdw r1, [r10-8]
  stxdw [r0+56], r1
  ldxdw r1, [r10-16]
  stxdw [r0+48], r1
  ldxdw r1, [r10-24]
  stxdw [r0+40], r1
  ldxdw r1, [r10-32]
  stxdw [r0+32], r1
  ldxdw r1, [r10-40]
  stxdw [r0+24], r1
  ldxdw r1, [r10-48]
  stxdw [r0+16], r1
  ldxdw r1, [r10-56]
  stxdw [r0+8], r1
  ldxdw r1, [r10-64]
  stxdw [r0+0], r1
  ja jmp_2a548

jmp_2a1f0:
  mov64 r8, 64
  ldxdw r5, [r2+0]
  mov64 r0, 64
  jeq r5, 0, jmp_2a360
  mov64 r3, r5
  rsh64 r3, 1
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 2
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 4
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 8
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 16
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 32
  or64 r5, r3
  xor64 r5, -1
  lddw r3, 6148914691236517205
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r3
  sub64 r5, r0
  lddw r3, 3689348814741910323
  mov64 r0, r5
  and64 r0, r3
  rsh64 r5, 2
  and64 r5, r3
  add64 r0, r5
  mov64 r3, r0
  rsh64 r3, 4
  add64 r0, r3
  lddw r3, 1085102592571150095
  and64 r0, r3
  lddw r3, 72340172838076673
  mul64 r0, r3
  rsh64 r0, 56

jmp_2a360:
  sub64 r8, r0
  mov64 r7, -64
  ldxdw r5, [r4+24]
  jeq r5, 0, jmp_28d40

jmp_2a380:
  mov64 r3, r5
  rsh64 r3, 1
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 2
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 4
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 8
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 16
  or64 r5, r3
  mov64 r3, r5
  rsh64 r3, 32
  or64 r5, r3
  xor64 r5, -1
  lddw r3, 6148914691236517205
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r3
  sub64 r5, r0
  lddw r0, 3689348814741910323
  mov64 r3, r5
  and64 r3, r0
  rsh64 r5, 2
  and64 r5, r0
  add64 r3, r5
  mov64 r5, r3
  rsh64 r5, 4
  add64 r3, r5
  lddw r5, 1085102592571150095
  and64 r3, r5
  lddw r5, 72340172838076673
  mul64 r3, r5
  rsh64 r3, 56
  sub64 r7, r3
  add64 r7, 320
  jge r8, r7, jmp_28f10

jmp_2a4e8:
  stdw [r1+24], 0
  stdw [r1+16], 0
  stdw [r1+8], 0
  stdw [r1+0], 0
  ldxdw r3, [r2+0]
  stxdw [r1+32], r3
  ldxdw r3, [r2+8]
  stxdw [r1+40], r3
  ldxdw r3, [r2+16]
  stxdw [r1+48], r3
  ldxdw r2, [r2+24]
  stxdw [r1+56], r2

jmp_2a548:
  exit

jmp_2a550:
  mov64 r2, 5
  lddw r3, 206352
  call fn_2f318  ; → → → → custom_panic

jmp_2a570:
  lddw r1, 206032
  stxdw [r10-184], r1
  stdw [r10-152], 0
  stdw [r10-176], 1
  stdw [r10-160], 0
  stdw [r10-168], 8
  mov64 r1, r10
  add64 r1, -184
  lddw r2, 206352
  call fn_2de88  ; → → custom_panic

jmp_2a5d0:
  mov64 r1, r9
  mov64 r2, 5
  lddw r3, 206352
  call fn_2df20  ; → → → custom_panic

jmp_2a5f8:
  mov64 r1, r5

jmp_2a600:
  mov64 r2, 4
  lddw r3, 206352
  call fn_2df20  ; → → → custom_panic

jmp_2a620:
  mov64 r1, -1
  mov64 r2, 5
  lddw r3, 206352
  call fn_2df20  ; → → → custom_panic

jmp_2a648:
  lddw r1, 206352
  call fn_2f828  ; → → → custom_panic
  ldxdw r1, [r1+8]
  ldxdw r2, [r1+8]
  ldxdw r1, [r1+0]
  call sol_log_
  lddw r1, data_0850
  mov64 r2, 14
  call sol_log_
  exit

fn_2a6a8:  ; → → sol_memcmp_
  mov64 r6, r1
  ldxdw r1, [r6+56]
  lddw r2, -7626442179814794710
  xor64 r1, r2
  ldxdw r2, [r6+48]
  lddw r3, -7626723650496603607
  xor64 r2, r3
  ldxdw r3, [r6+40]
  lddw r4, -7625879238451176920
  xor64 r3, r4
  ldxdw r4, [r6+32]
  lddw r5, -7626160709132985809
  xor64 r4, r5
  ldxdw r5, [r6+24]
  lddw r0, -7625316297088083410
  xor64 r5, r0
  ldxdw r0, [r6+16]
  lddw r7, -7625597767769892307
  xor64 r0, r7
  ldxdw r7, [r6+8]
  lddw r8, -7624753355724465620
  xor64 r7, r8
  ldxdw r8, [r6+0]
  lddw r9, 7625034826406274515
  xor64 r8, r9
  stxdw [r6+0], r8
  stxdw [r6+8], r7
  stxdw [r6+16], r0
  stxdw [r6+24], r5
  stxdw [r6+32], r4
  stxdw [r6+40], r3
  stxdw [r6+48], r2
  stxdw [r6+56], r1
  ldxdw r1, [r6+64]
  lddw r2, -7627286660579173845
  xor64 r1, r2
  stxdw [r6+64], r1
  ldxdw r1, [r6+72]
  lddw r2, -7627005189897364956
  xor64 r1, r2
  stxdw [r6+72], r1
  ldxdw r1, [r6+80]
  lddw r2, -7627849601942791643
  xor64 r1, r2
  stxdw [r6+80], r1
  lddw r1, -7627568131260982746
  ldxdw r2, [r6+88]
  xor64 r2, r1
  stxdw [r6+88], r2
  lddw r1, -7628412543305885145
  ldxdw r2, [r6+96]
  xor64 r2, r1
  stxdw [r6+96], r2
  lddw r1, -7628131072624076256
  ldxdw r2, [r6+104]
  xor64 r2, r1
  stxdw [r6+104], r2
  lddw r1, -7628975484669502943
  ldxdw r2, [r6+112]
  xor64 r2, r1
  stxdw [r6+112], r2
  lddw r1, -7628694013987694046
  ldxdw r2, [r6+120]
  xor64 r2, r1
  stxdw [r6+120], r2
  lddw r1, -7620531295499429341
  ldxdw r2, [r6+128]
  xor64 r2, r1
  stxdw [r6+128], r2
  lddw r1, -7620249824817620420
  ldxdw r2, [r6+136]
  xor64 r2, r1
  stxdw [r6+136], r2
  mov64 r1, r6
  add64 r1, 144
  call fn_2930  ; → sol_memcmp_
  lddw r1, -334136658724897736
  ldxdw r2, [r6+384]
  xor64 r2, r1
  stxdw [r6+384], r2
  lddw r2, 333855179453154247
  ldxdw r3, [r6+392]
  xor64 r3, r2
  stxdw [r6+392], r3
  lddw r3, 333573717361279942
  ldxdw r4, [r6+400]
  xor64 r4, r3
  stxdw [r6+400], r4
  lddw r4, 333292238089536453
  ldxdw r5, [r6+408]
  xor64 r5, r4
  stxdw [r6+408], r5
  ldxdw r5, [r6+416]
  xor64 r5, r1
  stxdw [r6+416], r5
  ldxdw r5, [r6+424]
  xor64 r5, r2
  stxdw [r6+424], r5
  ldxdw r5, [r6+432]
  xor64 r5, r3
  stxdw [r6+432], r5
  ldxdw r5, [r6+440]
  xor64 r5, r4
  stxdw [r6+440], r5
  ldxdw r5, [r6+448]
  xor64 r5, r1
  stxdw [r6+448], r5
  ldxdw r5, [r6+456]
  xor64 r5, r2
  stxdw [r6+456], r5
  ldxdw r5, [r6+464]
  xor64 r5, r3
  stxdw [r6+464], r5
  ldxdw r5, [r6+472]
  xor64 r5, r4
  stxdw [r6+472], r5
  ldxdw r5, [r6+480]
  xor64 r5, r1
  stxdw [r6+480], r5
  ldxdw r5, [r6+488]
  xor64 r5, r2
  stxdw [r6+488], r5
  ldxdw r5, [r6+496]
  xor64 r5, r3
  stxdw [r6+496], r5
  ldxdw r5, [r6+504]
  xor64 r5, r4
  stxdw [r6+504], r5
  ldxdw r5, [r6+512]
  xor64 r5, r1
  stxdw [r6+512], r5
  ldxdw r5, [r6+520]
  xor64 r5, r2
  stxdw [r6+520], r5
  ldxdw r5, [r6+528]
  xor64 r5, r3
  stxdw [r6+528], r5
  ldxdw r5, [r6+536]
  xor64 r5, r4
  stxdw [r6+536], r5
  lddw r5, -5091340175569093594
  ldxdw r0, [r6+544]
  xor64 r0, r5
  stxdw [r6+544], r0
  lddw r5, 5091621654840767449
  ldxdw r0, [r6+552]
  xor64 r0, r5
  stxdw [r6+552], r0
  lddw r5, -776322487371443039
  ldxdw r0, [r6+560]
  xor64 r0, r5
  stxdw [r6+560], r0
  lddw r5, -5922358479528311454
  ldxdw r0, [r6+568]
  xor64 r0, r5
  stxdw [r6+568], r0
  lddw r5, -5091340175569095642
  ldxdw r0, [r6+576]
  xor64 r0, r5
  stxdw [r6+576], r0
  lddw r5, 5091621654840839129
  ldxdw r0, [r6+584]
  xor64 r0, r5
  stxdw [r6+584], r0
  lddw r5, 7970776174128921066
  ldxdw r0, [r6+592]
  xor64 r0, r5
  stxdw [r6+592], r0
  ldxdw r0, [r6+600]
  xor64 r0, r5
  stxdw [r6+600], r0
  lddw r5, 7970776174128919018
  ldxdw r0, [r6+608]
  xor64 r0, r5
  stxdw [r6+608], r0
  ldxdw r0, [r6+616]
  xor64 r0, r5
  stxdw [r6+616], r0
  lddw r5, 990535269376402170
  ldxdw r0, [r6+624]
  xor64 r0, r5
  stxdw [r6+624], r0
  lddw r5, -990253798694703867
  ldxdw r0, [r6+632]
  xor64 r0, r5
  stxdw [r6+632], r0
  lddw r5, -989972328012894972
  ldxdw r0, [r6+640]
  xor64 r0, r5
  stxdw [r6+640], r0
  lddw r5, -989690857331348217
  ldxdw r0, [r6+648]
  xor64 r0, r5
  stxdw [r6+648], r0
  lddw r5, -989409352289800954
  ldxdw r0, [r6+656]
  xor64 r0, r5
  stxdw [r6+656], r0
  lddw r5, -989127881607729919
  ldxdw r0, [r6+664]
  xor64 r0, r5
  stxdw [r6+664], r0
  lddw r5, -988846410925921024
  ldxdw r0, [r6+672]
  xor64 r0, r5
  stxdw [r6+672], r0
  lddw r5, -988564940244374269
  ldxdw r0, [r6+680]
  xor64 r0, r5
  stxdw [r6+680], r0
  lddw r5, -988283503922303742
  ldxdw r0, [r6+688]
  xor64 r0, r5
  stxdw [r6+688], r0
  lddw r5, -988002033240232691
  ldxdw r0, [r6+696]
  xor64 r0, r5
  stxdw [r6+696], r0
  lddw r5, -1342259337616234485
  ldxdw r0, [r6+704]
  xor64 r0, r5
  stxdw [r6+704], r0
  lddw r5, -3235412798162765972
  ldxdw r0, [r6+712]
  xor64 r0, r5
  stxdw [r6+712], r0
  lddw r5, -5175599347905795073
  ldxdw r0, [r6+720]
  xor64 r0, r5
  stxdw [r6+720], r0
  lddw r5, 5175317868634051584
  ldxdw r0, [r6+728]
  xor64 r0, r5
  stxdw [r6+728], r0
  lddw r5, 5175036389362308097
  ldxdw r0, [r6+736]
  xor64 r0, r5
  stxdw [r6+736], r0
  lddw r5, 5174754910090564610
  ldxdw r0, [r6+744]
  xor64 r0, r5
  stxdw [r6+744], r0
  lddw r5, 5176725230633030659
  ldxdw r0, [r6+752]
  xor64 r0, r5
  stxdw [r6+752], r0
  lddw r5, 5176443751361287172
  ldxdw r0, [r6+760]
  xor64 r0, r5
  stxdw [r6+760], r0
  lddw r5, 5176162272089543685
  ldxdw r0, [r6+768]
  xor64 r0, r5
  stxdw [r6+768], r0
  lddw r5, 5175880792817800198
  ldxdw r0, [r6+776]
  xor64 r0, r5
  stxdw [r6+776], r0
  lddw r5, 5177851113359217671
  ldxdw r0, [r6+784]
  xor64 r0, r5
  stxdw [r6+784], r0
  lddw r5, 5177569634087474184
  ldxdw r0, [r6+792]
  xor64 r0, r5
  stxdw [r6+792], r0
  lddw r5, 5782998650930657501
  ldxdw r0, [r6+800]
  xor64 r0, r5
  stxdw [r6+800], r0
  lddw r5, 3888626711804536043
  ldxdw r0, [r6+808]
  xor64 r0, r5
  stxdw [r6+808], r0
  lddw r5, -7676137843536847794
  ldxdw r0, [r6+816]
  xor64 r0, r5
  stxdw [r6+816], r0
  lddw r5, -43813911570436544
  ldxdw r0, [r6+824]
  xor64 r0, r5
  stxdw [r6+824], r0
  lddw r5, 43532432298781119
  ldxdw r0, [r6+832]
  xor64 r0, r5
  stxdw [r6+832], r0
  lddw r5, 43250970207037886
  ldxdw r0, [r6+840]
  xor64 r0, r5
  stxdw [r6+840], r0
  lddw r5, 42969490935425469
  ldxdw r0, [r6+848]
  xor64 r0, r5
  stxdw [r6+848], r0
  lddw r5, 44939794297629116
  ldxdw r0, [r6+856]
  xor64 r0, r5
  stxdw [r6+856], r0
  lddw r5, 44658315026016699
  ldxdw r0, [r6+864]
  xor64 r0, r5
  stxdw [r6+864], r0
  lddw r5, 44376852934273466
  ldxdw r0, [r6+872]
  xor64 r0, r5
  stxdw [r6+872], r0
  lddw r5, 44095373662661049
  ldxdw r0, [r6+880]
  xor64 r0, r5
  stxdw [r6+880], r0
  lddw r5, 41562146116970936
  ldxdw r0, [r6+888]
  xor64 r0, r5
  stxdw [r6+888], r0
  lddw r5, 41280666845358519
  ldxdw r0, [r6+896]
  xor64 r0, r5
  stxdw [r6+896], r0
  ldxdw r5, [r6+904]
  xor64 r5, r1
  stxdw [r6+904], r5
  ldxdw r1, [r6+912]
  xor64 r1, r2
  stxdw [r6+912], r1
  ldxdw r1, [r6+920]
  xor64 r1, r3
  stxdw [r6+920], r1
  ldxdw r1, [r6+928]
  xor64 r1, r4
  stxdw [r6+928], r1
  lddw r1, -3511660658014627556
  ldxdw r2, [r6+936]
  xor64 r2, r1
  stxdw [r6+936], r2
  exit

fn_2b330:
  mov64 r6, r1
  ldxb r1, [r2+8]
  jeq r1, 0, jmp_2b3c0
  ldxh r2, [r2+10]
  stdw [r10-4088], 48
  stdw [r10-4096], 0
  lsh64 r2, 48
  mov64 r1, r10
  add64 r1, -24
  mov64 r7, 0
  mov64 r5, r10
  mov64 r3, 0
  lddw r4, 281474976710656000
  call fn_2c1e8
  ldxdw r2, [r10-16]
  ldxdw r1, [r10-24]
  ja jmp_2b558

jmp_2b3c0:
  mov64 r7, 1
  jeq r4, 0, jmp_2b548
  ldxdw r1, [r3+0]
  jeq r1, 0, jmp_2b548
  ldxdw r5, [r2+48]
  jeq r5, 0, jmp_2b448
  ldxdw r2, [r2+64]
  mov64 r0, r2
  div64 r0, 216000
  jlt r0, 365, jmp_2b418
  mov64 r0, 365

jmp_2b418:
  mov64 r1, 1
  jlt r2, 216000, jmp_2b430
  mov64 r1, r0

jmp_2b430:
  div64 r5, 1000000
  mul64 r1, r5
  ja jmp_2b450

jmp_2b448:
  mov64 r1, 0

jmp_2b450:
  lsh64 r4, 4

jmp_2b458:
  jeq r4, 0, jmp_2b548
  add64 r4, -16
  ldxdw r2, [r3+0]
  add64 r3, 16
  jlt r1, r2, jmp_2b458
  ldxdw r3, [r3-8]
  stdw [r10-4088], 48
  stdw [r10-4096], 15
  mov64 r2, r3
  lsh64 r2, 48
  rsh64 r3, 16
  mov64 r1, r10
  add64 r1, -24
  mov64 r5, r10
  lddw r4, 4773815605012725760
  call fn_2c1e8
  mov64 r7, 1
  lddw r2, 140737488355328
  ldxdw r1, [r10-24]
  mov64 r3, 1
  jge r1, r2, jmp_2b578
  ldxdw r2, [r10-16]
  mov64 r4, 1
  jsge r2, 0, jmp_2b598

jmp_2b528:
  jne r2, 0, jmp_2b5a8

jmp_2b530:
  jeq r3, 0, jmp_2b5b8

jmp_2b538:
  jne r3, 0, jmp_2b558
  ja jmp_2b5c8

jmp_2b548:
  mov64 r1, 0
  mov64 r2, 0

jmp_2b558:
  stxdw [r6+8], r1
  stxdw [r6+0], r7
  stxdw [r6+16], r2
  exit

jmp_2b578:
  mov64 r3, 0
  ldxdw r2, [r10-16]
  mov64 r4, 1
  jslt r2, 0, jmp_2b528

jmp_2b598:
  mov64 r4, 0
  jeq r2, 0, jmp_2b530

jmp_2b5a8:
  mov64 r3, r4
  jne r3, 0, jmp_2b538

jmp_2b5b8:
  mov64 r2, 0
  jne r3, 0, jmp_2b558

jmp_2b5c8:
  lddw r1, 140737488355328
  ja jmp_2b558

fn_2b5e0:  ; → sol_invoke_signed_c
  mov64 r9, r3
  ldxdw r3, [r2+8]
  ldxdw r6, [r3+0]
  add64 r6, 8
  ldxdw r0, [r2+0]
  ldxdw r7, [r0+0]
  stxdw [r10-208], r6
  add64 r7, 8
  stxdw [r10-224], r7
  sth [r10-200], 0
  sth [r10-216], 1
  stb [r10-185], 18
  ldxdw r2, [r2+16]
  ldxb r6, [r2+0]
  stxb [r10-184], r6
  ldxb r6, [r2+1]
  stxb [r10-183], r6
  ldxb r6, [r2+2]
  stxb [r10-182], r6
  ldxb r6, [r2+3]
  stxb [r10-181], r6
  ldxb r6, [r2+4]
  stxb [r10-180], r6
  ldxb r6, [r2+5]
  stxb [r10-179], r6
  ldxb r6, [r2+6]
  stxb [r10-178], r6
  ldxb r6, [r2+7]
  stxb [r10-177], r6
  ldxb r6, [r2+8]
  stxb [r10-176], r6
  ldxb r6, [r2+9]
  stxb [r10-175], r6
  ldxb r6, [r2+10]
  stxb [r10-174], r6
  ldxb r6, [r2+11]
  stxb [r10-173], r6
  ldxb r6, [r2+12]
  stxb [r10-172], r6
  ldxb r6, [r2+13]
  stxb [r10-171], r6
  ldxb r6, [r2+14]
  stxb [r10-170], r6
  ldxb r6, [r2+15]
  stxb [r10-169], r6
  ldxb r6, [r2+16]
  stxb [r10-168], r6
  ldxb r6, [r2+17]
  stxb [r10-167], r6
  ldxb r6, [r2+18]
  stxb [r10-166], r6
  ldxb r6, [r2+19]
  stxb [r10-165], r6
  ldxb r6, [r2+20]
  stxb [r10-164], r6
  ldxb r6, [r2+21]
  stxb [r10-163], r6
  ldxb r6, [r2+22]
  stxb [r10-162], r6
  ldxb r6, [r2+23]
  stxb [r10-161], r6
  ldxb r6, [r2+24]
  stxb [r10-160], r6
  ldxb r6, [r2+25]
  stxb [r10-159], r6
  ldxb r6, [r2+26]
  stxb [r10-158], r6
  ldxb r6, [r2+27]
  stxb [r10-157], r6
  ldxb r6, [r2+28]
  stxb [r10-156], r6
  ldxb r6, [r2+29]
  stxb [r10-155], r6
  ldxb r6, [r2+30]
  stxb [r10-154], r6
  ldxb r2, [r2+31]
  stxb [r10-153], r2
  ldxdw r2, [r0+0]
  mov64 r5, r2
  add64 r5, 8
  ldxdw r6, [r10-224]
  ldxdw r7, [r6+0]
  ldxdw r8, [r2+8]
  jne r8, r7, jmp_2b8d0
  ldxdw r7, [r6+8]
  ldxdw r8, [r5+8]
  jne r8, r7, jmp_2b8d0
  ldxdw r7, [r6+16]
  ldxdw r8, [r5+16]
  jne r8, r7, jmp_2b8d0
  mov64 r8, 0
  ldxdw r6, [r6+24]
  ldxdw r7, [r5+24]
  jeq r7, r6, jmp_2b8d8

jmp_2b8d0:
  mov64 r8, 1

jmp_2b8d8:
  mov64 r7, 1
  jne r8, 0, jmp_2bc60
  mov64 r6, 0
  ldxb r7, [r10-216]
  jne r7, 0, jmp_2b908
  mov64 r6, 119

jmp_2b908:
  ldxb r7, [r2+0]
  or64 r6, r7
  mov64 r7, 11
  and64 r6, 255
  jne r6, 255, jmp_2bc60
  stxdw [r10-232], r9
  ldxb r8, [r2+1]
  mov64 r7, 1
  mov64 r6, 1
  jeq r8, 0, jmp_2bc70
  ldxb r9, [r2+2]
  mov64 r8, 1
  jeq r9, 0, jmp_2bc90

jmp_2b970:
  ldxb r9, [r2+3]
  jne r9, 0, jmp_2b988

jmp_2b980:
  mov64 r7, 0

jmp_2b988:
  ldxdw r9, [r2+80]
  mov64 r0, r2
  add64 r0, 40
  stxdw [r10-120], r0
  mov64 r0, r2
  add64 r0, 88
  stxdw [r10-128], r0
  stxdw [r10-136], r9
  add64 r2, 72
  stxdw [r10-144], r2
  stxdw [r10-152], r5
  stxb [r10-102], r7
  stxb [r10-103], r8
  stxb [r10-104], r6
  stdw [r10-112], 0
  ldxdw r3, [r3+0]
  mov64 r2, r3
  add64 r2, 8
  ldxdw r0, [r10-208]
  ldxdw r5, [r0+0]
  ldxdw r6, [r3+8]
  jne r6, r5, jmp_2ba88
  ldxdw r5, [r0+8]
  ldxdw r6, [r2+8]
  jne r6, r5, jmp_2ba88
  ldxdw r5, [r0+16]
  ldxdw r6, [r2+16]
  jne r6, r5, jmp_2ba88
  mov64 r6, 0
  ldxdw r5, [r0+24]
  ldxdw r0, [r2+24]
  jeq r0, r5, jmp_2ba90

jmp_2ba88:
  mov64 r6, 1

jmp_2ba90:
  mov64 r7, 1
  mov64 r5, r4
  ldxdw r4, [r10-232]
  jne r6, 0, jmp_2bc60
  mov64 r0, 0
  ldxb r6, [r10-200]
  jne r6, 0, jmp_2bad0
  mov64 r0, 119

jmp_2bad0:
  ldxb r6, [r3+0]
  or64 r0, r6
  and64 r0, 255
  mov64 r7, 11
  jne r0, 255, jmp_2bc60
  ldxb r6, [r3+1]
  mov64 r7, 1
  mov64 r0, 1
  jeq r6, 0, jmp_2bcb0
  ldxb r6, [r3+2]
  mov64 r8, 1
  jeq r6, 0, jmp_2bcd0

jmp_2bb30:
  mov64 r6, r1
  ldxb r1, [r3+3]
  jne r1, 0, jmp_2bb50

jmp_2bb48:
  mov64 r7, 0

jmp_2bb50:
  ldxdw r1, [r3+80]
  mov64 r9, r3
  add64 r9, 40
  stxdw [r10-64], r9
  mov64 r9, r3
  add64 r9, 88
  stxdw [r10-72], r9
  stxdw [r10-80], r1
  add64 r3, 72
  stxdw [r10-88], r3
  stxdw [r10-96], r2
  stxb [r10-46], r7
  stxb [r10-47], r8
  stxb [r10-48], r0
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -185
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -224
  stxdw [r10-32], r1
  lddw r1, data_0090
  stxdw [r10-40], r1
  stdw [r10-8], 33
  stdw [r10-24], 2
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -152
  mov64 r3, 2
  call sol_invoke_signed_c
  mov64 r7, 26
  mov64 r1, r6

jmp_2bc60:
  stxw [r1+0], r7
  exit

jmp_2bc70:
  mov64 r6, 0
  ldxb r9, [r2+2]
  mov64 r8, 1
  jne r9, 0, jmp_2b970

jmp_2bc90:
  mov64 r8, 0
  ldxb r9, [r2+3]
  jeq r9, 0, jmp_2b980
  ja jmp_2b988

jmp_2bcb0:
  mov64 r0, 0
  ldxb r6, [r3+2]
  mov64 r8, 1
  jne r6, 0, jmp_2bb30

jmp_2bcd0:
  mov64 r8, 0
  mov64 r6, r1
  ldxb r1, [r3+3]
  jeq r1, 0, jmp_2bb48
  ja jmp_2bb50

fn_2bcf8:  ; → sol_invoke_signed_c
  stxdw [r10-288], r3
  ldxdw r3, [r2+0]
  ldxdw r9, [r3+0]
  ldxdw r3, [r2+8]
  ldxdw r6, [r3+0]
  ldxdw r3, [r2+16]
  ldxdw r3, [r3+0]
  stxdw [r10-280], r3
  add64 r3, 8
  stxdw [r10-240], r3
  mov64 r7, r6
  add64 r7, 8
  stxdw [r10-256], r7
  mov64 r0, r9
  add64 r0, 8
  stxdw [r10-272], r0
  sth [r10-232], 256
  sth [r10-248], 1
  sth [r10-264], 1
  stb [r10-217], 3
  ldxdw r2, [r2+24]
  stxdw [r10-216], r2
  ldxb r2, [r9+0]
  jne r2, 255, jmp_2c140
  ldxb r2, [r9+1]
  mov64 r5, 1
  jne r2, 0, jmp_2bdd8
  mov64 r5, 0

jmp_2bdd8:
  stxdw [r10-304], r5
  ldxb r2, [r9+2]
  mov64 r5, 1
  jne r2, 0, jmp_2be00
  mov64 r5, 0

jmp_2be00:
  stxdw [r10-296], r1
  stxdw [r10-312], r4
  ldxb r2, [r9+3]
  mov64 r1, 1
  jne r2, 0, jmp_2be30
  mov64 r1, 0

jmp_2be30:
  ldxdw r2, [r9+80]
  mov64 r8, r9
  add64 r8, 40
  stxdw [r10-176], r8
  mov64 r8, r9
  add64 r8, 88
  stxdw [r10-184], r8
  stxdw [r10-192], r2
  add64 r9, 72
  stxdw [r10-200], r9
  stxdw [r10-208], r0
  stxb [r10-158], r1
  stxb [r10-159], r5
  ldxdw r1, [r10-304]
  stxb [r10-160], r1
  stdw [r10-168], 0
  ldxb r2, [r6+0]
  ldxdw r1, [r10-296]
  jne r2, 255, jmp_2c140
  ldxb r1, [r6+1]
  mov64 r5, 1
  mov64 r2, 1
  jeq r1, 0, jmp_2c158
  ldxb r1, [r6+2]
  mov64 r4, 1
  ldxdw r0, [r10-280]
  jeq r1, 0, jmp_2c180

jmp_2bf08:
  ldxb r1, [r6+3]
  jne r1, 0, jmp_2bf20

jmp_2bf18:
  mov64 r5, 0

jmp_2bf20:
  ldxdw r1, [r6+80]
  mov64 r8, r6
  add64 r8, 40
  stxdw [r10-120], r8
  mov64 r8, r6
  add64 r8, 88
  stxdw [r10-128], r8
  stxdw [r10-136], r1
  add64 r6, 72
  stxdw [r10-144], r6
  stxdw [r10-152], r7
  stxb [r10-102], r5
  stxb [r10-103], r4
  stxb [r10-104], r2
  stdw [r10-112], 0
  ldxb r2, [r0+0]
  and64 r2, 136
  ldxdw r5, [r10-312]
  ldxdw r1, [r10-296]
  jne r2, 136, jmp_2c140
  ldxdw r0, [r10-280]
  ldxb r1, [r0+1]
  mov64 r8, 1
  mov64 r2, 1
  jeq r1, 0, jmp_2c1a0
  ldxb r1, [r0+2]
  mov64 r4, 1
  jeq r1, 0, jmp_2c1c0

jmp_2c000:
  ldxdw r6, [r10-296]
  ldxb r1, [r0+3]
  jne r1, 0, jmp_2c020

jmp_2c018:
  mov64 r8, 0

jmp_2c020:
  ldxdw r1, [r0+80]
  mov64 r7, r0
  add64 r7, 40
  stxdw [r10-64], r7
  mov64 r7, r0
  add64 r7, 88
  stxdw [r10-72], r7
  stxdw [r10-80], r1
  add64 r0, 72
  stxdw [r10-88], r0
  stxdw [r10-96], r3
  stxb [r10-46], r8
  stxb [r10-47], r4
  stxb [r10-48], r2
  stdw [r10-56], 0
  mov64 r1, r10
  add64 r1, -217
  stxdw [r10-16], r1
  mov64 r1, r10
  add64 r1, -272
  stxdw [r10-32], r1
  lddw r1, data_0090
  stxdw [r10-40], r1
  stdw [r10-8], 9
  stdw [r10-24], 3
  mov64 r1, r10
  add64 r1, -40
  mov64 r2, r10
  add64 r2, -208
  mov64 r3, 3
  ldxdw r4, [r10-288]
  call sol_invoke_signed_c
  mov64 r2, 26
  mov64 r1, r6
  ja jmp_2c148

jmp_2c140:
  mov64 r2, 11

jmp_2c148:
  stxw [r1+0], r2
  exit

jmp_2c158:
  mov64 r2, 0
  ldxb r1, [r6+2]
  mov64 r4, 1
  ldxdw r0, [r10-280]
  jne r1, 0, jmp_2bf08

jmp_2c180:
  mov64 r4, 0
  ldxb r1, [r6+3]
  jeq r1, 0, jmp_2bf18
  ja jmp_2bf20

jmp_2c1a0:
  mov64 r2, 0
  ldxb r1, [r0+2]
  mov64 r4, 1
  jne r1, 0, jmp_2c000

jmp_2c1c0:
  mov64 r4, 0
  ldxdw r6, [r10-296]
  ldxb r1, [r0+3]
  jeq r1, 0, jmp_2c018
  ja jmp_2c020

fn_2c1e8:
  mov64 r8, r4
  stxdw [r10-88], r1
  mov64 r7, r3
  mov64 r9, r2
  ldxdw r0, [r5-4096]
  ldxdw r6, [r5-4088]
  mov64 r1, r6
  lsh64 r1, 32
  rsh64 r1, 32
  jne r1, 128, jmp_2c2b0
  lddw r1, -9223372036854775808
  xor64 r3, r1
  or64 r2, r3
  mov64 r1, 0
  jne r2, 0, jmp_2c760
  mov64 r2, r8
  and64 r2, r0
  mov64 r3, 0
  jne r2, -1, jmp_2c368
  ldxdw r1, [r10-88]
  stdw [r1+8], 0
  stdw [r1+0], 0
  stb [r1+16], 1
  ja jmp_2c5d0

jmp_2c2b0:
  mov64 r4, r6
  and64 r4, 127
  mov64 r1, r10
  add64 r1, -64
  mov64 r2, r9
  mov64 r3, r7
  stxdw [r10-104], r8
  mov64 r8, r0
  call fn_30108
  neg64 r6
  and64 r6, 127
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r9
  mov64 r3, r7
  mov64 r4, r6
  call fn_2fe70
  mov64 r0, r8
  ldxdw r8, [r10-104]
  ldxdw r3, [r10-56]
  ldxdw r1, [r10-64]
  ldxdw r7, [r10-72]
  ldxdw r9, [r10-80]

jmp_2c368:
  mov64 r2, r1
  or64 r2, r3
  mov64 r6, -1
  mov64 r4, -1
  jeq r2, 0, jmp_2c5d8
  mov64 r2, 1
  stxdw [r10-104], r9
  jge r4, r9, jmp_2c5f8

jmp_2c3a8:
  ldxdw r9, [r10-88]
  mov64 r5, r8
  neg64 r5
  jsge r0, 0, jmp_2c620

jmp_2c3c8:
  stxdw [r10-4088], r5
  mov64 r5, r8
  mov64 r8, 1
  jeq r5, 0, jmp_2c648

jmp_2c3e8:
  mov64 r5, r4
  sub64 r5, r7
  stxdw [r10-96], r0
  jslt r0, 0, jmp_2c670

jmp_2c408:
  sub64 r5, r2
  stxdw [r10-4080], r0
  ldxdw r0, [r10-104]
  jsge r7, 0, jmp_2c6a0

jmp_2c428:
  stxdw [r10-4096], r5
  mov64 r2, r1
  neg64 r2
  jsge r7, 0, jmp_2c6c8

jmp_2c448:
  mov64 r5, 1
  jeq r1, 0, jmp_2c6e0

jmp_2c458:
  jslt r7, 0, jmp_2c6f0

jmp_2c460:
  sub64 r4, r0
  jslt r7, 0, jmp_2c478

jmp_2c470:
  mov64 r4, r0

jmp_2c478:
  mov64 r1, r10
  add64 r1, -48
  mov64 r5, r10
  call fn_2c770
  ldxdw r1, [r10-40]
  ldxdw r2, [r10-48]
  mov64 r3, r2
  or64 r3, r1
  jne r3, 0, jmp_2c4c8
  mov64 r6, 0

jmp_2c4c8:
  ldxdw r3, [r10-96]
  xor64 r7, r3
  ldxdw r0, [r10-32]
  mov64 r4, 1
  jlt r6, r0, jmp_2c4f8
  mov64 r4, 0

jmp_2c4f8:
  ldxdw r5, [r10-24]
  mov64 r3, r6
  sub64 r3, r5
  sub64 r6, r0
  jsge r7, 0, jmp_2c718
  sub64 r3, r4
  jsge r7, 0, jmp_2c730

jmp_2c530:
  mov64 r4, 1
  jeq r2, 0, jmp_2c748

jmp_2c540:
  jsge r7, 0, jmp_2c558

jmp_2c548:
  add64 r1, r4
  neg64 r1

jmp_2c558:
  mov64 r4, r1
  arsh64 r4, 63
  xor64 r3, r4
  xor64 r6, r4
  or64 r6, r3
  mov64 r4, 1
  jne r6, 0, jmp_2c598
  mov64 r4, 0

jmp_2c598:
  mov64 r3, r2
  neg64 r3
  jslt r7, 0, jmp_2c5b8
  mov64 r3, r2

jmp_2c5b8:
  stxdw [r9+0], r3
  stxdw [r9+8], r1
  stxb [r9+16], r4

jmp_2c5d0:
  exit

jmp_2c5d8:
  mov64 r4, 0
  mov64 r2, 1
  stxdw [r10-104], r9
  jlt r4, r9, jmp_2c3a8

jmp_2c5f8:
  mov64 r2, 0
  ldxdw r9, [r10-88]
  mov64 r5, r8
  neg64 r5
  jslt r0, 0, jmp_2c3c8

jmp_2c620:
  mov64 r5, r8
  stxdw [r10-4088], r5
  mov64 r5, r8
  mov64 r8, 1
  jne r5, 0, jmp_2c3e8

jmp_2c648:
  mov64 r8, 0
  mov64 r5, r4
  sub64 r5, r7
  stxdw [r10-96], r0
  jsge r0, 0, jmp_2c408

jmp_2c670:
  add64 r0, r8
  neg64 r0
  sub64 r5, r2
  stxdw [r10-4080], r0
  ldxdw r0, [r10-104]
  jslt r7, 0, jmp_2c428

jmp_2c6a0:
  mov64 r5, r7
  stxdw [r10-4096], r5
  mov64 r2, r1
  neg64 r2
  jslt r7, 0, jmp_2c448

jmp_2c6c8:
  mov64 r2, r1
  mov64 r5, 1
  jne r1, 0, jmp_2c458

jmp_2c6e0:
  mov64 r5, 0
  jsge r7, 0, jmp_2c460

jmp_2c6f0:
  add64 r3, r5
  neg64 r3
  sub64 r4, r0
  jsge r7, 0, jmp_2c470
  ja jmp_2c478

jmp_2c718:
  mov64 r6, r0
  sub64 r3, r4
  jslt r7, 0, jmp_2c530

jmp_2c730:
  mov64 r3, r5
  mov64 r4, 1
  jne r2, 0, jmp_2c540

jmp_2c748:
  mov64 r4, 0
  jslt r7, 0, jmp_2c548
  ja jmp_2c558

jmp_2c760:
  mov64 r3, 0
  ja jmp_2c368

fn_2c770:
  stxdw [r10-328], r4
  stxdw [r10-320], r3
  stxdw [r10-312], r2
  stxdw [r10-344], r1
  ldxdw r9, [r5-4088]
  ldxdw r7, [r5-4080]
  lddw r4, 6148914691236517205
  lddw r3, 3689348814741910323
  lddw r2, 1085102592571150095
  lddw r1, 72340172838076673
  jne r7, 0, jmp_2c910
  mov64 r6, r9
  rsh64 r6, 1
  mov64 r0, r9
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 2
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 4
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 8
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 16
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 32
  or64 r0, r6
  xor64 r0, -1
  mov64 r6, r0
  rsh64 r6, 1
  and64 r6, r4
  sub64 r0, r6
  mov64 r8, r0
  and64 r8, r3
  rsh64 r0, 2
  and64 r0, r3
  add64 r8, r0
  mov64 r3, r8
  rsh64 r3, 4
  add64 r8, r3
  and64 r8, r2
  mul64 r8, r1
  rsh64 r8, 56
  add64 r8, 64
  ja jmp_2ca28

jmp_2c910:
  mov64 r6, r7
  rsh64 r6, 1
  mov64 r0, r7
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 2
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 4
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 8
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 16
  or64 r0, r6
  mov64 r6, r0
  rsh64 r6, 32
  or64 r0, r6
  xor64 r0, -1
  mov64 r6, r0
  rsh64 r6, 1
  and64 r6, r4
  sub64 r0, r6
  mov64 r8, r0
  and64 r8, r3
  rsh64 r0, 2
  and64 r0, r3
  add64 r8, r0
  mov64 r3, r8
  rsh64 r3, 4
  add64 r8, r3
  and64 r8, r2
  mul64 r8, r1
  rsh64 r8, 56

jmp_2ca28:
  stxdw [r10-296], r9
  stxdw [r10-304], r7
  ldxdw r7, [r5-4096]
  stxdw [r10-352], r8
  jeq r8, 0, jmp_2cc08
  mov64 r9, r8
  neg64 r9
  and64 r9, 127
  mov64 r1, r10
  add64 r1, -16
  ldxdw r6, [r10-328]
  mov64 r2, r6
  mov64 r3, r7
  mov64 r4, r9
  call fn_302f8
  lsh64 r8, 32
  arsh64 r8, 32
  mov64 r1, r10
  add64 r1, -32
  mov64 r2, r6
  mov64 r3, r7
  mov64 r4, r8
  call fn_30108
  mov64 r1, r10
  add64 r1, -48
  ldxdw r7, [r10-312]
  mov64 r2, r7
  ldxdw r6, [r10-320]
  mov64 r3, r6
  mov64 r4, r9
  call fn_302f8
  mov64 r1, r10
  add64 r1, -64
  mov64 r2, r7
  mov64 r3, r6
  mov64 r4, r8
  call fn_30108
  mov64 r1, r10
  add64 r1, -80
  ldxdw r2, [r10-296]
  ldxdw r3, [r10-304]
  mov64 r4, r8
  call fn_30108
  ldxdw r1, [r10-24]
  ldxdw r7, [r10-40]
  or64 r7, r1
  ldxdw r1, [r10-32]
  ldxdw r2, [r10-48]
  or64 r2, r1
  stxdw [r10-328], r2
  ldxdw r8, [r10-72]
  ldxdw r1, [r10-80]
  stxdw [r10-296], r1
  ldxdw r3, [r10-8]
  ldxdw r9, [r10-16]
  ldxdw r1, [r10-56]
  stxdw [r10-320], r1
  ldxdw r1, [r10-64]
  stxdw [r10-312], r1
  ja jmp_2cc20

jmp_2cc08:
  mov64 r9, 0
  mov64 r3, 0
  ldxdw r8, [r10-304]

jmp_2cc20:
  mov64 r1, r10
  add64 r1, -96
  mov64 r2, r9
  mov64 r4, r8
  mov64 r5, 0
  call fn_31788
  mov64 r1, r10
  add64 r1, -112
  ldxdw r2, [r10-96]
  ldxdw r6, [r10-88]
  mov64 r3, r6
  stxdw [r10-304], r8
  mov64 r4, r8
  mov64 r8, r2
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -128
  mov64 r2, r8
  mov64 r3, r6
  ldxdw r4, [r10-296]
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-112]
  sub64 r9, r1
  mov64 r4, 1
  ldxdw r1, [r10-128]
  mov64 r3, 1
  jlt r7, r1, jmp_2ce80
  ldxdw r2, [r10-120]
  jlt r9, r2, jmp_2ce98

jmp_2cd18:
  jne r9, r2, jmp_2cea8

jmp_2cd20:
  and64 r3, 1
  jne r3, 0, jmp_2cec0

jmp_2cd30:
  mov64 r6, r7
  ldxdw r3, [r10-296]
  add64 r6, r3
  mov64 r3, 0
  mov64 r0, 1
  jlt r6, r7, jmp_2cd68
  mov64 r0, 0

jmp_2cd68:
  mov64 r5, r9
  ldxdw r4, [r10-304]
  add64 r5, r4
  add64 r5, r0
  mov64 r4, 1
  jlt r6, r1, jmp_2d930
  mov64 r7, 1
  jlt r5, r2, jmp_2d948

jmp_2cda8:
  jne r5, r2, jmp_2d958

jmp_2cdb0:
  mov64 r7, 1
  jge r5, r9, jmp_2d970

jmp_2cdc0:
  jne r5, r9, jmp_2d980

jmp_2cdc8:
  or64 r0, r4
  mov64 r7, -1
  jne r0, 0, jmp_2cde8

jmp_2cde0:
  mov64 r7, -2

jmp_2cde8:
  mov64 r4, r7
  add64 r4, r8
  ldxdw r9, [r10-304]
  stxdw [r10-360], r4
  mov64 r4, 0
  jeq r0, 0, jmp_2d9a8
  mov64 r7, r4
  add64 r7, r6
  mov64 r6, 1
  jge r7, r4, jmp_2d9d0

jmp_2ce38:
  jne r0, 0, jmp_2ce48

jmp_2ce40:
  mov64 r3, r9

jmp_2ce48:
  add64 r3, r5
  add64 r3, r6
  sub64 r3, r2
  mov64 r2, 1
  stxdw [r10-368], r2
  jge r7, r1, jmp_2cef8
  ja jmp_2cf00

jmp_2ce80:
  mov64 r3, 0
  ldxdw r2, [r10-120]
  jge r9, r2, jmp_2cd18

jmp_2ce98:
  mov64 r4, 0
  jeq r9, r2, jmp_2cd20

jmp_2cea8:
  mov64 r3, r4
  and64 r3, 1
  jeq r3, 0, jmp_2cd30

jmp_2cec0:
  mov64 r3, r9
  stxdw [r10-360], r8
  ldxdw r9, [r10-304]
  sub64 r3, r2
  mov64 r2, 1
  stxdw [r10-368], r2
  jlt r7, r1, jmp_2cf00

jmp_2cef8:
  mov64 r2, 0

jmp_2cf00:
  sub64 r3, r2
  sub64 r7, r1
  mov64 r1, r10
  add64 r1, -144
  mov64 r2, r7
  mov64 r4, r9
  mov64 r5, 0
  call fn_31788
  mov64 r1, r10
  add64 r1, -160
  ldxdw r8, [r10-144]
  ldxdw r6, [r10-136]
  mov64 r2, r8
  mov64 r3, r6
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -176
  mov64 r2, r8
  stxdw [r10-336], r6
  mov64 r3, r6
  ldxdw r4, [r10-296]
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-160]
  sub64 r7, r1
  ldxdw r4, [r10-176]
  mov64 r3, 1
  ldxdw r2, [r10-328]
  jlt r2, r4, jmp_2d1d8
  ldxdw r1, [r10-168]
  jlt r7, r1, jmp_2d1f0

jmp_2d008:
  jne r7, r1, jmp_2d208

jmp_2d010:
  and64 r3, 1
  jne r3, 0, jmp_2d220

jmp_2d020:
  stxdw [r10-376], r4
  mov64 r6, r2
  ldxdw r3, [r10-296]
  add64 r6, r3
  mov64 r3, 0
  mov64 r0, 1
  jlt r6, r2, jmp_2d060
  mov64 r0, 0

jmp_2d060:
  mov64 r5, r7
  add64 r5, r9
  add64 r5, r0
  mov64 r4, 1
  ldxdw r2, [r10-376]
  jlt r6, r2, jmp_2d9e8
  mov64 r9, 1
  jlt r5, r1, jmp_2da00

jmp_2d0a0:
  jne r5, r1, jmp_2da10

jmp_2d0a8:
  mov64 r9, 1
  jge r5, r7, jmp_2da28

jmp_2d0b8:
  jne r5, r7, jmp_2da38

jmp_2d0c0:
  or64 r0, r4
  mov64 r9, -1
  jne r0, 0, jmp_2d0e0

jmp_2d0d8:
  mov64 r9, -2

jmp_2d0e0:
  mov64 r2, r9
  add64 r2, r8
  mov64 r7, 1
  stxdw [r10-368], r2
  jlt r2, r9, jmp_2d110
  mov64 r7, 0

jmp_2d110:
  mov64 r4, 0
  mov64 r8, 1
  jne r0, 0, jmp_2d130
  ldxdw r4, [r10-296]

jmp_2d130:
  mov64 r2, r4
  add64 r2, r6
  ldxdw r9, [r10-304]
  mov64 r6, r2
  jlt r2, r4, jmp_2d160
  mov64 r8, 0

jmp_2d160:
  jne r0, 0, jmp_2d170
  mov64 r3, r9

jmp_2d170:
  add64 r3, r5
  add64 r3, r8
  ldxdw r2, [r10-336]
  add64 r2, r7
  add64 r2, -1
  stxdw [r10-336], r2
  mov64 r2, r6
  ldxdw r4, [r10-376]
  sub64 r3, r1
  mov64 r1, 1
  stxdw [r10-328], r1
  jge r2, r4, jmp_2d250
  ja jmp_2d258

jmp_2d1d8:
  mov64 r3, 0
  ldxdw r1, [r10-168]
  jge r7, r1, jmp_2d008

jmp_2d1f0:
  mov64 r5, 0
  stxdw [r10-368], r5
  jeq r7, r1, jmp_2d010

jmp_2d208:
  ldxdw r3, [r10-368]
  and64 r3, 1
  jeq r3, 0, jmp_2d020

jmp_2d220:
  mov64 r3, r7
  stxdw [r10-368], r8
  sub64 r3, r1
  mov64 r1, 1
  stxdw [r10-328], r1
  jlt r2, r4, jmp_2d258

jmp_2d250:
  mov64 r1, 0

jmp_2d258:
  sub64 r3, r1
  sub64 r2, r4
  mov64 r1, r10
  add64 r1, -192
  mov64 r4, r9
  mov64 r8, r2
  mov64 r5, 0
  call fn_31788
  mov64 r1, r10
  add64 r1, -208
  ldxdw r7, [r10-192]
  ldxdw r6, [r10-184]
  mov64 r2, r7
  mov64 r3, r6
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -224
  mov64 r2, r7
  mov64 r3, r6
  ldxdw r4, [r10-296]
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-208]
  sub64 r8, r1
  ldxdw r1, [r10-224]
  mov64 r3, 1
  ldxdw r2, [r10-320]
  jlt r2, r1, jmp_2d4e0
  ldxdw r4, [r10-216]
  jlt r8, r4, jmp_2d4f8

jmp_2d358:
  jne r8, r4, jmp_2d510

jmp_2d360:
  and64 r3, 1
  jne r3, 0, jmp_2d528

jmp_2d370:
  mov64 r6, r2
  ldxdw r3, [r10-296]
  add64 r6, r3
  mov64 r3, 0
  mov64 r0, 1
  jlt r6, r2, jmp_2d3a8
  mov64 r0, 0

jmp_2d3a8:
  mov64 r2, r8
  mov64 r5, r8
  add64 r5, r9
  add64 r5, r0
  mov64 r8, 1
  jlt r6, r1, jmp_2da60
  mov64 r9, 1
  jlt r5, r4, jmp_2da78

jmp_2d3e8:
  jne r5, r4, jmp_2da88

jmp_2d3f0:
  mov64 r9, 1
  jge r5, r2, jmp_2daa0

jmp_2d400:
  jne r5, r2, jmp_2dab0

jmp_2d408:
  or64 r0, r8
  mov64 r8, -1
  jne r0, 0, jmp_2d428

jmp_2d420:
  mov64 r8, -2

jmp_2d428:
  mov64 r2, r8
  add64 r2, r7
  ldxdw r9, [r10-304]
  stxdw [r10-328], r2
  mov64 r7, 0
  jne r0, 0, jmp_2d460
  ldxdw r7, [r10-296]

jmp_2d460:
  mov64 r2, r7
  add64 r2, r6
  mov64 r6, r2
  mov64 r8, 1
  jlt r2, r7, jmp_2d490
  mov64 r8, 0

jmp_2d490:
  jne r0, 0, jmp_2d4a0
  mov64 r3, r9

jmp_2d4a0:
  add64 r3, r5
  add64 r3, r8
  mov64 r2, r6
  sub64 r3, r4
  mov64 r4, 1
  stxdw [r10-320], r4
  jge r2, r1, jmp_2d558
  ja jmp_2d560

jmp_2d4e0:
  mov64 r3, 0
  ldxdw r4, [r10-216]
  jge r8, r4, jmp_2d358

jmp_2d4f8:
  mov64 r0, 0
  stxdw [r10-328], r0
  jeq r8, r4, jmp_2d360

jmp_2d510:
  ldxdw r3, [r10-328]
  and64 r3, 1
  jeq r3, 0, jmp_2d370

jmp_2d528:
  mov64 r3, r8
  stxdw [r10-328], r7
  sub64 r3, r4
  mov64 r4, 1
  stxdw [r10-320], r4
  jlt r2, r1, jmp_2d560

jmp_2d558:
  mov64 r4, 0

jmp_2d560:
  sub64 r3, r4
  sub64 r2, r1
  mov64 r1, r10
  add64 r1, -240
  mov64 r4, r9
  mov64 r7, r2
  mov64 r5, 0
  call fn_31788
  mov64 r1, r10
  add64 r1, -256
  ldxdw r8, [r10-240]
  ldxdw r6, [r10-232]
  mov64 r2, r8
  mov64 r3, r6
  mov64 r4, r9
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -272
  mov64 r2, r8
  mov64 r3, r6
  ldxdw r4, [r10-296]
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-256]
  sub64 r7, r1
  ldxdw r0, [r10-272]
  mov64 r3, 1
  ldxdw r2, [r10-312]
  jlt r2, r0, jmp_2d7f8
  ldxdw r1, [r10-264]
  jlt r7, r1, jmp_2d810

jmp_2d660:
  jne r7, r1, jmp_2d828

jmp_2d668:
  and64 r3, 1
  jne r3, 0, jmp_2d840

jmp_2d678:
  stxdw [r10-320], r0
  mov64 r4, r2
  ldxdw r3, [r10-296]
  add64 r4, r3
  mov64 r3, 0
  mov64 r0, 1
  stxdw [r10-376], r0
  jlt r4, r2, jmp_2d6c0
  mov64 r0, 0

jmp_2d6c0:
  mov64 r2, r7
  mov64 r5, r7
  add64 r5, r9
  add64 r5, r0
  mov64 r7, 1
  ldxdw r9, [r10-320]
  jlt r4, r9, jmp_2dad8
  mov64 r9, 1
  jlt r5, r1, jmp_2daf0

jmp_2d708:
  jne r5, r1, jmp_2db00

jmp_2d710:
  mov64 r9, 1
  jge r5, r2, jmp_2db18

jmp_2d720:
  jne r5, r2, jmp_2db28

jmp_2d728:
  or64 r0, r7
  mov64 r7, -1
  jeq r0, 0, jmp_2db48

jmp_2d740:
  mov64 r9, r7
  add64 r9, r8
  mov64 r8, 1
  jge r9, r7, jmp_2db70

jmp_2d760:
  mov64 r7, 0
  jeq r0, 0, jmp_2db88

jmp_2d770:
  mov64 r2, r7
  add64 r2, r4
  mov64 r4, r2
  jge r2, r7, jmp_2dbb0

jmp_2d790:
  jne r0, 0, jmp_2d7a0

jmp_2d798:
  ldxdw r3, [r10-304]

jmp_2d7a0:
  add64 r3, r5
  ldxdw r2, [r10-376]
  add64 r3, r2
  add64 r6, r8
  add64 r6, -1
  mov64 r2, r4
  ldxdw r0, [r10-320]
  mov64 r5, 1
  ldxdw r4, [r10-352]
  jge r2, r0, jmp_2d868
  ja jmp_2d870

jmp_2d7f8:
  mov64 r3, 0
  ldxdw r1, [r10-264]
  jge r7, r1, jmp_2d660

jmp_2d810:
  mov64 r4, 0
  stxdw [r10-320], r4
  jeq r7, r1, jmp_2d668

jmp_2d828:
  ldxdw r3, [r10-320]
  and64 r3, 1
  jeq r3, 0, jmp_2d678

jmp_2d840:
  mov64 r3, r7
  mov64 r9, r8
  mov64 r5, 1
  ldxdw r4, [r10-352]
  jlt r2, r0, jmp_2d870

jmp_2d868:
  mov64 r5, 0

jmp_2d870:
  sub64 r3, r1
  sub64 r3, r5
  sub64 r2, r0
  lsh64 r4, 32
  arsh64 r4, 32
  mov64 r1, r10
  add64 r1, -288
  call fn_302f8
  ldxdw r1, [r10-360]
  ldxdw r3, [r10-336]
  add64 r3, r1
  ldxdw r2, [r10-344]
  ldxdw r1, [r10-368]
  stxdw [r2+16], r1
  stxdw [r2+0], r9
  stxdw [r2+24], r3
  ldxdw r1, [r10-328]
  add64 r6, r1
  stxdw [r2+8], r6
  ldxdw r1, [r10-280]
  stxdw [r2+40], r1
  ldxdw r1, [r10-288]
  stxdw [r2+32], r1
  exit

jmp_2d930:
  mov64 r4, 0
  mov64 r7, 1
  jge r5, r2, jmp_2cda8

jmp_2d948:
  mov64 r7, 0
  jeq r5, r2, jmp_2cdb0

jmp_2d958:
  mov64 r4, r7
  mov64 r7, 1
  jlt r5, r9, jmp_2cdc0

jmp_2d970:
  mov64 r7, 0
  jeq r5, r9, jmp_2cdc8

jmp_2d980:
  mov64 r0, r7
  or64 r0, r4
  mov64 r7, -1
  jeq r0, 0, jmp_2cde0
  ja jmp_2cde8

jmp_2d9a8:
  ldxdw r4, [r10-296]
  mov64 r7, r4
  add64 r7, r6
  mov64 r6, 1
  jlt r7, r4, jmp_2ce38

jmp_2d9d0:
  mov64 r6, 0
  jeq r0, 0, jmp_2ce40
  ja jmp_2ce48

jmp_2d9e8:
  mov64 r4, 0
  mov64 r9, 1
  jge r5, r1, jmp_2d0a0

jmp_2da00:
  mov64 r9, 0
  jeq r5, r1, jmp_2d0a8

jmp_2da10:
  mov64 r4, r9
  mov64 r9, 1
  jlt r5, r7, jmp_2d0b8

jmp_2da28:
  mov64 r9, 0
  jeq r5, r7, jmp_2d0c0

jmp_2da38:
  mov64 r0, r9
  or64 r0, r4
  mov64 r9, -1
  jeq r0, 0, jmp_2d0d8
  ja jmp_2d0e0

jmp_2da60:
  mov64 r8, 0
  mov64 r9, 1
  jge r5, r4, jmp_2d3e8

jmp_2da78:
  mov64 r9, 0
  jeq r5, r4, jmp_2d3f0

jmp_2da88:
  mov64 r8, r9
  mov64 r9, 1
  jlt r5, r2, jmp_2d400

jmp_2daa0:
  mov64 r9, 0
  jeq r5, r2, jmp_2d408

jmp_2dab0:
  mov64 r0, r9
  or64 r0, r8
  mov64 r8, -1
  jeq r0, 0, jmp_2d420
  ja jmp_2d428

jmp_2dad8:
  mov64 r7, 0
  mov64 r9, 1
  jge r5, r1, jmp_2d708

jmp_2daf0:
  mov64 r9, 0
  jeq r5, r1, jmp_2d710

jmp_2db00:
  mov64 r7, r9
  mov64 r9, 1
  jlt r5, r2, jmp_2d720

jmp_2db18:
  mov64 r9, 0
  jeq r5, r2, jmp_2d728

jmp_2db28:
  mov64 r0, r9
  or64 r0, r7
  mov64 r7, -1
  jne r0, 0, jmp_2d740

jmp_2db48:
  mov64 r7, -2
  mov64 r9, r7
  add64 r9, r8
  mov64 r8, 1
  jlt r9, r7, jmp_2d760

jmp_2db70:
  mov64 r8, 0
  mov64 r7, 0
  jne r0, 0, jmp_2d770

jmp_2db88:
  ldxdw r7, [r10-296]
  mov64 r2, r7
  add64 r2, r4
  mov64 r4, r2
  jlt r2, r7, jmp_2d790

jmp_2dbb0:
  mov64 r2, 0
  stxdw [r10-376], r2
  jeq r0, 0, jmp_2d798
  ja jmp_2d7a0
  mov64 r4, r2
  ldxdw r1, [r1+0]
  ldxb r1, [r1+0]
  lsh64 r1, 3
  lddw r3, data_0030
  add64 r3, r1
  lddw r2, 207600
  add64 r2, r1
  ldxdw r2, [r2+0]
  ldxdw r3, [r3+0]
  mov64 r1, r4
  call fn_2f080
  exit
  stxdw [r10-72], r1
  lddw r1, data_0248
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -16
  stxdw [r10-48], r1
  lddw r1, 187632
  stxdw [r10-8], r1
  mov64 r1, r10
  add64 r1, -72
  stxdw [r10-16], r1
  stdw [r10-32], 0
  stdw [r10-56], 1
  stdw [r10-40], 1
  ldxdw r4, [r2+40]
  ldxdw r1, [r2+32]
  mov64 r3, r10
  add64 r3, -64
  mov64 r2, r4
  call fn_2e0d0
  exit

fn_2dd00:  ; → sol_try_find_program_address
  mov64 r0, r4
  mov64 r6, r1
  stdw [r10-32], 0
  stdw [r10-40], 0
  stdw [r10-48], 0
  stdw [r10-56], 0
  stb [r10-1], 255
  mov64 r4, r10
  add64 r4, -56
  mov64 r5, r10
  add64 r5, -1
  mov64 r1, r2
  mov64 r2, r3
  mov64 r3, r0
  call sol_try_find_program_address
  jne r0, 0, jmp_2ddd8
  ldxdw r1, [r10-32]
  stxdw [r6+24], r1
  ldxdw r1, [r10-40]
  stxdw [r6+16], r1
  ldxdw r1, [r10-48]
  stxdw [r6+8], r1
  ldxdw r1, [r10-56]
  stxdw [r6+0], r1
  ldxb r1, [r10-1]
  stxb [r6+32], r1
  exit

jmp_2ddd8:
  lddw r1, 207632
  stxdw [r10-56], r1
  stdw [r10-24], 0
  stdw [r10-48], 1
  stdw [r10-32], 0
  stdw [r10-40], 8
  mov64 r1, r10
  add64 r1, -56
  lddw r2, 207648
  call fn_2de88  ; → → custom_panic

fn_2de38:  ; sol_log_data
  call sol_log_data
  exit

fn_2de48:  ; → custom_panic
  call fn_2de50  ; custom_panic

fn_2de50:  ; custom_panic
  call custom_panic
  call abort

fn_2de60:  ; → → → → custom_panic
  mov64 r3, r1
  lddw r1, str_0a50
  mov64 r2, 43
  call fn_2deb8  ; → → → custom_panic

fn_2de88:  ; → → custom_panic
  stxdw [r10-16], r2
  stxdw [r10-24], r1
  sth [r10-8], 1
  mov64 r1, r10
  add64 r1, -24
  call fn_2de48  ; → custom_panic

fn_2deb8:  ; → → → custom_panic
  mov64 r4, r10
  add64 r4, -16
  stxdw [r10-64], r4
  stxdw [r10-8], r2
  stxdw [r10-16], r1
  stdw [r10-32], 0
  stdw [r10-56], 1
  stdw [r10-40], 0
  stdw [r10-48], 8
  mov64 r1, r10
  add64 r1, -64
  mov64 r2, r3
  call fn_2de88  ; → → custom_panic

fn_2df20:  ; → → → custom_panic
  stxdw [r10-88], r2
  stxdw [r10-96], r1
  lddw r1, 207672
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -96
  stxdw [r10-16], r1
  lddw r1, 194976
  stxdw [r10-8], r1
  stxdw [r10-24], r1
  mov64 r1, r10
  add64 r1, -88
  stxdw [r10-32], r1
  stdw [r10-48], 0
  stdw [r10-72], 2
  stdw [r10-56], 2
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r3
  call fn_2de88  ; → → custom_panic

fn_2dfe8:  ; → → → custom_panic
  stxdw [r10-104], r2
  stxdw [r10-112], r1
  stxdw [r10-88], r4
  stxdw [r10-96], r3
  lddw r1, 207704
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-64], r1
  lddw r1, 195696
  stxdw [r10-8], r1
  mov64 r1, r10
  add64 r1, -96
  stxdw [r10-16], r1
  lddw r1, 195744
  stxdw [r10-24], r1
  mov64 r1, r10
  add64 r1, -112
  stxdw [r10-32], r1
  stdw [r10-48], 0
  stdw [r10-72], 2
  stdw [r10-56], 2
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r5
  call fn_2de88  ; → → custom_panic

fn_2e0d0:
  stxdw [r10-24], r2
  stxdw [r10-32], r1
  stb [r10-8], 3
  stdw [r10-16], 32
  stdw [r10-48], 0
  stdw [r10-64], 0
  ldxdw r8, [r3+32]
  stxdw [r10-88], r3
  jeq r8, 0, jmp_2e398
  ldxdw r1, [r3+40]
  jeq r1, 0, jmp_2e478
  mov64 r6, 0
  mul64 r1, 56
  ldxdw r2, [r3+16]
  stxdw [r10-72], r2
  ldxdw r9, [r3+0]
  add64 r9, 8
  mov64 r7, 0
  stxdw [r10-80], r1

jmp_2e168:
  ldxdw r3, [r9+0]
  jeq r3, 0, jmp_2e1a8
  ldxdw r1, [r10-24]
  ldxdw r4, [r1+24]
  ldxdw r2, [r9-8]
  ldxdw r1, [r10-32]
  callx r4
  jne r0, 0, jmp_2e4f0

jmp_2e1a8:
  mov64 r2, r8
  add64 r2, r6
  ldxw r1, [r2+40]
  stxw [r10-16], r1
  ldxb r1, [r2+48]
  stxb [r10-8], r1
  ldxw r1, [r2+44]
  stxw [r10-12], r1
  mov64 r1, 0
  ldxdw r5, [r2+16]
  mov64 r4, 0
  jeq r5, 2, jmp_2e268
  add64 r2, 16
  jne r5, 1, jmp_2e258
  mov64 r2, r8
  add64 r2, r6
  ldxdw r3, [r2+24]
  lsh64 r3, 4
  ldxdw r2, [r10-72]
  add64 r2, r3
  ldxdw r5, [r2+0]
  jne r5, 0, jmp_2e268

jmp_2e258:
  mov64 r4, 1
  ldxdw r3, [r2+8]

jmp_2e268:
  mov64 r2, r8
  add64 r2, r6
  stxdw [r10-56], r3
  stxdw [r10-64], r4
  ldxdw r3, [r2+0]
  jeq r3, 2, jmp_2e2f8
  jne r3, 1, jmp_2e2e0
  mov64 r2, r8
  add64 r2, r6
  ldxdw r3, [r2+8]
  lsh64 r3, 4
  ldxdw r2, [r10-72]
  add64 r2, r3
  ldxdw r4, [r2+0]
  jne r4, 0, jmp_2e2f8

jmp_2e2e0:
  mov64 r1, 1
  ldxdw r3, [r2+8]
  ja jmp_2e2f8

jmp_2e2f8:
  stxdw [r10-40], r3
  stxdw [r10-48], r1
  mov64 r1, r8
  add64 r1, r6
  ldxdw r1, [r1+32]
  lsh64 r1, 4
  ldxdw r2, [r10-72]
  add64 r2, r1
  ldxdw r3, [r2+8]
  ldxdw r1, [r2+0]
  mov64 r2, r10
  add64 r2, -64
  callx r3
  jne r0, 0, jmp_2e4f0
  add64 r7, 1
  add64 r9, 16
  add64 r6, 56
  ldxdw r1, [r10-80]
  jne r1, r6, jmp_2e168
  ja jmp_2e480

jmp_2e398:
  ldxdw r1, [r3+24]
  jeq r1, 0, jmp_2e478
  ldxdw r6, [r3+16]
  lsh64 r1, 4
  mov64 r8, r6
  add64 r8, r1
  mov64 r7, 0
  ldxdw r9, [r3+0]
  add64 r9, 8

jmp_2e3e0:
  ldxdw r3, [r9+0]
  jeq r3, 0, jmp_2e420
  ldxdw r1, [r10-24]
  ldxdw r4, [r1+24]
  ldxdw r2, [r9-8]
  ldxdw r1, [r10-32]
  callx r4
  jne r0, 0, jmp_2e4f0

jmp_2e420:
  ldxdw r3, [r6+8]
  ldxdw r1, [r6+0]
  mov64 r2, r10
  add64 r2, -64
  callx r3
  jne r0, 0, jmp_2e4f0
  add64 r7, 1
  add64 r9, 16
  add64 r6, 16
  jne r6, r8, jmp_2e3e0
  ja jmp_2e480

jmp_2e478:
  mov64 r7, 0

jmp_2e480:
  ldxdw r1, [r10-88]
  ldxdw r1, [r1+8]
  jge r7, r1, jmp_2e500
  lsh64 r7, 4
  ldxdw r1, [r10-88]
  ldxdw r1, [r1+0]
  add64 r1, r7
  ldxdw r3, [r1+8]
  ldxdw r2, [r1+0]
  ldxdw r1, [r10-24]
  ldxdw r4, [r1+24]
  ldxdw r1, [r10-32]
  callx r4
  jeq r0, 0, jmp_2e500

jmp_2e4f0:
  mov64 r0, 1
  ja jmp_2e508

jmp_2e500:
  mov64 r0, 0

jmp_2e508:
  exit

fn_2e510:
  mov64 r6, r1
  ldxdw r9, [r5-4088]
  stxdw [r10-40], r9
  jeq r2, 0, jmp_2e568
  mov64 r2, 1114112
  ldxw r7, [r6+52]
  mov64 r1, r7
  and64 r1, 1
  jeq r1, 0, jmp_2e580
  mov64 r2, 43
  ja jmp_2e578

jmp_2e568:
  mov64 r2, 45
  ldxw r7, [r6+52]

jmp_2e578:
  add64 r9, 1

jmp_2e580:
  ldxdw r1, [r5-4096]
  stxdw [r10-48], r1
  mov64 r1, r7
  and64 r1, 4
  jne r1, 0, jmp_2e5c0
  mov64 r3, 0
  mov64 r8, r9
  ja jmp_2e698

jmp_2e5c0:
  stxdw [r10-56], r2
  jge r4, 32, jmp_2e648
  mov64 r8, 0
  jeq r4, 0, jmp_2e688
  mov64 r1, r3
  mov64 r2, r4

jmp_2e5f0:
  ldxb r5, [r1+0]
  lsh64 r5, 56
  arsh64 r5, 56
  mov64 r0, 1
  jsgt r5, -65, jmp_2e620
  mov64 r0, 0

jmp_2e620:
  add64 r8, r0
  add64 r1, 1
  add64 r2, -1
  jne r2, 0, jmp_2e5f0
  ja jmp_2e688

jmp_2e648:
  mov64 r1, r3
  mov64 r2, r4
  stxdw [r10-64], r4
  stxdw [r10-72], r3
  call fn_2f330
  mov64 r8, r0
  ldxdw r3, [r10-72]
  ldxdw r4, [r10-64]

jmp_2e688:
  add64 r8, r9
  ldxdw r2, [r10-56]

jmp_2e698:
  ldxdw r1, [r6+0]
  jeq r1, 0, jmp_2e808
  ldxdw r9, [r6+8]
  jle r9, r8, jmp_2e808
  and64 r7, 8
  jne r7, 0, jmp_2e878
  stxdw [r10-56], r2
  stxdw [r10-72], r3
  stxdw [r10-64], r4
  sub64 r9, r8
  mov64 r1, r10
  add64 r1, -32
  mov64 r7, 1
  mov64 r2, r6
  mov64 r3, r9
  mov64 r4, 1
  call fn_2ef60
  ldxw r8, [r10-24]
  jeq r8, 1114112, jmp_2e860
  ldxdw r1, [r10-32]
  stxdw [r10-80], r1
  mov64 r1, r6
  ldxdw r2, [r10-56]
  ldxdw r3, [r10-72]
  ldxdw r4, [r10-64]
  call fn_2ea28
  jne r0, 0, jmp_2e860
  ldxdw r1, [r6+32]
  ldxdw r6, [r6+40]
  ldxdw r4, [r6+24]
  stxdw [r10-56], r1
  ldxdw r2, [r10-48]
  ldxdw r3, [r10-40]
  callx r4
  jne r0, 0, jmp_2e860
  mov64 r9, 0
  ldxdw r7, [r10-80]

jmp_2e7c0:
  jeq r7, r9, jmp_2e9f8
  ldxdw r3, [r6+32]
  ldxdw r1, [r10-56]
  mov64 r2, r8
  callx r3
  add64 r9, 1
  jeq r0, 0, jmp_2e7c0
  add64 r9, -1
  ja jmp_2ea00

jmp_2e808:
  mov64 r1, r6
  call fn_2ea28
  mov64 r7, 1
  jne r0, 0, jmp_2e860
  ldxdw r1, [r6+32]
  ldxdw r2, [r6+40]
  ldxdw r4, [r2+24]
  ldxdw r2, [r10-48]
  ldxdw r3, [r10-40]
  callx r4
  mov64 r7, r0

jmp_2e860:
  and64 r7, 1
  mov64 r0, r7
  exit

jmp_2e878:
  ldxw r1, [r6+48]
  stxdw [r10-80], r1
  stw [r6+48], 48
  ldxb r1, [r6+56]
  stxdw [r10-88], r1
  stb [r6+56], 1
  mov64 r1, r6
  call fn_2ea28
  mov64 r7, 1
  jne r0, 0, jmp_2e860
  sub64 r9, r8
  mov64 r1, r10
  add64 r1, -16
  mov64 r2, r6
  mov64 r3, r9
  mov64 r4, 1
  call fn_2ef60
  ldxw r8, [r10-8]
  jeq r8, 1114112, jmp_2e860
  ldxdw r1, [r10-16]
  stxdw [r10-56], r1
  ldxdw r1, [r6+32]
  ldxdw r2, [r6+40]
  stxdw [r10-72], r2
  ldxdw r4, [r2+24]
  stxdw [r10-64], r1
  ldxdw r2, [r10-48]
  ldxdw r3, [r10-40]
  callx r4
  jne r0, 0, jmp_2e860
  mov64 r9, 0

jmp_2e970:
  ldxdw r1, [r10-56]
  jeq r1, r9, jmp_2e9d0
  ldxdw r1, [r10-72]
  ldxdw r3, [r1+32]
  ldxdw r1, [r10-64]
  mov64 r2, r8
  callx r3
  add64 r9, 1
  jeq r0, 0, jmp_2e970
  add64 r9, -1
  ldxdw r1, [r10-56]
  jlt r9, r1, jmp_2e860

jmp_2e9d0:
  ldxdw r1, [r10-88]
  stxb [r6+56], r1
  ldxdw r1, [r10-80]
  stxw [r6+48], r1
  ja jmp_2ea18

jmp_2e9f8:
  mov64 r9, r7

jmp_2ea00:
  mov64 r1, r7
  mov64 r7, 1
  jlt r9, r1, jmp_2e860

jmp_2ea18:
  mov64 r7, 0
  ja jmp_2e860

fn_2ea28:
  mov64 r6, r4
  mov64 r7, r3
  mov64 r8, r1
  mov64 r1, r2
  lsh64 r1, 32
  rsh64 r1, 32
  jeq r1, 1114112, jmp_2ea98
  ldxdw r1, [r8+32]
  ldxdw r3, [r8+40]
  ldxdw r3, [r3+32]
  callx r3
  mov64 r1, r0
  mov64 r0, 1
  jne r1, 0, jmp_2eae0

jmp_2ea98:
  jeq r7, 0, jmp_2ead8
  ldxdw r1, [r8+32]
  ldxdw r2, [r8+40]
  ldxdw r4, [r2+24]
  mov64 r2, r7
  mov64 r3, r6
  callx r4
  ja jmp_2eae0

jmp_2ead8:
  mov64 r0, 0

jmp_2eae0:
  exit

fn_2eae8:
  mov64 r6, r3
  mov64 r7, r2
  mov64 r8, r1
  ldxdw r2, [r8+16]
  ldxdw r1, [r8+0]
  jne r1, 0, jmp_2eb30
  mov64 r3, r2
  and64 r3, 1
  jeq r3, 0, jmp_2eee0

jmp_2eb30:
  and64 r2, 1
  jeq r2, 0, jmp_2ed30
  mov64 r3, r7
  stxdw [r10-32], r6
  add64 r3, r6
  ldxdw r4, [r8+24]
  stxdw [r10-24], r7
  mov64 r2, 0
  jeq r4, 0, jmp_2ecd0
  mov64 r5, 0
  mov64 r0, r7

jmp_2eb88:
  mov64 r7, r0
  mov64 r6, r2
  jeq r7, r3, jmp_2ece0
  mov64 r0, r7
  add64 r0, 1
  ldxb r2, [r7+0]
  mov64 r9, r2
  lsh64 r9, 56
  arsh64 r9, 56
  jsgt r9, -1, jmp_2ec18
  mov64 r0, r7
  add64 r0, 2
  jlt r2, 224, jmp_2ec18
  mov64 r0, r7
  add64 r0, 3
  jlt r2, 240, jmp_2ec18
  mov64 r0, r7
  add64 r0, 4

jmp_2ec18:
  add64 r5, 1
  mov64 r2, r0
  sub64 r2, r7
  add64 r2, r6
  jlt r5, r4, jmp_2eb88
  jeq r0, r3, jmp_2ece0

jmp_2ec48:
  ldxb r3, [r0+0]
  mov64 r4, r3
  lsh64 r4, 56
  arsh64 r4, 56
  ldxdw r6, [r10-32]
  jsgt r4, -1, jmp_2ec78

jmp_2ec78:
  ldxdw r7, [r10-24]
  jeq r2, 0, jmp_2ed08
  jge r2, r6, jmp_2ecf8
  mov64 r4, r7
  add64 r4, r2
  mov64 r3, 0
  ldxb r4, [r4+0]
  lsh64 r4, 56
  arsh64 r4, 56
  jsge r4, -64, jmp_2ed08
  ja jmp_2ed10

jmp_2ecd0:
  mov64 r0, r7
  jne r0, r3, jmp_2ec48

jmp_2ece0:
  ldxdw r6, [r10-32]
  ldxdw r7, [r10-24]
  ja jmp_2ed30

jmp_2ecf8:
  mov64 r3, 0
  jne r2, r6, jmp_2ed10

jmp_2ed08:
  mov64 r3, r7

jmp_2ed10:
  jeq r3, 0, jmp_2ed20
  mov64 r6, r2

jmp_2ed20:
  jeq r3, 0, jmp_2ed30
  mov64 r7, r3

jmp_2ed30:
  jeq r1, 0, jmp_2eee0
  ldxdw r9, [r8+8]
  jge r6, 32, jmp_2eec0
  mov64 r0, 0
  jeq r6, 0, jmp_2edb8
  mov64 r1, r7
  mov64 r2, r6

jmp_2ed68:
  ldxb r4, [r1+0]
  lsh64 r4, 56
  arsh64 r4, 56
  mov64 r3, 1
  jsgt r4, -65, jmp_2ed98
  mov64 r3, 0

jmp_2ed98:
  add64 r0, r3
  add64 r1, 1
  add64 r2, -1
  jne r2, 0, jmp_2ed68

jmp_2edb8:
  jle r9, r0, jmp_2eee0

jmp_2edc0:
  stxdw [r10-24], r7
  sub64 r9, r0
  mov64 r1, r10
  add64 r1, -16
  mov64 r2, r8
  mov64 r3, r9
  mov64 r4, 0
  call fn_2ef60
  mov64 r9, 1
  ldxw r7, [r10-8]
  jeq r7, 1114112, jmp_2ef18
  ldxdw r1, [r10-16]
  stxdw [r10-40], r1
  ldxdw r1, [r8+32]
  ldxdw r8, [r8+40]
  ldxdw r4, [r8+24]
  stxdw [r10-32], r1
  ldxdw r2, [r10-24]
  mov64 r3, r6
  callx r4
  jne r0, 0, jmp_2ef18
  mov64 r6, 0
  ldxdw r9, [r10-40]

jmp_2ee78:
  jeq r9, r6, jmp_2ef30
  ldxdw r3, [r8+32]
  ldxdw r1, [r10-32]
  mov64 r2, r7
  callx r3
  add64 r6, 1
  jeq r0, 0, jmp_2ee78
  add64 r6, -1
  ja jmp_2ef38

jmp_2eec0:
  mov64 r1, r7
  mov64 r2, r6
  call fn_2f330
  jgt r9, r0, jmp_2edc0

jmp_2eee0:
  ldxdw r1, [r8+32]
  ldxdw r2, [r8+40]
  ldxdw r4, [r2+24]
  mov64 r2, r7
  mov64 r3, r6
  callx r4
  mov64 r9, r0

jmp_2ef18:
  and64 r9, 1
  mov64 r0, r9
  exit

jmp_2ef30:
  mov64 r6, r9

jmp_2ef38:
  mov64 r1, r9
  mov64 r9, 1
  jlt r6, r1, jmp_2ef18
  mov64 r9, 0
  ja jmp_2ef18

fn_2ef60:
  stxdw [r10-8], r1
  ldxb r9, [r2+56]
  jsgt r9, 1, jmp_2ef88
  jne r9, 0, jmp_2efc8
  ja jmp_2eff0

jmp_2ef88:
  jne r9, 2, jmp_2efb8
  mov64 r9, r3
  rsh64 r9, 1
  add64 r3, 1
  rsh64 r3, 1
  ja jmp_2eff0

jmp_2efb8:
  and64 r4, 255
  jeq r4, 0, jmp_2efe8

jmp_2efc8:
  mov64 r1, 0
  stxdw [r10-16], r1
  mov64 r9, r3
  ja jmp_2eff8

jmp_2efe8:
  mov64 r9, 0

jmp_2eff0:
  stxdw [r10-16], r3

jmp_2eff8:
  add64 r9, 1
  ldxw r7, [r2+48]
  ldxdw r6, [r2+40]
  ldxdw r8, [r2+32]

jmp_2f018:
  add64 r9, -1
  jeq r9, 0, jmp_2f058
  ldxdw r3, [r6+32]
  mov64 r1, r8
  mov64 r2, r7
  callx r3
  jeq r0, 0, jmp_2f018
  mov64 r7, 1114112

jmp_2f058:
  ldxdw r1, [r10-8]
  stxw [r1+8], r7
  ldxdw r2, [r10-16]
  stxdw [r1+0], r2
  exit

fn_2f080:
  ldxdw r4, [r1+32]
  ldxdw r1, [r1+40]
  ldxdw r5, [r1+24]
  mov64 r1, r4
  callx r5
  exit

fn_2f0b0:
  mov64 r4, r2
  mov64 r2, r1
  mov64 r1, r3
  mov64 r3, r4
  call fn_2eae8
  exit

fn_2f0e0:
  mov64 r5, 0
  mov64 r0, r3
  add64 r0, 7
  and64 r0, -8
  jeq r0, r3, jmp_2f170
  sub64 r0, r3
  jlt r0, r4, jmp_2f120
  mov64 r0, r4

jmp_2f120:
  jeq r0, 0, jmp_2f170

jmp_2f128:
  mov64 r6, r3
  add64 r6, r5
  ldxb r7, [r6+0]
  mov64 r6, r2
  and64 r6, 255
  jeq r7, r6, jmp_2f2f8
  add64 r5, 1
  jlt r5, r0, jmp_2f128
  mov64 r5, r0

jmp_2f170:
  stxdw [r10-8], r1
  mov64 r0, r4
  add64 r0, -16
  jgt r5, r0, jmp_2f260
  mov64 r6, r2
  and64 r6, 255
  lddw r7, 72340172838076673
  mul64 r6, r7
  lddw r1, -9187201950435737472

jmp_2f1c8:
  mov64 r8, r3
  add64 r8, r5
  ldxdw r9, [r8+8]
  xor64 r9, r6
  lddw r7, 72340172838076672
  sub64 r7, r9
  or64 r7, r9
  ldxdw r8, [r8+0]
  xor64 r8, r6
  lddw r9, 72340172838076672
  sub64 r9, r8
  or64 r9, r8
  and64 r9, r7
  and64 r9, r1
  jne r9, r1, jmp_2f260
  add64 r5, 16
  jle r5, r0, jmp_2f1c8

jmp_2f260:
  jne r4, r5, jmp_2f280
  mov64 r2, 0
  ldxdw r1, [r10-8]
  ja jmp_2f300

jmp_2f280:
  sub64 r4, r5
  add64 r3, r5
  mov64 r0, 0
  ldxdw r1, [r10-8]

jmp_2f2a0:
  mov64 r6, r3
  add64 r6, r0
  ldxb r7, [r6+0]
  mov64 r6, r2
  and64 r6, 255
  jeq r7, r6, jmp_2f2f0
  add64 r0, 1
  jlt r0, r4, jmp_2f2a0
  mov64 r2, 0
  ja jmp_2f300

jmp_2f2f0:
  add64 r5, r0

jmp_2f2f8:
  mov64 r2, 1

jmp_2f300:
  stxdw [r1+8], r5
  stxdw [r1+0], r2
  exit

fn_2f318:  ; → → → → custom_panic
  call fn_2fbb0  ; → → → custom_panic

fn_2f320:  ; → → → → custom_panic
  call fn_2fc78  ; → → → custom_panic

fn_2f328:  ; → → → → custom_panic
  call fn_2fd40  ; → → → custom_panic

fn_2f330:
  mov64 r7, r1
  add64 r7, 7
  and64 r7, -8
  mov64 r3, r7
  sub64 r3, r1
  jge r2, r3, jmp_2f3c8

jmp_2f360:
  mov64 r0, 0
  jeq r2, 0, jmp_2f820

jmp_2f370:
  ldxb r4, [r1+0]
  lsh64 r4, 56
  arsh64 r4, 56
  mov64 r3, 1
  jsgt r4, -65, jmp_2f3a0
  mov64 r3, 0

jmp_2f3a0:
  add64 r0, r3
  add64 r1, 1
  add64 r2, -1
  jne r2, 0, jmp_2f370
  ja jmp_2f820

jmp_2f3c8:
  mov64 r8, r2
  sub64 r8, r3
  jlt r8, 8, jmp_2f360
  stxdw [r10-8], r3
  mov64 r2, r8
  and64 r2, 7
  mov64 r0, 0
  mov64 r3, 0
  jeq r7, r1, jmp_2f490
  mov64 r6, r1
  sub64 r6, r7
  mov64 r7, r1

jmp_2f428:
  ldxb r5, [r7+0]
  lsh64 r5, 56
  arsh64 r5, 56
  mov64 r4, 1
  mov64 r9, 1
  jsgt r5, -65, jmp_2f460
  mov64 r9, 0

jmp_2f460:
  add64 r6, 1
  jeq r6, 0, jmp_2f478
  mov64 r4, 0

jmp_2f478:
  add64 r3, r9
  add64 r7, 1
  jne r4, 1, jmp_2f428

jmp_2f490:
  ldxdw r4, [r10-8]
  add64 r1, r4
  jeq r2, 0, jmp_2f520
  mov64 r0, r8
  and64 r0, -8
  mov64 r5, r1
  add64 r5, r0
  mov64 r0, 0

jmp_2f4d0:
  ldxb r7, [r5+0]
  lsh64 r7, 56
  arsh64 r7, 56
  mov64 r6, 1
  jsgt r7, -65, jmp_2f500
  mov64 r6, 0

jmp_2f500:
  add64 r0, r6
  add64 r5, 1
  add64 r2, -1
  jne r2, 0, jmp_2f4d0

jmp_2f520:
  rsh64 r8, 3
  add64 r0, r3
  lddw r9, 72340172838076673

jmp_2f540:
  mov64 r7, r8
  mov64 r3, r1
  jeq r7, 0, jmp_2f820
  mov64 r1, r7
  jlt r7, 192, jmp_2f570
  mov64 r1, 192

jmp_2f570:
  stxdw [r10-16], r1
  lsh64 r1, 3
  stxdw [r10-8], r1
  mov64 r5, 0
  jlt r7, 4, jmp_2f648
  ldxdw r2, [r10-8]
  and64 r2, 2016
  mov64 r1, r3
  add64 r1, r2
  mov64 r2, r3

jmp_2f5c0:
  mov64 r8, r5
  mov64 r6, 0

jmp_2f5d0:
  mov64 r5, r2
  add64 r5, r6
  ldxdw r5, [r5+0]
  mov64 r4, r5
  rsh64 r4, 6
  xor64 r5, -1
  rsh64 r5, 7
  or64 r5, r4
  and64 r5, r9
  add64 r5, r8
  add64 r6, 8
  mov64 r8, r5
  jne r6, 32, jmp_2f5d0
  add64 r2, 32
  jne r2, r1, jmp_2f5c0

jmp_2f648:
  mov64 r1, r3
  ldxdw r2, [r10-8]
  add64 r1, r2
  ldxdw r2, [r10-16]
  mov64 r4, r2
  and64 r4, 3
  stxdw [r10-8], r3
  mov64 r3, r7
  sub64 r3, r2
  mov64 r6, r5
  lddw r8, 71777214294589695
  and64 r6, r8
  rsh64 r5, 8
  and64 r5, r8
  mov64 r8, r3
  add64 r5, r6
  lddw r6, 281479271743489
  mul64 r5, r6
  rsh64 r5, 48
  add64 r5, r0
  mov64 r0, r5
  jeq r4, 0, jmp_2f540
  ldxdw r3, [r10-8]
  and64 r2, 252
  lsh64 r2, 3
  jlt r7, 192, jmp_2f730
  mov64 r7, 192

jmp_2f730:
  add64 r3, r2
  mov64 r2, 0
  and64 r7, 3
  lsh64 r7, 3
  lddw r1, 72340172838076673

jmp_2f760:
  ldxdw r0, [r3+0]
  mov64 r4, r0
  rsh64 r4, 6
  xor64 r0, -1
  rsh64 r0, 7
  or64 r0, r4
  and64 r0, r1
  add64 r0, r2
  add64 r3, 8
  add64 r7, -8
  mov64 r2, r0
  jne r7, 0, jmp_2f760
  lddw r1, 71777214294589695
  mov64 r2, r0
  and64 r2, r1
  rsh64 r0, 8
  and64 r0, r1
  add64 r0, r2
  lddw r1, 281479271743489
  mul64 r0, r1
  rsh64 r0, 48
  add64 r0, r5

jmp_2f820:
  exit

fn_2f828:  ; → → → custom_panic
  mov64 r2, r1
  lddw r1, 207736
  stxdw [r10-48], r1
  stdw [r10-16], 0
  stdw [r10-40], 1
  stdw [r10-24], 0
  stdw [r10-32], 8
  mov64 r1, r10
  add64 r1, -48
  call fn_2de88  ; → → custom_panic
  mov64 r3, r2
  ldxdw r1, [r1+0]
  mov64 r2, 1
  call fn_2f8a8
  exit

fn_2f8a8:
  mov64 r4, 20
  jlt r1, 10000, jmp_2f9b8
  mov64 r4, 0

jmp_2f8c0:
  mov64 r5, r1
  div64 r1, 10000
  mov64 r6, r1
  mul64 r6, 10000
  mov64 r0, r5
  sub64 r0, r6
  mov64 r6, r0
  and64 r6, 65535
  div64 r6, 100
  mov64 r7, r6
  mul64 r7, 100
  sub64 r0, r7
  mov64 r7, r10
  add64 r7, -20
  add64 r7, r4
  lsh64 r6, 1
  lddw r8, str_0a8f
  add64 r8, r6
  ldxh r6, [r8+0]
  stxh [r7+16], r6
  lsh64 r0, 1
  and64 r0, 65534
  lddw r6, str_0a8f
  add64 r6, r0
  ldxh r0, [r6+0]
  stxh [r7+18], r0
  add64 r4, -4
  jgt r5, 99999999, jmp_2f8c0
  add64 r4, 20

jmp_2f9b8:
  jle r1, 99, jmp_2faa8
  mov64 r5, r1
  and64 r5, 65535
  div64 r5, 100
  mov64 r0, r5
  mul64 r0, 100
  sub64 r1, r0
  lsh64 r1, 1
  and64 r1, 65534
  lddw r0, str_0a8f
  add64 r0, r1
  add64 r4, -2
  mov64 r1, r10
  add64 r1, -20
  add64 r1, r4
  ldxh r0, [r0+0]
  stxh [r1+0], r0
  jlt r5, 10, jmp_2fab8

jmp_2fa50:
  lsh64 r5, 1
  lddw r1, str_0a8f
  add64 r1, r5
  add64 r4, -2
  mov64 r5, r10
  add64 r5, -20
  add64 r5, r4
  ldxh r1, [r1+0]
  stxh [r5+0], r1
  ja jmp_2fae8

jmp_2faa8:
  mov64 r5, r1
  jge r5, 10, jmp_2fa50

jmp_2fab8:
  add64 r4, -1
  mov64 r1, r10
  add64 r1, -20
  add64 r1, r4
  or64 r5, 48
  stxb [r1+0], r5

jmp_2fae8:
  mov64 r1, 20
  sub64 r1, r4
  stxdw [r10-4088], r1
  mov64 r1, r10
  add64 r1, -20
  add64 r1, r4
  stxdw [r10-4096], r1
  mov64 r5, r10
  mov64 r1, r3
  mov64 r3, 1
  mov64 r4, 0
  call fn_2e510
  exit
  ldxdw r3, [r1+0]
  ldxdw r1, [r1+8]
  ldxdw r4, [r1+24]
  mov64 r1, r3
  callx r4
  exit
  mov64 r4, r2
  ldxdw r3, [r1+8]
  ldxdw r2, [r1+0]
  mov64 r1, r4
  call fn_2eae8
  exit

fn_2fbb0:  ; → → → custom_panic
  stxdw [r10-88], r2
  stxdw [r10-96], r1
  lddw r1, 207752
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -88
  stxdw [r10-16], r1
  lddw r1, 194976
  stxdw [r10-8], r1
  stxdw [r10-24], r1
  mov64 r1, r10
  add64 r1, -96
  stxdw [r10-32], r1
  stdw [r10-48], 0
  stdw [r10-72], 2
  stdw [r10-56], 2
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r3
  call fn_2de88  ; → → custom_panic

fn_2fc78:  ; → → → custom_panic
  stxdw [r10-88], r2
  stxdw [r10-96], r1
  lddw r1, 207784
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -88
  stxdw [r10-16], r1
  lddw r1, 194976
  stxdw [r10-8], r1
  stxdw [r10-24], r1
  mov64 r1, r10
  add64 r1, -96
  stxdw [r10-32], r1
  stdw [r10-48], 0
  stdw [r10-72], 2
  stdw [r10-56], 2
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r3
  call fn_2de88  ; → → custom_panic

fn_2fd40:  ; → → → custom_panic
  stxdw [r10-88], r2
  stxdw [r10-96], r1
  lddw r1, 207816
  stxdw [r10-80], r1
  mov64 r1, r10
  add64 r1, -32
  stxdw [r10-64], r1
  mov64 r1, r10
  add64 r1, -88
  stxdw [r10-16], r1
  lddw r1, 194976
  stxdw [r10-8], r1
  stxdw [r10-24], r1
  mov64 r1, r10
  add64 r1, -96
  stxdw [r10-32], r1
  stdw [r10-48], 0
  stdw [r10-72], 2
  stdw [r10-56], 2
  mov64 r1, r10
  add64 r1, -80
  mov64 r2, r3
  call fn_2de88  ; → → custom_panic

fn_2fe08:  ; → sol_memcpy_
  mov64 r6, r1
  call sol_memcpy_
  mov64 r0, r6
  exit

fn_2fe28:  ; → sol_memmove_
  mov64 r6, r1
  call sol_memmove_
  mov64 r0, r6
  exit

fn_2fe48:  ; → sol_memset_
  mov64 r6, r1
  and64 r2, 255
  call sol_memset_
  mov64 r0, r6
  exit

fn_2fe70:
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -16
  call fn_2ff78
  ldxdw r1, [r10-16]
  ldxdw r2, [r10-8]
  stxdw [r6+8], r2
  stxdw [r6+0], r1
  exit

fn_2feb8:
  mov64 r5, r4
  and64 r5, 64
  jne r5, 0, jmp_2ff40
  mov64 r5, r4
  lsh64 r5, 32
  rsh64 r5, 32
  jeq r5, 0, jmp_2ff60
  mov64 r5, r4
  and64 r5, 63
  lsh64 r3, r5
  neg64 r4
  and64 r4, 63
  mov64 r0, r2
  rsh64 r0, r4
  or64 r3, r0
  lsh64 r2, r5
  ja jmp_2ff60

jmp_2ff40:
  and64 r4, 63
  mov64 r3, r2
  lsh64 r3, r4
  mov64 r2, 0

jmp_2ff60:
  stxdw [r1+0], r2
  stxdw [r1+8], r3
  exit

fn_2ff78:
  mov64 r5, r4
  and64 r5, 64
  jne r5, 0, jmp_30008
  mov64 r5, r4
  lsh64 r5, 32
  rsh64 r5, 32
  jeq r5, 0, jmp_30028
  mov64 r5, r4
  and64 r5, 63
  rsh64 r2, r5
  neg64 r4
  and64 r4, 63
  mov64 r0, r3
  lsh64 r0, r4
  or64 r0, r2
  arsh64 r3, r5
  mov64 r2, r0
  ja jmp_30028

jmp_30008:
  and64 r4, 63
  mov64 r2, r3
  arsh64 r2, r4
  arsh64 r3, 63

jmp_30028:
  stxdw [r1+0], r2
  stxdw [r1+8], r3
  exit

fn_30040:
  mov64 r5, r4
  and64 r5, 64
  jne r5, 0, jmp_300d0
  mov64 r5, r4
  lsh64 r5, 32
  rsh64 r5, 32
  jeq r5, 0, jmp_300f0
  mov64 r5, r4
  and64 r5, 63
  rsh64 r2, r5
  neg64 r4
  and64 r4, 63
  mov64 r0, r3
  lsh64 r0, r4
  or64 r0, r2
  rsh64 r3, r5
  mov64 r2, r0
  ja jmp_300f0

jmp_300d0:
  and64 r4, 63
  rsh64 r3, r4
  mov64 r2, r3
  mov64 r3, 0

jmp_300f0:
  stxdw [r1+0], r2
  stxdw [r1+8], r3
  exit

fn_30108:
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -16
  call fn_2feb8
  ldxdw r1, [r10-16]
  ldxdw r2, [r10-8]
  stxdw [r6+8], r2
  stxdw [r6+0], r1
  exit

fn_30150:
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -16
  call fn_30198
  ldxdw r1, [r10-16]
  ldxdw r2, [r10-8]
  stxdw [r6+8], r2
  stxdw [r6+0], r1
  exit

fn_30198:
  stxdw [r10-16], r3
  stxdw [r10-8], r1
  mov64 r1, r2
  lsh64 r1, 32
  rsh64 r1, 32
  mov64 r7, r4
  lsh64 r7, 32
  rsh64 r7, 32
  mov64 r6, r2
  rsh64 r6, 32
  mov64 r3, r7
  mul64 r3, r1
  mul64 r7, r6
  mov64 r0, r4
  rsh64 r0, 32
  mov64 r9, r0
  mul64 r9, r1
  mov64 r1, r9
  add64 r1, r7
  mov64 r8, 1
  jlt r1, r9, jmp_30248
  mov64 r8, 0

jmp_30248:
  mov64 r9, r1
  lsh64 r9, 32
  mov64 r7, r3
  add64 r7, r9
  mov64 r9, 1
  jlt r7, r3, jmp_30280
  mov64 r9, 0

jmp_30280:
  ldxdw r3, [r10-8]
  stxdw [r3+0], r7
  rsh64 r1, 32
  lsh64 r8, 32
  or64 r8, r1
  ldxdw r1, [r10-16]
  mul64 r4, r1
  mul64 r5, r2
  mul64 r0, r6
  add64 r0, r8
  add64 r5, r4
  add64 r0, r9
  add64 r0, r5
  stxdw [r3+8], r0
  exit

fn_302f8:
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -16
  call fn_30040
  ldxdw r1, [r10-16]
  ldxdw r2, [r10-8]
  stxdw [r6+8], r2
  stxdw [r6+0], r1
  exit

fn_30340:
  stxdw [r10-192], r4
  mov64 r9, r2
  stxdw [r10-208], r1
  mov64 r1, r5
  rsh64 r1, 1
  stxdw [r10-184], r5
  mov64 r4, r5
  or64 r4, r1
  mov64 r1, r4
  rsh64 r1, 2
  or64 r4, r1
  mov64 r1, r4
  rsh64 r1, 4
  or64 r4, r1
  mov64 r1, r4
  rsh64 r1, 8
  or64 r4, r1
  mov64 r1, r4
  rsh64 r1, 16
  or64 r4, r1
  mov64 r1, r4
  rsh64 r1, 32
  or64 r4, r1
  lddw r1, 6148914691236517205
  xor64 r4, -1
  mov64 r2, r4
  rsh64 r2, 1
  and64 r2, r1
  sub64 r4, r2
  lddw r2, 3689348814741910323
  mov64 r7, r4
  and64 r7, r2
  rsh64 r4, 2
  and64 r4, r2
  add64 r7, r4
  mov64 r4, r7
  rsh64 r4, 4
  add64 r7, r4
  lddw r6, 1085102592571150095
  and64 r7, r6
  lddw r4, 72340172838076673
  mul64 r7, r4
  jne r3, 0, jmp_305e0
  mov64 r0, r9
  rsh64 r0, 1
  mov64 r5, r9
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r1
  sub64 r5, r0
  mov64 r8, r5
  and64 r8, r2
  rsh64 r5, 2
  and64 r5, r2
  add64 r8, r5
  mov64 r5, r8
  rsh64 r5, 4
  add64 r8, r5
  and64 r8, r6
  mul64 r8, r4
  rsh64 r8, 56
  add64 r8, 64
  ja jmp_306f8

jmp_305e0:
  mov64 r5, r3
  mov64 r0, r5
  rsh64 r0, 1
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 2
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 4
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 8
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 16
  or64 r5, r0
  mov64 r0, r5
  rsh64 r0, 32
  or64 r5, r0
  xor64 r5, -1
  mov64 r0, r5
  rsh64 r0, 1
  and64 r0, r1
  sub64 r5, r0
  mov64 r8, r5
  and64 r8, r2
  rsh64 r5, 2
  and64 r5, r2
  add64 r8, r5
  mov64 r5, r8
  rsh64 r5, 4
  add64 r8, r5
  and64 r8, r6
  mul64 r8, r4
  rsh64 r8, 56

jmp_306f8:
  rsh64 r7, 56
  ldxdw r5, [r10-184]
  jne r5, 0, jmp_30830
  ldxdw r7, [r10-192]
  mov64 r5, r7
  rsh64 r5, 1
  or64 r7, r5
  mov64 r5, r7
  rsh64 r5, 2
  or64 r7, r5
  mov64 r5, r7
  rsh64 r5, 4
  or64 r7, r5
  mov64 r5, r7
  rsh64 r5, 8
  or64 r7, r5
  mov64 r5, r7
  rsh64 r5, 16
  or64 r7, r5
  mov64 r5, r7
  rsh64 r5, 32
  or64 r7, r5
  xor64 r7, -1
  mov64 r5, r7
  rsh64 r5, 1
  and64 r5, r1
  sub64 r7, r5
  mov64 r1, r7
  rsh64 r1, 2
  and64 r7, r2
  and64 r1, r2
  add64 r7, r1
  mov64 r1, r7
  rsh64 r1, 4
  add64 r7, r1
  and64 r7, r6
  mul64 r7, r4
  rsh64 r7, 56
  add64 r7, 64

jmp_30830:
  mov64 r0, r3
  jle r7, r8, jmp_308a8
  mov64 r1, r8
  lsh64 r1, 32
  rsh64 r1, 32
  jle r1, 63, jmp_30930
  mov64 r6, r9
  ldxdw r2, [r10-192]
  div64 r6, r2
  mov64 r1, r6
  mul64 r1, r2
  sub64 r9, r1
  mov64 r4, 0
  mov64 r8, r9
  ja jmp_30a48

jmp_308a8:
  mov64 r6, 0
  mov64 r2, 1
  mov64 r1, 1
  ldxdw r3, [r10-192]
  jlt r9, r3, jmp_308d8
  mov64 r1, 0

jmp_308d8:
  ldxdw r7, [r10-208]
  ldxdw r4, [r10-184]
  jlt r0, r4, jmp_308f8
  mov64 r2, 0

jmp_308f8:
  ldxdw r4, [r10-184]
  jeq r0, r4, jmp_30910
  mov64 r1, r2

jmp_30910:
  and64 r1, 1
  jeq r1, 0, jmp_30a60
  mov64 r4, 0
  ja jmp_30aa8

jmp_30930:
  mov64 r1, r7
  lsh64 r1, 32
  rsh64 r1, 32
  jle r1, 95, jmp_30ad8
  ldxdw r4, [r10-192]
  mov64 r1, r4
  lsh64 r1, 32
  rsh64 r1, 32
  mov64 r2, r0
  div64 r2, r1
  mov64 r3, r2
  mul64 r3, r4
  sub64 r0, r3
  lsh64 r0, 32
  mov64 r8, r9
  rsh64 r8, 32
  or64 r0, r8
  div64 r0, r1
  mov64 r3, r0
  mul64 r3, r4
  sub64 r8, r3
  mov64 r4, r0
  rsh64 r4, 32
  or64 r4, r2
  lsh64 r9, 32
  rsh64 r9, 32
  lsh64 r8, 32
  or64 r8, r9
  lsh64 r0, 32
  mov64 r2, r8
  div64 r2, r1
  or64 r0, r2
  mul64 r2, r1
  sub64 r8, r2
  mov64 r6, r0

jmp_30a48:
  mov64 r0, 0
  ldxdw r7, [r10-208]
  ja jmp_30ab0

jmp_30a60:
  ldxdw r1, [r10-184]
  sub64 r0, r1
  mov64 r4, 0
  mov64 r6, 1
  mov64 r1, 1
  jlt r9, r3, jmp_30a98
  mov64 r1, 0

jmp_30a98:
  sub64 r0, r1
  sub64 r9, r3

jmp_30aa8:
  mov64 r8, r9

jmp_30ab0:
  stxdw [r7+16], r8
  stxdw [r7+0], r6
  stxdw [r7+24], r0
  stxdw [r7+8], r4
  exit

jmp_30ad8:
  stxdw [r10-216], r0
  mov64 r1, r7
  sub64 r1, r8
  lsh64 r1, 32
  rsh64 r1, 32
  jge r1, 32, jmp_30d10
  mov64 r6, 64
  sub64 r6, r8
  lsh64 r6, 32
  arsh64 r6, 32
  mov64 r1, r10
  add64 r1, -128
  ldxdw r8, [r10-192]
  mov64 r2, r8
  ldxdw r7, [r10-184]
  mov64 r3, r7
  mov64 r4, r6
  call fn_302f8
  mov64 r1, r10
  add64 r1, -144
  mov64 r2, r9
  ldxdw r3, [r10-216]
  mov64 r4, r6
  call fn_302f8
  ldxdw r1, [r10-128]
  ldxdw r6, [r10-144]
  div64 r6, r1
  mov64 r1, r10
  add64 r1, -160
  mov64 r2, r8
  mov64 r3, 0
  mov64 r4, r6
  mov64 r5, 0
  call fn_30150
  mov64 r1, r10
  add64 r1, -176
  mov64 r2, r7
  mov64 r3, 0
  mov64 r4, r6
  mov64 r5, 0
  call fn_30150
  ldxdw r1, [r10-176]
  ldxdw r3, [r10-152]
  mov64 r2, r3
  add64 r2, r1
  mov64 r1, 1
  jlt r2, r3, jmp_30c58
  mov64 r1, 0

jmp_30c58:
  ldxdw r3, [r10-168]
  add64 r3, r1
  ldxdw r1, [r10-160]
  ldxdw r7, [r10-208]
  ldxdw r0, [r10-216]
  jne r3, 0, jmp_31378
  mov64 r4, 1
  mov64 r3, 1
  jlt r9, r1, jmp_31358
  mov64 r3, 0
  jge r0, r2, jmp_31360

jmp_30cb0:
  jeq r0, r2, jmp_30cc0

jmp_30cb8:
  mov64 r3, r4

jmp_30cc0:
  and64 r3, 1
  jne r3, 0, jmp_31378
  sub64 r0, r2
  mov64 r4, 0
  mov64 r2, 1
  jlt r9, r1, jmp_30cf8
  mov64 r2, 0

jmp_30cf8:
  sub64 r0, r2
  sub64 r9, r1
  ja jmp_30aa8

jmp_30d10:
  mov64 r1, 96
  sub64 r1, r7
  stxdw [r10-248], r1
  mov64 r4, r1
  lsh64 r4, 32
  stxdw [r10-240], r4
  arsh64 r4, 32
  mov64 r1, r10
  add64 r1, -16
  ldxdw r2, [r10-192]
  ldxdw r3, [r10-184]
  call fn_302f8
  mov64 r5, 0
  ldxdw r1, [r10-16]
  lsh64 r1, 32
  rsh64 r1, 32
  add64 r1, 1
  stxdw [r10-256], r1
  mov64 r4, 0
  stxdw [r10-200], r9
  ldxdw r0, [r10-216]

jmp_30db8:
  stxdw [r10-232], r5
  stxdw [r10-224], r4
  mov64 r6, 64
  sub64 r6, r8
  mov64 r9, r6
  lsh64 r9, 32
  mov64 r8, r9
  arsh64 r8, 32
  mov64 r1, r10
  add64 r1, -32
  ldxdw r2, [r10-200]
  stxdw [r10-216], r0
  mov64 r3, r0
  mov64 r4, r8
  call fn_302f8
  ldxdw r2, [r10-32]
  rsh64 r9, 32
  ldxdw r1, [r10-240]
  rsh64 r1, 32
  jlt r9, r1, jmp_31420
  ldxdw r1, [r10-256]
  div64 r2, r1
  ldxdw r1, [r10-248]
  sub64 r6, r1
  and64 r6, 127
  mov64 r1, r10
  add64 r1, -48
  mov64 r8, r2
  mov64 r3, 0
  mov64 r4, r6
  call fn_30108
  mov64 r1, r10
  add64 r1, -64
  mov64 r2, r8
  mov64 r3, 0
  ldxdw r4, [r10-192]
  ldxdw r5, [r10-184]
  call fn_30150
  mov64 r1, r10
  add64 r1, -80
  ldxdw r2, [r10-64]
  ldxdw r3, [r10-56]
  mov64 r4, r6
  call fn_30108
  ldxdw r4, [r10-48]
  mov64 r1, r4
  ldxdw r2, [r10-232]
  add64 r1, r2
  mov64 r2, 1
  mov64 r3, 1
  jlt r1, r4, jmp_30f58
  mov64 r3, 0

jmp_30f58:
  ldxdw r4, [r10-80]
  ldxdw r0, [r10-216]
  ldxdw r6, [r10-200]
  jlt r6, r4, jmp_30f80
  mov64 r2, 0

jmp_30f80:
  ldxdw r5, [r10-72]
  sub64 r0, r5
  sub64 r0, r2
  ldxdw r2, [r10-40]
  sub64 r6, r4
  stxdw [r10-200], r6
  jne r0, 0, jmp_31120
  mov64 r5, r6
  rsh64 r5, 1
  mov64 r4, r6
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 2
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 4
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 8
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 16
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 32
  or64 r4, r5
  xor64 r4, -1
  mov64 r5, r4
  rsh64 r5, 1
  lddw r6, 6148914691236517205
  and64 r5, r6
  sub64 r4, r5
  mov64 r8, r4
  lddw r5, 3689348814741910323
  and64 r8, r5
  rsh64 r4, 2
  and64 r4, r5
  add64 r8, r4
  mov64 r4, r8
  rsh64 r4, 4
  add64 r8, r4
  lddw r4, 1085102592571150095
  and64 r8, r4
  lddw r4, 72340172838076673
  mul64 r8, r4
  rsh64 r8, 56
  add64 r8, 64
  ja jmp_31278

jmp_31120:
  mov64 r5, r0
  rsh64 r5, 1
  mov64 r4, r0
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 2
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 4
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 8
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 16
  or64 r4, r5
  mov64 r5, r4
  rsh64 r5, 32
  or64 r4, r5
  xor64 r4, -1
  mov64 r5, r4
  rsh64 r5, 1
  lddw r6, 6148914691236517205
  and64 r5, r6
  sub64 r4, r5
  mov64 r8, r4
  lddw r5, 3689348814741910323
  and64 r8, r5
  rsh64 r4, 2
  and64 r4, r5
  add64 r8, r4
  mov64 r4, r8
  rsh64 r4, 4
  add64 r8, r4
  lddw r4, 1085102592571150095
  and64 r8, r4
  lddw r4, 72340172838076673
  mul64 r8, r4
  rsh64 r8, 56

jmp_31278:
  ldxdw r4, [r10-224]
  add64 r2, r4
  add64 r2, r3
  mov64 r3, r7
  lsh64 r3, 32
  rsh64 r3, 32
  jle r3, r8, jmp_31600
  mov64 r3, r8
  lsh64 r3, 32
  rsh64 r3, 32
  mov64 r5, r1
  mov64 r4, r2
  jle r3, 63, jmp_30db8
  ldxdw r4, [r10-192]
  jeq r4, 0, jmp_31770
  ldxdw r8, [r10-200]
  mov64 r3, r8
  div64 r3, r4
  ldxdw r7, [r10-208]

jmp_31310:
  mov64 r6, r1
  add64 r6, r3
  mov64 r0, 0
  mov64 r3, 1
  jlt r6, r1, jmp_31340
  mov64 r3, 0

jmp_31340:
  mod64 r8, r4
  add64 r2, r3
  ja jmp_316e0

jmp_31358:
  jlt r0, r2, jmp_30cb0

jmp_31360:
  mov64 r4, 0
  jne r0, r2, jmp_30cb8
  ja jmp_30cc0

jmp_31378:
  ldxdw r3, [r10-184]
  add64 r3, r0
  stxdw [r10-184], r3
  mov64 r5, r8
  add64 r5, r9
  mov64 r3, 1
  mov64 r4, 1
  mov64 r9, r5
  jlt r5, r8, jmp_313c8
  mov64 r4, 0

jmp_313c8:
  ldxdw r0, [r10-184]
  add64 r0, r4
  sub64 r0, r2
  mov64 r8, r9
  jlt r8, r1, jmp_313f8
  mov64 r3, 0

jmp_313f8:
  sub64 r0, r3
  sub64 r8, r1
  add64 r6, -1
  mov64 r4, 0
  ja jmp_30ab0

jmp_31420:
  mov64 r6, r2
  mov64 r1, r10
  add64 r1, -96
  ldxdw r2, [r10-192]
  ldxdw r3, [r10-184]
  mov64 r4, r8
  call fn_302f8
  ldxdw r1, [r10-96]
  jeq r1, 0, jmp_31768
  mov64 r2, r6
  div64 r2, r1

jmp_31478:
  ldxdw r7, [r10-208]
  ldxdw r8, [r10-200]
  mov64 r1, r10
  add64 r1, -112
  mov64 r9, r2
  mov64 r3, 0
  ldxdw r6, [r10-192]
  mov64 r4, r6
  ldxdw r5, [r10-184]
  call fn_30150
  mov64 r4, 1
  ldxdw r1, [r10-112]
  mov64 r3, 1
  jlt r8, r1, jmp_314f0
  mov64 r3, 0

jmp_314f0:
  ldxdw r2, [r10-104]
  ldxdw r0, [r10-216]
  jlt r0, r2, jmp_31510
  mov64 r4, 0

jmp_31510:
  jeq r0, r2, jmp_31520
  mov64 r3, r4

jmp_31520:
  and64 r3, 1
  jeq r3, 0, jmp_316f0
  ldxdw r3, [r10-184]
  add64 r0, r3
  mov64 r3, r8
  add64 r3, r6
  mov64 r4, 1
  mov64 r5, 1
  jlt r3, r8, jmp_31570
  mov64 r5, 0

jmp_31570:
  add64 r0, r5
  ldxdw r6, [r10-232]
  add64 r9, r6
  add64 r9, -1
  mov64 r5, 1
  mov64 r8, r9
  jlt r9, r6, jmp_315b0
  mov64 r5, 0

jmp_315b0:
  sub64 r0, r2
  jlt r3, r1, jmp_315c8
  mov64 r4, 0

jmp_315c8:
  sub64 r0, r4
  sub64 r3, r1
  ldxdw r4, [r10-224]
  add64 r4, r5
  mov64 r6, r8
  mov64 r8, r3
  ja jmp_30ab0

jmp_31600:
  mov64 r4, 1
  mov64 r3, 1
  ldxdw r7, [r10-208]
  ldxdw r5, [r10-192]
  ldxdw r8, [r10-200]
  jlt r8, r5, jmp_31638
  mov64 r3, 0

jmp_31638:
  ldxdw r6, [r10-184]
  jlt r0, r6, jmp_31650
  mov64 r4, 0

jmp_31650:
  ldxdw r6, [r10-184]
  jeq r0, r6, jmp_31668
  mov64 r3, r4

jmp_31668:
  and64 r3, 1
  jne r3, 0, jmp_316d8
  mov64 r3, 1
  mov64 r4, 1
  jlt r8, r5, jmp_31698
  mov64 r4, 0

jmp_31698:
  ldxdw r6, [r10-184]
  sub64 r0, r6
  add64 r1, 1
  jeq r1, 0, jmp_316c0
  mov64 r3, 0

jmp_316c0:
  sub64 r0, r4
  add64 r2, r3
  sub64 r8, r5

jmp_316d8:
  mov64 r6, r1

jmp_316e0:
  mov64 r4, r2
  ja jmp_30ab0

jmp_316f0:
  ldxdw r5, [r10-232]
  mov64 r6, r5
  add64 r6, r9
  mov64 r4, 1
  mov64 r3, 1
  jlt r6, r5, jmp_31728
  mov64 r3, 0

jmp_31728:
  jlt r8, r1, jmp_31738
  mov64 r4, 0

jmp_31738:
  sub64 r0, r2
  sub64 r0, r4
  sub64 r8, r1
  ldxdw r4, [r10-224]
  add64 r4, r3
  ja jmp_30ab0

jmp_31768:
  ja jmp_31478

jmp_31770:
  ldxdw r7, [r10-208]
  ldxdw r8, [r10-200]
  ja jmp_31310

fn_31788:
  mov64 r6, r1
  mov64 r1, r10
  add64 r1, -32
  call fn_30340
  ldxdw r1, [r10-32]
  ldxdw r2, [r10-24]
  stxdw [r6+8], r2
  stxdw [r6+0], r1
  exit

.rodata
  data_0000: .byte 0x73, 0x72, 0x63, 0x2f, 0x6c, 0x69, 0x62, 0x2e, 0x72, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_0010: .byte 0x7a, 0xfd, 0x74, 0x2b, 0x27, 0xf7, 0x59, 0xe9, 0xc6, 0x70, 0x70, 0x3c, 0xd3, 0x9d, 0x81, 0x7a, 0xa0, 0x93, 0x0a, 0xce, 0x3b, 0x52, 0xd2, 0x6d, 0x54, 0xa0, 0x54, 0xdd, 0x23, 0x87, 0xbb, 0xd3
  data_0030: .byte 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_0050: .byte 0x8c, 0x97, 0x25, 0x8f, 0x4e, 0x24, 0x89, 0xf1, 0xbb, 0x3d, 0x10, 0x29, 0x14, 0x8e, 0x0d, 0x83, 0x0b, 0x5a, 0x13, 0x99, 0xda, 0xff, 0x10, 0x84, 0x04, 0x8e, 0x7b, 0xd8, 0xdb, 0xe9, 0xf8, 0x59, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x66, 0x20, 0x62, 0x6f, 0x75, 0x6e, 0x64, 0x73, 0x3a, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x65, 0x6e, 0x20, 0x69, 0x73, 0x20
  data_0090: .byte 0x06, 0xdd, 0xf6, 0xe1, 0xd7, 0x65, 0xa1, 0x93, 0xd9, 0xcb, 0xe1, 0x46, 0xce, 0xeb, 0x79, 0xac, 0x1c, 0xb4, 0x85, 0xed, 0x5f, 0x5b, 0x37, 0x91, 0x3a, 0x8c, 0xf5, 0x85, 0x7e, 0xff, 0x00, 0xa9
  data_00b0: .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_00d0: .byte 0x06, 0xd3, 0xed, 0xc4, 0xe5, 0x73, 0xad, 0xaf, 0xf3, 0xe5, 0x73, 0x89, 0x8b, 0x54, 0x5b, 0x1e, 0xe8, 0xd2, 0x8d, 0x05, 0x8e, 0xd9, 0x4e, 0x88, 0xe0, 0xbc, 0xb3, 0x32, 0x57, 0x1b, 0xea, 0x0a, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89
  data_0110: .byte 0x06, 0xdd, 0xf6, 0xe1, 0xee, 0x75, 0x8f, 0xde, 0x18, 0x42, 0x5d, 0xbc, 0xe4, 0x6c, 0xcd, 0xda, 0xb6, 0x1a, 0xfc, 0x4d, 0x83, 0xb9, 0x0d, 0x27, 0xfe, 0xbd, 0xf9, 0x28, 0xd8, 0xa1, 0x8b, 0xfc
  data_0130: .byte 0x23, 0xbf, 0x68, 0x11, 0x3e, 0xf9, 0x7b, 0xa5, 0xed, 0x03, 0xd3, 0x33, 0x6b, 0x91, 0x4d, 0x69, 0xff, 0x47, 0xbd, 0xe8, 0x17, 0x93, 0x8b, 0xa5, 0x51, 0x9b, 0xc1, 0x50, 0x16, 0xb0, 0x7e, 0x07
  data_0150: .byte 0x44, 0xd5, 0x80, 0x30, 0x3b, 0x1b, 0x54, 0xa0, 0xe4, 0x3a, 0x75, 0x4b, 0x00, 0xa9, 0xbf, 0xb5, 0x4b, 0xd5, 0xc7, 0xfe, 0x8c, 0x03, 0xbc, 0xc8, 0x09, 0x7b, 0xc6, 0xa8, 0xbf, 0x43, 0x01, 0xe8
  data_0170: .byte 0x9f, 0x32, 0xda, 0x9c, 0x1f, 0x6c, 0x12, 0x50, 0xc0, 0x9b, 0x73, 0x39, 0x23, 0xec, 0xc3, 0x67, 0x0d, 0x28, 0x63, 0xe7, 0xd4, 0x6a, 0x9c, 0x1c, 0xf4, 0x7d, 0xfd, 0xbb, 0xd0, 0xd5, 0xfe, 0x57
  str_0190: .ascii "assertion failed: min <= max/home/runner/work/platform-tools/platform-tools/out/rust/library/core/src/cmp.rs"
  data_01fc: .byte 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6e, 0x61, 0x6c, 0x20, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x3a, 0x20, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x65, 0x64, 0x20, 0x75, 0x6e, 0x72, 0x65, 0x61, 0x63, 0x68, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x20, 0x65, 0x6e, 0x64, 0x20, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x20
  data_0248: .byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x69, 0x76, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x62, 0x79, 0x20, 0x7a, 0x65, 0x72, 0x6f, 0x73, 0x72, 0x63, 0x2f, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x72, 0x73
  str_0274: .ascii "called `Result::unwrap()` on an `Err` value"
  str_029f: .ascii "fixed point square root of a negative numberinsufficient capacityCapacityError: "
  str_02ef: .ascii "from_bytes"
  data_02f9: .byte 0x66, 0x72, 0x6f, 0x6d, 0x5f, 0x62, 0x79, 0x74, 0x65, 0x73, 0x5f, 0x6d, 0x75, 0x74, 0x3e, 0x73, 0x72, 0x63, 0x2f, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6e, 0x61, 0x6c, 0x2e, 0x72, 0x73, 0x55, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x66, 0x69, 0x6e, 0x64, 0x20, 0x61, 0x20, 0x76, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d, 0x20, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x20, 0x62, 0x75, 0x6d, 0x70, 0x20, 0x73, 0x65, 0x65, 0x64, 0x73, 0x72, 0x63, 0x2f, 0x70, 0x75, 0x62, 0x6b, 0x65, 0x79, 0x2e, 0x72, 0x73, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x61, 0x63, 0x74, 0x2f, 0x73, 0x72, 0x63, 0x2f, 0x61, 0x72, 0x69, 0x74, 0x68, 0x2e, 0x72, 0x73, 0xf0, 0x9f, 0x90, 0x89
  data_036e: .long 0x90a69ff0
  data_0372: .long 0x8b909ff0
  data_0376: .long 0x80a69ff0
  data_037a: .long 0xb3909ff0
  data_037e: .long 0xb2909ff0
  data_0382: .long 0x88a69ff0
  data_0386: .long 0xa0909ff0
  data_038a: .long 0xac909ff0
  data_038e: .byte 0xf0, 0x9f, 0x90, 0x9f, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89
  data_0656: .byte 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0xf0, 0x9f, 0x90, 0x89, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x61, 0x63, 0x74, 0x2f, 0x73, 0x72, 0x63, 0x2f, 0x69, 0x6e, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x72, 0x73
  str_06c2: .ascii "poolv1Invalid Exp valuecontract/src/ops.rscontract/src/routers/dflow.rscontract/src/routers/jupiter.rscontract/src/stateupdate.rs"
  data_0743: .byte 0xdb, 0x40, 0xe1, 0x6e, 0xdd, 0xb6, 0x60, 0x65, 0x3c, 0x28, 0x56, 0x7e, 0xf1, 0xfd, 0xc5, 0xe9, 0x5b, 0x84, 0xfc, 0x90, 0x92, 0x2a, 0x74, 0x10, 0xad, 0x08, 0x87, 0xeb, 0x5e, 0x10, 0x2e, 0x18, 0x55, 0xdb, 0x2d, 0x10, 0xf2, 0x21, 0xb4, 0x8d, 0xa0, 0x26, 0x0a, 0xb0, 0x75, 0x9b, 0x23, 0xb2, 0x56, 0x79, 0x8d, 0x57, 0x27, 0x62, 0xf8, 0x17, 0xf3, 0xa1, 0x59, 0xc4, 0xb6, 0x39, 0x99, 0xd7, 0x93, 0x5e, 0xa6, 0xf0, 0x2d, 0xd5, 0x86, 0xa4, 0x7f, 0x85, 0xcb, 0xed, 0x66, 0x0f, 0xea, 0xd3, 0x86, 0x63, 0x43, 0x7e, 0xd9, 0xec, 0xcb, 0x0c, 0x22, 0x86, 0xd2, 0xb9, 0x4c, 0x2a, 0xa8, 0x3a, 0xb4, 0xdf, 0x4b, 0xe7, 0x69, 0xaf, 0x46, 0x6d, 0xa4, 0x39, 0xf8, 0x17, 0x6a, 0x3f, 0x48, 0xf0, 0x67, 0x3f, 0xad, 0x0c, 0x53, 0x21, 0x45, 0xb6, 0xe9, 0xa9, 0x56, 0xc8, 0xde, 0xc5, 0x4a, 0x49, 0x02, 0x03, 0xf5, 0xa6, 0xf9, 0xdd, 0x2e, 0x60, 0x31, 0x9c, 0xf0, 0x0a, 0x97, 0xd9, 0xd9, 0xcf, 0x41, 0x5e, 0x32, 0xc0, 0x07, 0xab, 0x9e, 0x5f, 0x62, 0xdb, 0x48, 0x18, 0x94, 0x8a, 0x30, 0x74, 0x47, 0x49, 0x54, 0x5f, 0x48, 0x41, 0x53, 0x48, 0x3a, 0x32, 0x39, 0x39, 0x33, 0x37, 0x66, 0x62, 0x62, 0x63, 0x33, 0x34, 0x66, 0x64, 0x62, 0x32, 0x39, 0x63, 0x35, 0x30, 0x38, 0x65, 0x37, 0x64, 0x37, 0x33, 0x36, 0x64, 0x62, 0x62, 0x62, 0x63, 0x36, 0x33, 0x37, 0x65, 0x37, 0x39, 0x37, 0x39, 0x66, 0x64, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x20, 0x69, 0x78, 0x6e, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x61, 0x63, 0x74, 0x2f, 0x73, 0x72, 0x63, 0x2f, 0x6c, 0x69, 0x62, 0x2e, 0x72, 0x73, 0x61, 0x72, 0x69, 0x74, 0x68, 0x6d, 0x65, 0x74, 0x69, 0x63, 0x20, 0x6f, 0x70, 0x65, 0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6f, 0x76, 0x65, 0x72, 0x66, 0x6c, 0x6f, 0x77
  data_0850: .byte 0x2a, 0x2a, 0x20, 0x50, 0x41, 0x4e, 0x49, 0x43, 0x4b, 0x45, 0x44, 0x20, 0x2a, 0x2a, 0x00, 0x00
  data_0860: .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_08c8: .byte 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_08e0: .byte 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_0928: .byte 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  data_0970: .byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x47, 0x72, 0x65, 0x61, 0x74, 0x65, 0x72, 0x41, 0x6e, 0x64, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x4e, 0x6f, 0x74, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x65, 0x64, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x53, 0x6c, 0x69, 0x63, 0x65, 0x57, 0x6f, 0x75, 0x6c, 0x64, 0x48, 0x61, 0x76, 0x65, 0x53, 0x6c, 0x6f, 0x70, 0x53, 0x69, 0x7a, 0x65, 0x4d, 0x69, 0x73, 0x6d, 0x61, 0x74, 0x63, 0x68, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x4d, 0x69, 0x73, 0x6d, 0x61, 0x74, 0x63, 0x68, 0x73, 0x72, 0x63, 0x2f, 0x6c, 0x69, 0x62, 0x2e, 0x72, 0x73, 0x55, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x66, 0x69, 0x6e, 0x64, 0x20, 0x61, 0x20, 0x76, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d, 0x20, 0x61, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x20, 0x62, 0x75, 0x6d, 0x70, 0x20, 0x73, 0x65, 0x65, 0x64
  str_0a50: .ascii "called `Option::unwrap()` on a `None` value but the index is : "
  str_0a8f: .ascii "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899attempt to divide by zerorange start index  out of range for slice of length slice index starts at  but ends at "
