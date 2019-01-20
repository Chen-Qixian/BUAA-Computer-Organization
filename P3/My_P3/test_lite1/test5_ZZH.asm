ori $t0, $0, 0x8000
ori $t1, $0, 2
ori $0, $0, 1

addu $t2, $t0, $t1
addu $t3, $t2, $t1
addu $t1, $t1, $t1

subu $t4, $t2, $t0
subu $t5, $t3, $t1
subu $t6, $t0, $t1

sw $t0, -4($t1)
sw $t1, 0($t1)
sw $t2, 4($t1)
sw $t3, 8($t1)
sw $t4, 12($t1)

lw $t0, -4($t1)
lw $t1, 0($t1)
lw $t2, 4($t1)
lw $t3, 8($t1)
lw $t4, 12($t1)

lui $t7, 0xffff

ori $t7, $7, 1
ori $t8, $0, 2
ori $t9, $t9, 2

beq $t7, $t8, beq1
beq $t8, $t9, beq2

beq1:
    lui $a0, 1

beq2:
    lui $a1, 0xf000