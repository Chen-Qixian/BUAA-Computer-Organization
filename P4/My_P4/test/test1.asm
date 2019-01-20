ori $a0,$0,0x1234
lui $a1,0x1234
nop
addu $a2,$a1,$a0
subu $a3,$a2,$a1
nop
ori $t0,$0,0
ori $t1,$0,1
ori $t2,$0,1
ori $t3,$0,2
beq $t1,$t2,target
sw $a3,0($t0)
beq $t1,$t3,target
sw $a3,4($t0)
target:
sw $a0,8($t0)
sw $a1,12($t0)
nop
sw $a2,16($t0)
sw $a3,20($t0)
lw $s0,8($t0)
lw $s1,12($t0)
lw $s2,16($t0)
lw $s3,20($t0)
beq $t1,$t3,end
sw $s0,24($t0)
sw $s1,28($t0)
end:
