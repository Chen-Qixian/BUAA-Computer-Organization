lui $t0, 1
lui $t1, 0xffff
lui $t2, 0xfffe

subu $0, $t2, $t1
subu $t2, $t1, $t2

ori $t0, $t0, 1
ori $t1, $t1, 0xffff

addu $t0, $t0, $t0
addu $t0, $t0, $t1
addu $t1, $t1, $t1

sll $t1, $t1, 1
sll $t1, $t1, 31

slt $t3, $0, $t0
slt $t3, $t1, $t1
lui $t3, 0xffff
slt $t4, $t3, $t1
slt $t4, $0, $t3

lui $t0, 0xfffe
ori $t0, 0xfdfc
lui $t1, 0x0102
ori $t1, 0x0304
ori $t2, $0, 4

sb $t0, -4($t2)
sb $t0, -3($t2)
sb $t0, 2($t2)
sb $t0, 3($t2)

sh $t0, -4($t2)
sh $t0, 2($t2)

sw $t0, -4($t2)
sw $t1, 0($t2)

lb $t0, -4($t2)
lb $t0, -3($t2)
lb $t0, -2($t2)
lb $t0, -1($t2)
lb $t0, 0($t2)
lb $t0, 1($t2)
lb $t0, 2($t2)
lb $t0, 3($t2)

lh $t0, -4($t2)
lh $t0, -2($t2)
lh $t0, 0($t2)
lh $t0, 2($t2)

lw $t0, -4($t2)
lw $t0, 0($t2)
jal beq
nop

beq1:
jal jal1
nop

beq2:
lui $t4, 0x3fff
jal end
nop

beq:
addu $t1, $t0, $0
beq $t0, $t1, beq1
nop

jal1:
addu $t1, $t1, $t1
beq $t0, $t1, beq2
nop
beq $t0, $t0, beq3
lui $t4, 0x3fff

beq3:
jr $ra
nop
end:
nop
