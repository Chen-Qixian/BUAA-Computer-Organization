ori $t0,$0,0
nop
ori $a0,$0,1
nop
ori $a1,$0,2
nop
ori $a2,$0,0
nop
beq $a0,$0,target
nop
sw $a0,0($t0)
sw $a1,4($t0)
beq $a2,$0,target
nop
sw $a0,8($t0)
sw $a1,12($t0)
nop
target: sw $a0,16($t0)
  	sw $a1,20($t0)