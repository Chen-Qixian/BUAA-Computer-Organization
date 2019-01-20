.data
mem: .space 1000
.text
nop
lui $s0,0x4
ori $s1,$s0,0x1010
ori $s2,$s2,2
ori $v0,$zero,1
addu $t0,$s2,$s1
subu $t2,$s1,$s2
ori $t0,$zero,0x4
sw $t0,mem($t0)
lw $t1,mem($t0)
ori $t6,$zero,0x3
ori $t8,$zero,0xc
addu $t7,$t8,$t6
ori $a0,$zero,0x4
ori $a1,$zero,0x6
label:
subu $a1,$a1,0x1
beq $a1,$a0,label
subu $a1,$a1,0x1
beq $a1,$a0,label
nop